/-!
`abstract_block … end`: the definitions of the block unfold inside it and nowhere else, so equations
about them are proved inside, and outside only their rewrite rules compute with them.
-/
namespace AbstractBlockTest

abstract_block

def double (n : Nat) : Nat := n + n

-- inside the block `double` unfolds
theorem double_two : double 2 = 4 := rfl

theorem double_eq (n : Nat) : double n = n + n := rfl

@[rewrite] theorem double_zero : double .zero = .zero := rfl

@[rewrite] theorem double_succ (n : Nat) : double n.succ = (double n).succ.succ := by
  unfold double; omega

end

-- outside the block `double` is stuck
example : double 3 = 6 := by
  fail_if_success exact rfl
  rw [show (3 : Nat) = Nat.zero.succ.succ.succ from rfl, double_succ, double_succ, double_succ, double_zero]

-- with its rules in force, it computes again, in the elaborator and in the kernel
rewrite_rules double_zero double_succ in
example : double 3 = 6 := rfl

-- `double_zero` is proved by `rfl` inside the block. Outside it, `simp` uses it with a proof, and
-- `dsimp` cannot use it, unless it is an active rule, which makes it definitional again.
example : double 3 = 6 := by
  simp [double_succ, double_zero]

example : double .zero = .zero := by
  fail_if_success dsimp only [double_zero]
  simp only [double_zero]

rewrite_rules double_zero in
example : double .zero = .zero := by
  dsimp only [double_zero]

-- Outside the block `double` has no equation theorems, because the kernel rejects its unfolding
-- there. `dsimp`, `simp`, `unfold` and `rw` say so, and `delta` does not unfold it.
/--
error: `double` is abstract outside its `abstract_block`, so it has no equation theorems here. Use its rewrite rules or equations proved inside the block.
---
error: `dsimp` made no progress
-/
#guard_msgs in
example (n : Nat) : double n = n + n := by dsimp [double]

/--
error: `double` is abstract outside its `abstract_block`, so it has no equation theorems here. Use its rewrite rules or equations proved inside the block.
---
error: `simp` made no progress
-/
#guard_msgs in
example (n : Nat) : double n = n + n := by simp [double]

/--
error: `double` is abstract outside its `abstract_block`, so it has no equation theorems here. Use its rewrite rules or equations proved inside the block.
-/
#guard_msgs in
example (n : Nat) : double n = n + n := by unfold double; rfl

/--
error: `double` is abstract outside its `abstract_block`, so it has no equation theorems here. Use its rewrite rules or equations proved inside the block.
-/
#guard_msgs in
example (n : Nat) : double n = n + n := by rw [double]

example (n : Nat) : double n = n + n := by
  fail_if_success delta double
  exact double_eq n

/-- error: `abstract_block` declares no definition -/
#guard_msgs in
abstract_block
theorem t : True := trivial
end

end AbstractBlockTest

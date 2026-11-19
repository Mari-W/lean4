/-!
`abstract_block … end`: the definitions of the block unfold inside it and nowhere else, so equations
about them are proved inside, and outside only their rewrite rules compute with them.
-/
namespace AbstractBlockTest

abstract_block

def double (n : Nat) : Nat := n + n

-- inside the block `double` unfolds
theorem double_two : double 2 = 4 := rfl

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

/-- error: `abstract_block` declares no definition -/
#guard_msgs in
abstract_block
theorem t : True := trivial
end

end AbstractBlockTest

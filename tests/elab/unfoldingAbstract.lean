import Lean

/-!
`unfolding_abstract f in <declaration>` reopens the abstract definition `f` for one declaration, as
`unfolding` does in Agda. `f` unfolds there in the elaborator, and the declaration, with the
auxiliary declarations elaborated with it, becomes a member of the block of `f`, so the kernel
unfolds `f` there too. Without it, `f` stays stuck.
-/
namespace UnfoldingAbstractTest

abstract_block

def double (n : Nat) : Nat := n + n

theorem double_eq (n : Nat) : double n = n + n := rfl

end

def notAbstract (n : Nat) : Nat := n

-- without `unfolding_abstract`, `double` is stuck
example : double 2 = 4 := by
  fail_if_success exact rfl
  fail_if_success decide
  rw [double_eq]

-- reopened, it unfolds in the elaborator and the kernel accepts the declaration
unfolding_abstract double in
theorem double_two : double 2 = 4 := rfl

unfolding_abstract double in
theorem double_three : double 3 = 6 := by decide

-- the declaration is now a member of the block of `double` in the kernel, which the `.olean` stores
-- (the elaborator's copy of the members misses theorems elaborated in parallel, but it never needs
-- them, because `unfolding_abstract` decides what unfolds in the elaborator)
open Lean in
#eval show CoreM Unit from do
  let env ← getEnv
  for ms? in [env.toKernelEnv.abstractMembers? ``double] do
    let some ms := ms? | throwError "`double` is not abstract"
    unless ms.contains ``double_two && ms.contains ``double_three && ms.contains ``double_eq do
      throwError "missing members in {ms}"

-- the scope ends with the declaration
example : double 2 = 4 := by
  fail_if_success exact rfl
  rw [double_eq]

-- the kernel rejects the unfolding in a declaration that is not a member
open Lean Elab Term in
/--
error: (kernel) declaration type mismatch, 'UnfoldingAbstractTest.bad' has type
  4 = 4
but it is expected to have type
  double 2 = 4
-/
#guard_msgs in
run_elab do
  let ty ← instantiateMVars (← elabTerm (← `(double 2 = 4)) none)
  let v ← instantiateMVars (← elabTerm (← `(Eq.refl (4 : Nat))) none)
  addDecl (.thmDecl { name := `UnfoldingAbstractTest.bad, levelParams := [], type := ty, value := v })

-- and accepts the same declaration added under `unfolding_abstract`
open Lean Elab Term in
unfolding_abstract double in
run_elab do
  let ty ← instantiateMVars (← elabTerm (← `(double 2 = 4)) none)
  let v ← instantiateMVars (← elabTerm (← `(Eq.refl (4 : Nat))) none)
  addDecl (.thmDecl { name := `UnfoldingAbstractTest.good, levelParams := [], type := ty, value := v })

-- `unfold`, `delta`, `simp` and `dsimp` unfold it by its definition, without equation theorems
unfolding_abstract double in
example (n : Nat) : double n = n + n := by unfold double; rfl

unfolding_abstract double in
example (n : Nat) : double n = n + n := by delta double; rfl

unfolding_abstract double in
example (n : Nat) : double (n + 1) = double n + 2 := by simp [double]; omega

unfolding_abstract double in
example (n : Nat) : double n = n + n := by dsimp only [double]

-- auxiliary declarations elaborated with the declaration are members too: the abstracted proof
-- `half.proof_1`, the matcher, and the `where` helper
unfolding_abstract double in
def half : (n : Nat) → Fin (double n + 1)
  | 0 => ⟨0, by decide⟩
  | n + 1 => ⟨n, by show n < n + 1 + (n + 1) + 1; omega⟩

unfolding_abstract double in
theorem double_add (a b : Nat) : double (a + b) = double a + double b := helper a b
where helper (a b : Nat) : double (a + b) = double a + double b :=
  show a + b + (a + b) = a + a + (b + b) by omega

open Lean in
#eval show CoreM Unit from do
  let some ms := (← getEnv).toKernelEnv.abstractMembers? ``double | throwError "not abstract"
  unless ms.contains ``half && ms.contains ``double_add.helper do
    throwError "missing members in {ms}"

-- a section-wide `unfolding_abstract` reopens it for every declaration of the section
section
unfolding_abstract double
theorem double_four : double 4 = 8 := rfl
theorem double_five : double 5 = 10 := rfl
end

example : double 4 = 8 := by
  fail_if_success exact rfl
  exact double_four

-- Unfolding is transitive. `quad` is abstract and may unfold `double`, so reopening `quad` reopens
-- `double` too, because the body of `quad` was checked with `double` unfolded.
abstract_block

unfolding_abstract double in
def quad (n : Nat) : Nat := double (double n)

unfolding_abstract double in
theorem quad_eq (n : Nat) : quad n = 4 * n := by unfold quad double; omega

end

example : quad 1 = 4 := by
  fail_if_success exact rfl
  exact quad_eq 1

unfolding_abstract quad in
theorem quad_one : quad 1 = 4 := rfl

-- only abstract definitions can be reopened
/--
error: `notAbstract` is not abstract, only definitions made abstract by an `abstract_block` can be reopened
-/
#guard_msgs in
unfolding_abstract notAbstract in
theorem t : True := trivial

end UnfoldingAbstractTest

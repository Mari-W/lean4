import Lean
/-!
Rewrite rules marked `@[rewrite ↓]` fire before their head is unfolded. Unmarked rules on a head
that unfolds fire only where the unfolding gets stuck. Each case is checked by the elaborator and
by the kernel alone (`kernel_rfl`), and both agree.
-/
namespace RewriteRulesBeforeDeltaTest
open Lean Elab Command Meta

/-- `kernel_rfl n : ∀ xs, l = r` adds `n : ∀ xs, l = r := fun xs => rfl` straight to the kernel, bypassing the elaborator. -/
elab "kernel_rfl " name:ident " : " t:term : command => do
  let (type, value) ← liftTermElabM do
    let type ← instantiateMVars (← Term.elabTerm t none)
    Term.synthesizeSyntheticMVarsNoPostponing
    let type ← instantiateMVars type
    let value ← forallTelescope type fun xs body => do
      let some (_, l, _) := body.eq? | throwError "not an equation"
      mkLambdaFVars xs (← mkEqRefl l)
    return (type, value)
  liftCoreM <| addDecl <| .thmDecl { name := name.getId, levelParams := [], type, value }

def beforeDelta? (n : Name) : CommandElabM (Option (Nat × Bool)) := do
  return ((← getEnv).rewriteRule? n).map fun r => (r.prio, r.beforeDelta)

/-! ## A marked rule fires before unfolding, where unfolding would give a value -/

def f (l : List Nat) : List Nat × Nat := (l ++ [], 0)

@[rewrite ↓] theorem f_eq (l : List Nat) : f l = (l, 0) := by simp [f]

rewrite_rules f_eq in
example (l : List Nat) : f l = (l, 0) := rfl

rewrite_rules f_eq in
kernel_rfl f_kernel : f [1] = ([1], 0)

-- `f [1] = ([1], 0)` holds by computation as well; with a variable it needs the rule
rewrite_rules f_eq in
kernel_rfl f_kernel' : ∀ l, f l = (l, 0)

/-- info: some (1000, true) -/
#guard_msgs in
#eval beforeDelta? ``f_eq

/-! ## An unmarked rule does not, because the unfolding ends in a constructor, a value -/

def f' (l : List Nat) : List Nat × Nat := (l ++ [], 0)

@[rewrite] theorem f'_eq (l : List Nat) : f' l = (l, 0) := by simp [f']

rewrite_rules f'_eq in
example (l : List Nat) : f' l = (l, 0) := by
  fail_if_success exact rfl
  exact f'_eq l

/--
error: (kernel) declaration type mismatch, 'f'_kernel' has type
  ∀ (l : List Nat), f' l = f' l
but it is expected to have type
  ∀ (l : List Nat), f' l = (l, 0)
-/
#guard_msgs in
rewrite_rules f'_eq in
kernel_rfl f'_kernel : ∀ l, f' l = (l, 0)

/-! ## The same head on both sides: the rule fires only if it fires on both -/

def p (_ : Bool) (l : List Nat) : List Nat × Nat := (l ++ [], 0)

@[rewrite ↓] theorem p_true (l : List Nat) : p true l = (l, 0) := by simp [p]

-- `p true l` and `p false l` both unfold to `(l ++ [], 0)`. Firing on the left alone would compare
-- `(l, 0)` with `(l ++ [], 0)` and fail.
rewrite_rules p_true in
example (l : List Nat) : p true l = p false l := rfl

rewrite_rules p_true in
kernel_rfl p_kernel : ∀ l, p true l = p false l

/-! ## Marked rules match syntactically -/

-- `p (!false) l` reduces to `p true l`, but the rule does not reduce arguments, so it does not fire
rewrite_rules p_true in
example (l : List Nat) : p (!false) l = (l, 0) := by
  fail_if_success exact rfl
  exact p_true l

/--
error: (kernel) declaration type mismatch, 'p_kernel'' has type
  ∀ (l : List Nat), p (!false) l = p (!false) l
but it is expected to have type
  ∀ (l : List Nat), p (!false) l = (l, 0)
-/
#guard_msgs in
rewrite_rules p_true in
kernel_rfl p_kernel' : ∀ l, p (!false) l = (l, 0)

/-! ## Priority across both placements -/

def q (l : List Nat) : List Nat := l ++ []

@[rewrite ↓ 100] theorem q_id (l : List Nat) : q l = l := List.append_nil l
@[rewrite 2000] theorem q_def (l : List Nat) : q l = l ++ [] := rfl

-- `q` unfolds, so the marked rule fires first, before `q_def` gets a turn where unfolding is stuck
rewrite_rules q_id q_def in
example (l : List Nat) : q l = l := rfl

rewrite_rules q_id q_def in
kernel_rfl q_kernel : q [1, 2] = [1, 2]

abstract_block
def r (l : List Nat) : List Nat := l ++ []
@[rewrite ↓ 100] theorem r_id (l : List Nat) : r l = l := List.append_nil l
@[rewrite 2000] theorem r_def (l : List Nat) : r l = l ++ [] := rfl
end

-- `r` is abstract here and never unfolds, so all its rules fire at once, by priority: `r_def` wins
rewrite_rules r_id r_def in
example (l : List Nat) : r l = l ++ [] := rfl

rewrite_rules r_id r_def in
example (l : List Nat) : r l = l := by
  fail_if_success exact rfl
  exact r_id l

/-! ## The whnf cache holds the active rule set, also for a marked rule -/

def withRules (rules : Array Name) (x : MetaM α) : MetaM α :=
  withReader (fun ctx => { ctx with rewriteSet? := some rules }) x

/-- info: [([1] ++ [], 0), ([1], 0), ([1] ++ [], 0)] -/
#guard_msgs in
run_meta do
  let e := mkApp (mkConst ``f) (toExpr [(1 : Nat)])
  let r1 ← withRules #[] (whnf e)
  let r2 ← withRules #[``f_eq] (whnf e)
  let r3 ← withRules #[] (whnf e)
  logInfo m!"{[r1, r2, r3]}"

/-! ## Attribute arguments -/

/-- error: `f'_eq` is already a rewrite rule that fires only when unfolding its head gets stuck -/
#guard_msgs in
attribute [rewrite ↓] f'_eq

/-- info: [some (100, true), some (2000, false)] -/
#guard_msgs in
#eval return [← beforeDelta? ``q_id, ← beforeDelta? ``q_def]

@[global_rewrite ↓] theorem g_rule : f [] = ([], 0) := rfl

/-- info: some (1000, true) -/
#guard_msgs in
#eval beforeDelta? ``g_rule

end RewriteRulesBeforeDeltaTest

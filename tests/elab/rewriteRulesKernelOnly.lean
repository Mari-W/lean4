import Lean
/-!
Rules registered with `@[rewrite kernel]` are ordinary rules for the kernel, but the elaborator never
fires them. `whnf`, `isDefEq`, `decide`, `rfl` and `simp` behave as if the rule did not exist, also
in declarations that inherit the rule, while `decide +kernel` and declarations added straight to the
kernel (`kernel_rfl`) reduce through it.
-/
namespace RewriteRulesKernelOnlyTest
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

/-- The priority, the flag `↓` and whether only the kernel fires the rule. -/
def ruleFlags? (n : Name) : CommandElabM (Option (Nat × Bool × Bool)) := do
  let env ← getEnv
  return (env.rewriteRule? n).map fun r => (r.prio, r.beforeDelta, (getKernelOnlyRewriteRules env).contains n)

/-! ## A hidden definition: the kernel computes with the rule, the elaborator does not -/

abstract_block
def double (n : Nat) : Nat := n + n
theorem double_def (n : Nat) : double n = n + n := rfl
def triple (n : Nat) : Nat := n + n + n
theorem triple_def (n : Nat) : triple n = n + n + n := rfl
end

attribute [rewrite kernel] double_def
attribute [rewrite] triple_def

/-- info: some (1000, false, true) -/
#guard_msgs in
#eval ruleFlags? ``double_def

/-- info: some (1000, false, false) -/
#guard_msgs in
#eval ruleFlags? ``triple_def

-- the control: a rule the elaborator fires
rewrite_rules triple_def in
example : triple 2 = 6 := rfl

rewrite_rules triple_def in
example : triple 2 = 6 := by decide

-- the kernel-only rule: `rfl` and `decide` fail in the elaborator, `decide +kernel` succeeds
rewrite_rules double_def in
theorem double_two : double 2 = 4 := by
  fail_if_success exact rfl
  fail_if_success decide
  decide +kernel

rewrite_rules double_def in
kernel_rfl double_kernel : ∀ n, double n = n + n

-- without the rule in force the kernel rejects the same declaration
/--
error: (kernel) declaration type mismatch, 'double_kernel'' has type
  ∀ (n : Nat), double n = double n
but it is expected to have type
  ∀ (n : Nat), double n = n + n
-/
#guard_msgs in
kernel_rfl double_kernel' : ∀ n, double n = n + n

/-- `whnf` of `c 2` in Meta, under the rules of the scope. -/
def whnfOf (c : Name) : CommandElabM Expr :=
  liftTermElabM do whnf (mkApp (mkConst c) (mkNatLit 2))

def showWhnf (c : Name) : CommandElabM Unit := do
  logInfo m!"{← whnfOf c}"

-- `whnf` in Meta stays stuck at `double 2`, and fires the ordinary rule of `triple`
/-- info: double 2 -/
#guard_msgs in
rewrite_rules double_def in
#eval showWhnf ``double

/-- info: true -/
#guard_msgs in
rewrite_rules triple_def in
#eval return (← whnfOf ``triple) != mkApp (mkConst ``triple) (mkNatLit 2)

-- the elaborator's active rule set leaves the kernel-only rule out, the kernel's set keeps it
/-- info: (#[], #[`RewriteRulesKernelOnlyTest.double_def]) -/
#guard_msgs in
rewrite_rules double_def in
#eval return (← liftTermElabM getActiveRewriteRules, getExplicitRewriteRules (← getEnv))

/-- info: 'RewriteRulesKernelOnlyTest.double_two' is checked under rewrite rules: [double_def] -/
#guard_msgs in
#print rules double_two

-- a declaration that uses `double_two` inherits the rule in the kernel, not in the elaborator
theorem double_two' : double 2 = 4 ∧ True := by
  fail_if_success exact ⟨rfl, trivial⟩
  exact ⟨double_two, trivial⟩

/-- info: 'RewriteRulesKernelOnlyTest.double_two'' is checked under rewrite rules: [double_def] -/
#guard_msgs in
#print rules double_two'

/-! ## A rule that fires before unfolding -/

def f (l : List Nat) : List Nat × Nat := (l ++ [], 0)

@[rewrite ↓ kernel] theorem f_eq (l : List Nat) : f l = (l, 0) := by simp [f]

/-- info: some (1000, true, true) -/
#guard_msgs in
#eval ruleFlags? ``f_eq

-- with `@[rewrite ↓]` this is `rfl` (`rewriteRulesBeforeDelta.lean`), here only the kernel sees it
rewrite_rules f_eq in
example (l : List Nat) : f l = (l, 0) := by
  fail_if_success exact rfl
  fail_if_success simp only
  exact f_eq l

rewrite_rules f_eq in
kernel_rfl f_kernel : ∀ l, f l = (l, 0)

-- `whnf` in Meta unfolds `f` as usual
/-- info: ([1] ++ [], 0) -/
#guard_msgs in
rewrite_rules f_eq in
#eval show CommandElabM Unit from do
  let e ← liftTermElabM do
    whnf (mkApp (mkConst ``f) (← Term.elabTerm (← `(([1] : List Nat))) none))
  logInfo m!"{e}"

/-! ## Priority, `global_rewrite`, and the flag on a registered rule -/

def g (n : Nat) : Nat := n
@[rewrite ↓ kernel 500] theorem g_eq (n : Nat) : g n = n := rfl

/-- info: some (500, true, true) -/
#guard_msgs in
#eval ruleFlags? ``g_eq

def h (n : Nat) : Nat := n
@[global_rewrite kernel] theorem h_eq (n : Nat) : h n = n := rfl
def h' (n : Nat) : Nat := n
@[global_rewrite ↓ kernel] theorem h'_eq (n : Nat) : h' n = n := rfl

/-- info: (some (1000, false, true), some (1000, true, true)) -/
#guard_msgs in
#eval return (← ruleFlags? ``h_eq, ← ruleFlags? ``h'_eq)

-- `h_eq` and `h'_eq` are in force globally but not active in the elaborator
/-- info: #[] -/
#guard_msgs in
#eval liftTermElabM getActiveRewriteRules

-- putting a kernel-only rule in force again without `kernel` keeps it kernel-only
attribute [local rewrite] g_eq
/-- info: some (500, true, true) -/
#guard_msgs in
#eval ruleFlags? ``g_eq

def k (n : Nat) : Nat := n
@[rewrite] theorem k_eq (n : Nat) : k n = n := rfl

/-- error: `k_eq` is already a rewrite rule that the elaborator fires -/
#guard_msgs in
attribute [local rewrite kernel] k_eq

end RewriteRulesKernelOnlyTest

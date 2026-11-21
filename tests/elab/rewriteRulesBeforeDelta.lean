import Lean
/-!
Rewrite rules marked `@[rewrite ↓]` fire before their head is unfolded. Unmarked rules on a head
that unfolds fire only where the unfolding gets stuck. Each case is checked by the elaborator and
by the kernel alone (`kernel_rfl`), and both agree.
-/
namespace RewriteRulesBeforeDeltaTest
open Lean Elab Command Meta
universe u v

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

/-! ## A constructor key reduces its argument first, every other argument matches syntactically -/

-- The key of `p_true` is the constructor `true` at the first argument. `!false` is not in
-- constructor form, so it is reduced to `true` before the key test, and the rule fires.
rewrite_rules p_true in
example (l : List Nat) : p (!false) l = (l, 0) := rfl

rewrite_rules p_true in
kernel_rfl p_kernel' : ∀ l, p (!false) l = (l, 0)

def p2 (_ _ : Bool) (l : List Nat) : List Nat × Nat := (l ++ [], 0)

@[rewrite ↓] theorem p2_tt (l : List Nat) : p2 true true l = (l, 0) := by simp [p2]

rewrite_rules p2_tt in
example (l : List Nat) : p2 (!false) true l = (l, 0) := rfl

-- the second argument is not the key, so `!false` there is not reduced and the rule does not fire
rewrite_rules p2_tt in
example (l : List Nat) : p2 true (!false) l = (l, 0) := by
  fail_if_success exact rfl
  exact p2_tt l

/--
error: (kernel) declaration type mismatch, 'p2_kernel' has type
  ∀ (l : List Nat), p2 true (!false) l = p2 true (!false) l
but it is expected to have type
  ∀ (l : List Nat), p2 true (!false) l = (l, 0)
-/
#guard_msgs in
rewrite_rules p2_tt in
kernel_rfl p2_kernel : ∀ l, p2 true (!false) l = (l, 0)

-- a key argument that reduces to another constructor, or to no constructor, fires nothing
rewrite_rules p_true in
example (l : List Nat) : p (!true) l = (l ++ [], 0) := rfl

rewrite_rules p_true in
example (b : Bool) (l : List Nat) : p (!b) l = (l ++ [], 0) := rfl

/-! ## A `Nat` literal at a constructor key counts as `Nat.zero` or `Nat.succ` -/

def z : Nat → List Nat → List Nat × Nat
  | 0, l => (l ++ [], 0)
  | _ + 1, _ => ([], 1)

@[rewrite ↓] theorem z_zero (l : List Nat) : z .zero l = (l, 0) := by simp [z]

rewrite_rules z_zero in
example (l : List Nat) : z 0 l = (l, 0) := rfl

rewrite_rules z_zero in
example (l : List Nat) : z (id 0) l = (l, 0) := rfl

rewrite_rules z_zero in
example (l : List Nat) : z (id 3) l = ([], 1) := rfl

rewrite_rules z_zero in
kernel_rfl z_kernel : ∀ l, z 0 l = (l, 0)

rewrite_rules z_zero in
kernel_rfl z_kernel' : ∀ l, z (id 0) l = (l, 0)

/-! ## A rule on `cond` fires on a key argument that computes -/

def yes (_ : List Nat) : Bool := true
def no (_ : List Nat) : Bool := false

@[rewrite ↓] theorem cond_tt {α : Sort u} (a b : α) : cond true a b = a := rfl

-- `yes l` is reduced to `true` before the key test, so `cond_tt` fires. With no firing left in
-- the budget the elaborator reports it.
/-- error: rewrite rule budget exhausted: `cond_tt` would fire past 0 firings in this declaration -/
#guard_msgs in
set_option maxRewriteFirings 0 in
rewrite_rules cond_tt in
example (l : List Nat) : cond (yes l) l [] = l := rfl

-- `no l` is reduced to `false`, which no rule has as its key, so `cond` unfolds
set_option maxRewriteFirings 0 in
rewrite_rules cond_tt in
example (l : List Nat) : cond (no l) [] l = l := rfl

rewrite_rules cond_tt in
example (l : List Nat) : cond (yes l) l [] = l := rfl

rewrite_rules cond_tt in
kernel_rfl cond_kernel : ∀ l, cond (yes l) l [] = l

/-! ## A list fold -/

def two (n : Nat) : List Nat := [n, n]

@[rewrite ↓] theorem foldr_nil' {α : Type u} {β : Type v} (f : α → β → β) (i : β) :
    List.foldr f i [] = i := rfl
@[rewrite ↓] theorem foldr_cons' {α : Type u} {β : Type v} (f : α → β → β) (i : β) (a : α)
    (l : List α) : List.foldr f i (a :: l) = f a (List.foldr f i l) := rfl

-- `two n` is reduced to `n :: [n]` before the key test, and every step of the fold is a firing
rewrite_rules foldr_nil' foldr_cons' in
example (f : Nat → Nat → Nat) (n : Nat) : List.foldr f 0 (two n) = f n (f n 0) := rfl

rewrite_rules foldr_nil' foldr_cons' in
kernel_rfl foldr_kernel : ∀ (f : Nat → Nat → Nat) n, List.foldr f 0 (two n) = f n (f n 0)

rewrite_rules foldr_nil' foldr_cons' in
kernel_rfl foldr_kernel' : List.foldr (· + ·) 0 (List.map (· * 2) [1, 2, 3]) = 12

/-- error: rewrite rule budget exhausted: `foldr_cons'` would fire past 0 firings in this declaration -/
#guard_msgs in
set_option maxRewriteFirings 0 in
rewrite_rules foldr_nil' foldr_cons' in
example (f : Nat → Nat → Nat) (n : Nat) : List.foldr f 0 (two n) = f n (f n 0) := rfl

/-! ## The firing budget counts per declaration and stops a looping set of marked rules -/

def loopA (n : Nat) : Nat := n
def loopB (n : Nat) : Nat := n

@[rewrite ↓] theorem loopA_B (n : Nat) : loopA n = loopB n := rfl
@[rewrite ↓] theorem loopB_A (n : Nat) : loopB n = loopA n := rfl

/-- error: rewrite rule budget exhausted: `loopA_B` would fire past 100 firings in this declaration -/
#guard_msgs in
set_option maxRewriteFirings 100 in
rewrite_rules loopA_B loopB_A in
example : loopA 0 = 0 := rfl

/--
error: (kernel) rewrite rule budget exhausted: 'RewriteRulesBeforeDeltaTest.loopA_B' would fire past 16777216 firings in this declaration
-/
#guard_msgs in
rewrite_rules loopA_B loopB_A in
kernel_rfl loop_kernel : loopA 0 = 0

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

-- the same with a key argument that is reduced before the key test
/-- info: [([1] ++ [], 0), ([1], 0), ([1] ++ [], 0), ([1], 0)] -/
#guard_msgs in
run_meta do
  let l := toExpr [(1 : Nat)]
  let e := mkApp2 (mkConst ``p) (mkApp (mkConst ``yes) l) l
  let r1 ← withRules #[] (whnf e)
  let r2 ← withRules #[``p_true] (whnf e)
  let r3 ← withRules #[] (whnf e)
  let r4 ← withRules #[``p_true] (whnf e)
  logInfo m!"{[r1, r2, r3, r4]}"

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

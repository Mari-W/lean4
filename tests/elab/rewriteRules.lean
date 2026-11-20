import Lean
/-!
Kernel rewrite rules end to end: a rule on an axiom head (Symbol style), a rule on a `def` that
fires only when its unfolding gets stuck, a declaration that checks only because of a rule, scoping with
`rewrite_rules … in` and scoped and local attributes, propagation to dependents, `#print rules`,
priorities, the firing budget, the checks at registration, non-linear rules, and global rules.
-/
namespace RewriteRulesTest
open Lean Elab Command

/-! ## Symbol style: an axiom head whose only computation is its rules -/

axiom plus : Nat → Nat → Nat
axiom plus_zero_ax (n : Nat) : plus n Nat.zero = n
axiom plus_succ_ax (n m : Nat) : plus n (Nat.succ m) = Nat.succ (plus n m)

@[rewrite] theorem plus_zero (n : Nat) : plus n Nat.zero = n := plus_zero_ax n
@[rewrite] theorem plus_succ (n m : Nat) : plus n (Nat.succ m) = Nat.succ (plus n m) := plus_succ_ax n m

/-! ## A declaration that checks only because of the rules, and scoping -/

rewrite_rules plus_zero plus_succ in
theorem plus_two_three : plus 2 3 = 5 := rfl

/-- info: 'RewriteRulesTest.plus_two_three' is checked under rewrite rules: [plus_succ, plus_zero] -/
#guard_msgs in
#print rules plus_two_three

-- Outside the scope the rules are not in force: the elaborator rejects the proof.
/--
error: Not a definitional equality: the left-hand side
  plus 2 3
is not definitionally equal to the right-hand side
  5
---
error: Type mismatch
  rfl
has type
  ?m.9 = ?m.9
but is expected to have type
  plus 2 3 = 5
-/
#guard_msgs in
theorem plus_two_three' : plus 2 3 = 5 := rfl

-- The kernel rejects it too, bypassing the elaborator.
def addRflDecl (name : Name) (type : Expr) (val : Expr) : CommandElabM Unit :=
  liftCoreM <| addDecl <| .thmDecl { name, levelParams := [], type, value := val }

def plusEq : Expr :=
  mkApp3 (mkConst ``Eq [1]) (mkConst ``Nat)
    (mkApp2 (mkConst ``plus) (mkNatLit 2) (mkNatLit 3)) (mkNatLit 5)

def rflFive : Expr := mkApp2 (mkConst ``Eq.refl [1]) (mkConst ``Nat) (mkNatLit 5)

/--
error: (kernel) declaration type mismatch, 'RewriteRulesTest.kernelOutside' has type
  5 = 5
but it is expected to have type
  plus 2 3 = 5
-/
#guard_msgs in
run_cmd addRflDecl `RewriteRulesTest.kernelOutside plusEq rflFive

rewrite_rules plus_zero plus_succ in
run_cmd addRflDecl `RewriteRulesTest.kernelInside plusEq rflFive

/-! ## Propagation: a use of a declaration re-enables its rules -/

rewrite_rules plus_zero plus_succ in
noncomputable def five : Nat := plus 2 3

-- `five` was checked under the rules, so `five_eq` is checked under them as well.
theorem five_eq : five = 5 := rfl

/-- info: 'RewriteRulesTest.five_eq' is checked under rewrite rules: [plus_succ, plus_zero] -/
#guard_msgs in
#print rules five_eq

/-- info: 'RewriteRulesTest.plus' is checked under no rewrite rules -/
#guard_msgs in
#print rules plus

/-! ## Scoped and local rules -/

namespace Scoped

axiom twice : Nat → Nat
axiom twice_ax (n : Nat) : twice n = n + n

@[scoped rewrite] theorem twice_eq (n : Nat) : twice n = n + n := twice_ax n

-- A scoped rule is in force in its namespace,
example : twice 2 = 4 := rfl

end Scoped

-- and only where the namespace is open.
/--
error: Type mismatch
  rfl
has type
  ?m.7 = ?m.7
but is expected to have type
  Scoped.twice 2 = 4
-/
#guard_msgs in
example : Scoped.twice 2 = 4 := rfl

open Scoped in
example : twice 2 = 4 := rfl

section
attribute [local rewrite] plus_zero plus_succ

theorem plus_one_one : plus 1 1 = 2 := rfl

end

/-- info: 'RewriteRulesTest.plus_one_one' is checked under rewrite rules: [plus_succ, plus_zero] -/
#guard_msgs in
#print rules plus_one_one

/-! ## A rule on a `def` fires only when unfolding gets stuck -/

def swap (p : Nat × Nat) : Nat × Nat := (p.2, p.1)

@[rewrite] theorem swap_mk (a b : Nat) : swap (a, b) = (b, a) := rfl

-- The kernel's weak head normal form of `swap (1, 2)` unfolds `swap` to a pair, a value, so the rule
-- does not fire. The global section below has a rule that fires where unfolding gets stuck.
def kernelWhnf (e : Expr) (rules : Array Name) : CommandElabM Unit := do
  let r ← ofExceptKernelException <| Kernel.whnf (← getEnv) {} e rules
  logInfo m!"{r}"

def swapOneTwo : Expr :=
  mkApp (mkConst ``swap) (mkApp4 (mkConst ``Prod.mk [0, 0]) (mkConst ``Nat) (mkConst ``Nat) (mkNatLit 1) (mkNatLit 2))

/-- info: ((1, 2).snd, (1, 2).fst) -/
#guard_msgs in
run_cmd kernelWhnf swapOneTwo #[]

/-- info: ((1, 2).snd, (1, 2).fst) -/
#guard_msgs in
run_cmd kernelWhnf swapOneTwo #[``swap_mk]

/-! ## Priorities: of two overlapping rules on one head, the higher priority fires -/

axiom pick : Nat → Nat
axiom pick_any_ax (n : Nat) : pick n = 0
axiom pick_zero_ax : pick Nat.zero = 0

-- Both rules match `pick Nat.zero`. The kernel's weak head normal form of `pick_any`'s right-hand
-- side is the literal `0`, that of `pick_zero`'s is the constructor `Nat.zero`.
@[rewrite 10] theorem pick_any (n : Nat) : pick n = 0 * n := (pick_any_ax n).trans (Nat.zero_mul n).symm
@[rewrite 2000] theorem pick_zero : pick Nat.zero = Nat.zero := pick_zero_ax

def pickZero : Expr := mkApp (mkConst ``pick) (mkConst ``Nat.zero)

/-- info: Nat.zero -/
#guard_msgs in
run_cmd kernelWhnf pickZero #[``pick_any, ``pick_zero]

/-- info: 0 -/
#guard_msgs in
run_cmd kernelWhnf pickZero #[``pick_any]

-- The elaborator follows the same order.
/-- info: Nat.zero -/
#guard_msgs in
rewrite_rules pick_any pick_zero in
run_meta logInfo m!"{← Meta.whnf pickZero}"

/-! ## The firing budget rejects a looping rule set -/

axiom ping : Nat → Nat
axiom pong : Nat → Nat
axiom ping_pong_ax (n : Nat) : ping n = pong n

@[rewrite] theorem ping_pong (n : Nat) : ping n = pong n := ping_pong_ax n
@[rewrite] theorem pong_ping (n : Nat) : pong n = ping n := (ping_pong_ax n).symm

def pingEq : Expr :=
  mkApp3 (mkConst ``Eq [1]) (mkConst ``Nat) (mkApp (mkConst ``ping) (mkNatLit 0)) (mkNatLit 0)

def rflZero : Expr := mkApp2 (mkConst ``Eq.refl [1]) (mkConst ``Nat) (mkNatLit 0)

-- The elaborator stops the loop with the same budget.
/-- error: rewrite rule budget exhausted: `ping_pong` would fire past 65536 firings -/
#guard_msgs in
rewrite_rules ping_pong pong_ping in
example : ping 0 = 0 := rfl

/-- error: (kernel) rewrite rule budget exhausted: 'RewriteRulesTest.ping_pong' would fire past 65536 firings -/
#guard_msgs in
rewrite_rules ping_pong pong_ping in
run_cmd addRflDecl `RewriteRulesTest.pingLoop pingEq rflZero

end RewriteRulesTest

/-! ## Registration checks -/

namespace RewriteRulesTest.Invalid

axiom g : Nat → Nat
axiom cond_ax (n : Nat) (h : n = 0) : g n = 0
axiom lit_ax : g 0 = 0

/-- error: (kernel) invalid rewrite rule 'RewriteRulesTest.Invalid.cond', the variable #1 does not occur in its left-hand side -/
#guard_msgs in
@[rewrite] theorem cond (n : Nat) (h : n = 0) : g n = 0 := cond_ax n h

/-- error: (kernel) invalid rewrite rule 'RewriteRulesTest.Invalid.lit', the subterm '0' of its left-hand side is not a first-order pattern -/
#guard_msgs in
@[rewrite] theorem lit : g 0 = 0 := lit_ax

/-- error: (kernel) invalid rewrite rule 'RewriteRulesTest.Invalid.basis', its head 'Nat.succ' belongs to the basis (Nat, Eq, False, Quot) -/
#guard_msgs in
@[rewrite] theorem basis (n : Nat) : Nat.succ n = n + 1 := rfl

/-- error: (kernel) invalid rewrite rule 'RewriteRulesTest.Invalid.notEq', its statement is not an equation `∀ xs, l = r` -/
#guard_msgs in
@[rewrite] theorem notEq : True := trivial

/-- error: (kernel) invalid rewrite rule 'RewriteRulesTest.Invalid.g', it is not a theorem -/
#guard_msgs in
attribute [rewrite] g

/-- error: `lit_ax` is not a rewrite rule, register it with `@[rewrite]` -/
#guard_msgs in
rewrite_rules lit_ax in
example : True := trivial

end RewriteRulesTest.Invalid

/-! ## Non-linear rules: a repeated variable matches definitionally equal subterms -/

namespace RewriteRulesTest.NonLinear

axiom g₂ : Nat → Nat → Nat
axiom g₂_ax (n : Nat) : g₂ n n = n

@[rewrite] theorem g₂_diag (n : Nat) : g₂ n n = n := g₂_ax n

rewrite_rules g₂_diag in
example : g₂ 3 3 = 3 := rfl

-- The two arguments are definitionally but not syntactically equal.
rewrite_rules g₂_diag in
example : g₂ (1 + 2) 3 = 3 := rfl

-- Different arguments: the rule does not fire.
rewrite_rules g₂_diag in
example (h : g₂ 2 3 = 2) : True := by
  fail_if_success (have : g₂ 2 3 = 2 := rfl)
  trivial

end RewriteRulesTest.NonLinear

/-! ## A rule on a `def` fires where its unfolding gets stuck: `0 + n = n` -/

namespace RewriteRulesTest.Stuck
open Lean Elab Command

@[rewrite] theorem zero_add' (n : Nat) : Nat.zero + n = n := Nat.zero_add n

-- `∀ n : Nat, 0 + n = n`, proved by `fun n => Eq.refl n` and sent to the kernel directly. `+`
-- recurses on its second argument, so unfolding `0 + n` gets stuck on `n` and the rule fires.
def zeroAddTy : Expr :=
  let zero := mkApp3 (mkConst ``OfNat.ofNat [0]) (mkConst ``Nat) (mkRawNatLit 0)
    (mkApp (mkConst ``instOfNatNat) (mkRawNatLit 0))
  let add := mkApp6 (mkConst ``HAdd.hAdd [0, 0, 0]) (mkConst ``Nat) (mkConst ``Nat) (mkConst ``Nat)
    (mkApp2 (mkConst ``instHAdd [0]) (mkConst ``Nat) (mkConst ``instAddNat)) zero (mkBVar 0)
  mkForall `n .default (mkConst ``Nat) (mkApp3 (mkConst ``Eq [1]) (mkConst ``Nat) add (mkBVar 0))

def zeroAddVal : Expr :=
  mkLambda `n .default (mkConst ``Nat) (mkApp2 (mkConst ``Eq.refl [1]) (mkConst ``Nat) (mkBVar 0))

/--
error: (kernel) declaration type mismatch, 'RewriteRulesTest.Stuck.without' has type
  ∀ (n : Nat), n = n
but it is expected to have type
  ∀ (n : Nat), 0 + n = n
-/
#guard_msgs in
run_cmd addRflDecl `RewriteRulesTest.Stuck.without zeroAddTy zeroAddVal

rewrite_rules zero_add' in
run_cmd addRflDecl `RewriteRulesTest.Stuck.withRule zeroAddTy zeroAddVal

end RewriteRulesTest.Stuck

/-! ## Level parameters match up to level equivalence

A level parameter that occurs twice in a left-hand side matches levels that are equal up to level
equivalence, so `max u v` matches `max v u`, in the elaborator and in the kernel. -/

namespace RewriteRulesTest.Levels

universe u v

abstract_block
def lift.{a, b} (n : Nat) (_ : PUnit.{a}) (_ : PUnit.{b}) : Nat := n
@[rewrite] theorem lift_id.{a} (n : Nat) (x y : PUnit.{a}) : lift.{a, a} n x y = n := rfl
end

rewrite_rules lift_id in
theorem lift_swap (n : Nat) (x : PUnit.{max u v}) (y : PUnit.{max v u}) :
    lift.{max u v, max v u} n x y = n := rfl

rewrite_rules lift_id in
theorem lift_succ (n : Nat) (x : PUnit.{max u v + 1}) (y : PUnit.{max (v + 1) (u + 1)}) :
    lift.{max u v + 1, max (v + 1) (u + 1)} n x y = n := rfl

-- levels that differ for some assignment do not match
rewrite_rules lift_id in
example (n : Nat) (x : PUnit.{u}) (y : PUnit.{v}) : True := by
  fail_if_success have : lift.{u, v} n x y = n := rfl
  trivial

-- a quotient map whose head and argument carry the same universe written two ways
abstract_block
def qmap {α : Sort u} {β : Sort v} {r : α → α → Prop} {s : β → β → Prop} (f : α → β)
    (h : ∀ a b, r a b → s (f a) (f b)) : Quot r → Quot s :=
  Quot.lift (fun x => Quot.mk s (f x)) (fun a b hab => Quot.sound (h a b hab))
@[rewrite] theorem qmap_mk {α : Sort u} {β : Sort v} {r : α → α → Prop} {s : β → β → Prop}
    (f : α → β) (h : ∀ a b, r a b → s (f a) (f b)) (a : α) :
    qmap f h (Quot.mk r a) = Quot.mk s (f a) := rfl
end

rewrite_rules qmap_mk in
theorem qmap_levels {α : Type (max u v)} {r : α → α → Prop} (f : α → α) (h : ∀ a b, r a b → r (f a) (f b))
    (a : α) : qmap.{max u v + 1, max u v + 1} f h (Quot.mk.{max (u + 1) (v + 1)} r a) = Quot.mk r (f a) :=
  rfl

end RewriteRulesTest.Levels

/-! ## Arguments that reduce to the pattern

The elaborator retries a failed argument on its weak head normal form, as the kernel does, so a
rule on `Quot.mk` fires on a coercion or a function that unfolds to `Quot.mk`. -/

namespace RewriteRulesTest.Coe

universe u v w

abstract_block
def qmap₂ {α : Sort u} {β : Sort v} {γ : Sort w} {sa : Setoid α} {sb : Setoid β} {sc : Setoid γ}
    (f : α → β → γ) (h : ∀ a₁ b₁, sa.r a₁ b₁ → ∀ a₂ b₂, sb.r a₂ b₂ → sc.r (f a₁ a₂) (f b₁ b₂)) :
    Quotient sa → Quotient sb → Quotient sc :=
  Quotient.lift₂ (fun x y => Quotient.mk _ (f x y)) fun _ _ _ _ h₁ h₂ => Quot.sound (h _ _ h₁ _ _ h₂)
@[rewrite] theorem qmap₂_mk {α : Sort u} {β : Sort v} {γ : Sort w} {sa : Setoid α} {sb : Setoid β}
    {sc : Setoid γ} (f : α → β → γ)
    (h : ∀ a₁ b₁, sa.r a₁ b₁ → ∀ a₂ b₂, sb.r a₂ b₂ → sc.r (f a₁ a₂) (f b₁ b₂)) (a : α) (b : β) :
    qmap₂ f h (Quot.mk sa.r a) (Quot.mk sb.r b) = Quot.mk sc.r (f a b) := rfl
end

def triv (α : Type u) : Setoid α := ⟨fun _ _ => True, ⟨fun _ => trivial, fun _ => trivial, fun _ _ => trivial⟩⟩
def Q (α : Type u) := Quotient (triv α)
def toQ {α : Type u} (a : α) : Q α := Quotient.mk _ a
instance {α : Type u} : Coe α (Q α) := ⟨toQ⟩
instance {α : Type u} [Mul α] : Mul (Q α) :=
  ⟨qmap₂ (sa := triv α) (sb := triv α) (sc := triv α) (· * ·) fun _ _ _ _ _ _ => trivial⟩

rewrite_rules qmap₂_mk in
example (a b : Nat) : (toQ a * toQ b : Q Nat) = toQ (a * b) := rfl

rewrite_rules qmap₂_mk in
example (a b : Nat) : ((a : Q Nat) * (b : Q Nat)) = ((a * b : Nat) : Q Nat) := rfl

end RewriteRulesTest.Coe

/-! ## The whnf and defeq caches hold the active rule set

One `MetaM` run computes the same `whnf` and `isDefEq` under different rule sets. A result cached
under one set must not be reused under another. -/

namespace RewriteRulesTest.Cache
open Lean Meta

def one : Expr := mkApp (mkConst ``Nat.succ) (mkConst ``Nat.zero)
def plusOneOne : Expr := mkApp2 (mkConst ``plus) one one
def succPlus : Expr := mkApp (mkConst ``Nat.succ) (mkApp2 (mkConst ``plus) one (mkConst ``Nat.zero))

def withRules (rules : Array Name) (x : MetaM α) : MetaM α :=
  withReader (fun ctx => { ctx with rewriteSet? := some rules }) x

/--
info: [plus Nat.zero.succ Nat.zero.succ,
 (plus Nat.zero.succ Nat.zero).succ,
 plus Nat.zero.succ Nat.zero.succ,
 (plus Nat.zero.succ Nat.zero).succ]
-/
#guard_msgs in
run_meta do
  let r1 ← withRules #[] (whnf plusOneOne)
  let r2 ← withRules #[``plus_succ] (whnf plusOneOne)
  let r3 ← withRules #[] (whnf plusOneOne)
  let r4 ← withRules #[``plus_succ] (whnf plusOneOne)
  logInfo m!"{[r1, r2, r3, r4]}"

/-- info: [false, true, false, true] -/
#guard_msgs in
run_meta do
  let r1 ← withRules #[] (isDefEq plusOneOne succPlus)
  let r2 ← withRules #[``plus_succ] (isDefEq plusOneOne succPlus)
  let r3 ← withRules #[] (isDefEq plusOneOne succPlus)
  let r4 ← withRules #[``plus_succ] (isDefEq plusOneOne succPlus)
  logInfo m!"{[r1, r2, r3, r4]}"

-- The rules of the scope change within one run, as `local` and `scoped` attributes change them.
/-- info: [false, true] -/
#guard_msgs in
run_meta do
  let r1 ← isDefEq plusOneOne succPlus
  modifyEnv (rewriteScopeExt.addLocalEntry · ``plus_succ)
  let r2 ← isDefEq plusOneOne succPlus
  logInfo m!"{[r1, r2]}"

end RewriteRulesTest.Cache

/-! ## Global rules, last because they are in force for every later declaration -/

namespace RewriteRulesTest.Global

def cat : List Nat → List Nat → List Nat
  | [], ys => ys
  | x :: xs, ys => x :: cat xs ys

theorem cat_nil (xs : List Nat) : cat xs [] = xs := by
  induction xs with
  | nil => rfl
  | cons x xs ih => exact congrArg (x :: ·) ih

example (xs : List Nat) : cat xs [] = xs := by
  fail_if_success exact rfl
  exact cat_nil xs

/-- error: `@[global_rewrite]` cannot be `scoped` or `local` -/
#guard_msgs in
attribute [local global_rewrite] cat_nil

attribute [global_rewrite] cat_nil

theorem cat_nil' (xs : List Nat) : cat xs [] = xs := rfl

/-- info: 'RewriteRulesTest.Global.cat_nil'' is checked under rewrite rules: [cat_nil] -/
#guard_msgs in
#print rules cat_nil'

end RewriteRulesTest.Global

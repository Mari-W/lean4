/-
Copyright (c) 2026 Marius Weidner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Marius Weidner
-/
module

prelude
public import Lean.ScopedEnvExtension
public import Lean.Util.FoldConsts

public section

/-!
# User rewrite rules

A rewrite rule is a theorem `h : ∀ xs, l = r` that the kernel registers and then uses as a
reduction `l[σ] ⇝ r[σ]`. Every declaration is checked under a rule set `R(D)`, the closure of its
explicit rules `E` (see `getExplicitRewriteRules`) with the rule sets of the explicit rules and of
the constants it uses. The kernel stores `R(D)` in `Kernel.Environment.rewrites`.

The explicit rules of a declaration are the rules in force in its scope: those named by
`rewrite_rules h₁ … hₙ` (also as `rewrite_rules h₁ … hₙ in <cmd>`), those tagged
`@[scoped rewrite]` or `@[local rewrite]`, and those tagged `@[global_rewrite]` here or in an
imported module. A plain `@[rewrite]` only registers the rule.
-/

namespace Lean

/-- Rules in force through `rewrite_rules` and `scoped`, `local` and attributes `@[rewrite]` and `@[global_rewrite]`. -/
builtin_initialize rewriteScopeExt : ScopedEnvExtension Name Name (Array Name) ←
  registerScopedEnvExtension {
    mkInitial    := pure #[]
    ofOLeanEntry := fun _ n => pure n
    toOLeanEntry := id
    addEntry     := fun s n => s.push n
  }

/-- The explicit rules `E` of a declaration added in `env`, canonical. -/
def getExplicitRewriteRules (env : Environment) : Array Name :=
  Kernel.canonRewriteSet (rewriteScopeExt.getState env)

/--
Abstract definitions reopened by `unfolding_abstract` in the current scope. They unfold in the
elaborator, and every declaration added in the scope becomes a member of each of them, so that the
kernel unfolds them there too.
-/
builtin_initialize unfoldingScopeExt : ScopedEnvExtension Name Name NameSet ←
  registerScopedEnvExtension {
    mkInitial    := pure {}
    ofOLeanEntry := fun _ n => pure n
    toOLeanEntry := id
    addEntry     := fun s n => s.insert n
  }

/--
Whether `c` is abstract at this point of the elaboration: an abstract definition (`abstract_block`)
that `unfolding_abstract` does not reopen in the current scope.
-/
def Environment.isAbstractHere (env : Environment) (c : Name) : Bool :=
  -- type class resolution records no dependency on the scope, so it never sees a reopened body
  env.isAbstract c && (env.isRecordingDeps || !(unfoldingScopeExt.getState env).contains c)

/-- The constants of the statements and values of `decl`, from which `R(D)` is closed. -/
def Declaration.rewriteConsts (decl : Declaration) : Array Name :=
  let es : Array Expr := match decl with
    | .axiomDecl v         => #[v.type]
    | .defnDecl v          => #[v.type, v.value]
    | .thmDecl v           => #[v.type, v.value]
    | .opaqueDecl v        => #[v.type, v.value]
    | .mutualDefnDecl vs   => vs.toArray.flatMap fun v => #[v.type, v.value]
    | .inductDecl _ _ ts _ => ts.toArray.flatMap fun t => #[t.type] ++ t.ctors.toArray.map (·.type)
    | .quotDecl            => #[]
  es.foldl (fun cs e => e.foldConsts cs fun c cs => cs.push c) #[]

/--
A rewrite rule read off its theorem: `lhs` and `rhs` live under the `numVars` binders of the
statement, the loose bound variable `i` naming binder `numVars - 1 - i`.
-/
structure RewriteRuleInfo where
  thm         : Name
  levelParams : List Name
  numVars     : Nat
  lhs         : Expr
  rhs         : Expr

private def ruleTele (n : Nat) : Expr → Nat × Expr
  | .forallE _ _ b _ => ruleTele (n + 1) b
  | e => (n, e)

/-- Reads the statement of the registered rule `thm`. The kernel checked its shape at registration. -/
def getRewriteRuleInfo? (env : Environment) (thm : Name) : Option RewriteRuleInfo := do
  let info ← env.find? thm
  let (numVars, body) := ruleTele 0 info.type
  match body with
  | .app (.app (.app (.const ``Eq _) _) lhs) rhs =>
    return { thm, levelParams := info.levelParams, numVars, lhs, rhs }
  | _ => none

/--
Reads the arguments of `@[rewrite ↓ p]` or `@[global_rewrite ↓ p]`: whether `↓` is given and the
priority, and registers `declName` as a rule unless it already is one. Applying the attribute to a
registered rule changes nothing, so a given `↓` or priority must agree with the registered rule.
-/
private def addRewriteAttr (declName : Name) (stx : Syntax) : AttrM Unit := do
  let (bdStx, prioStx) :=
    if stx.getKind == `Lean.Parser.Attr.simple then (Syntax.missing, stx[1]) else (stx[1], stx[2])
  let beforeDelta := !bdStx.isNone && !bdStx.isMissing
  let prio ← getAttrParamOptPrio prioStx
  match (← getEnv).rewriteRule? declName with
  | some rule =>
    unless rule.prio == prio || prioStx.isNone do
      throwError "`{.ofConstName declName}` is already a rewrite rule with priority {rule.prio}"
    if beforeDelta && !rule.beforeDelta then
      throwError "`{.ofConstName declName}` is already a rewrite rule that fires only when unfolding its head gets stuck"
  | none => setEnv (← ofExceptKernelException ((← getEnv).addRewriteRule declName prio beforeDelta))

/-
`@[rewrite p]` registers a theorem `∀ xs, l = r` as a kernel rewrite rule with priority `p`
(default 1000). `@[scoped rewrite]` and `@[local rewrite]` also put the rule in force for the
declarations of the scope. Applying the attribute to a registered rule only does the latter.
`@[rewrite ↓]` registers a rule that fires before its head is unfolded. Any other rule on a head
that unfolds fires only where the unfolding gets stuck.
-/
builtin_initialize
  registerBuiltinAttribute {
    ref             := by exact decl_name%
    name            := `rewrite
    descr           := "kernel rewrite rule"
    applicationTime := .afterTypeChecking
    add             := fun declName stx kind => do
      addRewriteAttr declName stx
      if kind != .global then
        rewriteScopeExt.add declName kind
  }

/-
`@[global_rewrite p]` registers a rule like `@[rewrite p]` and puts it in force for every later
declaration of this module and of every module importing it. `@[global_rewrite ↓]` as `@[rewrite ↓]`.
-/
builtin_initialize
  registerBuiltinAttribute {
    ref             := by exact decl_name%
    name            := `global_rewrite
    descr           := "kernel rewrite rule in force globally"
    applicationTime := .afterTypeChecking
    add             := fun declName stx kind => do
      unless kind == .global do
        throwError "`@[global_rewrite]` cannot be `scoped` or `local`"
      addRewriteAttr declName stx
      rewriteScopeExt.add declName .global
  }

end Lean

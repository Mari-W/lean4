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

/-
`@[rewrite p]` registers a theorem `∀ xs, l = r` as a kernel rewrite rule with priority `p`
(default 1000). `@[scoped rewrite]` and `@[local rewrite]` also put the rule in force for the
declarations of the scope. Applying the attribute to a registered rule only does the latter.
-/
builtin_initialize
  registerBuiltinAttribute {
    ref             := by exact decl_name%
    name            := `rewrite
    descr           := "kernel rewrite rule"
    applicationTime := .afterTypeChecking
    add             := fun declName stx kind => do
      let prio ← getAttrParamOptPrio stx[1]
      match (← getEnv).rewriteRule? declName with
      | some rule =>
        unless rule.prio == prio || stx[1].isNone do
          throwError "`{.ofConstName declName}` is already a rewrite rule with priority {rule.prio}"
      | none => setEnv (← ofExceptKernelException ((← getEnv).addRewriteRule declName prio))
      if kind != .global then
        rewriteScopeExt.add declName kind
  }

/-
`@[global_rewrite p]` registers a rule like `@[rewrite p]` and puts it in force for every later
declaration of this module and of every module importing it.
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
      let prio ← getAttrParamOptPrio stx[1]
      match (← getEnv).rewriteRule? declName with
      | some rule =>
        unless rule.prio == prio || stx[1].isNone do
          throwError "`{.ofConstName declName}` is already a rewrite rule with priority {rule.prio}"
      | none => setEnv (← ofExceptKernelException ((← getEnv).addRewriteRule declName prio))
      rewriteScopeExt.add declName .global
  }

end Lean

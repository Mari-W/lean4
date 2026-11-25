/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module

prelude
public import Lean.Structure
public import Lean.Util.Recognizers
public import Lean.Util.SafeExponentiation
public import Lean.Meta.GetUnfoldableConst
public import Lean.Meta.CtorRecognizer
public import Lean.Meta.Match.MatcherInfo
public import Lean.Meta.Match.MatchPatternAttr
public import Lean.Meta.Transform
import Init.Data.String.Csimp
import Init.Data.Range.Polymorphic.Iterators

public section

namespace Lean.Expr

def toCtorIfLit : Expr → MetaM Expr
  | .lit (.natVal v) =>
    if v == 0 then return mkConst ``Nat.zero
    else return mkApp (mkConst ``Nat.succ) (mkRawNatLit (v-1))
  | .lit (.strVal v) =>
    Lean.Meta.whnf (mkApp (mkConst ``String.ofList) (toExpr v.toList))
  | e => return e

end Lean.Expr

namespace Lean.Meta

-- ===========================
/-! # Smart unfolding support -/
-- ===========================

set_option compiler.ignoreBorrowAnnotation true in
/--
Forward declaration. It is defined in the module `src/Lean/Elab/PreDefinition/Structural/Eqns.lean`.
It is possible to avoid this hack if we move `Structural.EqnInfo` and `Structural.eqnInfoExt`
to this module.
-/
@[extern "lean_get_structural_rec_arg_pos"]
opaque getStructuralRecArgPos? (declName : Name) : CoreM (Option Nat)

def smartUnfoldingSuffix := "_sunfold"

@[inline] def mkSmartUnfoldingNameFor (declName : Name) : Name :=
  Name.mkStr declName smartUnfoldingSuffix

def hasSmartUnfoldingDecl (env : Environment) (declName : Name) : Bool :=
  env.contains (mkSmartUnfoldingNameFor declName)

register_builtin_option maxRewriteFirings : Nat := {
  defValue := 16777216
  descr := "maximum number of rewrite rule firings in one command, as the kernel allows in one declaration"
}

register_builtin_option smartUnfolding : Bool := {
  defValue := true
  descr := "when computing weak head normal form, use auxiliary definition created for functions defined by structural recursion"
}

/-- Add auxiliary annotation to indicate the `match`-expression `e` must be reduced when performing smart unfolding. -/
def markSmartUnfoldingMatch (e : Expr) : Expr :=
  mkAnnotation `sunfoldMatch e

def smartUnfoldingMatch? (e : Expr) : Option Expr :=
  annotation? `sunfoldMatch e

/-- Add auxiliary annotation to indicate expression `e` (a `match` alternative rhs) was successfully reduced by smart unfolding. -/
def markSmartUnfoldingMatchAlt (e : Expr) : Expr :=
  mkAnnotation `sunfoldMatchAlt e

def smartUnfoldingMatchAlt? (e : Expr) : Option Expr :=
  annotation? `sunfoldMatchAlt e

-- ===========================
/-! # Helper methods -/
-- ===========================

def isAuxDef (constName : Name) : MetaM Bool := do
  let env ← getEnv
  return isAuxRecursor env constName

/--
Retrieves `ConstInfo` for `declName`.
Remark: if `ignoreTransparency = false`, then `getUnfoldableConst?` is used. An abstract definition
outside its block is returned only where `unfolding_abstract` reopens it.
For example, if `ignoreTransparency = false` and `transparencyMode = .reducible` and `declName` is not reducible,
then the result is `none`.
-/
private def getConstInfo? (declName : Name) (ignoreTransparency : Bool) : MetaM (Option ConstantInfo) := do
  if ignoreTransparency then
    -- an abstract definition unfolds only in its block and where it is reopened, whatever the
    -- transparency
    if (← getEnv).isAbstractHere declName then return none
    return (← getEnv).find? declName
  else
    getUnfoldableConst? declName

/--
Similar to `getConstInfo?` but using `getUnfoldableConstNoEx?`.
-/
private def getConstInfoNoEx? (declName : Name) (ignoreTransparency : Bool) : MetaM (Option ConstantInfo) := do
  if ignoreTransparency then
    -- an abstract definition unfolds only in its block and where it is reopened, whatever the
    -- transparency
    if (← getEnv).isAbstractHere declName then return none
    return (← getEnv).find? declName
  else
    getUnfoldableConstNoEx? declName

/--
If `e` is of the form `Expr.const declName us`, executes `k info us` if
- `declName` is in the `Environment` and (is unfoldable or `ignoreTransparency = true`)
- `info` is the `ConstantInfo` associated with `declName`.

Otherwise executes `failK`.
-/
@[inline] private def matchConstAux {α} (e : Expr) (failK : Unit → MetaM α) (k : ConstantInfo → List Level → MetaM α) (ignoreTransparency := false) : MetaM α := do
  let .const declName lvls := e
    | failK ()
  let some cinfo ← getConstInfo? declName ignoreTransparency
    | failK ()
  k cinfo lvls

-- ===========================
/-! # Helper functions for reducing recursors -/
-- ===========================

private def getFirstCtor (d : Name) : MetaM (Option Name) := do
  let some (ConstantInfo.inductInfo { ctors := ctor::_, ..}) := (← getEnv).find? d |
    return none
  return some ctor

private def mkNullaryCtor (type : Expr) (nparams : Nat) : MetaM (Option Expr) := do
  let .const d lvls := type.getAppFn
    | return none
  let (some ctor) ← getFirstCtor d | pure none
  return mkAppN (mkConst ctor lvls) (type.getAppArgs.shrink nparams)

private def getRecRuleFor (recVal : RecursorVal) (major : Expr) : Option RecursorRule :=
  match major.getAppFn with
  | .const fn _ => recVal.rules.find? fun r => r.ctor == fn
  | _           => none

private def toCtorWhenK (recVal : RecursorVal) (major : Expr) : MetaM Expr := do
  let majorType ← inferType major
  let majorType ← instantiateMVars (← whnf majorType)
  let majorTypeI := majorType.getAppFn
  if !majorTypeI.isConstOf recVal.getMajorInduct then
    return major
  else if majorType.hasExprMVar && majorType.getAppArgs[recVal.numParams...*].any Expr.hasExprMVar then
    return major
  else do
    let (some newCtorApp) ← mkNullaryCtor majorType recVal.numParams | pure major
    let newType ← inferType newCtorApp
    /- TODO: check whether changing reducibility to default hurts performance here.
       We do that to make sure auxiliary `Eq.rec` introduced by the `match`-compiler
       are reduced even when `TransparencyMode.reducible` (like in `simp`).

       We use `withNewMCtxDepth` to make sure metavariables at `majorType` are not assigned.
       For example, given `major : Eq ?x y`, we don't want to apply K by assigning `?x := y`.
    -/
    if (← withAtLeastTransparency TransparencyMode.default <| withNewMCtxDepth <| isDefEq majorType newType) then
      return newCtorApp
    else
      return major

/--
  Create the `i`th projection `major`. It tries to use the auto-generated projection functions if available. Otherwise falls back
  to `Expr.proj`.
-/
def mkProjFn (ctorVal : ConstructorVal) (us : List Level) (params : Array Expr) (i : Nat) (major : Expr) : CoreM Expr := do
  match getStructureInfo? (← getEnv) ctorVal.induct with
  | none => return mkProj ctorVal.induct i major
  | some info => match info.getProjFn? i with
    | none => return mkProj ctorVal.induct i major
    | some projFn => return mkApp (mkAppN (mkConst projFn us) params) major

/--
  If `major` is not a constructor application, and its type is a non-recursive structure `C ...`, then return `C.mk major.1 ... major.n`

  \pre `inductName` is `C`.

  If `Meta.Config.etaStruct` is `false` or the condition above does not hold, this method just returns `major`. -/
private def toCtorWhenStructure (inductName : Name) (major : Expr) : MetaM Expr := do
  unless (← useEtaStruct inductName) do
    return major
  let env ← getEnv
  if !isNonRecStructure env inductName then
    return major
  else if let some _ ← isConstructorApp? major then
    return major
  else
    let majorType ← inferType major
    let majorType ← instantiateMVars (← whnf majorType)
    let majorTypeI := majorType.getAppFn
    if !majorTypeI.isConstOf inductName then
      return major
    match majorType.getAppFn with
    | Expr.const d us =>
      if (← whnfD (← inferType majorType)) == mkSort Level.zero then
        return major -- We do not perform eta for propositions, see implementation in the kernel
      else
        let some ctorName ← getFirstCtor d | pure major
        let ctorInfo ← getConstInfoCtor ctorName
        let params := majorType.getAppArgs.shrink ctorInfo.numParams
        let mut result := mkAppN (mkConst ctorName us) params
        for i in *...ctorInfo.numFields do
          result := mkApp result (← mkProjFn ctorInfo us params i major)
        return result
    | _ => return major


-- Helper predicate that returns `true` for inductive predicates used to define functions by well-founded recursion.
private def isWFRec (declName : Name) : Bool :=
  declName == ``Acc.rec || declName == ``WellFounded.rec

/--
Helper method for `reduceRec`.
We use it to ensure we don't expose `Nat.add` when reducing `Nat.rec`.
We we use the following trick, if `e` can be expressed as an offset `(a, k)` with `k > 0`,
we create a new expression `Nat.succ e'` where `e'` is `a` for `k = 1`, or `a + (k-1)` for `k > 1`.
See issue #3022
-/
private def cleanupNatOffsetMajor (e : Expr) : MetaM Expr := do
  let some (e, k) ← isOffset? e | return e
  if k = 0 then
    return e
  else if k = 1 then
    return mkNatSucc e
  else
    return mkNatSucc (mkNatAdd e (toExpr (k - 1)))

/-- Auxiliary function for reducing recursor applications. -/
private def reduceRec (recVal : RecursorVal) (recLvls : List Level) (recArgs : Array Expr) (failK : Unit → MetaM α) (successK : Expr → MetaM α) : MetaM α :=
  let majorIdx := recVal.getMajorIdx
  if h : majorIdx < recArgs.size then do
    let major := recArgs[majorIdx]
    let mut major ← if isWFRec recVal.name && (← getTransparency) == .default then
      -- If recursor is `Acc.rec` or `WellFounded.rec` and transparency is default,
      -- then we bump transparency to .all to make sure we can unfold defs defined by WellFounded recursion.
      -- We use this trick because we abstract nested proofs occurring in definitions.
      -- Alternative design: do not abstract nested proofs used to justify well-founded recursion.
      withTransparency .all <| whnf major
    else
      whnf major
    if recVal.k then
      major ← toCtorWhenK recVal major
    major ← major.toCtorIfLit
    major ← cleanupNatOffsetMajor major
    major ← toCtorWhenStructure recVal.getMajorInduct major
    match getRecRuleFor recVal major with
    | some rule =>
      let majorArgs := major.getAppArgs
      if recLvls.length != recVal.levelParams.length then
        failK ()
      else
        let rhs := rule.rhs.instantiateLevelParams recVal.levelParams recLvls
        -- Apply parameters, motives and minor premises from recursor application.
        let rhs := mkAppRange rhs 0 (recVal.numParams+recVal.numMotives+recVal.numMinors) recArgs
        /- The number of parameters in the constructor is not necessarily
           equal to the number of parameters in the recursor when we have
           nested inductive types. -/
        let nparams := majorArgs.size - rule.nfields
        let rhs := mkAppRange rhs nparams majorArgs.size majorArgs
        let rhs := mkAppRange rhs (majorIdx + 1) recArgs.size recArgs
        successK rhs
    | none => failK ()
  else
    failK ()

-- ===========================
/-! # Helper functions for reducing Quot.lift and Quot.ind -/
-- ===========================

/-- Auxiliary function for reducing `Quot.lift` and `Quot.ind` applications. -/
private def reduceQuotRec (recVal  : QuotVal) (recArgs : Array Expr) (failK : Unit → MetaM α) (successK : Expr → MetaM α) : MetaM α :=
  let process (majorPos argPos : Nat) : MetaM α :=
    if h : majorPos < recArgs.size then do
      let major := recArgs[majorPos]
      let major ← whnf major
      match major with
      | Expr.app (Expr.app (Expr.app (Expr.const majorFn _) _) _) majorArg => do
        let some (ConstantInfo.quotInfo { kind := QuotKind.ctor, .. }) := (← getEnv).find? majorFn | failK ()
        let f := recArgs[argPos]!
        let r := mkApp f majorArg
        let recArity := majorPos + 1
        successK <| mkAppRange r recArity recArgs.size recArgs
      | _ => failK ()
    else
      failK ()
  match recVal.kind with
  | QuotKind.lift => process 5 3
  | QuotKind.ind  => process 4 3
  | _             => failK ()

-- ===========================
/-! # Helper function for extracting "stuck term" -/
-- ===========================

mutual
  private partial def isRecStuck? (recVal : RecursorVal) (recArgs : Array Expr) : MetaM (Option MVarId) :=
    if recVal.k then
      -- TODO: improve this case
      return none
    else do
      let majorIdx := recVal.getMajorIdx
      if h : majorIdx < recArgs.size then do
        let major := recArgs[majorIdx]
        let major ← whnf major
        getStuckMVar? major
      else
        return none

  private partial def isQuotRecStuck? (recVal : QuotVal) (recArgs : Array Expr) : MetaM (Option MVarId) :=
    let process? (majorPos : Nat) : MetaM (Option MVarId) :=
      if h : majorPos < recArgs.size then do
        let major := recArgs[majorPos]
        let major ← whnf major
        getStuckMVar? major
      else
        return none
    match recVal.kind with
    | QuotKind.lift => process? 5
    | QuotKind.ind  => process? 4
    | _             => return none

  /-- Return `some (Expr.mvar mvarId)` if metavariable `mvarId` is blocking reduction. -/
  partial def getStuckMVar? (e : Expr) : MetaM (Option MVarId) := do
    match e with
    | .mdata _ e  => getStuckMVar? e
    | .proj _ _ e => getStuckMVar? (← whnf e)
    | .mvar .. =>
      let e ← instantiateMVars e
      match e with
      | .mvar mvarId => return some mvarId
      | _ => getStuckMVar? e
    | .app f .. =>
      let f := f.getAppFn
      match f with
      | .mvar .. =>
        let e ← instantiateMVars e
        match e.getAppFn with
        | .mvar mvarId => return some mvarId
        | _ => getStuckMVar? e
      | .const fName _ =>
        match (← getEnv).find? fName with
        | some <| .recInfo recVal  => isRecStuck? recVal e.getAppArgs
        | some <| .quotInfo recVal => isQuotRecStuck? recVal e.getAppArgs
        | _  =>
          unless e.hasExprMVar do return none
          let args := e.getAppArgs
          -- Projection function support
          if let some projInfo ← getProjectionFnInfo? fName then
            -- This branch is relevant if `e` is a type class projection that is stuck because the instance has not been synthesized yet.
            unless projInfo.fromClass do return none
            -- First check whether `e`s instance is stuck.
            if let some major := args[projInfo.numParams]? then
              if let some mvarId ← getStuckMVar? (← whnf major) then
                return mvarId
            /-
            Then, recurse on the explicit arguments
            We want to detect the stuck instance in terms such as
            `HAdd.hAdd Nat Nat Nat (instHAdd Nat instAddNat) n (OfNat.ofNat Nat 2 ?m)`
            See issue https://github.com/leanprover/lean4/issues/1408 for an example where this is needed.
            -/
            let info ← getFunInfo f
            for pinfo in info.paramInfo, arg in args do
              if pinfo.isExplicit then
                if let some mvarId ← getStuckMVar? arg then
                  return some mvarId
            return none
          -- Auxiliary parent projections created for diamond inheritance (not registered as projections).
          else if let some auxInfo ← getAuxParentProjectionInfo? fName then
            unless auxInfo.fromClass do return none
            if let some major := args[auxInfo.numParams]? then
              if let some mvarId ← getStuckMVar? (← whnf major) then
                return mvarId
            return none
          else
            return none
      | .proj _ _ e => getStuckMVar? (← whnf e)
      | _ => return none
    | _ => return none
end

-- ===========================
/-! # Weak Head Normal Form auxiliary combinators -/
-- ===========================

/-- Auxiliary combinator for handling easy WHNF cases. It takes a function for handling the "hard" cases as an argument -/
@[specialize] partial def whnfEasyCases (e : Expr) (k : Expr → MetaM Expr) : MetaM Expr := do
  match e with
  | .forallE ..    => return e
  | .lam ..        => return e
  | .sort ..       => return e
  | .lit ..        => return e
  | .bvar ..       => panic! "loose bvar in expression"
  | .letE ..       => k e
  | .const ..      => k e
  | .app ..        => k e
  | .proj ..       => k e
  | .mdata _ e     => whnfEasyCases e k
  | .fvar fvarId   =>
    let decl ← fvarId.getDecl
    match decl with
    | .ldecl (value := v) (nondep := false) .. =>
      -- Let-declarations marked as implementation detail should always be unfolded
      -- We initially added this feature for `simp`, and added it here for consistency.
      let cfg ← getConfig
      if !decl.isImplementationDetail && !cfg.zetaDelta then
        if !(← read).zetaDeltaSet.contains fvarId then
          return e
      if (← read).trackZetaDelta then
        addZetaDeltaFVarId fvarId
      whnfEasyCases v k
    | _ => return e
  | .mvar mvarId   =>
    match (← getExprMVarAssignment? mvarId) with
    | some v => whnfEasyCases v k
    | none   => return e

@[specialize] private def deltaDefinition (c : ConstantInfo) (lvls : List Level)
    (failK : Unit → MetaM α) (successK : Expr → MetaM α) : MetaM α := do
  if c.levelParams.length != lvls.length then
    failK ()
  else
    successK (← instantiateValueLevelParams c lvls)

@[specialize] private def deltaBetaDefinition (c : ConstantInfo) (lvls : List Level) (revArgs : Array Expr)
    (failK : Unit → MetaM α) (successK : Expr → MetaM α) (preserveMData := false) : MetaM α := do
  if c.levelParams.length != lvls.length then
    failK ()
  else
    let val ← instantiateValueLevelParams c lvls
    let val := val.betaRev revArgs (preserveMData := preserveMData)
    successK val

inductive ReduceMatcherResult where
  | reduced (val : Expr)
  | stuck   (val : Expr)
  | notMatcher
  | partialApp

/-!
The "match" compiler uses dependent if-then-else `dite` and other auxiliary declarations to compile match-expressions such as
```
match v with
| 'a' => 1
| 'b' => 2
| _   => 3
```
because it is more efficient than using `casesOn` recursors.
The method `reduceMatcher?` fails if these auxiliary definitions cannot be unfolded in the current
transparency setting. This is problematic because tactics such as `simp` use `TransparencyMode.reducible`, and
most users assume that expressions such as
```
match 0 with
| 0 => 1
| 100 => 2
| _ => 3
```
should reduce in any transparency mode.

Thus, if the transparency mode is `.reducible` or `.instances`, we first
eagerly unfold `dite` constants used in the auxiliary match-declaration, and then
use a custom `canUnfoldAtMatcher` predicate for `whnfMatcher`.

Remark: we used to include `dite` (and `ite`) as auxiliary declarations to unfold at
`canUnfoldAtMatcher`, but this is problematic because the `dite`/`ite` may occur in the
discriminant. See issue #5388.

This solution is not very modular because modifications at the `match` compiler require changes here.
We claim this is defensible because it is reducing the auxiliary declaration defined by the `match` compiler.

Remark: if the eager unfolding is problematic, we may cache the result.
We may also consider not using `dite` in the `match`-compiler and use `Decidable.casesOn`, but it will require changes
in how we generate equation lemmas.

Alternative solution: tactics that use `TransparencyMode.reducible` should rely on the equations we generated for match-expressions.
This solution is also not perfect because the match-expression above will not reduce during type checking when we are not using
`TransparencyMode.default` or `TransparencyMode.all`.
-/

/--
Eagerly unfold `dite` constants in `e`. This is an auxiliary function used to reduce match expressions.
See comment above.
-/
private def unfoldNestedDIte (e : Expr) : CoreM Expr := do
  if e.find? (fun e => e.isAppOf ``dite) matches some _ then
    Core.transform e fun e => do
      if let .const ``dite us := e then
        let constInfo ← getConstInfo ``dite
        let e ← instantiateValueLevelParams constInfo us
        return .done e
      else
        return .continue
  else
    return e

private def whnfMatcher (e : Expr) : MetaM Expr := do
  /- When reducing `match` expressions at `.reducible`, `.instances` or `.implicit` transparency,
     we use a custom `canUnfoldAtMatcher` predicate that additionally allows unfolding
     class projections (e.g., `OfNat.ofNat`, `NatCast.natCast`) and a few other specific
     definitions. This ensures match discriminants like `OfNat.ofNat α n inst` can be
     reduced to expose constructors, without bumping the overall transparency level.  -/
  if (← getTransparency) matches .reducible | .instances | .implicit then
    -- Also unfold some default-reducible constants; see `canUnfoldAtMatcher`
    withCanUnfoldAtMatcherPred do
      whnf e
  else
    -- Do NOT use `canUnfoldAtMatcher` here as it does not affect all/default reducibility and inhibits caching (#2564).
    -- In the future, we want to work on better reduction strategies that do not require caching.
    whnf e

def reduceMatcher? (e : Expr) : MetaM ReduceMatcherResult := do
  let e := e.consumeMData
  let .const declName declLevels := e.getAppFn
    | return .notMatcher
  let some info ← getMatcherInfo? declName
    | return .notMatcher
  let args := e.getAppArgs
  let prefixSz := info.numParams + 1 + info.numDiscrs
  if args.size < prefixSz + info.numAlts then
    return ReduceMatcherResult.partialApp
  let constInfo ← getConstInfo declName
  let mut f ← instantiateValueLevelParams constInfo declLevels
  if (← getTransparency) matches .reducible | .instances | .implicit then
    f ← unfoldNestedDIte f
  let auxApp := mkAppN f args[*...prefixSz]
  let auxAppType ← inferType auxApp
  forallBoundedTelescope auxAppType info.numAlts fun hs _ => do
    let auxApp ← whnfMatcher (mkAppN auxApp hs)
    let auxAppFn := auxApp.getAppFn
    let mut i := prefixSz
    for h in hs do
      if auxAppFn == h then
        let result := mkAppN args[i]! auxApp.getAppArgs
        let result := mkAppN result args[(prefixSz + info.numAlts)...args.size]
        return ReduceMatcherResult.reduced result.headBeta
      i := i + 1
    return ReduceMatcherResult.stuck auxApp

def projectCore? (e : Expr) (i : Nat) : MetaM (Option Expr) := do
  let e ← e.toCtorIfLit
  matchConstCtor e.getAppFn (fun _ => pure none) fun ctorVal _ =>
    let numArgs := e.getAppNumArgs
    let idx := ctorVal.numParams + i
    if idx < numArgs then
      return some (e.getArg! idx)
    else
      return none

def project? (e : Expr) (i : Nat) : MetaM (Option Expr) := do
  projectCore? (← whnf e) i

/-- Reduce kernel projection `Expr.proj ..` expression. -/
def reduceProj? (e : Expr) : MetaM (Option Expr) := do
  match e with
  | .proj _ i c => project? c i
  | _           => return none

/--
  Auxiliary method for reducing terms of the form `?m t_1 ... t_n` where `?m` is delayed assigned.
  Recall that we can only expand a delayed assignment when all holes/metavariables in the assigned value have been "filled".
-/
private def whnfDelayedAssigned? (f' : Expr) (e : Expr) : MetaM (Option Expr) := do
  if f'.isMVar then
    match (← getDelayedMVarAssignment? f'.mvarId!) with
    | none => return none
    | some { fvars, mvarIdPending } =>
      let args := e.getAppArgs
      if fvars.size > args.size then
        -- Insufficient number of argument to expand delayed assignment
        return none
      else
        let newVal ← instantiateMVars (mkMVar mvarIdPending)
        if newVal.hasExprMVar then
           -- Delayed assignment still contains metavariables
           return none
        else
           let newVal := newVal.abstract fvars
           let result := newVal.instantiateRevRange 0 fvars.size args
           return mkAppRange result fvars.size args.size args
  else
    return none

/--
Zeta reduces `let`s/`have`s.
If `zetaHave` is false, then `have`s are not zeta reduced.

Auxiliary function for `whnfCore` and `Simp.reduceStep`, to implement the `zeta` option.
This function does not implement `zetaUnused` logic,
which is instead the responsibility of `consumeUnusedLet`.
The `expandLet` function works with expressions with loose bound variables,
and thus determining whether a let variable is used isn't an O(1) operation.

Note: since `expandLet` and `consumeUnusedLet` are separated like this, a consequence is that
in the `+zeta -zetaHave +zetaUnused` configuration, then `whnfCore` has quadratic complexity
when reducing a sequence of alternating `let`s and `have`s where the `let`s are used but the `have`s are unused.
-/
partial def expandLet (e : Expr) (vs : Array Expr) (zetaHave : Bool := true) : Expr :=
  if let .letE _ _ v b nondep  := e then
    if !nondep || zetaHave then
      expandLet b (vs.push <| v.instantiateRev vs) zetaHave
    else
      e.instantiateRev vs
  else
    e.instantiateRev vs

/--
Consumes unused `let`s/`have`s.
If `consumeNondep` is false, then `have`s are not consumed.

Auxiliary function for `whnfCore`, `isDefEqQuick`, and `Simp.reduceStep`,
to implement the `zetaUnused` option.
In the case of `isDefEqQuick`, it is also used when `zeta` is set.
-/
partial def consumeUnusedLet (e : Expr) (consumeNondep : Bool := false) : Expr :=
  match e with
  | .letE _ _ _ b nondep => if b.hasLooseBVars || (nondep && !consumeNondep) then e else consumeUnusedLet b consumeNondep
  | _ => e

/-! # User rewrite rules

A first-order matcher mirroring the kernel's (`type_checker::reduce_rewrite`): a pattern variable
takes the subterm it meets, a repeated one must meet a definitionally equal subterm, a constant
application matches syntactically with levels compared up to level equivalence, and a failed match of a constant application is retried once on
the weak head normal form of the subterm. -/

private structure RewriteMatch where
  args   : Array (Option Expr)
  lvls   : Array (Option Level)
  checks : Array (Level × Level) := #[]
  /-- Match without reducing any argument, for rules that fire before unfolding. -/
  syntactic : Bool := false

private def matchRewriteLevels (rule : RewriteRuleInfo) (ps ls : List Level) :
    StateT RewriteMatch MetaM Bool := do
  if ps.length != ls.length then
    return false
  for p in ps, l in ls do
    match p with
    | .param n =>
      let some i := rule.levelParams.idxOf? n | return false
      match (← get).lvls[i]? with
      | some (some l') => if !l'.isEquiv l then return false
      | _ => modify fun s => { s with lvls := s.lvls.set! i (some l) }
    | _ => modify fun s => { s with checks := s.checks.push (p, l) }
  return true

mutual
private partial def matchRewriteApp (rule : RewriteRuleInfo) (p t : Expr) :
    StateT RewriteMatch MetaM Bool := do
  let .const c ps := p.getAppFn | return false
  let .const c' ls := t.getAppFn | return false
  if c != c' || p.getAppNumArgs != t.getAppNumArgs then
    return false
  unless (← matchRewriteLevels rule ps ls) do
    return false
  for pa in p.getAppArgs, ta in t.getAppArgs do
    unless (← matchRewritePattern rule pa ta) do
      return false
  return true

private partial def matchRewritePattern (rule : RewriteRuleInfo) (p t : Expr) :
    StateT RewriteMatch MetaM Bool := do
  if let .bvar i := p then
    let k := rule.numVars - 1 - i
    if let some (some t₀) := (← get).args[k]? then
      return t₀ == t || (!(← get).syntactic && (← isDefEq t₀ t))
    modify fun s => { s with args := s.args.set! k (some t) }
    return true
  let s₀ ← get
  if (← matchRewriteApp rule p t) then
    return true
  set s₀
  if s₀.syntactic then
    return false
  let t' ← (← whnf t).toCtorIfLit
  if t' == t then
    return false
  matchRewriteApp rule p t'
end

private def levelParamsBound (rule : RewriteRuleInfo) (lvls : Array (Option Level)) : Level → Bool
  | .param n => match rule.levelParams.idxOf? n with
    | some i => (lvls[i]?.join).isSome
    | none => true
  | .succ l => levelParamsBound rule lvls l
  | .max a b | .imax a b => levelParamsBound rule lvls a && levelParamsBound rule lvls b
  | _ => true

/-- Fires the first rule of `cands` whose left-hand side matches a prefix of the application of a head
at levels `us` to `args`. -/
private def fireFirstRewrite (args : Array Expr) (us : List Level) (cands : Array RewriteRule) (syntactic : Bool) :
    MetaM (Option Expr) := do
  let env ← getEnv
  for cand in cands do
    let some rule := getRewriteRuleInfo? env cand.thm | continue
    let .const _ ps := rule.lhs.getAppFn | continue
    let pargs := rule.lhs.getAppArgs
    if args.size < pargs.size then
      continue
    let init : RewriteMatch :=
      { args := .replicate rule.numVars none, lvls := .replicate rule.levelParams.length none, syntactic }
    let go : StateT RewriteMatch MetaM Bool := do
      unless (← matchRewriteLevels rule ps us) do
        return false
      for pa in pargs, ta in args do
        unless (← matchRewritePattern rule pa ta) do
          return false
      return true
    let (ok, st) ← go.run init
    unless ok do
      continue
    let some substs := st.args.mapM id | continue
    let ls := st.lvls.toList.map (·.getD .zero)
    unless st.checks.all fun (p, l) =>
        levelParamsBound rule st.lvls p && (p.instantiateParams rule.levelParams ls).isEquiv l do
      continue
    modify fun s => { s with rewriteTotal := s.rewriteTotal + 1 }
    let limit := maxRewriteFirings.get (← getOptions)
    if (← get).rewriteTotal > limit then
      throwError "rewrite rule budget exhausted: `{.ofConstName cand.thm}` would fire past {limit} firings in this declaration"
    let rhs := (rule.rhs.instantiateLevelParams rule.levelParams ls).instantiateRev substs
    return some (mkAppN rhs (args.extract pargs.size args.size))
  return none


/-- The rules of `rules` in force (`getActiveRewriteRules`), in firing order. -/
private def activeRewriteRules (rules : Array RewriteRule) : MetaM (Array RewriteRule) := do
  let active ← getActiveRewriteRules
  let cands := rules.filter fun r => active.binSearchContains r.thm (fun a b => a.quickCmp b == .lt)
  return cands.qsort fun a b => a.prio > b.prio || (a.prio == b.prio && a.thm.cmp b.thm == .lt)

/--
Fires the first active rewrite rule (`getActiveRewriteRules`) whose left-hand side matches a prefix
of the application `e`. The rules of a head are tried by priority, highest first, then by
`Name.cmp`, as in the kernel.
-/
def reduceRewriteStep? (e : Expr) (stuck := false) : MetaM (Option Expr) := do
  let .const f us := e.getAppFn | return none
  let env ← getEnv
  unless env.hasElabRewriteRules do return none
  let registered := env.rewriteRulesFor f
  if registered.isEmpty then
    return none
  -- as in the kernel, a rule on a head that unfolds fires only when its unfolding got stuck
  if !stuck && (env.find? f).any (·.hasValue) && !env.isAbstractHere f then
    return none
  fireFirstRewrite e.getAppArgs us (← activeRewriteRules (registered.filterMap env.rewriteRule?)) false

/-- Whether the head of `e` is a constructor or `e` is a literal. -/
private def isConstructorForm (env : Environment) (e : Expr) : Bool :=
  e.isLit || e.getAppFn.constName?.any fun c => (env.find? c matches some (.ctorInfo _))

/--
The key test of a rule with key constant `c` on the argument `a` at its key position. A `Nat` literal
meets the keys `Nat.zero` and `Nat.succ` in constructor form, which is returned with the verdict.
-/
private def rewriteKeyMatches (c : Name) (a : Expr) : Bool × Expr :=
  let a := match a with
    | .lit (.natVal v) =>
      if c == ``Nat.zero || c == ``Nat.succ then
        if v == 0 then mkConst ``Nat.zero else mkApp (mkConst ``Nat.succ) (mkRawNatLit (v - 1))
      else a
    | _ => a
  (a.getAppFn.isConstOf c, a)

/--
Fires a rule marked `@[rewrite ↓]` on `e`, whose head the caller is about to unfold, as the kernel's
`reduce_before_delta` does: one test without such rules, one lookup for a head without them, and a
comparison of the argument at each rule's key position (`RewriteRule.keyArg`) before any matching.
When the key is a constructor and the argument is not in constructor form yet, the argument is
reduced to weak head normal form first and stays reduced for matching, which unfolding the head
would do anyway. Otherwise these rules match without reducing any argument.
-/
def reduceRewriteBeforeDelta? (e : Expr) : MetaM (Option Expr) := do
  let env ← getEnv
  unless env.hasPreRewriteRules && env.hasElabRewriteRules do return none
  let .const f us := e.getAppFn | return none
  let some rules := env.preRewriteRulesFor? f | return none
  -- only the rules in force, as in the kernel's table, so no argument is reduced for another rule
  let rules ← activeRewriteRules rules
  if rules.isEmpty then return none
  let mut args := e.getAppArgs
  let mut hits := #[]
  for r in rules do
    if r.keyArg == 0 then
      hits := hits.push r
      continue
    let p := r.keyArg - 1
    let some a := args[p]? | continue
    let (ok, a) := rewriteKeyMatches r.keyConst a
    args := args.set! p a
    if ok then
      hits := hits.push r
      continue
    unless (env.find? r.keyConst matches some (.ctorInfo _)) do continue
    if isConstructorForm env a then continue
    let (ok, a) := rewriteKeyMatches r.keyConst (← whnf a)
    args := args.set! p a
    if ok then
      hits := hits.push r
  if hits.isEmpty then return none
  fireFirstRewrite args us hits true

/--
Fires rewrite rules at the head of `e` as long as one matches (`reduceRewriteStep?`). Iterating
here keeps a cycle of rules from nesting `whnfCore` calls, so the firing budget stops it.
-/
partial def reduceRewrite? (e : Expr) (stuck := false) : MetaM (Option Expr) := do
  let some e' ← reduceRewriteStep? e stuck | return none
  let rec loop (e : Expr) : MetaM Expr := do
    match (← reduceRewriteStep? e) with
    | some e' => loop e'
    | none => return e
  return some (← loop e')

/--
Apply beta-reduction, zeta-reduction (i.e., unfold let local-decls), iota-reduction,
expand let-expressions, expand assigned meta-variables, unfold aux declarations,
and fire the active user rewrite rules.
-/
partial def whnfCore (e : Expr) : MetaM Expr :=
  go e
where
  go (e : Expr) : MetaM Expr := do
    whnfEasyCases e fun e => do
      trace[Meta.whnf] e
      match e with
      | .const ..  =>
        match (← reduceRewrite? e) with
        | some e' => go e'
        | none => pure e
      | .letE _ _ v b nondep =>
        let cfg ← getConfig
        if cfg.zeta && (!nondep || cfg.zetaHave) then
          go <| expandLet b #[v] (zetaHave := cfg.zetaHave)
        else if cfg.zetaUnused && !b.hasLooseBVars then
          go <| consumeUnusedLet b
        else
          return e
      | .app f ..       =>
        let cfg ← getConfig
        let f := f.getAppFn
        let f' ← go f
        /-
        If `f'` is a lambda, then we perform beta-reduction here IF
        1- `cfg.beta` is enabled, OR
        2- `f` was not a lambda expression. That is, `f` was reduced, and the beta-reduction step is part
           of this step. This is similar to allowing beta-reduction while unfolding expressions even if `cfg.beta := false`.

        We added case 2 because a failure at `norm_cast`. See test `6123_mod_cast.lean`.
        Another possible fix to this test is to set `beta := true` at the `Simp.Config` value at
        `NormCast.lean`.
        -/
        if f'.isLambda && (cfg.beta || !f.isLambda) then
          let revArgs := e.getAppRevArgs
          go <| f'.betaRev revArgs
        else if let some eNew ← whnfDelayedAssigned? f' e then
          go eNew
        else
          let e := if f == f' then e else e.updateFn f'
          unless cfg.iota do return e
          match (← reduceMatcher? e) with
          | .reduced eNew => go eNew
          | .partialApp   => pure e
          | .stuck _      => pure e
          | .notMatcher   =>
            let .const cname lvls := f'.getAppFn | return e
            let some cinfo := (← getEnv).find? cname | return e
            -- user rewrite rules fire after ι-reduction and before δ-reduction, as in the kernel
            let rewriteOr (e : Expr) : MetaM Expr := do
              match (← reduceRewrite? e) with
              | some e' => go e'
              | none => return e
            match cinfo with
            | .recInfo rec    => reduceRec rec lvls e.getAppArgs (fun _ => rewriteOr e) (fun e => do recordUnfold cinfo.name; go e)
            | .quotInfo rec   => reduceQuotRec rec e.getAppArgs (fun _ => rewriteOr e) (fun e => do recordUnfold cinfo.name; go e)
            | c@(.defnInfo _) => do
              if let some e' ← reduceRewrite? e then
                go e'
              else if (← isAuxDef c.name) then
                recordUnfold c.name
                deltaBetaDefinition c lvls e.getAppRevArgs (fun _ => return e) go
              else
                return e
            | .axiomInfo val => recordUnfoldAxiom val.name; rewriteOr e
            | _ => rewriteOr e
      | .proj _ i c =>
        let k (c : Expr) := do
          match (← projectCore? c i) with
          | some e => go e
          | none => return e
        match (← getConfig).proj with
        | .no => return e
        | .yes => k (← go c)
        | .yesWithDelta => k (← whnf c)
        -- Remark: If the current transparency setting is `reducible`, we should not increase it to `instances`
        | .yesWithDeltaI => k (← whnfAtMostI c)
      | _ => unreachable!

/--
  Recall that `_sunfold` auxiliary definitions contains the markers: `markSmartUnfoldingMatch` (*) and `markSmartUnfoldingMatchAlt` (**).
  For example, consider the following definition
  ```
  def r (i j : Nat) : Nat :=
    i +
      match j with
      | Nat.zero => 1
      | Nat.succ j =>
        i + match j with
            | Nat.zero => 2
            | Nat.succ j => r i j
  ```
  produces the following `_sunfold` auxiliary definition with the markers
  ```
  def r._sunfold (i j : Nat) : Nat :=
    i +
      (*) match j with
      | Nat.zero => (**) 1
      | Nat.succ j =>
        i + (*) match j with
            | Nat.zero => (**) 2
            | Nat.succ j => (**) r i j
  ```

  `match` expressions marked with `markSmartUnfoldingMatch` (*) must be reduced, otherwise the resulting term is not definitionally
   equal to the given expression. The recursion may be interrupted as soon as the annotation `markSmartUnfoldingAlt` (**) is reached.

  For example, the term `r i j.succ.succ` reduces to the definitionally equal term `i + i * r i j`
-/
partial def smartUnfoldingReduce? (e : Expr) : MetaM (Option Expr) :=
  go e |>.run
where
  go (e : Expr) : OptionT MetaM Expr := do
    match e with
    | .letE n t v b nondep => mapLetDecl n t (← go v) (nondep := nondep) fun x => go (b.instantiate1 x)
    | .lam .. => lambdaTelescope e fun xs b => do mkLambdaFVars xs (← go b)
    | .app f a .. => return mkApp (← go f) (← go a)
    | .proj _ _ s => return e.updateProj! (← go s)
    | .mdata _ b  =>
      if let some m := smartUnfoldingMatch? e then
        goMatch m
      else
        return e.updateMData! (← go b)
    | _ => return e

  goMatch (e : Expr) : OptionT MetaM Expr := do
    match (← reduceMatcher? e) with
    | ReduceMatcherResult.reduced e =>
      if let some alt := smartUnfoldingMatchAlt? e then
        return alt
      else
        go e
    | ReduceMatcherResult.stuck e' =>
      let mvarId ← getStuckMVar? e'
      /- Try to "unstuck" by resolving pending TC problems -/
      if (← Meta.synthPending mvarId) then
        goMatch e
      else
        failure
    | _ => failure

/--
Returns `true` if `declName` is the name of class field.
-/
private def isProjInst (declName : Name) : MetaM Bool := do
  let some { fromClass := true, .. } ← getProjectionFnInfo? declName | return false
  return true

/--
Auxiliary method for unfolding a class projection. Recall that class fields are not marked with
`[reducible]`, but we want to reduce them when the transparency setting is `.instances`.
For example, given `a b : Nat`, the term `a ≤ b` is `LE.le Nat instLENat a b`.
Unfolding the class field `LE.le` gives `instLENat.1 a b`. This method goes further and
reduces the instance projection to return `Nat.le a b`.
-/
partial def unfoldProjInst? (e : Expr) : MetaM (Option Expr) := do
  let f := e.getAppFn
  let .const declName us := f | return none
  unless (← isProjInst declName) do return none
  let some fInfo ← withDefault <| getUnfoldableConst? declName | return none
  deltaBetaDefinition fInfo us e.getAppRevArgs (fun _ => pure none) fun e' => do
  /-
  Continuing the example: after delta-beta reducing `LE.le`, we get `e'` which is
  `instLENat.1 a b`. We consider the unfolding successful if this instance projection
  reduces to `Nat.le a b` using `.instances` reducibility.
  -/
  let some r ← withReducibleAndInstances <| reduceProj? e'.getAppFn | return none
  recordUnfold declName
  return some <| mkAppN r e'.getAppArgs |>.headBeta

/--
Auxiliary method for unfolding a class projection when transparency is set to `TransparencyMode.instances`.
Recall that class instance projections are not marked with `[reducible]` because we want them to be
in "reducible canonical form".
See `unfoldProjInst?`
-/
partial def unfoldProjInstWhenInstances? (e : Expr) : MetaM (Option Expr) := do
  if (← getTransparency) matches .instances | .implicit then
    unfoldProjInst? e
  else
    return none

/--
When `true`, unfolding a `[reducible]` class field at `TransparencyMode.reducible` also unfolds
the associated instance projection at `TransparencyMode.instances`.

**Motivation:** Consider `a ≤ b` where `a b : Nat` and `LE.le` is `[reducible]`. Unfolding `LE.le`
gives `instLENat.1 a b`, which is stuck because `instLENat` is `[instance_reducible]` (not
`[reducible]`). Similarly, `stM m (ExceptT ε m) α` unfolds to an instance projection that is stuck
at `.reducible`. Without this option, marking a class field as `[reducible]` is pointless when the
instance providing it is only `[instance_reducible]`. This option makes the `[reducible]` annotation
on class fields work as the user expects by temporarily bumping to `.instances` for the projection.

See `unfoldDefault` for the implementation.
-/
register_builtin_option backward.whnf.reducibleClassField : Bool := {
  defValue := true
  descr    := "enables better support for unfolding type class fields marked as `[reducible]`"
}

/--
Default unfolding function. `e` is of the form `f.{us} a₁ ... aₙ`, and `fInfo` is the `ConstantInfo` for `f`.
This function has special support for unfolding class fields.
The support is particularly important when the user marks a class field as `[reducible]` and
the transparency mode is `.reducible`. For example, suppose `e` is `a ≤ b` where `a b : Nat`,
and `LE.le` is marked as `[reducible]`. Simply unfolding `LE.le` would give `instLENat.1 a b`,
which would be stuck because `instLENat` has transparency `[instance_reducible]`. To avoid this, when we unfold
a `[reducible]` class field, we also unfold the associated projection `instLENat.1` using
`withReducibleAndInstances` (i.e. `.instances` transparency), ultimately returning `Nat.le a b`.
-/
private def unfoldDefault (fInfo : ConstantInfo) (us : List Level) (e : Expr) : MetaM (Option Expr) := do
  if fInfo.hasValue then
    recordUnfold fInfo.name
    deltaBetaDefinition fInfo us e.getAppRevArgs (fun _ => pure none) fun e => do
      if !(← getOptionFlags).reducibleClassField then
        return some e
      else if !(← getTransparency) matches .reducible then
        return some e
      else if (← isProjInst fInfo.name) then
        let some r ← withReducibleAndInstances <| reduceProj? e.getAppFn | return some e
        return mkAppN r e.getAppArgs |>.headBeta
      else
        return some e
  else
    if fInfo.isAxiom then
      recordUnfoldAxiom fInfo.name
    return none

mutual
  /--
  Unfold definition using "smart unfolding" if possible.
  If `ignoreTransparency = true`, then the definition is unfolded even if the transparency setting does not allow it.
  -/
  partial def unfoldDefinition? (e : Expr) (ignoreTransparency := false) : MetaM (Option Expr) :=
    match e with
    | .app f _ =>
      matchConstAux (ignoreTransparency := ignoreTransparency) f.getAppFn (fun _ => unfoldProjInstWhenInstances? e) fun fInfo fLvls => do
        if fInfo.levelParams.length != fLvls.length then
          return none
        else
          let unfoldDefault (_ : Unit) : MetaM (Option Expr) :=
            unfoldDefault fInfo fLvls e
          if (← getOptionFlags).smartUnfolding then
            match ((← getEnv).find? (skipRealize := true) (mkSmartUnfoldingNameFor fInfo.name)) with
            | some fAuxInfo@(.defnInfo _) =>
              -- We use `preserveMData := true` to make sure the smart unfolding annotation are not erased in an over-application.
              deltaBetaDefinition fAuxInfo fLvls e.getAppRevArgs (preserveMData := true) (fun _ => pure none) fun e₁ => do
                let some r ← smartUnfoldingReduce? e₁ | return none
                /-
                  If `smartUnfoldingReduce?` succeeds, we should still check whether the argument the
                  structural recursion is recursing on reduces to a constructor.
                  This extra check is necessary in definitions (see issue #1081) such as
                  ```
                  inductive Vector (α : Type u) : Nat → Type u where
                    | nil  : Vector α 0
                    | cons : α → Vector α n → Vector α (n+1)

                  def Vector.insert (a: α) (i : Fin (n+1)) (xs : Vector α n) : Vector α (n+1) :=
                    match i, xs with
                    | ⟨0,   _⟩,        xs => cons a xs
                    | ⟨i+1, h⟩, cons x xs => cons x (xs.insert a ⟨i, Nat.lt_of_succ_lt_succ h⟩)
                  ```
                  The structural recursion is being performed using the vector `xs`. That is, we used `Vector.brecOn` to define
                  `Vector.insert`. Thus, an application `xs.insert a ⟨0, h⟩` is **not** definitionally equal to
                  `Vector.cons a xs` because `xs` is not a constructor application (the `Vector.brecOn` application is blocked).

                  Remark 1: performing structural recursion on `Fin (n+1)` is not an option here because it is a `Subtype` and
                  and the repacking in recursive applications confuses the structural recursion module.

                  Remark 2: the match expression reduces reduces to `cons a xs` when the discriminants are `⟨0, h⟩` and `xs`.

                  Remark 3: this check is unnecessary in most cases, but we don't need dependent elimination to trigger the issue
                  fixed by this extra check. Here is another example that triggers the issue fixed by this check.
                  ```
                  def f : Nat → Nat → Nat
                    | 0,   y   => y
                    | x+1, y+1 => f (x-2) y
                    | x+1, 0   => 0

                  theorem ex : f 0 y = y := rfl
                  ```

                  Remark 4: the `return some r` in the following `let` is not a typo. Binport generated .olean files do not
                  store the position of recursive arguments for definitions using structural recursion.
                  Thus, we should keep `return some r` until Mathlib has been ported to Lean 3.
                  Note that the `Vector` example above does not even work in Lean 3.
                -/
                let some recArgPos ← getStructuralRecArgPos? fInfo.name
                  | recordUnfold fInfo.name; return some r
                let numArgs := e.getAppNumArgs
                if recArgPos >= numArgs then return none
                let recArg := e.getArg! recArgPos numArgs
                if !(← isConstructorApp (← whnfMatcher recArg)) then return none
                recordUnfold fInfo.name
                return some r
            | _ =>
              if (← getMatcherInfo? fInfo.name).isSome then
                -- Recall that `whnfCore` tries to reduce "matcher" applications.
                return none
              else
                unfoldDefault ()
          else
            unfoldDefault ()
    | .const declName lvls => do
      let some cinfo ← getConstInfoNoEx? declName ignoreTransparency | pure none
      -- check smart unfolding only after `getUnfoldableConstNoEx?` because smart unfoldings have a
      -- significant chance of not existing and `Environment.contains` misses are more costly
      if (← getOptionFlags).smartUnfolding && (← getEnv).contains (mkSmartUnfoldingNameFor declName) then
        return none
      else
        unless cinfo.hasValue do
          if cinfo.isAxiom then
            recordUnfoldAxiom cinfo.name
          return none
        deltaDefinition cinfo lvls
          (fun _ => pure none)
          (fun e => do recordUnfold declName; pure (some e))
    | _ => return none
end

def unfoldDefinition (e : Expr) : MetaM Expr := do
  let some e ← unfoldDefinition? e | throwError "failed to unfold definition{indentExpr e}"
  return e

@[specialize] partial def whnfHeadPred (e : Expr) (pred : Expr → MetaM Bool) : MetaM Expr :=
  whnfEasyCases e fun e => do
    let e ← whnfCore e
    if (← pred e) then
        match (← unfoldDefinition? e) with
        | some e => whnfHeadPred e pred
        | none   => return e
    else
      return e

def whnfUntil (e : Expr) (declName : Name) : MetaM (Option Expr) := do
  let e ← whnfHeadPred e (fun e => return !e.isAppOf declName)
  if e.isAppOf declName then
    return e
  else
    return none

/-- Applies `whnfCore` while unfolding type annotations (`outParam`/`optParam`/etc.). -/
partial def whnfCoreUnfoldingAnnotations (e : Expr) : MetaM Expr :=
  whnfHeadPred e (fun e => return e.isTypeAnnotation)

/-- Try to reduce matcher/recursor/quot applications. We say they are all "morally" recursor applications. -/
def reduceRecMatcher? (e : Expr) : MetaM (Option Expr) := do
  let e := e.consumeMData
  if !e.isApp then
    return none
  else match (← reduceMatcher? e) with
    | .reduced e => return e
    | _ =>
      let .const cname lvls := e.getAppFn | return none
      let some cinfo := (← getEnv).find? cname | return none
      match cinfo with
      | .recInfo «rec»  => reduceRec «rec» lvls e.getAppArgs (fun _ => pure none) (fun e => do recordUnfold cinfo.name; pure (some e))
      | .quotInfo «rec» => reduceQuotRec «rec» e.getAppArgs (fun _ => pure none) (fun e => do recordUnfold cinfo.name; pure (some e))
      | c@(.defnInfo _) =>
        if (← isAuxDef c.name) then
          deltaBetaDefinition c lvls e.getAppRevArgs (fun _ => pure none) (fun e => do recordUnfold c.name; pure (some e))
        else
          return none
      | _ => return none

@[inline] def withNatValue (a : Expr) (k : Nat → MetaM (Option α)) : MetaM (Option α) := do
  if !a.hasExprMVar && a.hasFVar then
    return none
  let a ← instantiateMVars a
  if a.hasExprMVar || a.hasFVar then
    return none
  let a ← whnf a
  match a with
  | .const ``Nat.zero _ => k 0
  | .lit (.natVal v)    => k v
  | _                   => return none

def reduceUnaryNatOp (f : Nat → Nat) (a : Expr) : MetaM (Option Expr) :=
  withNatValue a fun a =>
  return mkRawNatLit <| f a

def reduceBinNatOp (f : Nat → Nat → Nat) (a b : Expr) : MetaM (Option Expr) :=
  withNatValue a fun a =>
  withNatValue b fun b => do
  trace[Meta.isDefEq.whnf.reduceBinOp] "{a} op {b}"
  return mkRawNatLit <| f a b

def reducePow (a b : Expr) : MetaM (Option Expr) :=
  withNatValue a fun a =>
  withNatValue b fun b => OptionT.run do
  guard (← checkExponent b)
  trace[Meta.isDefEq.whnf.reduceBinOp] "{a} ^ {b}"
  return mkRawNatLit <| a ^ b

def reduceBinNatPred (f : Nat → Nat → Bool) (a b : Expr) : MetaM (Option Expr) := do
  withNatValue a fun a =>
  withNatValue b fun b =>
  return toExpr <| f a b

def reduceNat? (e : Expr) : MetaM (Option Expr) :=
  match e with
  | .app (.const fn _) a =>
    if fn == ``Nat.succ then
      reduceUnaryNatOp Nat.succ a
    else
      return none
  | .app (.app (.const fn _) a1) a2 =>
    match fn with
    | ``Nat.add => reduceBinNatOp Nat.add a1 a2
    | ``Nat.sub => reduceBinNatOp Nat.sub a1 a2
    | ``Nat.mul => reduceBinNatOp Nat.mul a1 a2
    | ``Nat.div => reduceBinNatOp Nat.div a1 a2
    | ``Nat.mod => reduceBinNatOp Nat.mod a1 a2
    | ``Nat.pow => reducePow a1 a2
    | ``Nat.gcd => reduceBinNatOp Nat.gcd a1 a2
    | ``Nat.beq => reduceBinNatPred Nat.beq a1 a2
    | ``Nat.ble => reduceBinNatPred Nat.ble a1 a2
    | ``Nat.land => reduceBinNatOp Nat.land a1 a2
    | ``Nat.lor  => reduceBinNatOp Nat.lor a1 a2
    | ``Nat.xor  => reduceBinNatOp Nat.xor a1 a2
    | ``Nat.shiftLeft  => reduceBinNatOp Nat.shiftLeft a1 a2
    | ``Nat.shiftRight => reduceBinNatOp Nat.shiftRight a1 a2
    | _ => return none
  | _ =>
    return none


/--
The key of `e` in the whnf cache, if `e` may be cached. The key holds the active rule set
(`getRewriteCacheBits`), because the result depends on it.
-/
@[inline] private def whnfCacheKey? (e : Expr) : MetaM (Option ExprConfigCacheKey) := do
  -- We cache only closed terms without expr metavars.
  -- Potential refinement: cache if `e` is not stuck at a metavariable
  if e.hasFVar || e.hasExprMVar || (← read).customCanUnfoldPredicate?.isSome then
    return none
  else
    return some (← mkExprConfigCacheKey e (← getRewriteCacheBits))

@[inline] private def cached? (key? : Option ExprConfigCacheKey) : MetaM (Option Expr) := do
  if let some key := key? then
    return (← get).cache.whnf.find? key
  else
    return none

private def cache (key? : Option ExprConfigCacheKey) (r : Expr) : MetaM Expr := do
  if let some key := key? then
    modify fun s => { s with cache.whnf := s.cache.whnf.insert key r }
  return r

/-- Whether `e` has a head with rewrite rules and its unfolding `r` ended stuck rather than in a value. -/
def isStuckRewriteOrigin (e r : Expr) : MetaM Bool := do
  let .const f _ := e.getAppFn | return false
  if ((← getEnv).rewriteRulesFor f).isEmpty then return false
  match r with
  | .lam .. | .forallE .. | .sort _ | .lit _ => return false
  | _ =>
    let .const g _ := r.getAppFn | return true
    return !((← getEnv).find? g matches some (.ctorInfo _))

set_option compiler.ignoreBorrowAnnotation true in
@[export lean_whnf]
partial def whnfImp (e : Expr) : MetaM Expr :=
  withIncRecDepth <| whnfEasyCases e fun e => do
    let key? ← whnfCacheKey? e
    match (← cached? key?) with
    | some e' => pure e'
    | none    =>
      withTraceNode `Meta.whnf (fun _ => return m!"Non-easy whnf: {e}") do
        checkSystem "whnf"
        let e' ← whnfCore e
        match (← reduceNat? e') with
        | some v => cache key? v
        | none   =>
          match (← unfoldDefinition? e') with
          | some e'' =>
            -- a rule marked `@[rewrite ↓]` fires instead of the unfolding
            if let some e''' ← reduceRewriteBeforeDelta? e' then
              return ← cache key? (← whnfImp e''')
            let r ← whnfImp e''
            -- the unfolding of a head with rules got stuck, so its rules get their turn
            if (← isStuckRewriteOrigin e' r) then
              if let some e''' ← reduceRewrite? e' (stuck := true) then
                return ← cache key? (← whnfImp e''')
            cache key? r
          | none =>
            -- smart unfolding refuses to unfold a definition whose match is stuck, which counts as stuck too
            if let some e''' ← reduceRewrite? e' (stuck := true) then
              cache key? (← whnfImp e''')
            else
              cache key? e'

/-- If `e` is a projection function that satisfies `p`, then reduce it -/
def reduceProjOf? (e : Expr) (p : Name → Bool) : MetaM (Option Expr) := do
  if !e.isApp then
    pure none
  else match e.getAppFn with
    | .const name .. => do
      let env ← getEnv
      match env.getProjectionStructureName? name with
      | some structName =>
        if p structName then
          Meta.unfoldDefinition? e
        else
          pure none
      | none => pure none
    | _ => pure none

builtin_initialize
  registerTraceClass `Meta.whnf
  registerTraceClass `Meta.isDefEq.whnf.reduceBinOp

end Lean.Meta

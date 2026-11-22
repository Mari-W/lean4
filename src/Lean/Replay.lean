/-
Copyright (c) 2023 Kim Morrison. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kim Morrison
-/
module

prelude
import Lean.CoreM
public import Lean.AddDecl
import Lean.Util.FoldConsts

/-!
# `Lean.Kernel.Environment.replay`

`replay env constantMap` will "replay" all the constants in `constantMap : HashMap Name ConstantInfo` into `env`,
sending each declaration to the kernel for checking.

`replay` does not send constructors or recursors in `constantMap` to the kernel,
but rather checks that they are identical to constructors or recursors generated in the environment
after replaying any inductive definitions occurring in `constantMap`.

`replay` can be used either as:
* a verifier for a `Kernel.Environment`, by sending everything to the kernel, or
* a mechanism to safely transfer constants from one `Kernel.Environment` to another.

-/

namespace Lean.Kernel.Environment

namespace Replay

structure Context where
  newConstants : Std.HashMap Name ConstantInfo
  /-- The rewrite rules of the source, registered again as their theorems are replayed. -/
  rewrites : Rewrites := {}
  /--
  For each new constant, the abstract definitions of the target that it is a member of in the
  source but not in the target (`unfolding_abstract` in a later module).
  -/
  addedMembers : Std.HashMap Name (Array Name) := {}

structure State where
  env : Kernel.Environment
  remaining : NameSet := {}
  pending : NameSet := {}
  postponedConstructors : NameSet := {}
  postponedRecursors : NameSet := {}

abbrev M := ReaderT Context <| StateRefT State IO

/-- Check if a `Name` still needs processing. If so, move it from `remaining` to `pending`. -/
def isTodo (name : Name) : M Bool := do
  let r := (← get).remaining
  if r.contains name then
    modify fun s => { s with remaining := s.remaining.erase name, pending := s.pending.insert name }
    return true
  else
    return false

/-- Use the current `Environment` to throw a `Kernel.Exception`. -/
def throwKernelException (ex : Kernel.Exception) : M Unit := do
  throw <| .userError <| (← ex.toMessageData {} |>.toString)

/--
Add a declaration under the rule set the source checked `name` under, possibly throwing a
`Kernel.Exception`. If `name` is a rewrite rule or an abstract definition of the source, register
it.
-/
def addDecl (name : Name) (d : Declaration) : M Unit := do
  let rules := (← read).rewrites.sets.findD name #[]
  for c in (← read).addedMembers.getD name #[] do
    modify fun s => { s with env := s.env.addAbstractMember c name }
  match (← get).env.addDeclCore 0 0 d (cancelTk? := none) rules with
  | .ok env => modify fun s => { s with env := env }
  | .error ex => throwKernelException ex
  if let some rule := (← read).rewrites.rules.find? name then
    match (← get).env.addRewriteRule name rule.prio rule.beforeDelta with
    | .ok env => modify fun s => { s with env := env }
    | .error ex => throwKernelException ex
  -- an abstract definition carries its members, so registering it right away is faithful
  if let some members := (← read).rewrites.abstracts.find? name then
    match (← get).env.addAbstract name members with
    | .ok env => modify fun s => { s with env := env }
    | .error ex => throwKernelException ex

mutual
/--
Check if a `Name` still needs to be processed (i.e. is in `remaining`).

If so, recursively replay any constants it refers to,
to ensure we add declarations in the right order.

The construct the `Declaration` from its stored `ConstantInfo`,
and add it to the environment.
-/
partial def replayConstant (name : Name) : M Unit := do
  if ← isTodo name then
    let some ci := (← read).newConstants[name]? | unreachable!
    replayConstants ci.getUsedConstantsAsSet
    -- The rules `name` was checked under must be registered first.
    for h in (← read).rewrites.sets.findD name #[] do
      replayConstant h
    -- Check that this name is still pending: a mutual block may have taken care of it.
    if (← get).pending.contains name then
      try
        match ci with
        | .defnInfo   info =>
          addDecl name (Declaration.defnDecl   info)
        | .thmInfo    info =>
          -- Ignore duplicate theorems. This code is identical to that in `finalizeImport` before it
          -- added extended duplicates support for the module system, which is not relevant for us
          -- here as we always load all .olean information. We need this case *because* of the module
          -- system -- as we have more data loaded than it, we might encounter duplicate private
          -- theorems where elaboration under the module system would have only one of them in scope.
          if let some (.thmInfo info') := (← get).env.find? ci.name then
            if info.name == info'.name &&
              info.type == info'.type &&
              info.levelParams == info'.levelParams &&
              info.all == info'.all
            then
              return
          addDecl name (Declaration.thmDecl    info)
        | .axiomInfo  info =>
          addDecl name (Declaration.axiomDecl  info)
        | .opaqueInfo info =>
          addDecl name (Declaration.opaqueDecl info)
        | .inductInfo info =>
          let lparams := info.levelParams
          let nparams := info.numParams
          let all ← info.all.mapM fun n => do pure <| ((← read).newConstants[n]!)
          for o in all do
            modify fun s =>
              { s with remaining := s.remaining.erase o.name, pending := s.pending.erase o.name }
          let ctorInfo ← all.mapM fun ci => do
            pure (ci, ← ci.inductiveVal!.ctors.mapM fun n => do
              pure ((← read).newConstants[n]!))
          -- Make sure we are really finished with the constructors.
          for (_, ctors) in ctorInfo do
            for ctor in ctors do
              replayConstants ctor.getUsedConstantsAsSet
          let types : List InductiveType := ctorInfo.map fun ⟨ci, ctors⟩ =>
            { name := ci.name
              type := ci.type
              ctors := ctors.map fun ci => { name := ci.name, type := ci.type } }
          addDecl name (Declaration.inductDecl lparams nparams types false)
        -- We postpone checking constructors,
        -- and at the end make sure they are identical
        -- to the constructors generated when we replay the inductives.
        | .ctorInfo info =>
          modify fun s => { s with postponedConstructors := s.postponedConstructors.insert info.name }
        -- Similarly we postpone checking recursors.
        | .recInfo info =>
          modify fun s => { s with postponedRecursors := s.postponedRecursors.insert info.name }
        | .quotInfo _ =>
          -- `Quot.lift` and `Quot.ind` have types that reference `Eq`,
          -- so we need to ensure `Eq` is replayed before adding the quotient declaration.
          replayConstant `Eq
          addDecl name (Declaration.quotDecl)
        modify fun s => { s with pending := s.pending.erase name }
      catch ex =>
        throw <| .userError s!"while replaying declaration '{name}':\n{ex}"

/-- Replay a set of constants one at a time. -/
partial def replayConstants (names : NameSet) : M Unit := do
  for n in names do replayConstant n

end

/--
Check that all postponed constructors are identical to those generated
when we replayed the inductives.
-/
def checkPostponedConstructors : M Unit := do
  for ctor in (← get).postponedConstructors do
    match (← get).env.find? ctor, (← read).newConstants[ctor]? with
    | some (.ctorInfo info), some (.ctorInfo info') =>
      if ! (info == info') then throw <| IO.userError s!"Invalid constructor {ctor}"
    | _, _ => throw <| IO.userError s!"No such constructor {ctor}"

/--
Check that all postponed recursors are identical to those generated
when we replayed the inductives.
-/
def checkPostponedRecursors : M Unit := do
  for ctor in (← get).postponedRecursors do
    match (← get).env.find? ctor, (← read).newConstants[ctor]? with
    | some (.recInfo info), some (.recInfo info') =>
      if ! (info == info') then throw <| IO.userError s!"Invalid recursor {ctor}"
    | _, _ => throw <| IO.userError s!"No such recursor {ctor}"

end Replay

open Replay

/--
"Replay" some constants into a `Kernel.Environment`, sending them to the kernel for checking.

Throws a `IO.userError` if the kernel rejects a constant,
or if there are malformed recursors or constructors for inductive types.

Each constant is checked under the rule set `rewrites` records for it, and the rewrite rules of
`rewrites` are registered as their theorems are replayed.
-/
public def replay (newConstants : Std.HashMap Name ConstantInfo) (env : Kernel.Environment)
    (rewrites : Rewrites := {}) : IO Kernel.Environment := do
  let mut remaining : NameSet := ∅
  for (n, ci) in newConstants.toList do
    -- We skip unsafe constants, and also partial constants.
    -- Later we may want to handle partial constants.
    if !ci.isUnsafe && !ci.isPartial then
      remaining := remaining.insert n
  -- members added to abstract definitions of the target, which are not replayed themselves
  let addedMembers := rewrites.abstracts.fold (init := ({} : Std.HashMap Name (Array Name)))
      fun acc c members =>
        match env.abstractMembers? c with
        | none => acc
        | some old => members.foldl (init := acc) fun acc m =>
          if newConstants.contains m && !old.contains m then acc.insert m ((acc.getD m #[]).push c)
          else acc
  let (_, s) ← StateRefT'.run (s := { env, remaining }) do
    ReaderT.run (r := { newConstants, rewrites, addedMembers }) do
      for n in remaining do
        replayConstant n
      checkPostponedConstructors
      checkPostponedRecursors
  return s.env

end Kernel.Environment

@[deprecated Kernel.Environment.replay +typeChanged (since := "2026-07-14")]
public def Environment.replay (newConstants : Std.HashMap Name ConstantInfo) (env : Environment) :
    IO Environment := do
  return .ofKernelEnv (← env.toKernelEnv.replay newConstants)

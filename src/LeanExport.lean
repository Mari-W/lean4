/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Henrik Böving
-/
import LeanExport.Basic
import LeanExport.Parse

open Lean LeanExport

def main (args : List String) : IO Unit := do
  initSearchPath (← findSysroot)
  let (opts, args) := args.partition (fun s => s.startsWith "--" && s.length ≥ 3)
  let (imports, constants) := args.span (· != "--")
  let imports := imports.toArray.map fun mod => { module := Syntax.decodeNameLit ("`" ++ mod) |>.get! }
  let env ← importModules imports {}
  let constants? := constants.tail?.map fun cs =>
    cs.map fun c => Syntax.decodeNameLit ("`" ++ c) |>.get!
  -- `LEANEXPORT_RULES=file` (one theorem per line, optional priority) registers rewrite rules that
  -- every declaration outside their dependencies is checked under, and `LEANEXPORT_ABSTRACT=file`
  -- makes definitions abstract with the rule theorems as members, as in an `abstract_block`.
  -- Together they export a proof of concept without rebuilding the library. See also
  -- `LEANEXPORT_TRUST` below.
  let readLines (var : String) : IO (Array String) := do
    let some f ← IO.getEnv var | return #[]
    return (← IO.FS.lines f).filter (!·.trimAscii.toString.isEmpty)
  let toName (s : String) : Name := Syntax.decodeNameLit ("`" ++ s) |>.get!
  let fail (what : String) (ex : Kernel.Exception) : IO Unit := do
    throw <| .userError s!"{what}: {← (ex.toMessageData {}).toString}"
  let mut env := env
  let mut rules := #[]
  for line in ← readLines "LEANEXPORT_RULES" do
    let ws := line.trimAscii.toString.splitOn " " |>.filter (!·.isEmpty)
    let thm := toName ws[0]!
    let prio := (ws[1]?.bind (·.toNat?)).getD 1000
    match env.addRewriteRule thm prio with
    | .ok e => env := e
    | .error ex => fail s!"rule {thm}" ex
    rules := rules.push thm
  for line in ← readLines "LEANEXPORT_ABSTRACT" do
    let c := toName line.trimAscii.toString
    match env.addAbstract c rules with
    | .ok e => env := e
    | .error ex => fail s!"abstract {c}" ex
  let mut ruleDeps : NameSet := {}
  let mut todo := rules.toList
  while !todo.isEmpty do
    let c := todo.head!
    todo := todo.tail!
    unless ruleDeps.contains c do
      ruleDeps := ruleDeps.insert c
      if let some ci := env.find? c then
        todo := ci.getUsedConstantsAsSet.toList ++ todo
  -- `LEANEXPORT_TRUST=file` exports these theorems as axioms, the proofs a measurement leaves out
  let trusted := (← readLines "LEANEXPORT_TRUST").foldl (fun s l => s.insert (toName l.trimAscii.toString)) ({} : NameSet)
  dumpEnv env constants? opts rules ruleDeps trusted

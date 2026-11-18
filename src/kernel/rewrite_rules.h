/*
Copyright (c) 2026 Marius Weidner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Marius Weidner
*/
#pragma once
#include <vector>
#include "runtime/array_ref.h"
#include "util/name_map.h"
#include "util/nat.h"
#include "kernel/environment.h"

namespace lean {
/* Firings allowed per outermost `whnf`/`whnf_core` call before the kernel gives up. */
#define LEAN_REWRITE_FIRE_BUDGET 65536
/* Firings allowed in one declaration's check. Lazy delta resets the budget above at every step, so
   a rule whose right-hand side unfolds back to its left-hand side needs this one to stop. */
#define LEAN_REWRITE_DECL_BUDGET 4194304

/* A user rewrite rule `∀ xs, l = r` read off its theorem. `m_lhs` and `m_rhs` live under the
   `m_nvars` binders `xs`: the loose bound variable `i` names `xs[m_nvars - 1 - i]`. */
struct rewrite_rule {
    name     m_thm;
    name     m_head;
    /* Priority; the rules of a head fire highest first, then by `Name.cmp`. */
    nat      m_prio;
    names    m_lparams;
    unsigned m_nvars;
    /* Number of arguments the head takes in `m_lhs`. */
    unsigned m_nargs;
    expr     m_lhs;
    expr     m_rhs;
};

/* Read the rule stored as `thm`, checking the version 1 fragment: the statement is `∀ xs, l = r`,
   `l` is a constant outside the basis applied to first-order patterns, every variable of `xs`
   occurs in `l` (a repeated one is matched up to definitional equality), and every level parameter
   of `r` occurs as a `.param` level of a constant in `l`. Throws a `kernel_exception` otherwise. */
rewrite_rule read_rewrite_rule(environment const & env, name const & thm);

/* The rules of a rule set grouped by head, each group in firing order: by priority, highest
   first, then by `Name.cmp`. */
class rewrite_rule_table {
    name_map<std::vector<rewrite_rule>> m_table;
public:
    rewrite_rule_table() {}
    /* Throws a `kernel_exception` if a name in `rules` is not a registered rule. */
    rewrite_rule_table(environment const & env, array_ref<name> const & rules);
    bool empty() const { return m_table.empty(); }
    bool has_head(name const & head) const { return m_table.contains(head); }
    std::vector<rewrite_rule> const * find(name const & head) const { return m_table.find(head); }
};
}

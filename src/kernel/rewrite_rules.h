/*
Copyright (c) 2026 Marius Weidner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Marius Weidner
*/
#pragma once
#include <vector>
#include <memory>
#include <climits>
#include <unordered_map>
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
    /* `@[rewrite ↓]`: the rule fires before its head is unfolded, not only when the unfolding gets stuck. */
    bool     m_before_delta;
    names    m_lparams;
    unsigned m_nvars;
    /* Number of arguments the head takes in `m_lhs`. */
    unsigned m_nargs;
    expr     m_lhs;
    expr     m_rhs;
    /* The key of the rule (`rewrite_rule_key`): the argument position `m_key_pos` of `m_lhs` whose
       pattern has the constant head `m_key_const`, or `UINT_MAX` if no argument has one. */
    unsigned m_key_pos = UINT_MAX;
    name     m_key_const;
};

/* Read the rule stored as `thm`, checking the version 1 fragment: the statement is `∀ xs, l = r`,
   `l` is a constant outside the basis applied to first-order patterns, every variable of `xs`
   occurs in `l` (a repeated one is matched up to definitional equality), and every level parameter
   of `r` occurs as a `.param` level of a constant in `l`. Throws a `kernel_exception` otherwise. */
rewrite_rule read_rewrite_rule(environment const & env, name const & thm);

/* The rules of one head in firing order, and the head's constant. The constant is fixed for every
   environment that shares the registered rules, so it stands in for an environment lookup. */
struct rewrite_head {
    optional<constant_info>   m_info;
    std::vector<rewrite_rule> m_rules;
};

/* The rules of one head that fire before unfolding and share a key, in firing order. */
struct rewrite_pre_group {
    unsigned                  m_pos;
    name                      m_const;
    std::vector<rewrite_rule> m_rules;
};

/* The rules of one head that fire before unfolding, grouped by key. A term is a candidate for a
   group if its argument at `m_pos` has the head constant `m_const`; a group with `m_pos ==
   UINT_MAX` takes every term. */
struct rewrite_pre_head {
    optional<constant_info>        m_info;
    std::vector<rewrite_pre_group> m_groups;
};

/* The rules of a rule set grouped by head, each group in firing order: by priority, highest
   first, then by `Name.cmp`. */
class rewrite_rule_table {
public:
    struct table {
        name_map<rewrite_head> m_heads;
        /* One bit per head name hash, so most constants are rejected without a tree lookup. */
        uint64_t               m_filter[4] = {0, 0, 0, 0};
        static unsigned bit(name const & n) { return n.hash() & 255; }
        bool may_have(name const & n) const { return (m_filter[bit(n) >> 6] >> (bit(n) & 63)) & 1; }
        /* The heads with rules that fire before unfolding, hashed. */
        std::unordered_map<name, rewrite_pre_head, name_hash_fn> m_pre;
        bool                   m_has_pre = false;
    };
private:
    std::shared_ptr<table const> m_table;
public:
    rewrite_rule_table():m_table(std::make_shared<table const>()) {}
    /* Throws a `kernel_exception` if a name in `rules` is not a registered rule. Tables are cached by
       the set's content together with the registered-rules map it was read under: a theorem name
       registered in that map names the same theorem in every environment that shares the map. */
    rewrite_rule_table(environment const & env, array_ref<name> const & rules);
    bool empty() const { return m_table->m_heads.empty(); }
    /* The same token means the same rules; null for an empty table. */
    std::shared_ptr<void const> token() const { return empty() ? nullptr : std::shared_ptr<void const>(m_table); }
    bool has_head(name const & head) const { return m_table->may_have(head) && m_table->m_heads.contains(head); }
    rewrite_head const * find(name const & head) const {
        return m_table->may_have(head) ? m_table->m_heads.find(head) : nullptr;
    }
    /* Whether a rule fires before unfolding. */
    bool has_before_delta() const { return m_table->m_has_pre; }
    /* The rules of `head` that fire before unfolding, if any. */
    rewrite_pre_head const * find_before_delta(name const & head) const {
        auto it = m_table->m_pre.find(head);
        return it == m_table->m_pre.end() ? nullptr : &it->second;
    }
};
}

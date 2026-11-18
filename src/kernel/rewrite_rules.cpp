/*
Copyright (c) 2026 Marius Weidner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Marius Weidner
*/
#include <vector>
#include <algorithm>
#include "runtime/sstream.h"
#include "kernel/rewrite_rules.h"
#include "kernel/kernel_exception.h"
#include "kernel/for_each_fn.h"

namespace lean {
/* `Nat`, `Eq`, `False` and `Quot` with their constructors and recursors. */
static bool is_rewrite_basis(name const & n) {
    static char const * const basis[][2] = {
        {"Nat", nullptr}, {"Nat", "zero"}, {"Nat", "succ"}, {"Nat", "rec"},
        {"Eq", nullptr}, {"Eq", "refl"}, {"Eq", "rec"},
        {"False", nullptr}, {"False", "rec"},
        {"Quot", nullptr}, {"Quot", "mk"}, {"Quot", "lift"}, {"Quot", "ind"}};
    for (auto const & b : basis) {
        name c = b[1] ? name{b[0], b[1]} : name(b[0]);
        if (n == c)
            return true;
    }
    return false;
}

[[noreturn]] static void throw_invalid_rule(environment const & env, name const & thm, sstream const & msg) {
    throw kernel_exception(env, sstream() << "invalid rewrite rule '" << thm << "', " << msg.str());
}

namespace {
struct check_rule_fn {
    environment const & m_env;
    name const &        m_thm;
    unsigned            m_nvars;
    std::vector<bool>   m_seen;
    buffer<name>        m_bound_lparams;

    check_rule_fn(environment const & env, name const & thm, unsigned nvars):
        m_env(env), m_thm(thm), m_nvars(nvars), m_seen(nvars, false) {}

    void bind_levels(levels const & ls) {
        for (level const & l : ls)
            if (is_param(l))
                m_bound_lparams.push_back(param_id(l));
    }

    void app(expr const & p) {
        buffer<expr> args;
        expr const & f = get_app_args(p, args);
        if (!is_constant(f))
            throw_invalid_rule(m_env, m_thm, sstream() << "the subterm '" << p << "' of its left-hand side is not a first-order pattern");
        bind_levels(const_levels(f));
        for (expr const & arg : args)
            pattern(arg);
    }

    void pattern(expr const & p) {
        if (is_bvar(p)) {
            nat const & idx = bvar_idx(p);
            if (!idx.is_small() || idx.get_small_value() >= m_nvars)
                throw_invalid_rule(m_env, m_thm, sstream() << "its left-hand side has a loose bound variable");
            unsigned j = m_nvars - 1 - idx.get_small_value();
            m_seen[j] = true;
        } else {
            app(p);
        }
    }
};
}

rewrite_rule read_rewrite_rule(environment const & env, name const & thm) {
    constant_info info = env.get(thm);
    expr type = info.get_type();
    unsigned nvars = 0;
    while (is_pi(type)) {
        type = binding_body(type);
        nvars++;
    }
    buffer<expr> eq_args;
    expr const & eq = get_app_args(type, eq_args);
    if (!is_constant(eq, name("Eq")) || eq_args.size() != 3)
        throw_invalid_rule(env, thm, sstream() << "its statement is not an equation `∀ xs, l = r`");
    expr const & lhs  = eq_args[1];
    expr const & rhs  = eq_args[2];
    expr const & head = get_app_fn(lhs);
    if (!is_constant(head))
        throw_invalid_rule(env, thm, sstream() << "the head of its left-hand side is not a constant");
    if (is_rewrite_basis(const_name(head)))
        throw_invalid_rule(env, thm, sstream() << "its head '" << const_name(head) << "' belongs to the basis (Nat, Eq, False, Quot)");
    check_rule_fn check(env, thm, nvars);
    check.app(lhs);
    for (unsigned j = 0; j < nvars; j++) {
        if (!check.m_seen[j])
            throw_invalid_rule(env, thm, sstream() << "the variable #" << j << " does not occur in its left-hand side");
    }
    names bound(check.m_bound_lparams);
    for_each(rhs, [&](expr const & e) {
            optional<name> undef;
            if (is_constant(e)) {
                for (level const & l : const_levels(e))
                    if (!undef)
                        undef = get_undef_param(l, bound);
            } else if (is_sort(e)) {
                undef = get_undef_param(sort_level(e), bound);
            }
            if (undef)
                throw_invalid_rule(env, thm, sstream() << "the universe parameter '" << *undef << "' of its right-hand side does not occur in its left-hand side");
            return true;
        });
    return rewrite_rule{thm, const_name(head), env.get_rewrite_prio(thm), info.get_lparams(), nvars, get_app_num_args(lhs), lhs, rhs};
}

rewrite_rule_table::rewrite_rule_table(environment const & env, array_ref<name> const & rules) {
    for (name const & thm : rules) {
        if (!env.get_rewrite_head(thm))
            throw kernel_exception(env, sstream() << "unknown rewrite rule '" << thm << "'");
        rewrite_rule r = read_rewrite_rule(env, thm);
        std::vector<rewrite_rule> group;
        if (std::vector<rewrite_rule> const * g = m_table.find(r.m_head))
            group = *g;
        group.push_back(r);
        std::sort(group.begin(), group.end(), [](rewrite_rule const & a, rewrite_rule const & b) {
                return b.m_prio < a.m_prio || (a.m_prio == b.m_prio && cmp(a.m_thm, b.m_thm) < 0);
            });
        m_table.insert(r.m_head, group);
    }
}
}

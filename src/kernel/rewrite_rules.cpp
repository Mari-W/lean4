/*
Copyright (c) 2026 Marius Weidner. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Marius Weidner
*/
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <unordered_map>
#include "runtime/sstream.h"
#include "runtime/hash.h"
#include "kernel/rewrite_rules.h"
#include "kernel/kernel_exception.h"
#include "kernel/for_each_fn.h"

namespace lean {
/* `Nat`, `Eq`, `False` and `Quot` with their constructors and recursors. */
static bool is_rewrite_basis(name const & n) {
    /* Built once and never freed, like the table cache below. */
    static std::vector<name> const * basis = [] {
        static char const * const strs[][2] = {
            {"Nat", nullptr}, {"Nat", "zero"}, {"Nat", "succ"}, {"Nat", "rec"},
            {"Eq", nullptr}, {"Eq", "refl"}, {"Eq", "rec"},
            {"False", nullptr}, {"False", "rec"},
            {"Quot", nullptr}, {"Quot", "mk"}, {"Quot", "lift"}, {"Quot", "ind"}};
        auto * r = new std::vector<name>();
        for (auto const & b : strs) {
            r->push_back(b[1] ? name{b[0], b[1]} : name(b[0]));
            mark_persistent(r->back().raw());
        }
        return r;
    }();
    for (name const & c : *basis) {
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

/* The key of a rule with left-hand side `lhs`: the first argument in an instance-implicit position
   of the head whose pattern has a constant head, else the first argument whose pattern has one. */
static void set_rewrite_rule_key(environment const & env, rewrite_rule & r) {
    buffer<expr> args;
    expr const & f = get_app_args(r.m_lhs, args);
    optional<constant_info> info = env.find(const_name(f));
    expr t = info ? info->get_type() : expr();
    unsigned first = UINT_MAX;
    for (unsigned i = 0; i < args.size(); i++) {
        bool inst = info && is_pi(t) && is_inst_implicit(binding_info(t));
        if (info && is_pi(t))
            t = binding_body(t);
        expr const & h = get_app_fn(args[i]);
        if (!is_constant(h))
            continue;
        if (inst) {
            r.m_key_pos = i;
            r.m_key_const = const_name(h);
            return;
        }
        if (first == UINT_MAX)
            first = i;
    }
    if (first != UINT_MAX) {
        r.m_key_pos = first;
        r.m_key_const = const_name(get_app_fn(args[first]));
    }
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
    rewrite_rule r{thm, const_name(head), env.get_rewrite_prio(thm), env.get_rewrite_before_delta(thm),
                   info.get_lparams(), nvars, get_app_num_args(lhs), lhs, rhs};
    set_rewrite_rule_key(env, r);
    return r;
}

static uint64_t rule_set_hash(array_ref<name> const & s) {
    uint64_t h = s.size();
    for (name const & n : s)
        h = hash(h, n.hash());
    return h;
}

static bool same_rule_set(array_ref<name> const & a, array_ref<name> const & b) {
    if (a.raw() == b.raw())
        return true;
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

namespace {
struct rule_table_cache_entry {
    object_ref                                       m_rules_map;
    array_ref<name>                                  m_set;
    uint64_t                                         m_hash;
    std::shared_ptr<rewrite_rule_table::table const> m_table;
};
}

rewrite_rule_table::rewrite_rule_table(environment const & env, array_ref<name> const & rules) {
    /* Each entry keeps its set and rules map alive, so their addresses cannot be reused. The cache is
       never freed: a destructor at thread exit would release Lean objects after the runtime has shut
       down. */
    static thread_local auto * cache_ptr = new std::vector<rule_table_cache_entry>();
    auto & cache = *cache_ptr;
    object_ref rules_map = env.get_rewrite_rules_map();
    for (auto const & entry : cache) {
        if (entry.m_set.raw() == rules.raw() && entry.m_rules_map.raw() == rules_map.raw()) {
            m_table = entry.m_table;
            return;
        }
    }
    uint64_t h = rule_set_hash(rules);
    for (auto const & entry : cache) {
        if (entry.m_hash == h && entry.m_rules_map.raw() == rules_map.raw() && same_rule_set(entry.m_set, rules)) {
            m_table = entry.m_table;
            return;
        }
    }
    std::unordered_map<name, std::vector<rewrite_rule>, name_hash_fn> groups;
    for (name const & thm : rules) {
        if (!env.get_rewrite_head(thm))
            throw kernel_exception(env, sstream() << "unknown rewrite rule '" << thm << "'");
        rewrite_rule r = read_rewrite_rule(env, thm);
        groups[r.m_head].push_back(r);
    }
    /* LEAN_REWRITE_BD_ONLY=1 (experiment): a marked rule fires only before unfolding, so it stays out of
       the table of rules that fire where unfolding gets stuck. */
    static bool const bd_only = [] { char const * s = getenv("LEAN_REWRITE_BD_ONLY"); return s && s[0] == '1'; }();
    auto t = std::make_shared<table>();
    for (auto & g : groups) {
        std::sort(g.second.begin(), g.second.end(), [](rewrite_rule const & a, rewrite_rule const & b) {
                return b.m_prio < a.m_prio || (a.m_prio == b.m_prio && cmp(a.m_thm, b.m_thm) < 0);
            });
        std::vector<rewrite_rule> plain;
        for (rewrite_rule const & r : g.second)
            if (!bd_only || !r.m_before_delta)
                plain.push_back(r);
        if (!plain.empty()) {
            t->m_heads.insert(g.first, rewrite_head{env.find(g.first), plain});
            unsigned b = table::bit(g.first);
            t->m_filter[b >> 6] |= uint64_t(1) << (b & 63);
        }
        /* the rules that fire before unfolding, grouped by key, each group in firing order */
        for (rewrite_rule const & r : g.second) {
            if (!r.m_before_delta)
                continue;
            rewrite_pre_head & ph = t->m_pre[g.first];
            if (!ph.m_info)
                ph.m_info = env.find(g.first);
            rewrite_pre_group * grp = nullptr;
            for (rewrite_pre_group & x : ph.m_groups)
                if (x.m_pos == r.m_key_pos && x.m_const == r.m_key_const)
                    grp = &x;
            if (!grp) {
                bool ctor = false;
                if (r.m_key_pos != UINT_MAX)
                    if (optional<constant_info> kc = env.find(r.m_key_const))
                        ctor = kc->is_constructor();
                ph.m_groups.push_back(rewrite_pre_group{r.m_key_pos, r.m_key_const, ctor, {}});
                grp = &ph.m_groups.back();
            }
            grp->m_rules.push_back(r);
            t->m_has_pre = true;
        }
    }
    m_table = t;
    if (cache.size() >= 8)
        cache.erase(cache.begin());
    cache.push_back(rule_table_cache_entry{rules_map, rules, h, m_table});
}
}

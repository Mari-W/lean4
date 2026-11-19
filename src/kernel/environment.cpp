/*
Copyright (c) 2013-2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <utility>
#include <vector>
#include <limits>
#include "runtime/sstream.h"
#include "runtime/thread.h"
#include "runtime/sharecommon.h"
#include "util/io.h"
#include "kernel/environment.h"
#include "runtime/flet.h"
#include "kernel/kernel_exception.h"
#include "kernel/type_checker.h"
#include "kernel/quot.h"
#include "kernel/rewrite_rules.h"
#include "kernel/for_each_fn.h"

namespace lean {
extern "C" object* lean_environment_add(object*, object*);
extern "C" object* lean_environment_find(object*, object*);
extern "C" object* lean_environment_mark_quot_init(object*);
extern "C" uint8 lean_environment_quot_init(object*);
extern "C" object* lean_kernel_record_unfold (object*, object*);
extern "C" object* lean_kernel_get_diag(object*);
extern "C" object* lean_kernel_set_diag(object*, object*);
extern "C" uint8 lean_kernel_diag_is_enabled(object*);
extern "C" uint8 lean_kernel_has_rewrite_rules(object*);
extern "C" object* lean_kernel_rewrite_head(object*, object*);
extern "C" object* lean_kernel_rewrite_set(object*, object*);
extern "C" object* lean_kernel_close_explicit_rewrite_set(object*, object*);
extern "C" object* lean_kernel_close_rewrite_set_from(object*, object*, object*);
extern "C" uint8 lean_kernel_rewrite_set_is_full(object*, object*);
extern "C" object* lean_kernel_rewrite_rules_map(object*);
extern "C" object* lean_kernel_set_rewrite_set(object*, object*, object*);
extern "C" object* lean_kernel_register_rewrite(object*, object*, object*, object*, uint8_t, object*, object*);
extern "C" uint8_t lean_kernel_rewrite_before_delta(object*, object*);
extern "C" object* lean_kernel_rewrite_prio(object*, object*);
extern "C" object* lean_kernel_blocked_abstracts(object*, object*);

void diagnostics::record_unfold(name const & decl_name) {
    m_obj = lean_kernel_record_unfold(m_obj, decl_name.to_obj_arg());
}

scoped_diagnostics::scoped_diagnostics(environment const & env, bool collect) {
    if (collect) {
        diagnostics d(env.get_diag());
        if (lean_kernel_diag_is_enabled(d.to_obj_arg())) {
            m_diag = new diagnostics(d);
        } else
            m_diag = nullptr;
    } else {
        m_diag = nullptr;
    }
}

scoped_diagnostics::~scoped_diagnostics() {
    if (m_diag)
        delete m_diag;
}

environment scoped_diagnostics::update(environment const & env) const {
    if (m_diag)
        return env.set_diag(*m_diag);
    else
        return env;
}

diagnostics environment::get_diag() const {
    return diagnostics(lean_kernel_get_diag(to_obj_arg()));
}

environment environment::set_diag(diagnostics const & diag) const {
    return environment(lean_kernel_set_diag(to_obj_arg(), diag.to_obj_arg()));
}

bool environment::is_quot_initialized() const {
    return lean_environment_quot_init(to_obj_arg()) != 0;
}

void environment::mark_quot_initialized() {
    m_obj = lean_environment_mark_quot_init(m_obj);
}

optional<constant_info> environment::find(name const & n) const {
    return to_optional<constant_info>(lean_environment_find(to_obj_arg(), n.to_obj_arg()));
}

constant_info environment::get(name const & n) const {
    object * o = lean_environment_find(to_obj_arg(), n.to_obj_arg());
    if (is_scalar(o))
        throw unknown_constant_exception(*this, n);
    constant_info r(cnstr_get(o, 0), true);
    dec(o);
    return r;
}

static void check_no_metavar(environment const & env, name const & n, expr const & e) {
    if (has_metavar(e))
        throw declaration_has_metavars_exception(env, n, e);
}

static void check_no_fvar(environment const & env, name const & n, expr const & e) {
    if (has_fvar(e))
        throw declaration_has_free_vars_exception(env, n, e);
}

void check_no_metavar_no_fvar(environment const & env, name const & n, expr const & e) {
    check_no_metavar(env, n, e);
    check_no_fvar(env, n, e);
}

static void check_name(environment const & env, name const & n) {
    if (env.find(n))
        throw already_declared_exception(env, n);
}

void environment::check_name(name const & n) const {
    ::lean::check_name(*this, n);
}

static void check_duplicated_univ_params(environment const & env, names ls) {
    while (!is_nil(ls)) {
        auto const & p = head(ls);
        ls = tail(ls);
        if (std::find(ls.begin(), ls.end(), p) != ls.end()) {
            throw kernel_exception(env, sstream() << "failed to add declaration to environment, "
                                   << "duplicate universe level parameter: '"
                                   << p << "'");
        }
    }
}

void environment::check_duplicated_univ_params(names ls) const {
    ::lean::check_duplicated_univ_params(*this, ls);
}

static void check_constant_val(environment const & env, constant_val const & v, type_checker & checker) {
    check_name(env, v.get_name());
    check_duplicated_univ_params(env, v.get_lparams());
    check_no_metavar_no_fvar(env, v.get_name(), v.get_type());
    expr sort = checker.check(v.get_type(), v.get_lparams());
    checker.ensure_sort(sort, v.get_type());
}

static void check_constant_val(environment const & env, constant_val const & v, diagnostics * diag, definition_safety ds,
                               rewrite_rule_table const & rules) {
    type_checker checker(env, diag, ds, rules);
    check_constant_val(env, v, checker);
}

static void check_constant_val(environment const & env, constant_val const & v, diagnostics * diag, bool safe_only,
                               rewrite_rule_table const & rules) {
    check_constant_val(env, v, diag, safe_only ? definition_safety::safe : definition_safety::unsafe, rules);
}

void environment::add_core(constant_info const & info) {
    m_obj = lean_environment_add(m_obj, info.to_obj_arg());
}

environment environment::add(constant_info const & info) const {
    return environment(lean_environment_add(to_obj_arg(), info.to_obj_arg()));
}

environment environment::add_axiom(declaration const & d, bool check, rewrite_rule_table const & rules) const {
    scoped_diagnostics diag(*this, check);
    axiom_val const & v = d.to_axiom_val();
    if (check)
        check_constant_val(*this, v.to_constant_val(), diag.get(), !d.is_unsafe(), rules);
    return diag.update(add(constant_info(d)));
}

environment environment::add_definition(declaration const & d, bool check, rewrite_rule_table const & rules) const {
    scoped_diagnostics diag(*this, check);
    definition_val const & v = d.to_definition_val();
    if (v.is_unsafe()) {
        /* Meta definition can be recursive.
           So, we check the header, add, and then type check the body. */
        if (check) {
            type_checker checker(*this, diag.get(), definition_safety::unsafe, rules);
            check_constant_val(*this, v.to_constant_val(), checker);
        }
        environment new_env = add(constant_info(d));
        if (check) {
            type_checker checker(new_env, diag.get(), definition_safety::unsafe, rules);
            check_no_metavar_no_fvar(new_env, v.get_name(), v.get_value());
            expr val_type = checker.check(v.get_value(), v.get_lparams());
            if (!checker.is_def_eq(val_type, v.get_type()))
                throw definition_type_mismatch_exception(new_env, d, val_type);
        }
        return diag.update(new_env);
    } else {
        if (check) {
            type_checker checker(*this, diag.get(), definition_safety::safe, rules);
            checker.enable_shared_cache();
            check_constant_val(*this, v.to_constant_val(), checker);
            check_no_metavar_no_fvar(*this, v.get_name(), v.get_value());
            expr val_type = checker.check(v.get_value(), v.get_lparams());
            if (!checker.is_def_eq(val_type, v.get_type()))
                throw definition_type_mismatch_exception(*this, d, val_type);
            checker.publish_shared_cache();
        }
        return diag.update(add(constant_info(d)));
    }
}

environment environment::add_theorem(declaration const & d, bool check, rewrite_rule_table const & rules) const {
    scoped_diagnostics diag(*this, check);
    theorem_val const & v = d.to_theorem_val();
    if (check) {
        type_checker checker(*this, diag.get(), definition_safety::safe, rules);
        checker.enable_shared_cache();
        sharecommon_persistent_fn share;
        expr val(share(v.get_value().raw()));
        expr type(share(v.get_type().raw()));
        check_constant_val(*this, v.to_constant_val(), checker);
        if (!checker.is_prop(type))
            throw theorem_type_is_not_prop(*this, v.get_name(), type);
        check_no_metavar_no_fvar(*this, v.get_name(), val);
        expr val_type = checker.check(val, v.get_lparams());
        if (!checker.is_def_eq(val_type, type))
            throw definition_type_mismatch_exception(*this, d, val_type);
        checker.publish_shared_cache();
    }
    return diag.update(add(constant_info(d)));
}

environment environment::add_opaque(declaration const & d, bool check, rewrite_rule_table const & rules) const {
    scoped_diagnostics diag(*this, check);
    opaque_val const & v = d.to_opaque_val();
    if (check) {
        type_checker checker(*this, diag.get(), definition_safety::safe, rules);
        checker.enable_shared_cache();
        check_constant_val(*this, v.to_constant_val(), checker);
        check_no_metavar_no_fvar(*this, v.get_name(), v.get_value());
        expr val_type = checker.check(v.get_value(), v.get_lparams());
        if (!checker.is_def_eq(val_type, v.get_type()))
            throw definition_type_mismatch_exception(*this, d, val_type);
        checker.publish_shared_cache();
    }
    return diag.update(add(constant_info(d)));
}

environment environment::add_mutual(declaration const & d, bool check, rewrite_rule_table const & rules) const {
    scoped_diagnostics diag(*this, check);
    definition_vals const & vs = d.to_definition_vals();
    if (empty(vs))
        throw kernel_exception(*this, "invalid empty mutual definition");
    definition_safety safety = head(vs).get_safety();
    if (safety == definition_safety::safe)
        throw kernel_exception(*this, "invalid mutual definition, declaration is not tagged as unsafe/partial");
    names const & lparams = head(vs).get_lparams();
    /* Check declarations header */
    if (check) {
        type_checker checker(*this, diag.get(), safety, rules);
        name_set found;
        for (definition_val const & v : vs) {
            if (v.get_safety() != safety)
                throw kernel_exception(*this, "invalid mutual definition, declarations must have the same safety annotation");
            if (v.get_lparams() != lparams)
                throw kernel_exception(*this, "invalid mutual definition, declarations must have the same universe level parameters");
            /* The `check_name` in `check_constant_val` only sees `*this`, where none of the block's
               own names have been declared yet, so duplicates within the block need their own check.
               Otherwise every member but the last would be added and then overwritten. */
            if (found.contains(v.get_name()))
                throw kernel_exception(*this, sstream() << "invalid mutual definition, duplicate declaration name '"
                                       << v.get_name() << "'");
            found.insert(v.get_name());
            check_constant_val(*this, v.to_constant_val(), checker);
        }
    }
    /* Add declarations */
    environment new_env = *this;
    for (definition_val const & v : vs) {
        new_env.add_core(constant_info(v));
    }
    /* Check actual definitions */
    if (check) {
        type_checker checker(new_env, diag.get(), safety, rules);
        for (definition_val const & v : vs) {
            check_no_metavar_no_fvar(new_env, v.get_name(), v.get_value());
            expr val_type = checker.check(v.get_value(), v.get_lparams());
            if (!checker.is_def_eq(val_type, v.get_type()))
                throw definition_type_mismatch_exception(new_env, d, val_type);
        }
    }
    return diag.update(new_env);
}

/* The constants of the statements and values in `d`. */
static array_ref<name> get_decl_constants(declaration const & d) {
    name_set seen;
    buffer<name> consts;
    auto collect = [&](expr const & e) {
        for_each(e, [&](expr const & e) {
                if (is_constant(e) && !seen.contains(const_name(e))) {
                    seen.insert(const_name(e));
                    consts.push_back(const_name(e));
                }
                return true;
            });
    };
    switch (d.kind()) {
    case declaration_kind::Axiom:
        collect(d.to_axiom_val().get_type());
        break;
    case declaration_kind::Definition:
        collect(d.to_definition_val().get_type());
        collect(d.to_definition_val().get_value());
        break;
    case declaration_kind::Theorem:
        collect(d.to_theorem_val().get_type());
        collect(d.to_theorem_val().get_value());
        break;
    case declaration_kind::Opaque:
        collect(d.to_opaque_val().get_type());
        collect(d.to_opaque_val().get_value());
        break;
    case declaration_kind::MutualDefinition:
        for (definition_val const & v : d.to_definition_vals()) {
            collect(v.get_type());
            collect(v.get_value());
        }
        break;
    case declaration_kind::Inductive:
        for (inductive_type const & t : inductive_decl(d).get_types()) {
            collect(t.get_type());
            for (constructor const & c : t.get_cnstrs())
                collect(constructor_type(c));
        }
        break;
    case declaration_kind::Quot:
        break;
    }
    return array_ref<name>(consts);
}

/* The constants `d` added to `new_env`, all of which are checked under one rule set. */
static void get_added_names(environment const & old_env, environment const & new_env, declaration const & d, buffer<name> & r) {
    switch (d.kind()) {
    case declaration_kind::Axiom:
        r.push_back(d.to_axiom_val().get_name());
        break;
    case declaration_kind::Definition:
        r.push_back(d.to_definition_val().get_name());
        break;
    case declaration_kind::Theorem:
        r.push_back(d.to_theorem_val().get_name());
        break;
    case declaration_kind::Opaque:
        r.push_back(d.to_opaque_val().get_name());
        break;
    case declaration_kind::MutualDefinition:
        for (definition_val const & v : d.to_definition_vals())
            r.push_back(v.get_name());
        break;
    case declaration_kind::Inductive:
        for (inductive_type const & t : inductive_decl(d).get_types()) {
            r.push_back(t.get_name());
            for (constructor const & c : t.get_cnstrs())
                r.push_back(constructor_name(c));
            r.push_back(name(t.get_name(), "rec"));
            /* auxiliary recursors of nested inductives */
            for (unsigned i = 1; ; i++) {
                name aux(t.get_name(), (std::string("rec_") + std::to_string(i)).c_str());
                if (old_env.find(aux) || !new_env.find(aux))
                    break;
                r.push_back(aux);
            }
        }
        break;
    case declaration_kind::Quot:
        break;
    }
}

static thread_local name const * g_current_decl = nullptr;

name const & current_declaration_name() {
    static name anonymous;
    return g_current_decl ? *g_current_decl : anonymous;
}

static name decl_main_name(declaration const & d) {
    switch (d.kind()) {
    case declaration_kind::Axiom:            return d.to_axiom_val().get_name();
    case declaration_kind::Definition:       return d.to_definition_val().get_name();
    case declaration_kind::Theorem:          return d.to_theorem_val().get_name();
    case declaration_kind::Opaque:           return d.to_opaque_val().get_name();
    case declaration_kind::MutualDefinition: return head(d.to_definition_vals()).get_name();
    case declaration_kind::Inductive:        return head(inductive_decl(d).get_types()).get_name();
    case declaration_kind::Quot:             break;
    }
    return name();
}

array_ref<name> environment::get_blocked_abstracts(name const & decl) const {
    return array_ref<name>(lean_kernel_blocked_abstracts(to_obj_arg(), decl.to_obj_arg()));
}

/* `close_explicit_rewrite_set` after checking that the explicit rules are registered, and whether the
   result holds every registered rule. Callers pass the same explicit-rule object for many
   declarations, so the last one is cached under the registered-rules map it was computed for. */
static array_ref<name> explicit_rewrite_base(environment const & env, array_ref<name> const & explicit_rules, bool & full) {
    struct entry {
        object_ref      m_rules_map;
        array_ref<name> m_explicit;
        array_ref<name> m_base;
        bool            m_full;
    };
    /* never freed, like the rule table cache */
    static thread_local auto * cache = new std::vector<entry>();
    object_ref rules_map = env.get_rewrite_rules_map();
    for (entry const & e : *cache) {
        if (e.m_explicit.raw() == explicit_rules.raw() && e.m_rules_map.raw() == rules_map.raw()) {
            full = e.m_full;
            return e.m_base;
        }
    }
    for (name const & h : explicit_rules) {
        if (!env.get_rewrite_head(h))
            throw kernel_exception(env, sstream() << "unknown rewrite rule '" << h << "'");
    }
    array_ref<name> base = env.close_explicit_rewrite_set(explicit_rules);
    full = env.rewrite_set_is_full(base);
    cache->clear();
    cache->push_back(entry{rules_map, explicit_rules, base, full});
    return base;
}

environment environment::add(declaration const & d, bool check, array_ref<name> const & explicit_rules) const {
    if (d.kind() == declaration_kind::Quot)
        return shared_cache_advance(*this, add_quot());
    /* abstract definitions unfold only while checking a member of their block */
    name decl_name = decl_main_name(d);
    flet<name const *> set_decl(g_current_decl, &decl_name);
    if (explicit_rules.size() == 0 && !has_rewrite_rules()) {
        rewrite_rule_table none;
        switch (d.kind()) {
        case declaration_kind::Axiom:            return shared_cache_advance(*this, add_axiom(d, check, none));
        case declaration_kind::Definition:       return shared_cache_advance(*this, add_definition(d, check, none));
        case declaration_kind::Theorem:          return shared_cache_advance(*this, add_theorem(d, check, none));
        case declaration_kind::Opaque:           return shared_cache_advance(*this, add_opaque(d, check, none));
        case declaration_kind::MutualDefinition: return shared_cache_advance(*this, add_mutual(d, check, none));
        case declaration_kind::Inductive:        return shared_cache_advance(*this, add_inductive(d, none));
        case declaration_kind::Quot:             break;
        }
        lean_unreachable();
    }
    bool full;
    array_ref<name> base = explicit_rewrite_base(*this, explicit_rules, full);
    /* a stored set holds registered rules only, so no constant can add to a full base */
    array_ref<name> set = full ? base : close_rewrite_set_from(base, get_decl_constants(d));
    rewrite_rule_table rules(*this, set);
    environment new_env = *this;
    switch (d.kind()) {
    case declaration_kind::Axiom:            new_env = add_axiom(d, check, rules); break;
    case declaration_kind::Definition:       new_env = add_definition(d, check, rules); break;
    case declaration_kind::Theorem:          new_env = add_theorem(d, check, rules); break;
    case declaration_kind::Opaque:           new_env = add_opaque(d, check, rules); break;
    case declaration_kind::MutualDefinition: new_env = add_mutual(d, check, rules); break;
    case declaration_kind::Inductive:        new_env = add_inductive(d, rules); break;
    case declaration_kind::Quot:             lean_unreachable();
    }
    if (set.size() > 0) {
        buffer<name> added;
        get_added_names(*this, new_env, d, added);
        for (name const & n : added)
            new_env = new_env.set_rewrite_set(n, set);
    }
    return shared_cache_advance(*this, new_env);
}

bool environment::has_rewrite_rules() const {
    return lean_kernel_has_rewrite_rules(to_obj_arg()) != 0;
}

optional<name> environment::get_rewrite_head(name const & thm) const {
    return to_optional<name>(lean_kernel_rewrite_head(to_obj_arg(), thm.to_obj_arg()));
}

array_ref<name> environment::get_rewrite_set(name const & n) const {
    return array_ref<name>(lean_kernel_rewrite_set(to_obj_arg(), n.to_obj_arg()));
}

array_ref<name> environment::close_explicit_rewrite_set(array_ref<name> const & explicit_rules) const {
    return array_ref<name>(lean_kernel_close_explicit_rewrite_set(to_obj_arg(), explicit_rules.to_obj_arg()));
}

array_ref<name> environment::close_rewrite_set_from(array_ref<name> const & base, array_ref<name> const & consts) const {
    return array_ref<name>(lean_kernel_close_rewrite_set_from(to_obj_arg(), base.to_obj_arg(), consts.to_obj_arg()));
}

bool environment::rewrite_set_is_full(array_ref<name> const & s) const {
    return lean_kernel_rewrite_set_is_full(to_obj_arg(), s.to_obj_arg()) != 0;
}

object_ref environment::get_rewrite_rules_map() const {
    return object_ref(lean_kernel_rewrite_rules_map(to_obj_arg()));
}

environment environment::set_rewrite_set(name const & n, array_ref<name> const & s) const {
    return environment(lean_kernel_set_rewrite_set(to_obj_arg(), n.to_obj_arg(), s.to_obj_arg()));
}

environment environment::register_rewrite_rule(name const & thm, name const & head, nat const & prio, bool before_delta,
                                               nat const & key_arg, name const & key_const) const {
    return environment(lean_kernel_register_rewrite(to_obj_arg(), thm.to_obj_arg(), head.to_obj_arg(), prio.to_obj_arg(),
                                                    before_delta, key_arg.to_obj_arg(), key_const.to_obj_arg()));
}

bool environment::get_rewrite_before_delta(name const & thm) const {
    return lean_kernel_rewrite_before_delta(to_obj_arg(), thm.to_obj_arg()) != 0;
}

nat environment::get_rewrite_prio(name const & thm) const {
    return nat(lean_kernel_rewrite_prio(to_obj_arg(), thm.to_obj_arg()));
}

environment environment::add_rewrite_rule(name const & thm, nat const & prio, bool before_delta) const {
    constant_info info = get(thm);
    if (!info.is_theorem())
        throw kernel_exception(*this, sstream() << "invalid rewrite rule '" << thm << "', it is not a theorem");
    if (get_rewrite_head(thm))
        throw kernel_exception(*this, sstream() << "'" << thm << "' is already a rewrite rule");
    rewrite_rule r = read_rewrite_rule(*this, thm);
    return register_rewrite_rule(thm, r.m_head, prio, before_delta,
                                 nat(r.m_key_pos == UINT_MAX ? 0u : r.m_key_pos + 1), r.m_key_const);
}

/*
addDeclCore (env : Environment) (maxHeartbeats : USize) (maxRecDepth : USize) (decl : @& Declaration)
  (cancelTk? : @& Option IO.CancelToken) (rules : @& Array Name) : Except Kernel.Exception Environment
*/
extern "C" LEAN_EXPORT object * lean_add_decl(object * env, size_t max_heartbeat, size_t max_rec_depth,
    object * decl, object * opt_cancel_tk, object * rules) {
    scope_max_heartbeat s(max_heartbeat);
    scope_max_rec_depth s2(max_rec_depth);
    scope_cancel_tk s3(is_scalar(opt_cancel_tk) ? nullptr : cnstr_get(opt_cancel_tk, 0));
    return catch_kernel_exceptions<environment>([&]() {
            return environment(env).add(declaration(decl, true), true, array_ref<name>(rules, true));
        });
}

extern "C" LEAN_EXPORT object * lean_add_decl_without_checking(object * env, object * decl, object * rules) {
    return catch_kernel_exceptions<environment>([&]() {
            return environment(env).add(declaration(decl, true), false, array_ref<name>(rules, true));
        });
}

/* addRewriteRule (env : Environment) (thm : @& Name) (prio : @& Nat) (beforeDelta : Bool) :
     Except Kernel.Exception Environment */
extern "C" LEAN_EXPORT object * lean_add_rewrite_rule(object * env, object * thm, object * prio, uint8_t before_delta) {
    return catch_kernel_exceptions<environment>([&]() {
            return environment(env).add_rewrite_rule(name(thm, true), nat(prio, true), before_delta != 0);
        });
}

/* ModuleData.withRewrites (d : ModuleData) (empty : ModuleRewrite) : ModuleData

   A `ModuleData` written by a Lean without rewrite rules has five object fields and no `rewrites`.
   It gets `empty` as its sixth field, so the import reads it like a module without rules. A
   `ModuleRewrite` written before abstract definitions has four fields and gets the empty fifth. */
extern "C" LEAN_EXPORT object * lean_module_data_with_rewrites(object * d, object * empty) {
    if (lean_ctor_num_objs(d) == 6) {
        object * rw = lean_ctor_get(d, 5);
        if (lean_ctor_num_objs(rw) != 4) {
            lean_dec(empty);
            return d;
        }
        object * nrw = lean_alloc_ctor(0, 5, 0);
        for (unsigned i = 0; i < 4; i++) {
            object * f = lean_ctor_get(rw, i);
            lean_inc(f);
            lean_ctor_set(nrw, i, f);
        }
        object * abstracts = lean_ctor_get(empty, 4);
        lean_inc(abstracts);
        lean_ctor_set(nrw, 4, abstracts);
        lean_dec(empty);
        object * r = lean_alloc_ctor(0, 6, sizeof(uint8_t));
        for (unsigned i = 0; i < 5; i++) {
            object * f = lean_ctor_get(d, i);
            lean_inc(f);
            lean_ctor_set(r, i, f);
        }
        lean_ctor_set(r, 5, nrw);
        lean_ctor_set_uint8(r, 6 * sizeof(void *), lean_ctor_get_uint8(d, 6 * sizeof(void *)));
        lean_dec(d);
        return r;
    }
    if (lean_ctor_num_objs(d) != 5) {
        lean_dec(empty);
        return d;
    }
    object * r = lean_alloc_ctor(0, 6, sizeof(uint8_t));
    for (unsigned i = 0; i < 5; i++) {
        object * f = lean_ctor_get(d, i);
        lean_inc(f);
        lean_ctor_set(r, i, f);
    }
    lean_ctor_set(r, 5, empty);
    lean_ctor_set_uint8(r, 6 * sizeof(void *), lean_ctor_get_uint8(d, 5 * sizeof(void *)));
    lean_dec(d);
    return r;
}

void initialize_environment() {
}

void finalize_environment() {
}
}

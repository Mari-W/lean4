// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Lookahead
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Split import Lean.Meta.Tactic.Grind.EMatchAction
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Meta_Grind_Action_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_instantiate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_splitNext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_mkAction();
lean_object* l_Lean_Meta_Grind_Action_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_assertAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_andThen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Action_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_checkSplitStatus(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SplitInfo_getExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_process_to_do(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_splitNext___boxed, .m_arity = 15, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_assertAll___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Grind_Action_instantiate___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed, .m_arity = 14, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__0_value)} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "of_lookahead"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 178, 46, 74, 114, 9, 243, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lookahead"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_value),LEAN_SCALAR_PTR_LITERAL(12, 254, 220, 45, 238, 117, 220, 189)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__7_value),LEAN_SCALAR_PTR_LITERAL(194, 159, 125, 127, 17, 128, 107, 57)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__9_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "try"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__6_value),LEAN_SCALAR_PTR_LITERAL(12, 254, 220, 45, 238, 117, 220, 189)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__12_value),LEAN_SCALAR_PTR_LITERAL(132, 37, 244, 19, 72, 39, 101, 115)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(10000u);
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(lean_object* v___f_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___closed__0));
v___x_21_ = l_Lean_Meta_Grind_Action_orElse(v___x_20_, v___f_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0___boxed(lean_object* v___f_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__0(v___f_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_);
lean_dec(v___y_34_);
lean_dec_ref(v___y_33_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(lean_object* v_a_37_, lean_object* v___f_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_Grind_Action_orElse(v_a_37_, v___f_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed(lean_object* v_a_53_, lean_object* v___f_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1(v_a_53_, v___f_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(lean_object* v___f_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(10000u);
v___x_84_ = l_Lean_Meta_Grind_Action_loop___redArg(v___x_83_, v___f_69_, v___y_70_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed(lean_object* v___f_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2(v___f_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_87_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(lean_object* v___f_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___closed__0));
v___x_116_ = l_Lean_Meta_Grind_Action_andThen(v___x_115_, v___f_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed(lean_object* v___f_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3(v___f_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(lean_object* v___x_132_, lean_object* v___f_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_Meta_Grind_Action_andThen(v___x_132_, v___f_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed(lean_object* v___x_148_, lean_object* v___f_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4(v___x_148_, v___f_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec(v___y_153_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(lean_object* v_goal_167_, lean_object* v_generation_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v_ref_179_; lean_object* v___f_180_; lean_object* v___x_181_; 
v_ref_179_ = lean_ctor_get(v_a_176_, 2);
v___f_180_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___closed__1));
v___x_181_ = l_Lean_Meta_Grind_Solvers_mkAction();
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___f_183_; lean_object* v___f_184_; lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___f_187_; lean_object* v___x_188_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
v___f_183_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__1___boxed), 15, 2);
lean_closure_set(v___f_183_, 0, v_a_182_);
lean_closure_set(v___f_183_, 1, v___f_180_);
v___f_184_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__2___boxed), 14, 1);
lean_closure_set(v___f_184_, 0, v___f_183_);
v___f_185_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__3___boxed), 14, 1);
lean_closure_set(v___f_185_, 0, v___f_184_);
v___x_186_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Action_intros___boxed), 14, 1);
lean_closure_set(v___x_186_, 0, v_generation_168_);
v___f_187_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___lam__4___boxed), 15, 2);
lean_closure_set(v___f_187_, 0, v___x_186_);
lean_closure_set(v___f_187_, 1, v___f_185_);
lean_inc_ref(v_goal_167_);
v___x_188_ = l_Lean_Meta_Grind_Action_run(v_goal_167_, v___f_187_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
if (lean_obj_tag(v___x_188_) == 0)
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_215_; 
v_a_189_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_215_ == 0)
{
v___x_191_ = v___x_188_;
v_isShared_192_ = v_isSharedCheck_215_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_188_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_215_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
if (lean_obj_tag(v_a_189_) == 0)
{
lean_object* v___x_193_; lean_object* v___x_195_; 
lean_dec_ref_known(v_a_189_, 1);
lean_dec_ref(v_goal_167_);
v___x_193_ = lean_box(0);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_193_);
v___x_195_ = v___x_191_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v___x_193_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
else
{
lean_object* v_gs_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_214_; 
v_gs_197_ = lean_ctor_get(v_a_189_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_a_189_);
if (v_isSharedCheck_214_ == 0)
{
v___x_199_ = v_a_189_;
v_isShared_200_ = v_isSharedCheck_214_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_gs_197_);
lean_dec(v_a_189_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_214_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
if (lean_obj_tag(v_gs_197_) == 1)
{
lean_object* v_head_201_; lean_object* v___x_203_; 
lean_dec_ref(v_goal_167_);
v_head_201_ = lean_ctor_get(v_gs_197_, 0);
lean_inc(v_head_201_);
lean_dec_ref_known(v_gs_197_, 2);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v_head_201_);
v___x_203_ = v___x_199_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_head_201_);
v___x_203_ = v_reuseFailAlloc_207_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_205_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_203_);
v___x_205_ = v___x_191_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
else
{
lean_object* v___x_209_; 
lean_dec(v_gs_197_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v_goal_167_);
v___x_209_ = v___x_199_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_goal_167_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_211_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 0, v___x_209_);
v___x_211_ = v___x_191_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
lean_dec_ref(v_goal_167_);
v_a_216_ = lean_ctor_get(v___x_188_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_188_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_188_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v_a_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_235_; 
lean_dec(v_generation_168_);
lean_dec_ref(v_goal_167_);
v_a_224_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_235_ == 0)
{
v___x_226_ = v___x_181_;
v_isShared_227_ = v_isSharedCheck_235_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_a_224_);
lean_dec(v___x_181_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_235_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_228_ = lean_io_error_to_string(v_a_224_);
v___x_229_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
v___x_230_ = l_Lean_MessageData_ofFormat(v___x_229_);
lean_inc(v_ref_179_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v_ref_179_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_231_);
v___x_233_ = v___x_226_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve___boxed(lean_object* v_goal_236_, lean_object* v_generation_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(v_goal_236_, v_generation_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec_ref(v_a_241_);
lean_dec(v_a_240_);
lean_dec_ref(v_a_239_);
lean_dec(v_a_238_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(lean_object* v_e_249_, lean_object* v___y_250_){
_start:
{
uint8_t v___x_252_; 
v___x_252_ = l_Lean_Expr_hasMVar(v_e_249_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v_e_249_);
return v___x_253_;
}
else
{
lean_object* v___x_254_; lean_object* v_mctx_255_; lean_object* v___x_256_; lean_object* v_fst_257_; lean_object* v_snd_258_; lean_object* v___x_259_; lean_object* v_cache_260_; lean_object* v_zetaDeltaFVarIds_261_; lean_object* v_postponed_262_; lean_object* v_diag_263_; lean_object* v_rewriteFires_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_273_; 
v___x_254_ = lean_st_ref_get(v___y_250_);
v_mctx_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc_ref(v_mctx_255_);
lean_dec(v___x_254_);
v___x_256_ = l_Lean_instantiateMVarsCore(v_mctx_255_, v_e_249_);
v_fst_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_fst_257_);
v_snd_258_ = lean_ctor_get(v___x_256_, 1);
lean_inc(v_snd_258_);
lean_dec_ref(v___x_256_);
v___x_259_ = lean_st_ref_take(v___y_250_);
v_cache_260_ = lean_ctor_get(v___x_259_, 1);
v_zetaDeltaFVarIds_261_ = lean_ctor_get(v___x_259_, 2);
v_postponed_262_ = lean_ctor_get(v___x_259_, 3);
v_diag_263_ = lean_ctor_get(v___x_259_, 4);
v_rewriteFires_264_ = lean_ctor_get(v___x_259_, 5);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_273_ == 0)
{
lean_object* v_unused_274_; 
v_unused_274_ = lean_ctor_get(v___x_259_, 0);
lean_dec(v_unused_274_);
v___x_266_ = v___x_259_;
v_isShared_267_ = v_isSharedCheck_273_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_rewriteFires_264_);
lean_inc(v_diag_263_);
lean_inc(v_postponed_262_);
lean_inc(v_zetaDeltaFVarIds_261_);
lean_inc(v_cache_260_);
lean_dec(v___x_259_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_273_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v_snd_258_);
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_snd_258_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_cache_260_);
lean_ctor_set(v_reuseFailAlloc_272_, 2, v_zetaDeltaFVarIds_261_);
lean_ctor_set(v_reuseFailAlloc_272_, 3, v_postponed_262_);
lean_ctor_set(v_reuseFailAlloc_272_, 4, v_diag_263_);
lean_ctor_set(v_reuseFailAlloc_272_, 5, v_rewriteFires_264_);
v___x_269_ = v_reuseFailAlloc_272_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = lean_st_ref_put(v___y_250_, v___x_269_);
v___x_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_271_, 0, v_fst_257_);
return v___x_271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg___boxed(lean_object* v_e_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_e_275_, v___y_276_);
lean_dec(v___y_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(lean_object* v_e_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_e_279_, v___y_287_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___boxed(lean_object* v_e_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0(v_e_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec(v___y_293_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(lean_object* v___y_305_, lean_object* v_mctx_306_, lean_object* v_cache_307_, lean_object* v_a_x3f_308_){
_start:
{
lean_object* v___x_310_; lean_object* v_zetaDeltaFVarIds_311_; lean_object* v_postponed_312_; lean_object* v_diag_313_; lean_object* v_rewriteFires_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_324_; 
v___x_310_ = lean_st_ref_take(v___y_305_);
v_zetaDeltaFVarIds_311_ = lean_ctor_get(v___x_310_, 2);
v_postponed_312_ = lean_ctor_get(v___x_310_, 3);
v_diag_313_ = lean_ctor_get(v___x_310_, 4);
v_rewriteFires_314_ = lean_ctor_get(v___x_310_, 5);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_324_ == 0)
{
lean_object* v_unused_325_; lean_object* v_unused_326_; 
v_unused_325_ = lean_ctor_get(v___x_310_, 1);
lean_dec(v_unused_325_);
v_unused_326_ = lean_ctor_get(v___x_310_, 0);
lean_dec(v_unused_326_);
v___x_316_ = v___x_310_;
v_isShared_317_ = v_isSharedCheck_324_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_rewriteFires_314_);
lean_inc(v_diag_313_);
lean_inc(v_postponed_312_);
lean_inc(v_zetaDeltaFVarIds_311_);
lean_dec(v___x_310_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_324_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_318_ = lean_box(0);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 1, v_cache_307_);
lean_ctor_set(v___x_316_, 0, v_mctx_306_);
v___x_320_ = v___x_316_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_mctx_306_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_cache_307_);
lean_ctor_set(v_reuseFailAlloc_323_, 2, v_zetaDeltaFVarIds_311_);
lean_ctor_set(v_reuseFailAlloc_323_, 3, v_postponed_312_);
lean_ctor_set(v_reuseFailAlloc_323_, 4, v_diag_313_);
lean_ctor_set(v_reuseFailAlloc_323_, 5, v_rewriteFires_314_);
v___x_320_ = v_reuseFailAlloc_323_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_st_ref_put(v___y_305_, v___x_320_);
v___x_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_322_, 0, v___x_318_);
return v___x_322_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0___boxed(lean_object* v___y_327_, lean_object* v_mctx_328_, lean_object* v_cache_329_, lean_object* v_a_x3f_330_, lean_object* v___y_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_327_, v_mctx_328_, v_cache_329_, v_a_x3f_330_);
lean_dec(v_a_x3f_330_);
lean_dec(v___y_327_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(lean_object* v_x_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___x_345_; lean_object* v_mctx_346_; lean_object* v___x_347_; lean_object* v_cache_348_; lean_object* v___x_349_; 
v___x_345_ = lean_st_ref_get(v___y_341_);
v_mctx_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc_ref(v_mctx_346_);
lean_dec(v___x_345_);
v___x_347_ = lean_st_ref_get(v___y_341_);
v_cache_348_ = lean_ctor_get(v___x_347_, 1);
lean_inc_ref(v_cache_348_);
lean_dec(v___x_347_);
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
lean_inc(v___y_339_);
lean_inc_ref(v___y_338_);
lean_inc(v___y_337_);
lean_inc_ref(v___y_336_);
lean_inc(v___y_335_);
lean_inc(v___y_334_);
v___x_349_ = lean_apply_11(v_x_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_366_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_366_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_366_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_366_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
lean_inc(v_a_350_);
if (v_isShared_353_ == 0)
{
lean_ctor_set_tag(v___x_352_, 1);
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_350_);
v___x_355_ = v_reuseFailAlloc_365_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
v___x_356_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_341_, v_mctx_346_, v_cache_348_, v___x_355_);
lean_dec_ref(v___x_355_);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_363_ == 0)
{
lean_object* v_unused_364_; 
v_unused_364_ = lean_ctor_get(v___x_356_, 0);
lean_dec(v_unused_364_);
v___x_358_ = v___x_356_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_dec(v___x_356_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 0, v_a_350_);
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_350_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
v_a_367_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_a_367_);
lean_dec_ref_known(v___x_349_, 1);
v___x_368_ = lean_box(0);
v___x_369_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___lam__0(v___y_341_, v_mctx_346_, v_cache_348_, v___x_368_);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_376_ == 0)
{
lean_object* v_unused_377_; 
v_unused_377_ = lean_ctor_get(v___x_369_, 0);
lean_dec(v_unused_377_);
v___x_371_ = v___x_369_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_dec(v___x_369_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 1);
lean_ctor_set(v___x_371_, 0, v_a_367_);
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_367_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg___boxed(lean_object* v_x_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v_x_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec(v___y_379_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(lean_object* v_00_u03b1_391_, lean_object* v_x_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v_x_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___boxed(lean_object* v_00_u03b1_405_, lean_object* v_x_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1(v_00_u03b1_405_, v_x_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___y_408_);
lean_dec(v___y_407_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(lean_object* v_mvarId_421_, lean_object* v_e_422_, lean_object* v_toGoalState_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_MVarId_getTag(v_mvarId_421_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_437_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_436_);
lean_dec_ref_known(v___x_435_, 1);
v___x_437_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_428_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v_a_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_a_438_);
lean_dec_ref_known(v___x_437_, 1);
lean_inc_ref(v_e_422_);
v___x_439_ = l_Lean_mkNot(v_e_422_);
v___x_440_ = l_Lean_mkArrow(v___x_439_, v_a_438_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_442_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref_known(v___x_440_, 1);
v___x_442_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_441_, v_a_436_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v_nextDeclIdx_444_; lean_object* v_enodeMap_445_; lean_object* v_exprs_446_; lean_object* v_parents_447_; lean_object* v_congrTable_448_; lean_object* v_appMap_449_; lean_object* v_indicesFound_450_; lean_object* v_internalizing_451_; uint8_t v_inconsistent_452_; lean_object* v_nextIdx_453_; lean_object* v_newRawFacts_454_; lean_object* v_facts_455_; lean_object* v_extThms_456_; lean_object* v_ematch_457_; lean_object* v_inj_458_; lean_object* v_split_459_; lean_object* v_clean_460_; lean_object* v_sstates_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_509_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_442_, 1);
v_nextDeclIdx_444_ = lean_ctor_get(v_toGoalState_423_, 0);
v_enodeMap_445_ = lean_ctor_get(v_toGoalState_423_, 1);
v_exprs_446_ = lean_ctor_get(v_toGoalState_423_, 2);
v_parents_447_ = lean_ctor_get(v_toGoalState_423_, 3);
v_congrTable_448_ = lean_ctor_get(v_toGoalState_423_, 4);
v_appMap_449_ = lean_ctor_get(v_toGoalState_423_, 5);
v_indicesFound_450_ = lean_ctor_get(v_toGoalState_423_, 6);
v_internalizing_451_ = lean_ctor_get(v_toGoalState_423_, 8);
v_inconsistent_452_ = lean_ctor_get_uint8(v_toGoalState_423_, sizeof(void*)*18);
v_nextIdx_453_ = lean_ctor_get(v_toGoalState_423_, 9);
v_newRawFacts_454_ = lean_ctor_get(v_toGoalState_423_, 10);
v_facts_455_ = lean_ctor_get(v_toGoalState_423_, 11);
v_extThms_456_ = lean_ctor_get(v_toGoalState_423_, 12);
v_ematch_457_ = lean_ctor_get(v_toGoalState_423_, 13);
v_inj_458_ = lean_ctor_get(v_toGoalState_423_, 14);
v_split_459_ = lean_ctor_get(v_toGoalState_423_, 15);
v_clean_460_ = lean_ctor_get(v_toGoalState_423_, 16);
v_sstates_461_ = lean_ctor_get(v_toGoalState_423_, 17);
v_isSharedCheck_509_ = !lean_is_exclusive(v_toGoalState_423_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v_toGoalState_423_, 7);
lean_dec(v_unused_510_);
v___x_463_ = v_toGoalState_423_;
v_isShared_464_ = v_isSharedCheck_509_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_sstates_461_);
lean_inc(v_clean_460_);
lean_inc(v_split_459_);
lean_inc(v_inj_458_);
lean_inc(v_ematch_457_);
lean_inc(v_extThms_456_);
lean_inc(v_facts_455_);
lean_inc(v_newRawFacts_454_);
lean_inc(v_nextIdx_453_);
lean_inc(v_internalizing_451_);
lean_inc(v_indicesFound_450_);
lean_inc(v_appMap_449_);
lean_inc(v_congrTable_448_);
lean_inc(v_parents_447_);
lean_inc(v_exprs_446_);
lean_inc(v_enodeMap_445_);
lean_inc(v_nextDeclIdx_444_);
lean_dec(v_toGoalState_423_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_509_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_465_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___closed__0));
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 7, v___x_465_);
v___x_467_ = v___x_463_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 18, 1);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_nextDeclIdx_444_);
lean_ctor_set(v_reuseFailAlloc_508_, 1, v_enodeMap_445_);
lean_ctor_set(v_reuseFailAlloc_508_, 2, v_exprs_446_);
lean_ctor_set(v_reuseFailAlloc_508_, 3, v_parents_447_);
lean_ctor_set(v_reuseFailAlloc_508_, 4, v_congrTable_448_);
lean_ctor_set(v_reuseFailAlloc_508_, 5, v_appMap_449_);
lean_ctor_set(v_reuseFailAlloc_508_, 6, v_indicesFound_450_);
lean_ctor_set(v_reuseFailAlloc_508_, 7, v___x_465_);
lean_ctor_set(v_reuseFailAlloc_508_, 8, v_internalizing_451_);
lean_ctor_set(v_reuseFailAlloc_508_, 9, v_nextIdx_453_);
lean_ctor_set(v_reuseFailAlloc_508_, 10, v_newRawFacts_454_);
lean_ctor_set(v_reuseFailAlloc_508_, 11, v_facts_455_);
lean_ctor_set(v_reuseFailAlloc_508_, 12, v_extThms_456_);
lean_ctor_set(v_reuseFailAlloc_508_, 13, v_ematch_457_);
lean_ctor_set(v_reuseFailAlloc_508_, 14, v_inj_458_);
lean_ctor_set(v_reuseFailAlloc_508_, 15, v_split_459_);
lean_ctor_set(v_reuseFailAlloc_508_, 16, v_clean_460_);
lean_ctor_set(v_reuseFailAlloc_508_, 17, v_sstates_461_);
lean_ctor_set_uint8(v_reuseFailAlloc_508_, sizeof(void*)*18, v_inconsistent_452_);
v___x_467_ = v_reuseFailAlloc_508_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = l_Lean_Expr_mvarId_x21(v_a_443_);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_467_);
lean_ctor_set(v___x_469_, 1, v___x_468_);
v___x_470_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_422_, v___y_424_);
lean_dec_ref(v_e_422_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_472_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref_known(v___x_470_, 1);
v___x_472_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_solve(v___x_469_, v_a_471_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_491_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_491_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_491_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_491_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
if (lean_obj_tag(v_a_473_) == 0)
{
lean_object* v___x_477_; lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_486_; 
lean_del_object(v___x_475_);
v___x_477_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__0___redArg(v_a_443_, v___y_431_);
v_a_478_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_486_ == 0)
{
v___x_480_ = v___x_477_;
v_isShared_481_ = v_isSharedCheck_486_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_477_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_486_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_482_, 0, v_a_478_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v___x_482_);
v___x_484_ = v___x_480_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_482_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
else
{
lean_object* v___x_487_; lean_object* v___x_489_; 
lean_dec_ref_known(v_a_473_, 1);
lean_dec(v_a_443_);
v___x_487_ = lean_box(0);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_487_);
v___x_489_ = v___x_475_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_487_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
lean_dec(v_a_443_);
v_a_492_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___x_472_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_472_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
lean_dec_ref_known(v___x_469_, 2);
lean_dec(v_a_443_);
v_a_500_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_470_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_470_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec_ref(v_toGoalState_423_);
lean_dec_ref(v_e_422_);
v_a_511_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_442_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_442_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec(v_a_436_);
lean_dec_ref(v_toGoalState_423_);
lean_dec_ref(v_e_422_);
v_a_519_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_440_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_440_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_dec(v_a_436_);
lean_dec_ref(v_toGoalState_423_);
lean_dec_ref(v_e_422_);
v_a_527_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_437_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_437_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec_ref(v_toGoalState_423_);
lean_dec_ref(v_e_422_);
v_a_535_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_435_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_435_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed(lean_object* v_mvarId_543_, lean_object* v_e_544_, lean_object* v_toGoalState_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0(v_mvarId_543_, v_e_544_, v_toGoalState_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
lean_dec_ref(v___y_552_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec(v___y_546_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(lean_object* v_msgData_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
lean_object* v___x_564_; lean_object* v_env_565_; uint8_t v___x_566_; lean_object* v_env_567_; lean_object* v___x_568_; lean_object* v_toCold_569_; lean_object* v_mctx_570_; lean_object* v_lctx_571_; lean_object* v_options_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_564_ = lean_st_ref_get(v___y_562_);
v_env_565_ = lean_ctor_get(v___x_564_, 0);
lean_inc_ref(v_env_565_);
lean_dec(v___x_564_);
v___x_566_ = 0;
v_env_567_ = l_Lean_Environment_setRecordingDeps(v_env_565_, v___x_566_);
v___x_568_ = lean_st_ref_get(v___y_560_);
v_toCold_569_ = lean_ctor_get(v___y_561_, 0);
v_mctx_570_ = lean_ctor_get(v___x_568_, 0);
lean_inc_ref(v_mctx_570_);
lean_dec(v___x_568_);
v_lctx_571_ = lean_ctor_get(v___y_559_, 2);
v_options_572_ = lean_ctor_get(v_toCold_569_, 2);
lean_inc_ref(v_options_572_);
lean_inc_ref(v_lctx_571_);
v___x_573_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_573_, 0, v_env_567_);
lean_ctor_set(v___x_573_, 1, v_mctx_570_);
lean_ctor_set(v___x_573_, 2, v_lctx_571_);
lean_ctor_set(v___x_573_, 3, v_options_572_);
v___x_574_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
lean_ctor_set(v___x_574_, 1, v_msgData_558_);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2___boxed(lean_object* v_msgData_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(v_msgData_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
return v_res_582_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_583_; double v___x_584_; 
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = lean_float_of_nat(v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(lean_object* v_cls_588_, lean_object* v_msg_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v_ref_595_; lean_object* v___x_596_; lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_642_; 
v_ref_595_ = lean_ctor_get(v___y_592_, 2);
v___x_596_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2_spec__2(v_msg_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
v_a_597_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_642_ == 0)
{
v___x_599_ = v___x_596_;
v_isShared_600_ = v_isSharedCheck_642_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_596_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_642_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_601_; lean_object* v_traceState_602_; lean_object* v_env_603_; lean_object* v_nextMacroScope_604_; lean_object* v_ngen_605_; lean_object* v_auxDeclNGen_606_; lean_object* v_cache_607_; lean_object* v_recordedDeps_608_; lean_object* v_messages_609_; lean_object* v_infoState_610_; lean_object* v_snapshotTasks_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_641_; 
v___x_601_ = lean_st_ref_take(v___y_593_);
v_traceState_602_ = lean_ctor_get(v___x_601_, 4);
v_env_603_ = lean_ctor_get(v___x_601_, 0);
v_nextMacroScope_604_ = lean_ctor_get(v___x_601_, 1);
v_ngen_605_ = lean_ctor_get(v___x_601_, 2);
v_auxDeclNGen_606_ = lean_ctor_get(v___x_601_, 3);
v_cache_607_ = lean_ctor_get(v___x_601_, 5);
v_recordedDeps_608_ = lean_ctor_get(v___x_601_, 6);
v_messages_609_ = lean_ctor_get(v___x_601_, 7);
v_infoState_610_ = lean_ctor_get(v___x_601_, 8);
v_snapshotTasks_611_ = lean_ctor_get(v___x_601_, 9);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_641_ == 0)
{
v___x_613_ = v___x_601_;
v_isShared_614_ = v_isSharedCheck_641_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_snapshotTasks_611_);
lean_inc(v_infoState_610_);
lean_inc(v_messages_609_);
lean_inc(v_recordedDeps_608_);
lean_inc(v_cache_607_);
lean_inc(v_traceState_602_);
lean_inc(v_auxDeclNGen_606_);
lean_inc(v_ngen_605_);
lean_inc(v_nextMacroScope_604_);
lean_inc(v_env_603_);
lean_dec(v___x_601_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_641_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
uint64_t v_tid_615_; lean_object* v_traces_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_640_; 
v_tid_615_ = lean_ctor_get_uint64(v_traceState_602_, sizeof(void*)*1);
v_traces_616_ = lean_ctor_get(v_traceState_602_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v_traceState_602_);
if (v_isSharedCheck_640_ == 0)
{
v___x_618_ = v_traceState_602_;
v_isShared_619_ = v_isSharedCheck_640_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_traces_616_);
lean_dec(v_traceState_602_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_640_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; double v___x_622_; uint8_t v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_631_; 
v___x_620_ = lean_box(0);
v___x_621_ = lean_box(0);
v___x_622_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__0);
v___x_623_ = 0;
v___x_624_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__1));
v___x_625_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_625_, 0, v_cls_588_);
lean_ctor_set(v___x_625_, 1, v___x_621_);
lean_ctor_set(v___x_625_, 2, v___x_624_);
lean_ctor_set_float(v___x_625_, sizeof(void*)*3, v___x_622_);
lean_ctor_set_float(v___x_625_, sizeof(void*)*3 + 8, v___x_622_);
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*3 + 16, v___x_623_);
v___x_626_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___closed__2));
v___x_627_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_627_, 0, v___x_625_);
lean_ctor_set(v___x_627_, 1, v_a_597_);
lean_ctor_set(v___x_627_, 2, v___x_626_);
lean_inc(v_ref_595_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v_ref_595_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = l_Lean_PersistentArray_push___redArg(v_traces_616_, v___x_628_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_629_);
v___x_631_ = v___x_618_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_629_);
lean_ctor_set_uint64(v_reuseFailAlloc_639_, sizeof(void*)*1, v_tid_615_);
v___x_631_ = v_reuseFailAlloc_639_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
lean_object* v___x_633_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 4, v___x_631_);
v___x_633_ = v___x_613_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_env_603_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v_nextMacroScope_604_);
lean_ctor_set(v_reuseFailAlloc_638_, 2, v_ngen_605_);
lean_ctor_set(v_reuseFailAlloc_638_, 3, v_auxDeclNGen_606_);
lean_ctor_set(v_reuseFailAlloc_638_, 4, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_638_, 5, v_cache_607_);
lean_ctor_set(v_reuseFailAlloc_638_, 6, v_recordedDeps_608_);
lean_ctor_set(v_reuseFailAlloc_638_, 7, v_messages_609_);
lean_ctor_set(v_reuseFailAlloc_638_, 8, v_infoState_610_);
lean_ctor_set(v_reuseFailAlloc_638_, 9, v_snapshotTasks_611_);
v___x_633_ = v_reuseFailAlloc_638_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_634_ = lean_st_ref_put(v___y_593_, v___x_633_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 0, v___x_620_);
v___x_636_ = v___x_599_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_620_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg___boxed(lean_object* v_cls_643_, lean_object* v_msg_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_643_, v_msg_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
return v_res_650_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_658_ = lean_box(0);
v___x_659_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__3));
v___x_660_ = l_Lean_mkConst(v___x_659_, v___x_658_);
return v___x_660_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11(void){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_671_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8));
v___x_672_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10));
v___x_673_ = l_Lean_Name_append(v___x_672_, v___x_671_);
return v___x_673_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14(void){
_start:
{
lean_object* v_cls_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v_cls_679_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13));
v___x_680_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__10));
v___x_681_ = l_Lean_Name_append(v___x_680_, v_cls_679_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(lean_object* v_e_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_){
_start:
{
lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v_config_736_; lean_object* v_toCold_737_; lean_object* v_options_738_; lean_object* v_simp_739_; lean_object* v_simpMethods_740_; lean_object* v_symSimpMethods_741_; lean_object* v_symDSimpMethods_742_; lean_object* v_anchorRefs_x3f_743_; uint8_t v_reportMVarIssue_744_; lean_object* v_splitSource_745_; lean_object* v_ematchDiagSource_746_; lean_object* v_symPrios_747_; lean_object* v_extensions_748_; uint8_t v_debug_749_; uint8_t v_ematchDiag_750_; uint8_t v_trace_751_; uint8_t v_markInstances_752_; uint8_t v_lax_753_; uint8_t v_suggestions_754_; uint8_t v_locals_755_; lean_object* v_splits_756_; lean_object* v_ematch_757_; lean_object* v_gen_758_; lean_object* v_genLocal_759_; lean_object* v_instances_760_; uint8_t v_matchEqs_761_; uint8_t v_splitMatch_762_; uint8_t v_splitIte_763_; uint8_t v_splitIndPred_764_; uint8_t v_splitImp_765_; lean_object* v_canonHeartbeats_766_; uint8_t v_ext_767_; uint8_t v_extAll_768_; uint8_t v_etaStruct_769_; uint8_t v_funext_770_; uint8_t v_lookahead_771_; uint8_t v_verbose_772_; uint8_t v_clean_773_; uint8_t v_mbtc_774_; uint8_t v_zetaDelta_775_; uint8_t v_zeta_776_; uint8_t v_distrib_777_; uint8_t v_ring_778_; lean_object* v_ringSteps_779_; lean_object* v_ringMaxDegree_780_; uint8_t v_linarith_781_; uint8_t v_lia_782_; lean_object* v_liaSteps_783_; uint8_t v_hom_784_; uint8_t v_ac_785_; lean_object* v_acSteps_786_; lean_object* v_exp_787_; uint8_t v_abstractProof_788_; uint8_t v_inj_789_; uint8_t v_order_790_; lean_object* v_min_791_; lean_object* v_detailed_792_; uint8_t v_useSorry_793_; uint8_t v_revert_794_; uint8_t v_funCC_795_; uint8_t v_reducible_796_; lean_object* v_maxSuggestions_797_; lean_object* v_inheritedTraceOptions_798_; uint8_t v_hasTrace_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___x_855_; 
v_config_736_ = lean_ctor_get(v_a_685_, 4);
v_toCold_737_ = lean_ctor_get(v_a_691_, 0);
v_options_738_ = lean_ctor_get(v_toCold_737_, 2);
v_simp_739_ = lean_ctor_get(v_a_685_, 0);
v_simpMethods_740_ = lean_ctor_get(v_a_685_, 1);
v_symSimpMethods_741_ = lean_ctor_get(v_a_685_, 2);
v_symDSimpMethods_742_ = lean_ctor_get(v_a_685_, 3);
v_anchorRefs_x3f_743_ = lean_ctor_get(v_a_685_, 5);
v_reportMVarIssue_744_ = lean_ctor_get_uint8(v_a_685_, sizeof(void*)*10 + 1);
v_splitSource_745_ = lean_ctor_get(v_a_685_, 6);
v_ematchDiagSource_746_ = lean_ctor_get(v_a_685_, 7);
v_symPrios_747_ = lean_ctor_get(v_a_685_, 8);
v_extensions_748_ = lean_ctor_get(v_a_685_, 9);
v_debug_749_ = lean_ctor_get_uint8(v_a_685_, sizeof(void*)*10 + 2);
v_ematchDiag_750_ = lean_ctor_get_uint8(v_a_685_, sizeof(void*)*10 + 3);
v_trace_751_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14);
v_markInstances_752_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 1);
v_lax_753_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 2);
v_suggestions_754_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 3);
v_locals_755_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 4);
v_splits_756_ = lean_ctor_get(v_config_736_, 0);
v_ematch_757_ = lean_ctor_get(v_config_736_, 1);
v_gen_758_ = lean_ctor_get(v_config_736_, 2);
v_genLocal_759_ = lean_ctor_get(v_config_736_, 3);
v_instances_760_ = lean_ctor_get(v_config_736_, 4);
v_matchEqs_761_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 5);
v_splitMatch_762_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 6);
v_splitIte_763_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 7);
v_splitIndPred_764_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 8);
v_splitImp_765_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 9);
v_canonHeartbeats_766_ = lean_ctor_get(v_config_736_, 5);
v_ext_767_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 10);
v_extAll_768_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 11);
v_etaStruct_769_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 12);
v_funext_770_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 13);
v_lookahead_771_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 14);
v_verbose_772_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 15);
v_clean_773_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 16);
v_mbtc_774_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 18);
v_zetaDelta_775_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 19);
v_zeta_776_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 20);
v_distrib_777_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 21);
v_ring_778_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 22);
v_ringSteps_779_ = lean_ctor_get(v_config_736_, 6);
v_ringMaxDegree_780_ = lean_ctor_get(v_config_736_, 7);
v_linarith_781_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 23);
v_lia_782_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 24);
v_liaSteps_783_ = lean_ctor_get(v_config_736_, 8);
v_hom_784_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 25);
v_ac_785_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 26);
v_acSteps_786_ = lean_ctor_get(v_config_736_, 9);
v_exp_787_ = lean_ctor_get(v_config_736_, 10);
v_abstractProof_788_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 27);
v_inj_789_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 28);
v_order_790_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 29);
v_min_791_ = lean_ctor_get(v_config_736_, 11);
v_detailed_792_ = lean_ctor_get(v_config_736_, 12);
v_useSorry_793_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 30);
v_revert_794_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 31);
v_funCC_795_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 32);
v_reducible_796_ = lean_ctor_get_uint8(v_config_736_, sizeof(void*)*14 + 33);
v_maxSuggestions_797_ = lean_ctor_get(v_config_736_, 13);
v_inheritedTraceOptions_798_ = lean_ctor_get(v_toCold_737_, 11);
v_hasTrace_799_ = lean_ctor_get_uint8(v_options_738_, sizeof(void*)*1);
v___x_800_ = 1;
lean_inc(v_maxSuggestions_797_);
lean_inc(v_detailed_792_);
lean_inc(v_min_791_);
lean_inc(v_exp_787_);
lean_inc(v_acSteps_786_);
lean_inc(v_liaSteps_783_);
lean_inc(v_ringMaxDegree_780_);
lean_inc(v_ringSteps_779_);
lean_inc(v_canonHeartbeats_766_);
lean_inc(v_instances_760_);
lean_inc(v_genLocal_759_);
lean_inc(v_gen_758_);
lean_inc(v_ematch_757_);
lean_inc(v_splits_756_);
v___x_801_ = lean_alloc_ctor(0, 14, 34);
lean_ctor_set(v___x_801_, 0, v_splits_756_);
lean_ctor_set(v___x_801_, 1, v_ematch_757_);
lean_ctor_set(v___x_801_, 2, v_gen_758_);
lean_ctor_set(v___x_801_, 3, v_genLocal_759_);
lean_ctor_set(v___x_801_, 4, v_instances_760_);
lean_ctor_set(v___x_801_, 5, v_canonHeartbeats_766_);
lean_ctor_set(v___x_801_, 6, v_ringSteps_779_);
lean_ctor_set(v___x_801_, 7, v_ringMaxDegree_780_);
lean_ctor_set(v___x_801_, 8, v_liaSteps_783_);
lean_ctor_set(v___x_801_, 9, v_acSteps_786_);
lean_ctor_set(v___x_801_, 10, v_exp_787_);
lean_ctor_set(v___x_801_, 11, v_min_791_);
lean_ctor_set(v___x_801_, 12, v_detailed_792_);
lean_ctor_set(v___x_801_, 13, v_maxSuggestions_797_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14, v_trace_751_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 1, v_markInstances_752_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 2, v_lax_753_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 3, v_suggestions_754_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 4, v_locals_755_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 5, v_matchEqs_761_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 6, v_splitMatch_762_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 7, v_splitIte_763_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 8, v_splitIndPred_764_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 9, v_splitImp_765_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 10, v_ext_767_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 11, v_extAll_768_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 12, v_etaStruct_769_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 13, v_funext_770_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 14, v_lookahead_771_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 15, v_verbose_772_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 16, v_clean_773_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 17, v___x_800_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 18, v_mbtc_774_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 19, v_zetaDelta_775_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 20, v_zeta_776_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 21, v_distrib_777_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 22, v_ring_778_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 23, v_linarith_781_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 24, v_lia_782_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 25, v_hom_784_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 26, v_ac_785_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 27, v_abstractProof_788_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 28, v_inj_789_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 29, v_order_790_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 30, v_useSorry_793_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 31, v_revert_794_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 32, v_funCC_795_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*14 + 33, v_reducible_796_);
lean_inc_ref(v_extensions_748_);
lean_inc_ref(v_symPrios_747_);
lean_inc(v_ematchDiagSource_746_);
lean_inc(v_splitSource_745_);
lean_inc(v_anchorRefs_x3f_743_);
lean_inc_ref(v_symDSimpMethods_742_);
lean_inc_ref(v_symSimpMethods_741_);
lean_inc_ref(v_simpMethods_740_);
lean_inc_ref(v_simp_739_);
v___x_855_ = lean_alloc_ctor(0, 10, 4);
lean_ctor_set(v___x_855_, 0, v_simp_739_);
lean_ctor_set(v___x_855_, 1, v_simpMethods_740_);
lean_ctor_set(v___x_855_, 2, v_symSimpMethods_741_);
lean_ctor_set(v___x_855_, 3, v_symDSimpMethods_742_);
lean_ctor_set(v___x_855_, 4, v___x_801_);
lean_ctor_set(v___x_855_, 5, v_anchorRefs_x3f_743_);
lean_ctor_set(v___x_855_, 6, v_splitSource_745_);
lean_ctor_set(v___x_855_, 7, v_ematchDiagSource_746_);
lean_ctor_set(v___x_855_, 8, v_symPrios_747_);
lean_ctor_set(v___x_855_, 9, v_extensions_748_);
lean_ctor_set_uint8(v___x_855_, sizeof(void*)*10, v___x_800_);
lean_ctor_set_uint8(v___x_855_, sizeof(void*)*10 + 1, v_reportMVarIssue_744_);
lean_ctor_set_uint8(v___x_855_, sizeof(void*)*10 + 2, v_debug_749_);
lean_ctor_set_uint8(v___x_855_, sizeof(void*)*10 + 3, v_ematchDiag_750_);
if (v_hasTrace_799_ == 0)
{
v___y_803_ = v_a_683_;
v___y_804_ = v_a_684_;
v___y_805_ = v___x_855_;
v___y_806_ = v_a_686_;
v___y_807_ = v_a_687_;
v___y_808_ = v_a_688_;
v___y_809_ = v_a_689_;
v___y_810_ = v_a_690_;
v___y_811_ = v_a_691_;
v___y_812_ = v_a_692_;
goto v___jp_802_;
}
else
{
lean_object* v_cls_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v_cls_856_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__13));
v___x_857_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__14);
v___x_858_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_798_, v_options_738_, v___x_857_);
if (v___x_858_ == 0)
{
v___y_803_ = v_a_683_;
v___y_804_ = v_a_684_;
v___y_805_ = v___x_855_;
v___y_806_ = v_a_686_;
v___y_807_ = v_a_687_;
v___y_808_ = v_a_688_;
v___y_809_ = v_a_689_;
v___y_810_ = v_a_690_;
v___y_811_ = v_a_691_;
v___y_812_ = v_a_692_;
goto v___jp_802_;
}
else
{
lean_object* v___x_859_; 
v___x_859_ = l_Lean_Meta_Grind_updateLastTag(v_a_683_, v_a_684_, v___x_855_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v___x_860_; lean_object* v___x_861_; 
lean_dec_ref_known(v___x_859_, 1);
lean_inc_ref(v_e_682_);
v___x_860_ = l_Lean_MessageData_ofExpr(v_e_682_);
v___x_861_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_856_, v___x_860_, v_a_689_, v_a_690_, v_a_691_, v_a_692_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_dec_ref_known(v___x_861_, 1);
v___y_803_ = v_a_683_;
v___y_804_ = v_a_684_;
v___y_805_ = v___x_855_;
v___y_806_ = v_a_686_;
v___y_807_ = v_a_687_;
v___y_808_ = v_a_688_;
v___y_809_ = v_a_689_;
v___y_810_ = v_a_690_;
v___y_811_ = v_a_691_;
v___y_812_ = v_a_692_;
goto v___jp_802_;
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
lean_dec_ref_known(v___x_855_, 10);
lean_dec_ref(v_e_682_);
v_a_862_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_861_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
lean_dec_ref_known(v___x_855_, 10);
lean_dec_ref(v_e_682_);
v_a_870_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_859_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_859_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
}
v___jp_694_:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_706_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__4);
lean_inc_ref(v_e_682_);
v___x_707_ = l_Lean_mkAppB(v___x_706_, v_e_682_, v___y_695_);
v___x_708_ = l_Lean_Meta_Grind_pushEqTrue___redArg(v_e_682_, v___x_707_, v___y_696_, v___y_698_, v___y_700_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v___x_709_; 
lean_dec_ref_known(v___x_708_, 1);
lean_inc(v___y_705_);
lean_inc_ref(v___y_704_);
lean_inc(v___y_703_);
lean_inc_ref(v___y_702_);
lean_inc(v___y_701_);
lean_inc_ref(v___y_700_);
lean_inc(v___y_699_);
lean_inc(v___y_697_);
lean_inc(v___y_696_);
v___x_709_ = lean_grind_process_to_do(v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_718_; 
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_718_ == 0)
{
lean_object* v_unused_719_; 
v_unused_719_ = lean_ctor_get(v___x_709_, 0);
lean_dec(v_unused_719_);
v___x_711_ = v___x_709_;
v_isShared_712_ = v_isSharedCheck_718_;
goto v_resetjp_710_;
}
else
{
lean_dec(v___x_709_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_718_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
uint8_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_713_ = 1;
v___x_714_ = lean_box(v___x_713_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_714_);
v___x_716_ = v___x_711_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
v_a_720_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_709_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_709_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_dec_ref(v___y_698_);
v_a_728_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_708_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_708_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
v___jp_802_:
{
lean_object* v___x_813_; lean_object* v_toGoalState_814_; lean_object* v_mvarId_815_; lean_object* v___f_816_; lean_object* v___x_817_; 
v___x_813_ = lean_st_ref_get(v___y_803_);
v_toGoalState_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc_ref(v_toGoalState_814_);
v_mvarId_815_ = lean_ctor_get(v___x_813_, 1);
lean_inc(v_mvarId_815_);
lean_dec(v___x_813_);
lean_inc_ref(v_e_682_);
v___f_816_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___lam__0___boxed), 14, 3);
lean_closure_set(v___f_816_, 0, v_mvarId_815_);
lean_closure_set(v___f_816_, 1, v_e_682_);
lean_closure_set(v___f_816_, 2, v_toGoalState_814_);
v___x_817_ = l_Lean_Meta_withoutModifyingMCtx___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__1___redArg(v___f_816_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_846_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_846_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_846_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_846_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
if (lean_obj_tag(v_a_818_) == 1)
{
lean_object* v_toCold_822_; lean_object* v_options_823_; uint8_t v_hasTrace_824_; 
lean_del_object(v___x_820_);
v_toCold_822_ = lean_ctor_get(v___y_811_, 0);
v_options_823_ = lean_ctor_get(v_toCold_822_, 2);
v_hasTrace_824_ = lean_ctor_get_uint8(v_options_823_, sizeof(void*)*1);
if (v_hasTrace_824_ == 0)
{
lean_object* v_val_825_; 
v_val_825_ = lean_ctor_get(v_a_818_, 0);
lean_inc(v_val_825_);
lean_dec_ref_known(v_a_818_, 1);
v___y_695_ = v_val_825_;
v___y_696_ = v___y_803_;
v___y_697_ = v___y_804_;
v___y_698_ = v___y_805_;
v___y_699_ = v___y_806_;
v___y_700_ = v___y_807_;
v___y_701_ = v___y_808_;
v___y_702_ = v___y_809_;
v___y_703_ = v___y_810_;
v___y_704_ = v___y_811_;
v___y_705_ = v___y_812_;
goto v___jp_694_;
}
else
{
lean_object* v_val_826_; lean_object* v_inheritedTraceOptions_827_; lean_object* v___x_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
v_val_826_ = lean_ctor_get(v_a_818_, 0);
lean_inc(v_val_826_);
lean_dec_ref_known(v_a_818_, 1);
v_inheritedTraceOptions_827_ = lean_ctor_get(v_toCold_822_, 11);
v___x_828_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__8));
v___x_829_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11, &l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___closed__11);
v___x_830_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_827_, v_options_823_, v___x_829_);
if (v___x_830_ == 0)
{
v___y_695_ = v_val_826_;
v___y_696_ = v___y_803_;
v___y_697_ = v___y_804_;
v___y_698_ = v___y_805_;
v___y_699_ = v___y_806_;
v___y_700_ = v___y_807_;
v___y_701_ = v___y_808_;
v___y_702_ = v___y_809_;
v___y_703_ = v___y_810_;
v___y_704_ = v___y_811_;
v___y_705_ = v___y_812_;
goto v___jp_694_;
}
else
{
lean_object* v___x_831_; lean_object* v___x_832_; 
lean_inc_ref(v_e_682_);
v___x_831_ = l_Lean_MessageData_ofExpr(v_e_682_);
v___x_832_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v___x_828_, v___x_831_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_dec_ref_known(v___x_832_, 1);
v___y_695_ = v_val_826_;
v___y_696_ = v___y_803_;
v___y_697_ = v___y_804_;
v___y_698_ = v___y_805_;
v___y_699_ = v___y_806_;
v___y_700_ = v___y_807_;
v___y_701_ = v___y_808_;
v___y_702_ = v___y_809_;
v___y_703_ = v___y_810_;
v___y_704_ = v___y_811_;
v___y_705_ = v___y_812_;
goto v___jp_694_;
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec(v_val_826_);
lean_dec_ref(v___y_805_);
lean_dec_ref(v_e_682_);
v_a_833_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
}
}
else
{
uint8_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_844_; 
lean_dec(v_a_818_);
lean_dec_ref(v___y_805_);
lean_dec_ref(v_e_682_);
v___x_841_ = 0;
v___x_842_ = lean_box(v___x_841_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_842_);
v___x_844_ = v___x_820_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v___x_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_dec_ref(v___y_805_);
lean_dec_ref(v_e_682_);
v_a_847_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_817_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_817_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead___boxed(lean_object* v_e_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(v_e_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_, v_a_888_);
lean_dec(v_a_888_);
lean_dec_ref(v_a_887_);
lean_dec(v_a_886_);
lean_dec_ref(v_a_885_);
lean_dec(v_a_884_);
lean_dec_ref(v_a_883_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
lean_dec(v_a_880_);
lean_dec(v_a_879_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(lean_object* v_cls_891_, lean_object* v_msg_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___redArg(v_cls_891_, v_msg_892_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2___boxed(lean_object* v_cls_905_, lean_object* v_msg_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead_spec__2(v_cls_905_, v_msg_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec(v___y_914_);
lean_dec_ref(v___y_913_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec(v___y_907_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(uint8_t v___x_919_, lean_object* v_as_x27_920_, lean_object* v_b_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
if (lean_obj_tag(v_as_x27_920_) == 0)
{
lean_object* v___x_933_; 
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v_b_921_);
return v___x_933_;
}
else
{
lean_object* v_snd_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_1036_; 
v_snd_934_ = lean_ctor_get(v_b_921_, 1);
v_isSharedCheck_1036_ = !lean_is_exclusive(v_b_921_);
if (v_isSharedCheck_1036_ == 0)
{
lean_object* v_unused_1037_; 
v_unused_1037_ = lean_ctor_get(v_b_921_, 0);
lean_dec(v_unused_1037_);
v___x_936_ = v_b_921_;
v_isShared_937_ = v_isSharedCheck_1036_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_snd_934_);
lean_dec(v_b_921_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_1036_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v_head_938_; lean_object* v_tail_939_; lean_object* v_fst_940_; lean_object* v_snd_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_1035_; 
v_head_938_ = lean_ctor_get(v_as_x27_920_, 0);
v_tail_939_ = lean_ctor_get(v_as_x27_920_, 1);
v_fst_940_ = lean_ctor_get(v_snd_934_, 0);
v_snd_941_ = lean_ctor_get(v_snd_934_, 1);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_snd_934_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_943_ = v_snd_934_;
v_isShared_944_ = v_isSharedCheck_1035_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_snd_941_);
lean_inc(v_fst_940_);
lean_dec(v_snd_934_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_1035_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = lean_box(0);
v___x_946_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_922_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_1026_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_949_ = v___x_946_;
v_isShared_950_ = v_isSharedCheck_1026_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_946_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_1026_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
uint8_t v___x_951_; 
v___x_951_ = lean_unbox(v_a_947_);
lean_dec(v_a_947_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; 
lean_del_object(v___x_949_);
lean_inc(v_head_938_);
v___x_952_ = l_Lean_Meta_Grind_checkSplitStatus(v_head_938_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_952_, 1);
switch(lean_obj_tag(v_a_953_))
{
case 0:
{
lean_object* v___x_954_; lean_object* v___x_956_; 
lean_dec(v_snd_941_);
v___x_954_ = lean_box(v___x_919_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_954_);
v___x_956_ = v___x_943_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_fst_940_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v___x_954_);
v___x_956_ = v_reuseFailAlloc_961_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_958_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v___x_956_);
lean_ctor_set(v___x_936_, 0, v___x_945_);
v___x_958_ = v___x_936_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v___x_956_);
v___x_958_ = v_reuseFailAlloc_960_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
v_as_x27_920_ = v_tail_939_;
v_b_921_ = v___x_958_;
goto _start;
}
}
}
case 1:
{
lean_object* v___x_962_; lean_object* v___x_964_; 
lean_inc(v_head_938_);
v___x_962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_962_, 0, v_head_938_);
lean_ctor_set(v___x_962_, 1, v_fst_940_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_962_);
v___x_964_ = v___x_943_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_962_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_snd_941_);
v___x_964_ = v_reuseFailAlloc_969_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
lean_object* v___x_966_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v___x_964_);
lean_ctor_set(v___x_936_, 0, v___x_945_);
v___x_966_ = v___x_936_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v___x_964_);
v___x_966_ = v_reuseFailAlloc_968_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
v_as_x27_920_ = v_tail_939_;
v_b_921_ = v___x_966_;
goto _start;
}
}
}
default: 
{
uint8_t v_tryPostpone_970_; 
v_tryPostpone_970_ = lean_ctor_get_uint8(v_a_953_, sizeof(void*)*1 + 1);
lean_dec_ref_known(v_a_953_, 1);
if (v_tryPostpone_970_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = l_Lean_Meta_Grind_SplitInfo_getExpr(v_head_938_);
v___x_972_ = l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_tryLookahead(v___x_971_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; uint8_t v___x_974_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref_known(v___x_972_, 1);
v___x_974_ = lean_unbox(v_a_973_);
lean_dec(v_a_973_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; lean_object* v___x_977_; 
lean_inc(v_head_938_);
v___x_975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_975_, 0, v_head_938_);
lean_ctor_set(v___x_975_, 1, v_fst_940_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_975_);
v___x_977_ = v___x_943_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_975_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_snd_941_);
v___x_977_ = v_reuseFailAlloc_982_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_979_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v___x_977_);
lean_ctor_set(v___x_936_, 0, v___x_945_);
v___x_979_ = v___x_936_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v___x_977_);
v___x_979_ = v_reuseFailAlloc_981_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
v_as_x27_920_ = v_tail_939_;
v_b_921_ = v___x_979_;
goto _start;
}
}
}
else
{
lean_object* v___x_983_; lean_object* v___x_985_; 
lean_dec(v_snd_941_);
v___x_983_ = lean_box(v___x_919_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_983_);
v___x_985_ = v___x_943_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_fst_940_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_983_);
v___x_985_ = v_reuseFailAlloc_990_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_987_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v___x_985_);
lean_ctor_set(v___x_936_, 0, v___x_945_);
v___x_987_ = v___x_936_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v___x_985_);
v___x_987_ = v_reuseFailAlloc_989_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
v_as_x27_920_ = v_tail_939_;
v_b_921_ = v___x_987_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_del_object(v___x_943_);
lean_dec(v_snd_941_);
lean_dec(v_fst_940_);
lean_del_object(v___x_936_);
v_a_991_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_972_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_972_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
else
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
lean_inc(v_head_938_);
v___x_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_999_, 0, v_head_938_);
lean_ctor_set(v___x_999_, 1, v_fst_940_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v___x_999_);
v___x_1001_ = v___x_943_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_snd_941_);
v___x_1001_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1003_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v___x_1001_);
lean_ctor_set(v___x_936_, 0, v___x_945_);
v___x_1003_ = v___x_936_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
v_as_x27_920_ = v_tail_939_;
v_b_921_ = v___x_1003_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_del_object(v___x_943_);
lean_dec(v_snd_941_);
lean_dec(v_fst_940_);
lean_del_object(v___x_936_);
v_a_1007_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_952_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_952_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
else
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1018_; 
v___x_1015_ = lean_box(v___x_919_);
v___x_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
if (v_isShared_944_ == 0)
{
v___x_1018_ = v___x_943_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_fst_940_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v_snd_941_);
v___x_1018_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1020_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 1, v___x_1018_);
lean_ctor_set(v___x_936_, 0, v___x_1016_);
v___x_1020_ = v___x_936_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1016_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1022_; 
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_1020_);
v___x_1022_ = v___x_949_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_del_object(v___x_943_);
lean_dec(v_snd_941_);
lean_dec(v_fst_940_);
lean_del_object(v___x_936_);
v_a_1027_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_946_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_946_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg___boxed(lean_object* v___x_1038_, lean_object* v_as_x27_1039_, lean_object* v_b_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
uint8_t v___x_33303__boxed_1052_; lean_object* v_res_1053_; 
v___x_33303__boxed_1052_ = lean_unbox(v___x_1038_);
v_res_1053_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v___x_33303__boxed_1052_, v_as_x27_1039_, v_b_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec(v_as_x27_1039_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead(lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1056_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1249_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1068_ = v___x_1065_;
v_isShared_1069_ = v_isSharedCheck_1249_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1065_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1249_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
uint8_t v_lookahead_1070_; 
v_lookahead_1070_ = lean_ctor_get_uint8(v_a_1066_, sizeof(void*)*14 + 14);
lean_dec(v_a_1066_);
if (v_lookahead_1070_ == 0)
{
lean_object* v___x_1071_; lean_object* v___x_1073_; 
v___x_1071_ = lean_box(v_lookahead_1070_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 0, v___x_1071_);
v___x_1073_ = v___x_1068_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1071_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
else
{
lean_object* v___x_1075_; lean_object* v_toGoalState_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1247_; 
v___x_1075_ = lean_st_ref_get(v_a_1054_);
v_toGoalState_1076_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1247_ == 0)
{
lean_object* v_unused_1248_; 
v_unused_1248_ = lean_ctor_get(v___x_1075_, 1);
lean_dec(v_unused_1248_);
v___x_1078_ = v___x_1075_;
v_isShared_1079_ = v_isSharedCheck_1247_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_toGoalState_1076_);
lean_dec(v___x_1075_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1247_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v_split_1080_; lean_object* v_lookaheads_1081_; uint8_t v___x_1082_; 
v_split_1080_ = lean_ctor_get(v_toGoalState_1076_, 15);
lean_inc_ref(v_split_1080_);
lean_dec_ref(v_toGoalState_1076_);
v_lookaheads_1081_ = lean_ctor_get(v_split_1080_, 5);
lean_inc(v_lookaheads_1081_);
lean_dec_ref(v_split_1080_);
v___x_1082_ = l_List_isEmpty___redArg(v_lookaheads_1081_);
lean_dec(v_lookaheads_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v_toGoalState_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1240_; 
lean_del_object(v___x_1068_);
v___x_1083_ = lean_box(0);
v___x_1084_ = lean_st_ref_get(v_a_1054_);
v_toGoalState_1085_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1240_ == 0)
{
lean_object* v_unused_1241_; 
v_unused_1241_ = lean_ctor_get(v___x_1084_, 1);
lean_dec(v_unused_1241_);
v___x_1087_ = v___x_1084_;
v_isShared_1088_ = v_isSharedCheck_1240_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_toGoalState_1085_);
lean_dec(v___x_1084_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1240_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v_split_1089_; lean_object* v_lookaheads_1090_; lean_object* v___x_1091_; lean_object* v_toGoalState_1092_; lean_object* v_split_1093_; lean_object* v_mvarId_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1238_; 
v_split_1089_ = lean_ctor_get(v_toGoalState_1085_, 15);
lean_inc_ref(v_split_1089_);
lean_dec_ref(v_toGoalState_1085_);
v_lookaheads_1090_ = lean_ctor_get(v_split_1089_, 5);
lean_inc(v_lookaheads_1090_);
lean_dec_ref(v_split_1089_);
v___x_1091_ = lean_st_ref_take(v_a_1054_);
v_toGoalState_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc_ref(v_toGoalState_1092_);
v_split_1093_ = lean_ctor_get(v_toGoalState_1092_, 15);
lean_inc_ref(v_split_1093_);
v_mvarId_1094_ = lean_ctor_get(v___x_1091_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1238_ == 0)
{
lean_object* v_unused_1239_; 
v_unused_1239_ = lean_ctor_get(v___x_1091_, 0);
lean_dec(v_unused_1239_);
v___x_1096_ = v___x_1091_;
v_isShared_1097_ = v_isSharedCheck_1238_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_mvarId_1094_);
lean_dec(v___x_1091_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1238_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v_nextDeclIdx_1098_; lean_object* v_enodeMap_1099_; lean_object* v_exprs_1100_; lean_object* v_parents_1101_; lean_object* v_congrTable_1102_; lean_object* v_appMap_1103_; lean_object* v_indicesFound_1104_; lean_object* v_toProcess_1105_; lean_object* v_internalizing_1106_; uint8_t v_inconsistent_1107_; lean_object* v_nextIdx_1108_; lean_object* v_newRawFacts_1109_; lean_object* v_facts_1110_; lean_object* v_extThms_1111_; lean_object* v_ematch_1112_; lean_object* v_inj_1113_; lean_object* v_clean_1114_; lean_object* v_sstates_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1236_; 
v_nextDeclIdx_1098_ = lean_ctor_get(v_toGoalState_1092_, 0);
v_enodeMap_1099_ = lean_ctor_get(v_toGoalState_1092_, 1);
v_exprs_1100_ = lean_ctor_get(v_toGoalState_1092_, 2);
v_parents_1101_ = lean_ctor_get(v_toGoalState_1092_, 3);
v_congrTable_1102_ = lean_ctor_get(v_toGoalState_1092_, 4);
v_appMap_1103_ = lean_ctor_get(v_toGoalState_1092_, 5);
v_indicesFound_1104_ = lean_ctor_get(v_toGoalState_1092_, 6);
v_toProcess_1105_ = lean_ctor_get(v_toGoalState_1092_, 7);
v_internalizing_1106_ = lean_ctor_get(v_toGoalState_1092_, 8);
v_inconsistent_1107_ = lean_ctor_get_uint8(v_toGoalState_1092_, sizeof(void*)*18);
v_nextIdx_1108_ = lean_ctor_get(v_toGoalState_1092_, 9);
v_newRawFacts_1109_ = lean_ctor_get(v_toGoalState_1092_, 10);
v_facts_1110_ = lean_ctor_get(v_toGoalState_1092_, 11);
v_extThms_1111_ = lean_ctor_get(v_toGoalState_1092_, 12);
v_ematch_1112_ = lean_ctor_get(v_toGoalState_1092_, 13);
v_inj_1113_ = lean_ctor_get(v_toGoalState_1092_, 14);
v_clean_1114_ = lean_ctor_get(v_toGoalState_1092_, 16);
v_sstates_1115_ = lean_ctor_get(v_toGoalState_1092_, 17);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_toGoalState_1092_);
if (v_isSharedCheck_1236_ == 0)
{
lean_object* v_unused_1237_; 
v_unused_1237_ = lean_ctor_get(v_toGoalState_1092_, 15);
lean_dec(v_unused_1237_);
v___x_1117_ = v_toGoalState_1092_;
v_isShared_1118_ = v_isSharedCheck_1236_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_sstates_1115_);
lean_inc(v_clean_1114_);
lean_inc(v_inj_1113_);
lean_inc(v_ematch_1112_);
lean_inc(v_extThms_1111_);
lean_inc(v_facts_1110_);
lean_inc(v_newRawFacts_1109_);
lean_inc(v_nextIdx_1108_);
lean_inc(v_internalizing_1106_);
lean_inc(v_toProcess_1105_);
lean_inc(v_indicesFound_1104_);
lean_inc(v_appMap_1103_);
lean_inc(v_congrTable_1102_);
lean_inc(v_parents_1101_);
lean_inc(v_exprs_1100_);
lean_inc(v_enodeMap_1099_);
lean_inc(v_nextDeclIdx_1098_);
lean_dec(v_toGoalState_1092_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1236_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v_num_1119_; lean_object* v_candidates_1120_; lean_object* v_added_1121_; lean_object* v_resolved_1122_; lean_object* v_trace_1123_; lean_object* v_argPosMap_1124_; lean_object* v_argsAt_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1234_; 
v_num_1119_ = lean_ctor_get(v_split_1093_, 0);
v_candidates_1120_ = lean_ctor_get(v_split_1093_, 1);
v_added_1121_ = lean_ctor_get(v_split_1093_, 2);
v_resolved_1122_ = lean_ctor_get(v_split_1093_, 3);
v_trace_1123_ = lean_ctor_get(v_split_1093_, 4);
v_argPosMap_1124_ = lean_ctor_get(v_split_1093_, 6);
v_argsAt_1125_ = lean_ctor_get(v_split_1093_, 7);
v_isSharedCheck_1234_ = !lean_is_exclusive(v_split_1093_);
if (v_isSharedCheck_1234_ == 0)
{
lean_object* v_unused_1235_; 
v_unused_1235_ = lean_ctor_get(v_split_1093_, 5);
lean_dec(v_unused_1235_);
v___x_1127_ = v_split_1093_;
v_isShared_1128_ = v_isSharedCheck_1234_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_argsAt_1125_);
lean_inc(v_argPosMap_1124_);
lean_inc(v_trace_1123_);
lean_inc(v_resolved_1122_);
lean_inc(v_added_1121_);
lean_inc(v_candidates_1120_);
lean_inc(v_num_1119_);
lean_dec(v_split_1093_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1234_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 5, v___x_1083_);
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_num_1119_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v_candidates_1120_);
lean_ctor_set(v_reuseFailAlloc_1233_, 2, v_added_1121_);
lean_ctor_set(v_reuseFailAlloc_1233_, 3, v_resolved_1122_);
lean_ctor_set(v_reuseFailAlloc_1233_, 4, v_trace_1123_);
lean_ctor_set(v_reuseFailAlloc_1233_, 5, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1233_, 6, v_argPosMap_1124_);
lean_ctor_set(v_reuseFailAlloc_1233_, 7, v_argsAt_1125_);
v___x_1130_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1132_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 15, v___x_1130_);
v___x_1132_ = v___x_1117_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 18, 1);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_nextDeclIdx_1098_);
lean_ctor_set(v_reuseFailAlloc_1232_, 1, v_enodeMap_1099_);
lean_ctor_set(v_reuseFailAlloc_1232_, 2, v_exprs_1100_);
lean_ctor_set(v_reuseFailAlloc_1232_, 3, v_parents_1101_);
lean_ctor_set(v_reuseFailAlloc_1232_, 4, v_congrTable_1102_);
lean_ctor_set(v_reuseFailAlloc_1232_, 5, v_appMap_1103_);
lean_ctor_set(v_reuseFailAlloc_1232_, 6, v_indicesFound_1104_);
lean_ctor_set(v_reuseFailAlloc_1232_, 7, v_toProcess_1105_);
lean_ctor_set(v_reuseFailAlloc_1232_, 8, v_internalizing_1106_);
lean_ctor_set(v_reuseFailAlloc_1232_, 9, v_nextIdx_1108_);
lean_ctor_set(v_reuseFailAlloc_1232_, 10, v_newRawFacts_1109_);
lean_ctor_set(v_reuseFailAlloc_1232_, 11, v_facts_1110_);
lean_ctor_set(v_reuseFailAlloc_1232_, 12, v_extThms_1111_);
lean_ctor_set(v_reuseFailAlloc_1232_, 13, v_ematch_1112_);
lean_ctor_set(v_reuseFailAlloc_1232_, 14, v_inj_1113_);
lean_ctor_set(v_reuseFailAlloc_1232_, 15, v___x_1130_);
lean_ctor_set(v_reuseFailAlloc_1232_, 16, v_clean_1114_);
lean_ctor_set(v_reuseFailAlloc_1232_, 17, v_sstates_1115_);
lean_ctor_set_uint8(v_reuseFailAlloc_1232_, sizeof(void*)*18, v_inconsistent_1107_);
v___x_1132_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
lean_object* v___x_1134_; 
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 0, v___x_1132_);
v___x_1134_ = v___x_1096_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1132_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_mvarId_1094_);
v___x_1134_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1135_ = lean_st_ref_put(v_a_1054_, v___x_1134_);
v___x_1136_ = lean_box(0);
v___x_1137_ = lean_box(v___x_1082_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 1, v___x_1137_);
lean_ctor_set(v___x_1087_, 0, v___x_1083_);
v___x_1139_ = v___x_1087_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
lean_object* v___x_1141_; 
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 1, v___x_1139_);
lean_ctor_set(v___x_1078_, 0, v___x_1136_);
v___x_1141_ = v___x_1078_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v___x_1139_);
v___x_1141_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v_lookahead_1070_, v_lookaheads_1090_, v___x_1141_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
lean_dec(v_lookaheads_1090_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1220_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1145_ = v___x_1142_;
v_isShared_1146_ = v_isSharedCheck_1220_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1220_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v_fst_1147_; 
v_fst_1147_ = lean_ctor_get(v_a_1143_, 0);
if (lean_obj_tag(v_fst_1147_) == 0)
{
lean_object* v_snd_1148_; lean_object* v_snd_1149_; uint8_t v___x_1150_; 
v_snd_1148_ = lean_ctor_get(v_a_1143_, 1);
lean_inc(v_snd_1148_);
lean_dec(v_a_1143_);
v_snd_1149_ = lean_ctor_get(v_snd_1148_, 1);
v___x_1150_ = lean_unbox(v_snd_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
lean_dec(v_snd_1148_);
v___x_1151_ = lean_box(v___x_1082_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 0, v___x_1151_);
v___x_1153_ = v___x_1145_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
else
{
lean_object* v_fst_1155_; lean_object* v___x_1156_; lean_object* v_toGoalState_1157_; lean_object* v_split_1158_; lean_object* v_mvarId_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1214_; 
v_fst_1155_ = lean_ctor_get(v_snd_1148_, 0);
lean_inc(v_fst_1155_);
lean_dec(v_snd_1148_);
v___x_1156_ = lean_st_ref_take(v_a_1054_);
v_toGoalState_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc_ref(v_toGoalState_1157_);
v_split_1158_ = lean_ctor_get(v_toGoalState_1157_, 15);
lean_inc_ref(v_split_1158_);
v_mvarId_1159_ = lean_ctor_get(v___x_1156_, 1);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1214_ == 0)
{
lean_object* v_unused_1215_; 
v_unused_1215_ = lean_ctor_get(v___x_1156_, 0);
lean_dec(v_unused_1215_);
v___x_1161_ = v___x_1156_;
v_isShared_1162_ = v_isSharedCheck_1214_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_mvarId_1159_);
lean_dec(v___x_1156_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1214_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v_nextDeclIdx_1163_; lean_object* v_enodeMap_1164_; lean_object* v_exprs_1165_; lean_object* v_parents_1166_; lean_object* v_congrTable_1167_; lean_object* v_appMap_1168_; lean_object* v_indicesFound_1169_; lean_object* v_toProcess_1170_; lean_object* v_internalizing_1171_; uint8_t v_inconsistent_1172_; lean_object* v_nextIdx_1173_; lean_object* v_newRawFacts_1174_; lean_object* v_facts_1175_; lean_object* v_extThms_1176_; lean_object* v_ematch_1177_; lean_object* v_inj_1178_; lean_object* v_clean_1179_; lean_object* v_sstates_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1212_; 
v_nextDeclIdx_1163_ = lean_ctor_get(v_toGoalState_1157_, 0);
v_enodeMap_1164_ = lean_ctor_get(v_toGoalState_1157_, 1);
v_exprs_1165_ = lean_ctor_get(v_toGoalState_1157_, 2);
v_parents_1166_ = lean_ctor_get(v_toGoalState_1157_, 3);
v_congrTable_1167_ = lean_ctor_get(v_toGoalState_1157_, 4);
v_appMap_1168_ = lean_ctor_get(v_toGoalState_1157_, 5);
v_indicesFound_1169_ = lean_ctor_get(v_toGoalState_1157_, 6);
v_toProcess_1170_ = lean_ctor_get(v_toGoalState_1157_, 7);
v_internalizing_1171_ = lean_ctor_get(v_toGoalState_1157_, 8);
v_inconsistent_1172_ = lean_ctor_get_uint8(v_toGoalState_1157_, sizeof(void*)*18);
v_nextIdx_1173_ = lean_ctor_get(v_toGoalState_1157_, 9);
v_newRawFacts_1174_ = lean_ctor_get(v_toGoalState_1157_, 10);
v_facts_1175_ = lean_ctor_get(v_toGoalState_1157_, 11);
v_extThms_1176_ = lean_ctor_get(v_toGoalState_1157_, 12);
v_ematch_1177_ = lean_ctor_get(v_toGoalState_1157_, 13);
v_inj_1178_ = lean_ctor_get(v_toGoalState_1157_, 14);
v_clean_1179_ = lean_ctor_get(v_toGoalState_1157_, 16);
v_sstates_1180_ = lean_ctor_get(v_toGoalState_1157_, 17);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_toGoalState_1157_);
if (v_isSharedCheck_1212_ == 0)
{
lean_object* v_unused_1213_; 
v_unused_1213_ = lean_ctor_get(v_toGoalState_1157_, 15);
lean_dec(v_unused_1213_);
v___x_1182_ = v_toGoalState_1157_;
v_isShared_1183_ = v_isSharedCheck_1212_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_sstates_1180_);
lean_inc(v_clean_1179_);
lean_inc(v_inj_1178_);
lean_inc(v_ematch_1177_);
lean_inc(v_extThms_1176_);
lean_inc(v_facts_1175_);
lean_inc(v_newRawFacts_1174_);
lean_inc(v_nextIdx_1173_);
lean_inc(v_internalizing_1171_);
lean_inc(v_toProcess_1170_);
lean_inc(v_indicesFound_1169_);
lean_inc(v_appMap_1168_);
lean_inc(v_congrTable_1167_);
lean_inc(v_parents_1166_);
lean_inc(v_exprs_1165_);
lean_inc(v_enodeMap_1164_);
lean_inc(v_nextDeclIdx_1163_);
lean_dec(v_toGoalState_1157_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1212_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v_num_1184_; lean_object* v_candidates_1185_; lean_object* v_added_1186_; lean_object* v_resolved_1187_; lean_object* v_trace_1188_; lean_object* v_lookaheads_1189_; lean_object* v_argPosMap_1190_; lean_object* v_argsAt_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1211_; 
v_num_1184_ = lean_ctor_get(v_split_1158_, 0);
v_candidates_1185_ = lean_ctor_get(v_split_1158_, 1);
v_added_1186_ = lean_ctor_get(v_split_1158_, 2);
v_resolved_1187_ = lean_ctor_get(v_split_1158_, 3);
v_trace_1188_ = lean_ctor_get(v_split_1158_, 4);
v_lookaheads_1189_ = lean_ctor_get(v_split_1158_, 5);
v_argPosMap_1190_ = lean_ctor_get(v_split_1158_, 6);
v_argsAt_1191_ = lean_ctor_get(v_split_1158_, 7);
v_isSharedCheck_1211_ = !lean_is_exclusive(v_split_1158_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1193_ = v_split_1158_;
v_isShared_1194_ = v_isSharedCheck_1211_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_argsAt_1191_);
lean_inc(v_argPosMap_1190_);
lean_inc(v_lookaheads_1189_);
lean_inc(v_trace_1188_);
lean_inc(v_resolved_1187_);
lean_inc(v_added_1186_);
lean_inc(v_candidates_1185_);
lean_inc(v_num_1184_);
lean_dec(v_split_1158_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1211_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1195_ = l_List_reverse___redArg(v_fst_1155_);
v___x_1196_ = l_List_appendTR___redArg(v_lookaheads_1189_, v___x_1195_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 5, v___x_1196_);
v___x_1198_ = v___x_1193_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_num_1184_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v_candidates_1185_);
lean_ctor_set(v_reuseFailAlloc_1210_, 2, v_added_1186_);
lean_ctor_set(v_reuseFailAlloc_1210_, 3, v_resolved_1187_);
lean_ctor_set(v_reuseFailAlloc_1210_, 4, v_trace_1188_);
lean_ctor_set(v_reuseFailAlloc_1210_, 5, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1210_, 6, v_argPosMap_1190_);
lean_ctor_set(v_reuseFailAlloc_1210_, 7, v_argsAt_1191_);
v___x_1198_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1200_; 
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 15, v___x_1198_);
v___x_1200_ = v___x_1182_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 18, 1);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_nextDeclIdx_1163_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v_enodeMap_1164_);
lean_ctor_set(v_reuseFailAlloc_1209_, 2, v_exprs_1165_);
lean_ctor_set(v_reuseFailAlloc_1209_, 3, v_parents_1166_);
lean_ctor_set(v_reuseFailAlloc_1209_, 4, v_congrTable_1167_);
lean_ctor_set(v_reuseFailAlloc_1209_, 5, v_appMap_1168_);
lean_ctor_set(v_reuseFailAlloc_1209_, 6, v_indicesFound_1169_);
lean_ctor_set(v_reuseFailAlloc_1209_, 7, v_toProcess_1170_);
lean_ctor_set(v_reuseFailAlloc_1209_, 8, v_internalizing_1171_);
lean_ctor_set(v_reuseFailAlloc_1209_, 9, v_nextIdx_1173_);
lean_ctor_set(v_reuseFailAlloc_1209_, 10, v_newRawFacts_1174_);
lean_ctor_set(v_reuseFailAlloc_1209_, 11, v_facts_1175_);
lean_ctor_set(v_reuseFailAlloc_1209_, 12, v_extThms_1176_);
lean_ctor_set(v_reuseFailAlloc_1209_, 13, v_ematch_1177_);
lean_ctor_set(v_reuseFailAlloc_1209_, 14, v_inj_1178_);
lean_ctor_set(v_reuseFailAlloc_1209_, 15, v___x_1198_);
lean_ctor_set(v_reuseFailAlloc_1209_, 16, v_clean_1179_);
lean_ctor_set(v_reuseFailAlloc_1209_, 17, v_sstates_1180_);
lean_ctor_set_uint8(v_reuseFailAlloc_1209_, sizeof(void*)*18, v_inconsistent_1172_);
v___x_1200_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1202_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1200_);
v___x_1202_ = v___x_1161_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_mvarId_1159_);
v___x_1202_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1203_ = lean_st_ref_put(v_a_1054_, v___x_1202_);
v___x_1204_ = lean_box(v_lookahead_1070_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 0, v___x_1204_);
v___x_1206_ = v___x_1145_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_val_1216_; lean_object* v___x_1218_; 
lean_inc_ref(v_fst_1147_);
lean_dec(v_a_1143_);
v_val_1216_ = lean_ctor_get(v_fst_1147_, 0);
lean_inc(v_val_1216_);
lean_dec_ref_known(v_fst_1147_, 1);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 0, v_val_1216_);
v___x_1218_ = v___x_1145_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_val_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
else
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
v_a_1221_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1142_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1142_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1221_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
}
}
}
}
}
}
}
}
}
else
{
uint8_t v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1245_; 
lean_del_object(v___x_1078_);
v___x_1242_ = 0;
v___x_1243_ = lean_box(v___x_1242_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 0, v___x_1243_);
v___x_1245_ = v___x_1068_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
v_a_1250_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1065_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1065_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_lookahead___boxed(lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lean_Meta_Grind_lookahead(v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_);
lean_dec(v_a_1267_);
lean_dec_ref(v_a_1266_);
lean_dec(v_a_1265_);
lean_dec_ref(v_a_1264_);
lean_dec(v_a_1263_);
lean_dec_ref(v_a_1262_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
lean_dec(v_a_1259_);
lean_dec(v_a_1258_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(uint8_t v___x_1270_, lean_object* v_as_1271_, lean_object* v_as_x27_1272_, lean_object* v_b_1273_, lean_object* v_a_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v___x_1286_; 
v___x_1286_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___redArg(v___x_1270_, v_as_x27_1272_, v_b_1273_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0___boxed(lean_object* v___x_1287_, lean_object* v_as_1288_, lean_object* v_as_x27_1289_, lean_object* v_b_1290_, lean_object* v_a_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
uint8_t v___x_33796__boxed_1303_; lean_object* v_res_1304_; 
v___x_33796__boxed_1303_ = lean_unbox(v___x_1287_);
v_res_1304_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_lookahead_spec__0(v___x_33796__boxed_1303_, v_as_1288_, v_as_x27_1289_, v_b_1290_, v_a_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec(v___y_1292_);
lean_dec(v_as_x27_1289_);
lean_dec(v_as_1288_);
return v_res_1304_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_EMatchAction(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_EMatchAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations = _init_l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Lookahead_0__Lean_Meta_Grind_maxIterations);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_EMatchAction(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Lookahead(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_EMatchAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Lookahead(builtin);
}
#ifdef __cplusplus
}
#endif

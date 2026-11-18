// Lean compiler output
// Module: Lean.Meta.Tactic.Induction
// Imports: public import Lean.Meta.RecursorInfo public import Lean.Meta.SynthInstance public import Lean.Meta.Tactic.Revert public import Lean.Meta.Tactic.Intro public import Lean.Meta.Tactic.FVarSubst import Lean.Meta.WHNF import Init.Omega
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
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_normalizeLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_whnfUntil(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Expr_abstractM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Level_isZero(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_mkTacticExMsg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_tagWithErrorName(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_RecursorInfo_firstIndexPos(lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkRecursorInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "induction"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 130, 81, 169, 97, 77, 195, 126)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "failed to generate type class instance parameter"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ill-formed recursor"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1 = (const lean_object*)&l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedInductionSubgoal_default = (const lean_object*)&l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedInductionSubgoal = (const lean_object*)&l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instInhabitedAltVarNames_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_instInhabitedAltVarNames_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedAltVarNames_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedAltVarNames_default = (const lean_object*)&l_Lean_Meta_instInhabitedAltVarNames_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instInhabitedAltVarNames = (const lean_object*)&l_Lean_Meta_instInhabitedAltVarNames_default___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 58, 44, 222, 146, 107, 234, 180)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "finalize loop is done, "};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " subgoals"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "name of major premise: "};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.Tactic.Induction"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Meta.Tactic.Induction.0.Lean.Meta.finalize.loop"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "unexpected major premise type"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "' is an index in major premise, but it depends on index occurring at position #"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3;
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "' is an index in major premise, but it occurs in previous arguments"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5;
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "' is an index in major premise, but it occurs more than once"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "major premise type index "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " is not a variable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "major premise type is ill-formed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_getMajorTypeIndices___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getMajorTypeIndices___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorTypeIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorTypeIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__2_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__4_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "propRecLargeElim"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__5_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(43, 31, 155, 49, 49, 182, 172, 127)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__5_value),LEAN_SCALAR_PTR_LITERAL(247, 150, 90, 37, 93, 225, 222, 61)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recursor `"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__7 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__7_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "` can only eliminate into `Prop`"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__9 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__9_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "major premise is not of the form (C ...)"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__11 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__11_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__11_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__12 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__12_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorAppPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorAppPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_induction_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_induction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "after revert&intro\n"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recursor '"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "' does not support dependent elimination, but conclusion depends on major premise"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__4_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_induction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "initial\n"};
static const lean_object* l_Lean_MVarId_induction___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_induction___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_induction___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_induction___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_induction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Induction"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(200, 161, 153, 93, 172, 95, 141, 251)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(33, 195, 219, 148, 137, 228, 88, 235)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 113, 129, 206, 9, 87, 13, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 143, 189, 240, 107, 203, 213, 249)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(85, 74, 162, 121, 91, 90, 201, 140)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(232, 112, 100, 153, 45, 77, 246, 77)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(65, 136, 94, 243, 100, 124, 110, 115)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 114, 213, 115, 63, 176, 63, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__1_value),LEAN_SCALAR_PTR_LITERAL(136, 188, 18, 124, 108, 218, 130, 11)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 31, 91, 195, 199, 49, 171, 123)}};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 10:
{
lean_object* v_expr_2_; 
v_expr_2_ = lean_ctor_get(v_x_1_, 1);
lean_inc_ref(v_expr_2_);
lean_dec_ref_known(v_x_1_, 2);
v_x_1_ = v_expr_2_;
goto _start;
}
case 7:
{
lean_object* v_body_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v_body_4_ = lean_ctor_get(v_x_1_, 2);
lean_inc_ref(v_body_4_);
lean_dec_ref_known(v_x_1_, 3);
v___x_5_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(v_body_4_);
v___x_6_ = lean_unsigned_to_nat(1u);
v___x_7_ = lean_nat_add(v___x_5_, v___x_6_);
lean_dec(v___x_5_);
return v___x_7_;
}
default: 
{
uint8_t v___x_8_; uint8_t v___x_9_; 
v___x_8_ = 0;
v___x_9_ = l_Lean_Expr_isHeadBetaTarget(v_x_1_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; 
lean_dec_ref(v_x_1_);
v___x_10_ = lean_unsigned_to_nat(0u);
return v___x_10_;
}
else
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Expr_headBeta(v_x_1_);
v_x_1_ = v___x_11_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__3));
v___x_20_ = l_Lean_MessageData_ofFormat(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__4);
v___x_22_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__7));
v___x_27_ = l_Lean_MessageData_ofFormat(v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__8);
v___x_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(lean_object* v_mvarId_30_, lean_object* v_majorTypeArgs_31_, lean_object* v_x_32_, lean_object* v_x_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
lean_object* v___x_39_; 
lean_dec(v_mvarId_30_);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v_x_33_);
return v___x_39_;
}
else
{
lean_object* v_head_40_; lean_object* v_tail_41_; lean_object* v_a_43_; 
v_head_40_ = lean_ctor_get(v_x_32_, 0);
lean_inc(v_head_40_);
v_tail_41_ = lean_ctor_get(v_x_32_, 1);
lean_inc(v_tail_41_);
lean_dec_ref_known(v_x_32_, 2);
if (lean_obj_tag(v_head_40_) == 0)
{
lean_object* v___x_46_; 
lean_inc(v_a_37_);
lean_inc_ref(v_a_36_);
lean_inc(v_a_35_);
lean_inc_ref(v_a_34_);
lean_inc_ref(v_x_33_);
v___x_46_ = lean_infer_type(v_x_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
if (lean_obj_tag(v___x_46_) == 0)
{
lean_object* v_a_47_; lean_object* v___x_48_; 
v_a_47_ = lean_ctor_get(v___x_46_, 0);
lean_inc(v_a_47_);
lean_dec_ref_known(v___x_46_, 1);
v___x_48_ = l_Lean_Meta_whnfForall(v_a_47_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
if (lean_obj_tag(v___x_48_) == 0)
{
lean_object* v_a_49_; 
v_a_49_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_a_49_);
lean_dec_ref_known(v___x_48_, 1);
if (lean_obj_tag(v_a_49_) == 7)
{
lean_object* v_binderType_50_; lean_object* v___x_51_; 
v_binderType_50_ = lean_ctor_get(v_a_49_, 1);
lean_inc_ref(v_binderType_50_);
lean_dec_ref_known(v_a_49_, 3);
v___x_51_ = l_Lean_Meta_synthInstance(v_binderType_50_, v_head_40_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_a_52_; 
v_a_52_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_a_52_);
lean_dec_ref_known(v___x_51_, 1);
v_a_43_ = v_a_52_;
goto v___jp_42_;
}
else
{
lean_object* v_a_53_; uint8_t v___x_54_; 
v_a_53_ = lean_ctor_get(v___x_51_, 0);
v___x_54_ = l_Lean_Exception_isInterrupt(v_a_53_);
if (v___x_54_ == 0)
{
uint8_t v___x_55_; 
lean_inc(v_a_53_);
v___x_55_ = l_Lean_Exception_isRuntime(v_a_53_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
lean_dec_ref_known(v___x_51_, 1);
v___x_56_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__5);
lean_inc(v_mvarId_30_);
v___x_58_ = l_Lean_Meta_throwTacticEx___redArg(v___x_56_, v_mvarId_30_, v___x_57_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v_a_59_; 
v_a_59_ = lean_ctor_get(v___x_58_, 0);
lean_inc(v_a_59_);
lean_dec_ref_known(v___x_58_, 1);
v_a_43_ = v_a_59_;
goto v___jp_42_;
}
else
{
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
lean_dec(v_mvarId_30_);
return v___x_58_;
}
}
else
{
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
lean_dec(v_mvarId_30_);
return v___x_51_;
}
}
else
{
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
lean_dec(v_mvarId_30_);
return v___x_51_;
}
}
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
lean_dec(v_a_49_);
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
v___x_60_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_61_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
v___x_62_ = l_Lean_Meta_throwTacticEx___redArg(v___x_60_, v_mvarId_30_, v___x_61_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
return v___x_62_;
}
}
else
{
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
lean_dec(v_mvarId_30_);
return v___x_48_;
}
}
else
{
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
lean_dec(v_mvarId_30_);
return v___x_46_;
}
}
else
{
lean_object* v_val_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v_val_63_ = lean_ctor_get(v_head_40_, 0);
lean_inc(v_val_63_);
lean_dec_ref_known(v_head_40_, 1);
v___x_64_ = lean_array_get_size(v_majorTypeArgs_31_);
v___x_65_ = lean_nat_dec_lt(v_val_63_, v___x_64_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
lean_dec(v_val_63_);
lean_dec(v_tail_41_);
lean_dec_ref(v_x_33_);
v___x_66_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_67_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
v___x_68_ = l_Lean_Meta_throwTacticEx___redArg(v___x_66_, v_mvarId_30_, v___x_67_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
return v___x_68_;
}
else
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_array_fget_borrowed(v_majorTypeArgs_31_, v_val_63_);
lean_dec(v_val_63_);
lean_inc(v___x_69_);
v___x_70_ = l_Lean_Expr_app___override(v_x_33_, v___x_69_);
v_x_32_ = v_tail_41_;
v_x_33_ = v___x_70_;
goto _start;
}
}
v___jp_42_:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Expr_app___override(v_x_33_, v_a_43_);
v_x_32_ = v_tail_41_;
v_x_33_ = v___x_44_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___boxed(lean_object* v_mvarId_72_, lean_object* v_majorTypeArgs_73_, lean_object* v_x_74_, lean_object* v_x_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(v_mvarId_72_, v_majorTypeArgs_73_, v_x_74_, v_x_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
lean_dec(v_a_77_);
lean_dec_ref(v_a_76_);
lean_dec_ref(v_majorTypeArgs_73_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(lean_object* v_mvarId_90_, lean_object* v_type_91_, lean_object* v_x_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_Meta_whnfForall(v_type_91_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_111_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_111_ == 0)
{
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_111_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_a_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_111_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
if (lean_obj_tag(v_a_99_) == 7)
{
lean_object* v_body_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
lean_dec(v_mvarId_90_);
v_body_103_ = lean_ctor_get(v_a_99_, 2);
lean_inc_ref(v_body_103_);
lean_dec_ref_known(v_a_99_, 3);
v___x_104_ = lean_expr_instantiate1(v_body_103_, v_x_92_);
lean_dec_ref(v_body_103_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_104_);
v___x_106_ = v___x_101_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
lean_del_object(v___x_101_);
lean_dec(v_a_99_);
v___x_108_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_109_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
v___x_110_ = l_Lean_Meta_throwTacticEx___redArg(v___x_108_, v_mvarId_90_, v___x_109_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
return v___x_110_;
}
}
}
else
{
lean_dec(v_mvarId_90_);
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody___boxed(lean_object* v_mvarId_112_, lean_object* v_type_113_, lean_object* v_x_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_112_, v_type_113_, v_x_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
lean_dec(v_a_116_);
lean_dec_ref(v_a_115_);
lean_dec_ref(v_x_114_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4(lean_object* v_msg_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
lean_object* v___f_133_; lean_object* v___x_6945__overap_134_; lean_object* v___x_135_; 
v___f_133_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___closed__0));
v___x_6945__overap_134_ = lean_panic_fn_borrowed(v___f_133_, v_msg_127_);
lean_inc(v___y_131_);
lean_inc_ref(v___y_130_);
lean_inc(v___y_129_);
lean_inc_ref(v___y_128_);
v___x_135_ = lean_apply_5(v___x_6945__overap_134_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, lean_box(0));
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4___boxed(lean_object* v_msg_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4(v_msg_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(lean_object* v___x_143_, lean_object* v_reverted_144_, lean_object* v_fst_145_, lean_object* v_n_146_, lean_object* v_j_147_, lean_object* v_a_148_){
_start:
{
lean_object* v_zero_149_; uint8_t v_isZero_150_; 
v_zero_149_ = lean_unsigned_to_nat(0u);
v_isZero_150_ = lean_nat_dec_eq(v_j_147_, v_zero_149_);
if (v_isZero_150_ == 1)
{
lean_dec(v_j_147_);
return v_a_148_;
}
else
{
lean_object* v___x_151_; lean_object* v_n_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_151_ = lean_unsigned_to_nat(1u);
v_n_152_ = lean_nat_sub(v_j_147_, v___x_151_);
v___x_153_ = lean_nat_sub(v_n_146_, v_j_147_);
lean_dec(v_j_147_);
v___x_154_ = lean_nat_add(v___x_143_, v___x_151_);
v___x_155_ = lean_nat_dec_lt(v___x_153_, v___x_154_);
lean_dec(v___x_154_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_156_ = lean_box(0);
v___x_157_ = lean_array_fget_borrowed(v_reverted_144_, v___x_153_);
v___x_158_ = lean_nat_sub(v___x_153_, v___x_143_);
lean_dec(v___x_153_);
v___x_159_ = lean_nat_sub(v___x_158_, v___x_151_);
lean_dec(v___x_158_);
v___x_160_ = lean_array_get_borrowed(v___x_156_, v_fst_145_, v___x_159_);
lean_dec(v___x_159_);
lean_inc(v___x_160_);
v___x_161_ = l_Lean_mkFVar(v___x_160_);
lean_inc(v___x_157_);
v___x_162_ = l_Lean_Meta_FVarSubst_insert(v_a_148_, v___x_157_, v___x_161_);
v_j_147_ = v_n_152_;
v_a_148_ = v___x_162_;
goto _start;
}
else
{
lean_dec(v___x_153_);
v_j_147_ = v_n_152_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg___boxed(lean_object* v___x_165_, lean_object* v_reverted_166_, lean_object* v_fst_167_, lean_object* v_n_168_, lean_object* v_j_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(v___x_165_, v_reverted_166_, v_fst_167_, v_n_168_, v_j_169_, v_a_170_);
lean_dec(v_n_168_);
lean_dec_ref(v_fst_167_);
lean_dec_ref(v_reverted_166_);
lean_dec(v___x_165_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(lean_object* v_mvarId_172_, lean_object* v_as_173_, size_t v_i_174_, size_t v_stop_175_, lean_object* v_b_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
uint8_t v___x_182_; 
v___x_182_ = lean_usize_dec_eq(v_i_174_, v_stop_175_);
if (v___x_182_ == 0)
{
lean_object* v_fst_183_; lean_object* v_snd_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_206_; 
v_fst_183_ = lean_ctor_get(v_b_176_, 0);
v_snd_184_ = lean_ctor_get(v_b_176_, 1);
v_isSharedCheck_206_ = !lean_is_exclusive(v_b_176_);
if (v_isSharedCheck_206_ == 0)
{
v___x_186_ = v_b_176_;
v_isShared_187_ = v_isSharedCheck_206_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_snd_184_);
lean_inc(v_fst_183_);
lean_dec(v_b_176_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_206_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_188_ = lean_array_uget_borrowed(v_as_173_, v_i_174_);
lean_inc(v___x_188_);
v___x_189_ = l_Lean_Expr_app___override(v_fst_183_, v___x_188_);
lean_inc(v_mvarId_172_);
v___x_190_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_172_, v_snd_184_, v___x_188_, v___y_177_, v___y_178_, v___y_179_, v___y_180_);
if (lean_obj_tag(v___x_190_) == 0)
{
lean_object* v_a_191_; lean_object* v___x_193_; 
v_a_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_a_191_);
lean_dec_ref_known(v___x_190_, 1);
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 1, v_a_191_);
lean_ctor_set(v___x_186_, 0, v___x_189_);
v___x_193_ = v___x_186_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v_a_191_);
v___x_193_ = v_reuseFailAlloc_197_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
size_t v___x_194_; size_t v___x_195_; 
v___x_194_ = ((size_t)1ULL);
v___x_195_ = lean_usize_add(v_i_174_, v___x_194_);
v_i_174_ = v___x_195_;
v_b_176_ = v___x_193_;
goto _start;
}
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
lean_dec_ref(v___x_189_);
lean_del_object(v___x_186_);
lean_dec(v_mvarId_172_);
v_a_198_ = lean_ctor_get(v___x_190_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_190_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_190_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
else
{
lean_object* v___x_207_; 
lean_dec(v_mvarId_172_);
v___x_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_207_, 0, v_b_176_);
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5___boxed(lean_object* v_mvarId_208_, lean_object* v_as_209_, lean_object* v_i_210_, lean_object* v_stop_211_, lean_object* v_b_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
size_t v_i_boxed_218_; size_t v_stop_boxed_219_; lean_object* v_res_220_; 
v_i_boxed_218_ = lean_unbox_usize(v_i_210_);
lean_dec(v_i_210_);
v_stop_boxed_219_ = lean_unbox_usize(v_stop_211_);
lean_dec(v_stop_211_);
v_res_220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(v_mvarId_208_, v_as_209_, v_i_boxed_218_, v_stop_boxed_219_, v_b_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec_ref(v_as_209_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9___redArg(lean_object* v_x_221_, lean_object* v_x_222_, lean_object* v_x_223_, lean_object* v_x_224_){
_start:
{
lean_object* v_ks_225_; lean_object* v_vs_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_250_; 
v_ks_225_ = lean_ctor_get(v_x_221_, 0);
v_vs_226_ = lean_ctor_get(v_x_221_, 1);
v_isSharedCheck_250_ = !lean_is_exclusive(v_x_221_);
if (v_isSharedCheck_250_ == 0)
{
v___x_228_ = v_x_221_;
v_isShared_229_ = v_isSharedCheck_250_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_vs_226_);
lean_inc(v_ks_225_);
lean_dec(v_x_221_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_250_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = lean_array_get_size(v_ks_225_);
v___x_231_ = lean_nat_dec_lt(v_x_222_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
lean_dec(v_x_222_);
v___x_232_ = lean_array_push(v_ks_225_, v_x_223_);
v___x_233_ = lean_array_push(v_vs_226_, v_x_224_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 1, v___x_233_);
lean_ctor_set(v___x_228_, 0, v___x_232_);
v___x_235_ = v___x_228_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_236_, 1, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
else
{
lean_object* v_k_x27_237_; uint8_t v___x_238_; 
v_k_x27_237_ = lean_array_fget_borrowed(v_ks_225_, v_x_222_);
v___x_238_ = l_Lean_instBEqMVarId_beq(v_x_223_, v_k_x27_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_240_; 
if (v_isShared_229_ == 0)
{
v___x_240_ = v___x_228_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_ks_225_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_vs_226_);
v___x_240_ = v_reuseFailAlloc_244_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = lean_unsigned_to_nat(1u);
v___x_242_ = lean_nat_add(v_x_222_, v___x_241_);
lean_dec(v_x_222_);
v_x_221_ = v___x_240_;
v_x_222_ = v___x_242_;
goto _start;
}
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_245_ = lean_array_fset(v_ks_225_, v_x_222_, v_x_223_);
v___x_246_ = lean_array_fset(v_vs_226_, v_x_222_, v_x_224_);
lean_dec(v_x_222_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 1, v___x_246_);
lean_ctor_set(v___x_228_, 0, v___x_245_);
v___x_248_ = v___x_228_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v___x_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8___redArg(lean_object* v_n_251_, lean_object* v_k_252_, lean_object* v_v_253_){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9___redArg(v_n_251_, v___x_254_, v_k_252_, v_v_253_);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(lean_object* v_x_257_, size_t v_x_258_, size_t v_x_259_, lean_object* v_x_260_, lean_object* v_x_261_){
_start:
{
if (lean_obj_tag(v_x_257_) == 0)
{
lean_object* v_es_262_; size_t v___x_263_; size_t v___x_264_; lean_object* v_j_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v_es_262_ = lean_ctor_get(v_x_257_, 0);
v___x_263_ = ((size_t)31ULL);
v___x_264_ = lean_usize_land(v_x_258_, v___x_263_);
v_j_265_ = lean_usize_to_nat(v___x_264_);
v___x_266_ = lean_array_get_size(v_es_262_);
v___x_267_ = lean_nat_dec_lt(v_j_265_, v___x_266_);
if (v___x_267_ == 0)
{
lean_dec(v_j_265_);
lean_dec(v_x_261_);
lean_dec(v_x_260_);
return v_x_257_;
}
else
{
lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_306_; 
lean_inc_ref(v_es_262_);
v_isSharedCheck_306_ = !lean_is_exclusive(v_x_257_);
if (v_isSharedCheck_306_ == 0)
{
lean_object* v_unused_307_; 
v_unused_307_ = lean_ctor_get(v_x_257_, 0);
lean_dec(v_unused_307_);
v___x_269_ = v_x_257_;
v_isShared_270_ = v_isSharedCheck_306_;
goto v_resetjp_268_;
}
else
{
lean_dec(v_x_257_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_306_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v_v_271_; lean_object* v___x_272_; lean_object* v_xs_x27_273_; lean_object* v___y_275_; 
v_v_271_ = lean_array_fget(v_es_262_, v_j_265_);
v___x_272_ = lean_box(0);
v_xs_x27_273_ = lean_array_fset(v_es_262_, v_j_265_, v___x_272_);
switch(lean_obj_tag(v_v_271_))
{
case 0:
{
lean_object* v_key_280_; lean_object* v_val_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_291_; 
v_key_280_ = lean_ctor_get(v_v_271_, 0);
v_val_281_ = lean_ctor_get(v_v_271_, 1);
v_isSharedCheck_291_ = !lean_is_exclusive(v_v_271_);
if (v_isSharedCheck_291_ == 0)
{
v___x_283_ = v_v_271_;
v_isShared_284_ = v_isSharedCheck_291_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_val_281_);
lean_inc(v_key_280_);
lean_dec(v_v_271_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_291_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
uint8_t v___x_285_; 
v___x_285_ = l_Lean_instBEqMVarId_beq(v_x_260_, v_key_280_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; 
lean_del_object(v___x_283_);
v___x_286_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_280_, v_val_281_, v_x_260_, v_x_261_);
v___x_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
v___y_275_ = v___x_287_;
goto v___jp_274_;
}
else
{
lean_object* v___x_289_; 
lean_dec(v_val_281_);
lean_dec(v_key_280_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v_x_261_);
lean_ctor_set(v___x_283_, 0, v_x_260_);
v___x_289_ = v___x_283_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_x_260_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_x_261_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
v___y_275_ = v___x_289_;
goto v___jp_274_;
}
}
}
}
case 1:
{
lean_object* v_node_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_304_; 
v_node_292_ = lean_ctor_get(v_v_271_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_v_271_);
if (v_isSharedCheck_304_ == 0)
{
v___x_294_ = v_v_271_;
v_isShared_295_ = v_isSharedCheck_304_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_node_292_);
lean_dec(v_v_271_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_304_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
size_t v___x_296_; size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_296_ = ((size_t)5ULL);
v___x_297_ = lean_usize_shift_right(v_x_258_, v___x_296_);
v___x_298_ = ((size_t)1ULL);
v___x_299_ = lean_usize_add(v_x_259_, v___x_298_);
v___x_300_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_node_292_, v___x_297_, v___x_299_, v_x_260_, v_x_261_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_300_);
v___x_302_ = v___x_294_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
v___y_275_ = v___x_302_;
goto v___jp_274_;
}
}
}
default: 
{
lean_object* v___x_305_; 
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v_x_260_);
lean_ctor_set(v___x_305_, 1, v_x_261_);
v___y_275_ = v___x_305_;
goto v___jp_274_;
}
}
v___jp_274_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_array_fset(v_xs_x27_273_, v_j_265_, v___y_275_);
lean_dec(v_j_265_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 0, v___x_276_);
v___x_278_ = v___x_269_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
}
else
{
lean_object* v_ks_308_; lean_object* v_vs_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_327_; 
v_ks_308_ = lean_ctor_get(v_x_257_, 0);
v_vs_309_ = lean_ctor_get(v_x_257_, 1);
v_isSharedCheck_327_ = !lean_is_exclusive(v_x_257_);
if (v_isSharedCheck_327_ == 0)
{
v___x_311_ = v_x_257_;
v_isShared_312_ = v_isSharedCheck_327_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_vs_309_);
lean_inc(v_ks_308_);
lean_dec(v_x_257_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_327_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_ks_308_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v_vs_309_);
v___x_314_ = v_reuseFailAlloc_326_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v_newNode_315_; size_t v___x_316_; uint8_t v___x_317_; 
v_newNode_315_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8___redArg(v___x_314_, v_x_260_, v_x_261_);
v___x_316_ = ((size_t)7ULL);
v___x_317_ = lean_usize_dec_le(v___x_316_, v_x_259_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_318_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_315_);
v___x_319_ = lean_unsigned_to_nat(4u);
v___x_320_ = lean_nat_dec_lt(v___x_318_, v___x_319_);
lean_dec(v___x_318_);
if (v___x_320_ == 0)
{
lean_object* v_ks_321_; lean_object* v_vs_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v_ks_321_ = lean_ctor_get(v_newNode_315_, 0);
lean_inc_ref(v_ks_321_);
v_vs_322_ = lean_ctor_get(v_newNode_315_, 1);
lean_inc_ref(v_vs_322_);
lean_dec_ref(v_newNode_315_);
v___x_323_ = lean_unsigned_to_nat(0u);
v___x_324_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_325_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(v_x_259_, v_ks_321_, v_vs_322_, v___x_323_, v___x_324_);
lean_dec_ref(v_vs_322_);
lean_dec_ref(v_ks_321_);
return v___x_325_;
}
else
{
return v_newNode_315_;
}
}
else
{
return v_newNode_315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(size_t v_depth_328_, lean_object* v_keys_329_, lean_object* v_vals_330_, lean_object* v_i_331_, lean_object* v_entries_332_){
_start:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_array_get_size(v_keys_329_);
v___x_334_ = lean_nat_dec_lt(v_i_331_, v___x_333_);
if (v___x_334_ == 0)
{
lean_dec(v_i_331_);
return v_entries_332_;
}
else
{
lean_object* v_k_335_; lean_object* v_v_336_; uint64_t v___x_337_; size_t v_h_338_; size_t v___x_339_; lean_object* v___x_340_; size_t v___x_341_; size_t v___x_342_; size_t v___x_343_; size_t v_h_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_k_335_ = lean_array_fget_borrowed(v_keys_329_, v_i_331_);
v_v_336_ = lean_array_fget_borrowed(v_vals_330_, v_i_331_);
v___x_337_ = l_Lean_instHashableMVarId_hash(v_k_335_);
v_h_338_ = lean_uint64_to_usize(v___x_337_);
v___x_339_ = ((size_t)5ULL);
v___x_340_ = lean_unsigned_to_nat(1u);
v___x_341_ = ((size_t)1ULL);
v___x_342_ = lean_usize_sub(v_depth_328_, v___x_341_);
v___x_343_ = lean_usize_mul(v___x_339_, v___x_342_);
v_h_344_ = lean_usize_shift_right(v_h_338_, v___x_343_);
v___x_345_ = lean_nat_add(v_i_331_, v___x_340_);
lean_dec(v_i_331_);
lean_inc(v_v_336_);
lean_inc(v_k_335_);
v___x_346_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_entries_332_, v_h_344_, v_depth_328_, v_k_335_, v_v_336_);
v_i_331_ = v___x_345_;
v_entries_332_ = v___x_346_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg___boxed(lean_object* v_depth_348_, lean_object* v_keys_349_, lean_object* v_vals_350_, lean_object* v_i_351_, lean_object* v_entries_352_){
_start:
{
size_t v_depth_boxed_353_; lean_object* v_res_354_; 
v_depth_boxed_353_ = lean_unbox_usize(v_depth_348_);
lean_dec(v_depth_348_);
v_res_354_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(v_depth_boxed_353_, v_keys_349_, v_vals_350_, v_i_351_, v_entries_352_);
lean_dec_ref(v_vals_350_);
lean_dec_ref(v_keys_349_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_355_, lean_object* v_x_356_, lean_object* v_x_357_, lean_object* v_x_358_, lean_object* v_x_359_){
_start:
{
size_t v_x_8253__boxed_360_; size_t v_x_8254__boxed_361_; lean_object* v_res_362_; 
v_x_8253__boxed_360_ = lean_unbox_usize(v_x_356_);
lean_dec(v_x_356_);
v_x_8254__boxed_361_ = lean_unbox_usize(v_x_357_);
lean_dec(v_x_357_);
v_res_362_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_x_355_, v_x_8253__boxed_360_, v_x_8254__boxed_361_, v_x_358_, v_x_359_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0___redArg(lean_object* v_x_363_, lean_object* v_x_364_, lean_object* v_x_365_){
_start:
{
uint64_t v___x_366_; size_t v___x_367_; size_t v___x_368_; lean_object* v___x_369_; 
v___x_366_ = l_Lean_instHashableMVarId_hash(v_x_364_);
v___x_367_ = lean_uint64_to_usize(v___x_366_);
v___x_368_ = ((size_t)1ULL);
v___x_369_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_x_363_, v___x_367_, v___x_368_, v_x_364_, v_x_365_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(lean_object* v_mvarId_370_, lean_object* v_val_371_, lean_object* v___y_372_){
_start:
{
lean_object* v___x_374_; lean_object* v_mctx_375_; lean_object* v_cache_376_; lean_object* v_zetaDeltaFVarIds_377_; lean_object* v_postponed_378_; lean_object* v_diag_379_; lean_object* v_rewriteFires_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_410_; 
v___x_374_ = lean_st_ref_take(v___y_372_);
v_mctx_375_ = lean_ctor_get(v___x_374_, 0);
v_cache_376_ = lean_ctor_get(v___x_374_, 1);
v_zetaDeltaFVarIds_377_ = lean_ctor_get(v___x_374_, 2);
v_postponed_378_ = lean_ctor_get(v___x_374_, 3);
v_diag_379_ = lean_ctor_get(v___x_374_, 4);
v_rewriteFires_380_ = lean_ctor_get(v___x_374_, 5);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_410_ == 0)
{
v___x_382_ = v___x_374_;
v_isShared_383_ = v_isSharedCheck_410_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_rewriteFires_380_);
lean_inc(v_diag_379_);
lean_inc(v_postponed_378_);
lean_inc(v_zetaDeltaFVarIds_377_);
lean_inc(v_cache_376_);
lean_inc(v_mctx_375_);
lean_dec(v___x_374_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_410_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v_depth_384_; lean_object* v_levelAssignDepth_385_; lean_object* v_lmvarCounter_386_; lean_object* v_mvarCounter_387_; lean_object* v_lDecls_388_; lean_object* v_decls_389_; lean_object* v_userNames_390_; lean_object* v_lAssignment_391_; lean_object* v_eAssignment_392_; lean_object* v_dAssignment_393_; lean_object* v_instanceTypedMVars_394_; lean_object* v_synthNormMemo_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_409_; 
v_depth_384_ = lean_ctor_get(v_mctx_375_, 0);
v_levelAssignDepth_385_ = lean_ctor_get(v_mctx_375_, 1);
v_lmvarCounter_386_ = lean_ctor_get(v_mctx_375_, 2);
v_mvarCounter_387_ = lean_ctor_get(v_mctx_375_, 3);
v_lDecls_388_ = lean_ctor_get(v_mctx_375_, 4);
v_decls_389_ = lean_ctor_get(v_mctx_375_, 5);
v_userNames_390_ = lean_ctor_get(v_mctx_375_, 6);
v_lAssignment_391_ = lean_ctor_get(v_mctx_375_, 7);
v_eAssignment_392_ = lean_ctor_get(v_mctx_375_, 8);
v_dAssignment_393_ = lean_ctor_get(v_mctx_375_, 9);
v_instanceTypedMVars_394_ = lean_ctor_get(v_mctx_375_, 10);
v_synthNormMemo_395_ = lean_ctor_get(v_mctx_375_, 11);
v_isSharedCheck_409_ = !lean_is_exclusive(v_mctx_375_);
if (v_isSharedCheck_409_ == 0)
{
v___x_397_ = v_mctx_375_;
v_isShared_398_ = v_isSharedCheck_409_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_synthNormMemo_395_);
lean_inc(v_instanceTypedMVars_394_);
lean_inc(v_dAssignment_393_);
lean_inc(v_eAssignment_392_);
lean_inc(v_lAssignment_391_);
lean_inc(v_userNames_390_);
lean_inc(v_decls_389_);
lean_inc(v_lDecls_388_);
lean_inc(v_mvarCounter_387_);
lean_inc(v_lmvarCounter_386_);
lean_inc(v_levelAssignDepth_385_);
lean_inc(v_depth_384_);
lean_dec(v_mctx_375_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_409_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_399_ = lean_box(0);
v___x_400_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0___redArg(v_eAssignment_392_, v_mvarId_370_, v_val_371_);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 8, v___x_400_);
v___x_402_ = v___x_397_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_depth_384_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_levelAssignDepth_385_);
lean_ctor_set(v_reuseFailAlloc_408_, 2, v_lmvarCounter_386_);
lean_ctor_set(v_reuseFailAlloc_408_, 3, v_mvarCounter_387_);
lean_ctor_set(v_reuseFailAlloc_408_, 4, v_lDecls_388_);
lean_ctor_set(v_reuseFailAlloc_408_, 5, v_decls_389_);
lean_ctor_set(v_reuseFailAlloc_408_, 6, v_userNames_390_);
lean_ctor_set(v_reuseFailAlloc_408_, 7, v_lAssignment_391_);
lean_ctor_set(v_reuseFailAlloc_408_, 8, v___x_400_);
lean_ctor_set(v_reuseFailAlloc_408_, 9, v_dAssignment_393_);
lean_ctor_set(v_reuseFailAlloc_408_, 10, v_instanceTypedMVars_394_);
lean_ctor_set(v_reuseFailAlloc_408_, 11, v_synthNormMemo_395_);
v___x_402_ = v_reuseFailAlloc_408_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_404_; 
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v___x_402_);
v___x_404_ = v___x_382_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_cache_376_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v_zetaDeltaFVarIds_377_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v_postponed_378_);
lean_ctor_set(v_reuseFailAlloc_407_, 4, v_diag_379_);
lean_ctor_set(v_reuseFailAlloc_407_, 5, v_rewriteFires_380_);
v___x_404_ = v_reuseFailAlloc_407_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_st_ref_put(v___y_372_, v___x_404_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_399_);
return v___x_406_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg___boxed(lean_object* v_mvarId_411_, lean_object* v_val_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(v_mvarId_411_, v_val_412_, v___y_413_);
lean_dec(v___y_413_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(size_t v_sz_416_, size_t v_i_417_, lean_object* v_bs_418_){
_start:
{
uint8_t v___x_419_; 
v___x_419_ = lean_usize_dec_lt(v_i_417_, v_sz_416_);
if (v___x_419_ == 0)
{
return v_bs_418_;
}
else
{
lean_object* v_v_420_; lean_object* v___x_421_; lean_object* v_bs_x27_422_; lean_object* v___x_423_; size_t v___x_424_; size_t v___x_425_; lean_object* v___x_426_; 
v_v_420_ = lean_array_uget(v_bs_418_, v_i_417_);
v___x_421_ = lean_unsigned_to_nat(0u);
v_bs_x27_422_ = lean_array_uset(v_bs_418_, v_i_417_, v___x_421_);
v___x_423_ = l_Lean_mkFVar(v_v_420_);
v___x_424_ = ((size_t)1ULL);
v___x_425_ = lean_usize_add(v_i_417_, v___x_424_);
v___x_426_ = lean_array_uset(v_bs_x27_422_, v_i_417_, v___x_423_);
v_i_417_ = v___x_425_;
v_bs_418_ = v___x_426_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3___boxed(lean_object* v_sz_428_, lean_object* v_i_429_, lean_object* v_bs_430_){
_start:
{
size_t v_sz_boxed_431_; size_t v_i_boxed_432_; lean_object* v_res_433_; 
v_sz_boxed_431_ = lean_unbox_usize(v_sz_428_);
lean_dec(v_sz_428_);
v_i_boxed_432_ = lean_unbox_usize(v_i_429_);
lean_dec(v_i_429_);
v_res_433_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(v_sz_boxed_431_, v_i_boxed_432_, v_bs_430_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(lean_object* v_msgData_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v___x_440_; lean_object* v_env_441_; uint8_t v___x_442_; lean_object* v_env_443_; lean_object* v___x_444_; lean_object* v_toCold_445_; lean_object* v_mctx_446_; lean_object* v_lctx_447_; lean_object* v_options_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_440_ = lean_st_ref_get(v___y_438_);
v_env_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc_ref(v_env_441_);
lean_dec(v___x_440_);
v___x_442_ = 0;
v_env_443_ = l_Lean_Environment_setRecordingDeps(v_env_441_, v___x_442_);
v___x_444_ = lean_st_ref_get(v___y_436_);
v_toCold_445_ = lean_ctor_get(v___y_437_, 0);
v_mctx_446_ = lean_ctor_get(v___x_444_, 0);
lean_inc_ref(v_mctx_446_);
lean_dec(v___x_444_);
v_lctx_447_ = lean_ctor_get(v___y_435_, 2);
v_options_448_ = lean_ctor_get(v_toCold_445_, 2);
lean_inc_ref(v_options_448_);
lean_inc_ref(v_lctx_447_);
v___x_449_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_449_, 0, v_env_443_);
lean_ctor_set(v___x_449_, 1, v_mctx_446_);
lean_ctor_set(v___x_449_, 2, v_lctx_447_);
lean_ctor_set(v___x_449_, 3, v_options_448_);
v___x_450_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v_msgData_434_);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2___boxed(lean_object* v_msgData_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(v_msgData_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
return v_res_458_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0(void){
_start:
{
lean_object* v___x_459_; double v___x_460_; 
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_float_of_nat(v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(lean_object* v_cls_464_, lean_object* v_msg_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_ref_471_; lean_object* v___x_472_; lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_518_; 
v_ref_471_ = lean_ctor_get(v___y_468_, 2);
v___x_472_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(v_msg_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_518_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_518_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_518_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v_traceState_478_; lean_object* v_env_479_; lean_object* v_nextMacroScope_480_; lean_object* v_ngen_481_; lean_object* v_auxDeclNGen_482_; lean_object* v_cache_483_; lean_object* v_recordedDeps_484_; lean_object* v_messages_485_; lean_object* v_infoState_486_; lean_object* v_snapshotTasks_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_517_; 
v___x_477_ = lean_st_ref_take(v___y_469_);
v_traceState_478_ = lean_ctor_get(v___x_477_, 4);
v_env_479_ = lean_ctor_get(v___x_477_, 0);
v_nextMacroScope_480_ = lean_ctor_get(v___x_477_, 1);
v_ngen_481_ = lean_ctor_get(v___x_477_, 2);
v_auxDeclNGen_482_ = lean_ctor_get(v___x_477_, 3);
v_cache_483_ = lean_ctor_get(v___x_477_, 5);
v_recordedDeps_484_ = lean_ctor_get(v___x_477_, 6);
v_messages_485_ = lean_ctor_get(v___x_477_, 7);
v_infoState_486_ = lean_ctor_get(v___x_477_, 8);
v_snapshotTasks_487_ = lean_ctor_get(v___x_477_, 9);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_517_ == 0)
{
v___x_489_ = v___x_477_;
v_isShared_490_ = v_isSharedCheck_517_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_snapshotTasks_487_);
lean_inc(v_infoState_486_);
lean_inc(v_messages_485_);
lean_inc(v_recordedDeps_484_);
lean_inc(v_cache_483_);
lean_inc(v_traceState_478_);
lean_inc(v_auxDeclNGen_482_);
lean_inc(v_ngen_481_);
lean_inc(v_nextMacroScope_480_);
lean_inc(v_env_479_);
lean_dec(v___x_477_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_517_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
uint64_t v_tid_491_; lean_object* v_traces_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_516_; 
v_tid_491_ = lean_ctor_get_uint64(v_traceState_478_, sizeof(void*)*1);
v_traces_492_ = lean_ctor_get(v_traceState_478_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v_traceState_478_);
if (v_isSharedCheck_516_ == 0)
{
v___x_494_ = v_traceState_478_;
v_isShared_495_ = v_isSharedCheck_516_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_traces_492_);
lean_dec(v_traceState_478_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_516_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_497_; double v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_507_; 
v___x_496_ = lean_box(0);
v___x_497_ = lean_box(0);
v___x_498_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__0);
v___x_499_ = 0;
v___x_500_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__1));
v___x_501_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_501_, 0, v_cls_464_);
lean_ctor_set(v___x_501_, 1, v___x_497_);
lean_ctor_set(v___x_501_, 2, v___x_500_);
lean_ctor_set_float(v___x_501_, sizeof(void*)*3, v___x_498_);
lean_ctor_set_float(v___x_501_, sizeof(void*)*3 + 8, v___x_498_);
lean_ctor_set_uint8(v___x_501_, sizeof(void*)*3 + 16, v___x_499_);
v___x_502_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___closed__2));
v___x_503_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set(v___x_503_, 1, v_a_473_);
lean_ctor_set(v___x_503_, 2, v___x_502_);
lean_inc(v_ref_471_);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v_ref_471_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
v___x_505_ = l_Lean_PersistentArray_push___redArg(v_traces_492_, v___x_504_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_505_);
v___x_507_ = v___x_494_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v___x_505_);
lean_ctor_set_uint64(v_reuseFailAlloc_515_, sizeof(void*)*1, v_tid_491_);
v___x_507_ = v_reuseFailAlloc_515_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v___x_509_; 
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 4, v___x_507_);
v___x_509_ = v___x_489_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_env_479_);
lean_ctor_set(v_reuseFailAlloc_514_, 1, v_nextMacroScope_480_);
lean_ctor_set(v_reuseFailAlloc_514_, 2, v_ngen_481_);
lean_ctor_set(v_reuseFailAlloc_514_, 3, v_auxDeclNGen_482_);
lean_ctor_set(v_reuseFailAlloc_514_, 4, v___x_507_);
lean_ctor_set(v_reuseFailAlloc_514_, 5, v_cache_483_);
lean_ctor_set(v_reuseFailAlloc_514_, 6, v_recordedDeps_484_);
lean_ctor_set(v_reuseFailAlloc_514_, 7, v_messages_485_);
lean_ctor_set(v_reuseFailAlloc_514_, 8, v_infoState_486_);
lean_ctor_set(v_reuseFailAlloc_514_, 9, v_snapshotTasks_487_);
v___x_509_ = v_reuseFailAlloc_514_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
lean_object* v___x_510_; lean_object* v___x_512_; 
v___x_510_ = lean_st_ref_put(v___y_469_, v___x_509_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_496_);
v___x_512_ = v___x_475_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_496_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1___boxed(lean_object* v_cls_519_, lean_object* v_msg_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v_cls_519_, v_msg_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
return v_res_526_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_536_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
v___x_537_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4));
v___x_538_ = l_Lean_Name_append(v___x_537_, v___x_536_);
return v___x_538_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__6));
v___x_541_ = l_Lean_stringToMessageData(v___x_540_);
return v___x_541_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__8));
v___x_544_ = l_Lean_stringToMessageData(v___x_543_);
return v___x_544_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__10));
v___x_547_ = l_Lean_stringToMessageData(v___x_546_);
return v___x_547_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_551_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__14));
v___x_552_ = lean_unsigned_to_nat(15u);
v___x_553_ = lean_unsigned_to_nat(120u);
v___x_554_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__13));
v___x_555_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__12));
v___x_556_ = l_mkPanicMessageWithDecl(v___x_555_, v___x_554_, v___x_553_, v___x_552_, v___x_551_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop(lean_object* v_mvarId_557_, lean_object* v_givenNames_558_, lean_object* v_recursorInfo_559_, lean_object* v_reverted_560_, lean_object* v_major_561_, lean_object* v_indices_562_, lean_object* v_baseSubst_563_, lean_object* v_initialArity_564_, lean_object* v_numMinors_565_, lean_object* v_pos_566_, lean_object* v_minorIdx_567_, lean_object* v_recursor_568_, lean_object* v_recursorType_569_, uint8_t v_consumedMajor_570_, lean_object* v_subgoals_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___x_634_; 
v___x_634_ = l_Lean_Meta_whnfForall(v_recursorType_569_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; uint8_t v___x_648_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
lean_inc(v_a_635_);
lean_dec_ref_known(v___x_634_, 1);
v___x_648_ = l_Lean_Expr_isForall(v_a_635_);
if (v___x_648_ == 0)
{
lean_dec(v_a_635_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
goto v___jp_636_;
}
else
{
lean_object* v_numArgs_649_; uint8_t v___x_650_; uint8_t v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; uint8_t v___y_666_; lean_object* v___y_702_; lean_object* v___y_703_; uint8_t v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_733_; uint8_t v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_789_; lean_object* v___y_790_; uint8_t v___y_791_; lean_object* v___y_792_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; uint8_t v___y_816_; uint8_t v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; 
v_numArgs_649_ = lean_ctor_get(v_recursorInfo_559_, 3);
v___x_650_ = lean_nat_dec_lt(v_pos_566_, v_numArgs_649_);
if (v___x_650_ == 0)
{
lean_dec(v_a_635_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
goto v___jp_636_;
}
else
{
lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_898_ = l_Lean_Meta_RecursorInfo_firstIndexPos(v_recursorInfo_559_);
v___x_899_ = lean_nat_dec_eq(v_pos_566_, v___x_898_);
lean_dec(v___x_898_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; 
lean_inc(v_mvarId_557_);
v___x_900_ = l_Lean_MVarId_getTag(v_mvarId_557_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; uint8_t v___x_917_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_900_, 1);
v___x_917_ = lean_nat_dec_le(v_numMinors_565_, v_minorIdx_567_);
if (v___x_917_ == 0)
{
v___y_903_ = v_a_572_;
v___y_904_ = v_a_573_;
v___y_905_ = v_a_574_;
v___y_906_ = v_a_575_;
goto v___jp_902_;
}
else
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_919_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
lean_inc(v_mvarId_557_);
v___x_920_ = l_Lean_Meta_throwTacticEx___redArg(v___x_918_, v_mvarId_557_, v___x_919_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_dec_ref_known(v___x_920_, 1);
v___y_903_ = v_a_572_;
v___y_904_ = v_a_573_;
v___y_905_ = v_a_574_;
v___y_906_ = v_a_575_;
goto v___jp_902_;
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
lean_dec(v_a_901_);
lean_dec(v_a_635_);
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_921_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_920_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_920_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
v___jp_902_:
{
if (lean_obj_tag(v_a_635_) == 7)
{
lean_object* v_binderName_907_; lean_object* v_binderType_908_; uint8_t v_binderInfo_909_; lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v_binderName_907_ = lean_ctor_get(v_a_635_, 0);
v_binderType_908_ = lean_ctor_get(v_a_635_, 1);
v_binderInfo_909_ = lean_ctor_get_uint8(v_a_635_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_908_);
v___x_910_ = l_Lean_Expr_headBeta(v_binderType_908_);
v___x_911_ = lean_unsigned_to_nat(1u);
v___x_912_ = lean_nat_dec_eq(v_numMinors_565_, v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_913_ = l_Lean_Name_eraseMacroScopes(v_binderName_907_);
v___x_914_ = l_Lean_Name_append(v_a_901_, v___x_913_);
v___y_831_ = v_binderInfo_909_;
v___y_832_ = v___y_903_;
v___y_833_ = v___y_905_;
v___y_834_ = v___x_910_;
v___y_835_ = v___x_911_;
v___y_836_ = v___y_904_;
v___y_837_ = v___y_906_;
v___y_838_ = v___x_914_;
goto v___jp_830_;
}
else
{
v___y_831_ = v_binderInfo_909_;
v___y_832_ = v___y_903_;
v___y_833_ = v___y_905_;
v___y_834_ = v___x_910_;
v___y_835_ = v___x_911_;
v___y_836_ = v___y_904_;
v___y_837_ = v___y_906_;
v___y_838_ = v_a_901_;
goto v___jp_830_;
}
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; 
lean_dec(v_a_901_);
lean_dec(v_a_635_);
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v___x_915_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__15);
v___x_916_ = l_panic___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__4(v___x_915_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
return v___x_916_;
}
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec(v_a_635_);
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_929_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_900_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_900_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v_fst_940_; lean_object* v_snd_941_; uint8_t v___x_957_; 
v___x_937_ = lean_unsigned_to_nat(0u);
v___x_938_ = lean_array_get_size(v_indices_562_);
v___x_957_ = lean_nat_dec_lt(v___x_937_, v___x_938_);
if (v___x_957_ == 0)
{
v_fst_940_ = v_recursor_568_;
v_snd_941_ = v_a_635_;
goto v___jp_939_;
}
else
{
lean_object* v___x_958_; size_t v___x_959_; size_t v___x_960_; lean_object* v___x_961_; 
v___x_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_958_, 0, v_recursor_568_);
lean_ctor_set(v___x_958_, 1, v_a_635_);
v___x_959_ = ((size_t)0ULL);
v___x_960_ = lean_usize_of_nat(v___x_938_);
lean_inc(v_mvarId_557_);
v___x_961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__5(v_mvarId_557_, v_indices_562_, v___x_959_, v___x_960_, v___x_958_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; lean_object* v_fst_963_; lean_object* v_snd_964_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_961_, 1);
v_fst_963_ = lean_ctor_get(v_a_962_, 0);
lean_inc(v_fst_963_);
v_snd_964_ = lean_ctor_get(v_a_962_, 1);
lean_inc(v_snd_964_);
lean_dec(v_a_962_);
v_fst_940_ = v_fst_963_;
v_snd_941_ = v_snd_964_;
goto v___jp_939_;
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_965_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_961_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_961_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
v___jp_939_:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
lean_inc_ref(v_major_561_);
v___x_942_ = l_Lean_Expr_app___override(v_fst_940_, v_major_561_);
lean_inc(v_mvarId_557_);
v___x_943_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_557_, v_snd_941_, v_major_561_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___x_943_, 1);
v___x_945_ = lean_unsigned_to_nat(1u);
v___x_946_ = lean_nat_add(v_pos_566_, v___x_945_);
lean_dec(v_pos_566_);
v___x_947_ = lean_nat_add(v___x_946_, v___x_938_);
lean_dec(v___x_946_);
v_pos_566_ = v___x_947_;
v_recursor_568_ = v___x_942_;
v_recursorType_569_ = v_a_944_;
v_consumedMajor_570_ = v___x_648_;
goto _start;
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec_ref(v___x_942_);
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_949_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_943_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_943_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
}
v___jp_651_:
{
lean_object* v___x_667_; 
v___x_667_ = l_Lean_Meta_introNCore(v___y_665_, v___y_660_, v___y_654_, v___y_666_, v___y_652_, v___y_658_, v___y_661_, v___y_657_, v___y_659_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v_a_668_; lean_object* v_fst_669_; lean_object* v_snd_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v_a_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_a_668_);
lean_dec_ref_known(v___x_667_, 1);
v_fst_669_ = lean_ctor_get(v_a_668_, 0);
lean_inc(v_fst_669_);
v_snd_670_ = lean_ctor_get(v_a_668_, 1);
lean_inc(v_snd_670_);
lean_dec(v_a_668_);
v___x_671_ = lean_box(0);
v___x_672_ = l_Lean_Meta_introNCore(v_snd_670_, v___y_656_, v___x_671_, v___y_652_, v___x_650_, v___y_658_, v___y_661_, v___y_657_, v___y_659_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v_fst_674_; lean_object* v_snd_675_; lean_object* v___x_676_; size_t v_sz_677_; size_t v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 1);
v_fst_674_ = lean_ctor_get(v_a_673_, 0);
lean_inc(v_fst_674_);
v_snd_675_ = lean_ctor_get(v_a_673_, 1);
lean_inc(v_snd_675_);
lean_dec(v_a_673_);
lean_inc(v_baseSubst_563_);
lean_inc(v___y_662_);
v___x_676_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(v___y_655_, v_reverted_560_, v_fst_674_, v___y_662_, v___y_662_, v_baseSubst_563_);
lean_dec(v___y_662_);
lean_dec(v_fst_674_);
lean_dec(v___y_655_);
v_sz_677_ = lean_array_size(v_fst_669_);
v___x_678_ = ((size_t)0ULL);
v___x_679_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(v_sz_677_, v___x_678_, v_fst_669_);
v___x_680_ = lean_nat_add(v_pos_566_, v___y_653_);
lean_dec(v_pos_566_);
v___x_681_ = lean_nat_add(v_minorIdx_567_, v___y_653_);
lean_dec(v_minorIdx_567_);
v___x_682_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_682_, 0, v_snd_675_);
lean_ctor_set(v___x_682_, 1, v___x_679_);
lean_ctor_set(v___x_682_, 2, v___x_676_);
v___x_683_ = lean_array_push(v_subgoals_571_, v___x_682_);
v_pos_566_ = v___x_680_;
v_minorIdx_567_ = v___x_681_;
v_recursor_568_ = v___y_663_;
v_recursorType_569_ = v___y_664_;
v_subgoals_571_ = v___x_683_;
v_a_572_ = v___y_658_;
v_a_573_ = v___y_661_;
v_a_574_ = v___y_657_;
v_a_575_ = v___y_659_;
goto _start;
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_dec(v_fst_669_);
lean_dec_ref(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec(v___y_655_);
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_685_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_672_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_672_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_dec_ref(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_693_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_667_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_667_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
v___jp_701_:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_716_ = l_Lean_Expr_mvarId_x21(v___y_702_);
lean_dec_ref(v___y_702_);
v___x_717_ = l_Lean_Expr_fvarId_x21(v_major_561_);
v___x_718_ = l_Lean_MVarId_tryClear(v___x_716_, v___x_717_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
if (lean_obj_tag(v___x_718_) == 0)
{
uint8_t v_explicit_719_; 
v_explicit_719_ = lean_ctor_get_uint8(v___y_711_, sizeof(void*)*1);
if (v_explicit_719_ == 0)
{
lean_object* v_a_720_; lean_object* v_varNames_721_; 
v_a_720_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_718_, 1);
v_varNames_721_ = lean_ctor_get(v___y_711_, 0);
lean_inc(v_varNames_721_);
lean_dec_ref(v___y_711_);
v___y_652_ = v___y_704_;
v___y_653_ = v___y_705_;
v___y_654_ = v_varNames_721_;
v___y_655_ = v___y_707_;
v___y_656_ = v___y_710_;
v___y_657_ = v___y_714_;
v___y_658_ = v___y_712_;
v___y_659_ = v___y_715_;
v___y_660_ = v___y_703_;
v___y_661_ = v___y_713_;
v___y_662_ = v___y_706_;
v___y_663_ = v___y_708_;
v___y_664_ = v___y_709_;
v___y_665_ = v_a_720_;
v___y_666_ = v___x_650_;
goto v___jp_651_;
}
else
{
lean_object* v_a_722_; lean_object* v_varNames_723_; 
v_a_722_ = lean_ctor_get(v___x_718_, 0);
lean_inc(v_a_722_);
lean_dec_ref_known(v___x_718_, 1);
v_varNames_723_ = lean_ctor_get(v___y_711_, 0);
lean_inc(v_varNames_723_);
lean_dec_ref(v___y_711_);
v___y_652_ = v___y_704_;
v___y_653_ = v___y_705_;
v___y_654_ = v_varNames_723_;
v___y_655_ = v___y_707_;
v___y_656_ = v___y_710_;
v___y_657_ = v___y_714_;
v___y_658_ = v___y_712_;
v___y_659_ = v___y_715_;
v___y_660_ = v___y_703_;
v___y_661_ = v___y_713_;
v___y_662_ = v___y_706_;
v___y_663_ = v___y_708_;
v___y_664_ = v___y_709_;
v___y_665_ = v_a_722_;
v___y_666_ = v___y_704_;
goto v___jp_651_;
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_dec_ref(v___y_711_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec(v___y_706_);
lean_dec(v___y_703_);
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_724_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_718_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_718_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
v___jp_732_:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_736_, v___y_733_, v___y_740_, v___y_744_, v___y_741_, v___y_735_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc_n(v_a_747_, 2);
lean_dec_ref_known(v___x_746_, 1);
v___x_748_ = l_Lean_Expr_app___override(v_recursor_568_, v_a_747_);
lean_inc(v_mvarId_557_);
v___x_749_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_557_, v_a_635_, v_a_747_, v___y_740_, v___y_744_, v___y_741_, v___y_735_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_toCold_750_; lean_object* v_options_751_; uint8_t v_hasTrace_752_; 
v_toCold_750_ = lean_ctor_get(v___y_741_, 0);
v_options_751_ = lean_ctor_get(v_toCold_750_, 2);
v_hasTrace_752_ = lean_ctor_get_uint8(v_options_751_, sizeof(void*)*1);
if (v_hasTrace_752_ == 0)
{
lean_object* v_a_753_; 
v_a_753_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_a_753_);
lean_dec_ref_known(v___x_749_, 1);
v___y_702_ = v_a_747_;
v___y_703_ = v___y_742_;
v___y_704_ = v___y_734_;
v___y_705_ = v___y_737_;
v___y_706_ = v___y_743_;
v___y_707_ = v___y_738_;
v___y_708_ = v___x_748_;
v___y_709_ = v_a_753_;
v___y_710_ = v___y_739_;
v___y_711_ = v___y_745_;
v___y_712_ = v___y_740_;
v___y_713_ = v___y_744_;
v___y_714_ = v___y_741_;
v___y_715_ = v___y_735_;
goto v___jp_701_;
}
else
{
lean_object* v_a_754_; lean_object* v_inheritedTraceOptions_755_; lean_object* v___x_756_; lean_object* v___x_757_; uint8_t v___x_758_; 
v_a_754_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_749_, 1);
v_inheritedTraceOptions_755_ = lean_ctor_get(v_toCold_750_, 11);
v___x_756_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
v___x_757_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5);
v___x_758_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_755_, v_options_751_, v___x_757_);
if (v___x_758_ == 0)
{
v___y_702_ = v_a_747_;
v___y_703_ = v___y_742_;
v___y_704_ = v___y_734_;
v___y_705_ = v___y_737_;
v___y_706_ = v___y_743_;
v___y_707_ = v___y_738_;
v___y_708_ = v___x_748_;
v___y_709_ = v_a_754_;
v___y_710_ = v___y_739_;
v___y_711_ = v___y_745_;
v___y_712_ = v___y_740_;
v___y_713_ = v___y_744_;
v___y_714_ = v___y_741_;
v___y_715_ = v___y_735_;
goto v___jp_701_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_759_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__11);
v___x_760_ = l_Lean_Expr_fvarId_x21(v_major_561_);
v___x_761_ = l_Lean_MessageData_ofName(v___x_760_);
v___x_762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_759_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v___x_756_, v___x_762_, v___y_740_, v___y_744_, v___y_741_, v___y_735_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_dec_ref_known(v___x_763_, 1);
v___y_702_ = v_a_747_;
v___y_703_ = v___y_742_;
v___y_704_ = v___y_734_;
v___y_705_ = v___y_737_;
v___y_706_ = v___y_743_;
v___y_707_ = v___y_738_;
v___y_708_ = v___x_748_;
v___y_709_ = v_a_754_;
v___y_710_ = v___y_739_;
v___y_711_ = v___y_745_;
v___y_712_ = v___y_740_;
v___y_713_ = v___y_744_;
v___y_714_ = v___y_741_;
v___y_715_ = v___y_735_;
goto v___jp_701_;
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec(v_a_754_);
lean_dec_ref(v___x_748_);
lean_dec(v_a_747_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_743_);
lean_dec(v___y_742_);
lean_dec(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
}
else
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
lean_dec_ref(v___x_748_);
lean_dec(v_a_747_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_743_);
lean_dec(v___y_742_);
lean_dec(v___y_739_);
lean_dec(v___y_738_);
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_772_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___x_749_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_749_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec_ref(v___y_745_);
lean_dec(v___y_743_);
lean_dec(v___y_742_);
lean_dec(v___y_739_);
lean_dec(v___y_738_);
lean_dec(v_a_635_);
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_780_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_746_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_746_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
v___jp_788_:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_798_ = lean_nat_sub(v___y_790_, v_initialArity_564_);
lean_dec(v___y_790_);
v___x_799_ = lean_array_get_size(v_reverted_560_);
v___x_800_ = lean_array_get_size(v_indices_562_);
v___x_801_ = lean_nat_sub(v___x_799_, v___x_800_);
v___x_802_ = lean_nat_sub(v___x_801_, v___y_793_);
lean_dec(v___x_801_);
v___x_803_ = lean_array_get_size(v_givenNames_558_);
v___x_804_ = lean_nat_dec_lt(v_minorIdx_567_, v___x_803_);
if (v___x_804_ == 0)
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = lean_box(0);
v___x_806_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_806_, 0, v___x_805_);
lean_ctor_set_uint8(v___x_806_, sizeof(void*)*1, v___x_804_);
v___y_733_ = v___y_789_;
v___y_734_ = v___y_791_;
v___y_735_ = v___y_797_;
v___y_736_ = v___y_792_;
v___y_737_ = v___y_793_;
v___y_738_ = v___x_800_;
v___y_739_ = v___x_802_;
v___y_740_ = v___y_794_;
v___y_741_ = v___y_796_;
v___y_742_ = v___x_798_;
v___y_743_ = v___x_799_;
v___y_744_ = v___y_795_;
v___y_745_ = v___x_806_;
goto v___jp_732_;
}
else
{
lean_object* v___x_807_; 
v___x_807_ = lean_array_fget_borrowed(v_givenNames_558_, v_minorIdx_567_);
lean_inc(v___x_807_);
v___y_733_ = v___y_789_;
v___y_734_ = v___y_791_;
v___y_735_ = v___y_797_;
v___y_736_ = v___y_792_;
v___y_737_ = v___y_793_;
v___y_738_ = v___x_800_;
v___y_739_ = v___x_802_;
v___y_740_ = v___y_794_;
v___y_741_ = v___y_796_;
v___y_742_ = v___x_798_;
v___y_743_ = v___x_799_;
v___y_744_ = v___y_795_;
v___y_745_ = v___x_807_;
goto v___jp_732_;
}
}
v___jp_808_:
{
lean_object* v___x_817_; uint8_t v___x_818_; 
lean_inc_ref(v___y_814_);
v___x_817_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(v___y_814_);
v___x_818_ = lean_nat_dec_lt(v___x_817_, v_initialArity_564_);
if (v___x_818_ == 0)
{
v___y_789_ = v___y_809_;
v___y_790_ = v___x_817_;
v___y_791_ = v___y_816_;
v___y_792_ = v___y_814_;
v___y_793_ = v___y_813_;
v___y_794_ = v___y_811_;
v___y_795_ = v___y_812_;
v___y_796_ = v___y_810_;
v___y_797_ = v___y_815_;
goto v___jp_788_;
}
else
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_819_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_820_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
lean_inc(v_mvarId_557_);
v___x_821_ = l_Lean_Meta_throwTacticEx___redArg(v___x_819_, v_mvarId_557_, v___x_820_, v___y_811_, v___y_812_, v___y_810_, v___y_815_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_dec_ref_known(v___x_821_, 1);
v___y_789_ = v___y_809_;
v___y_790_ = v___x_817_;
v___y_791_ = v___y_816_;
v___y_792_ = v___y_814_;
v___y_793_ = v___y_813_;
v___y_794_ = v___y_811_;
v___y_795_ = v___y_812_;
v___y_796_ = v___y_810_;
v___y_797_ = v___y_815_;
goto v___jp_788_;
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_dec(v___x_817_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_809_);
lean_dec(v_a_635_);
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_822_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_821_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_821_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
v___jp_830_:
{
uint8_t v___x_839_; 
v___x_839_ = l_Lean_BinderInfo_isInstImplicit(v___y_831_);
if (v___x_839_ == 0)
{
v___y_809_ = v___y_838_;
v___y_810_ = v___y_833_;
v___y_811_ = v___y_832_;
v___y_812_ = v___y_836_;
v___y_813_ = v___y_835_;
v___y_814_ = v___y_834_;
v___y_815_ = v___y_837_;
v___y_816_ = v___x_839_;
goto v___jp_808_;
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_840_ = lean_array_get_size(v_givenNames_558_);
v___x_841_ = lean_unsigned_to_nat(0u);
v___x_842_ = lean_nat_dec_eq(v___x_840_, v___x_841_);
if (v___x_842_ == 0)
{
v___y_809_ = v___y_838_;
v___y_810_ = v___y_833_;
v___y_811_ = v___y_832_;
v___y_812_ = v___y_836_;
v___y_813_ = v___y_835_;
v___y_814_ = v___y_834_;
v___y_815_ = v___y_837_;
v___y_816_ = v___x_842_;
goto v___jp_808_;
}
else
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_box(0);
lean_inc_ref(v___y_834_);
v___x_844_ = l_Lean_Meta_synthInstance_x3f(v___y_834_, v___x_843_, v___y_832_, v___y_836_, v___y_833_, v___y_837_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_845_);
lean_dec_ref_known(v___x_844_, 1);
if (lean_obj_tag(v_a_845_) == 0)
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_834_, v___y_838_, v___y_832_, v___y_836_, v___y_833_, v___y_837_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc_n(v_a_847_, 2);
lean_dec_ref_known(v___x_846_, 1);
v___x_848_ = l_Lean_Expr_app___override(v_recursor_568_, v_a_847_);
lean_inc(v_mvarId_557_);
v___x_849_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_557_, v_a_635_, v_a_847_, v___y_832_, v___y_836_, v___y_833_, v___y_837_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 1);
v___x_851_ = lean_nat_add(v_pos_566_, v___y_835_);
lean_dec(v_pos_566_);
v___x_852_ = lean_nat_add(v_minorIdx_567_, v___y_835_);
lean_dec(v_minorIdx_567_);
v___x_853_ = l_Lean_Expr_mvarId_x21(v_a_847_);
lean_dec(v_a_847_);
v___x_854_ = ((lean_object*)(l_Lean_Meta_instInhabitedInductionSubgoal_default___closed__0));
v___x_855_ = lean_box(0);
v___x_856_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_856_, 0, v___x_853_);
lean_ctor_set(v___x_856_, 1, v___x_854_);
lean_ctor_set(v___x_856_, 2, v___x_855_);
v___x_857_ = lean_array_push(v_subgoals_571_, v___x_856_);
v_pos_566_ = v___x_851_;
v_minorIdx_567_ = v___x_852_;
v_recursor_568_ = v___x_848_;
v_recursorType_569_ = v_a_850_;
v_subgoals_571_ = v___x_857_;
v_a_572_ = v___y_832_;
v_a_573_ = v___y_836_;
v_a_574_ = v___y_833_;
v_a_575_ = v___y_837_;
goto _start;
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_dec_ref(v___x_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_859_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_849_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_849_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_a_635_);
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_867_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_846_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_846_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
else
{
lean_object* v_val_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
lean_dec(v___y_838_);
lean_dec_ref(v___y_834_);
v_val_875_ = lean_ctor_get(v_a_845_, 0);
lean_inc_n(v_val_875_, 2);
lean_dec_ref_known(v_a_845_, 1);
v___x_876_ = l_Lean_Expr_app___override(v_recursor_568_, v_val_875_);
lean_inc(v_mvarId_557_);
v___x_877_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTypeBody(v_mvarId_557_, v_a_635_, v_val_875_, v___y_832_, v___y_836_, v___y_833_, v___y_837_);
lean_dec(v_val_875_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 1);
v___x_879_ = lean_nat_add(v_pos_566_, v___y_835_);
lean_dec(v_pos_566_);
v___x_880_ = lean_nat_add(v_minorIdx_567_, v___y_835_);
lean_dec(v_minorIdx_567_);
v_pos_566_ = v___x_879_;
v_minorIdx_567_ = v___x_880_;
v_recursor_568_ = v___x_876_;
v_recursorType_569_ = v_a_878_;
v_a_572_ = v___y_832_;
v_a_573_ = v___y_836_;
v_a_574_ = v___y_833_;
v_a_575_ = v___y_837_;
goto _start;
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec_ref(v___x_876_);
lean_dec_ref(v_subgoals_571_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_882_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_877_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_877_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec(v___y_838_);
lean_dec_ref(v___y_834_);
lean_dec(v_a_635_);
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_890_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_844_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_844_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
}
}
}
v___jp_636_:
{
if (v_consumedMajor_570_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_637_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_638_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
lean_inc(v_mvarId_557_);
v___x_639_ = l_Lean_Meta_throwTacticEx___redArg(v___x_637_, v_mvarId_557_, v___x_638_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_dec_ref_known(v___x_639_, 1);
v___y_578_ = v_a_572_;
v___y_579_ = v_a_573_;
v___y_580_ = v_a_574_;
v___y_581_ = v_a_575_;
goto v___jp_577_;
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_mvarId_557_);
v_a_640_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_639_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_639_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
else
{
v___y_578_ = v_a_572_;
v___y_579_ = v_a_573_;
v___y_580_ = v_a_574_;
v___y_581_ = v_a_575_;
goto v___jp_577_;
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
lean_dec_ref(v_subgoals_571_);
lean_dec_ref(v_recursor_568_);
lean_dec(v_minorIdx_567_);
lean_dec(v_pos_566_);
lean_dec(v_baseSubst_563_);
lean_dec_ref(v_major_561_);
lean_dec(v_mvarId_557_);
v_a_973_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_634_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_634_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
v___jp_577_:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(v_mvarId_557_, v_recursor_568_, v___y_579_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_624_; 
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; 
v_unused_625_ = lean_ctor_get(v___x_582_, 0);
lean_dec(v_unused_625_);
v___x_584_ = v___x_582_;
v_isShared_585_ = v_isSharedCheck_624_;
goto v_resetjp_583_;
}
else
{
lean_dec(v___x_582_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_624_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v_toCold_586_; lean_object* v_options_587_; uint8_t v_hasTrace_588_; 
v_toCold_586_ = lean_ctor_get(v___y_580_, 0);
v_options_587_ = lean_ctor_get(v_toCold_586_, 2);
v_hasTrace_588_ = lean_ctor_get_uint8(v_options_587_, sizeof(void*)*1);
if (v_hasTrace_588_ == 0)
{
lean_object* v___x_590_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v_subgoals_571_);
v___x_590_ = v___x_584_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_subgoals_571_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
else
{
lean_object* v_inheritedTraceOptions_592_; lean_object* v___x_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v_inheritedTraceOptions_592_ = lean_ctor_get(v_toCold_586_, 11);
v___x_593_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
v___x_594_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5);
v___x_595_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_592_, v_options_587_, v___x_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_597_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v_subgoals_571_);
v___x_597_ = v___x_584_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_subgoals_571_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
else
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
lean_del_object(v___x_584_);
v___x_599_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__7);
v___x_600_ = lean_array_get_size(v_subgoals_571_);
v___x_601_ = l_Nat_reprFast(v___x_600_);
v___x_602_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
v___x_603_ = l_Lean_MessageData_ofFormat(v___x_602_);
v___x_604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_599_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__9);
v___x_606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_604_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
v___x_607_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v___x_593_, v___x_606_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; 
v_unused_615_ = lean_ctor_get(v___x_607_, 0);
lean_dec(v_unused_615_);
v___x_609_ = v___x_607_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_dec(v___x_607_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 0, v_subgoals_571_);
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_subgoals_571_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
lean_dec_ref(v_subgoals_571_);
v_a_616_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_607_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_607_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec_ref(v_subgoals_571_);
v_a_626_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_582_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_582_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___boxed(lean_object** _args){
lean_object* v_mvarId_981_ = _args[0];
lean_object* v_givenNames_982_ = _args[1];
lean_object* v_recursorInfo_983_ = _args[2];
lean_object* v_reverted_984_ = _args[3];
lean_object* v_major_985_ = _args[4];
lean_object* v_indices_986_ = _args[5];
lean_object* v_baseSubst_987_ = _args[6];
lean_object* v_initialArity_988_ = _args[7];
lean_object* v_numMinors_989_ = _args[8];
lean_object* v_pos_990_ = _args[9];
lean_object* v_minorIdx_991_ = _args[10];
lean_object* v_recursor_992_ = _args[11];
lean_object* v_recursorType_993_ = _args[12];
lean_object* v_consumedMajor_994_ = _args[13];
lean_object* v_subgoals_995_ = _args[14];
lean_object* v_a_996_ = _args[15];
lean_object* v_a_997_ = _args[16];
lean_object* v_a_998_ = _args[17];
lean_object* v_a_999_ = _args[18];
lean_object* v_a_1000_ = _args[19];
_start:
{
uint8_t v_consumedMajor_boxed_1001_; lean_object* v_res_1002_; 
v_consumedMajor_boxed_1001_ = lean_unbox(v_consumedMajor_994_);
v_res_1002_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop(v_mvarId_981_, v_givenNames_982_, v_recursorInfo_983_, v_reverted_984_, v_major_985_, v_indices_986_, v_baseSubst_987_, v_initialArity_988_, v_numMinors_989_, v_pos_990_, v_minorIdx_991_, v_recursor_992_, v_recursorType_993_, v_consumedMajor_boxed_1001_, v_subgoals_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
lean_dec(v_a_999_);
lean_dec_ref(v_a_998_);
lean_dec(v_a_997_);
lean_dec_ref(v_a_996_);
lean_dec(v_numMinors_989_);
lean_dec(v_initialArity_988_);
lean_dec_ref(v_indices_986_);
lean_dec_ref(v_reverted_984_);
lean_dec_ref(v_recursorInfo_983_);
lean_dec_ref(v_givenNames_982_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0(lean_object* v_mvarId_1003_, lean_object* v_val_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___redArg(v_mvarId_1003_, v_val_1004_, v___y_1006_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0___boxed(lean_object* v_mvarId_1011_, lean_object* v_val_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0(v_mvarId_1011_, v_val_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2(lean_object* v___x_1019_, lean_object* v_reverted_1020_, lean_object* v_fst_1021_, lean_object* v_n_1022_, lean_object* v_j_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___redArg(v___x_1019_, v_reverted_1020_, v_fst_1021_, v_n_1022_, v_j_1023_, v_a_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2___boxed(lean_object* v___x_1027_, lean_object* v_reverted_1028_, lean_object* v_fst_1029_, lean_object* v_n_1030_, lean_object* v_j_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__2(v___x_1027_, v_reverted_1028_, v_fst_1029_, v_n_1030_, v_j_1031_, v_a_1032_, v_a_1033_);
lean_dec(v_n_1030_);
lean_dec_ref(v_fst_1029_);
lean_dec_ref(v_reverted_1028_);
lean_dec(v___x_1027_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0(lean_object* v_00_u03b2_1035_, lean_object* v_x_1036_, lean_object* v_x_1037_, lean_object* v_x_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0___redArg(v_x_1036_, v_x_1037_, v_x_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1040_, lean_object* v_x_1041_, size_t v_x_1042_, size_t v_x_1043_, lean_object* v_x_1044_, lean_object* v_x_1045_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___redArg(v_x_1041_, v_x_1042_, v_x_1043_, v_x_1044_, v_x_1045_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1047_, lean_object* v_x_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_, lean_object* v_x_1052_){
_start:
{
size_t v_x_9571__boxed_1053_; size_t v_x_9572__boxed_1054_; lean_object* v_res_1055_; 
v_x_9571__boxed_1053_ = lean_unbox_usize(v_x_1049_);
lean_dec(v_x_1049_);
v_x_9572__boxed_1054_ = lean_unbox_usize(v_x_1050_);
lean_dec(v_x_1050_);
v_res_1055_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2(v_00_u03b2_1047_, v_x_1048_, v_x_9571__boxed_1053_, v_x_9572__boxed_1054_, v_x_1051_, v_x_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8(lean_object* v_00_u03b2_1056_, lean_object* v_n_1057_, lean_object* v_k_1058_, lean_object* v_v_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8___redArg(v_n_1057_, v_k_1058_, v_v_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9(lean_object* v_00_u03b2_1061_, size_t v_depth_1062_, lean_object* v_keys_1063_, lean_object* v_vals_1064_, lean_object* v_heq_1065_, lean_object* v_i_1066_, lean_object* v_entries_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___redArg(v_depth_1062_, v_keys_1063_, v_vals_1064_, v_i_1066_, v_entries_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9___boxed(lean_object* v_00_u03b2_1069_, lean_object* v_depth_1070_, lean_object* v_keys_1071_, lean_object* v_vals_1072_, lean_object* v_heq_1073_, lean_object* v_i_1074_, lean_object* v_entries_1075_){
_start:
{
size_t v_depth_boxed_1076_; lean_object* v_res_1077_; 
v_depth_boxed_1076_ = lean_unbox_usize(v_depth_1070_);
lean_dec(v_depth_1070_);
v_res_1077_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__9(v_00_u03b2_1069_, v_depth_boxed_1076_, v_keys_1071_, v_vals_1072_, v_heq_1073_, v_i_1074_, v_entries_1075_);
lean_dec_ref(v_vals_1072_);
lean_dec_ref(v_keys_1071_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9(lean_object* v_00_u03b2_1078_, lean_object* v_x_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__0_spec__0_spec__2_spec__8_spec__9___redArg(v_x_1079_, v_x_1080_, v_x_1081_, v_x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize(lean_object* v_mvarId_1086_, lean_object* v_givenNames_1087_, lean_object* v_recursorInfo_1088_, lean_object* v_reverted_1089_, lean_object* v_major_1090_, lean_object* v_indices_1091_, lean_object* v_baseSubst_1092_, lean_object* v_recursor_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v___x_1099_; 
lean_inc(v_mvarId_1086_);
v___x_1099_ = l_Lean_MVarId_getType(v_mvarId_1086_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1101_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_getTargetArity(v_a_1100_);
lean_inc(v_a_1097_);
lean_inc_ref(v_a_1096_);
lean_inc(v_a_1095_);
lean_inc_ref(v_a_1094_);
lean_inc_ref(v_recursor_1093_);
v___x_1102_ = lean_infer_type(v_recursor_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v_paramsPos_1104_; lean_object* v_produceMotive_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1102_, 1);
v_paramsPos_1104_ = lean_ctor_get(v_recursorInfo_1088_, 5);
v_produceMotive_1105_ = lean_ctor_get(v_recursorInfo_1088_, 7);
v___x_1106_ = l_List_lengthTR___redArg(v_produceMotive_1105_);
v___x_1107_ = l_List_lengthTR___redArg(v_paramsPos_1104_);
v___x_1108_ = lean_unsigned_to_nat(1u);
v___x_1109_ = lean_nat_add(v___x_1107_, v___x_1108_);
lean_dec(v___x_1107_);
v___x_1110_ = lean_unsigned_to_nat(0u);
v___x_1111_ = 0;
v___x_1112_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___closed__0));
v___x_1113_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop(v_mvarId_1086_, v_givenNames_1087_, v_recursorInfo_1088_, v_reverted_1089_, v_major_1090_, v_indices_1091_, v_baseSubst_1092_, v___x_1101_, v___x_1106_, v___x_1109_, v___x_1110_, v_recursor_1093_, v_a_1103_, v___x_1111_, v___x_1112_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_);
lean_dec(v___x_1106_);
lean_dec(v___x_1101_);
return v___x_1113_;
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v___x_1101_);
lean_dec_ref(v_recursor_1093_);
lean_dec(v_baseSubst_1092_);
lean_dec_ref(v_major_1090_);
lean_dec(v_mvarId_1086_);
v_a_1114_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1102_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1102_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec_ref(v_recursor_1093_);
lean_dec(v_baseSubst_1092_);
lean_dec_ref(v_major_1090_);
lean_dec(v_mvarId_1086_);
v_a_1122_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1099_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1099_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize___boxed(lean_object* v_mvarId_1130_, lean_object* v_givenNames_1131_, lean_object* v_recursorInfo_1132_, lean_object* v_reverted_1133_, lean_object* v_major_1134_, lean_object* v_indices_1135_, lean_object* v_baseSubst_1136_, lean_object* v_recursor_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize(v_mvarId_1130_, v_givenNames_1131_, v_recursorInfo_1132_, v_reverted_1133_, v_major_1134_, v_indices_1135_, v_baseSubst_1136_, v_recursor_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec_ref(v_indices_1135_);
lean_dec_ref(v_reverted_1133_);
lean_dec_ref(v_recursorInfo_1132_);
lean_dec_ref(v_givenNames_1131_);
return v_res_1143_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__0));
v___x_1146_ = l_Lean_stringToMessageData(v___x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(lean_object* v_tacticName_1147_, lean_object* v_mvarId_1148_, lean_object* v_majorType_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1155_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___closed__1);
v___x_1156_ = l_Lean_indentExpr(v_majorType_1149_);
v___x_1157_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1155_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___x_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1157_);
v___x_1159_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1147_, v_mvarId_1148_, v___x_1158_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg___boxed(lean_object* v_tacticName_1160_, lean_object* v_mvarId_1161_, lean_object* v_majorType_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(v_tacticName_1160_, v_mvarId_1161_, v_majorType_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_);
lean_dec(v_a_1166_);
lean_dec_ref(v_a_1165_);
lean_dec(v_a_1164_);
lean_dec_ref(v_a_1163_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType(lean_object* v_00_u03b1_1169_, lean_object* v_tacticName_1170_, lean_object* v_mvarId_1171_, lean_object* v_majorType_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(v_tacticName_1170_, v_mvarId_1171_, v_majorType_1172_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___boxed(lean_object* v_00_u03b1_1179_, lean_object* v_tacticName_1180_, lean_object* v_mvarId_1181_, lean_object* v_majorType_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_){
_start:
{
lean_object* v_res_1188_; 
v_res_1188_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType(v_00_u03b1_1179_, v_tacticName_1180_, v_mvarId_1181_, v_majorType_1182_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_);
lean_dec(v_a_1186_);
lean_dec_ref(v_a_1185_);
lean_dec(v_a_1184_);
lean_dec_ref(v_a_1183_);
return v_res_1188_;
}
}
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0(lean_object* v_fvarId_1189_, lean_object* v_x_1190_){
_start:
{
uint8_t v___x_1191_; 
v___x_1191_ = l_Lean_instBEqFVarId_beq(v_fvarId_1189_, v_x_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0___boxed(lean_object* v_fvarId_1192_, lean_object* v_x_1193_){
_start:
{
uint8_t v_res_1194_; lean_object* v_r_1195_; 
v_res_1194_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0(v_fvarId_1192_, v_x_1193_);
lean_dec(v_x_1193_);
lean_dec(v_fvarId_1192_);
v_r_1195_ = lean_box(v_res_1194_);
return v_r_1195_;
}
}
LEAN_EXPORT uint8_t l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1(lean_object* v_x_1196_){
_start:
{
uint8_t v___x_1197_; 
v___x_1197_ = 0;
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1___boxed(lean_object* v_x_1198_){
_start:
{
uint8_t v_res_1199_; lean_object* v_r_1200_; 
v_res_1199_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__1(v_x_1198_);
lean_dec(v_x_1198_);
v_r_1200_ = lean_box(v_res_1199_);
return v_r_1200_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1202_ = lean_box(0);
v___x_1203_ = lean_unsigned_to_nat(16u);
v___x_1204_ = lean_mk_array(v___x_1203_, v___x_1202_);
return v___x_1204_;
}
}
static lean_object* _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1205_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__1);
v___x_1206_ = lean_unsigned_to_nat(0u);
v___x_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
lean_ctor_set(v___x_1207_, 1, v___x_1205_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(lean_object* v_localDecl_1208_, lean_object* v_fvarId_1209_, uint8_t v_generalizeNondepLet_1210_, lean_object* v___y_1211_){
_start:
{
uint8_t v_fst_1214_; lean_object* v_snd_1215_; lean_object* v___y_1235_; lean_object* v___f_1239_; lean_object* v___f_1240_; 
v___f_1239_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1239_, 0, v_fvarId_1209_);
v___f_1240_ = ((lean_object*)(l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0));
if (lean_obj_tag(v_localDecl_1208_) == 0)
{
lean_object* v_type_1241_; lean_object* v___x_1242_; uint8_t v_fst_1244_; lean_object* v_mctx_1245_; lean_object* v___y_1264_; lean_object* v_mctx_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; uint8_t v___x_1272_; 
v_type_1241_ = lean_ctor_get(v_localDecl_1208_, 3);
lean_inc_ref(v_type_1241_);
lean_dec_ref_known(v_localDecl_1208_, 4);
v___x_1242_ = lean_st_ref_get(v___y_1211_);
v_mctx_1269_ = lean_ctor_get(v___x_1242_, 0);
lean_inc_ref_n(v_mctx_1269_, 2);
lean_dec(v___x_1242_);
v___x_1270_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2);
v___x_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
lean_ctor_set(v___x_1271_, 1, v_mctx_1269_);
v___x_1272_ = l_Lean_Expr_hasFVar(v_type_1241_);
if (v___x_1272_ == 0)
{
uint8_t v___x_1273_; 
v___x_1273_ = l_Lean_Expr_hasMVar(v_type_1241_);
if (v___x_1273_ == 0)
{
lean_dec_ref_known(v___x_1271_, 2);
lean_dec_ref(v_type_1241_);
lean_dec_ref(v___f_1239_);
v_fst_1244_ = v___x_1273_;
v_mctx_1245_ = v_mctx_1269_;
goto v___jp_1243_;
}
else
{
lean_object* v___x_1274_; 
lean_dec_ref(v_mctx_1269_);
v___x_1274_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1239_, v___f_1240_, v_type_1241_, v___x_1271_);
v___y_1264_ = v___x_1274_;
goto v___jp_1263_;
}
}
else
{
lean_object* v___x_1275_; 
lean_dec_ref(v_mctx_1269_);
v___x_1275_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1239_, v___f_1240_, v_type_1241_, v___x_1271_);
v___y_1264_ = v___x_1275_;
goto v___jp_1263_;
}
v___jp_1243_:
{
lean_object* v___x_1246_; lean_object* v_cache_1247_; lean_object* v_zetaDeltaFVarIds_1248_; lean_object* v_postponed_1249_; lean_object* v_diag_1250_; lean_object* v_rewriteFires_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1261_; 
v___x_1246_ = lean_st_ref_take(v___y_1211_);
v_cache_1247_ = lean_ctor_get(v___x_1246_, 1);
v_zetaDeltaFVarIds_1248_ = lean_ctor_get(v___x_1246_, 2);
v_postponed_1249_ = lean_ctor_get(v___x_1246_, 3);
v_diag_1250_ = lean_ctor_get(v___x_1246_, 4);
v_rewriteFires_1251_ = lean_ctor_get(v___x_1246_, 5);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1261_ == 0)
{
lean_object* v_unused_1262_; 
v_unused_1262_ = lean_ctor_get(v___x_1246_, 0);
lean_dec(v_unused_1262_);
v___x_1253_ = v___x_1246_;
v_isShared_1254_ = v_isSharedCheck_1261_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_rewriteFires_1251_);
lean_inc(v_diag_1250_);
lean_inc(v_postponed_1249_);
lean_inc(v_zetaDeltaFVarIds_1248_);
lean_inc(v_cache_1247_);
lean_dec(v___x_1246_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1261_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v_mctx_1245_);
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_mctx_1245_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_cache_1247_);
lean_ctor_set(v_reuseFailAlloc_1260_, 2, v_zetaDeltaFVarIds_1248_);
lean_ctor_set(v_reuseFailAlloc_1260_, 3, v_postponed_1249_);
lean_ctor_set(v_reuseFailAlloc_1260_, 4, v_diag_1250_);
lean_ctor_set(v_reuseFailAlloc_1260_, 5, v_rewriteFires_1251_);
v___x_1256_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = lean_st_ref_put(v___y_1211_, v___x_1256_);
v___x_1258_ = lean_box(v_fst_1244_);
v___x_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
return v___x_1259_;
}
}
}
v___jp_1263_:
{
lean_object* v_snd_1265_; lean_object* v_fst_1266_; lean_object* v_mctx_1267_; uint8_t v___x_1268_; 
v_snd_1265_ = lean_ctor_get(v___y_1264_, 1);
lean_inc(v_snd_1265_);
v_fst_1266_ = lean_ctor_get(v___y_1264_, 0);
lean_inc(v_fst_1266_);
lean_dec_ref(v___y_1264_);
v_mctx_1267_ = lean_ctor_get(v_snd_1265_, 1);
lean_inc_ref(v_mctx_1267_);
lean_dec(v_snd_1265_);
v___x_1268_ = lean_unbox(v_fst_1266_);
lean_dec(v_fst_1266_);
v_fst_1244_ = v___x_1268_;
v_mctx_1245_ = v_mctx_1267_;
goto v___jp_1243_;
}
}
else
{
lean_object* v_type_1276_; lean_object* v_value_1277_; uint8_t v_nondep_1278_; lean_object* v_snd_1280_; lean_object* v___y_1286_; 
v_type_1276_ = lean_ctor_get(v_localDecl_1208_, 3);
lean_inc_ref(v_type_1276_);
v_value_1277_ = lean_ctor_get(v_localDecl_1208_, 4);
lean_inc_ref(v_value_1277_);
v_nondep_1278_ = lean_ctor_get_uint8(v_localDecl_1208_, sizeof(void*)*5);
lean_dec_ref_known(v_localDecl_1208_, 5);
if (v_generalizeNondepLet_1210_ == 0)
{
goto v___jp_1292_;
}
else
{
if (v_nondep_1278_ == 0)
{
goto v___jp_1292_;
}
else
{
lean_object* v___x_1301_; uint8_t v_fst_1303_; lean_object* v_mctx_1304_; lean_object* v___y_1323_; lean_object* v_mctx_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; 
lean_dec_ref(v_value_1277_);
v___x_1301_ = lean_st_ref_get(v___y_1211_);
v_mctx_1328_ = lean_ctor_get(v___x_1301_, 0);
lean_inc_ref_n(v_mctx_1328_, 2);
lean_dec(v___x_1301_);
v___x_1329_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2);
v___x_1330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
lean_ctor_set(v___x_1330_, 1, v_mctx_1328_);
v___x_1331_ = l_Lean_Expr_hasFVar(v_type_1276_);
if (v___x_1331_ == 0)
{
uint8_t v___x_1332_; 
v___x_1332_ = l_Lean_Expr_hasMVar(v_type_1276_);
if (v___x_1332_ == 0)
{
lean_dec_ref_known(v___x_1330_, 2);
lean_dec_ref(v_type_1276_);
lean_dec_ref(v___f_1239_);
v_fst_1303_ = v___x_1332_;
v_mctx_1304_ = v_mctx_1328_;
goto v___jp_1302_;
}
else
{
lean_object* v___x_1333_; 
lean_dec_ref(v_mctx_1328_);
v___x_1333_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1239_, v___f_1240_, v_type_1276_, v___x_1330_);
v___y_1323_ = v___x_1333_;
goto v___jp_1322_;
}
}
else
{
lean_object* v___x_1334_; 
lean_dec_ref(v_mctx_1328_);
v___x_1334_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1239_, v___f_1240_, v_type_1276_, v___x_1330_);
v___y_1323_ = v___x_1334_;
goto v___jp_1322_;
}
v___jp_1302_:
{
lean_object* v___x_1305_; lean_object* v_cache_1306_; lean_object* v_zetaDeltaFVarIds_1307_; lean_object* v_postponed_1308_; lean_object* v_diag_1309_; lean_object* v_rewriteFires_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1320_; 
v___x_1305_ = lean_st_ref_take(v___y_1211_);
v_cache_1306_ = lean_ctor_get(v___x_1305_, 1);
v_zetaDeltaFVarIds_1307_ = lean_ctor_get(v___x_1305_, 2);
v_postponed_1308_ = lean_ctor_get(v___x_1305_, 3);
v_diag_1309_ = lean_ctor_get(v___x_1305_, 4);
v_rewriteFires_1310_ = lean_ctor_get(v___x_1305_, 5);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1320_ == 0)
{
lean_object* v_unused_1321_; 
v_unused_1321_ = lean_ctor_get(v___x_1305_, 0);
lean_dec(v_unused_1321_);
v___x_1312_ = v___x_1305_;
v_isShared_1313_ = v_isSharedCheck_1320_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_rewriteFires_1310_);
lean_inc(v_diag_1309_);
lean_inc(v_postponed_1308_);
lean_inc(v_zetaDeltaFVarIds_1307_);
lean_inc(v_cache_1306_);
lean_dec(v___x_1305_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1320_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 0, v_mctx_1304_);
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_mctx_1304_);
lean_ctor_set(v_reuseFailAlloc_1319_, 1, v_cache_1306_);
lean_ctor_set(v_reuseFailAlloc_1319_, 2, v_zetaDeltaFVarIds_1307_);
lean_ctor_set(v_reuseFailAlloc_1319_, 3, v_postponed_1308_);
lean_ctor_set(v_reuseFailAlloc_1319_, 4, v_diag_1309_);
lean_ctor_set(v_reuseFailAlloc_1319_, 5, v_rewriteFires_1310_);
v___x_1315_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1316_ = lean_st_ref_put(v___y_1211_, v___x_1315_);
v___x_1317_ = lean_box(v_fst_1303_);
v___x_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
return v___x_1318_;
}
}
}
v___jp_1322_:
{
lean_object* v_snd_1324_; lean_object* v_fst_1325_; lean_object* v_mctx_1326_; uint8_t v___x_1327_; 
v_snd_1324_ = lean_ctor_get(v___y_1323_, 1);
lean_inc(v_snd_1324_);
v_fst_1325_ = lean_ctor_get(v___y_1323_, 0);
lean_inc(v_fst_1325_);
lean_dec_ref(v___y_1323_);
v_mctx_1326_ = lean_ctor_get(v_snd_1324_, 1);
lean_inc_ref(v_mctx_1326_);
lean_dec(v_snd_1324_);
v___x_1327_ = lean_unbox(v_fst_1325_);
lean_dec(v_fst_1325_);
v_fst_1303_ = v___x_1327_;
v_mctx_1304_ = v_mctx_1326_;
goto v___jp_1302_;
}
}
}
v___jp_1279_:
{
uint8_t v___x_1281_; 
v___x_1281_ = l_Lean_Expr_hasFVar(v_value_1277_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; 
v___x_1282_ = l_Lean_Expr_hasMVar(v_value_1277_);
if (v___x_1282_ == 0)
{
lean_dec_ref(v_value_1277_);
lean_dec_ref(v___f_1239_);
v_fst_1214_ = v___x_1282_;
v_snd_1215_ = v_snd_1280_;
goto v___jp_1213_;
}
else
{
lean_object* v___x_1283_; 
v___x_1283_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1239_, v___f_1240_, v_value_1277_, v_snd_1280_);
v___y_1235_ = v___x_1283_;
goto v___jp_1234_;
}
}
else
{
lean_object* v___x_1284_; 
v___x_1284_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1239_, v___f_1240_, v_value_1277_, v_snd_1280_);
v___y_1235_ = v___x_1284_;
goto v___jp_1234_;
}
}
v___jp_1285_:
{
lean_object* v_fst_1287_; uint8_t v___x_1288_; 
v_fst_1287_ = lean_ctor_get(v___y_1286_, 0);
v___x_1288_ = lean_unbox(v_fst_1287_);
if (v___x_1288_ == 0)
{
lean_object* v_snd_1289_; 
v_snd_1289_ = lean_ctor_get(v___y_1286_, 1);
lean_inc(v_snd_1289_);
lean_dec_ref(v___y_1286_);
v_snd_1280_ = v_snd_1289_;
goto v___jp_1279_;
}
else
{
lean_object* v_snd_1290_; uint8_t v___x_1291_; 
lean_inc(v_fst_1287_);
lean_dec_ref(v_value_1277_);
lean_dec_ref(v___f_1239_);
v_snd_1290_ = lean_ctor_get(v___y_1286_, 1);
lean_inc(v_snd_1290_);
lean_dec_ref(v___y_1286_);
v___x_1291_ = lean_unbox(v_fst_1287_);
lean_dec(v_fst_1287_);
v_fst_1214_ = v___x_1291_;
v_snd_1215_ = v_snd_1290_;
goto v___jp_1213_;
}
}
v___jp_1292_:
{
lean_object* v___x_1293_; lean_object* v_mctx_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1293_ = lean_st_ref_get(v___y_1211_);
v_mctx_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc_ref(v_mctx_1294_);
lean_dec(v___x_1293_);
v___x_1295_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2);
v___x_1296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v_mctx_1294_);
v___x_1297_ = l_Lean_Expr_hasFVar(v_type_1276_);
if (v___x_1297_ == 0)
{
uint8_t v___x_1298_; 
v___x_1298_ = l_Lean_Expr_hasMVar(v_type_1276_);
if (v___x_1298_ == 0)
{
lean_dec_ref(v_type_1276_);
v_snd_1280_ = v___x_1296_;
goto v___jp_1279_;
}
else
{
lean_object* v___x_1299_; 
lean_inc_ref(v___f_1239_);
v___x_1299_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1239_, v___f_1240_, v_type_1276_, v___x_1296_);
v___y_1286_ = v___x_1299_;
goto v___jp_1285_;
}
}
else
{
lean_object* v___x_1300_; 
lean_inc_ref(v___f_1239_);
v___x_1300_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1239_, v___f_1240_, v_type_1276_, v___x_1296_);
v___y_1286_ = v___x_1300_;
goto v___jp_1285_;
}
}
}
v___jp_1213_:
{
lean_object* v_mctx_1216_; lean_object* v___x_1217_; lean_object* v_cache_1218_; lean_object* v_zetaDeltaFVarIds_1219_; lean_object* v_postponed_1220_; lean_object* v_diag_1221_; lean_object* v_rewriteFires_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1232_; 
v_mctx_1216_ = lean_ctor_get(v_snd_1215_, 1);
lean_inc_ref(v_mctx_1216_);
lean_dec_ref(v_snd_1215_);
v___x_1217_ = lean_st_ref_take(v___y_1211_);
v_cache_1218_ = lean_ctor_get(v___x_1217_, 1);
v_zetaDeltaFVarIds_1219_ = lean_ctor_get(v___x_1217_, 2);
v_postponed_1220_ = lean_ctor_get(v___x_1217_, 3);
v_diag_1221_ = lean_ctor_get(v___x_1217_, 4);
v_rewriteFires_1222_ = lean_ctor_get(v___x_1217_, 5);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1232_ == 0)
{
lean_object* v_unused_1233_; 
v_unused_1233_ = lean_ctor_get(v___x_1217_, 0);
lean_dec(v_unused_1233_);
v___x_1224_ = v___x_1217_;
v_isShared_1225_ = v_isSharedCheck_1232_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_rewriteFires_1222_);
lean_inc(v_diag_1221_);
lean_inc(v_postponed_1220_);
lean_inc(v_zetaDeltaFVarIds_1219_);
lean_inc(v_cache_1218_);
lean_dec(v___x_1217_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1232_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
lean_ctor_set(v___x_1224_, 0, v_mctx_1216_);
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_mctx_1216_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_cache_1218_);
lean_ctor_set(v_reuseFailAlloc_1231_, 2, v_zetaDeltaFVarIds_1219_);
lean_ctor_set(v_reuseFailAlloc_1231_, 3, v_postponed_1220_);
lean_ctor_set(v_reuseFailAlloc_1231_, 4, v_diag_1221_);
lean_ctor_set(v_reuseFailAlloc_1231_, 5, v_rewriteFires_1222_);
v___x_1227_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = lean_st_ref_put(v___y_1211_, v___x_1227_);
v___x_1229_ = lean_box(v_fst_1214_);
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
}
}
v___jp_1234_:
{
lean_object* v_fst_1236_; lean_object* v_snd_1237_; uint8_t v___x_1238_; 
v_fst_1236_ = lean_ctor_get(v___y_1235_, 0);
lean_inc(v_fst_1236_);
v_snd_1237_ = lean_ctor_get(v___y_1235_, 1);
lean_inc(v_snd_1237_);
lean_dec_ref(v___y_1235_);
v___x_1238_ = lean_unbox(v_fst_1236_);
lean_dec(v_fst_1236_);
v_fst_1214_ = v___x_1238_;
v_snd_1215_ = v_snd_1237_;
goto v___jp_1213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___boxed(lean_object* v_localDecl_1335_, lean_object* v_fvarId_1336_, lean_object* v_generalizeNondepLet_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
uint8_t v_generalizeNondepLet_boxed_1340_; lean_object* v_res_1341_; 
v_generalizeNondepLet_boxed_1340_ = lean_unbox(v_generalizeNondepLet_1337_);
v_res_1341_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(v_localDecl_1335_, v_fvarId_1336_, v_generalizeNondepLet_boxed_1340_, v___y_1338_);
lean_dec(v___y_1338_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1(lean_object* v_localDecl_1342_, lean_object* v_fvarId_1343_, uint8_t v_generalizeNondepLet_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(v_localDecl_1342_, v_fvarId_1343_, v_generalizeNondepLet_1344_, v___y_1346_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___boxed(lean_object* v_localDecl_1351_, lean_object* v_fvarId_1352_, lean_object* v_generalizeNondepLet_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
uint8_t v_generalizeNondepLet_boxed_1359_; lean_object* v_res_1360_; 
v_generalizeNondepLet_boxed_1359_ = lean_unbox(v_generalizeNondepLet_1353_);
v_res_1360_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1(v_localDecl_1351_, v_fvarId_1352_, v_generalizeNondepLet_boxed_1359_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
lean_dec(v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1355_);
lean_dec_ref(v___y_1354_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(lean_object* v_e_1361_, lean_object* v_fvarId_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v___f_1365_; lean_object* v___f_1366_; lean_object* v___x_1367_; uint8_t v_fst_1369_; lean_object* v_mctx_1370_; lean_object* v___y_1389_; lean_object* v_mctx_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___f_1365_ = ((lean_object*)(l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__0));
v___f_1366_ = lean_alloc_closure((void*)(l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1366_, 0, v_fvarId_1362_);
v___x_1367_ = lean_st_ref_get(v___y_1363_);
v_mctx_1394_ = lean_ctor_get(v___x_1367_, 0);
lean_inc_ref_n(v_mctx_1394_, 2);
lean_dec(v___x_1367_);
v___x_1395_ = lean_obj_once(&l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2, &l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2_once, _init_l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg___closed__2);
v___x_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
lean_ctor_set(v___x_1396_, 1, v_mctx_1394_);
v___x_1397_ = l_Lean_Expr_hasFVar(v_e_1361_);
if (v___x_1397_ == 0)
{
uint8_t v___x_1398_; 
v___x_1398_ = l_Lean_Expr_hasMVar(v_e_1361_);
if (v___x_1398_ == 0)
{
lean_dec_ref_known(v___x_1396_, 2);
lean_dec_ref(v___f_1366_);
lean_dec_ref(v_e_1361_);
v_fst_1369_ = v___x_1398_;
v_mctx_1370_ = v_mctx_1394_;
goto v___jp_1368_;
}
else
{
lean_object* v___x_1399_; 
lean_dec_ref(v_mctx_1394_);
v___x_1399_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1366_, v___f_1365_, v_e_1361_, v___x_1396_);
v___y_1389_ = v___x_1399_;
goto v___jp_1388_;
}
}
else
{
lean_object* v___x_1400_; 
lean_dec_ref(v_mctx_1394_);
v___x_1400_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_1366_, v___f_1365_, v_e_1361_, v___x_1396_);
v___y_1389_ = v___x_1400_;
goto v___jp_1388_;
}
v___jp_1368_:
{
lean_object* v___x_1371_; lean_object* v_cache_1372_; lean_object* v_zetaDeltaFVarIds_1373_; lean_object* v_postponed_1374_; lean_object* v_diag_1375_; lean_object* v_rewriteFires_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1386_; 
v___x_1371_ = lean_st_ref_take(v___y_1363_);
v_cache_1372_ = lean_ctor_get(v___x_1371_, 1);
v_zetaDeltaFVarIds_1373_ = lean_ctor_get(v___x_1371_, 2);
v_postponed_1374_ = lean_ctor_get(v___x_1371_, 3);
v_diag_1375_ = lean_ctor_get(v___x_1371_, 4);
v_rewriteFires_1376_ = lean_ctor_get(v___x_1371_, 5);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1386_ == 0)
{
lean_object* v_unused_1387_; 
v_unused_1387_ = lean_ctor_get(v___x_1371_, 0);
lean_dec(v_unused_1387_);
v___x_1378_ = v___x_1371_;
v_isShared_1379_ = v_isSharedCheck_1386_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_rewriteFires_1376_);
lean_inc(v_diag_1375_);
lean_inc(v_postponed_1374_);
lean_inc(v_zetaDeltaFVarIds_1373_);
lean_inc(v_cache_1372_);
lean_dec(v___x_1371_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1386_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 0, v_mctx_1370_);
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_mctx_1370_);
lean_ctor_set(v_reuseFailAlloc_1385_, 1, v_cache_1372_);
lean_ctor_set(v_reuseFailAlloc_1385_, 2, v_zetaDeltaFVarIds_1373_);
lean_ctor_set(v_reuseFailAlloc_1385_, 3, v_postponed_1374_);
lean_ctor_set(v_reuseFailAlloc_1385_, 4, v_diag_1375_);
lean_ctor_set(v_reuseFailAlloc_1385_, 5, v_rewriteFires_1376_);
v___x_1381_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1382_ = lean_st_ref_put(v___y_1363_, v___x_1381_);
v___x_1383_ = lean_box(v_fst_1369_);
v___x_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
return v___x_1384_;
}
}
}
v___jp_1388_:
{
lean_object* v_snd_1390_; lean_object* v_fst_1391_; lean_object* v_mctx_1392_; uint8_t v___x_1393_; 
v_snd_1390_ = lean_ctor_get(v___y_1389_, 1);
lean_inc(v_snd_1390_);
v_fst_1391_ = lean_ctor_get(v___y_1389_, 0);
lean_inc(v_fst_1391_);
lean_dec_ref(v___y_1389_);
v_mctx_1392_ = lean_ctor_get(v_snd_1390_, 1);
lean_inc_ref(v_mctx_1392_);
lean_dec(v_snd_1390_);
v___x_1393_ = lean_unbox(v_fst_1391_);
lean_dec(v_fst_1391_);
v_fst_1369_ = v___x_1393_;
v_mctx_1370_ = v_mctx_1392_;
goto v___jp_1368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg___boxed(lean_object* v_e_1401_, lean_object* v_fvarId_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_e_1401_, v_fvarId_1402_, v___y_1403_);
lean_dec(v___y_1403_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2(lean_object* v_e_1406_, lean_object* v_fvarId_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_e_1406_, v_fvarId_1407_, v___y_1409_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___boxed(lean_object* v_e_1414_, lean_object* v_fvarId_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2(v_e_1414_, v_fvarId_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
return v_res_1421_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0(lean_object* v_a_1422_, lean_object* v_x_1423_){
_start:
{
if (lean_obj_tag(v_x_1423_) == 0)
{
uint8_t v___x_1424_; 
v___x_1424_ = 0;
return v___x_1424_;
}
else
{
lean_object* v_head_1425_; lean_object* v_tail_1426_; uint8_t v___x_1427_; 
v_head_1425_ = lean_ctor_get(v_x_1423_, 0);
v_tail_1426_ = lean_ctor_get(v_x_1423_, 1);
v___x_1427_ = lean_nat_dec_eq(v_a_1422_, v_head_1425_);
if (v___x_1427_ == 0)
{
v_x_1423_ = v_tail_1426_;
goto _start;
}
else
{
return v___x_1427_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0___boxed(lean_object* v_a_1429_, lean_object* v_x_1430_){
_start:
{
uint8_t v_res_1431_; lean_object* v_r_1432_; 
v_res_1431_ = l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0(v_a_1429_, v_x_1430_);
lean_dec(v_x_1430_);
lean_dec(v_a_1429_);
v_r_1432_ = lean_box(v_res_1431_);
return v_r_1432_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__0));
v___x_1435_ = l_Lean_stringToMessageData(v___x_1434_);
return v___x_1435_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1437_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__2));
v___x_1438_ = l_Lean_stringToMessageData(v___x_1437_);
return v___x_1438_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; 
v___x_1440_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__4));
v___x_1441_ = l_Lean_stringToMessageData(v___x_1440_);
return v___x_1441_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7(void){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__6));
v___x_1444_ = l_Lean_stringToMessageData(v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(lean_object* v_majorTypeArgs_1445_, lean_object* v_idxPos_1446_, lean_object* v_recursorInfo_1447_, lean_object* v_idx_1448_, lean_object* v_tacticName_1449_, lean_object* v_mvarId_1450_, lean_object* v_majorType_1451_, lean_object* v_n_1452_, lean_object* v_i_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v_zero_1459_; uint8_t v_isZero_1460_; 
v_zero_1459_ = lean_unsigned_to_nat(0u);
v_isZero_1460_ = lean_nat_dec_eq(v_i_1453_, v_zero_1459_);
if (v_isZero_1460_ == 1)
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
lean_dec(v_i_1453_);
lean_dec_ref(v_majorType_1451_);
lean_dec(v_mvarId_1450_);
lean_dec(v_tacticName_1449_);
lean_dec_ref(v_idx_1448_);
v___x_1461_ = lean_box(0);
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1461_);
return v___x_1462_;
}
else
{
lean_object* v_one_1463_; lean_object* v_n_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v_arg_1467_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; lean_object* v___y_1519_; uint8_t v___x_1540_; 
v_one_1463_ = lean_unsigned_to_nat(1u);
v_n_1464_ = lean_nat_sub(v_i_1453_, v_one_1463_);
lean_dec(v_i_1453_);
v___x_1465_ = lean_nat_sub(v_n_1452_, v_n_1464_);
v___x_1466_ = lean_nat_sub(v___x_1465_, v_one_1463_);
lean_dec(v___x_1465_);
v_arg_1467_ = lean_array_fget_borrowed(v_majorTypeArgs_1445_, v___x_1466_);
v___x_1540_ = lean_nat_dec_eq(v___x_1466_, v_idxPos_1446_);
if (v___x_1540_ == 0)
{
uint8_t v___x_1541_; 
v___x_1541_ = lean_expr_eqv(v_arg_1467_, v_idx_1448_);
if (v___x_1541_ == 0)
{
v___y_1516_ = v___y_1454_;
v___y_1517_ = v___y_1455_;
v___y_1518_ = v___y_1456_;
v___y_1519_ = v___y_1457_;
goto v___jp_1515_;
}
else
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1542_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1);
lean_inc_ref(v_idx_1448_);
v___x_1543_ = l_Lean_MessageData_ofExpr(v_idx_1448_);
v___x_1544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1542_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
v___x_1545_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__7);
v___x_1546_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1544_);
lean_ctor_set(v___x_1546_, 1, v___x_1545_);
lean_inc_ref(v_majorType_1451_);
v___x_1547_ = l_Lean_indentExpr(v_majorType_1451_);
v___x_1548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1546_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
v___x_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
lean_inc(v_mvarId_1450_);
lean_inc(v_tacticName_1449_);
v___x_1550_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1449_, v_mvarId_1450_, v___x_1549_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_dec_ref_known(v___x_1550_, 1);
v___y_1516_ = v___y_1454_;
v___y_1517_ = v___y_1455_;
v___y_1518_ = v___y_1456_;
v___y_1519_ = v___y_1457_;
goto v___jp_1515_;
}
else
{
lean_dec(v___x_1466_);
lean_dec(v_n_1464_);
lean_dec_ref(v_majorType_1451_);
lean_dec(v_mvarId_1450_);
lean_dec(v_tacticName_1449_);
lean_dec_ref(v_idx_1448_);
return v___x_1550_;
}
}
}
else
{
v___y_1516_ = v___y_1454_;
v___y_1517_ = v___y_1455_;
v___y_1518_ = v___y_1456_;
v___y_1519_ = v___y_1457_;
goto v___jp_1515_;
}
v___jp_1468_:
{
uint8_t v___x_1473_; 
v___x_1473_ = lean_nat_dec_lt(v_idxPos_1446_, v___x_1466_);
if (v___x_1473_ == 0)
{
lean_dec(v___x_1466_);
v_i_1453_ = v_n_1464_;
goto _start;
}
else
{
lean_object* v_indicesPos_1475_; uint8_t v___x_1476_; 
v_indicesPos_1475_ = lean_ctor_get(v_recursorInfo_1447_, 6);
v___x_1476_ = l_List_elem___at___00Lean_Meta_getMajorTypeIndices_spec__0(v___x_1466_, v_indicesPos_1475_);
if (v___x_1476_ == 0)
{
lean_dec(v___x_1466_);
v_i_1453_ = v_n_1464_;
goto _start;
}
else
{
uint8_t v___x_1478_; 
v___x_1478_ = l_Lean_Expr_isFVar(v_arg_1467_);
if (v___x_1478_ == 0)
{
lean_dec(v___x_1466_);
v_i_1453_ = v_n_1464_;
goto _start;
}
else
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = l_Lean_Expr_fvarId_x21(v_idx_1448_);
v___x_1481_ = l_Lean_FVarId_getDecl___redArg(v___x_1480_, v___y_1469_, v___y_1471_, v___y_1472_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1506_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref_known(v___x_1481_, 1);
v___x_1483_ = l_Lean_Expr_fvarId_x21(v_arg_1467_);
v___x_1484_ = l_Lean_localDeclDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__1___redArg(v_a_1482_, v___x_1483_, v___x_1476_, v___y_1470_);
v_a_1485_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1487_ = v___x_1484_;
v_isShared_1488_ = v_isSharedCheck_1506_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1484_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1506_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
uint8_t v___x_1489_; 
v___x_1489_ = lean_unbox(v_a_1485_);
lean_dec(v_a_1485_);
if (v___x_1489_ == 0)
{
lean_del_object(v___x_1487_);
lean_dec(v___x_1466_);
v_i_1453_ = v_n_1464_;
goto _start;
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___x_1491_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1);
lean_inc_ref(v_idx_1448_);
v___x_1492_ = l_Lean_MessageData_ofExpr(v_idx_1448_);
v___x_1493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1491_);
lean_ctor_set(v___x_1493_, 1, v___x_1492_);
v___x_1494_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__3);
v___x_1495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1493_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
v___x_1496_ = lean_nat_add(v___x_1466_, v_one_1463_);
lean_dec(v___x_1466_);
v___x_1497_ = l_Nat_reprFast(v___x_1496_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set_tag(v___x_1487_, 3);
lean_ctor_set(v___x_1487_, 0, v___x_1497_);
v___x_1499_ = v___x_1487_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1500_ = l_Lean_MessageData_ofFormat(v___x_1499_);
v___x_1501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1495_);
lean_ctor_set(v___x_1501_, 1, v___x_1500_);
v___x_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
lean_inc(v_mvarId_1450_);
lean_inc(v_tacticName_1449_);
v___x_1503_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1449_, v_mvarId_1450_, v___x_1502_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_dec_ref_known(v___x_1503_, 1);
v_i_1453_ = v_n_1464_;
goto _start;
}
else
{
lean_dec(v_n_1464_);
lean_dec_ref(v_majorType_1451_);
lean_dec(v_mvarId_1450_);
lean_dec(v_tacticName_1449_);
lean_dec_ref(v_idx_1448_);
return v___x_1503_;
}
}
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
lean_dec(v___x_1466_);
lean_dec(v_n_1464_);
lean_dec_ref(v_majorType_1451_);
lean_dec(v_mvarId_1450_);
lean_dec(v_tacticName_1449_);
lean_dec_ref(v_idx_1448_);
v_a_1507_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1481_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1481_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
}
}
v___jp_1515_:
{
uint8_t v___x_1520_; 
v___x_1520_ = lean_nat_dec_lt(v___x_1466_, v_idxPos_1446_);
if (v___x_1520_ == 0)
{
v___y_1469_ = v___y_1516_;
v___y_1470_ = v___y_1517_;
v___y_1471_ = v___y_1518_;
v___y_1472_ = v___y_1519_;
goto v___jp_1468_;
}
else
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1539_; 
v___x_1521_ = l_Lean_Expr_fvarId_x21(v_idx_1448_);
lean_inc(v_arg_1467_);
v___x_1522_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_arg_1467_, v___x_1521_, v___y_1517_);
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1539_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1539_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
uint8_t v___x_1527_; 
v___x_1527_ = lean_unbox(v_a_1523_);
lean_dec(v_a_1523_);
if (v___x_1527_ == 0)
{
lean_del_object(v___x_1525_);
v___y_1469_ = v___y_1516_;
v___y_1470_ = v___y_1517_;
v___y_1471_ = v___y_1518_;
v___y_1472_ = v___y_1519_;
goto v___jp_1468_;
}
else
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1536_; 
v___x_1528_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__1);
lean_inc_ref(v_idx_1448_);
v___x_1529_ = l_Lean_MessageData_ofExpr(v_idx_1448_);
v___x_1530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1528_);
lean_ctor_set(v___x_1530_, 1, v___x_1529_);
v___x_1531_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5, &l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5_once, _init_l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___closed__5);
v___x_1532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1530_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
lean_inc_ref(v_majorType_1451_);
v___x_1533_ = l_Lean_indentExpr(v_majorType_1451_);
v___x_1534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1532_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set_tag(v___x_1525_, 1);
lean_ctor_set(v___x_1525_, 0, v___x_1534_);
v___x_1536_ = v___x_1525_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1534_);
v___x_1536_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
lean_object* v___x_1537_; 
lean_inc(v_mvarId_1450_);
lean_inc(v_tacticName_1449_);
v___x_1537_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1449_, v_mvarId_1450_, v___x_1536_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_dec_ref_known(v___x_1537_, 1);
v___y_1469_ = v___y_1516_;
v___y_1470_ = v___y_1517_;
v___y_1471_ = v___y_1518_;
v___y_1472_ = v___y_1519_;
goto v___jp_1468_;
}
else
{
lean_dec(v___x_1466_);
lean_dec(v_n_1464_);
lean_dec_ref(v_majorType_1451_);
lean_dec(v_mvarId_1450_);
lean_dec(v_tacticName_1449_);
lean_dec_ref(v_idx_1448_);
return v___x_1537_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg___boxed(lean_object* v_majorTypeArgs_1551_, lean_object* v_idxPos_1552_, lean_object* v_recursorInfo_1553_, lean_object* v_idx_1554_, lean_object* v_tacticName_1555_, lean_object* v_mvarId_1556_, lean_object* v_majorType_1557_, lean_object* v_n_1558_, lean_object* v_i_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(v_majorTypeArgs_1551_, v_idxPos_1552_, v_recursorInfo_1553_, v_idx_1554_, v_tacticName_1555_, v_mvarId_1556_, v_majorType_1557_, v_n_1558_, v_i_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v_n_1558_);
lean_dec_ref(v_recursorInfo_1553_);
lean_dec(v_idxPos_1552_);
lean_dec_ref(v_majorTypeArgs_1551_);
return v_res_1565_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1567_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__0));
v___x_1568_ = l_Lean_stringToMessageData(v___x_1567_);
return v___x_1568_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1570_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__2));
v___x_1571_ = l_Lean_stringToMessageData(v___x_1570_);
return v___x_1571_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5(void){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__4));
v___x_1574_ = l_Lean_stringToMessageData(v___x_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4(lean_object* v_majorTypeArgs_1575_, lean_object* v_recursorInfo_1576_, lean_object* v_tacticName_1577_, lean_object* v_mvarId_1578_, lean_object* v_majorType_1579_, size_t v_sz_1580_, size_t v_i_1581_, lean_object* v_bs_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_){
_start:
{
uint8_t v___x_1588_; 
v___x_1588_ = lean_usize_dec_lt(v_i_1581_, v_sz_1580_);
if (v___x_1588_ == 0)
{
lean_object* v___x_1589_; 
lean_dec_ref(v_majorType_1579_);
lean_dec(v_mvarId_1578_);
lean_dec(v_tacticName_1577_);
v___x_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1589_, 0, v_bs_1582_);
return v___x_1589_;
}
else
{
lean_object* v_v_1590_; lean_object* v___x_1591_; lean_object* v_bs_x27_1592_; lean_object* v_a_1594_; lean_object* v___x_1599_; uint8_t v___x_1600_; 
v_v_1590_ = lean_array_uget(v_bs_1582_, v_i_1581_);
v___x_1591_ = lean_unsigned_to_nat(0u);
v_bs_x27_1592_ = lean_array_uset(v_bs_1582_, v_i_1581_, v___x_1591_);
v___x_1599_ = lean_array_get_size(v_majorTypeArgs_1575_);
v___x_1600_ = lean_nat_dec_le(v___x_1599_, v_v_1590_);
if (v___x_1600_ == 0)
{
lean_object* v_idx_1601_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; uint8_t v___x_1616_; 
v_idx_1601_ = lean_array_fget_borrowed(v_majorTypeArgs_1575_, v_v_1590_);
v___x_1616_ = l_Lean_Expr_isFVar(v_idx_1601_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1617_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__1);
lean_inc(v_idx_1601_);
v___x_1618_ = l_Lean_MessageData_ofExpr(v_idx_1601_);
v___x_1619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1617_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__3);
v___x_1621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1619_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
lean_inc_ref(v_majorType_1579_);
v___x_1622_ = l_Lean_indentExpr(v_majorType_1579_);
v___x_1623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
lean_inc(v_mvarId_1578_);
lean_inc(v_tacticName_1577_);
v___x_1625_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1577_, v_mvarId_1578_, v___x_1624_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_dec_ref_known(v___x_1625_, 1);
v___y_1603_ = v___y_1583_;
v___y_1604_ = v___y_1584_;
v___y_1605_ = v___y_1585_;
v___y_1606_ = v___y_1586_;
goto v___jp_1602_;
}
else
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
lean_dec_ref(v_bs_x27_1592_);
lean_dec(v_v_1590_);
lean_dec_ref(v_majorType_1579_);
lean_dec(v_mvarId_1578_);
lean_dec(v_tacticName_1577_);
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
}
else
{
v___y_1603_ = v___y_1583_;
v___y_1604_ = v___y_1584_;
v___y_1605_ = v___y_1585_;
v___y_1606_ = v___y_1586_;
goto v___jp_1602_;
}
v___jp_1602_:
{
lean_object* v___x_1607_; 
lean_inc_ref(v_majorType_1579_);
lean_inc(v_mvarId_1578_);
lean_inc(v_tacticName_1577_);
lean_inc(v_idx_1601_);
v___x_1607_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(v_majorTypeArgs_1575_, v_v_1590_, v_recursorInfo_1576_, v_idx_1601_, v_tacticName_1577_, v_mvarId_1578_, v_majorType_1579_, v___x_1599_, v___x_1599_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_);
lean_dec(v_v_1590_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_dec_ref_known(v___x_1607_, 1);
lean_inc(v_idx_1601_);
v_a_1594_ = v_idx_1601_;
goto v___jp_1593_;
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec_ref(v_bs_x27_1592_);
lean_dec_ref(v_majorType_1579_);
lean_dec(v_mvarId_1578_);
lean_dec(v_tacticName_1577_);
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1607_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1607_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
}
else
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
lean_dec(v_v_1590_);
v___x_1634_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5);
lean_inc_ref(v_majorType_1579_);
v___x_1635_ = l_Lean_indentExpr(v_majorType_1579_);
v___x_1636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1634_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1636_);
lean_inc(v_mvarId_1578_);
lean_inc(v_tacticName_1577_);
v___x_1638_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1577_, v_mvarId_1578_, v___x_1637_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1639_);
lean_dec_ref_known(v___x_1638_, 1);
v_a_1594_ = v_a_1639_;
goto v___jp_1593_;
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec_ref(v_bs_x27_1592_);
lean_dec_ref(v_majorType_1579_);
lean_dec(v_mvarId_1578_);
lean_dec(v_tacticName_1577_);
v_a_1640_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1638_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1638_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
v___jp_1593_:
{
size_t v___x_1595_; size_t v___x_1596_; lean_object* v___x_1597_; 
v___x_1595_ = ((size_t)1ULL);
v___x_1596_ = lean_usize_add(v_i_1581_, v___x_1595_);
v___x_1597_ = lean_array_uset(v_bs_x27_1592_, v_i_1581_, v_a_1594_);
v_i_1581_ = v___x_1596_;
v_bs_1582_ = v___x_1597_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___boxed(lean_object* v_majorTypeArgs_1648_, lean_object* v_recursorInfo_1649_, lean_object* v_tacticName_1650_, lean_object* v_mvarId_1651_, lean_object* v_majorType_1652_, lean_object* v_sz_1653_, lean_object* v_i_1654_, lean_object* v_bs_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
size_t v_sz_boxed_1661_; size_t v_i_boxed_1662_; lean_object* v_res_1663_; 
v_sz_boxed_1661_ = lean_unbox_usize(v_sz_1653_);
lean_dec(v_sz_1653_);
v_i_boxed_1662_ = lean_unbox_usize(v_i_1654_);
lean_dec(v_i_1654_);
v_res_1663_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4(v_majorTypeArgs_1648_, v_recursorInfo_1649_, v_tacticName_1650_, v_mvarId_1651_, v_majorType_1652_, v_sz_boxed_1661_, v_i_boxed_1662_, v_bs_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec_ref(v_recursorInfo_1649_);
lean_dec_ref(v_majorTypeArgs_1648_);
return v_res_1663_;
}
}
static lean_object* _init_l_Lean_Meta_getMajorTypeIndices___closed__0(void){
_start:
{
lean_object* v___x_1664_; lean_object* v_dummy_1665_; 
v___x_1664_ = lean_box(0);
v_dummy_1665_ = l_Lean_Expr_sort___override(v___x_1664_);
return v_dummy_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorTypeIndices(lean_object* v_mvarId_1666_, lean_object* v_tacticName_1667_, lean_object* v_recursorInfo_1668_, lean_object* v_majorType_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_indicesPos_1675_; lean_object* v_nargs_1676_; lean_object* v_dummy_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v_majorTypeArgs_1681_; lean_object* v___x_1682_; size_t v_sz_1683_; size_t v___x_1684_; lean_object* v___x_1685_; 
v_indicesPos_1675_ = lean_ctor_get(v_recursorInfo_1668_, 6);
v_nargs_1676_ = l_Lean_Expr_getAppNumArgs(v_majorType_1669_);
v_dummy_1677_ = lean_obj_once(&l_Lean_Meta_getMajorTypeIndices___closed__0, &l_Lean_Meta_getMajorTypeIndices___closed__0_once, _init_l_Lean_Meta_getMajorTypeIndices___closed__0);
lean_inc(v_nargs_1676_);
v___x_1678_ = lean_mk_array(v_nargs_1676_, v_dummy_1677_);
v___x_1679_ = lean_unsigned_to_nat(1u);
v___x_1680_ = lean_nat_sub(v_nargs_1676_, v___x_1679_);
lean_dec(v_nargs_1676_);
lean_inc_ref(v_majorType_1669_);
v_majorTypeArgs_1681_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_majorType_1669_, v___x_1678_, v___x_1680_);
lean_inc(v_indicesPos_1675_);
v___x_1682_ = lean_array_mk(v_indicesPos_1675_);
v_sz_1683_ = lean_array_size(v___x_1682_);
v___x_1684_ = ((size_t)0ULL);
v___x_1685_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4(v_majorTypeArgs_1681_, v_recursorInfo_1668_, v_tacticName_1667_, v_mvarId_1666_, v_majorType_1669_, v_sz_1683_, v___x_1684_, v___x_1682_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
lean_dec_ref(v_recursorInfo_1668_);
lean_dec_ref(v_majorTypeArgs_1681_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMajorTypeIndices___boxed(lean_object* v_mvarId_1686_, lean_object* v_tacticName_1687_, lean_object* v_recursorInfo_1688_, lean_object* v_majorType_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lean_Meta_getMajorTypeIndices(v_mvarId_1686_, v_tacticName_1687_, v_recursorInfo_1688_, v_majorType_1689_, v_a_1690_, v_a_1691_, v_a_1692_, v_a_1693_);
lean_dec(v_a_1693_);
lean_dec_ref(v_a_1692_);
lean_dec(v_a_1691_);
lean_dec_ref(v_a_1690_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3(lean_object* v_majorTypeArgs_1696_, lean_object* v_idxPos_1697_, lean_object* v_recursorInfo_1698_, lean_object* v_idx_1699_, lean_object* v_tacticName_1700_, lean_object* v_mvarId_1701_, lean_object* v_majorType_1702_, lean_object* v_n_1703_, lean_object* v_i_1704_, lean_object* v_a_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___redArg(v_majorTypeArgs_1696_, v_idxPos_1697_, v_recursorInfo_1698_, v_idx_1699_, v_tacticName_1700_, v_mvarId_1701_, v_majorType_1702_, v_n_1703_, v_i_1704_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3___boxed(lean_object* v_majorTypeArgs_1712_, lean_object* v_idxPos_1713_, lean_object* v_recursorInfo_1714_, lean_object* v_idx_1715_, lean_object* v_tacticName_1716_, lean_object* v_mvarId_1717_, lean_object* v_majorType_1718_, lean_object* v_n_1719_, lean_object* v_i_1720_, lean_object* v_a_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_getMajorTypeIndices_spec__3(v_majorTypeArgs_1712_, v_idxPos_1713_, v_recursorInfo_1714_, v_idx_1715_, v_tacticName_1716_, v_mvarId_1717_, v_majorType_1718_, v_n_1719_, v_i_1720_, v_a_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
lean_dec(v_n_1719_);
lean_dec_ref(v_recursorInfo_1714_);
lean_dec(v_idxPos_1713_);
lean_dec_ref(v_majorTypeArgs_1712_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(lean_object* v_name_1728_, lean_object* v_msg_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v_ref_1735_; lean_object* v_msg_1736_; lean_object* v___x_1737_; lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1746_; 
v_ref_1735_ = lean_ctor_get(v___y_1732_, 2);
v_msg_1736_ = l_Lean_MessageData_tagWithErrorName(v_msg_1729_, v_name_1728_);
v___x_1737_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1_spec__2(v_msg_1736_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1740_ = v___x_1737_;
v_isShared_1741_ = v_isSharedCheck_1746_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1737_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1746_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1742_; lean_object* v___x_1744_; 
lean_inc(v_ref_1735_);
v___x_1742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1742_, 0, v_ref_1735_);
lean_ctor_set(v___x_1742_, 1, v_a_1738_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set_tag(v___x_1740_, 1);
lean_ctor_set(v___x_1740_, 0, v___x_1742_);
v___x_1744_ = v___x_1740_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___x_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg___boxed(lean_object* v_name_1747_, lean_object* v_msg_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(v_name_1747_, v_msg_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(lean_object* v_a_1755_, lean_object* v___x_1756_, lean_object* v_tacticName_1757_, lean_object* v_mvarId_1758_, lean_object* v_x_1759_, lean_object* v_x_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
if (lean_obj_tag(v_x_1760_) == 0)
{
lean_object* v___x_1766_; 
lean_dec(v_mvarId_1758_);
lean_dec(v_tacticName_1757_);
lean_dec(v_a_1755_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v_x_1759_);
return v___x_1766_;
}
else
{
lean_object* v_head_1767_; 
v_head_1767_ = lean_ctor_get(v_x_1760_, 0);
if (lean_obj_tag(v_head_1767_) == 0)
{
lean_object* v_tail_1768_; lean_object* v_fst_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1780_; 
v_tail_1768_ = lean_ctor_get(v_x_1760_, 1);
v_fst_1769_ = lean_ctor_get(v_x_1759_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1780_ == 0)
{
lean_object* v_unused_1781_; 
v_unused_1781_ = lean_ctor_get(v_x_1759_, 1);
lean_dec(v_unused_1781_);
v___x_1771_ = v_x_1759_;
v_isShared_1772_ = v_isSharedCheck_1780_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_fst_1769_);
lean_dec(v_x_1759_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1780_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1773_; uint8_t v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1777_; 
lean_inc(v_a_1755_);
v___x_1773_ = lean_array_push(v_fst_1769_, v_a_1755_);
v___x_1774_ = 1;
v___x_1775_ = lean_box(v___x_1774_);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 1, v___x_1775_);
lean_ctor_set(v___x_1771_, 0, v___x_1773_);
v___x_1777_ = v___x_1771_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1773_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v___x_1775_);
v___x_1777_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
v_x_1759_ = v___x_1777_;
v_x_1760_ = v_tail_1768_;
goto _start;
}
}
}
else
{
lean_object* v_tail_1782_; lean_object* v_fst_1783_; lean_object* v_snd_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1801_; 
v_tail_1782_ = lean_ctor_get(v_x_1760_, 1);
v_fst_1783_ = lean_ctor_get(v_x_1759_, 0);
v_snd_1784_ = lean_ctor_get(v_x_1759_, 1);
v_isSharedCheck_1801_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1786_ = v_x_1759_;
v_isShared_1787_ = v_isSharedCheck_1801_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_snd_1784_);
lean_inc(v_fst_1783_);
lean_dec(v_x_1759_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1801_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v_idx_1788_; lean_object* v___x_1789_; uint8_t v___x_1790_; 
v_idx_1788_ = lean_ctor_get(v_head_1767_, 0);
v___x_1789_ = lean_array_get_size(v___x_1756_);
v___x_1790_ = lean_nat_dec_le(v___x_1789_, v_idx_1788_);
if (v___x_1790_ == 0)
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1794_; 
v___x_1791_ = lean_array_fget_borrowed(v___x_1756_, v_idx_1788_);
lean_inc(v___x_1791_);
v___x_1792_ = lean_array_push(v_fst_1783_, v___x_1791_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 0, v___x_1792_);
v___x_1794_ = v___x_1786_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1792_);
lean_ctor_set(v_reuseFailAlloc_1796_, 1, v_snd_1784_);
v___x_1794_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
v_x_1759_ = v___x_1794_;
v_x_1760_ = v_tail_1782_;
goto _start;
}
}
else
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
lean_del_object(v___x_1786_);
lean_dec(v_snd_1784_);
lean_dec(v_fst_1783_);
v___x_1797_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__9);
lean_inc(v_mvarId_1758_);
lean_inc(v_tacticName_1757_);
v___x_1798_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1757_, v_mvarId_1758_, v___x_1797_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1798_, 1);
v_x_1759_ = v_a_1799_;
v_x_1760_ = v_tail_1782_;
goto _start;
}
else
{
lean_dec(v_mvarId_1758_);
lean_dec(v_tacticName_1757_);
lean_dec(v_a_1755_);
return v___x_1798_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0___boxed(lean_object* v_a_1802_, lean_object* v___x_1803_, lean_object* v_tacticName_1804_, lean_object* v_mvarId_1805_, lean_object* v_x_1806_, lean_object* v_x_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(v_a_1802_, v___x_1803_, v_tacticName_1804_, v_mvarId_1805_, v_x_1806_, v_x_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
lean_dec(v___y_1809_);
lean_dec_ref(v___y_1808_);
lean_dec(v_x_1807_);
lean_dec_ref(v___x_1803_);
return v_res_1813_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8(void){
_start:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1829_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__7));
v___x_1830_ = l_Lean_stringToMessageData(v___x_1829_);
return v___x_1830_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10(void){
_start:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1832_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__9));
v___x_1833_ = l_Lean_stringToMessageData(v___x_1832_);
return v___x_1833_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13(void){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__12));
v___x_1838_ = l_Lean_MessageData_ofFormat(v___x_1837_);
return v___x_1838_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14(void){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__13);
v___x_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1840_, 0, v___x_1839_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2(lean_object* v_recursorInfo_1841_, lean_object* v_a_1842_, lean_object* v_tacticName_1843_, lean_object* v_mvarId_1844_, lean_object* v_indices_1845_, lean_object* v_a_1846_, lean_object* v_major_1847_, lean_object* v_x_1848_, lean_object* v_x_1849_, lean_object* v_x_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
if (lean_obj_tag(v_x_1848_) == 5)
{
lean_object* v_fn_1856_; lean_object* v_arg_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v_fn_1856_ = lean_ctor_get(v_x_1848_, 0);
lean_inc_ref(v_fn_1856_);
v_arg_1857_ = lean_ctor_get(v_x_1848_, 1);
lean_inc_ref(v_arg_1857_);
lean_dec_ref_known(v_x_1848_, 2);
v___x_1858_ = lean_array_set(v_x_1849_, v_x_1850_, v_arg_1857_);
v___x_1859_ = lean_unsigned_to_nat(1u);
v___x_1860_ = lean_nat_sub(v_x_1850_, v___x_1859_);
lean_dec(v_x_1850_);
v_x_1848_ = v_fn_1856_;
v_x_1849_ = v___x_1858_;
v_x_1850_ = v___x_1860_;
goto _start;
}
else
{
lean_dec(v_x_1850_);
if (lean_obj_tag(v_x_1848_) == 4)
{
lean_object* v_us_1862_; lean_object* v_recursorName_1863_; lean_object* v_univLevelPos_1864_; uint8_t v_depElim_1865_; lean_object* v_paramsPos_1866_; lean_object* v___x_1867_; uint8_t v___x_1868_; lean_object* v___y_1870_; lean_object* v_motive_1871_; lean_object* v___y_1872_; lean_object* v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v_us_1862_ = lean_ctor_get(v_x_1848_, 1);
lean_inc(v_us_1862_);
lean_dec_ref_known(v_x_1848_, 2);
v_recursorName_1863_ = lean_ctor_get(v_recursorInfo_1841_, 0);
lean_inc(v_recursorName_1863_);
v_univLevelPos_1864_ = lean_ctor_get(v_recursorInfo_1841_, 2);
lean_inc(v_univLevelPos_1864_);
v_depElim_1865_ = lean_ctor_get_uint8(v_recursorInfo_1841_, sizeof(void*)*8);
v_paramsPos_1866_ = lean_ctor_get(v_recursorInfo_1841_, 5);
lean_inc(v_paramsPos_1866_);
lean_dec_ref(v_recursorInfo_1841_);
v___x_1867_ = lean_array_mk(v_us_1862_);
v___x_1868_ = 0;
v___x_1888_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1));
lean_inc(v_mvarId_1844_);
lean_inc(v_tacticName_1843_);
lean_inc(v_a_1842_);
v___x_1889_ = l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(v_a_1842_, v___x_1867_, v_tacticName_1843_, v_mvarId_1844_, v___x_1888_, v_univLevelPos_1864_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
lean_dec(v_univLevelPos_1864_);
lean_dec_ref(v___x_1867_);
if (lean_obj_tag(v___x_1889_) == 0)
{
lean_object* v_a_1890_; lean_object* v_fst_1891_; lean_object* v_snd_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1936_; 
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_a_1890_);
lean_dec_ref_known(v___x_1889_, 1);
v_fst_1891_ = lean_ctor_get(v_a_1890_, 0);
v_snd_1892_ = lean_ctor_get(v_a_1890_, 1);
v_isSharedCheck_1936_ = !lean_is_exclusive(v_a_1890_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1894_ = v_a_1890_;
v_isShared_1895_ = v_isSharedCheck_1936_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_snd_1892_);
lean_inc(v_fst_1891_);
lean_dec(v_a_1890_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1936_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; uint8_t v___x_1916_; 
v___x_1916_ = lean_unbox(v_snd_1892_);
lean_dec(v_snd_1892_);
if (v___x_1916_ == 0)
{
uint8_t v___x_1917_; 
v___x_1917_ = l_Lean_Level_isZero(v_a_1842_);
lean_dec(v_a_1842_);
if (v___x_1917_ == 0)
{
lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1922_; 
lean_dec(v_fst_1891_);
lean_dec(v_paramsPos_1866_);
lean_dec_ref(v_x_1849_);
lean_dec_ref(v_major_1847_);
lean_dec_ref(v_a_1846_);
v___x_1918_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6));
v___x_1919_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8);
v___x_1920_ = l_Lean_MessageData_ofName(v_recursorName_1863_);
if (v_isShared_1895_ == 0)
{
lean_ctor_set_tag(v___x_1894_, 7);
lean_ctor_set(v___x_1894_, 1, v___x_1920_);
lean_ctor_set(v___x_1894_, 0, v___x_1919_);
v___x_1922_ = v___x_1894_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1919_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v_a_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1934_; 
v___x_1923_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10);
v___x_1924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1922_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = l_Lean_Meta_mkTacticExMsg(v_tacticName_1843_, v_mvarId_1844_, v___x_1924_);
v___x_1926_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(v___x_1918_, v___x_1925_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1929_ = v___x_1926_;
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_a_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1934_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1932_; 
if (v_isShared_1930_ == 0)
{
v___x_1932_ = v___x_1929_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_a_1927_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
}
else
{
lean_del_object(v___x_1894_);
lean_dec(v_tacticName_1843_);
v___y_1897_ = v___y_1851_;
v___y_1898_ = v___y_1852_;
v___y_1899_ = v___y_1853_;
v___y_1900_ = v___y_1854_;
goto v___jp_1896_;
}
}
else
{
lean_del_object(v___x_1894_);
lean_dec(v_tacticName_1843_);
lean_dec(v_a_1842_);
v___y_1897_ = v___y_1851_;
v___y_1898_ = v___y_1852_;
v___y_1899_ = v___y_1853_;
v___y_1900_ = v___y_1854_;
goto v___jp_1896_;
}
v___jp_1896_:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1901_ = lean_array_to_list(v_fst_1891_);
v___x_1902_ = l_Lean_mkConst(v_recursorName_1863_, v___x_1901_);
v___x_1903_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(v_mvarId_1844_, v_x_1849_, v_paramsPos_1866_, v___x_1902_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
lean_dec_ref(v_x_1849_);
if (lean_obj_tag(v___x_1903_) == 0)
{
if (v_depElim_1865_ == 0)
{
lean_object* v_a_1904_; 
lean_dec_ref(v_major_1847_);
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_a_1904_);
lean_dec_ref_known(v___x_1903_, 1);
v___y_1870_ = v_a_1904_;
v_motive_1871_ = v_a_1846_;
v___y_1872_ = v___y_1897_;
v___y_1873_ = v___y_1898_;
v___y_1874_ = v___y_1899_;
v___y_1875_ = v___y_1900_;
goto v___jp_1869_;
}
else
{
lean_object* v_a_1905_; lean_object* v___x_1906_; 
v_a_1905_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_a_1905_);
lean_dec_ref_known(v___x_1903_, 1);
lean_inc(v___y_1900_);
lean_inc_ref(v___y_1899_);
lean_inc(v___y_1898_);
lean_inc_ref(v___y_1897_);
lean_inc_ref(v_major_1847_);
v___x_1906_ = lean_infer_type(v_major_1847_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_a_1907_);
lean_dec_ref_known(v___x_1906_, 1);
v___x_1908_ = lean_unsigned_to_nat(1u);
v___x_1909_ = lean_mk_empty_array_with_capacity(v___x_1908_);
v___x_1910_ = lean_array_push(v___x_1909_, v_major_1847_);
v___x_1911_ = l_Lean_Expr_abstractM(v_a_1846_, v___x_1910_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
lean_dec_ref(v___x_1910_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; lean_object* v___x_1915_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
v___x_1913_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3));
v___x_1914_ = 0;
v___x_1915_ = l_Lean_mkLambda(v___x_1913_, v___x_1914_, v_a_1907_, v_a_1912_);
v___y_1870_ = v_a_1905_;
v_motive_1871_ = v___x_1915_;
v___y_1872_ = v___y_1897_;
v___y_1873_ = v___y_1898_;
v___y_1874_ = v___y_1899_;
v___y_1875_ = v___y_1900_;
goto v___jp_1869_;
}
else
{
lean_dec(v_a_1907_);
lean_dec(v_a_1905_);
return v___x_1911_;
}
}
else
{
lean_dec(v_a_1905_);
lean_dec_ref(v_major_1847_);
lean_dec_ref(v_a_1846_);
return v___x_1906_;
}
}
}
else
{
lean_dec_ref(v_major_1847_);
lean_dec_ref(v_a_1846_);
return v___x_1903_;
}
}
}
}
else
{
lean_object* v_a_1937_; lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
lean_dec(v_paramsPos_1866_);
lean_dec(v_recursorName_1863_);
lean_dec_ref(v_x_1849_);
lean_dec_ref(v_major_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_mvarId_1844_);
lean_dec(v_tacticName_1843_);
lean_dec(v_a_1842_);
v_a_1937_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1939_ = v___x_1889_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_inc(v_a_1937_);
lean_dec(v___x_1889_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1937_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
v___jp_1869_:
{
uint8_t v___x_1876_; uint8_t v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = 1;
v___x_1877_ = 1;
v___x_1878_ = l_Lean_Meta_mkLambdaFVars(v_indices_1845_, v_motive_1871_, v___x_1868_, v___x_1876_, v___x_1868_, v___x_1876_, v___x_1877_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1887_; 
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1881_ = v___x_1878_;
v_isShared_1882_ = v_isSharedCheck_1887_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1878_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1887_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1883_; lean_object* v___x_1885_; 
v___x_1883_ = l_Lean_Expr_app___override(v___y_1870_, v_a_1879_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 0, v___x_1883_);
v___x_1885_ = v___x_1881_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v___x_1883_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
else
{
lean_dec_ref(v___y_1870_);
return v___x_1878_;
}
}
}
else
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
lean_dec_ref(v_x_1849_);
lean_dec_ref(v_x_1848_);
lean_dec_ref(v_major_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_a_1842_);
lean_dec_ref(v_recursorInfo_1841_);
v___x_1945_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14);
v___x_1946_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1843_, v_mvarId_1844_, v___x_1945_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
return v___x_1946_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___boxed(lean_object* v_recursorInfo_1947_, lean_object* v_a_1948_, lean_object* v_tacticName_1949_, lean_object* v_mvarId_1950_, lean_object* v_indices_1951_, lean_object* v_a_1952_, lean_object* v_major_1953_, lean_object* v_x_1954_, lean_object* v_x_1955_, lean_object* v_x_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2(v_recursorInfo_1947_, v_a_1948_, v_tacticName_1949_, v_mvarId_1950_, v_indices_1951_, v_a_1952_, v_major_1953_, v_x_1954_, v_x_1955_, v_x_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
lean_dec(v___y_1960_);
lean_dec_ref(v___y_1959_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec_ref(v_indices_1951_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2(lean_object* v_a_1963_, lean_object* v_tacticName_1964_, lean_object* v_mvarId_1965_, lean_object* v_recursorInfo_1966_, lean_object* v_indices_1967_, lean_object* v_a_1968_, lean_object* v_major_1969_, lean_object* v_x_1970_, lean_object* v_x_1971_, lean_object* v_x_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
if (lean_obj_tag(v_x_1970_) == 5)
{
lean_object* v_fn_1978_; lean_object* v_arg_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v_fn_1978_ = lean_ctor_get(v_x_1970_, 0);
lean_inc_ref(v_fn_1978_);
v_arg_1979_ = lean_ctor_get(v_x_1970_, 1);
lean_inc_ref(v_arg_1979_);
lean_dec_ref_known(v_x_1970_, 2);
v___x_1980_ = lean_array_set(v_x_1971_, v_x_1972_, v_arg_1979_);
v___x_1981_ = lean_unsigned_to_nat(1u);
v___x_1982_ = lean_nat_sub(v_x_1972_, v___x_1981_);
v___x_1983_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2(v_recursorInfo_1966_, v_a_1963_, v_tacticName_1964_, v_mvarId_1965_, v_indices_1967_, v_a_1968_, v_major_1969_, v_fn_1978_, v___x_1980_, v___x_1982_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_);
return v___x_1983_;
}
else
{
if (lean_obj_tag(v_x_1970_) == 4)
{
lean_object* v_us_1984_; lean_object* v_recursorName_1985_; lean_object* v_univLevelPos_1986_; uint8_t v_depElim_1987_; lean_object* v_paramsPos_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; lean_object* v___y_1992_; lean_object* v_motive_1993_; lean_object* v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; lean_object* v___y_1997_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v_us_1984_ = lean_ctor_get(v_x_1970_, 1);
lean_inc(v_us_1984_);
lean_dec_ref_known(v_x_1970_, 2);
v_recursorName_1985_ = lean_ctor_get(v_recursorInfo_1966_, 0);
lean_inc(v_recursorName_1985_);
v_univLevelPos_1986_ = lean_ctor_get(v_recursorInfo_1966_, 2);
lean_inc(v_univLevelPos_1986_);
v_depElim_1987_ = lean_ctor_get_uint8(v_recursorInfo_1966_, sizeof(void*)*8);
v_paramsPos_1988_ = lean_ctor_get(v_recursorInfo_1966_, 5);
lean_inc(v_paramsPos_1988_);
lean_dec_ref(v_recursorInfo_1966_);
v___x_1989_ = lean_array_mk(v_us_1984_);
v___x_1990_ = 0;
v___x_2010_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__1));
lean_inc(v_mvarId_1965_);
lean_inc(v_tacticName_1964_);
lean_inc(v_a_1963_);
v___x_2011_ = l_List_foldlM___at___00Lean_Meta_mkRecursorAppPrefix_spec__0(v_a_1963_, v___x_1989_, v_tacticName_1964_, v_mvarId_1965_, v___x_2010_, v_univLevelPos_1986_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_);
lean_dec(v_univLevelPos_1986_);
lean_dec_ref(v___x_1989_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; lean_object* v_fst_2013_; lean_object* v_snd_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2058_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref_known(v___x_2011_, 1);
v_fst_2013_ = lean_ctor_get(v_a_2012_, 0);
v_snd_2014_ = lean_ctor_get(v_a_2012_, 1);
v_isSharedCheck_2058_ = !lean_is_exclusive(v_a_2012_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2016_ = v_a_2012_;
v_isShared_2017_ = v_isSharedCheck_2058_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_snd_2014_);
lean_inc(v_fst_2013_);
lean_dec(v_a_2012_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2058_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___y_2019_; lean_object* v___y_2020_; lean_object* v___y_2021_; lean_object* v___y_2022_; uint8_t v___x_2038_; 
v___x_2038_ = lean_unbox(v_snd_2014_);
lean_dec(v_snd_2014_);
if (v___x_2038_ == 0)
{
uint8_t v___x_2039_; 
v___x_2039_ = l_Lean_Level_isZero(v_a_1963_);
lean_dec(v_a_1963_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2044_; 
lean_dec(v_fst_2013_);
lean_dec(v_paramsPos_1988_);
lean_dec_ref(v_x_1971_);
lean_dec_ref(v_major_1969_);
lean_dec_ref(v_a_1968_);
v___x_2040_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__6));
v___x_2041_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__8);
v___x_2042_ = l_Lean_MessageData_ofName(v_recursorName_1985_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set_tag(v___x_2016_, 7);
lean_ctor_set(v___x_2016_, 1, v___x_2042_);
lean_ctor_set(v___x_2016_, 0, v___x_2041_);
v___x_2044_ = v___x_2016_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___x_2041_);
lean_ctor_set(v_reuseFailAlloc_2057_, 1, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
v___x_2045_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__10);
v___x_2046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2044_);
lean_ctor_set(v___x_2046_, 1, v___x_2045_);
v___x_2047_ = l_Lean_Meta_mkTacticExMsg(v_tacticName_1964_, v_mvarId_1965_, v___x_2046_);
v___x_2048_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(v___x_2040_, v___x_2047_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_);
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2048_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2048_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
else
{
lean_del_object(v___x_2016_);
lean_dec(v_tacticName_1964_);
v___y_2019_ = v___y_1973_;
v___y_2020_ = v___y_1974_;
v___y_2021_ = v___y_1975_;
v___y_2022_ = v___y_1976_;
goto v___jp_2018_;
}
}
else
{
lean_del_object(v___x_2016_);
lean_dec(v_tacticName_1964_);
lean_dec(v_a_1963_);
v___y_2019_ = v___y_1973_;
v___y_2020_ = v___y_1974_;
v___y_2021_ = v___y_1975_;
v___y_2022_ = v___y_1976_;
goto v___jp_2018_;
}
v___jp_2018_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2023_ = lean_array_to_list(v_fst_2013_);
v___x_2024_ = l_Lean_mkConst(v_recursorName_1985_, v___x_2023_);
v___x_2025_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams(v_mvarId_1965_, v_x_1971_, v_paramsPos_1988_, v___x_2024_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_);
lean_dec_ref(v_x_1971_);
if (lean_obj_tag(v___x_2025_) == 0)
{
if (v_depElim_1987_ == 0)
{
lean_object* v_a_2026_; 
lean_dec_ref(v_major_1969_);
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
v___y_1992_ = v_a_2026_;
v_motive_1993_ = v_a_1968_;
v___y_1994_ = v___y_2019_;
v___y_1995_ = v___y_2020_;
v___y_1996_ = v___y_2021_;
v___y_1997_ = v___y_2022_;
goto v___jp_1991_;
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2028_; 
v_a_2027_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2027_);
lean_dec_ref_known(v___x_2025_, 1);
lean_inc(v___y_2022_);
lean_inc_ref(v___y_2021_);
lean_inc(v___y_2020_);
lean_inc_ref(v___y_2019_);
lean_inc_ref(v_major_1969_);
v___x_2028_ = lean_infer_type(v_major_1969_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
lean_dec_ref_known(v___x_2028_, 1);
v___x_2030_ = lean_unsigned_to_nat(1u);
v___x_2031_ = lean_mk_empty_array_with_capacity(v___x_2030_);
v___x_2032_ = lean_array_push(v___x_2031_, v_major_1969_);
v___x_2033_ = l_Lean_Expr_abstractM(v_a_1968_, v___x_2032_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_);
lean_dec_ref(v___x_2032_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref_known(v___x_2033_, 1);
v___x_2035_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__3));
v___x_2036_ = 0;
v___x_2037_ = l_Lean_mkLambda(v___x_2035_, v___x_2036_, v_a_2029_, v_a_2034_);
v___y_1992_ = v_a_2027_;
v_motive_1993_ = v___x_2037_;
v___y_1994_ = v___y_2019_;
v___y_1995_ = v___y_2020_;
v___y_1996_ = v___y_2021_;
v___y_1997_ = v___y_2022_;
goto v___jp_1991_;
}
else
{
lean_dec(v_a_2029_);
lean_dec(v_a_2027_);
return v___x_2033_;
}
}
else
{
lean_dec(v_a_2027_);
lean_dec_ref(v_major_1969_);
lean_dec_ref(v_a_1968_);
return v___x_2028_;
}
}
}
else
{
lean_dec_ref(v_major_1969_);
lean_dec_ref(v_a_1968_);
return v___x_2025_;
}
}
}
}
else
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
lean_dec(v_paramsPos_1988_);
lean_dec(v_recursorName_1985_);
lean_dec_ref(v_x_1971_);
lean_dec_ref(v_major_1969_);
lean_dec_ref(v_a_1968_);
lean_dec(v_mvarId_1965_);
lean_dec(v_tacticName_1964_);
lean_dec(v_a_1963_);
v_a_2059_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2011_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2011_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
v___jp_1991_:
{
uint8_t v___x_1998_; uint8_t v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = 1;
v___x_1999_ = 1;
v___x_2000_ = l_Lean_Meta_mkLambdaFVars(v_indices_1967_, v_motive_1993_, v___x_1990_, v___x_1998_, v___x_1990_, v___x_1998_, v___x_1999_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2009_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2003_ = v___x_2000_;
v_isShared_2004_ = v_isSharedCheck_2009_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_2000_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2009_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2005_ = l_Lean_Expr_app___override(v___y_1992_, v_a_2001_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v___x_2005_);
v___x_2007_ = v___x_2003_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2005_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
else
{
lean_dec_ref(v___y_1992_);
return v___x_2000_;
}
}
}
else
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
lean_dec_ref(v_x_1971_);
lean_dec_ref(v_x_1970_);
lean_dec_ref(v_major_1969_);
lean_dec_ref(v_a_1968_);
lean_dec_ref(v_recursorInfo_1966_);
lean_dec(v_a_1963_);
v___x_2067_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2_spec__2___closed__14);
v___x_2068_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_1964_, v_mvarId_1965_, v___x_2067_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_);
return v___x_2068_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2___boxed(lean_object* v_a_2069_, lean_object* v_tacticName_2070_, lean_object* v_mvarId_2071_, lean_object* v_recursorInfo_2072_, lean_object* v_indices_2073_, lean_object* v_a_2074_, lean_object* v_major_2075_, lean_object* v_x_2076_, lean_object* v_x_2077_, lean_object* v_x_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2(v_a_2069_, v_tacticName_2070_, v_mvarId_2071_, v_recursorInfo_2072_, v_indices_2073_, v_a_2074_, v_major_2075_, v_x_2076_, v_x_2077_, v_x_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_);
lean_dec(v___y_2082_);
lean_dec_ref(v___y_2081_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v_x_2078_);
lean_dec_ref(v_indices_2073_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorAppPrefix(lean_object* v_mvarId_2085_, lean_object* v_tacticName_2086_, lean_object* v_majorFVarId_2087_, lean_object* v_recursorInfo_2088_, lean_object* v_indices_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_){
_start:
{
lean_object* v_major_2095_; lean_object* v___x_2096_; 
lean_inc(v_majorFVarId_2087_);
v_major_2095_ = l_Lean_mkFVar(v_majorFVarId_2087_);
lean_inc(v_mvarId_2085_);
v___x_2096_ = l_Lean_MVarId_getType(v_mvarId_2085_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; lean_object* v___x_2098_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc_n(v_a_2097_, 2);
lean_dec_ref_known(v___x_2096_, 1);
v___x_2098_ = l_Lean_Meta_getLevel(v_a_2097_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
if (lean_obj_tag(v___x_2098_) == 0)
{
lean_object* v_a_2099_; lean_object* v___x_2100_; 
v_a_2099_ = lean_ctor_get(v___x_2098_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2098_, 1);
v___x_2100_ = l_Lean_Meta_normalizeLevel(v_a_2099_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2102_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref_known(v___x_2100_, 1);
v___x_2102_ = l_Lean_FVarId_getDecl___redArg(v_majorFVarId_2087_, v_a_2090_, v_a_2092_, v_a_2093_);
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_object* v_a_2103_; lean_object* v_typeName_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
lean_inc(v_a_2103_);
lean_dec_ref_known(v___x_2102_, 1);
v_typeName_2104_ = lean_ctor_get(v_recursorInfo_2088_, 1);
v___x_2105_ = l_Lean_LocalDecl_type(v_a_2103_);
lean_dec(v_a_2103_);
lean_inc_ref(v___x_2105_);
v___x_2106_ = l_Lean_Meta_whnfUntil(v___x_2105_, v_typeName_2104_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v_a_2107_; 
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_a_2107_);
lean_dec_ref_known(v___x_2106_, 1);
if (lean_obj_tag(v_a_2107_) == 1)
{
lean_object* v_val_2108_; lean_object* v_dummy_2109_; lean_object* v_nargs_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
lean_dec_ref(v___x_2105_);
v_val_2108_ = lean_ctor_get(v_a_2107_, 0);
lean_inc(v_val_2108_);
lean_dec_ref_known(v_a_2107_, 1);
v_dummy_2109_ = lean_obj_once(&l_Lean_Meta_getMajorTypeIndices___closed__0, &l_Lean_Meta_getMajorTypeIndices___closed__0_once, _init_l_Lean_Meta_getMajorTypeIndices___closed__0);
v_nargs_2110_ = l_Lean_Expr_getAppNumArgs(v_val_2108_);
lean_inc(v_nargs_2110_);
v___x_2111_ = lean_mk_array(v_nargs_2110_, v_dummy_2109_);
v___x_2112_ = lean_unsigned_to_nat(1u);
v___x_2113_ = lean_nat_sub(v_nargs_2110_, v___x_2112_);
lean_dec(v_nargs_2110_);
v___x_2114_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_mkRecursorAppPrefix_spec__2(v_a_2101_, v_tacticName_2086_, v_mvarId_2085_, v_recursorInfo_2088_, v_indices_2089_, v_a_2097_, v_major_2095_, v_val_2108_, v___x_2111_, v___x_2113_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
lean_dec(v___x_2113_);
return v___x_2114_;
}
else
{
lean_object* v___x_2115_; 
lean_dec(v_a_2107_);
lean_dec(v_a_2101_);
lean_dec(v_a_2097_);
lean_dec_ref(v_major_2095_);
lean_dec_ref(v_recursorInfo_2088_);
v___x_2115_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(v_tacticName_2086_, v_mvarId_2085_, v___x_2105_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
return v___x_2115_;
}
}
else
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2123_; 
lean_dec_ref(v___x_2105_);
lean_dec(v_a_2101_);
lean_dec(v_a_2097_);
lean_dec_ref(v_major_2095_);
lean_dec_ref(v_recursorInfo_2088_);
lean_dec(v_tacticName_2086_);
lean_dec(v_mvarId_2085_);
v_a_2116_ = lean_ctor_get(v___x_2106_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2106_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2118_ = v___x_2106_;
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v___x_2106_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_a_2116_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec(v_a_2101_);
lean_dec(v_a_2097_);
lean_dec_ref(v_major_2095_);
lean_dec_ref(v_recursorInfo_2088_);
lean_dec(v_tacticName_2086_);
lean_dec(v_mvarId_2085_);
v_a_2124_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2102_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2102_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec(v_a_2097_);
lean_dec_ref(v_major_2095_);
lean_dec_ref(v_recursorInfo_2088_);
lean_dec(v_majorFVarId_2087_);
lean_dec(v_tacticName_2086_);
lean_dec(v_mvarId_2085_);
v_a_2132_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2100_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2100_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_dec(v_a_2097_);
lean_dec_ref(v_major_2095_);
lean_dec_ref(v_recursorInfo_2088_);
lean_dec(v_majorFVarId_2087_);
lean_dec(v_tacticName_2086_);
lean_dec(v_mvarId_2085_);
v_a_2140_ = lean_ctor_get(v___x_2098_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2098_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2098_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2098_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
else
{
lean_dec_ref(v_major_2095_);
lean_dec_ref(v_recursorInfo_2088_);
lean_dec(v_majorFVarId_2087_);
lean_dec(v_tacticName_2086_);
lean_dec(v_mvarId_2085_);
return v___x_2096_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkRecursorAppPrefix___boxed(lean_object* v_mvarId_2148_, lean_object* v_tacticName_2149_, lean_object* v_majorFVarId_2150_, lean_object* v_recursorInfo_2151_, lean_object* v_indices_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l_Lean_Meta_mkRecursorAppPrefix(v_mvarId_2148_, v_tacticName_2149_, v_majorFVarId_2150_, v_recursorInfo_2151_, v_indices_2152_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_);
lean_dec(v_a_2156_);
lean_dec_ref(v_a_2155_);
lean_dec(v_a_2154_);
lean_dec_ref(v_a_2153_);
lean_dec_ref(v_indices_2152_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1(lean_object* v_00_u03b1_2159_, lean_object* v_name_2160_, lean_object* v_msg_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_){
_start:
{
lean_object* v___x_2167_; 
v___x_2167_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___redArg(v_name_2160_, v_msg_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1___boxed(lean_object* v_00_u03b1_2168_, lean_object* v_name_2169_, lean_object* v_msg_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l_Lean_throwNamedError___at___00Lean_Meta_mkRecursorAppPrefix_spec__1(v_00_u03b1_2168_, v_name_2169_, v_msg_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(lean_object* v_mvarId_2177_, lean_object* v_x_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_){
_start:
{
lean_object* v___x_2184_; 
v___x_2184_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2177_, v_x_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2184_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2184_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
v_a_2193_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2195_ = v___x_2184_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2184_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2198_; 
if (v_isShared_2196_ == 0)
{
v___x_2198_ = v___x_2195_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_a_2193_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg___boxed(lean_object* v_mvarId_2201_, lean_object* v_x_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v_res_2208_; 
v_res_2208_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v_mvarId_2201_, v_x_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3(lean_object* v_00_u03b1_2209_, lean_object* v_mvarId_2210_, lean_object* v_x_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v_mvarId_2210_, v_x_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___boxed(lean_object* v_00_u03b1_2218_, lean_object* v_mvarId_2219_, lean_object* v_x_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3(v_00_u03b1_2218_, v_mvarId_2219_, v_x_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(lean_object* v_fst_2227_, lean_object* v_as_2228_, size_t v_sz_2229_, size_t v_i_2230_, lean_object* v_b_2231_){
_start:
{
uint8_t v___x_2232_; 
v___x_2232_ = lean_usize_dec_lt(v_i_2230_, v_sz_2229_);
if (v___x_2232_ == 0)
{
return v_b_2231_;
}
else
{
lean_object* v_fst_2233_; lean_object* v_snd_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2252_; 
v_fst_2233_ = lean_ctor_get(v_b_2231_, 0);
v_snd_2234_ = lean_ctor_get(v_b_2231_, 1);
v_isSharedCheck_2252_ = !lean_is_exclusive(v_b_2231_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2236_ = v_b_2231_;
v_isShared_2237_ = v_isSharedCheck_2252_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_snd_2234_);
lean_inc(v_fst_2233_);
lean_dec(v_b_2231_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2252_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2238_; lean_object* v_a_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2247_; 
v___x_2238_ = lean_box(0);
v_a_2239_ = lean_array_uget_borrowed(v_as_2228_, v_i_2230_);
v___x_2240_ = l_Lean_Expr_fvarId_x21(v_a_2239_);
v___x_2241_ = lean_array_get_borrowed(v___x_2238_, v_fst_2227_, v_snd_2234_);
lean_inc(v___x_2241_);
v___x_2242_ = l_Lean_mkFVar(v___x_2241_);
v___x_2243_ = l_Lean_Meta_FVarSubst_insert(v_fst_2233_, v___x_2240_, v___x_2242_);
v___x_2244_ = lean_unsigned_to_nat(1u);
v___x_2245_ = lean_nat_add(v_snd_2234_, v___x_2244_);
lean_dec(v_snd_2234_);
if (v_isShared_2237_ == 0)
{
lean_ctor_set(v___x_2236_, 1, v___x_2245_);
lean_ctor_set(v___x_2236_, 0, v___x_2243_);
v___x_2247_ = v___x_2236_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v___x_2243_);
lean_ctor_set(v_reuseFailAlloc_2251_, 1, v___x_2245_);
v___x_2247_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
size_t v___x_2248_; size_t v___x_2249_; 
v___x_2248_ = ((size_t)1ULL);
v___x_2249_ = lean_usize_add(v_i_2230_, v___x_2248_);
v_i_2230_ = v___x_2249_;
v_b_2231_ = v___x_2247_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2___boxed(lean_object* v_fst_2253_, lean_object* v_as_2254_, lean_object* v_sz_2255_, lean_object* v_i_2256_, lean_object* v_b_2257_){
_start:
{
size_t v_sz_boxed_2258_; size_t v_i_boxed_2259_; lean_object* v_res_2260_; 
v_sz_boxed_2258_ = lean_unbox_usize(v_sz_2255_);
lean_dec(v_sz_2255_);
v_i_boxed_2259_ = lean_unbox_usize(v_i_2256_);
lean_dec(v_i_2256_);
v_res_2260_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(v_fst_2253_, v_as_2254_, v_sz_boxed_2258_, v_i_boxed_2259_, v_b_2257_);
lean_dec_ref(v_as_2254_);
lean_dec_ref(v_fst_2253_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0(lean_object* v_snd_2261_, lean_object* v___x_2262_, lean_object* v_fst_2263_, lean_object* v_a_2264_, lean_object* v___x_2265_, lean_object* v_givenNames_2266_, lean_object* v_fst_2267_, lean_object* v___x_2268_, lean_object* v_fst_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v___x_2275_; 
lean_inc_ref(v_a_2264_);
lean_inc(v_snd_2261_);
v___x_2275_ = l_Lean_Meta_mkRecursorAppPrefix(v_snd_2261_, v___x_2262_, v_fst_2263_, v_a_2264_, v___x_2265_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
if (lean_obj_tag(v___x_2275_) == 0)
{
lean_object* v_a_2276_; lean_object* v___x_2277_; 
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2276_);
lean_dec_ref_known(v___x_2275_, 1);
v___x_2277_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize(v_snd_2261_, v_givenNames_2266_, v_a_2264_, v_fst_2267_, v___x_2268_, v___x_2265_, v_fst_2269_, v_a_2276_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
lean_dec_ref(v_a_2264_);
return v___x_2277_;
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
lean_dec(v_fst_2269_);
lean_dec_ref(v___x_2268_);
lean_dec_ref(v_a_2264_);
lean_dec(v_snd_2261_);
v_a_2278_ = lean_ctor_get(v___x_2275_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2275_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v___x_2275_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2275_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2278_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0___boxed(lean_object* v_snd_2286_, lean_object* v___x_2287_, lean_object* v_fst_2288_, lean_object* v_a_2289_, lean_object* v___x_2290_, lean_object* v_givenNames_2291_, lean_object* v_fst_2292_, lean_object* v___x_2293_, lean_object* v_fst_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0(v_snd_2286_, v___x_2287_, v_fst_2288_, v_a_2289_, v___x_2290_, v_givenNames_2291_, v_fst_2292_, v___x_2293_, v_fst_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
lean_dec_ref(v_fst_2292_);
lean_dec_ref(v_givenNames_2291_);
lean_dec_ref(v___x_2290_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(size_t v_sz_2301_, size_t v_i_2302_, lean_object* v_bs_2303_){
_start:
{
uint8_t v___x_2304_; 
v___x_2304_ = lean_usize_dec_lt(v_i_2302_, v_sz_2301_);
if (v___x_2304_ == 0)
{
return v_bs_2303_;
}
else
{
lean_object* v_v_2305_; lean_object* v___x_2306_; lean_object* v_bs_x27_2307_; lean_object* v___x_2308_; size_t v___x_2309_; size_t v___x_2310_; lean_object* v___x_2311_; 
v_v_2305_ = lean_array_uget(v_bs_2303_, v_i_2302_);
v___x_2306_ = lean_unsigned_to_nat(0u);
v_bs_x27_2307_ = lean_array_uset(v_bs_2303_, v_i_2302_, v___x_2306_);
v___x_2308_ = l_Lean_Expr_fvarId_x21(v_v_2305_);
lean_dec(v_v_2305_);
v___x_2309_ = ((size_t)1ULL);
v___x_2310_ = lean_usize_add(v_i_2302_, v___x_2309_);
v___x_2311_ = lean_array_uset(v_bs_x27_2307_, v_i_2302_, v___x_2308_);
v_i_2302_ = v___x_2310_;
v_bs_2303_ = v___x_2311_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1___boxed(lean_object* v_sz_2313_, lean_object* v_i_2314_, lean_object* v_bs_2315_){
_start:
{
size_t v_sz_boxed_2316_; size_t v_i_boxed_2317_; lean_object* v_res_2318_; 
v_sz_boxed_2316_ = lean_unbox_usize(v_sz_2313_);
lean_dec(v_sz_2313_);
v_i_boxed_2317_ = lean_unbox_usize(v_i_2314_);
lean_dec(v_i_2314_);
v_res_2318_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(v_sz_boxed_2316_, v_i_boxed_2317_, v_bs_2315_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_induction_spec__0(lean_object* v_majorTypeArgs_2319_, lean_object* v_val_2320_, lean_object* v_mvarId_2321_, lean_object* v_as_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_){
_start:
{
if (lean_obj_tag(v_as_2322_) == 0)
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
lean_dec(v_mvarId_2321_);
lean_dec_ref(v_val_2320_);
v___x_2328_ = lean_box(0);
v___x_2329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2328_);
return v___x_2329_;
}
else
{
lean_object* v_head_2330_; 
v_head_2330_ = lean_ctor_get(v_as_2322_, 0);
lean_inc(v_head_2330_);
if (lean_obj_tag(v_head_2330_) == 0)
{
lean_object* v_tail_2331_; 
v_tail_2331_ = lean_ctor_get(v_as_2322_, 1);
lean_inc(v_tail_2331_);
lean_dec_ref_known(v_as_2322_, 2);
v_as_2322_ = v_tail_2331_;
goto _start;
}
else
{
lean_object* v_tail_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2356_; 
v_tail_2333_ = lean_ctor_get(v_as_2322_, 1);
v_isSharedCheck_2356_ = !lean_is_exclusive(v_as_2322_);
if (v_isSharedCheck_2356_ == 0)
{
lean_object* v_unused_2357_; 
v_unused_2357_ = lean_ctor_get(v_as_2322_, 0);
lean_dec(v_unused_2357_);
v___x_2335_ = v_as_2322_;
v_isShared_2336_ = v_isSharedCheck_2356_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_tail_2333_);
lean_dec(v_as_2322_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2356_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v_val_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2355_; 
v_val_2337_ = lean_ctor_get(v_head_2330_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_head_2330_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2339_ = v_head_2330_;
v_isShared_2340_ = v_isSharedCheck_2355_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_val_2337_);
lean_dec(v_head_2330_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2355_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2341_; uint8_t v___x_2342_; 
v___x_2341_ = lean_array_get_size(v_majorTypeArgs_2319_);
v___x_2342_ = lean_nat_dec_le(v___x_2341_, v_val_2337_);
lean_dec(v_val_2337_);
if (v___x_2342_ == 0)
{
lean_del_object(v___x_2339_);
lean_del_object(v___x_2335_);
v_as_2322_ = v_tail_2333_;
goto _start;
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2348_; 
v___x_2344_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v___x_2345_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_getMajorTypeIndices_spec__4___closed__5);
lean_inc_ref(v_val_2320_);
v___x_2346_ = l_Lean_indentExpr(v_val_2320_);
if (v_isShared_2336_ == 0)
{
lean_ctor_set_tag(v___x_2335_, 7);
lean_ctor_set(v___x_2335_, 1, v___x_2346_);
lean_ctor_set(v___x_2335_, 0, v___x_2345_);
v___x_2348_ = v___x_2335_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2345_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2350_; 
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 0, v___x_2348_);
v___x_2350_ = v___x_2339_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2348_);
v___x_2350_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2351_; 
lean_inc(v_mvarId_2321_);
v___x_2351_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2344_, v_mvarId_2321_, v___x_2350_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_dec_ref_known(v___x_2351_, 1);
v_as_2322_ = v_tail_2333_;
goto _start;
}
else
{
lean_dec(v_tail_2333_);
lean_dec(v_mvarId_2321_);
lean_dec_ref(v_val_2320_);
return v___x_2351_;
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
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_induction_spec__0___boxed(lean_object* v_majorTypeArgs_2358_, lean_object* v_val_2359_, lean_object* v_mvarId_2360_, lean_object* v_as_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l_List_forM___at___00Lean_MVarId_induction_spec__0(v_majorTypeArgs_2358_, v_val_2359_, v_mvarId_2360_, v_as_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
lean_dec(v___y_2363_);
lean_dec_ref(v___y_2362_);
lean_dec_ref(v_majorTypeArgs_2358_);
return v_res_2367_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__0));
v___x_2370_ = l_Lean_stringToMessageData(v___x_2369_);
return v___x_2370_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3(void){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2372_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__2));
v___x_2373_ = l_Lean_stringToMessageData(v___x_2372_);
return v___x_2373_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5(void){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2375_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__4));
v___x_2376_ = l_Lean_stringToMessageData(v___x_2375_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4(lean_object* v_a_2377_, lean_object* v_val_2378_, lean_object* v_mvarId_2379_, lean_object* v_majorFVarId_2380_, lean_object* v_givenNames_2381_, lean_object* v_recursorName_2382_, lean_object* v_x_2383_, lean_object* v_x_2384_, lean_object* v_x_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
if (lean_obj_tag(v_x_2383_) == 5)
{
lean_object* v_fn_2391_; lean_object* v_arg_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v_fn_2391_ = lean_ctor_get(v_x_2383_, 0);
lean_inc_ref(v_fn_2391_);
v_arg_2392_ = lean_ctor_get(v_x_2383_, 1);
lean_inc_ref(v_arg_2392_);
lean_dec_ref_known(v_x_2383_, 2);
v___x_2393_ = lean_array_set(v_x_2384_, v_x_2385_, v_arg_2392_);
v___x_2394_ = lean_unsigned_to_nat(1u);
v___x_2395_ = lean_nat_sub(v_x_2385_, v___x_2394_);
lean_dec(v_x_2385_);
v_x_2383_ = v_fn_2391_;
v_x_2384_ = v___x_2393_;
v_x_2385_ = v___x_2395_;
goto _start;
}
else
{
uint8_t v_depElim_2397_; lean_object* v_paramsPos_2398_; lean_object* v___x_2399_; lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2403_; lean_object* v___y_2404_; lean_object* v___y_2405_; lean_object* v___y_2406_; lean_object* v___y_2407_; size_t v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v_cls_2417_; lean_object* v___x_2418_; 
lean_dec(v_x_2385_);
lean_dec_ref(v_x_2383_);
v_depElim_2397_ = lean_ctor_get_uint8(v_a_2377_, sizeof(void*)*8);
v_paramsPos_2398_ = lean_ctor_get(v_a_2377_, 5);
v___x_2399_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v_cls_2417_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
lean_inc(v_paramsPos_2398_);
lean_inc(v_mvarId_2379_);
lean_inc_ref(v_val_2378_);
v___x_2418_ = l_List_forM___at___00Lean_MVarId_induction_spec__0(v_x_2384_, v_val_2378_, v_mvarId_2379_, v_paramsPos_2398_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_);
lean_dec_ref(v_x_2384_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_object* v___x_2419_; 
lean_dec_ref_known(v___x_2418_, 1);
lean_inc_ref(v_a_2377_);
lean_inc(v_mvarId_2379_);
v___x_2419_ = l_Lean_Meta_getMajorTypeIndices(v_mvarId_2379_, v___x_2399_, v_a_2377_, v_val_2378_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; lean_object* v___y_2422_; lean_object* v___y_2423_; lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___x_2509_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_a_2420_);
lean_dec_ref_known(v___x_2419_, 1);
lean_inc(v_mvarId_2379_);
v___x_2509_ = l_Lean_MVarId_getType(v_mvarId_2379_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_);
if (lean_obj_tag(v___x_2509_) == 0)
{
if (v_depElim_2397_ == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2511_; lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2534_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2510_);
lean_dec_ref_known(v___x_2509_, 1);
lean_inc(v_majorFVarId_2380_);
v___x_2511_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_a_2510_, v_majorFVarId_2380_, v___y_2387_);
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2534_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2534_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
uint8_t v___x_2516_; 
v___x_2516_ = lean_unbox(v_a_2512_);
lean_dec(v_a_2512_);
if (v___x_2516_ == 0)
{
lean_del_object(v___x_2514_);
lean_dec(v_recursorName_2382_);
v___y_2422_ = v___y_2386_;
v___y_2423_ = v___y_2387_;
v___y_2424_ = v___y_2388_;
v___y_2425_ = v___y_2389_;
goto v___jp_2421_;
}
else
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2523_; 
v___x_2517_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3);
v___x_2518_ = l_Lean_MessageData_ofName(v_recursorName_2382_);
v___x_2519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2517_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5);
v___x_2521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2519_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
if (v_isShared_2515_ == 0)
{
lean_ctor_set_tag(v___x_2514_, 1);
lean_ctor_set(v___x_2514_, 0, v___x_2521_);
v___x_2523_ = v___x_2514_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v___x_2521_);
v___x_2523_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
lean_object* v___x_2524_; 
lean_inc(v_mvarId_2379_);
v___x_2524_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2399_, v_mvarId_2379_, v___x_2523_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_dec_ref_known(v___x_2524_, 1);
v___y_2422_ = v___y_2386_;
v___y_2423_ = v___y_2387_;
v___y_2424_ = v___y_2388_;
v___y_2425_ = v___y_2389_;
goto v___jp_2421_;
}
else
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2532_; 
lean_dec(v_a_2420_);
lean_dec_ref(v_givenNames_2381_);
lean_dec(v_majorFVarId_2380_);
lean_dec(v_mvarId_2379_);
lean_dec_ref(v_a_2377_);
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2527_ = v___x_2524_;
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2524_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2528_ == 0)
{
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_a_2525_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2509_, 1);
lean_dec(v_recursorName_2382_);
v___y_2422_ = v___y_2386_;
v___y_2423_ = v___y_2387_;
v___y_2424_ = v___y_2388_;
v___y_2425_ = v___y_2389_;
goto v___jp_2421_;
}
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
lean_dec(v_a_2420_);
lean_dec(v_recursorName_2382_);
lean_dec_ref(v_givenNames_2381_);
lean_dec(v_majorFVarId_2380_);
lean_dec(v_mvarId_2379_);
lean_dec_ref(v_a_2377_);
v_a_2535_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___x_2509_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2509_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
v___jp_2421_:
{
size_t v_sz_2426_; size_t v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; uint8_t v___x_2430_; uint8_t v___x_2431_; lean_object* v___x_2432_; 
v_sz_2426_ = lean_array_size(v_a_2420_);
v___x_2427_ = ((size_t)0ULL);
lean_inc(v_a_2420_);
v___x_2428_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(v_sz_2426_, v___x_2427_, v_a_2420_);
lean_inc(v_majorFVarId_2380_);
v___x_2429_ = lean_array_push(v___x_2428_, v_majorFVarId_2380_);
v___x_2430_ = 1;
v___x_2431_ = 0;
v___x_2432_ = l_Lean_MVarId_revert(v_mvarId_2379_, v___x_2429_, v___x_2430_, v___x_2431_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v_a_2433_; lean_object* v_fst_2434_; lean_object* v_snd_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v_a_2433_ = lean_ctor_get(v___x_2432_, 0);
lean_inc(v_a_2433_);
lean_dec_ref_known(v___x_2432_, 1);
v_fst_2434_ = lean_ctor_get(v_a_2433_, 0);
lean_inc(v_fst_2434_);
v_snd_2435_ = lean_ctor_get(v_a_2433_, 1);
lean_inc(v_snd_2435_);
lean_dec(v_a_2433_);
v___x_2436_ = lean_array_get_size(v_a_2420_);
v___x_2437_ = lean_box(0);
v___x_2438_ = l_Lean_Meta_introNCore(v_snd_2435_, v___x_2436_, v___x_2437_, v___x_2431_, v___x_2430_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v_fst_2440_; lean_object* v_snd_2441_; lean_object* v___x_2442_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_a_2439_);
lean_dec_ref_known(v___x_2438_, 1);
v_fst_2440_ = lean_ctor_get(v_a_2439_, 0);
lean_inc(v_fst_2440_);
v_snd_2441_ = lean_ctor_get(v_a_2439_, 1);
lean_inc(v_snd_2441_);
lean_dec(v_a_2439_);
v___x_2442_ = l_Lean_Meta_intro1Core(v_snd_2441_, v___x_2430_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v_a_2443_; lean_object* v_fst_2444_; lean_object* v_snd_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2484_; 
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
lean_inc(v_a_2443_);
lean_dec_ref_known(v___x_2442_, 1);
v_fst_2444_ = lean_ctor_get(v_a_2443_, 0);
v_snd_2445_ = lean_ctor_get(v_a_2443_, 1);
v_isSharedCheck_2484_ = !lean_is_exclusive(v_a_2443_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2447_ = v_a_2443_;
v_isShared_2448_ = v_isSharedCheck_2484_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_snd_2445_);
lean_inc(v_fst_2444_);
lean_dec(v_a_2443_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2484_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2454_; 
v___x_2449_ = lean_box(0);
lean_inc(v_fst_2444_);
v___x_2450_ = l_Lean_mkFVar(v_fst_2444_);
lean_inc_ref(v___x_2450_);
v___x_2451_ = l_Lean_Meta_FVarSubst_insert(v___x_2449_, v_majorFVarId_2380_, v___x_2450_);
v___x_2452_ = lean_unsigned_to_nat(0u);
if (v_isShared_2448_ == 0)
{
lean_ctor_set(v___x_2447_, 1, v___x_2452_);
lean_ctor_set(v___x_2447_, 0, v___x_2451_);
v___x_2454_ = v___x_2447_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v___x_2451_);
lean_ctor_set(v_reuseFailAlloc_2483_, 1, v___x_2452_);
v___x_2454_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
lean_object* v___x_2455_; lean_object* v_toCold_2456_; lean_object* v_options_2457_; uint8_t v_hasTrace_2458_; 
v___x_2455_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(v_fst_2440_, v_a_2420_, v_sz_2426_, v___x_2427_, v___x_2454_);
lean_dec(v_a_2420_);
v_toCold_2456_ = lean_ctor_get(v___y_2424_, 0);
v_options_2457_ = lean_ctor_get(v_toCold_2456_, 2);
v_hasTrace_2458_ = lean_ctor_get_uint8(v_options_2457_, sizeof(void*)*1);
if (v_hasTrace_2458_ == 0)
{
lean_object* v_fst_2459_; 
v_fst_2459_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_fst_2459_);
lean_dec_ref(v___x_2455_);
lean_inc(v_snd_2445_);
v___y_2401_ = v_fst_2434_;
v___y_2402_ = v_fst_2459_;
v___y_2403_ = v_snd_2445_;
v___y_2404_ = v_fst_2444_;
v___y_2405_ = v___x_2450_;
v___y_2406_ = v_snd_2445_;
v___y_2407_ = v_fst_2440_;
v___y_2408_ = v___x_2427_;
v___y_2409_ = v___y_2422_;
v___y_2410_ = v___y_2423_;
v___y_2411_ = v___y_2424_;
v___y_2412_ = v___y_2425_;
goto v___jp_2400_;
}
else
{
lean_object* v_fst_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2481_; 
v_fst_2460_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2481_ == 0)
{
lean_object* v_unused_2482_; 
v_unused_2482_ = lean_ctor_get(v___x_2455_, 1);
lean_dec(v_unused_2482_);
v___x_2462_ = v___x_2455_;
v_isShared_2463_ = v_isSharedCheck_2481_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_fst_2460_);
lean_dec(v___x_2455_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2481_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v_inheritedTraceOptions_2464_; lean_object* v___x_2465_; uint8_t v___x_2466_; 
v_inheritedTraceOptions_2464_ = lean_ctor_get(v_toCold_2456_, 11);
v___x_2465_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5);
v___x_2466_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2464_, v_options_2457_, v___x_2465_);
if (v___x_2466_ == 0)
{
lean_del_object(v___x_2462_);
lean_inc(v_snd_2445_);
v___y_2401_ = v_fst_2434_;
v___y_2402_ = v_fst_2460_;
v___y_2403_ = v_snd_2445_;
v___y_2404_ = v_fst_2444_;
v___y_2405_ = v___x_2450_;
v___y_2406_ = v_snd_2445_;
v___y_2407_ = v_fst_2440_;
v___y_2408_ = v___x_2427_;
v___y_2409_ = v___y_2422_;
v___y_2410_ = v___y_2423_;
v___y_2411_ = v___y_2424_;
v___y_2412_ = v___y_2425_;
goto v___jp_2400_;
}
else
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2470_; 
v___x_2467_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1);
lean_inc(v_snd_2445_);
v___x_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2468_, 0, v_snd_2445_);
if (v_isShared_2463_ == 0)
{
lean_ctor_set_tag(v___x_2462_, 7);
lean_ctor_set(v___x_2462_, 1, v___x_2468_);
lean_ctor_set(v___x_2462_, 0, v___x_2467_);
v___x_2470_ = v___x_2462_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v___x_2467_);
lean_ctor_set(v_reuseFailAlloc_2480_, 1, v___x_2468_);
v___x_2470_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
lean_object* v___x_2471_; 
v___x_2471_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v_cls_2417_, v___x_2470_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_dec_ref_known(v___x_2471_, 1);
lean_inc(v_snd_2445_);
v___y_2401_ = v_fst_2434_;
v___y_2402_ = v_fst_2460_;
v___y_2403_ = v_snd_2445_;
v___y_2404_ = v_fst_2444_;
v___y_2405_ = v___x_2450_;
v___y_2406_ = v_snd_2445_;
v___y_2407_ = v_fst_2440_;
v___y_2408_ = v___x_2427_;
v___y_2409_ = v___y_2422_;
v___y_2410_ = v___y_2423_;
v___y_2411_ = v___y_2424_;
v___y_2412_ = v___y_2425_;
goto v___jp_2400_;
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec(v_fst_2460_);
lean_dec_ref(v___x_2450_);
lean_dec(v_snd_2445_);
lean_dec(v_fst_2444_);
lean_dec(v_fst_2440_);
lean_dec(v_fst_2434_);
lean_dec_ref(v_givenNames_2381_);
lean_dec_ref(v_a_2377_);
v_a_2472_ = lean_ctor_get(v___x_2471_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2471_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2471_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
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
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
lean_dec(v_fst_2440_);
lean_dec(v_fst_2434_);
lean_dec(v_a_2420_);
lean_dec_ref(v_givenNames_2381_);
lean_dec(v_majorFVarId_2380_);
lean_dec_ref(v_a_2377_);
v_a_2485_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2487_ = v___x_2442_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2442_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
else
{
lean_object* v_a_2493_; lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2500_; 
lean_dec(v_fst_2434_);
lean_dec(v_a_2420_);
lean_dec_ref(v_givenNames_2381_);
lean_dec(v_majorFVarId_2380_);
lean_dec_ref(v_a_2377_);
v_a_2493_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2495_ = v___x_2438_;
v_isShared_2496_ = v_isSharedCheck_2500_;
goto v_resetjp_2494_;
}
else
{
lean_inc(v_a_2493_);
lean_dec(v___x_2438_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2500_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
lean_object* v___x_2498_; 
if (v_isShared_2496_ == 0)
{
v___x_2498_ = v___x_2495_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_a_2493_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
return v___x_2498_;
}
}
}
}
else
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2508_; 
lean_dec(v_a_2420_);
lean_dec_ref(v_givenNames_2381_);
lean_dec(v_majorFVarId_2380_);
lean_dec_ref(v_a_2377_);
v_a_2501_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2503_ = v___x_2432_;
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2432_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_a_2501_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
}
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec(v_recursorName_2382_);
lean_dec_ref(v_givenNames_2381_);
lean_dec(v_majorFVarId_2380_);
lean_dec(v_mvarId_2379_);
lean_dec_ref(v_a_2377_);
v_a_2543_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2419_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2419_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
lean_dec(v_recursorName_2382_);
lean_dec_ref(v_givenNames_2381_);
lean_dec(v_majorFVarId_2380_);
lean_dec(v_mvarId_2379_);
lean_dec_ref(v_val_2378_);
lean_dec_ref(v_a_2377_);
v_a_2551_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2418_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v___x_2418_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
v___jp_2400_:
{
size_t v_sz_2413_; lean_object* v___x_2414_; lean_object* v___f_2415_; lean_object* v___x_2416_; 
v_sz_2413_ = lean_array_size(v___y_2407_);
v___x_2414_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(v_sz_2413_, v___y_2408_, v___y_2407_);
v___f_2415_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0___boxed), 14, 9);
lean_closure_set(v___f_2415_, 0, v___y_2403_);
lean_closure_set(v___f_2415_, 1, v___x_2399_);
lean_closure_set(v___f_2415_, 2, v___y_2404_);
lean_closure_set(v___f_2415_, 3, v_a_2377_);
lean_closure_set(v___f_2415_, 4, v___x_2414_);
lean_closure_set(v___f_2415_, 5, v_givenNames_2381_);
lean_closure_set(v___f_2415_, 6, v___y_2401_);
lean_closure_set(v___f_2415_, 7, v___y_2405_);
lean_closure_set(v___f_2415_, 8, v___y_2402_);
v___x_2416_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v___y_2406_, v___f_2415_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_);
return v___x_2416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___boxed(lean_object* v_a_2559_, lean_object* v_val_2560_, lean_object* v_mvarId_2561_, lean_object* v_majorFVarId_2562_, lean_object* v_givenNames_2563_, lean_object* v_recursorName_2564_, lean_object* v_x_2565_, lean_object* v_x_2566_, lean_object* v_x_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_){
_start:
{
lean_object* v_res_2573_; 
v_res_2573_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4(v_a_2559_, v_val_2560_, v_mvarId_2561_, v_majorFVarId_2562_, v_givenNames_2563_, v_recursorName_2564_, v_x_2565_, v_x_2566_, v_x_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
lean_dec(v___y_2569_);
lean_dec_ref(v___y_2568_);
return v_res_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4(lean_object* v_val_2574_, lean_object* v_mvarId_2575_, lean_object* v_a_2576_, lean_object* v_majorFVarId_2577_, lean_object* v_givenNames_2578_, lean_object* v_recursorName_2579_, lean_object* v_x_2580_, lean_object* v_x_2581_, lean_object* v_x_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_){
_start:
{
if (lean_obj_tag(v_x_2580_) == 5)
{
lean_object* v_fn_2588_; lean_object* v_arg_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_fn_2588_ = lean_ctor_get(v_x_2580_, 0);
lean_inc_ref(v_fn_2588_);
v_arg_2589_ = lean_ctor_get(v_x_2580_, 1);
lean_inc_ref(v_arg_2589_);
lean_dec_ref_known(v_x_2580_, 2);
v___x_2590_ = lean_array_set(v_x_2581_, v_x_2582_, v_arg_2589_);
v___x_2591_ = lean_unsigned_to_nat(1u);
v___x_2592_ = lean_nat_sub(v_x_2582_, v___x_2591_);
v___x_2593_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4(v_a_2576_, v_val_2574_, v_mvarId_2575_, v_majorFVarId_2577_, v_givenNames_2578_, v_recursorName_2579_, v_fn_2588_, v___x_2590_, v___x_2592_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
return v___x_2593_;
}
else
{
uint8_t v_depElim_2594_; lean_object* v_paramsPos_2595_; lean_object* v___x_2596_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; size_t v___y_2603_; lean_object* v___y_2604_; lean_object* v___y_2605_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v_cls_2614_; lean_object* v___x_2615_; 
lean_dec_ref(v_x_2580_);
v_depElim_2594_ = lean_ctor_get_uint8(v_a_2576_, sizeof(void*)*8);
v_paramsPos_2595_ = lean_ctor_get(v_a_2576_, 5);
v___x_2596_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__1));
v_cls_2614_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
lean_inc(v_paramsPos_2595_);
lean_inc(v_mvarId_2575_);
lean_inc_ref(v_val_2574_);
v___x_2615_ = l_List_forM___at___00Lean_MVarId_induction_spec__0(v_x_2581_, v_val_2574_, v_mvarId_2575_, v_paramsPos_2595_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
lean_dec_ref(v_x_2581_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v___x_2616_; 
lean_dec_ref_known(v___x_2615_, 1);
lean_inc_ref(v_a_2576_);
lean_inc(v_mvarId_2575_);
v___x_2616_ = l_Lean_Meta_getMajorTypeIndices(v_mvarId_2575_, v___x_2596_, v_a_2576_, v_val_2574_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
if (lean_obj_tag(v___x_2616_) == 0)
{
lean_object* v_a_2617_; lean_object* v___y_2619_; lean_object* v___y_2620_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___x_2706_; 
v_a_2617_ = lean_ctor_get(v___x_2616_, 0);
lean_inc(v_a_2617_);
lean_dec_ref_known(v___x_2616_, 1);
lean_inc(v_mvarId_2575_);
v___x_2706_ = l_Lean_MVarId_getType(v_mvarId_2575_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
if (lean_obj_tag(v___x_2706_) == 0)
{
if (v_depElim_2594_ == 0)
{
lean_object* v_a_2707_; lean_object* v___x_2708_; lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2731_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc(v_a_2707_);
lean_dec_ref_known(v___x_2706_, 1);
lean_inc(v_majorFVarId_2577_);
v___x_2708_ = l_Lean_exprDependsOn___at___00Lean_Meta_getMajorTypeIndices_spec__2___redArg(v_a_2707_, v_majorFVarId_2577_, v___y_2584_);
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2711_ = v___x_2708_;
v_isShared_2712_ = v_isSharedCheck_2731_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2708_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2731_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
uint8_t v___x_2713_; 
v___x_2713_ = lean_unbox(v_a_2709_);
lean_dec(v_a_2709_);
if (v___x_2713_ == 0)
{
lean_del_object(v___x_2711_);
lean_dec(v_recursorName_2579_);
v___y_2619_ = v___y_2583_;
v___y_2620_ = v___y_2584_;
v___y_2621_ = v___y_2585_;
v___y_2622_ = v___y_2586_;
goto v___jp_2618_;
}
else
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2720_; 
v___x_2714_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__3);
v___x_2715_ = l_Lean_MessageData_ofName(v_recursorName_2579_);
v___x_2716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2714_);
lean_ctor_set(v___x_2716_, 1, v___x_2715_);
v___x_2717_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__5);
v___x_2718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2716_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set_tag(v___x_2711_, 1);
lean_ctor_set(v___x_2711_, 0, v___x_2718_);
v___x_2720_ = v___x_2711_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2718_);
v___x_2720_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
lean_object* v___x_2721_; 
lean_inc(v_mvarId_2575_);
v___x_2721_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2596_, v_mvarId_2575_, v___x_2720_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
if (lean_obj_tag(v___x_2721_) == 0)
{
lean_dec_ref_known(v___x_2721_, 1);
v___y_2619_ = v___y_2583_;
v___y_2620_ = v___y_2584_;
v___y_2621_ = v___y_2585_;
v___y_2622_ = v___y_2586_;
goto v___jp_2618_;
}
else
{
lean_object* v_a_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2729_; 
lean_dec(v_a_2617_);
lean_dec_ref(v_givenNames_2578_);
lean_dec(v_majorFVarId_2577_);
lean_dec_ref(v_a_2576_);
lean_dec(v_mvarId_2575_);
v_a_2722_ = lean_ctor_get(v___x_2721_, 0);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2721_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2724_ = v___x_2721_;
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_a_2722_);
lean_dec(v___x_2721_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2727_; 
if (v_isShared_2725_ == 0)
{
v___x_2727_ = v___x_2724_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_a_2722_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_2706_, 1);
lean_dec(v_recursorName_2579_);
v___y_2619_ = v___y_2583_;
v___y_2620_ = v___y_2584_;
v___y_2621_ = v___y_2585_;
v___y_2622_ = v___y_2586_;
goto v___jp_2618_;
}
}
else
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2739_; 
lean_dec(v_a_2617_);
lean_dec(v_recursorName_2579_);
lean_dec_ref(v_givenNames_2578_);
lean_dec(v_majorFVarId_2577_);
lean_dec_ref(v_a_2576_);
lean_dec(v_mvarId_2575_);
v_a_2732_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v___x_2706_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2706_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2737_; 
if (v_isShared_2735_ == 0)
{
v___x_2737_ = v___x_2734_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_a_2732_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
return v___x_2737_;
}
}
}
v___jp_2618_:
{
size_t v_sz_2623_; size_t v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; uint8_t v___x_2627_; uint8_t v___x_2628_; lean_object* v___x_2629_; 
v_sz_2623_ = lean_array_size(v_a_2617_);
v___x_2624_ = ((size_t)0ULL);
lean_inc(v_a_2617_);
v___x_2625_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_induction_spec__1(v_sz_2623_, v___x_2624_, v_a_2617_);
lean_inc(v_majorFVarId_2577_);
v___x_2626_ = lean_array_push(v___x_2625_, v_majorFVarId_2577_);
v___x_2627_ = 1;
v___x_2628_ = 0;
v___x_2629_ = l_Lean_MVarId_revert(v_mvarId_2575_, v___x_2626_, v___x_2627_, v___x_2628_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2629_) == 0)
{
lean_object* v_a_2630_; lean_object* v_fst_2631_; lean_object* v_snd_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v_a_2630_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_a_2630_);
lean_dec_ref_known(v___x_2629_, 1);
v_fst_2631_ = lean_ctor_get(v_a_2630_, 0);
lean_inc(v_fst_2631_);
v_snd_2632_ = lean_ctor_get(v_a_2630_, 1);
lean_inc(v_snd_2632_);
lean_dec(v_a_2630_);
v___x_2633_ = lean_array_get_size(v_a_2617_);
v___x_2634_ = lean_box(0);
v___x_2635_ = l_Lean_Meta_introNCore(v_snd_2632_, v___x_2633_, v___x_2634_, v___x_2628_, v___x_2627_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_object* v_a_2636_; lean_object* v_fst_2637_; lean_object* v_snd_2638_; lean_object* v___x_2639_; 
v_a_2636_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_a_2636_);
lean_dec_ref_known(v___x_2635_, 1);
v_fst_2637_ = lean_ctor_get(v_a_2636_, 0);
lean_inc(v_fst_2637_);
v_snd_2638_ = lean_ctor_get(v_a_2636_, 1);
lean_inc(v_snd_2638_);
lean_dec(v_a_2636_);
v___x_2639_ = l_Lean_Meta_intro1Core(v_snd_2638_, v___x_2627_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v_fst_2641_; lean_object* v_snd_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2681_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2640_);
lean_dec_ref_known(v___x_2639_, 1);
v_fst_2641_ = lean_ctor_get(v_a_2640_, 0);
v_snd_2642_ = lean_ctor_get(v_a_2640_, 1);
v_isSharedCheck_2681_ = !lean_is_exclusive(v_a_2640_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2644_ = v_a_2640_;
v_isShared_2645_ = v_isSharedCheck_2681_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_snd_2642_);
lean_inc(v_fst_2641_);
lean_dec(v_a_2640_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2681_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2651_; 
v___x_2646_ = lean_box(0);
lean_inc(v_fst_2641_);
v___x_2647_ = l_Lean_mkFVar(v_fst_2641_);
lean_inc_ref(v___x_2647_);
v___x_2648_ = l_Lean_Meta_FVarSubst_insert(v___x_2646_, v_majorFVarId_2577_, v___x_2647_);
v___x_2649_ = lean_unsigned_to_nat(0u);
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 1, v___x_2649_);
lean_ctor_set(v___x_2644_, 0, v___x_2648_);
v___x_2651_ = v___x_2644_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v___x_2648_);
lean_ctor_set(v_reuseFailAlloc_2680_, 1, v___x_2649_);
v___x_2651_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
lean_object* v___x_2652_; lean_object* v_toCold_2653_; lean_object* v_options_2654_; uint8_t v_hasTrace_2655_; 
v___x_2652_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_induction_spec__2(v_fst_2637_, v_a_2617_, v_sz_2623_, v___x_2624_, v___x_2651_);
lean_dec(v_a_2617_);
v_toCold_2653_ = lean_ctor_get(v___y_2621_, 0);
v_options_2654_ = lean_ctor_get(v_toCold_2653_, 2);
v_hasTrace_2655_ = lean_ctor_get_uint8(v_options_2654_, sizeof(void*)*1);
if (v_hasTrace_2655_ == 0)
{
lean_object* v_fst_2656_; 
v_fst_2656_ = lean_ctor_get(v___x_2652_, 0);
lean_inc(v_fst_2656_);
lean_dec_ref(v___x_2652_);
lean_inc(v_snd_2642_);
v___y_2598_ = v_fst_2656_;
v___y_2599_ = v_fst_2641_;
v___y_2600_ = v___x_2647_;
v___y_2601_ = v_fst_2631_;
v___y_2602_ = v_snd_2642_;
v___y_2603_ = v___x_2624_;
v___y_2604_ = v_snd_2642_;
v___y_2605_ = v_fst_2637_;
v___y_2606_ = v___y_2619_;
v___y_2607_ = v___y_2620_;
v___y_2608_ = v___y_2621_;
v___y_2609_ = v___y_2622_;
goto v___jp_2597_;
}
else
{
lean_object* v_fst_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2678_; 
v_fst_2657_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2678_ == 0)
{
lean_object* v_unused_2679_; 
v_unused_2679_ = lean_ctor_get(v___x_2652_, 1);
lean_dec(v_unused_2679_);
v___x_2659_ = v___x_2652_;
v_isShared_2660_ = v_isSharedCheck_2678_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_fst_2657_);
lean_dec(v___x_2652_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2678_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v_inheritedTraceOptions_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
v_inheritedTraceOptions_2661_ = lean_ctor_get(v_toCold_2653_, 11);
v___x_2662_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5_once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__5);
v___x_2663_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2661_, v_options_2654_, v___x_2662_);
if (v___x_2663_ == 0)
{
lean_del_object(v___x_2659_);
lean_inc(v_snd_2642_);
v___y_2598_ = v_fst_2657_;
v___y_2599_ = v_fst_2641_;
v___y_2600_ = v___x_2647_;
v___y_2601_ = v_fst_2631_;
v___y_2602_ = v_snd_2642_;
v___y_2603_ = v___x_2624_;
v___y_2604_ = v_snd_2642_;
v___y_2605_ = v_fst_2637_;
v___y_2606_ = v___y_2619_;
v___y_2607_ = v___y_2620_;
v___y_2608_ = v___y_2621_;
v___y_2609_ = v___y_2622_;
goto v___jp_2597_;
}
else
{
lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2667_; 
v___x_2664_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1, &l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4_spec__4___closed__1);
lean_inc(v_snd_2642_);
v___x_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2665_, 0, v_snd_2642_);
if (v_isShared_2660_ == 0)
{
lean_ctor_set_tag(v___x_2659_, 7);
lean_ctor_set(v___x_2659_, 1, v___x_2665_);
lean_ctor_set(v___x_2659_, 0, v___x_2664_);
v___x_2667_ = v___x_2659_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2664_);
lean_ctor_set(v_reuseFailAlloc_2677_, 1, v___x_2665_);
v___x_2667_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2668_; 
v___x_2668_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v_cls_2614_, v___x_2667_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_dec_ref_known(v___x_2668_, 1);
lean_inc(v_snd_2642_);
v___y_2598_ = v_fst_2657_;
v___y_2599_ = v_fst_2641_;
v___y_2600_ = v___x_2647_;
v___y_2601_ = v_fst_2631_;
v___y_2602_ = v_snd_2642_;
v___y_2603_ = v___x_2624_;
v___y_2604_ = v_snd_2642_;
v___y_2605_ = v_fst_2637_;
v___y_2606_ = v___y_2619_;
v___y_2607_ = v___y_2620_;
v___y_2608_ = v___y_2621_;
v___y_2609_ = v___y_2622_;
goto v___jp_2597_;
}
else
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
lean_dec(v_fst_2657_);
lean_dec_ref(v___x_2647_);
lean_dec(v_snd_2642_);
lean_dec(v_fst_2641_);
lean_dec(v_fst_2637_);
lean_dec(v_fst_2631_);
lean_dec_ref(v_givenNames_2578_);
lean_dec_ref(v_a_2576_);
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2671_ = v___x_2668_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2668_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2669_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
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
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2689_; 
lean_dec(v_fst_2637_);
lean_dec(v_fst_2631_);
lean_dec(v_a_2617_);
lean_dec_ref(v_givenNames_2578_);
lean_dec(v_majorFVarId_2577_);
lean_dec_ref(v_a_2576_);
v_a_2682_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2684_ = v___x_2639_;
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2639_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2687_; 
if (v_isShared_2685_ == 0)
{
v___x_2687_ = v___x_2684_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_a_2682_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
lean_dec(v_fst_2631_);
lean_dec(v_a_2617_);
lean_dec_ref(v_givenNames_2578_);
lean_dec(v_majorFVarId_2577_);
lean_dec_ref(v_a_2576_);
v_a_2690_ = lean_ctor_get(v___x_2635_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2635_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2635_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
else
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2705_; 
lean_dec(v_a_2617_);
lean_dec_ref(v_givenNames_2578_);
lean_dec(v_majorFVarId_2577_);
lean_dec_ref(v_a_2576_);
v_a_2698_ = lean_ctor_get(v___x_2629_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2629_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2700_ = v___x_2629_;
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2629_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2703_; 
if (v_isShared_2701_ == 0)
{
v___x_2703_ = v___x_2700_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2698_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
}
else
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
lean_dec(v_recursorName_2579_);
lean_dec_ref(v_givenNames_2578_);
lean_dec(v_majorFVarId_2577_);
lean_dec_ref(v_a_2576_);
lean_dec(v_mvarId_2575_);
v_a_2740_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v___x_2616_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v___x_2616_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
}
else
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2755_; 
lean_dec(v_recursorName_2579_);
lean_dec_ref(v_givenNames_2578_);
lean_dec(v_majorFVarId_2577_);
lean_dec_ref(v_a_2576_);
lean_dec(v_mvarId_2575_);
lean_dec_ref(v_val_2574_);
v_a_2748_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2750_ = v___x_2615_;
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2615_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2753_; 
if (v_isShared_2751_ == 0)
{
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2748_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
v___jp_2597_:
{
size_t v_sz_2610_; lean_object* v___x_2611_; lean_object* v___f_2612_; lean_object* v___x_2613_; 
v_sz_2610_ = lean_array_size(v___y_2605_);
v___x_2611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__3(v_sz_2610_, v___y_2603_, v___y_2605_);
v___f_2612_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___lam__0___boxed), 14, 9);
lean_closure_set(v___f_2612_, 0, v___y_2602_);
lean_closure_set(v___f_2612_, 1, v___x_2596_);
lean_closure_set(v___f_2612_, 2, v___y_2599_);
lean_closure_set(v___f_2612_, 3, v_a_2576_);
lean_closure_set(v___f_2612_, 4, v___x_2611_);
lean_closure_set(v___f_2612_, 5, v_givenNames_2578_);
lean_closure_set(v___f_2612_, 6, v___y_2601_);
lean_closure_set(v___f_2612_, 7, v___y_2600_);
lean_closure_set(v___f_2612_, 8, v___y_2598_);
v___x_2613_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v___y_2604_, v___f_2612_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
return v___x_2613_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4___boxed(lean_object* v_val_2756_, lean_object* v_mvarId_2757_, lean_object* v_a_2758_, lean_object* v_majorFVarId_2759_, lean_object* v_givenNames_2760_, lean_object* v_recursorName_2761_, lean_object* v_x_2762_, lean_object* v_x_2763_, lean_object* v_x_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4(v_val_2756_, v_mvarId_2757_, v_a_2758_, v_majorFVarId_2759_, v_givenNames_2760_, v_recursorName_2761_, v_x_2762_, v_x_2763_, v_x_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v_x_2764_);
return v_res_2770_;
}
}
static lean_object* _init_l_Lean_MVarId_induction___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = ((lean_object*)(l_Lean_MVarId_induction___lam__0___closed__0));
v___x_2773_ = l_Lean_stringToMessageData(v___x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___lam__0(lean_object* v___x_2774_, lean_object* v_mvarId_2775_, lean_object* v_majorFVarId_2776_, lean_object* v_recursorName_2777_, lean_object* v_givenNames_2778_, lean_object* v_cls_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v_toCold_2841_; lean_object* v_options_2842_; uint8_t v_hasTrace_2843_; 
v_toCold_2841_ = lean_ctor_get(v___y_2782_, 0);
v_options_2842_ = lean_ctor_get(v_toCold_2841_, 2);
v_hasTrace_2843_ = lean_ctor_get_uint8(v_options_2842_, sizeof(void*)*1);
if (v_hasTrace_2843_ == 0)
{
lean_dec(v_cls_2779_);
v___y_2786_ = v___y_2780_;
v___y_2787_ = v___y_2781_;
v___y_2788_ = v___y_2782_;
v___y_2789_ = v___y_2783_;
goto v___jp_2785_;
}
else
{
lean_object* v_inheritedTraceOptions_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; uint8_t v___x_2847_; 
v_inheritedTraceOptions_2844_ = lean_ctor_get(v_toCold_2841_, 11);
v___x_2845_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__4));
lean_inc(v_cls_2779_);
v___x_2846_ = l_Lean_Name_append(v___x_2845_, v_cls_2779_);
v___x_2847_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2844_, v_options_2842_, v___x_2846_);
lean_dec(v___x_2846_);
if (v___x_2847_ == 0)
{
lean_dec(v_cls_2779_);
v___y_2786_ = v___y_2780_;
v___y_2787_ = v___y_2781_;
v___y_2788_ = v___y_2782_;
v___y_2789_ = v___y_2783_;
goto v___jp_2785_;
}
else
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2848_ = lean_obj_once(&l_Lean_MVarId_induction___lam__0___closed__1, &l_Lean_MVarId_induction___lam__0___closed__1_once, _init_l_Lean_MVarId_induction___lam__0___closed__1);
lean_inc(v_mvarId_2775_);
v___x_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2849_, 0, v_mvarId_2775_);
v___x_2850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2850_, 0, v___x_2848_);
lean_ctor_set(v___x_2850_, 1, v___x_2849_);
v___x_2851_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop_spec__1(v_cls_2779_, v___x_2850_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_dec_ref_known(v___x_2851_, 1);
v___y_2786_ = v___y_2780_;
v___y_2787_ = v___y_2781_;
v___y_2788_ = v___y_2782_;
v___y_2789_ = v___y_2783_;
goto v___jp_2785_;
}
else
{
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
lean_dec_ref(v_givenNames_2778_);
lean_dec(v_recursorName_2777_);
lean_dec(v_majorFVarId_2776_);
lean_dec(v_mvarId_2775_);
lean_dec_ref(v___x_2774_);
v_a_2852_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___x_2851_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___x_2851_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2852_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
}
v___jp_2785_:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2790_ = l_Lean_Name_mkStr1(v___x_2774_);
lean_inc(v___x_2790_);
lean_inc(v_mvarId_2775_);
v___x_2791_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2775_, v___x_2790_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v___x_2792_; 
lean_dec_ref_known(v___x_2791_, 1);
lean_inc(v_majorFVarId_2776_);
v___x_2792_ = l_Lean_FVarId_getDecl___redArg(v_majorFVarId_2776_, v___y_2786_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2792_) == 0)
{
lean_object* v_a_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v_a_2793_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v___x_2792_, 1);
v___x_2794_ = lean_box(0);
lean_inc(v_recursorName_2777_);
v___x_2795_ = l_Lean_Meta_mkRecursorInfo(v_recursorName_2777_, v___x_2794_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v_typeName_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2796_);
lean_dec_ref_known(v___x_2795_, 1);
v_typeName_2797_ = lean_ctor_get(v_a_2796_, 1);
v___x_2798_ = l_Lean_LocalDecl_type(v_a_2793_);
lean_dec(v_a_2793_);
lean_inc_ref(v___x_2798_);
v___x_2799_ = l_Lean_Meta_whnfUntil(v___x_2798_, v_typeName_2797_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2799_, 1);
if (lean_obj_tag(v_a_2800_) == 1)
{
lean_object* v_val_2801_; lean_object* v_dummy_2802_; lean_object* v_nargs_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
lean_dec_ref(v___x_2798_);
lean_dec(v___x_2790_);
v_val_2801_ = lean_ctor_get(v_a_2800_, 0);
lean_inc_n(v_val_2801_, 2);
lean_dec_ref_known(v_a_2800_, 1);
v_dummy_2802_ = lean_obj_once(&l_Lean_Meta_getMajorTypeIndices___closed__0, &l_Lean_Meta_getMajorTypeIndices___closed__0_once, _init_l_Lean_Meta_getMajorTypeIndices___closed__0);
v_nargs_2803_ = l_Lean_Expr_getAppNumArgs(v_val_2801_);
lean_inc(v_nargs_2803_);
v___x_2804_ = lean_mk_array(v_nargs_2803_, v_dummy_2802_);
v___x_2805_ = lean_unsigned_to_nat(1u);
v___x_2806_ = lean_nat_sub(v_nargs_2803_, v___x_2805_);
lean_dec(v_nargs_2803_);
v___x_2807_ = l_Lean_Expr_withAppAux___at___00Lean_MVarId_induction_spec__4(v_val_2801_, v_mvarId_2775_, v_a_2796_, v_majorFVarId_2776_, v_givenNames_2778_, v_recursorName_2777_, v_val_2801_, v___x_2804_, v___x_2806_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
lean_dec(v___x_2806_);
return v___x_2807_;
}
else
{
lean_object* v___x_2808_; 
lean_dec(v_a_2800_);
lean_dec(v_a_2796_);
lean_dec_ref(v_givenNames_2778_);
lean_dec(v_recursorName_2777_);
lean_dec(v_majorFVarId_2776_);
v___x_2808_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_throwUnexpectedMajorType___redArg(v___x_2790_, v_mvarId_2775_, v___x_2798_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
return v___x_2808_;
}
}
else
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2816_; 
lean_dec_ref(v___x_2798_);
lean_dec(v_a_2796_);
lean_dec(v___x_2790_);
lean_dec_ref(v_givenNames_2778_);
lean_dec(v_recursorName_2777_);
lean_dec(v_majorFVarId_2776_);
lean_dec(v_mvarId_2775_);
v_a_2809_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2811_ = v___x_2799_;
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v___x_2799_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_a_2809_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
lean_dec(v_a_2793_);
lean_dec(v___x_2790_);
lean_dec_ref(v_givenNames_2778_);
lean_dec(v_recursorName_2777_);
lean_dec(v_majorFVarId_2776_);
lean_dec(v_mvarId_2775_);
v_a_2817_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___x_2795_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2795_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v___x_2790_);
lean_dec_ref(v_givenNames_2778_);
lean_dec(v_recursorName_2777_);
lean_dec(v_majorFVarId_2776_);
lean_dec(v_mvarId_2775_);
v_a_2825_ = lean_ctor_get(v___x_2792_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2792_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2792_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2792_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_dec(v___x_2790_);
lean_dec_ref(v_givenNames_2778_);
lean_dec(v_recursorName_2777_);
lean_dec(v_majorFVarId_2776_);
lean_dec(v_mvarId_2775_);
v_a_2833_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2791_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2791_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___lam__0___boxed(lean_object* v___x_2860_, lean_object* v_mvarId_2861_, lean_object* v_majorFVarId_2862_, lean_object* v_recursorName_2863_, lean_object* v_givenNames_2864_, lean_object* v_cls_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_){
_start:
{
lean_object* v_res_2871_; 
v_res_2871_ = l_Lean_MVarId_induction___lam__0(v___x_2860_, v_mvarId_2861_, v_majorFVarId_2862_, v_recursorName_2863_, v_givenNames_2864_, v_cls_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_induction(lean_object* v_mvarId_2872_, lean_object* v_majorFVarId_2873_, lean_object* v_recursorName_2874_, lean_object* v_givenNames_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_){
_start:
{
lean_object* v___x_2881_; lean_object* v_cls_2882_; lean_object* v___f_2883_; lean_object* v___x_2884_; 
v___x_2881_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_addRecParams___closed__0));
v_cls_2882_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
lean_inc(v_mvarId_2872_);
v___f_2883_ = lean_alloc_closure((void*)(l_Lean_MVarId_induction___lam__0___boxed), 11, 6);
lean_closure_set(v___f_2883_, 0, v___x_2881_);
lean_closure_set(v___f_2883_, 1, v_mvarId_2872_);
lean_closure_set(v___f_2883_, 2, v_majorFVarId_2873_);
lean_closure_set(v___f_2883_, 3, v_recursorName_2874_);
lean_closure_set(v___f_2883_, 4, v_givenNames_2875_);
lean_closure_set(v___f_2883_, 5, v_cls_2882_);
v___x_2884_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_induction_spec__3___redArg(v_mvarId_2872_, v___f_2883_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_induction___boxed(lean_object* v_mvarId_2885_, lean_object* v_majorFVarId_2886_, lean_object* v_recursorName_2887_, lean_object* v_givenNames_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Lean_MVarId_induction(v_mvarId_2885_, v_majorFVarId_2886_, v_recursorName_2887_, v_givenNames_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_);
lean_dec(v_a_2892_);
lean_dec_ref(v_a_2891_);
lean_dec(v_a_2890_);
lean_dec_ref(v_a_2889_);
return v_res_2894_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2942_ = lean_unsigned_to_nat(2221195325u);
v___x_2943_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2944_ = l_Lean_Name_num___override(v___x_2943_, v___x_2942_);
return v___x_2944_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2946_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2947_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2948_ = l_Lean_Name_str___override(v___x_2947_, v___x_2946_);
return v___x_2948_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2950_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_));
v___x_2951_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2952_ = l_Lean_Name_str___override(v___x_2951_, v___x_2950_);
return v___x_2952_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2953_ = lean_unsigned_to_nat(2u);
v___x_2954_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2955_ = l_Lean_Name_num___override(v___x_2954_, v___x_2953_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2957_; uint8_t v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2957_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_finalize_loop___closed__2));
v___x_2958_ = 0;
v___x_2959_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_);
v___x_2960_ = l_Lean_registerTraceClass(v___x_2957_, v___x_2958_, v___x_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2____boxed(lean_object* v_a_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_();
return v_res_2962_;
}
}
lean_object* runtime_initialize_Lean_Meta_RecursorInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Induction(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_RecursorInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Induction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Induction_2221195325____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Induction(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_RecursorInfo(uint8_t builtin);
lean_object* initialize_Lean_Meta_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Induction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_RecursorInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Induction(builtin);
}
#ifdef __cplusplus
}
#endif

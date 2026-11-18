// Lean compiler output
// Module: Lean.Meta.Tactic.Apply
// Imports: public import Lean.Meta.Tactic.Util public import Lean.PrettyPrinter import Lean.Meta.AppBuilder import Init.Omega
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_headBetaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkUnfoldAxiomsNote(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofLazyM(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaBoundedTelescope(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_getExpectedNumArgsAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_getExpectedNumArgsAux___closed__0 = (const lean_object*)&l_Lean_Meta_getExpectedNumArgsAux___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\nwith the goal"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "could not unify the "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "the term"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "conclusion"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " is"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "The full type of "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(171, 239, 198, 100, 229, 128, 136, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "failed to assign synthesized instance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_MVarId_apply_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_MVarId_apply_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_applyConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_MVarId_applyConst___closed__0 = (const lean_object*)&l_Lean_MVarId_applyConst___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_applyConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyConst___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Type mismatch: target is"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__1;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "\nbut applied expression has type"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__3;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "\nafter applying "};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__5;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " arguments."};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__6 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__7;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Applied type takes fewer than "};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__8 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__9;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " arguments:\n"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__10 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_splitAndCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "splitAnd"};
static const lean_object* l_Lean_MVarId_splitAndCore___closed__0 = (const lean_object*)&l_Lean_MVarId_splitAndCore___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_splitAndCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_splitAndCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 13, 24, 72, 20, 48, 2, 32)}};
static const lean_object* l_Lean_MVarId_splitAndCore___closed__1 = (const lean_object*)&l_Lean_MVarId_splitAndCore___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_exfalso___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_exfalso___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___lam__0___closed__2;
static const lean_string_object l_Lean_MVarId_exfalso___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_exfalso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "exfalso"};
static const lean_object* l_Lean_MVarId_exfalso___closed__0 = (const lean_object*)&l_Lean_MVarId_exfalso___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 71, 194, 225, 45, 41, 69, 140)}};
static const lean_object* l_Lean_MVarId_exfalso___closed__1 = (const lean_object*)&l_Lean_MVarId_exfalso___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "target is not an inductive datatype"};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_nthConstructor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__3;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "index "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__4_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " out of bounds, only "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__5 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__5_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " constructors"};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__6 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__6_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = " tactic works for inductive types with exactly "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__7 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_iffOfEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_MVarId_iffOfEq___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_iffOfEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_iffOfEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "iff_of_eq"};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__0 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_iffOfEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_iffOfEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 65, 13, 14, 191, 127, 32, 251)}};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__1 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___closed__2;
static const lean_ctor_object l_Lean_MVarId_iffOfEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__3 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_propext___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_propext___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_propext___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_propext___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_propext___lam__0___closed__2;
static const lean_string_object l_Lean_MVarId_propext___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_propext___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_propext___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_value;
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "proof_irrel_heq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(180, 105, 248, 247, 187, 48, 190, 226)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proofIrrelHeq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___closed__0 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 31, 69, 85, 58, 186, 233, 113)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___closed__1 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Subsingleton"};
static const lean_object* l_Lean_MVarId_subsingletonElim___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 130, 42, 228, 248, 162, 23, 186)}};
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(79, 85, 152, 16, 239, 41, 62, 212)}};
static const lean_object* l_Lean_MVarId_subsingletonElim___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_subsingletonElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "subsingletonElim"};
static const lean_object* l_Lean_MVarId_subsingletonElim___closed__0 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_subsingletonElim___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 225, 81, 216, 132, 143, 62, 229)}};
static const lean_object* l_Lean_MVarId_subsingletonElim___closed__1 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, uint8_t v_whnfType_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; lean_object* v___x_29_; 
v___f_28_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_28_, 0, v_k_20_);
v___x_29_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_19_, v___f_28_, v_cleanupAnnotations_21_, v_whnfType_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_29_) == 0)
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_a_38_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_29_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_29_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___boxed(lean_object* v_type_46_, lean_object* v_k_47_, lean_object* v_cleanupAnnotations_48_, lean_object* v_whnfType_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; uint8_t v_whnfType_boxed_56_; lean_object* v_res_57_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_48_);
v_whnfType_boxed_56_ = lean_unbox(v_whnfType_49_);
v_res_57_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_type_46_, v_k_47_, v_cleanupAnnotations_boxed_55_, v_whnfType_boxed_56_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(lean_object* v_00_u03b1_58_, lean_object* v_type_59_, lean_object* v_k_60_, uint8_t v_cleanupAnnotations_61_, uint8_t v_whnfType_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_type_59_, v_k_60_, v_cleanupAnnotations_61_, v_whnfType_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___boxed(lean_object* v_00_u03b1_69_, lean_object* v_type_70_, lean_object* v_k_71_, lean_object* v_cleanupAnnotations_72_, lean_object* v_whnfType_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_79_; uint8_t v_whnfType_boxed_80_; lean_object* v_res_81_; 
v_cleanupAnnotations_boxed_79_ = lean_unbox(v_cleanupAnnotations_72_);
v_whnfType_boxed_80_ = lean_unbox(v_whnfType_73_);
v_res_81_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(v_00_u03b1_69_, v_type_70_, v_k_71_, v_cleanupAnnotations_boxed_79_, v_whnfType_boxed_80_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0(lean_object* v_xs_82_, lean_object* v_body_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_89_ = lean_array_get_size(v_xs_82_);
v___x_90_ = l_Lean_Expr_getAppFn(v_body_83_);
v___x_91_ = l_Lean_Expr_isMVar(v___x_90_);
lean_dec_ref(v___x_90_);
v___x_92_ = lean_box(v___x_91_);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_89_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed(lean_object* v_xs_95_, lean_object* v_body_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_getExpectedNumArgsAux___lam__0(v_xs_95_, v_body_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_body_96_);
lean_dec_ref(v_xs_95_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object* v_e_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___y_111_; lean_object* v___x_128_; uint8_t v_transparency_129_; lean_object* v___f_130_; uint8_t v___x_131_; uint8_t v___x_132_; uint8_t v___x_133_; 
v___x_128_ = l_Lean_Meta_Context_config(v_a_105_);
v_transparency_129_ = lean_ctor_get_uint8(v___x_128_, 9);
lean_dec_ref(v___x_128_);
v___f_130_ = ((lean_object*)(l_Lean_Meta_getExpectedNumArgsAux___closed__0));
v___x_131_ = 0;
v___x_132_ = 1;
v___x_133_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_129_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v_keyedConfig_134_; uint8_t v_trackZetaDelta_135_; lean_object* v_zetaDeltaSet_136_; lean_object* v_lctx_137_; lean_object* v_localInstances_138_; lean_object* v_defEqCtx_x3f_139_; lean_object* v_synthPendingDepth_140_; lean_object* v_customCanUnfoldPredicate_x3f_141_; uint8_t v_univApprox_142_; uint8_t v_inTypeClassResolution_143_; uint8_t v_cacheInferType_144_; lean_object* v_rewriteSet_x3f_145_; uint8_t v_rewriteFuelScope_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v_keyedConfig_134_ = lean_ctor_get(v_a_105_, 0);
v_trackZetaDelta_135_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*8);
v_zetaDeltaSet_136_ = lean_ctor_get(v_a_105_, 1);
v_lctx_137_ = lean_ctor_get(v_a_105_, 2);
v_localInstances_138_ = lean_ctor_get(v_a_105_, 3);
v_defEqCtx_x3f_139_ = lean_ctor_get(v_a_105_, 4);
v_synthPendingDepth_140_ = lean_ctor_get(v_a_105_, 5);
v_customCanUnfoldPredicate_x3f_141_ = lean_ctor_get(v_a_105_, 6);
v_univApprox_142_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_143_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*8 + 2);
v_cacheInferType_144_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_145_ = lean_ctor_get(v_a_105_, 7);
v_rewriteFuelScope_146_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_134_);
v___x_147_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_132_, v_keyedConfig_134_);
lean_inc(v_rewriteSet_x3f_145_);
lean_inc(v_customCanUnfoldPredicate_x3f_141_);
lean_inc(v_synthPendingDepth_140_);
lean_inc(v_defEqCtx_x3f_139_);
lean_inc_ref(v_localInstances_138_);
lean_inc_ref(v_lctx_137_);
lean_inc(v_zetaDeltaSet_136_);
v___x_148_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v_zetaDeltaSet_136_);
lean_ctor_set(v___x_148_, 2, v_lctx_137_);
lean_ctor_set(v___x_148_, 3, v_localInstances_138_);
lean_ctor_set(v___x_148_, 4, v_defEqCtx_x3f_139_);
lean_ctor_set(v___x_148_, 5, v_synthPendingDepth_140_);
lean_ctor_set(v___x_148_, 6, v_customCanUnfoldPredicate_x3f_141_);
lean_ctor_set(v___x_148_, 7, v_rewriteSet_x3f_145_);
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*8, v_trackZetaDelta_135_);
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*8 + 1, v_univApprox_142_);
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*8 + 2, v_inTypeClassResolution_143_);
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*8 + 3, v_cacheInferType_144_);
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*8 + 4, v_rewriteFuelScope_146_);
v___x_149_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_e_104_, v___f_130_, v___x_131_, v___x_131_, v___x_148_, v_a_106_, v_a_107_, v_a_108_);
lean_dec_ref_known(v___x_148_, 8);
v___y_111_ = v___x_149_;
goto v___jp_110_;
}
else
{
lean_object* v___x_150_; 
v___x_150_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_e_104_, v___f_130_, v___x_131_, v___x_131_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
v___y_111_ = v___x_150_;
goto v___jp_110_;
}
v___jp_110_:
{
if (lean_obj_tag(v___y_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
v_a_112_ = lean_ctor_get(v___y_111_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___y_111_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___y_111_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___y_111_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
v_a_120_ = lean_ctor_get(v___y_111_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___y_111_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___y_111_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___y_111_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___boxed(lean_object* v_e_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l_Lean_Meta_getExpectedNumArgsAux(v_e_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_);
lean_dec(v_a_155_);
lean_dec_ref(v_a_154_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object* v_e_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_Meta_getExpectedNumArgsAux(v_e_158_, v_a_159_, v_a_160_, v_a_161_, v_a_162_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_173_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_173_ == 0)
{
v___x_167_ = v___x_164_;
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_164_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v_fst_169_; lean_object* v___x_171_; 
v_fst_169_ = lean_ctor_get(v_a_165_, 0);
lean_inc(v_fst_169_);
lean_dec(v_a_165_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v_fst_169_);
v___x_171_ = v___x_167_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_fst_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
else
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_181_; 
v_a_174_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_181_ == 0)
{
v___x_176_ = v___x_164_;
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_164_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_181_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_179_; 
if (v_isShared_177_ == 0)
{
v___x_179_ = v___x_176_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_a_174_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs___boxed(lean_object* v_e_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_Meta_getExpectedNumArgs(v_e_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
return v_res_188_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0));
v___x_191_ = l_Lean_stringToMessageData(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2));
v___x_194_ = l_Lean_stringToMessageData(v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4));
v___x_197_ = l_Lean_stringToMessageData(v___x_196_);
return v___x_197_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7));
v___x_202_ = l_Lean_MessageData_ofFormat(v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(lean_object* v_config_205_, lean_object* v___y_206_, lean_object* v_targetType_207_, lean_object* v___y_208_, lean_object* v_term_x3f_209_, lean_object* v_conclusionType_x3f_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
uint8_t v_trackZetaDelta_216_; lean_object* v_zetaDeltaSet_217_; lean_object* v_lctx_218_; lean_object* v_localInstances_219_; lean_object* v_defEqCtx_x3f_220_; lean_object* v_synthPendingDepth_221_; lean_object* v_customCanUnfoldPredicate_x3f_222_; uint8_t v_univApprox_223_; uint8_t v_inTypeClassResolution_224_; uint8_t v_cacheInferType_225_; lean_object* v_rewriteSet_x3f_226_; uint8_t v_rewriteFuelScope_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_287_; 
v_trackZetaDelta_216_ = lean_ctor_get_uint8(v___y_211_, sizeof(void*)*8);
v_zetaDeltaSet_217_ = lean_ctor_get(v___y_211_, 1);
v_lctx_218_ = lean_ctor_get(v___y_211_, 2);
v_localInstances_219_ = lean_ctor_get(v___y_211_, 3);
v_defEqCtx_x3f_220_ = lean_ctor_get(v___y_211_, 4);
v_synthPendingDepth_221_ = lean_ctor_get(v___y_211_, 5);
v_customCanUnfoldPredicate_x3f_222_ = lean_ctor_get(v___y_211_, 6);
v_univApprox_223_ = lean_ctor_get_uint8(v___y_211_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_224_ = lean_ctor_get_uint8(v___y_211_, sizeof(void*)*8 + 2);
v_cacheInferType_225_ = lean_ctor_get_uint8(v___y_211_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_226_ = lean_ctor_get(v___y_211_, 7);
v_rewriteFuelScope_227_ = lean_ctor_get_uint8(v___y_211_, sizeof(void*)*8 + 4);
v_isSharedCheck_287_ = !lean_is_exclusive(v___y_211_);
if (v_isSharedCheck_287_ == 0)
{
lean_object* v_unused_288_; 
v_unused_288_ = lean_ctor_get(v___y_211_, 0);
lean_dec(v_unused_288_);
v___x_229_ = v___y_211_;
v_isShared_230_ = v_isSharedCheck_287_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_rewriteSet_x3f_226_);
lean_inc(v_customCanUnfoldPredicate_x3f_222_);
lean_inc(v_synthPendingDepth_221_);
lean_inc(v_defEqCtx_x3f_220_);
lean_inc(v_localInstances_219_);
lean_inc(v_lctx_218_);
lean_inc(v_zetaDeltaSet_217_);
lean_dec(v___y_211_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_287_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
uint64_t v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_231_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_205_);
v___x_232_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_232_, 0, v_config_205_);
lean_ctor_set_uint64(v___x_232_, sizeof(void*)*1, v___x_231_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 0, v___x_232_);
v___x_234_ = v___x_229_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_zetaDeltaSet_217_);
lean_ctor_set(v_reuseFailAlloc_286_, 2, v_lctx_218_);
lean_ctor_set(v_reuseFailAlloc_286_, 3, v_localInstances_219_);
lean_ctor_set(v_reuseFailAlloc_286_, 4, v_defEqCtx_x3f_220_);
lean_ctor_set(v_reuseFailAlloc_286_, 5, v_synthPendingDepth_221_);
lean_ctor_set(v_reuseFailAlloc_286_, 6, v_customCanUnfoldPredicate_x3f_222_);
lean_ctor_set(v_reuseFailAlloc_286_, 7, v_rewriteSet_x3f_226_);
lean_ctor_set_uint8(v_reuseFailAlloc_286_, sizeof(void*)*8, v_trackZetaDelta_216_);
lean_ctor_set_uint8(v_reuseFailAlloc_286_, sizeof(void*)*8 + 1, v_univApprox_223_);
lean_ctor_set_uint8(v_reuseFailAlloc_286_, sizeof(void*)*8 + 2, v_inTypeClassResolution_224_);
lean_ctor_set_uint8(v_reuseFailAlloc_286_, sizeof(void*)*8 + 3, v_cacheInferType_225_);
lean_ctor_set_uint8(v_reuseFailAlloc_286_, sizeof(void*)*8 + 4, v_rewriteFuelScope_227_);
v___x_234_ = v_reuseFailAlloc_286_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lean_Meta_addPPExplicitToExposeDiff(v___y_206_, v_targetType_207_, v___x_234_, v___y_212_, v___y_213_, v___y_214_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_277_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_277_ == 0)
{
v___x_238_ = v___x_235_;
v_isShared_239_ = v_isSharedCheck_277_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_a_236_);
lean_dec(v___x_235_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_277_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v_fst_240_; lean_object* v_snd_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_276_; 
v_fst_240_ = lean_ctor_get(v_a_236_, 0);
v_snd_241_ = lean_ctor_get(v_a_236_, 1);
v_isSharedCheck_276_ = !lean_is_exclusive(v_a_236_);
if (v_isSharedCheck_276_ == 0)
{
v___x_243_ = v_a_236_;
v_isShared_244_ = v_isSharedCheck_276_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_snd_241_);
lean_inc(v_fst_240_);
lean_dec(v_a_236_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_276_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_264_; 
if (lean_obj_tag(v_conclusionType_x3f_210_) == 0)
{
lean_object* v___x_274_; 
v___x_274_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9));
v___y_264_ = v___x_274_;
goto v___jp_263_;
}
else
{
lean_object* v___x_275_; 
v___x_275_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10));
v___y_264_ = v___x_275_;
goto v___jp_263_;
}
v___jp_245_:
{
lean_object* v___x_250_; 
if (v_isShared_244_ == 0)
{
lean_ctor_set_tag(v___x_243_, 7);
lean_ctor_set(v___x_243_, 1, v___y_248_);
lean_ctor_set(v___x_243_, 0, v___y_246_);
v___x_250_ = v___x_243_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___y_246_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___y_248_);
v___x_250_ = v_reuseFailAlloc_262_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_251_ = l_Lean_indentExpr(v_fst_240_);
v___x_252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1);
v___x_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = l_Lean_indentExpr(v_snd_241_);
v___x_256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___y_208_);
v___x_258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
lean_ctor_set(v___x_258_, 1, v___y_247_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_258_);
v___x_260_ = v___x_238_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_258_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
v___jp_263_:
{
lean_object* v___x_265_; 
lean_inc(v_snd_241_);
lean_inc(v_fst_240_);
v___x_265_ = l_Lean_Meta_mkUnfoldAxiomsNote(v_fst_240_, v_snd_241_, v___x_234_, v___y_212_, v___y_213_, v___y_214_);
lean_dec_ref(v___x_234_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
lean_dec_ref_known(v___x_265_, 1);
v___x_267_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3);
lean_inc_ref(v___y_264_);
v___x_268_ = l_Lean_stringToMessageData(v___y_264_);
v___x_269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_267_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5);
v___x_271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
if (lean_obj_tag(v_term_x3f_209_) == 0)
{
lean_object* v___x_272_; 
v___x_272_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8);
v___y_246_ = v___x_271_;
v___y_247_ = v_a_266_;
v___y_248_ = v___x_272_;
goto v___jp_245_;
}
else
{
lean_object* v_val_273_; 
v_val_273_ = lean_ctor_get(v_term_x3f_209_, 0);
lean_inc(v_val_273_);
lean_dec_ref_known(v_term_x3f_209_, 1);
v___y_246_ = v___x_271_;
v___y_247_ = v_a_266_;
v___y_248_ = v_val_273_;
goto v___jp_245_;
}
}
else
{
lean_del_object(v___x_243_);
lean_dec(v_snd_241_);
lean_dec(v_fst_240_);
lean_del_object(v___x_238_);
lean_dec(v_term_x3f_209_);
lean_dec_ref(v___y_208_);
return v___x_265_;
}
}
}
}
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec_ref(v___x_234_);
lean_dec(v_term_x3f_209_);
lean_dec_ref(v___y_208_);
v_a_278_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_235_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_235_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed(lean_object* v_config_289_, lean_object* v___y_290_, lean_object* v_targetType_291_, lean_object* v___y_292_, lean_object* v_term_x3f_293_, lean_object* v_conclusionType_x3f_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(v_config_289_, v___y_290_, v_targetType_291_, v___y_292_, v_term_x3f_293_, v_conclusionType_x3f_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec(v_conclusionType_x3f_294_);
return v_res_300_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0));
v___x_303_ = l_Lean_stringToMessageData(v___x_302_);
return v___x_303_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2));
v___x_306_ = l_Lean_stringToMessageData(v___x_305_);
return v___x_306_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4));
v___x_309_ = l_Lean_stringToMessageData(v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(lean_object* v_mvarId_313_, lean_object* v_eType_314_, lean_object* v_conclusionType_x3f_315_, lean_object* v_targetType_316_, lean_object* v_term_x3f_317_, uint8_t v_approx_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
lean_object* v___y_325_; lean_object* v___y_326_; lean_object* v___y_327_; lean_object* v___y_328_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___y_331_; lean_object* v___y_332_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v___y_346_; lean_object* v___y_347_; lean_object* v___y_348_; lean_object* v___y_349_; lean_object* v___y_350_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v___y_360_; lean_object* v___y_361_; lean_object* v___y_362_; lean_object* v___y_363_; lean_object* v___y_364_; lean_object* v_config_370_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___y_374_; 
if (v_approx_318_ == 0)
{
lean_object* v___x_377_; 
v___x_377_ = l_Lean_Meta_Context_config(v_a_319_);
v_config_370_ = v___x_377_;
v___y_371_ = v_a_319_;
v___y_372_ = v_a_320_;
v___y_373_ = v_a_321_;
v___y_374_ = v_a_322_;
goto v___jp_369_;
}
else
{
lean_object* v___x_378_; uint8_t v_constApprox_379_; uint8_t v_isDefEqStuckEx_380_; uint8_t v_unificationHints_381_; uint8_t v_proofIrrelevance_382_; uint8_t v_assignSyntheticOpaque_383_; uint8_t v_offsetCnstrs_384_; uint8_t v_transparency_385_; uint8_t v_etaStruct_386_; uint8_t v_univApprox_387_; uint8_t v_iota_388_; uint8_t v_beta_389_; uint8_t v_proj_390_; uint8_t v_zeta_391_; uint8_t v_zetaDelta_392_; uint8_t v_zetaUnused_393_; uint8_t v_zetaHave_394_; uint8_t v_canUnfoldPredicateConfig_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_418_; 
v___x_378_ = l_Lean_Meta_Context_config(v_a_319_);
v_constApprox_379_ = lean_ctor_get_uint8(v___x_378_, 3);
v_isDefEqStuckEx_380_ = lean_ctor_get_uint8(v___x_378_, 4);
v_unificationHints_381_ = lean_ctor_get_uint8(v___x_378_, 5);
v_proofIrrelevance_382_ = lean_ctor_get_uint8(v___x_378_, 6);
v_assignSyntheticOpaque_383_ = lean_ctor_get_uint8(v___x_378_, 7);
v_offsetCnstrs_384_ = lean_ctor_get_uint8(v___x_378_, 8);
v_transparency_385_ = lean_ctor_get_uint8(v___x_378_, 9);
v_etaStruct_386_ = lean_ctor_get_uint8(v___x_378_, 10);
v_univApprox_387_ = lean_ctor_get_uint8(v___x_378_, 11);
v_iota_388_ = lean_ctor_get_uint8(v___x_378_, 12);
v_beta_389_ = lean_ctor_get_uint8(v___x_378_, 13);
v_proj_390_ = lean_ctor_get_uint8(v___x_378_, 14);
v_zeta_391_ = lean_ctor_get_uint8(v___x_378_, 15);
v_zetaDelta_392_ = lean_ctor_get_uint8(v___x_378_, 16);
v_zetaUnused_393_ = lean_ctor_get_uint8(v___x_378_, 17);
v_zetaHave_394_ = lean_ctor_get_uint8(v___x_378_, 18);
v_canUnfoldPredicateConfig_395_ = lean_ctor_get_uint8(v___x_378_, 19);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_418_ == 0)
{
v___x_397_ = v___x_378_;
v_isShared_398_ = v_isSharedCheck_418_;
goto v_resetjp_396_;
}
else
{
lean_dec(v___x_378_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_418_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 3, v_constApprox_379_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 4, v_isDefEqStuckEx_380_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 5, v_unificationHints_381_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 6, v_proofIrrelevance_382_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 7, v_assignSyntheticOpaque_383_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 8, v_offsetCnstrs_384_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 9, v_transparency_385_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 10, v_etaStruct_386_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 11, v_univApprox_387_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 12, v_iota_388_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 13, v_beta_389_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 14, v_proj_390_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 15, v_zeta_391_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 16, v_zetaDelta_392_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 17, v_zetaUnused_393_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 18, v_zetaHave_394_);
lean_ctor_set_uint8(v_reuseFailAlloc_417_, 19, v_canUnfoldPredicateConfig_395_);
v___x_400_ = v_reuseFailAlloc_417_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
uint8_t v_trackZetaDelta_401_; lean_object* v_zetaDeltaSet_402_; lean_object* v_lctx_403_; lean_object* v_localInstances_404_; lean_object* v_defEqCtx_x3f_405_; lean_object* v_synthPendingDepth_406_; lean_object* v_customCanUnfoldPredicate_x3f_407_; uint8_t v_univApprox_408_; uint8_t v_inTypeClassResolution_409_; uint8_t v_cacheInferType_410_; lean_object* v_rewriteSet_x3f_411_; uint8_t v_rewriteFuelScope_412_; uint64_t v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
lean_ctor_set_uint8(v___x_400_, 0, v_approx_318_);
lean_ctor_set_uint8(v___x_400_, 1, v_approx_318_);
lean_ctor_set_uint8(v___x_400_, 2, v_approx_318_);
v_trackZetaDelta_401_ = lean_ctor_get_uint8(v_a_319_, sizeof(void*)*8);
v_zetaDeltaSet_402_ = lean_ctor_get(v_a_319_, 1);
v_lctx_403_ = lean_ctor_get(v_a_319_, 2);
v_localInstances_404_ = lean_ctor_get(v_a_319_, 3);
v_defEqCtx_x3f_405_ = lean_ctor_get(v_a_319_, 4);
v_synthPendingDepth_406_ = lean_ctor_get(v_a_319_, 5);
v_customCanUnfoldPredicate_x3f_407_ = lean_ctor_get(v_a_319_, 6);
v_univApprox_408_ = lean_ctor_get_uint8(v_a_319_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_409_ = lean_ctor_get_uint8(v_a_319_, sizeof(void*)*8 + 2);
v_cacheInferType_410_ = lean_ctor_get_uint8(v_a_319_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_411_ = lean_ctor_get(v_a_319_, 7);
v_rewriteFuelScope_412_ = lean_ctor_get_uint8(v_a_319_, sizeof(void*)*8 + 4);
v___x_413_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_400_);
v___x_414_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_414_, 0, v___x_400_);
lean_ctor_set_uint64(v___x_414_, sizeof(void*)*1, v___x_413_);
lean_inc(v_rewriteSet_x3f_411_);
lean_inc(v_customCanUnfoldPredicate_x3f_407_);
lean_inc(v_synthPendingDepth_406_);
lean_inc(v_defEqCtx_x3f_405_);
lean_inc_ref(v_localInstances_404_);
lean_inc_ref(v_lctx_403_);
lean_inc(v_zetaDeltaSet_402_);
v___x_415_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_415_, 0, v___x_414_);
lean_ctor_set(v___x_415_, 1, v_zetaDeltaSet_402_);
lean_ctor_set(v___x_415_, 2, v_lctx_403_);
lean_ctor_set(v___x_415_, 3, v_localInstances_404_);
lean_ctor_set(v___x_415_, 4, v_defEqCtx_x3f_405_);
lean_ctor_set(v___x_415_, 5, v_synthPendingDepth_406_);
lean_ctor_set(v___x_415_, 6, v_customCanUnfoldPredicate_x3f_407_);
lean_ctor_set(v___x_415_, 7, v_rewriteSet_x3f_411_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*8, v_trackZetaDelta_401_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*8 + 1, v_univApprox_408_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*8 + 2, v_inTypeClassResolution_409_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*8 + 3, v_cacheInferType_410_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*8 + 4, v_rewriteFuelScope_412_);
v___x_416_ = l_Lean_Meta_Context_config(v___x_415_);
lean_dec_ref_known(v___x_415_, 8);
v_config_370_ = v___x_416_;
v___y_371_ = v_a_319_;
v___y_372_ = v_a_320_;
v___y_373_ = v_a_321_;
v___y_374_ = v_a_322_;
goto v___jp_369_;
}
}
}
v___jp_324_:
{
lean_object* v___f_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
lean_inc_ref(v_targetType_316_);
v___f_333_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_333_, 0, v___y_325_);
lean_closure_set(v___f_333_, 1, v___y_326_);
lean_closure_set(v___f_333_, 2, v_targetType_316_);
lean_closure_set(v___f_333_, 3, v___y_332_);
lean_closure_set(v___f_333_, 4, v_term_x3f_317_);
lean_closure_set(v___f_333_, 5, v_conclusionType_x3f_315_);
v___x_334_ = lean_unsigned_to_nat(2u);
v___x_335_ = lean_mk_empty_array_with_capacity(v___x_334_);
v___x_336_ = lean_array_push(v___x_335_, v_eType_314_);
v___x_337_ = lean_array_push(v___x_336_, v_targetType_316_);
v___x_338_ = l_Lean_MessageData_ofLazyM(v___f_333_, v___x_337_);
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_inc(v___y_327_);
v___x_340_ = l_Lean_Meta_throwTacticEx___redArg(v___y_327_, v_mvarId_313_, v___x_339_, v___y_331_, v___y_330_, v___y_329_, v___y_328_);
return v___x_340_;
}
v___jp_341_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
lean_inc_ref(v___y_349_);
v___x_351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_351_, 0, v___y_349_);
lean_ctor_set(v___x_351_, 1, v___y_350_);
v___x_352_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1);
v___x_353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_351_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
lean_inc_ref(v_eType_314_);
v___x_354_ = l_Lean_indentExpr(v_eType_314_);
v___x_355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_353_);
lean_ctor_set(v___x_355_, 1, v___x_354_);
v___x_356_ = l_Lean_MessageData_note(v___x_355_);
v___y_325_ = v___y_342_;
v___y_326_ = v___y_343_;
v___y_327_ = v___y_344_;
v___y_328_ = v___y_345_;
v___y_329_ = v___y_346_;
v___y_330_ = v___y_347_;
v___y_331_ = v___y_348_;
v___y_332_ = v___x_356_;
goto v___jp_324_;
}
v___jp_357_:
{
if (lean_obj_tag(v_conclusionType_x3f_315_) == 0)
{
lean_object* v___x_365_; 
v___x_365_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3);
v___y_325_ = v___y_358_;
v___y_326_ = v___y_364_;
v___y_327_ = v___y_363_;
v___y_328_ = v___y_359_;
v___y_329_ = v___y_360_;
v___y_330_ = v___y_361_;
v___y_331_ = v___y_362_;
v___y_332_ = v___x_365_;
goto v___jp_324_;
}
else
{
lean_object* v___x_366_; 
v___x_366_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5);
if (lean_obj_tag(v_term_x3f_317_) == 0)
{
lean_object* v___x_367_; 
v___x_367_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8);
v___y_342_ = v___y_358_;
v___y_343_ = v___y_364_;
v___y_344_ = v___y_363_;
v___y_345_ = v___y_359_;
v___y_346_ = v___y_360_;
v___y_347_ = v___y_361_;
v___y_348_ = v___y_362_;
v___y_349_ = v___x_366_;
v___y_350_ = v___x_367_;
goto v___jp_341_;
}
else
{
lean_object* v_val_368_; 
v_val_368_ = lean_ctor_get(v_term_x3f_317_, 0);
lean_inc(v_val_368_);
v___y_342_ = v___y_358_;
v___y_343_ = v___y_364_;
v___y_344_ = v___y_363_;
v___y_345_ = v___y_359_;
v___y_346_ = v___y_360_;
v___y_347_ = v___y_361_;
v___y_348_ = v___y_362_;
v___y_349_ = v___x_366_;
v___y_350_ = v_val_368_;
goto v___jp_341_;
}
}
}
v___jp_369_:
{
lean_object* v___x_375_; 
v___x_375_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7));
if (lean_obj_tag(v_conclusionType_x3f_315_) == 0)
{
lean_inc_ref(v_eType_314_);
v___y_358_ = v_config_370_;
v___y_359_ = v___y_374_;
v___y_360_ = v___y_373_;
v___y_361_ = v___y_372_;
v___y_362_ = v___y_371_;
v___y_363_ = v___x_375_;
v___y_364_ = v_eType_314_;
goto v___jp_357_;
}
else
{
lean_object* v_val_376_; 
v_val_376_ = lean_ctor_get(v_conclusionType_x3f_315_, 0);
lean_inc(v_val_376_);
v___y_358_ = v_config_370_;
v___y_359_ = v___y_374_;
v___y_360_ = v___y_373_;
v___y_361_ = v___y_372_;
v___y_362_ = v___y_371_;
v___y_363_ = v___x_375_;
v___y_364_ = v_val_376_;
goto v___jp_357_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___boxed(lean_object* v_mvarId_419_, lean_object* v_eType_420_, lean_object* v_conclusionType_x3f_421_, lean_object* v_targetType_422_, lean_object* v_term_x3f_423_, lean_object* v_approx_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
uint8_t v_approx_boxed_430_; lean_object* v_res_431_; 
v_approx_boxed_430_ = lean_unbox(v_approx_424_);
v_res_431_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_419_, v_eType_420_, v_conclusionType_x3f_421_, v_targetType_422_, v_term_x3f_423_, v_approx_boxed_430_, v_a_425_, v_a_426_, v_a_427_, v_a_428_);
lean_dec(v_a_428_);
lean_dec_ref(v_a_427_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object* v_00_u03b1_432_, lean_object* v_mvarId_433_, lean_object* v_eType_434_, lean_object* v_conclusionType_x3f_435_, lean_object* v_targetType_436_, lean_object* v_term_x3f_437_, uint8_t v_approx_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_433_, v_eType_434_, v_conclusionType_x3f_435_, v_targetType_436_, v_term_x3f_437_, v_approx_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___boxed(lean_object* v_00_u03b1_445_, lean_object* v_mvarId_446_, lean_object* v_eType_447_, lean_object* v_conclusionType_x3f_448_, lean_object* v_targetType_449_, lean_object* v_term_x3f_450_, lean_object* v_approx_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
uint8_t v_approx_boxed_457_; lean_object* v_res_458_; 
v_approx_boxed_457_ = lean_unbox(v_approx_451_);
v_res_458_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(v_00_u03b1_445_, v_mvarId_446_, v_eType_447_, v_conclusionType_x3f_448_, v_targetType_449_, v_term_x3f_450_, v_approx_boxed_457_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
lean_dec(v_a_455_);
lean_dec_ref(v_a_454_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(lean_object* v_a_459_, lean_object* v_snd_460_, lean_object* v_fst_461_, lean_object* v_____r_462_, uint8_t v_progressAfterEx_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_469_, 0, v_a_459_);
v___x_470_ = lean_box(v_progressAfterEx_463_);
v___x_471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
lean_ctor_set(v___x_471_, 1, v_snd_460_);
v___x_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_472_, 0, v_fst_461_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_469_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0___boxed(lean_object* v_a_475_, lean_object* v_snd_476_, lean_object* v_fst_477_, lean_object* v_____r_478_, lean_object* v_progressAfterEx_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
uint8_t v_progressAfterEx_boxed_485_; lean_object* v_res_486_; 
v_progressAfterEx_boxed_485_ = lean_unbox(v_progressAfterEx_479_);
v_res_486_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_475_, v_snd_476_, v_fst_477_, v_____r_478_, v_progressAfterEx_boxed_485_, v___y_480_, v___y_481_, v___y_482_, v___y_483_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
lean_dec(v___y_481_);
lean_dec_ref(v___y_480_);
return v_res_486_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_490_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1));
v___x_491_ = l_Lean_MessageData_ofFormat(v___x_490_);
return v___x_491_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2);
v___x_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(uint8_t v_allowSynthFailures_494_, lean_object* v_tacticName_495_, lean_object* v_mvarId_496_, lean_object* v_as_497_, size_t v_sz_498_, size_t v_i_499_, lean_object* v_b_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_a_507_; lean_object* v_fst_512_; lean_object* v_fst_513_; lean_object* v_snd_514_; uint8_t v___x_517_; 
v___x_517_ = lean_usize_dec_lt(v_i_499_, v_sz_498_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
lean_dec(v_mvarId_496_);
lean_dec(v_tacticName_495_);
v___x_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_518_, 0, v_b_500_);
return v___x_518_;
}
else
{
lean_object* v_snd_519_; lean_object* v_fst_520_; lean_object* v_fst_521_; lean_object* v_snd_522_; lean_object* v_a_523_; lean_object* v_a_525_; lean_object* v___y_533_; lean_object* v___x_594_; 
v_snd_519_ = lean_ctor_get(v_b_500_, 1);
lean_inc(v_snd_519_);
v_fst_520_ = lean_ctor_get(v_b_500_, 0);
lean_inc(v_fst_520_);
lean_dec_ref(v_b_500_);
v_fst_521_ = lean_ctor_get(v_snd_519_, 0);
lean_inc(v_fst_521_);
v_snd_522_ = lean_ctor_get(v_snd_519_, 1);
lean_inc(v_snd_522_);
lean_dec(v_snd_519_);
v_a_523_ = lean_array_uget_borrowed(v_as_497_, v_i_499_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v_a_523_);
v___x_594_ = lean_infer_type(v_a_523_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_594_, 1);
v___x_596_ = lean_box(0);
v___x_597_ = l_Lean_Meta_synthInstance(v_a_595_, v___x_596_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_597_, 1);
v___x_599_ = lean_array_get_size(v_snd_522_);
v___x_600_ = lean_unsigned_to_nat(0u);
v___x_601_ = lean_nat_dec_eq(v___x_599_, v___x_600_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = lean_box(0);
lean_inc(v_snd_522_);
v___x_603_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_598_, v_snd_522_, v_fst_520_, v___x_602_, v___x_517_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
v___y_533_ = v___x_603_;
goto v___jp_532_;
}
else
{
lean_object* v___x_604_; uint8_t v___x_605_; lean_object* v___x_606_; 
v___x_604_ = lean_box(0);
v___x_605_ = lean_unbox(v_fst_521_);
lean_inc(v_snd_522_);
v___x_606_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_598_, v_snd_522_, v_fst_520_, v___x_604_, v___x_605_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
v___y_533_ = v___x_606_;
goto v___jp_532_;
}
}
else
{
lean_object* v_a_607_; 
lean_dec(v_fst_520_);
v_a_607_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_607_);
lean_dec_ref_known(v___x_597_, 1);
v_a_525_ = v_a_607_;
goto v___jp_524_;
}
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
lean_dec(v_snd_522_);
lean_dec(v_fst_521_);
lean_dec(v_fst_520_);
lean_dec(v_mvarId_496_);
lean_dec(v_tacticName_495_);
v_a_608_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_594_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_594_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
v___jp_524_:
{
uint8_t v___x_526_; 
v___x_526_ = l_Lean_Exception_isInterrupt(v_a_525_);
if (v___x_526_ == 0)
{
uint8_t v___x_527_; 
lean_inc_ref(v_a_525_);
v___x_527_ = l_Lean_Exception_isRuntime(v_a_525_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_528_, 0, v_a_525_);
lean_inc(v_a_523_);
v___x_529_ = lean_array_push(v_snd_522_, v_a_523_);
v_fst_512_ = v___x_528_;
v_fst_513_ = v_fst_521_;
v_snd_514_ = v___x_529_;
goto v___jp_511_;
}
else
{
lean_object* v___x_530_; 
lean_dec(v_snd_522_);
lean_dec(v_fst_521_);
lean_dec(v_mvarId_496_);
lean_dec(v_tacticName_495_);
v___x_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_530_, 0, v_a_525_);
return v___x_530_;
}
}
else
{
lean_object* v___x_531_; 
lean_dec(v_snd_522_);
lean_dec(v_fst_521_);
lean_dec(v_mvarId_496_);
lean_dec(v_tacticName_495_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_a_525_);
return v___x_531_;
}
}
v___jp_532_:
{
if (lean_obj_tag(v___y_533_) == 0)
{
lean_object* v_a_534_; lean_object* v_snd_535_; lean_object* v_snd_536_; lean_object* v_fst_537_; 
lean_dec(v_snd_522_);
lean_dec(v_fst_521_);
v_a_534_ = lean_ctor_get(v___y_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___y_533_, 1);
v_snd_535_ = lean_ctor_get(v_a_534_, 1);
lean_inc(v_snd_535_);
v_snd_536_ = lean_ctor_get(v_snd_535_, 1);
lean_inc(v_snd_536_);
v_fst_537_ = lean_ctor_get(v_a_534_, 0);
lean_inc(v_fst_537_);
lean_dec(v_a_534_);
if (lean_obj_tag(v_fst_537_) == 1)
{
lean_object* v_fst_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_588_; 
v_fst_538_ = lean_ctor_get(v_snd_535_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v_snd_535_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; 
v_unused_589_ = lean_ctor_get(v_snd_535_, 1);
lean_dec(v_unused_589_);
v___x_540_ = v_snd_535_;
v_isShared_541_ = v_isSharedCheck_588_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_fst_538_);
lean_dec(v_snd_535_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_588_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v_fst_542_; lean_object* v_snd_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_587_; 
v_fst_542_ = lean_ctor_get(v_snd_536_, 0);
v_snd_543_ = lean_ctor_get(v_snd_536_, 1);
v_isSharedCheck_587_ = !lean_is_exclusive(v_snd_536_);
if (v_isSharedCheck_587_ == 0)
{
v___x_545_ = v_snd_536_;
v_isShared_546_ = v_isSharedCheck_587_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_snd_543_);
lean_inc(v_fst_542_);
lean_dec(v_snd_536_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_587_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v_val_547_; lean_object* v___x_548_; 
v_val_547_ = lean_ctor_get(v_fst_537_, 0);
lean_inc(v_val_547_);
lean_dec_ref_known(v_fst_537_, 1);
lean_inc(v_a_523_);
v___x_548_ = l_Lean_Meta_isExprDefEq(v_a_523_, v_val_547_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; uint8_t v___x_550_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_548_, 1);
v___x_550_ = lean_unbox(v_a_549_);
lean_dec(v_a_549_);
if (v___x_550_ == 0)
{
if (v_allowSynthFailures_494_ == 0)
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3);
lean_inc(v_mvarId_496_);
lean_inc(v_tacticName_495_);
v___x_552_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_495_, v_mvarId_496_, v___x_551_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v___x_554_; 
lean_dec_ref_known(v___x_552_, 1);
if (v_isShared_546_ == 0)
{
v___x_554_ = v___x_545_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_fst_542_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v_snd_543_);
v___x_554_ = v_reuseFailAlloc_558_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_556_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v___x_554_);
v___x_556_ = v___x_540_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_fst_538_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
v_a_507_ = v___x_556_;
goto v___jp_506_;
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_del_object(v___x_545_);
lean_dec(v_snd_543_);
lean_dec(v_fst_542_);
lean_del_object(v___x_540_);
lean_dec(v_fst_538_);
lean_dec(v_mvarId_496_);
lean_dec(v_tacticName_495_);
v_a_559_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_552_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_552_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
else
{
lean_object* v___x_568_; 
if (v_isShared_546_ == 0)
{
v___x_568_ = v___x_545_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_fst_542_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_snd_543_);
v___x_568_ = v_reuseFailAlloc_572_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
lean_object* v___x_570_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v___x_568_);
v___x_570_ = v___x_540_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_fst_538_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v___x_568_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
v_a_507_ = v___x_570_;
goto v___jp_506_;
}
}
}
}
else
{
lean_object* v___x_574_; 
if (v_isShared_546_ == 0)
{
v___x_574_ = v___x_545_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_fst_542_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_snd_543_);
v___x_574_ = v_reuseFailAlloc_578_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_576_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v___x_574_);
v___x_576_ = v___x_540_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_fst_538_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v___x_574_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
v_a_507_ = v___x_576_;
goto v___jp_506_;
}
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_del_object(v___x_545_);
lean_dec(v_snd_543_);
lean_dec(v_fst_542_);
lean_del_object(v___x_540_);
lean_dec(v_fst_538_);
lean_dec(v_mvarId_496_);
lean_dec(v_tacticName_495_);
v_a_579_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_548_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_548_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
}
else
{
lean_object* v_fst_590_; lean_object* v_fst_591_; lean_object* v_snd_592_; 
lean_dec(v_fst_537_);
v_fst_590_ = lean_ctor_get(v_snd_535_, 0);
lean_inc(v_fst_590_);
lean_dec(v_snd_535_);
v_fst_591_ = lean_ctor_get(v_snd_536_, 0);
lean_inc(v_fst_591_);
v_snd_592_ = lean_ctor_get(v_snd_536_, 1);
lean_inc(v_snd_592_);
lean_dec(v_snd_536_);
v_fst_512_ = v_fst_590_;
v_fst_513_ = v_fst_591_;
v_snd_514_ = v_snd_592_;
goto v___jp_511_;
}
}
else
{
lean_object* v_a_593_; 
v_a_593_ = lean_ctor_get(v___y_533_, 0);
lean_inc(v_a_593_);
lean_dec_ref_known(v___y_533_, 1);
v_a_525_ = v_a_593_;
goto v___jp_524_;
}
}
}
v___jp_506_:
{
size_t v___x_508_; size_t v___x_509_; 
v___x_508_ = ((size_t)1ULL);
v___x_509_ = lean_usize_add(v_i_499_, v___x_508_);
v_i_499_ = v___x_509_;
v_b_500_ = v_a_507_;
goto _start;
}
v___jp_511_:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_515_, 0, v_fst_513_);
lean_ctor_set(v___x_515_, 1, v_snd_514_);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v_fst_512_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v_a_507_ = v___x_516_;
goto v___jp_506_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___boxed(lean_object* v_allowSynthFailures_616_, lean_object* v_tacticName_617_, lean_object* v_mvarId_618_, lean_object* v_as_619_, lean_object* v_sz_620_, lean_object* v_i_621_, lean_object* v_b_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
uint8_t v_allowSynthFailures_boxed_628_; size_t v_sz_boxed_629_; size_t v_i_boxed_630_; lean_object* v_res_631_; 
v_allowSynthFailures_boxed_628_ = lean_unbox(v_allowSynthFailures_616_);
v_sz_boxed_629_ = lean_unbox_usize(v_sz_620_);
lean_dec(v_sz_620_);
v_i_boxed_630_ = lean_unbox_usize(v_i_621_);
lean_dec(v_i_621_);
v_res_631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(v_allowSynthFailures_boxed_628_, v_tacticName_617_, v_mvarId_618_, v_as_619_, v_sz_boxed_629_, v_i_boxed_630_, v_b_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec_ref(v_as_619_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(lean_object* v_tacticName_641_, lean_object* v_mvarId_642_, uint8_t v_allowSynthFailures_643_, lean_object* v_mvars_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_postponed_650_; lean_object* v___x_651_; size_t v_sz_652_; size_t v___x_653_; lean_object* v___x_654_; 
v_postponed_650_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_651_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2));
v_sz_652_ = lean_array_size(v_mvars_644_);
v___x_653_ = ((size_t)0ULL);
v___x_654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(v_allowSynthFailures_643_, v_tacticName_641_, v_mvarId_642_, v_mvars_644_, v_sz_652_, v___x_653_, v___x_651_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_677_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_677_ == 0)
{
v___x_657_ = v___x_654_;
v_isShared_658_ = v_isSharedCheck_677_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_654_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_677_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v_fst_659_; 
v_fst_659_ = lean_ctor_get(v_a_655_, 0);
lean_inc(v_fst_659_);
if (lean_obj_tag(v_fst_659_) == 1)
{
lean_object* v_snd_660_; lean_object* v_fst_661_; uint8_t v___x_662_; 
v_snd_660_ = lean_ctor_get(v_a_655_, 1);
lean_inc(v_snd_660_);
lean_dec(v_a_655_);
v_fst_661_ = lean_ctor_get(v_snd_660_, 0);
v___x_662_ = lean_unbox(v_fst_661_);
if (v___x_662_ == 0)
{
lean_dec(v_snd_660_);
if (v_allowSynthFailures_643_ == 0)
{
lean_object* v_val_663_; lean_object* v___x_665_; 
v_val_663_ = lean_ctor_get(v_fst_659_, 0);
lean_inc(v_val_663_);
lean_dec_ref_known(v_fst_659_, 1);
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 1);
lean_ctor_set(v___x_657_, 0, v_val_663_);
v___x_665_ = v___x_657_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_val_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
else
{
lean_object* v___x_668_; 
lean_dec_ref_known(v_fst_659_, 1);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v_postponed_650_);
v___x_668_ = v___x_657_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_postponed_650_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
else
{
lean_object* v_snd_670_; lean_object* v___x_672_; 
lean_dec_ref_known(v_fst_659_, 1);
v_snd_670_ = lean_ctor_get(v_snd_660_, 1);
lean_inc(v_snd_670_);
lean_dec(v_snd_660_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v_snd_670_);
v___x_672_ = v___x_657_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_snd_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
else
{
lean_object* v___x_675_; 
lean_dec(v_fst_659_);
lean_dec(v_a_655_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v_postponed_650_);
v___x_675_ = v___x_657_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_postponed_650_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
v_a_678_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_654_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_654_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___boxed(lean_object* v_tacticName_686_, lean_object* v_mvarId_687_, lean_object* v_allowSynthFailures_688_, lean_object* v_mvars_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
uint8_t v_allowSynthFailures_boxed_695_; lean_object* v_res_696_; 
v_allowSynthFailures_boxed_695_ = lean_unbox(v_allowSynthFailures_688_);
v_res_696_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(v_tacticName_686_, v_mvarId_687_, v_allowSynthFailures_boxed_695_, v_mvars_689_, v_a_690_, v_a_691_, v_a_692_, v_a_693_);
lean_dec(v_a_693_);
lean_dec_ref(v_a_692_);
lean_dec(v_a_691_);
lean_dec_ref(v_a_690_);
lean_dec_ref(v_mvars_689_);
return v_res_696_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_697_, lean_object* v_i_698_, lean_object* v_k_699_){
_start:
{
lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_700_ = lean_array_get_size(v_keys_697_);
v___x_701_ = lean_nat_dec_lt(v_i_698_, v___x_700_);
if (v___x_701_ == 0)
{
lean_dec(v_i_698_);
return v___x_701_;
}
else
{
lean_object* v_k_x27_702_; uint8_t v___x_703_; 
v_k_x27_702_ = lean_array_fget_borrowed(v_keys_697_, v_i_698_);
v___x_703_ = l_Lean_instBEqMVarId_beq(v_k_699_, v_k_x27_702_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_unsigned_to_nat(1u);
v___x_705_ = lean_nat_add(v_i_698_, v___x_704_);
lean_dec(v_i_698_);
v_i_698_ = v___x_705_;
goto _start;
}
else
{
lean_dec(v_i_698_);
return v___x_701_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_707_, lean_object* v_i_708_, lean_object* v_k_709_){
_start:
{
uint8_t v_res_710_; lean_object* v_r_711_; 
v_res_710_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_707_, v_i_708_, v_k_709_);
lean_dec(v_k_709_);
lean_dec_ref(v_keys_707_);
v_r_711_ = lean_box(v_res_710_);
return v_r_711_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(lean_object* v_x_712_, size_t v_x_713_, lean_object* v_x_714_){
_start:
{
if (lean_obj_tag(v_x_712_) == 0)
{
lean_object* v_es_715_; lean_object* v___x_716_; size_t v___x_717_; size_t v___x_718_; lean_object* v_j_719_; lean_object* v___x_720_; 
v_es_715_ = lean_ctor_get(v_x_712_, 0);
v___x_716_ = lean_box(2);
v___x_717_ = ((size_t)31ULL);
v___x_718_ = lean_usize_land(v_x_713_, v___x_717_);
v_j_719_ = lean_usize_to_nat(v___x_718_);
v___x_720_ = lean_array_get_borrowed(v___x_716_, v_es_715_, v_j_719_);
lean_dec(v_j_719_);
switch(lean_obj_tag(v___x_720_))
{
case 0:
{
lean_object* v_key_721_; uint8_t v___x_722_; 
v_key_721_ = lean_ctor_get(v___x_720_, 0);
v___x_722_ = l_Lean_instBEqMVarId_beq(v_x_714_, v_key_721_);
return v___x_722_;
}
case 1:
{
lean_object* v_node_723_; size_t v___x_724_; size_t v___x_725_; 
v_node_723_ = lean_ctor_get(v___x_720_, 0);
v___x_724_ = ((size_t)5ULL);
v___x_725_ = lean_usize_shift_right(v_x_713_, v___x_724_);
v_x_712_ = v_node_723_;
v_x_713_ = v___x_725_;
goto _start;
}
default: 
{
uint8_t v___x_727_; 
v___x_727_ = 0;
return v___x_727_;
}
}
}
else
{
lean_object* v_ks_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_ks_728_ = lean_ctor_get(v_x_712_, 0);
v___x_729_ = lean_unsigned_to_nat(0u);
v___x_730_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_728_, v___x_729_, v_x_714_);
return v___x_730_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_731_, lean_object* v_x_732_, lean_object* v_x_733_){
_start:
{
size_t v_x_2814__boxed_734_; uint8_t v_res_735_; lean_object* v_r_736_; 
v_x_2814__boxed_734_ = lean_unbox_usize(v_x_732_);
lean_dec(v_x_732_);
v_res_735_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_731_, v_x_2814__boxed_734_, v_x_733_);
lean_dec(v_x_733_);
lean_dec_ref(v_x_731_);
v_r_736_ = lean_box(v_res_735_);
return v_r_736_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(lean_object* v_x_737_, lean_object* v_x_738_){
_start:
{
uint64_t v___x_739_; size_t v___x_740_; uint8_t v___x_741_; 
v___x_739_ = l_Lean_instHashableMVarId_hash(v_x_738_);
v___x_740_ = lean_uint64_to_usize(v___x_739_);
v___x_741_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_737_, v___x_740_, v_x_738_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg___boxed(lean_object* v_x_742_, lean_object* v_x_743_){
_start:
{
uint8_t v_res_744_; lean_object* v_r_745_; 
v_res_744_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_x_742_, v_x_743_);
lean_dec(v_x_743_);
lean_dec_ref(v_x_742_);
v_r_745_ = lean_box(v_res_744_);
return v_r_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(lean_object* v_mvarId_746_, lean_object* v___y_747_){
_start:
{
lean_object* v___x_749_; lean_object* v_mctx_750_; lean_object* v_eAssignment_751_; uint8_t v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_749_ = lean_st_ref_get(v___y_747_);
v_mctx_750_ = lean_ctor_get(v___x_749_, 0);
lean_inc_ref(v_mctx_750_);
lean_dec(v___x_749_);
v_eAssignment_751_ = lean_ctor_get(v_mctx_750_, 8);
lean_inc_ref(v_eAssignment_751_);
lean_dec_ref(v_mctx_750_);
v___x_752_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_eAssignment_751_, v_mvarId_746_);
lean_dec_ref(v_eAssignment_751_);
v___x_753_ = lean_box(v___x_752_);
v___x_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg___boxed(lean_object* v_mvarId_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v_mvarId_755_, v___y_756_);
lean_dec(v___y_756_);
lean_dec(v_mvarId_755_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(uint8_t v_synthAssignedInstances_759_, lean_object* v_as_760_, size_t v_sz_761_, size_t v_i_762_, lean_object* v_b_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v_a_770_; uint8_t v___x_774_; 
v___x_774_ = lean_usize_dec_lt(v_i_762_, v_sz_761_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; 
v___x_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_775_, 0, v_b_763_);
return v___x_775_;
}
else
{
lean_object* v_snd_776_; lean_object* v_fst_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_826_; 
v_snd_776_ = lean_ctor_get(v_b_763_, 1);
v_fst_777_ = lean_ctor_get(v_b_763_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v_b_763_);
if (v_isSharedCheck_826_ == 0)
{
v___x_779_ = v_b_763_;
v_isShared_780_ = v_isSharedCheck_826_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_snd_776_);
lean_inc(v_fst_777_);
lean_dec(v_b_763_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_826_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v_array_781_; lean_object* v_start_782_; lean_object* v_stop_783_; uint8_t v___x_784_; 
v_array_781_ = lean_ctor_get(v_snd_776_, 0);
v_start_782_ = lean_ctor_get(v_snd_776_, 1);
v_stop_783_ = lean_ctor_get(v_snd_776_, 2);
v___x_784_ = lean_nat_dec_lt(v_start_782_, v_stop_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_786_; 
if (v_isShared_780_ == 0)
{
v___x_786_ = v___x_779_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_fst_777_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_snd_776_);
v___x_786_ = v_reuseFailAlloc_788_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; 
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
}
else
{
lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_822_; 
lean_inc(v_stop_783_);
lean_inc(v_start_782_);
lean_inc_ref(v_array_781_);
v_isSharedCheck_822_ = !lean_is_exclusive(v_snd_776_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; lean_object* v_unused_824_; lean_object* v_unused_825_; 
v_unused_823_ = lean_ctor_get(v_snd_776_, 2);
lean_dec(v_unused_823_);
v_unused_824_ = lean_ctor_get(v_snd_776_, 1);
lean_dec(v_unused_824_);
v_unused_825_ = lean_ctor_get(v_snd_776_, 0);
lean_dec(v_unused_825_);
v___x_790_ = v_snd_776_;
v_isShared_791_ = v_isSharedCheck_822_;
goto v_resetjp_789_;
}
else
{
lean_dec(v_snd_776_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_822_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_792_ = lean_array_fget(v_array_781_, v_start_782_);
v___x_793_ = lean_unsigned_to_nat(1u);
v___x_794_ = lean_nat_add(v_start_782_, v___x_793_);
lean_dec(v_start_782_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 1, v___x_794_);
v___x_796_ = v___x_790_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_array_781_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v___x_794_);
lean_ctor_set(v_reuseFailAlloc_821_, 2, v_stop_783_);
v___x_796_ = v_reuseFailAlloc_821_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
uint8_t v___x_797_; uint8_t v___x_798_; 
v___x_797_ = lean_unbox(v___x_792_);
lean_dec(v___x_792_);
v___x_798_ = l_Lean_BinderInfo_isInstImplicit(v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_800_; 
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 1, v___x_796_);
v___x_800_ = v___x_779_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_fst_777_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v___x_796_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
v_a_770_ = v___x_800_;
goto v___jp_769_;
}
}
else
{
lean_object* v_a_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v_a_802_ = lean_array_uget_borrowed(v_as_760_, v_i_762_);
v___x_803_ = l_Lean_Expr_mvarId_x21(v_a_802_);
v___x_804_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_803_, v___y_765_);
lean_dec(v___x_803_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_804_, 1);
if (v_synthAssignedInstances_759_ == 0)
{
uint8_t v___x_811_; 
v___x_811_ = lean_unbox(v_a_805_);
lean_dec(v_a_805_);
if (v___x_811_ == 0)
{
goto v___jp_806_;
}
else
{
lean_object* v___x_812_; 
lean_del_object(v___x_779_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v_fst_777_);
lean_ctor_set(v___x_812_, 1, v___x_796_);
v_a_770_ = v___x_812_;
goto v___jp_769_;
}
}
else
{
lean_dec(v_a_805_);
goto v___jp_806_;
}
v___jp_806_:
{
lean_object* v___x_807_; lean_object* v___x_809_; 
lean_inc(v_a_802_);
v___x_807_ = lean_array_push(v_fst_777_, v_a_802_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 1, v___x_796_);
lean_ctor_set(v___x_779_, 0, v___x_807_);
v___x_809_ = v___x_779_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v___x_796_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
v_a_770_ = v___x_809_;
goto v___jp_769_;
}
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_dec_ref(v___x_796_);
lean_del_object(v___x_779_);
lean_dec(v_fst_777_);
v_a_813_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_804_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_804_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
}
}
}
}
v___jp_769_:
{
size_t v___x_771_; size_t v___x_772_; 
v___x_771_ = ((size_t)1ULL);
v___x_772_ = lean_usize_add(v_i_762_, v___x_771_);
v_i_762_ = v___x_772_;
v_b_763_ = v_a_770_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1___boxed(lean_object* v_synthAssignedInstances_827_, lean_object* v_as_828_, lean_object* v_sz_829_, lean_object* v_i_830_, lean_object* v_b_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_837_; size_t v_sz_boxed_838_; size_t v_i_boxed_839_; lean_object* v_res_840_; 
v_synthAssignedInstances_boxed_837_ = lean_unbox(v_synthAssignedInstances_827_);
v_sz_boxed_838_ = lean_unbox_usize(v_sz_829_);
lean_dec(v_sz_829_);
v_i_boxed_839_ = lean_unbox_usize(v_i_830_);
lean_dec(v_i_830_);
v_res_840_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(v_synthAssignedInstances_boxed_837_, v_as_828_, v_sz_boxed_838_, v_i_boxed_839_, v_b_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec_ref(v_as_828_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(lean_object* v_tacticName_841_, lean_object* v_mvarId_842_, uint8_t v_allowSynthFailures_843_, lean_object* v_a_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; uint8_t v___x_852_; 
v___x_850_ = lean_array_get_size(v_a_844_);
v___x_851_ = lean_unsigned_to_nat(0u);
v___x_852_ = lean_nat_dec_eq(v___x_850_, v___x_851_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; 
lean_inc(v_mvarId_842_);
lean_inc(v_tacticName_841_);
v___x_853_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(v_tacticName_841_, v_mvarId_842_, v_allowSynthFailures_843_, v_a_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
lean_dec_ref(v_a_844_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_a_854_);
lean_dec_ref_known(v___x_853_, 1);
v_a_844_ = v_a_854_;
goto _start;
}
else
{
lean_dec(v_mvarId_842_);
lean_dec(v_tacticName_841_);
return v___x_853_;
}
}
else
{
lean_object* v___x_856_; 
lean_dec(v_mvarId_842_);
lean_dec(v_tacticName_841_);
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v_a_844_);
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg___boxed(lean_object* v_tacticName_857_, lean_object* v_mvarId_858_, lean_object* v_allowSynthFailures_859_, lean_object* v_a_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
uint8_t v_allowSynthFailures_boxed_866_; lean_object* v_res_867_; 
v_allowSynthFailures_boxed_866_ = lean_unbox(v_allowSynthFailures_859_);
v_res_867_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(v_tacticName_857_, v_mvarId_858_, v_allowSynthFailures_boxed_866_, v_a_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances(lean_object* v_tacticName_868_, lean_object* v_mvarId_869_, lean_object* v_mvarsNew_870_, lean_object* v_binderInfos_871_, uint8_t v_synthAssignedInstances_872_, uint8_t v_allowSynthFailures_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_){
_start:
{
lean_object* v___x_879_; lean_object* v_todo_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; size_t v_sz_884_; size_t v___x_885_; lean_object* v___x_886_; 
v___x_879_ = lean_unsigned_to_nat(0u);
v_todo_880_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_881_ = lean_array_get_size(v_binderInfos_871_);
v___x_882_ = l_Array_toSubarray___redArg(v_binderInfos_871_, v___x_879_, v___x_881_);
v___x_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_883_, 0, v_todo_880_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v_sz_884_ = lean_array_size(v_mvarsNew_870_);
v___x_885_ = ((size_t)0ULL);
v___x_886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(v_synthAssignedInstances_872_, v_mvarsNew_870_, v_sz_884_, v___x_885_, v___x_883_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v_fst_888_; lean_object* v___x_889_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
v_fst_888_ = lean_ctor_get(v_a_887_, 0);
lean_inc(v_fst_888_);
lean_dec(v_a_887_);
v___x_889_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(v_tacticName_868_, v_mvarId_869_, v_allowSynthFailures_873_, v_fst_888_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_897_; 
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_897_ == 0)
{
lean_object* v_unused_898_; 
v_unused_898_ = lean_ctor_get(v___x_889_, 0);
lean_dec(v_unused_898_);
v___x_891_ = v___x_889_;
v_isShared_892_ = v_isSharedCheck_897_;
goto v_resetjp_890_;
}
else
{
lean_dec(v___x_889_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_897_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_895_; 
v___x_893_ = lean_box(0);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_893_);
v___x_895_ = v___x_891_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_893_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
v_a_899_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_889_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_889_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec(v_mvarId_869_);
lean_dec(v_tacticName_868_);
v_a_907_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_886_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_886_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object* v_tacticName_915_, lean_object* v_mvarId_916_, lean_object* v_mvarsNew_917_, lean_object* v_binderInfos_918_, lean_object* v_synthAssignedInstances_919_, lean_object* v_allowSynthFailures_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_926_; uint8_t v_allowSynthFailures_boxed_927_; lean_object* v_res_928_; 
v_synthAssignedInstances_boxed_926_ = lean_unbox(v_synthAssignedInstances_919_);
v_allowSynthFailures_boxed_927_ = lean_unbox(v_allowSynthFailures_920_);
v_res_928_ = l_Lean_Meta_synthAppInstances(v_tacticName_915_, v_mvarId_916_, v_mvarsNew_917_, v_binderInfos_918_, v_synthAssignedInstances_boxed_926_, v_allowSynthFailures_boxed_927_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec_ref(v_mvarsNew_917_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(lean_object* v_mvarId_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v_mvarId_929_, v___y_931_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___boxed(lean_object* v_mvarId_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(v_mvarId_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v_mvarId_936_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2(lean_object* v_tacticName_943_, lean_object* v_mvarId_944_, uint8_t v_allowSynthFailures_945_, lean_object* v_inst_946_, lean_object* v_a_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(v_tacticName_943_, v_mvarId_944_, v_allowSynthFailures_945_, v_a_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___boxed(lean_object* v_tacticName_954_, lean_object* v_mvarId_955_, lean_object* v_allowSynthFailures_956_, lean_object* v_inst_957_, lean_object* v_a_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
uint8_t v_allowSynthFailures_boxed_964_; lean_object* v_res_965_; 
v_allowSynthFailures_boxed_964_ = lean_unbox(v_allowSynthFailures_956_);
v_res_965_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2(v_tacticName_954_, v_mvarId_955_, v_allowSynthFailures_boxed_964_, v_inst_957_, v_a_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
return v_res_965_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(lean_object* v_00_u03b2_966_, lean_object* v_x_967_, lean_object* v_x_968_){
_start:
{
uint8_t v___x_969_; 
v___x_969_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_x_967_, v_x_968_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___boxed(lean_object* v_00_u03b2_970_, lean_object* v_x_971_, lean_object* v_x_972_){
_start:
{
uint8_t v_res_973_; lean_object* v_r_974_; 
v_res_973_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(v_00_u03b2_970_, v_x_971_, v_x_972_);
lean_dec(v_x_972_);
lean_dec_ref(v_x_971_);
v_r_974_ = lean_box(v_res_973_);
return v_r_974_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_975_, lean_object* v_x_976_, size_t v_x_977_, lean_object* v_x_978_){
_start:
{
uint8_t v___x_979_; 
v___x_979_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_976_, v_x_977_, v_x_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_980_, lean_object* v_x_981_, lean_object* v_x_982_, lean_object* v_x_983_){
_start:
{
size_t v_x_3146__boxed_984_; uint8_t v_res_985_; lean_object* v_r_986_; 
v_x_3146__boxed_984_ = lean_unbox_usize(v_x_982_);
lean_dec(v_x_982_);
v_res_985_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(v_00_u03b2_980_, v_x_981_, v_x_3146__boxed_984_, v_x_983_);
lean_dec(v_x_983_);
lean_dec_ref(v_x_981_);
v_r_986_ = lean_box(v_res_985_);
return v_r_986_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_987_, lean_object* v_keys_988_, lean_object* v_vals_989_, lean_object* v_heq_990_, lean_object* v_i_991_, lean_object* v_k_992_){
_start:
{
uint8_t v___x_993_; 
v___x_993_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_988_, v_i_991_, v_k_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_994_, lean_object* v_keys_995_, lean_object* v_vals_996_, lean_object* v_heq_997_, lean_object* v_i_998_, lean_object* v_k_999_){
_start:
{
uint8_t v_res_1000_; lean_object* v_r_1001_; 
v_res_1000_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_994_, v_keys_995_, v_vals_996_, v_heq_997_, v_i_998_, v_k_999_);
lean_dec(v_k_999_);
lean_dec_ref(v_vals_996_);
lean_dec_ref(v_keys_995_);
v_r_1001_ = lean_box(v_res_1000_);
return v_r_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(lean_object* v_newMVars_1002_, lean_object* v_binderInfos_1003_, lean_object* v_a_1004_, lean_object* v_n_1005_, lean_object* v_i_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_zero_1012_; uint8_t v_isZero_1013_; 
v_zero_1012_ = lean_unsigned_to_nat(0u);
v_isZero_1013_ = lean_nat_dec_eq(v_i_1006_, v_zero_1012_);
if (v_isZero_1013_ == 1)
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
lean_dec(v_i_1006_);
lean_dec(v_a_1004_);
v___x_1014_ = lean_box(0);
v___x_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
return v___x_1015_;
}
else
{
uint8_t v___x_1016_; lean_object* v_one_1017_; lean_object* v_n_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v_a_1024_; uint8_t v___x_1025_; 
v___x_1016_ = 0;
v_one_1017_ = lean_unsigned_to_nat(1u);
v_n_1018_ = lean_nat_sub(v_i_1006_, v_one_1017_);
lean_dec(v_i_1006_);
v___x_1019_ = lean_nat_sub(v_n_1005_, v_n_1018_);
v___x_1020_ = lean_nat_sub(v___x_1019_, v_one_1017_);
lean_dec(v___x_1019_);
v___x_1021_ = lean_array_fget_borrowed(v_newMVars_1002_, v___x_1020_);
v___x_1022_ = l_Lean_Expr_mvarId_x21(v___x_1021_);
v___x_1023_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_1022_, v___y_1008_);
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref(v___x_1023_);
v___x_1025_ = lean_unbox(v_a_1024_);
lean_dec(v_a_1024_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1027_; uint8_t v___x_1028_; uint8_t v___x_1029_; 
v___x_1026_ = lean_box(v___x_1016_);
v___x_1027_ = lean_array_get(v___x_1026_, v_binderInfos_1003_, v___x_1020_);
lean_dec(v___x_1020_);
lean_dec(v___x_1026_);
v___x_1028_ = lean_unbox(v___x_1027_);
lean_dec(v___x_1027_);
v___x_1029_ = l_Lean_BinderInfo_isInstImplicit(v___x_1028_);
if (v___x_1029_ == 0)
{
lean_object* v___x_1030_; 
lean_inc(v___x_1022_);
v___x_1030_ = l_Lean_MVarId_getTag(v___x_1022_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v___x_1030_, 1);
lean_inc(v_a_1004_);
v___x_1032_ = l_Lean_Meta_appendTag(v_a_1004_, v_a_1031_);
lean_dec(v_a_1031_);
v___x_1033_ = l_Lean_MVarId_setTag___redArg(v___x_1022_, v___x_1032_, v___y_1008_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_dec_ref_known(v___x_1033_, 1);
v_i_1006_ = v_n_1018_;
goto _start;
}
else
{
lean_dec(v_n_1018_);
lean_dec(v_a_1004_);
return v___x_1033_;
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v___x_1022_);
lean_dec(v_n_1018_);
lean_dec(v_a_1004_);
v_a_1035_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1030_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1030_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
else
{
lean_dec(v___x_1022_);
v_i_1006_ = v_n_1018_;
goto _start;
}
}
else
{
lean_dec(v___x_1022_);
lean_dec(v___x_1020_);
v_i_1006_ = v_n_1018_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___boxed(lean_object* v_newMVars_1045_, lean_object* v_binderInfos_1046_, lean_object* v_a_1047_, lean_object* v_n_1048_, lean_object* v_i_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_1045_, v_binderInfos_1046_, v_a_1047_, v_n_1048_, v_i_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v_n_1048_);
lean_dec_ref(v_binderInfos_1046_);
lean_dec_ref(v_newMVars_1045_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag(lean_object* v_mvarId_1056_, lean_object* v_newMVars_1057_, lean_object* v_binderInfos_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = l_Lean_instInhabitedExpr;
v___x_1065_ = l_Lean_MVarId_getTag(v_mvarId_1056_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1083_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1068_ = v___x_1065_;
v_isShared_1069_ = v_isSharedCheck_1083_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1065_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1083_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v___x_1070_ = lean_array_get_size(v_newMVars_1057_);
v___x_1071_ = lean_unsigned_to_nat(1u);
v___x_1072_ = lean_nat_dec_eq(v___x_1070_, v___x_1071_);
if (v___x_1072_ == 0)
{
uint8_t v___x_1073_; 
v___x_1073_ = l_Lean_Name_isAnonymous(v_a_1066_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; 
lean_del_object(v___x_1068_);
v___x_1074_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_1057_, v_binderInfos_1058_, v_a_1066_, v___x_1070_, v___x_1070_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_);
return v___x_1074_;
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1077_; 
lean_dec(v_a_1066_);
v___x_1075_ = lean_box(0);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 0, v___x_1075_);
v___x_1077_ = v___x_1068_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
else
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
lean_del_object(v___x_1068_);
v___x_1079_ = lean_unsigned_to_nat(0u);
v___x_1080_ = lean_array_get_borrowed(v___x_1064_, v_newMVars_1057_, v___x_1079_);
v___x_1081_ = l_Lean_Expr_mvarId_x21(v___x_1080_);
v___x_1082_ = l_Lean_MVarId_setTag___redArg(v___x_1081_, v_a_1066_, v_a_1060_);
return v___x_1082_;
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
v_a_1084_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1065_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1065_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object* v_mvarId_1092_, lean_object* v_newMVars_1093_, lean_object* v_binderInfos_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lean_Meta_appendParentTag(v_mvarId_1092_, v_newMVars_1093_, v_binderInfos_1094_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_);
lean_dec(v_a_1098_);
lean_dec_ref(v_a_1097_);
lean_dec(v_a_1096_);
lean_dec_ref(v_a_1095_);
lean_dec_ref(v_binderInfos_1094_);
lean_dec_ref(v_newMVars_1093_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(lean_object* v_newMVars_1101_, lean_object* v_binderInfos_1102_, lean_object* v_a_1103_, lean_object* v_n_1104_, lean_object* v_i_1105_, lean_object* v_a_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_1101_, v_binderInfos_1102_, v_a_1103_, v_n_1104_, v_i_1105_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___boxed(lean_object* v_newMVars_1113_, lean_object* v_binderInfos_1114_, lean_object* v_a_1115_, lean_object* v_n_1116_, lean_object* v_i_1117_, lean_object* v_a_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(v_newMVars_1113_, v_binderInfos_1114_, v_a_1115_, v_n_1116_, v_i_1117_, v_a_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v_n_1116_);
lean_dec_ref(v_binderInfos_1114_);
lean_dec_ref(v_newMVars_1113_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars(lean_object* v_tacticName_1125_, lean_object* v_mvarId_1126_, lean_object* v_newMVars_1127_, lean_object* v_binderInfos_1128_, uint8_t v_synthAssignedInstances_1129_, uint8_t v_allowSynthFailures_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = l_Lean_Meta_synthAppInstances(v_tacticName_1125_, v_mvarId_1126_, v_newMVars_1127_, v_binderInfos_1128_, v_synthAssignedInstances_1129_, v_allowSynthFailures_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object* v_tacticName_1137_, lean_object* v_mvarId_1138_, lean_object* v_newMVars_1139_, lean_object* v_binderInfos_1140_, lean_object* v_synthAssignedInstances_1141_, lean_object* v_allowSynthFailures_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_1148_; uint8_t v_allowSynthFailures_boxed_1149_; lean_object* v_res_1150_; 
v_synthAssignedInstances_boxed_1148_ = lean_unbox(v_synthAssignedInstances_1141_);
v_allowSynthFailures_boxed_1149_ = lean_unbox(v_allowSynthFailures_1142_);
v_res_1150_ = l_Lean_Meta_postprocessAppMVars(v_tacticName_1137_, v_mvarId_1138_, v_newMVars_1139_, v_binderInfos_1140_, v_synthAssignedInstances_boxed_1148_, v_allowSynthFailures_boxed_1149_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
lean_dec(v_a_1144_);
lean_dec_ref(v_a_1143_);
lean_dec_ref(v_newMVars_1139_);
return v_res_1150_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(lean_object* v_mvar_1151_, lean_object* v_mvarId_1152_){
_start:
{
lean_object* v___x_1153_; uint8_t v___x_1154_; 
v___x_1153_ = l_Lean_Expr_mvarId_x21(v_mvar_1151_);
v___x_1154_ = l_Lean_instBEqMVarId_beq(v_mvarId_1152_, v___x_1153_);
lean_dec(v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed(lean_object* v_mvar_1155_, lean_object* v_mvarId_1156_){
_start:
{
uint8_t v_res_1157_; lean_object* v_r_1158_; 
v_res_1157_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(v_mvar_1155_, v_mvarId_1156_);
lean_dec(v_mvarId_1156_);
lean_dec_ref(v_mvar_1155_);
v_r_1158_ = lean_box(v_res_1157_);
return v_r_1158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(lean_object* v_mvar_1159_, lean_object* v_as_1160_, size_t v_i_1161_, size_t v_stop_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
uint8_t v___x_1172_; 
v___x_1172_ = lean_usize_dec_eq(v_i_1161_, v_stop_1162_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1173_ = lean_array_uget_borrowed(v_as_1160_, v_i_1161_);
v___x_1174_ = lean_expr_eqv(v_mvar_1159_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___f_1175_; uint8_t v___x_1176_; lean_object* v___x_1177_; 
lean_inc_ref(v_mvar_1159_);
v___f_1175_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1175_, 0, v_mvar_1159_);
v___x_1176_ = 1;
lean_inc(v___y_1166_);
lean_inc_ref(v___y_1165_);
lean_inc(v___y_1164_);
lean_inc_ref(v___y_1163_);
lean_inc(v___x_1173_);
v___x_1177_ = lean_infer_type(v___x_1173_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1188_; 
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1180_ = v___x_1177_;
v_isShared_1181_ = v_isSharedCheck_1188_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1177_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1188_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_box(0);
v___x_1183_ = l_Lean_FindMVar_main(v___f_1175_, v_a_1178_, v___x_1182_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_del_object(v___x_1180_);
goto v___jp_1168_;
}
else
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
lean_dec_ref_known(v___x_1183_, 1);
lean_dec_ref(v_mvar_1159_);
v___x_1184_ = lean_box(v___x_1176_);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 0, v___x_1184_);
v___x_1186_ = v___x_1180_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
else
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
lean_dec_ref(v___f_1175_);
lean_dec_ref(v_mvar_1159_);
v_a_1189_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_1177_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1177_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
else
{
goto v___jp_1168_;
}
}
else
{
uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_dec_ref(v_mvar_1159_);
v___x_1197_ = 0;
v___x_1198_ = lean_box(v___x_1197_);
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
v___jp_1168_:
{
size_t v___x_1169_; size_t v___x_1170_; 
v___x_1169_ = ((size_t)1ULL);
v___x_1170_ = lean_usize_add(v_i_1161_, v___x_1169_);
v_i_1161_ = v___x_1170_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___boxed(lean_object* v_mvar_1200_, lean_object* v_as_1201_, lean_object* v_i_1202_, lean_object* v_stop_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
size_t v_i_boxed_1209_; size_t v_stop_boxed_1210_; lean_object* v_res_1211_; 
v_i_boxed_1209_ = lean_unbox_usize(v_i_1202_);
lean_dec(v_i_1202_);
v_stop_boxed_1210_ = lean_unbox_usize(v_stop_1203_);
lean_dec(v_stop_1203_);
v_res_1211_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(v_mvar_1200_, v_as_1201_, v_i_boxed_1209_, v_stop_boxed_1210_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec_ref(v_as_1201_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object* v_mvar_1212_, lean_object* v_otherMVars_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v___x_1219_ = lean_unsigned_to_nat(0u);
v___x_1220_ = lean_array_get_size(v_otherMVars_1213_);
v___x_1221_ = lean_nat_dec_lt(v___x_1219_, v___x_1220_);
if (v___x_1221_ == 0)
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
lean_dec_ref(v_mvar_1212_);
v___x_1222_ = lean_box(v___x_1221_);
v___x_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
return v___x_1223_;
}
else
{
if (v___x_1221_ == 0)
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
lean_dec_ref(v_mvar_1212_);
v___x_1224_ = lean_box(v___x_1221_);
v___x_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
return v___x_1225_;
}
else
{
size_t v___x_1226_; size_t v___x_1227_; lean_object* v___x_1228_; 
v___x_1226_ = ((size_t)0ULL);
v___x_1227_ = lean_usize_of_nat(v___x_1220_);
v___x_1228_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(v_mvar_1212_, v_otherMVars_1213_, v___x_1226_, v___x_1227_, v_a_1214_, v_a_1215_, v_a_1216_, v_a_1217_);
return v___x_1228_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object* v_mvar_1229_, lean_object* v_otherMVars_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(v_mvar_1229_, v_otherMVars_1230_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_);
lean_dec(v_a_1234_);
lean_dec_ref(v_a_1233_);
lean_dec(v_a_1232_);
lean_dec_ref(v_a_1231_);
lean_dec_ref(v_otherMVars_1230_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(lean_object* v_mvars_1237_, lean_object* v_as_1238_, size_t v_i_1239_, size_t v_stop_1240_, lean_object* v_b_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_a_1248_; uint8_t v___x_1252_; 
v___x_1252_ = lean_usize_dec_eq(v_i_1239_, v_stop_1240_);
if (v___x_1252_ == 0)
{
lean_object* v_fst_1253_; lean_object* v_snd_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1279_; 
v_fst_1253_ = lean_ctor_get(v_b_1241_, 0);
v_snd_1254_ = lean_ctor_get(v_b_1241_, 1);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_b_1241_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1256_ = v_b_1241_;
v_isShared_1257_ = v_isSharedCheck_1279_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_snd_1254_);
lean_inc(v_fst_1253_);
lean_dec(v_b_1241_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1279_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1258_; lean_object* v_currMVarId_1259_; lean_object* v___x_1260_; 
v___x_1258_ = lean_array_uget_borrowed(v_as_1238_, v_i_1239_);
v_currMVarId_1259_ = l_Lean_Expr_mvarId_x21(v___x_1258_);
lean_inc(v___x_1258_);
v___x_1260_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(v___x_1258_, v_mvars_1237_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; uint8_t v___x_1262_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___x_1260_, 1);
v___x_1262_ = lean_unbox(v_a_1261_);
lean_dec(v_a_1261_);
if (v___x_1262_ == 0)
{
lean_object* v___x_1263_; lean_object* v___x_1265_; 
v___x_1263_ = lean_array_push(v_fst_1253_, v_currMVarId_1259_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 0, v___x_1263_);
v___x_1265_ = v___x_1256_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1263_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_snd_1254_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
v_a_1248_ = v___x_1265_;
goto v___jp_1247_;
}
}
else
{
lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1267_ = lean_array_push(v_snd_1254_, v_currMVarId_1259_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 1, v___x_1267_);
v___x_1269_ = v___x_1256_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_fst_1253_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
v_a_1248_ = v___x_1269_;
goto v___jp_1247_;
}
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
lean_dec(v_currMVarId_1259_);
lean_del_object(v___x_1256_);
lean_dec(v_snd_1254_);
lean_dec(v_fst_1253_);
v_a_1271_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1260_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1260_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
}
else
{
lean_object* v___x_1280_; 
v___x_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1280_, 0, v_b_1241_);
return v___x_1280_;
}
v___jp_1247_:
{
size_t v___x_1249_; size_t v___x_1250_; 
v___x_1249_ = ((size_t)1ULL);
v___x_1250_ = lean_usize_add(v_i_1239_, v___x_1249_);
v_i_1239_ = v___x_1250_;
v_b_1241_ = v_a_1248_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0___boxed(lean_object* v_mvars_1281_, lean_object* v_as_1282_, lean_object* v_i_1283_, lean_object* v_stop_1284_, lean_object* v_b_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
size_t v_i_boxed_1291_; size_t v_stop_boxed_1292_; lean_object* v_res_1293_; 
v_i_boxed_1291_ = lean_unbox_usize(v_i_1283_);
lean_dec(v_i_1283_);
v_stop_boxed_1292_ = lean_unbox_usize(v_stop_1284_);
lean_dec(v_stop_1284_);
v_res_1293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1281_, v_as_1282_, v_i_boxed_1291_, v_stop_boxed_1292_, v_b_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec_ref(v_as_1282_);
lean_dec_ref(v_mvars_1281_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(lean_object* v_mvars_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1304_ = lean_unsigned_to_nat(0u);
v___x_1305_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1));
v___x_1306_ = lean_array_get_size(v_mvars_1298_);
v___x_1307_ = lean_nat_dec_lt(v___x_1304_, v___x_1306_);
if (v___x_1307_ == 0)
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1305_);
return v___x_1308_;
}
else
{
size_t v___x_1309_; size_t v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = ((size_t)0ULL);
v___x_1310_ = lean_usize_of_nat(v___x_1306_);
v___x_1311_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1298_, v_mvars_1298_, v___x_1309_, v___x_1310_, v___x_1305_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_);
return v___x_1311_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___boxed(lean_object* v_mvars_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
lean_dec(v_a_1316_);
lean_dec_ref(v_a_1315_);
lean_dec(v_a_1314_);
lean_dec_ref(v_a_1313_);
lean_dec_ref(v_mvars_1312_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(lean_object* v_a_1319_, lean_object* v_a_1320_){
_start:
{
if (lean_obj_tag(v_a_1319_) == 0)
{
lean_object* v___x_1321_; 
v___x_1321_ = l_List_reverse___redArg(v_a_1320_);
return v___x_1321_;
}
else
{
lean_object* v_head_1322_; lean_object* v_tail_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1332_; 
v_head_1322_ = lean_ctor_get(v_a_1319_, 0);
v_tail_1323_ = lean_ctor_get(v_a_1319_, 1);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_a_1319_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1325_ = v_a_1319_;
v_isShared_1326_ = v_isSharedCheck_1332_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_tail_1323_);
lean_inc(v_head_1322_);
lean_dec(v_a_1319_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1332_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1327_ = l_Lean_Expr_mvarId_x21(v_head_1322_);
lean_dec(v_head_1322_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 1, v_a_1320_);
lean_ctor_set(v___x_1325_, 0, v___x_1327_);
v___x_1329_ = v___x_1325_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1327_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v_a_1320_);
v___x_1329_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
v_a_1319_ = v_tail_1323_;
v_a_1320_ = v___x_1329_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(lean_object* v_mvars_1333_, uint8_t v_x_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_){
_start:
{
switch(v_x_1334_)
{
case 0:
{
lean_object* v___x_1340_; 
v___x_1340_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1333_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_);
lean_dec_ref(v_mvars_1333_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1353_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1343_ = v___x_1340_;
v_isShared_1344_ = v_isSharedCheck_1353_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1340_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1353_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v_fst_1345_; lean_object* v_snd_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1351_; 
v_fst_1345_ = lean_ctor_get(v_a_1341_, 0);
lean_inc(v_fst_1345_);
v_snd_1346_ = lean_ctor_get(v_a_1341_, 1);
lean_inc(v_snd_1346_);
lean_dec(v_a_1341_);
v___x_1347_ = lean_array_to_list(v_fst_1345_);
v___x_1348_ = lean_array_to_list(v_snd_1346_);
v___x_1349_ = l_List_appendTR___redArg(v___x_1347_, v___x_1348_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___x_1349_);
v___x_1351_ = v___x_1343_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
else
{
lean_object* v_a_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1361_; 
v_a_1354_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1356_ = v___x_1340_;
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_a_1354_);
lean_dec(v___x_1340_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1361_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1359_; 
if (v_isShared_1357_ == 0)
{
v___x_1359_ = v___x_1356_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v_a_1354_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
}
case 1:
{
lean_object* v___x_1362_; 
v___x_1362_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1333_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_);
lean_dec_ref(v_mvars_1333_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1372_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1372_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1372_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v_fst_1367_; lean_object* v___x_1368_; lean_object* v___x_1370_; 
v_fst_1367_ = lean_ctor_get(v_a_1363_, 0);
lean_inc(v_fst_1367_);
lean_dec(v_a_1363_);
v___x_1368_ = lean_array_to_list(v_fst_1367_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1368_);
v___x_1370_ = v___x_1365_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v___x_1368_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
v_a_1373_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1362_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1362_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
default: 
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1381_ = lean_array_to_list(v_mvars_1333_);
v___x_1382_ = lean_box(0);
v___x_1383_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(v___x_1381_, v___x_1382_);
v___x_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
return v___x_1384_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals___boxed(lean_object* v_mvars_1385_, lean_object* v_x_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_){
_start:
{
uint8_t v_x_731__boxed_1392_; lean_object* v_res_1393_; 
v_x_731__boxed_1392_ = lean_unbox(v_x_1386_);
v_res_1393_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(v_mvars_1385_, v_x_731__boxed_1392_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_);
lean_dec(v_a_1390_);
lean_dec_ref(v_a_1389_);
lean_dec(v_a_1388_);
lean_dec_ref(v_a_1387_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(uint8_t v_approx_1394_, lean_object* v_a_1395_, lean_object* v_b_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_){
_start:
{
if (v_approx_1394_ == 0)
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1395_, v_b_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_);
return v___x_1402_;
}
else
{
lean_object* v___x_1403_; uint8_t v_constApprox_1404_; uint8_t v_isDefEqStuckEx_1405_; uint8_t v_unificationHints_1406_; uint8_t v_proofIrrelevance_1407_; uint8_t v_assignSyntheticOpaque_1408_; uint8_t v_offsetCnstrs_1409_; uint8_t v_transparency_1410_; uint8_t v_etaStruct_1411_; uint8_t v_univApprox_1412_; uint8_t v_iota_1413_; uint8_t v_beta_1414_; uint8_t v_proj_1415_; uint8_t v_zeta_1416_; uint8_t v_zetaDelta_1417_; uint8_t v_zetaUnused_1418_; uint8_t v_zetaHave_1419_; uint8_t v_canUnfoldPredicateConfig_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1443_; 
v___x_1403_ = l_Lean_Meta_Context_config(v_a_1397_);
v_constApprox_1404_ = lean_ctor_get_uint8(v___x_1403_, 3);
v_isDefEqStuckEx_1405_ = lean_ctor_get_uint8(v___x_1403_, 4);
v_unificationHints_1406_ = lean_ctor_get_uint8(v___x_1403_, 5);
v_proofIrrelevance_1407_ = lean_ctor_get_uint8(v___x_1403_, 6);
v_assignSyntheticOpaque_1408_ = lean_ctor_get_uint8(v___x_1403_, 7);
v_offsetCnstrs_1409_ = lean_ctor_get_uint8(v___x_1403_, 8);
v_transparency_1410_ = lean_ctor_get_uint8(v___x_1403_, 9);
v_etaStruct_1411_ = lean_ctor_get_uint8(v___x_1403_, 10);
v_univApprox_1412_ = lean_ctor_get_uint8(v___x_1403_, 11);
v_iota_1413_ = lean_ctor_get_uint8(v___x_1403_, 12);
v_beta_1414_ = lean_ctor_get_uint8(v___x_1403_, 13);
v_proj_1415_ = lean_ctor_get_uint8(v___x_1403_, 14);
v_zeta_1416_ = lean_ctor_get_uint8(v___x_1403_, 15);
v_zetaDelta_1417_ = lean_ctor_get_uint8(v___x_1403_, 16);
v_zetaUnused_1418_ = lean_ctor_get_uint8(v___x_1403_, 17);
v_zetaHave_1419_ = lean_ctor_get_uint8(v___x_1403_, 18);
v_canUnfoldPredicateConfig_1420_ = lean_ctor_get_uint8(v___x_1403_, 19);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1422_ = v___x_1403_;
v_isShared_1423_ = v_isSharedCheck_1443_;
goto v_resetjp_1421_;
}
else
{
lean_dec(v___x_1403_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1443_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1425_; 
if (v_isShared_1423_ == 0)
{
v___x_1425_ = v___x_1422_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 3, v_constApprox_1404_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 4, v_isDefEqStuckEx_1405_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 5, v_unificationHints_1406_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 6, v_proofIrrelevance_1407_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 7, v_assignSyntheticOpaque_1408_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 8, v_offsetCnstrs_1409_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 9, v_transparency_1410_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 10, v_etaStruct_1411_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 11, v_univApprox_1412_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 12, v_iota_1413_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 13, v_beta_1414_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 14, v_proj_1415_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 15, v_zeta_1416_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 16, v_zetaDelta_1417_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 17, v_zetaUnused_1418_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 18, v_zetaHave_1419_);
lean_ctor_set_uint8(v_reuseFailAlloc_1442_, 19, v_canUnfoldPredicateConfig_1420_);
v___x_1425_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
uint8_t v_trackZetaDelta_1426_; lean_object* v_zetaDeltaSet_1427_; lean_object* v_lctx_1428_; lean_object* v_localInstances_1429_; lean_object* v_defEqCtx_x3f_1430_; lean_object* v_synthPendingDepth_1431_; lean_object* v_customCanUnfoldPredicate_x3f_1432_; uint8_t v_univApprox_1433_; uint8_t v_inTypeClassResolution_1434_; uint8_t v_cacheInferType_1435_; lean_object* v_rewriteSet_x3f_1436_; uint8_t v_rewriteFuelScope_1437_; uint64_t v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; 
lean_ctor_set_uint8(v___x_1425_, 0, v_approx_1394_);
lean_ctor_set_uint8(v___x_1425_, 1, v_approx_1394_);
lean_ctor_set_uint8(v___x_1425_, 2, v_approx_1394_);
v_trackZetaDelta_1426_ = lean_ctor_get_uint8(v_a_1397_, sizeof(void*)*8);
v_zetaDeltaSet_1427_ = lean_ctor_get(v_a_1397_, 1);
v_lctx_1428_ = lean_ctor_get(v_a_1397_, 2);
v_localInstances_1429_ = lean_ctor_get(v_a_1397_, 3);
v_defEqCtx_x3f_1430_ = lean_ctor_get(v_a_1397_, 4);
v_synthPendingDepth_1431_ = lean_ctor_get(v_a_1397_, 5);
v_customCanUnfoldPredicate_x3f_1432_ = lean_ctor_get(v_a_1397_, 6);
v_univApprox_1433_ = lean_ctor_get_uint8(v_a_1397_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_1434_ = lean_ctor_get_uint8(v_a_1397_, sizeof(void*)*8 + 2);
v_cacheInferType_1435_ = lean_ctor_get_uint8(v_a_1397_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_1436_ = lean_ctor_get(v_a_1397_, 7);
v_rewriteFuelScope_1437_ = lean_ctor_get_uint8(v_a_1397_, sizeof(void*)*8 + 4);
v___x_1438_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1425_);
v___x_1439_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1439_, 0, v___x_1425_);
lean_ctor_set_uint64(v___x_1439_, sizeof(void*)*1, v___x_1438_);
lean_inc(v_rewriteSet_x3f_1436_);
lean_inc(v_customCanUnfoldPredicate_x3f_1432_);
lean_inc(v_synthPendingDepth_1431_);
lean_inc(v_defEqCtx_x3f_1430_);
lean_inc_ref(v_localInstances_1429_);
lean_inc_ref(v_lctx_1428_);
lean_inc(v_zetaDeltaSet_1427_);
v___x_1440_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
lean_ctor_set(v___x_1440_, 1, v_zetaDeltaSet_1427_);
lean_ctor_set(v___x_1440_, 2, v_lctx_1428_);
lean_ctor_set(v___x_1440_, 3, v_localInstances_1429_);
lean_ctor_set(v___x_1440_, 4, v_defEqCtx_x3f_1430_);
lean_ctor_set(v___x_1440_, 5, v_synthPendingDepth_1431_);
lean_ctor_set(v___x_1440_, 6, v_customCanUnfoldPredicate_x3f_1432_);
lean_ctor_set(v___x_1440_, 7, v_rewriteSet_x3f_1436_);
lean_ctor_set_uint8(v___x_1440_, sizeof(void*)*8, v_trackZetaDelta_1426_);
lean_ctor_set_uint8(v___x_1440_, sizeof(void*)*8 + 1, v_univApprox_1433_);
lean_ctor_set_uint8(v___x_1440_, sizeof(void*)*8 + 2, v_inTypeClassResolution_1434_);
lean_ctor_set_uint8(v___x_1440_, sizeof(void*)*8 + 3, v_cacheInferType_1435_);
lean_ctor_set_uint8(v___x_1440_, sizeof(void*)*8 + 4, v_rewriteFuelScope_1437_);
v___x_1441_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1395_, v_b_1396_, v___x_1440_, v_a_1398_, v_a_1399_, v_a_1400_);
lean_dec_ref_known(v___x_1440_, 8);
return v___x_1441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply___boxed(lean_object* v_approx_1444_, lean_object* v_a_1445_, lean_object* v_b_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_){
_start:
{
uint8_t v_approx_boxed_1452_; lean_object* v_res_1453_; 
v_approx_boxed_1452_ = lean_unbox(v_approx_1444_);
v_res_1453_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_approx_boxed_1452_, v_a_1445_, v_b_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_);
lean_dec(v_a_1450_);
lean_dec_ref(v_a_1449_);
lean_dec(v_a_1448_);
lean_dec_ref(v_a_1447_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(lean_object* v_mvarId_1454_, lean_object* v_cfg_1455_, lean_object* v_term_x3f_1456_, lean_object* v_targetType_1457_, lean_object* v_eType_1458_, lean_object* v_rangeNumArgs_1459_, lean_object* v_i_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_){
_start:
{
lean_object* v_conclusionType_x3f_1467_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v_lower_1474_; lean_object* v_upper_1475_; uint8_t v___x_1476_; 
v_lower_1474_ = lean_ctor_get(v_rangeNumArgs_1459_, 0);
v_upper_1475_ = lean_ctor_get(v_rangeNumArgs_1459_, 1);
v___x_1476_ = lean_nat_dec_lt(v_i_1460_, v_upper_1475_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; uint8_t v___x_1478_; 
lean_dec(v_i_1460_);
v___x_1477_ = lean_unsigned_to_nat(0u);
v___x_1478_ = lean_nat_dec_eq(v_lower_1474_, v___x_1477_);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; uint8_t v___x_1480_; lean_object* v___x_1481_; 
lean_inc(v_lower_1474_);
v___x_1479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1479_, 0, v_lower_1474_);
v___x_1480_ = 0;
lean_inc_ref(v_eType_1458_);
v___x_1481_ = l_Lean_Meta_forallMetaTelescopeReducing(v_eType_1458_, v___x_1479_, v___x_1480_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v_snd_1483_; lean_object* v_snd_1484_; lean_object* v___x_1485_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref_known(v___x_1481_, 1);
v_snd_1483_ = lean_ctor_get(v_a_1482_, 1);
lean_inc(v_snd_1483_);
lean_dec(v_a_1482_);
v_snd_1484_ = lean_ctor_get(v_snd_1483_, 1);
lean_inc(v_snd_1484_);
lean_dec(v_snd_1483_);
v___x_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1485_, 0, v_snd_1484_);
v_conclusionType_x3f_1467_ = v___x_1485_;
v___y_1468_ = v_a_1461_;
v___y_1469_ = v_a_1462_;
v___y_1470_ = v_a_1463_;
v___y_1471_ = v_a_1464_;
goto v___jp_1466_;
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec_ref(v_eType_1458_);
lean_dec_ref(v_targetType_1457_);
lean_dec(v_term_x3f_1456_);
lean_dec(v_mvarId_1454_);
v_a_1486_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1481_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1481_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
else
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_box(0);
v_conclusionType_x3f_1467_ = v___x_1494_;
v___y_1468_ = v_a_1461_;
v___y_1469_ = v_a_1462_;
v___y_1470_ = v_a_1463_;
v___y_1471_ = v_a_1464_;
goto v___jp_1466_;
}
}
else
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Lean_Meta_saveState___redArg(v_a_1462_, v_a_1464_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1497_; uint8_t v___x_1498_; lean_object* v___x_1499_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
lean_inc(v_i_1460_);
v___x_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1497_, 0, v_i_1460_);
v___x_1498_ = 0;
lean_inc_ref(v_eType_1458_);
v___x_1499_ = l_Lean_Meta_forallMetaTelescopeReducing(v_eType_1458_, v___x_1497_, v___x_1498_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v_snd_1501_; lean_object* v_fst_1502_; lean_object* v_fst_1503_; lean_object* v_snd_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1542_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1500_);
lean_dec_ref_known(v___x_1499_, 1);
v_snd_1501_ = lean_ctor_get(v_a_1500_, 1);
lean_inc(v_snd_1501_);
v_fst_1502_ = lean_ctor_get(v_a_1500_, 0);
lean_inc(v_fst_1502_);
lean_dec(v_a_1500_);
v_fst_1503_ = lean_ctor_get(v_snd_1501_, 0);
v_snd_1504_ = lean_ctor_get(v_snd_1501_, 1);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_snd_1501_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1506_ = v_snd_1501_;
v_isShared_1507_ = v_isSharedCheck_1542_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_snd_1504_);
lean_inc(v_fst_1503_);
lean_dec(v_snd_1501_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1542_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
uint8_t v_approx_1508_; lean_object* v___x_1509_; 
v_approx_1508_ = lean_ctor_get_uint8(v_cfg_1455_, 3);
lean_inc_ref(v_targetType_1457_);
v___x_1509_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_approx_1508_, v_snd_1504_, v_targetType_1457_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1533_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1512_ = v___x_1509_;
v_isShared_1513_ = v_isSharedCheck_1533_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1509_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1533_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
uint8_t v___x_1514_; 
v___x_1514_ = lean_unbox(v_a_1510_);
lean_dec(v_a_1510_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; 
lean_del_object(v___x_1512_);
lean_del_object(v___x_1506_);
lean_dec(v_fst_1503_);
lean_dec(v_fst_1502_);
v___x_1515_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1496_, v_a_1462_, v_a_1464_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
lean_dec_ref_known(v___x_1515_, 1);
v___x_1516_ = lean_unsigned_to_nat(1u);
v___x_1517_ = lean_nat_add(v_i_1460_, v___x_1516_);
lean_dec(v_i_1460_);
v_i_1460_ = v___x_1517_;
goto _start;
}
else
{
lean_object* v_a_1519_; lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1526_; 
lean_dec(v_i_1460_);
lean_dec_ref(v_eType_1458_);
lean_dec_ref(v_targetType_1457_);
lean_dec(v_term_x3f_1456_);
lean_dec(v_mvarId_1454_);
v_a_1519_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1521_ = v___x_1515_;
v_isShared_1522_ = v_isSharedCheck_1526_;
goto v_resetjp_1520_;
}
else
{
lean_inc(v_a_1519_);
lean_dec(v___x_1515_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1526_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1524_; 
if (v_isShared_1522_ == 0)
{
v___x_1524_ = v___x_1521_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_a_1519_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
}
else
{
lean_object* v___x_1528_; 
lean_dec(v_a_1496_);
lean_dec(v_i_1460_);
lean_dec_ref(v_eType_1458_);
lean_dec_ref(v_targetType_1457_);
lean_dec(v_term_x3f_1456_);
lean_dec(v_mvarId_1454_);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 1, v_fst_1503_);
lean_ctor_set(v___x_1506_, 0, v_fst_1502_);
v___x_1528_ = v___x_1506_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_fst_1502_);
lean_ctor_set(v_reuseFailAlloc_1532_, 1, v_fst_1503_);
v___x_1528_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1530_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v___x_1528_);
v___x_1530_ = v___x_1512_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v___x_1528_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_del_object(v___x_1506_);
lean_dec(v_fst_1503_);
lean_dec(v_fst_1502_);
lean_dec(v_a_1496_);
lean_dec(v_i_1460_);
lean_dec_ref(v_eType_1458_);
lean_dec_ref(v_targetType_1457_);
lean_dec(v_term_x3f_1456_);
lean_dec(v_mvarId_1454_);
v_a_1534_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1509_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1509_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec(v_a_1496_);
lean_dec(v_i_1460_);
lean_dec_ref(v_eType_1458_);
lean_dec_ref(v_targetType_1457_);
lean_dec(v_term_x3f_1456_);
lean_dec(v_mvarId_1454_);
v_a_1543_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1499_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1499_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
else
{
lean_object* v_a_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
lean_dec(v_i_1460_);
lean_dec_ref(v_eType_1458_);
lean_dec_ref(v_targetType_1457_);
lean_dec(v_term_x3f_1456_);
lean_dec(v_mvarId_1454_);
v_a_1551_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1553_ = v___x_1495_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_a_1551_);
lean_dec(v___x_1495_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1556_; 
if (v_isShared_1554_ == 0)
{
v___x_1556_ = v___x_1553_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_a_1551_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
v___jp_1466_:
{
uint8_t v_approx_1472_; lean_object* v___x_1473_; 
v_approx_1472_ = lean_ctor_get_uint8(v_cfg_1455_, 3);
v___x_1473_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_1454_, v_eType_1458_, v_conclusionType_x3f_1467_, v_targetType_1457_, v_term_x3f_1456_, v_approx_1472_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_);
return v___x_1473_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go___boxed(lean_object* v_mvarId_1559_, lean_object* v_cfg_1560_, lean_object* v_term_x3f_1561_, lean_object* v_targetType_1562_, lean_object* v_eType_1563_, lean_object* v_rangeNumArgs_1564_, lean_object* v_i_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_){
_start:
{
lean_object* v_res_1571_; 
v_res_1571_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(v_mvarId_1559_, v_cfg_1560_, v_term_x3f_1561_, v_targetType_1562_, v_eType_1563_, v_rangeNumArgs_1564_, v_i_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_);
lean_dec(v_a_1569_);
lean_dec_ref(v_a_1568_);
lean_dec(v_a_1567_);
lean_dec_ref(v_a_1566_);
lean_dec_ref(v_rangeNumArgs_1564_);
lean_dec_ref(v_cfg_1560_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter___redArg(lean_object* v_x_1572_, lean_object* v_h__1_1573_){
_start:
{
lean_object* v_snd_1574_; lean_object* v_fst_1575_; lean_object* v_fst_1576_; lean_object* v_snd_1577_; lean_object* v___x_1578_; 
v_snd_1574_ = lean_ctor_get(v_x_1572_, 1);
lean_inc(v_snd_1574_);
v_fst_1575_ = lean_ctor_get(v_x_1572_, 0);
lean_inc(v_fst_1575_);
lean_dec_ref(v_x_1572_);
v_fst_1576_ = lean_ctor_get(v_snd_1574_, 0);
lean_inc(v_fst_1576_);
v_snd_1577_ = lean_ctor_get(v_snd_1574_, 1);
lean_inc(v_snd_1577_);
lean_dec(v_snd_1574_);
v___x_1578_ = lean_apply_3(v_h__1_1573_, v_fst_1575_, v_fst_1576_, v_snd_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter(lean_object* v_motive_1579_, lean_object* v_x_1580_, lean_object* v_h__1_1581_){
_start:
{
lean_object* v_snd_1582_; lean_object* v_fst_1583_; lean_object* v_fst_1584_; lean_object* v_snd_1585_; lean_object* v___x_1586_; 
v_snd_1582_ = lean_ctor_get(v_x_1580_, 1);
lean_inc(v_snd_1582_);
v_fst_1583_ = lean_ctor_get(v_x_1580_, 0);
lean_inc(v_fst_1583_);
lean_dec_ref(v_x_1580_);
v_fst_1584_ = lean_ctor_get(v_snd_1582_, 0);
lean_inc(v_fst_1584_);
v_snd_1585_ = lean_ctor_get(v_snd_1582_, 1);
lean_inc(v_snd_1585_);
lean_dec(v_snd_1582_);
v___x_1586_ = lean_apply_3(v_h__1_1581_, v_fst_1583_, v_fst_1584_, v_snd_1585_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(lean_object* v_e_1587_, lean_object* v___y_1588_){
_start:
{
uint8_t v___x_1590_; 
v___x_1590_ = l_Lean_Expr_hasMVar(v_e_1587_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1591_, 0, v_e_1587_);
return v___x_1591_;
}
else
{
lean_object* v___x_1592_; lean_object* v_mctx_1593_; lean_object* v___x_1594_; lean_object* v_fst_1595_; lean_object* v_snd_1596_; lean_object* v___x_1597_; lean_object* v_cache_1598_; lean_object* v_zetaDeltaFVarIds_1599_; lean_object* v_postponed_1600_; lean_object* v_diag_1601_; lean_object* v_rewriteFires_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1611_; 
v___x_1592_ = lean_st_ref_get(v___y_1588_);
v_mctx_1593_ = lean_ctor_get(v___x_1592_, 0);
lean_inc_ref(v_mctx_1593_);
lean_dec(v___x_1592_);
v___x_1594_ = l_Lean_instantiateMVarsCore(v_mctx_1593_, v_e_1587_);
v_fst_1595_ = lean_ctor_get(v___x_1594_, 0);
lean_inc(v_fst_1595_);
v_snd_1596_ = lean_ctor_get(v___x_1594_, 1);
lean_inc(v_snd_1596_);
lean_dec_ref(v___x_1594_);
v___x_1597_ = lean_st_ref_take(v___y_1588_);
v_cache_1598_ = lean_ctor_get(v___x_1597_, 1);
v_zetaDeltaFVarIds_1599_ = lean_ctor_get(v___x_1597_, 2);
v_postponed_1600_ = lean_ctor_get(v___x_1597_, 3);
v_diag_1601_ = lean_ctor_get(v___x_1597_, 4);
v_rewriteFires_1602_ = lean_ctor_get(v___x_1597_, 5);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1597_);
if (v_isSharedCheck_1611_ == 0)
{
lean_object* v_unused_1612_; 
v_unused_1612_ = lean_ctor_get(v___x_1597_, 0);
lean_dec(v_unused_1612_);
v___x_1604_ = v___x_1597_;
v_isShared_1605_ = v_isSharedCheck_1611_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_rewriteFires_1602_);
lean_inc(v_diag_1601_);
lean_inc(v_postponed_1600_);
lean_inc(v_zetaDeltaFVarIds_1599_);
lean_inc(v_cache_1598_);
lean_dec(v___x_1597_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1611_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v_snd_1596_);
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_snd_1596_);
lean_ctor_set(v_reuseFailAlloc_1610_, 1, v_cache_1598_);
lean_ctor_set(v_reuseFailAlloc_1610_, 2, v_zetaDeltaFVarIds_1599_);
lean_ctor_set(v_reuseFailAlloc_1610_, 3, v_postponed_1600_);
lean_ctor_set(v_reuseFailAlloc_1610_, 4, v_diag_1601_);
lean_ctor_set(v_reuseFailAlloc_1610_, 5, v_rewriteFires_1602_);
v___x_1607_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = lean_st_ref_put(v___y_1588_, v___x_1607_);
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v_fst_1595_);
return v___x_1609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg___boxed(lean_object* v_e_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1613_, v___y_1614_);
lean_dec(v___y_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(lean_object* v_e_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1617_, v___y_1619_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___boxed(lean_object* v_e_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(v_e_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(lean_object* v_mvarId_1631_, lean_object* v_x_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1631_, v_x_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1646_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1641_ = v___x_1638_;
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
v_a_1647_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1638_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1638_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg___boxed(lean_object* v_mvarId_1655_, lean_object* v_x_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_1655_, v_x_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(lean_object* v_00_u03b1_1663_, lean_object* v_mvarId_1664_, lean_object* v_x_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_1664_, v_x_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___boxed(lean_object* v_00_u03b1_1672_, lean_object* v_mvarId_1673_, lean_object* v_x_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(v_00_u03b1_1672_, v_mvarId_1673_, v_x_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(lean_object* v_as_1681_, size_t v_i_1682_, size_t v_stop_1683_, lean_object* v_b_1684_, lean_object* v___y_1685_){
_start:
{
lean_object* v_a_1688_; uint8_t v___x_1692_; 
v___x_1692_ = lean_usize_dec_eq(v_i_1682_, v_stop_1683_);
if (v___x_1692_ == 0)
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1693_ = lean_array_uget_borrowed(v_as_1681_, v_i_1682_);
v___x_1694_ = l_Lean_Expr_mvarId_x21(v___x_1693_);
v___x_1695_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_1694_, v___y_1685_);
lean_dec(v___x_1694_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; uint8_t v___x_1697_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = lean_unbox(v_a_1696_);
lean_dec(v_a_1696_);
if (v___x_1697_ == 0)
{
lean_object* v___x_1698_; 
lean_inc(v___x_1693_);
v___x_1698_ = lean_array_push(v_b_1684_, v___x_1693_);
v_a_1688_ = v___x_1698_;
goto v___jp_1687_;
}
else
{
v_a_1688_ = v_b_1684_;
goto v___jp_1687_;
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
lean_dec_ref(v_b_1684_);
v_a_1699_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1695_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1695_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
else
{
lean_object* v___x_1707_; 
v___x_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1707_, 0, v_b_1684_);
return v___x_1707_;
}
v___jp_1687_:
{
size_t v___x_1689_; size_t v___x_1690_; 
v___x_1689_ = ((size_t)1ULL);
v___x_1690_ = lean_usize_add(v_i_1682_, v___x_1689_);
v_i_1682_ = v___x_1690_;
v_b_1684_ = v_a_1688_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg___boxed(lean_object* v_as_1708_, lean_object* v_i_1709_, lean_object* v_stop_1710_, lean_object* v_b_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_){
_start:
{
size_t v_i_boxed_1714_; size_t v_stop_boxed_1715_; lean_object* v_res_1716_; 
v_i_boxed_1714_ = lean_unbox_usize(v_i_1709_);
lean_dec(v_i_1709_);
v_stop_boxed_1715_ = lean_unbox_usize(v_stop_1710_);
lean_dec(v_stop_1710_);
v_res_1716_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_as_1708_, v_i_boxed_1714_, v_stop_boxed_1715_, v_b_1711_, v___y_1712_);
lean_dec(v___y_1712_);
lean_dec_ref(v_as_1708_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3(lean_object* v_as_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
if (lean_obj_tag(v_as_1717_) == 0)
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1723_ = lean_box(0);
v___x_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1723_);
return v___x_1724_;
}
else
{
lean_object* v_head_1725_; lean_object* v_tail_1726_; lean_object* v___x_1727_; 
v_head_1725_ = lean_ctor_get(v_as_1717_, 0);
lean_inc(v_head_1725_);
v_tail_1726_ = lean_ctor_get(v_as_1717_, 1);
lean_inc(v_tail_1726_);
lean_dec_ref_known(v_as_1717_, 2);
v___x_1727_ = l_Lean_MVarId_headBetaType(v_head_1725_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
if (lean_obj_tag(v___x_1727_) == 0)
{
lean_dec_ref_known(v___x_1727_, 1);
v_as_1717_ = v_tail_1726_;
goto _start;
}
else
{
lean_dec(v_tail_1726_);
return v___x_1727_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3___boxed(lean_object* v_as_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_List_forM___at___00Lean_MVarId_apply_spec__3(v_as_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
lean_dec_ref(v___y_1732_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(lean_object* v_x_1736_, lean_object* v_x_1737_, lean_object* v_x_1738_, lean_object* v_x_1739_){
_start:
{
lean_object* v_ks_1740_; lean_object* v_vs_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1765_; 
v_ks_1740_ = lean_ctor_get(v_x_1736_, 0);
v_vs_1741_ = lean_ctor_get(v_x_1736_, 1);
v_isSharedCheck_1765_ = !lean_is_exclusive(v_x_1736_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1743_ = v_x_1736_;
v_isShared_1744_ = v_isSharedCheck_1765_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_vs_1741_);
lean_inc(v_ks_1740_);
lean_dec(v_x_1736_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1765_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1745_; uint8_t v___x_1746_; 
v___x_1745_ = lean_array_get_size(v_ks_1740_);
v___x_1746_ = lean_nat_dec_lt(v_x_1737_, v___x_1745_);
if (v___x_1746_ == 0)
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1750_; 
lean_dec(v_x_1737_);
v___x_1747_ = lean_array_push(v_ks_1740_, v_x_1738_);
v___x_1748_ = lean_array_push(v_vs_1741_, v_x_1739_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 1, v___x_1748_);
lean_ctor_set(v___x_1743_, 0, v___x_1747_);
v___x_1750_ = v___x_1743_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1747_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
else
{
lean_object* v_k_x27_1752_; uint8_t v___x_1753_; 
v_k_x27_1752_ = lean_array_fget_borrowed(v_ks_1740_, v_x_1737_);
v___x_1753_ = l_Lean_instBEqMVarId_beq(v_x_1738_, v_k_x27_1752_);
if (v___x_1753_ == 0)
{
lean_object* v___x_1755_; 
if (v_isShared_1744_ == 0)
{
v___x_1755_ = v___x_1743_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_ks_1740_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_vs_1741_);
v___x_1755_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1756_ = lean_unsigned_to_nat(1u);
v___x_1757_ = lean_nat_add(v_x_1737_, v___x_1756_);
lean_dec(v_x_1737_);
v_x_1736_ = v___x_1755_;
v_x_1737_ = v___x_1757_;
goto _start;
}
}
else
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1760_ = lean_array_fset(v_ks_1740_, v_x_1737_, v_x_1738_);
v___x_1761_ = lean_array_fset(v_vs_1741_, v_x_1737_, v_x_1739_);
lean_dec(v_x_1737_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 1, v___x_1761_);
lean_ctor_set(v___x_1743_, 0, v___x_1760_);
v___x_1763_ = v___x_1743_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1760_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(lean_object* v_n_1766_, lean_object* v_k_1767_, lean_object* v_v_1768_){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = lean_unsigned_to_nat(0u);
v___x_1770_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(v_n_1766_, v___x_1769_, v_k_1767_, v_v_1768_);
return v___x_1770_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(lean_object* v_x_1772_, size_t v_x_1773_, size_t v_x_1774_, lean_object* v_x_1775_, lean_object* v_x_1776_){
_start:
{
if (lean_obj_tag(v_x_1772_) == 0)
{
lean_object* v_es_1777_; size_t v___x_1778_; size_t v___x_1779_; lean_object* v_j_1780_; lean_object* v___x_1781_; uint8_t v___x_1782_; 
v_es_1777_ = lean_ctor_get(v_x_1772_, 0);
v___x_1778_ = ((size_t)31ULL);
v___x_1779_ = lean_usize_land(v_x_1773_, v___x_1778_);
v_j_1780_ = lean_usize_to_nat(v___x_1779_);
v___x_1781_ = lean_array_get_size(v_es_1777_);
v___x_1782_ = lean_nat_dec_lt(v_j_1780_, v___x_1781_);
if (v___x_1782_ == 0)
{
lean_dec(v_j_1780_);
lean_dec(v_x_1776_);
lean_dec(v_x_1775_);
return v_x_1772_;
}
else
{
lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1821_; 
lean_inc_ref(v_es_1777_);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_x_1772_);
if (v_isSharedCheck_1821_ == 0)
{
lean_object* v_unused_1822_; 
v_unused_1822_ = lean_ctor_get(v_x_1772_, 0);
lean_dec(v_unused_1822_);
v___x_1784_ = v_x_1772_;
v_isShared_1785_ = v_isSharedCheck_1821_;
goto v_resetjp_1783_;
}
else
{
lean_dec(v_x_1772_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1821_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v_v_1786_; lean_object* v___x_1787_; lean_object* v_xs_x27_1788_; lean_object* v___y_1790_; 
v_v_1786_ = lean_array_fget(v_es_1777_, v_j_1780_);
v___x_1787_ = lean_box(0);
v_xs_x27_1788_ = lean_array_fset(v_es_1777_, v_j_1780_, v___x_1787_);
switch(lean_obj_tag(v_v_1786_))
{
case 0:
{
lean_object* v_key_1795_; lean_object* v_val_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1806_; 
v_key_1795_ = lean_ctor_get(v_v_1786_, 0);
v_val_1796_ = lean_ctor_get(v_v_1786_, 1);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_v_1786_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1798_ = v_v_1786_;
v_isShared_1799_ = v_isSharedCheck_1806_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_val_1796_);
lean_inc(v_key_1795_);
lean_dec(v_v_1786_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1806_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
uint8_t v___x_1800_; 
v___x_1800_ = l_Lean_instBEqMVarId_beq(v_x_1775_, v_key_1795_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_del_object(v___x_1798_);
v___x_1801_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1795_, v_val_1796_, v_x_1775_, v_x_1776_);
v___x_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1801_);
v___y_1790_ = v___x_1802_;
goto v___jp_1789_;
}
else
{
lean_object* v___x_1804_; 
lean_dec(v_val_1796_);
lean_dec(v_key_1795_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 1, v_x_1776_);
lean_ctor_set(v___x_1798_, 0, v_x_1775_);
v___x_1804_ = v___x_1798_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_x_1775_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v_x_1776_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
v___y_1790_ = v___x_1804_;
goto v___jp_1789_;
}
}
}
}
case 1:
{
lean_object* v_node_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1819_; 
v_node_1807_ = lean_ctor_get(v_v_1786_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_v_1786_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1809_ = v_v_1786_;
v_isShared_1810_ = v_isSharedCheck_1819_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_node_1807_);
lean_dec(v_v_1786_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1819_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
size_t v___x_1811_; size_t v___x_1812_; size_t v___x_1813_; size_t v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1817_; 
v___x_1811_ = ((size_t)5ULL);
v___x_1812_ = lean_usize_shift_right(v_x_1773_, v___x_1811_);
v___x_1813_ = ((size_t)1ULL);
v___x_1814_ = lean_usize_add(v_x_1774_, v___x_1813_);
v___x_1815_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_node_1807_, v___x_1812_, v___x_1814_, v_x_1775_, v_x_1776_);
if (v_isShared_1810_ == 0)
{
lean_ctor_set(v___x_1809_, 0, v___x_1815_);
v___x_1817_ = v___x_1809_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v___x_1815_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
v___y_1790_ = v___x_1817_;
goto v___jp_1789_;
}
}
}
default: 
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v_x_1775_);
lean_ctor_set(v___x_1820_, 1, v_x_1776_);
v___y_1790_ = v___x_1820_;
goto v___jp_1789_;
}
}
v___jp_1789_:
{
lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1791_ = lean_array_fset(v_xs_x27_1788_, v_j_1780_, v___y_1790_);
lean_dec(v_j_1780_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 0, v___x_1791_);
v___x_1793_ = v___x_1784_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
}
}
else
{
lean_object* v_ks_1823_; lean_object* v_vs_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1842_; 
v_ks_1823_ = lean_ctor_get(v_x_1772_, 0);
v_vs_1824_ = lean_ctor_get(v_x_1772_, 1);
v_isSharedCheck_1842_ = !lean_is_exclusive(v_x_1772_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1826_ = v_x_1772_;
v_isShared_1827_ = v_isSharedCheck_1842_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_vs_1824_);
lean_inc(v_ks_1823_);
lean_dec(v_x_1772_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1842_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1829_; 
if (v_isShared_1827_ == 0)
{
v___x_1829_ = v___x_1826_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v_ks_1823_);
lean_ctor_set(v_reuseFailAlloc_1841_, 1, v_vs_1824_);
v___x_1829_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
lean_object* v_newNode_1830_; size_t v___x_1831_; uint8_t v___x_1832_; 
v_newNode_1830_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(v___x_1829_, v_x_1775_, v_x_1776_);
v___x_1831_ = ((size_t)7ULL);
v___x_1832_ = lean_usize_dec_le(v___x_1831_, v_x_1774_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; lean_object* v___x_1834_; uint8_t v___x_1835_; 
v___x_1833_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1830_);
v___x_1834_ = lean_unsigned_to_nat(4u);
v___x_1835_ = lean_nat_dec_lt(v___x_1833_, v___x_1834_);
lean_dec(v___x_1833_);
if (v___x_1835_ == 0)
{
lean_object* v_ks_1836_; lean_object* v_vs_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v_ks_1836_ = lean_ctor_get(v_newNode_1830_, 0);
lean_inc_ref(v_ks_1836_);
v_vs_1837_ = lean_ctor_get(v_newNode_1830_, 1);
lean_inc_ref(v_vs_1837_);
lean_dec_ref(v_newNode_1830_);
v___x_1838_ = lean_unsigned_to_nat(0u);
v___x_1839_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_1840_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_x_1774_, v_ks_1836_, v_vs_1837_, v___x_1838_, v___x_1839_);
lean_dec_ref(v_vs_1837_);
lean_dec_ref(v_ks_1836_);
return v___x_1840_;
}
else
{
return v_newNode_1830_;
}
}
else
{
return v_newNode_1830_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(size_t v_depth_1843_, lean_object* v_keys_1844_, lean_object* v_vals_1845_, lean_object* v_i_1846_, lean_object* v_entries_1847_){
_start:
{
lean_object* v___x_1848_; uint8_t v___x_1849_; 
v___x_1848_ = lean_array_get_size(v_keys_1844_);
v___x_1849_ = lean_nat_dec_lt(v_i_1846_, v___x_1848_);
if (v___x_1849_ == 0)
{
lean_dec(v_i_1846_);
return v_entries_1847_;
}
else
{
lean_object* v_k_1850_; lean_object* v_v_1851_; uint64_t v___x_1852_; size_t v_h_1853_; size_t v___x_1854_; lean_object* v___x_1855_; size_t v___x_1856_; size_t v___x_1857_; size_t v___x_1858_; size_t v_h_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v_k_1850_ = lean_array_fget_borrowed(v_keys_1844_, v_i_1846_);
v_v_1851_ = lean_array_fget_borrowed(v_vals_1845_, v_i_1846_);
v___x_1852_ = l_Lean_instHashableMVarId_hash(v_k_1850_);
v_h_1853_ = lean_uint64_to_usize(v___x_1852_);
v___x_1854_ = ((size_t)5ULL);
v___x_1855_ = lean_unsigned_to_nat(1u);
v___x_1856_ = ((size_t)1ULL);
v___x_1857_ = lean_usize_sub(v_depth_1843_, v___x_1856_);
v___x_1858_ = lean_usize_mul(v___x_1854_, v___x_1857_);
v_h_1859_ = lean_usize_shift_right(v_h_1853_, v___x_1858_);
v___x_1860_ = lean_nat_add(v_i_1846_, v___x_1855_);
lean_dec(v_i_1846_);
lean_inc(v_v_1851_);
lean_inc(v_k_1850_);
v___x_1861_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_entries_1847_, v_h_1859_, v_depth_1843_, v_k_1850_, v_v_1851_);
v_i_1846_ = v___x_1860_;
v_entries_1847_ = v___x_1861_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object* v_depth_1863_, lean_object* v_keys_1864_, lean_object* v_vals_1865_, lean_object* v_i_1866_, lean_object* v_entries_1867_){
_start:
{
size_t v_depth_boxed_1868_; lean_object* v_res_1869_; 
v_depth_boxed_1868_ = lean_unbox_usize(v_depth_1863_);
lean_dec(v_depth_1863_);
v_res_1869_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_depth_boxed_1868_, v_keys_1864_, v_vals_1865_, v_i_1866_, v_entries_1867_);
lean_dec_ref(v_vals_1865_);
lean_dec_ref(v_keys_1864_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_1870_, lean_object* v_x_1871_, lean_object* v_x_1872_, lean_object* v_x_1873_, lean_object* v_x_1874_){
_start:
{
size_t v_x_7064__boxed_1875_; size_t v_x_7065__boxed_1876_; lean_object* v_res_1877_; 
v_x_7064__boxed_1875_ = lean_unbox_usize(v_x_1871_);
lean_dec(v_x_1871_);
v_x_7065__boxed_1876_ = lean_unbox_usize(v_x_1872_);
lean_dec(v_x_1872_);
v_res_1877_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_1870_, v_x_7064__boxed_1875_, v_x_7065__boxed_1876_, v_x_1873_, v_x_1874_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(lean_object* v_x_1878_, lean_object* v_x_1879_, lean_object* v_x_1880_){
_start:
{
uint64_t v___x_1881_; size_t v___x_1882_; size_t v___x_1883_; lean_object* v___x_1884_; 
v___x_1881_ = l_Lean_instHashableMVarId_hash(v_x_1879_);
v___x_1882_ = lean_uint64_to_usize(v___x_1881_);
v___x_1883_ = ((size_t)1ULL);
v___x_1884_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_1878_, v___x_1882_, v___x_1883_, v_x_1879_, v_x_1880_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(lean_object* v_mvarId_1885_, lean_object* v_val_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v___x_1889_; lean_object* v_mctx_1890_; lean_object* v_cache_1891_; lean_object* v_zetaDeltaFVarIds_1892_; lean_object* v_postponed_1893_; lean_object* v_diag_1894_; lean_object* v_rewriteFires_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1925_; 
v___x_1889_ = lean_st_ref_take(v___y_1887_);
v_mctx_1890_ = lean_ctor_get(v___x_1889_, 0);
v_cache_1891_ = lean_ctor_get(v___x_1889_, 1);
v_zetaDeltaFVarIds_1892_ = lean_ctor_get(v___x_1889_, 2);
v_postponed_1893_ = lean_ctor_get(v___x_1889_, 3);
v_diag_1894_ = lean_ctor_get(v___x_1889_, 4);
v_rewriteFires_1895_ = lean_ctor_get(v___x_1889_, 5);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1897_ = v___x_1889_;
v_isShared_1898_ = v_isSharedCheck_1925_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_rewriteFires_1895_);
lean_inc(v_diag_1894_);
lean_inc(v_postponed_1893_);
lean_inc(v_zetaDeltaFVarIds_1892_);
lean_inc(v_cache_1891_);
lean_inc(v_mctx_1890_);
lean_dec(v___x_1889_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1925_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v_depth_1899_; lean_object* v_levelAssignDepth_1900_; lean_object* v_lmvarCounter_1901_; lean_object* v_mvarCounter_1902_; lean_object* v_lDecls_1903_; lean_object* v_decls_1904_; lean_object* v_userNames_1905_; lean_object* v_lAssignment_1906_; lean_object* v_eAssignment_1907_; lean_object* v_dAssignment_1908_; lean_object* v_instanceTypedMVars_1909_; lean_object* v_synthNormMemo_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1924_; 
v_depth_1899_ = lean_ctor_get(v_mctx_1890_, 0);
v_levelAssignDepth_1900_ = lean_ctor_get(v_mctx_1890_, 1);
v_lmvarCounter_1901_ = lean_ctor_get(v_mctx_1890_, 2);
v_mvarCounter_1902_ = lean_ctor_get(v_mctx_1890_, 3);
v_lDecls_1903_ = lean_ctor_get(v_mctx_1890_, 4);
v_decls_1904_ = lean_ctor_get(v_mctx_1890_, 5);
v_userNames_1905_ = lean_ctor_get(v_mctx_1890_, 6);
v_lAssignment_1906_ = lean_ctor_get(v_mctx_1890_, 7);
v_eAssignment_1907_ = lean_ctor_get(v_mctx_1890_, 8);
v_dAssignment_1908_ = lean_ctor_get(v_mctx_1890_, 9);
v_instanceTypedMVars_1909_ = lean_ctor_get(v_mctx_1890_, 10);
v_synthNormMemo_1910_ = lean_ctor_get(v_mctx_1890_, 11);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_mctx_1890_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1912_ = v_mctx_1890_;
v_isShared_1913_ = v_isSharedCheck_1924_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_synthNormMemo_1910_);
lean_inc(v_instanceTypedMVars_1909_);
lean_inc(v_dAssignment_1908_);
lean_inc(v_eAssignment_1907_);
lean_inc(v_lAssignment_1906_);
lean_inc(v_userNames_1905_);
lean_inc(v_decls_1904_);
lean_inc(v_lDecls_1903_);
lean_inc(v_mvarCounter_1902_);
lean_inc(v_lmvarCounter_1901_);
lean_inc(v_levelAssignDepth_1900_);
lean_inc(v_depth_1899_);
lean_dec(v_mctx_1890_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1924_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1917_; 
v___x_1914_ = lean_box(0);
v___x_1915_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(v_eAssignment_1907_, v_mvarId_1885_, v_val_1886_);
if (v_isShared_1913_ == 0)
{
lean_ctor_set(v___x_1912_, 8, v___x_1915_);
v___x_1917_ = v___x_1912_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_depth_1899_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v_levelAssignDepth_1900_);
lean_ctor_set(v_reuseFailAlloc_1923_, 2, v_lmvarCounter_1901_);
lean_ctor_set(v_reuseFailAlloc_1923_, 3, v_mvarCounter_1902_);
lean_ctor_set(v_reuseFailAlloc_1923_, 4, v_lDecls_1903_);
lean_ctor_set(v_reuseFailAlloc_1923_, 5, v_decls_1904_);
lean_ctor_set(v_reuseFailAlloc_1923_, 6, v_userNames_1905_);
lean_ctor_set(v_reuseFailAlloc_1923_, 7, v_lAssignment_1906_);
lean_ctor_set(v_reuseFailAlloc_1923_, 8, v___x_1915_);
lean_ctor_set(v_reuseFailAlloc_1923_, 9, v_dAssignment_1908_);
lean_ctor_set(v_reuseFailAlloc_1923_, 10, v_instanceTypedMVars_1909_);
lean_ctor_set(v_reuseFailAlloc_1923_, 11, v_synthNormMemo_1910_);
v___x_1917_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
lean_object* v___x_1919_; 
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1917_);
v___x_1919_ = v___x_1897_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1922_, 1, v_cache_1891_);
lean_ctor_set(v_reuseFailAlloc_1922_, 2, v_zetaDeltaFVarIds_1892_);
lean_ctor_set(v_reuseFailAlloc_1922_, 3, v_postponed_1893_);
lean_ctor_set(v_reuseFailAlloc_1922_, 4, v_diag_1894_);
lean_ctor_set(v_reuseFailAlloc_1922_, 5, v_rewriteFires_1895_);
v___x_1919_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = lean_st_ref_put(v___y_1887_, v___x_1919_);
v___x_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1914_);
return v___x_1921_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg___boxed(lean_object* v_mvarId_1926_, lean_object* v_val_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_1926_, v_val_1927_, v___y_1928_);
lean_dec(v___y_1928_);
return v_res_1930_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_MVarId_apply_spec__2(lean_object* v_a_1931_, lean_object* v_x_1932_){
_start:
{
if (lean_obj_tag(v_x_1932_) == 0)
{
uint8_t v___x_1933_; 
v___x_1933_ = 0;
return v___x_1933_;
}
else
{
lean_object* v_head_1934_; lean_object* v_tail_1935_; uint8_t v___x_1936_; 
v_head_1934_ = lean_ctor_get(v_x_1932_, 0);
v_tail_1935_ = lean_ctor_get(v_x_1932_, 1);
v___x_1936_ = l_Lean_instBEqMVarId_beq(v_a_1931_, v_head_1934_);
if (v___x_1936_ == 0)
{
v_x_1932_ = v_tail_1935_;
goto _start;
}
else
{
return v___x_1936_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_MVarId_apply_spec__2___boxed(lean_object* v_a_1938_, lean_object* v_x_1939_){
_start:
{
uint8_t v_res_1940_; lean_object* v_r_1941_; 
v_res_1940_ = l_List_elem___at___00Lean_MVarId_apply_spec__2(v_a_1938_, v_x_1939_);
lean_dec(v_x_1939_);
lean_dec(v_a_1938_);
v_r_1941_ = lean_box(v_res_1940_);
return v_r_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(lean_object* v_a_1942_, lean_object* v_as_1943_, size_t v_i_1944_, size_t v_stop_1945_, lean_object* v_b_1946_){
_start:
{
lean_object* v___y_1948_; uint8_t v___x_1952_; 
v___x_1952_ = lean_usize_dec_eq(v_i_1944_, v_stop_1945_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1953_; uint8_t v___x_1954_; 
v___x_1953_ = lean_array_uget_borrowed(v_as_1943_, v_i_1944_);
v___x_1954_ = l_List_elem___at___00Lean_MVarId_apply_spec__2(v___x_1953_, v_a_1942_);
if (v___x_1954_ == 0)
{
lean_object* v___x_1955_; 
lean_inc(v___x_1953_);
v___x_1955_ = lean_array_push(v_b_1946_, v___x_1953_);
v___y_1948_ = v___x_1955_;
goto v___jp_1947_;
}
else
{
v___y_1948_ = v_b_1946_;
goto v___jp_1947_;
}
}
else
{
return v_b_1946_;
}
v___jp_1947_:
{
size_t v___x_1949_; size_t v___x_1950_; 
v___x_1949_ = ((size_t)1ULL);
v___x_1950_ = lean_usize_add(v_i_1944_, v___x_1949_);
v_i_1944_ = v___x_1950_;
v_b_1946_ = v___y_1948_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4___boxed(lean_object* v_a_1956_, lean_object* v_as_1957_, lean_object* v_i_1958_, lean_object* v_stop_1959_, lean_object* v_b_1960_){
_start:
{
size_t v_i_boxed_1961_; size_t v_stop_boxed_1962_; lean_object* v_res_1963_; 
v_i_boxed_1961_ = lean_unbox_usize(v_i_1958_);
lean_dec(v_i_1958_);
v_stop_boxed_1962_ = lean_unbox_usize(v_stop_1959_);
lean_dec(v_stop_1959_);
v_res_1963_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_1956_, v_as_1957_, v_i_boxed_1961_, v_stop_boxed_1962_, v_b_1960_);
lean_dec_ref(v_as_1957_);
lean_dec(v_a_1956_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0(lean_object* v_mvarId_1964_, lean_object* v___x_1965_, lean_object* v_e_1966_, lean_object* v_cfg_1967_, lean_object* v_term_x3f_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2003_; uint8_t v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v_a_2009_; lean_object* v___x_2037_; 
lean_inc(v___x_1965_);
lean_inc(v_mvarId_1964_);
v___x_2037_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1964_, v___x_1965_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v___x_2038_; 
lean_dec_ref_known(v___x_2037_, 1);
lean_inc(v_mvarId_1964_);
v___x_2038_ = l_Lean_MVarId_getType(v_mvarId_1964_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; lean_object* v___x_2040_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2038_, 1);
lean_inc(v___y_1972_);
lean_inc_ref(v___y_1971_);
lean_inc(v___y_1970_);
lean_inc_ref(v___y_1969_);
lean_inc_ref(v_e_1966_);
v___x_2040_ = lean_infer_type(v_e_1966_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; lean_object* v_rangeNumArgs_2043_; lean_object* v_lower_2044_; lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___x_2093_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc_n(v_a_2041_, 2);
lean_dec_ref_known(v___x_2040_, 1);
v___x_2093_ = l_Lean_Meta_getExpectedNumArgsAux(v_a_2041_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; lean_object* v_snd_2095_; uint8_t v___x_2096_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v___x_2093_, 1);
v_snd_2095_ = lean_ctor_get(v_a_2094_, 1);
v___x_2096_ = lean_unbox(v_snd_2095_);
if (v___x_2096_ == 0)
{
lean_object* v_fst_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2117_; 
v_fst_2097_ = lean_ctor_get(v_a_2094_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v_a_2094_);
if (v_isSharedCheck_2117_ == 0)
{
lean_object* v_unused_2118_; 
v_unused_2118_ = lean_ctor_get(v_a_2094_, 1);
lean_dec(v_unused_2118_);
v___x_2099_ = v_a_2094_;
v_isShared_2100_ = v_isSharedCheck_2117_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_fst_2097_);
lean_dec(v_a_2094_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2117_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2101_; 
lean_inc(v_a_2039_);
v___x_2101_ = l_Lean_Meta_getExpectedNumArgs(v_a_2039_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2107_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref_known(v___x_2101_, 1);
v___x_2103_ = lean_nat_sub(v_fst_2097_, v_a_2102_);
lean_dec(v_a_2102_);
v___x_2104_ = lean_unsigned_to_nat(1u);
v___x_2105_ = lean_nat_add(v_fst_2097_, v___x_2104_);
lean_dec(v_fst_2097_);
lean_inc(v___x_2103_);
if (v_isShared_2100_ == 0)
{
lean_ctor_set(v___x_2099_, 1, v___x_2105_);
lean_ctor_set(v___x_2099_, 0, v___x_2103_);
v___x_2107_ = v___x_2099_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v___x_2103_);
lean_ctor_set(v_reuseFailAlloc_2108_, 1, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
v_rangeNumArgs_2043_ = v___x_2107_;
v_lower_2044_ = v___x_2103_;
v___y_2045_ = v___y_1969_;
v___y_2046_ = v___y_1970_;
v___y_2047_ = v___y_1971_;
v___y_2048_ = v___y_1972_;
goto v___jp_2042_;
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
lean_del_object(v___x_2099_);
lean_dec(v_fst_2097_);
lean_dec(v_a_2041_);
lean_dec(v_a_2039_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v_term_x3f_1968_);
lean_dec_ref(v_e_1966_);
lean_dec(v___x_1965_);
lean_dec(v_mvarId_1964_);
v_a_2109_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2101_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2101_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
}
else
{
lean_object* v_fst_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2128_; 
v_fst_2119_ = lean_ctor_get(v_a_2094_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v_a_2094_);
if (v_isSharedCheck_2128_ == 0)
{
lean_object* v_unused_2129_; 
v_unused_2129_ = lean_ctor_get(v_a_2094_, 1);
lean_dec(v_unused_2129_);
v___x_2121_ = v_a_2094_;
v_isShared_2122_ = v_isSharedCheck_2128_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_fst_2119_);
lean_dec(v_a_2094_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2128_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2126_; 
v___x_2123_ = lean_unsigned_to_nat(1u);
v___x_2124_ = lean_nat_add(v_fst_2119_, v___x_2123_);
lean_inc(v_fst_2119_);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 1, v___x_2124_);
v___x_2126_ = v___x_2121_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_fst_2119_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v___x_2124_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
v_rangeNumArgs_2043_ = v___x_2126_;
v_lower_2044_ = v_fst_2119_;
v___y_2045_ = v___y_1969_;
v___y_2046_ = v___y_1970_;
v___y_2047_ = v___y_1971_;
v___y_2048_ = v___y_1972_;
goto v___jp_2042_;
}
}
}
}
else
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
lean_dec(v_a_2041_);
lean_dec(v_a_2039_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v_term_x3f_1968_);
lean_dec_ref(v_e_1966_);
lean_dec(v___x_1965_);
lean_dec(v_mvarId_1964_);
v_a_2130_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___x_2093_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2093_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2130_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
v___jp_2042_:
{
lean_object* v___x_2049_; 
lean_inc(v_mvarId_1964_);
v___x_2049_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(v_mvarId_1964_, v_cfg_1967_, v_term_x3f_1968_, v_a_2039_, v_a_2041_, v_rangeNumArgs_2043_, v_lower_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_);
lean_dec_ref(v_rangeNumArgs_2043_);
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; lean_object* v_fst_2051_; lean_object* v_snd_2052_; uint8_t v_newGoals_2053_; uint8_t v_synthAssignedInstances_2054_; uint8_t v_allowSynthFailures_2055_; lean_object* v___x_2056_; 
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2049_, 1);
v_fst_2051_ = lean_ctor_get(v_a_2050_, 0);
lean_inc(v_fst_2051_);
v_snd_2052_ = lean_ctor_get(v_a_2050_, 1);
lean_inc_n(v_snd_2052_, 2);
lean_dec(v_a_2050_);
v_newGoals_2053_ = lean_ctor_get_uint8(v_cfg_1967_, 0);
v_synthAssignedInstances_2054_ = lean_ctor_get_uint8(v_cfg_1967_, 1);
v_allowSynthFailures_2055_ = lean_ctor_get_uint8(v_cfg_1967_, 2);
lean_inc(v_mvarId_1964_);
v___x_2056_ = l_Lean_Meta_synthAppInstances(v___x_1965_, v_mvarId_1964_, v_fst_2051_, v_snd_2052_, v_synthAssignedInstances_2054_, v_allowSynthFailures_2055_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_);
if (lean_obj_tag(v___x_2056_) == 0)
{
lean_object* v___x_2057_; lean_object* v_a_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; 
lean_dec_ref_known(v___x_2056_, 1);
v___x_2057_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1966_, v___y_2046_);
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
lean_inc_n(v_a_2058_, 2);
lean_dec_ref(v___x_2057_);
v___x_2059_ = l_Lean_mkAppN(v_a_2058_, v_fst_2051_);
lean_inc(v_mvarId_1964_);
v___x_2060_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_1964_, v___x_2059_, v___y_2046_);
lean_dec_ref(v___x_2060_);
v___x_2061_ = lean_unsigned_to_nat(0u);
v___x_2062_ = lean_array_get_size(v_fst_2051_);
v___x_2063_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_2064_ = lean_nat_dec_lt(v___x_2061_, v___x_2062_);
if (v___x_2064_ == 0)
{
lean_dec(v_fst_2051_);
v___y_2001_ = v_snd_2052_;
v___y_2002_ = v_a_2058_;
v___y_2003_ = v___y_2045_;
v___y_2004_ = v_newGoals_2053_;
v___y_2005_ = v___y_2048_;
v___y_2006_ = v___y_2047_;
v___y_2007_ = v___x_2061_;
v___y_2008_ = v___y_2046_;
v_a_2009_ = v___x_2063_;
goto v___jp_2000_;
}
else
{
size_t v___x_2065_; size_t v___x_2066_; lean_object* v___x_2067_; 
v___x_2065_ = ((size_t)0ULL);
v___x_2066_ = lean_usize_of_nat(v___x_2062_);
v___x_2067_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_fst_2051_, v___x_2065_, v___x_2066_, v___x_2063_, v___y_2046_);
lean_dec(v_fst_2051_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v_a_2068_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc(v_a_2068_);
lean_dec_ref_known(v___x_2067_, 1);
v___y_2001_ = v_snd_2052_;
v___y_2002_ = v_a_2058_;
v___y_2003_ = v___y_2045_;
v___y_2004_ = v_newGoals_2053_;
v___y_2005_ = v___y_2048_;
v___y_2006_ = v___y_2047_;
v___y_2007_ = v___x_2061_;
v___y_2008_ = v___y_2046_;
v_a_2009_ = v_a_2068_;
goto v___jp_2000_;
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_dec(v_a_2058_);
lean_dec(v_snd_2052_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v_mvarId_1964_);
v_a_2069_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2067_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2067_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
lean_dec(v_snd_2052_);
lean_dec(v_fst_2051_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec_ref(v_e_1966_);
lean_dec(v_mvarId_1964_);
v_a_2077_ = lean_ctor_get(v___x_2056_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2056_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2056_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec_ref(v_e_1966_);
lean_dec(v___x_1965_);
lean_dec(v_mvarId_1964_);
v_a_2085_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2049_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2049_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
}
else
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2145_; 
lean_dec(v_a_2039_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v_term_x3f_1968_);
lean_dec_ref(v_e_1966_);
lean_dec(v___x_1965_);
lean_dec(v_mvarId_1964_);
v_a_2138_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2140_ = v___x_2040_;
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2040_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v_term_x3f_1968_);
lean_dec_ref(v_e_1966_);
lean_dec(v___x_1965_);
lean_dec(v_mvarId_1964_);
v_a_2146_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2038_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2038_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v_term_x3f_1968_);
lean_dec_ref(v_e_1966_);
lean_dec(v___x_1965_);
lean_dec(v_mvarId_1964_);
v_a_2154_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2037_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2037_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
v___jp_1974_:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1981_ = lean_array_to_list(v___y_1980_);
v___x_1982_ = l_List_appendTR___redArg(v___y_1976_, v___x_1981_);
lean_inc(v___x_1982_);
v___x_1983_ = l_List_forM___at___00Lean_MVarId_apply_spec__3(v___x_1982_, v___y_1975_, v___y_1979_, v___y_1978_, v___y_1977_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1975_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1990_; 
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1990_ == 0)
{
lean_object* v_unused_1991_; 
v_unused_1991_ = lean_ctor_get(v___x_1983_, 0);
lean_dec(v_unused_1991_);
v___x_1985_ = v___x_1983_;
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
else
{
lean_dec(v___x_1983_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 0, v___x_1982_);
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1982_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
lean_dec(v___x_1982_);
v_a_1992_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v___x_1983_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1983_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
v___jp_2000_:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lean_Meta_appendParentTag(v_mvarId_1964_, v_a_2009_, v___y_2001_, v___y_2003_, v___y_2008_, v___y_2006_, v___y_2005_);
lean_dec_ref(v___y_2001_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_object* v___x_2011_; 
lean_dec_ref_known(v___x_2010_, 1);
v___x_2011_ = l_Lean_Meta_getMVarsNoDelayed(v___y_2002_, v___y_2003_, v___y_2008_, v___y_2006_, v___y_2005_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; lean_object* v___x_2013_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref_known(v___x_2011_, 1);
v___x_2013_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(v_a_2009_, v___y_2004_, v___y_2003_, v___y_2008_, v___y_2006_, v___y_2005_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; uint8_t v___x_2017_; 
v_a_2014_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_2013_, 1);
v___x_2015_ = lean_array_get_size(v_a_2012_);
v___x_2016_ = lean_mk_empty_array_with_capacity(v___y_2007_);
v___x_2017_ = lean_nat_dec_lt(v___y_2007_, v___x_2015_);
if (v___x_2017_ == 0)
{
lean_dec(v_a_2012_);
v___y_1975_ = v___y_2003_;
v___y_1976_ = v_a_2014_;
v___y_1977_ = v___y_2005_;
v___y_1978_ = v___y_2006_;
v___y_1979_ = v___y_2008_;
v___y_1980_ = v___x_2016_;
goto v___jp_1974_;
}
else
{
size_t v___x_2018_; size_t v___x_2019_; lean_object* v___x_2020_; 
v___x_2018_ = ((size_t)0ULL);
v___x_2019_ = lean_usize_of_nat(v___x_2015_);
v___x_2020_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_2014_, v_a_2012_, v___x_2018_, v___x_2019_, v___x_2016_);
lean_dec(v_a_2012_);
v___y_1975_ = v___y_2003_;
v___y_1976_ = v_a_2014_;
v___y_1977_ = v___y_2005_;
v___y_1978_ = v___y_2006_;
v___y_1979_ = v___y_2008_;
v___y_1980_ = v___x_2020_;
goto v___jp_1974_;
}
}
else
{
lean_dec(v_a_2012_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2003_);
return v___x_2013_;
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec_ref(v_a_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2003_);
v_a_2021_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2011_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2011_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
lean_dec_ref(v_a_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2003_);
lean_dec_ref(v___y_2002_);
v_a_2029_ = lean_ctor_get(v___x_2010_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_2010_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2010_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0___boxed(lean_object* v_mvarId_2162_, lean_object* v___x_2163_, lean_object* v_e_2164_, lean_object* v_cfg_2165_, lean_object* v_term_x3f_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Lean_MVarId_apply___lam__0(v_mvarId_2162_, v___x_2163_, v_e_2164_, v_cfg_2165_, v_term_x3f_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
lean_dec_ref(v_cfg_2165_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply(lean_object* v_mvarId_2173_, lean_object* v_e_2174_, lean_object* v_cfg_2175_, lean_object* v_term_x3f_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_){
_start:
{
lean_object* v___x_2182_; lean_object* v___f_2183_; lean_object* v___x_2184_; 
v___x_2182_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7));
lean_inc(v_mvarId_2173_);
v___f_2183_ = lean_alloc_closure((void*)(l_Lean_MVarId_apply___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2183_, 0, v_mvarId_2173_);
lean_closure_set(v___f_2183_, 1, v___x_2182_);
lean_closure_set(v___f_2183_, 2, v_e_2174_);
lean_closure_set(v___f_2183_, 3, v_cfg_2175_);
lean_closure_set(v___f_2183_, 4, v_term_x3f_2176_);
v___x_2184_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2173_, v___f_2183_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___boxed(lean_object* v_mvarId_2185_, lean_object* v_e_2186_, lean_object* v_cfg_2187_, lean_object* v_term_x3f_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l_Lean_MVarId_apply(v_mvarId_2185_, v_e_2186_, v_cfg_2187_, v_term_x3f_2188_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
lean_dec(v_a_2192_);
lean_dec_ref(v_a_2191_);
lean_dec(v_a_2190_);
lean_dec_ref(v_a_2189_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(lean_object* v_mvarId_2195_, lean_object* v_val_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v___x_2202_; 
v___x_2202_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2195_, v_val_2196_, v___y_2198_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___boxed(lean_object* v_mvarId_2203_, lean_object* v_val_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(v_mvarId_2203_, v_val_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(lean_object* v_as_2211_, size_t v_i_2212_, size_t v_stop_2213_, lean_object* v_b_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_as_2211_, v_i_2212_, v_stop_2213_, v_b_2214_, v___y_2216_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___boxed(lean_object* v_as_2221_, lean_object* v_i_2222_, lean_object* v_stop_2223_, lean_object* v_b_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
size_t v_i_boxed_2230_; size_t v_stop_boxed_2231_; lean_object* v_res_2232_; 
v_i_boxed_2230_ = lean_unbox_usize(v_i_2222_);
lean_dec(v_i_2222_);
v_stop_boxed_2231_ = lean_unbox_usize(v_stop_2223_);
lean_dec(v_stop_2223_);
v_res_2232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(v_as_2221_, v_i_boxed_2230_, v_stop_boxed_2231_, v_b_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec_ref(v_as_2221_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1(lean_object* v_00_u03b2_2233_, lean_object* v_x_2234_, lean_object* v_x_2235_, lean_object* v_x_2236_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(v_x_2234_, v_x_2235_, v_x_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_2238_, lean_object* v_x_2239_, size_t v_x_2240_, size_t v_x_2241_, lean_object* v_x_2242_, lean_object* v_x_2243_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_2239_, v_x_2240_, v_x_2241_, v_x_2242_, v_x_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2245_, lean_object* v_x_2246_, lean_object* v_x_2247_, lean_object* v_x_2248_, lean_object* v_x_2249_, lean_object* v_x_2250_){
_start:
{
size_t v_x_7757__boxed_2251_; size_t v_x_7758__boxed_2252_; lean_object* v_res_2253_; 
v_x_7757__boxed_2251_ = lean_unbox_usize(v_x_2247_);
lean_dec(v_x_2247_);
v_x_7758__boxed_2252_ = lean_unbox_usize(v_x_2248_);
lean_dec(v_x_2248_);
v_res_2253_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(v_00_u03b2_2245_, v_x_2246_, v_x_7757__boxed_2251_, v_x_7758__boxed_2252_, v_x_2249_, v_x_2250_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_2254_, lean_object* v_n_2255_, lean_object* v_k_2256_, lean_object* v_v_2257_){
_start:
{
lean_object* v___x_2258_; 
v___x_2258_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(v_n_2255_, v_k_2256_, v_v_2257_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_2259_, size_t v_depth_2260_, lean_object* v_keys_2261_, lean_object* v_vals_2262_, lean_object* v_heq_2263_, lean_object* v_i_2264_, lean_object* v_entries_2265_){
_start:
{
lean_object* v___x_2266_; 
v___x_2266_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_depth_2260_, v_keys_2261_, v_vals_2262_, v_i_2264_, v_entries_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___boxed(lean_object* v_00_u03b2_2267_, lean_object* v_depth_2268_, lean_object* v_keys_2269_, lean_object* v_vals_2270_, lean_object* v_heq_2271_, lean_object* v_i_2272_, lean_object* v_entries_2273_){
_start:
{
size_t v_depth_boxed_2274_; lean_object* v_res_2275_; 
v_depth_boxed_2274_ = lean_unbox_usize(v_depth_2268_);
lean_dec(v_depth_2268_);
v_res_2275_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(v_00_u03b2_2267_, v_depth_boxed_2274_, v_keys_2269_, v_vals_2270_, v_heq_2271_, v_i_2272_, v_entries_2273_);
lean_dec_ref(v_vals_2270_);
lean_dec_ref(v_keys_2269_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9(lean_object* v_00_u03b2_2276_, lean_object* v_x_2277_, lean_object* v_x_2278_, lean_object* v_x_2279_, lean_object* v_x_2280_){
_start:
{
lean_object* v___x_2281_; 
v___x_2281_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(v_x_2277_, v_x_2278_, v_x_2279_, v_x_2280_);
return v___x_2281_;
}
}
static lean_object* _init_l_Lean_MVarId_applyConst___closed__1(void){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2283_ = ((lean_object*)(l_Lean_MVarId_applyConst___closed__0));
v___x_2284_ = l_Lean_stringToMessageData(v___x_2283_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst(lean_object* v_mvar_2285_, lean_object* v_c_2286_, lean_object* v_cfg_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_){
_start:
{
lean_object* v___x_2293_; 
lean_inc(v_c_2286_);
v___x_2293_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_c_2286_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
if (lean_obj_tag(v___x_2293_) == 0)
{
lean_object* v_a_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v_a_2294_ = lean_ctor_get(v___x_2293_, 0);
lean_inc(v_a_2294_);
lean_dec_ref_known(v___x_2293_, 1);
v___x_2295_ = lean_obj_once(&l_Lean_MVarId_applyConst___closed__1, &l_Lean_MVarId_applyConst___closed__1_once, _init_l_Lean_MVarId_applyConst___closed__1);
v___x_2296_ = 0;
v___x_2297_ = l_Lean_MessageData_ofConstName(v_c_2286_, v___x_2296_);
v___x_2298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2295_);
lean_ctor_set(v___x_2298_, 1, v___x_2297_);
v___x_2299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
lean_ctor_set(v___x_2299_, 1, v___x_2295_);
v___x_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2299_);
v___x_2301_ = l_Lean_MVarId_apply(v_mvar_2285_, v_a_2294_, v_cfg_2287_, v___x_2300_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
return v___x_2301_;
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_dec_ref(v_cfg_2287_);
lean_dec(v_c_2286_);
lean_dec(v_mvar_2285_);
v_a_2302_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2293_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2293_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst___boxed(lean_object* v_mvar_2310_, lean_object* v_c_2311_, lean_object* v_cfg_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_){
_start:
{
lean_object* v_res_2318_; 
v_res_2318_ = l_Lean_MVarId_applyConst(v_mvar_2310_, v_c_2311_, v_cfg_2312_, v_a_2313_, v_a_2314_, v_a_2315_, v_a_2316_);
lean_dec(v_a_2316_);
lean_dec_ref(v_a_2315_);
lean_dec(v_a_2314_);
lean_dec_ref(v_a_2313_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(lean_object* v_msgData_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v___x_2325_; lean_object* v_env_2326_; uint8_t v___x_2327_; lean_object* v_env_2328_; lean_object* v___x_2329_; lean_object* v_toCold_2330_; lean_object* v_mctx_2331_; lean_object* v_lctx_2332_; lean_object* v_options_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2325_ = lean_st_ref_get(v___y_2323_);
v_env_2326_ = lean_ctor_get(v___x_2325_, 0);
lean_inc_ref(v_env_2326_);
lean_dec(v___x_2325_);
v___x_2327_ = 0;
v_env_2328_ = l_Lean_Environment_setRecordingDeps(v_env_2326_, v___x_2327_);
v___x_2329_ = lean_st_ref_get(v___y_2321_);
v_toCold_2330_ = lean_ctor_get(v___y_2322_, 0);
v_mctx_2331_ = lean_ctor_get(v___x_2329_, 0);
lean_inc_ref(v_mctx_2331_);
lean_dec(v___x_2329_);
v_lctx_2332_ = lean_ctor_get(v___y_2320_, 2);
v_options_2333_ = lean_ctor_get(v_toCold_2330_, 2);
lean_inc_ref(v_options_2333_);
lean_inc_ref(v_lctx_2332_);
v___x_2334_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2334_, 0, v_env_2328_);
lean_ctor_set(v___x_2334_, 1, v_mctx_2331_);
lean_ctor_set(v___x_2334_, 2, v_lctx_2332_);
lean_ctor_set(v___x_2334_, 3, v_options_2333_);
v___x_2335_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
lean_ctor_set(v___x_2335_, 1, v_msgData_2319_);
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1___boxed(lean_object* v_msgData_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(v_msgData_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(lean_object* v_msg_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_){
_start:
{
lean_object* v_ref_2350_; lean_object* v___x_2351_; lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2360_; 
v_ref_2350_ = lean_ctor_get(v___y_2347_, 2);
v___x_2351_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(v_msg_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_);
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2354_ = v___x_2351_;
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2356_; lean_object* v___x_2358_; 
lean_inc(v_ref_2350_);
v___x_2356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2356_, 0, v_ref_2350_);
lean_ctor_set(v___x_2356_, 1, v_a_2352_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set_tag(v___x_2354_, 1);
lean_ctor_set(v___x_2354_, 0, v___x_2356_);
v___x_2358_ = v___x_2354_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v___x_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg___boxed(lean_object* v_msg_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v_msg_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
lean_dec(v___y_2363_);
lean_dec_ref(v___y_2362_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(size_t v_sz_2368_, size_t v_i_2369_, lean_object* v_bs_2370_){
_start:
{
uint8_t v___x_2371_; 
v___x_2371_ = lean_usize_dec_lt(v_i_2369_, v_sz_2368_);
if (v___x_2371_ == 0)
{
return v_bs_2370_;
}
else
{
lean_object* v_v_2372_; lean_object* v___x_2373_; lean_object* v_bs_x27_2374_; lean_object* v___x_2375_; size_t v___x_2376_; size_t v___x_2377_; lean_object* v___x_2378_; 
v_v_2372_ = lean_array_uget(v_bs_2370_, v_i_2369_);
v___x_2373_ = lean_unsigned_to_nat(0u);
v_bs_x27_2374_ = lean_array_uset(v_bs_2370_, v_i_2369_, v___x_2373_);
v___x_2375_ = l_Lean_Expr_mvarId_x21(v_v_2372_);
lean_dec(v_v_2372_);
v___x_2376_ = ((size_t)1ULL);
v___x_2377_ = lean_usize_add(v_i_2369_, v___x_2376_);
v___x_2378_ = lean_array_uset(v_bs_x27_2374_, v_i_2369_, v___x_2375_);
v_i_2369_ = v___x_2377_;
v_bs_2370_ = v___x_2378_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0___boxed(lean_object* v_sz_2380_, lean_object* v_i_2381_, lean_object* v_bs_2382_){
_start:
{
size_t v_sz_boxed_2383_; size_t v_i_boxed_2384_; lean_object* v_res_2385_; 
v_sz_boxed_2383_ = lean_unbox_usize(v_sz_2380_);
lean_dec(v_sz_2380_);
v_i_boxed_2384_ = lean_unbox_usize(v_i_2381_);
lean_dec(v_i_2381_);
v_res_2385_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(v_sz_boxed_2383_, v_i_boxed_2384_, v_bs_2382_);
return v_res_2385_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2387_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__0));
v___x_2388_ = l_Lean_stringToMessageData(v___x_2387_);
return v___x_2388_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2390_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__2));
v___x_2391_ = l_Lean_stringToMessageData(v___x_2390_);
return v___x_2391_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__4));
v___x_2394_ = l_Lean_stringToMessageData(v___x_2393_);
return v___x_2394_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2396_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__6));
v___x_2397_ = l_Lean_stringToMessageData(v___x_2396_);
return v___x_2397_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2399_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__8));
v___x_2400_ = l_Lean_stringToMessageData(v___x_2399_);
return v___x_2400_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__11(void){
_start:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2402_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__10));
v___x_2403_ = l_Lean_stringToMessageData(v___x_2402_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0(lean_object* v_mvarId_2404_, lean_object* v___x_2405_, lean_object* v_e_2406_, lean_object* v_n_2407_, uint8_t v_useApproxDefEq_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v___x_2414_; 
lean_inc(v_mvarId_2404_);
v___x_2414_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2404_, v___x_2405_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v___x_2415_; 
lean_dec_ref_known(v___x_2414_, 1);
lean_inc(v_mvarId_2404_);
v___x_2415_ = l_Lean_MVarId_getType(v_mvarId_2404_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_);
if (lean_obj_tag(v___x_2415_) == 0)
{
lean_object* v_a_2416_; lean_object* v___x_2417_; 
v_a_2416_ = lean_ctor_get(v___x_2415_, 0);
lean_inc(v_a_2416_);
lean_dec_ref_known(v___x_2415_, 1);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
lean_inc(v___y_2410_);
lean_inc_ref(v___y_2409_);
lean_inc_ref(v_e_2406_);
v___x_2417_ = lean_infer_type(v_e_2406_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; uint8_t v___x_2419_; lean_object* v___x_2420_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v___x_2417_, 1);
v___x_2419_ = 0;
lean_inc(v_n_2407_);
v___x_2420_ = l_Lean_Meta_forallMetaBoundedTelescope(v_a_2418_, v_n_2407_, v___x_2419_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; lean_object* v_fst_2422_; lean_object* v_snd_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2513_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2421_);
lean_dec_ref_known(v___x_2420_, 1);
v_fst_2422_ = lean_ctor_get(v_a_2421_, 0);
v_snd_2423_ = lean_ctor_get(v_a_2421_, 1);
v_isSharedCheck_2513_ = !lean_is_exclusive(v_a_2421_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2425_ = v_a_2421_;
v_isShared_2426_ = v_isSharedCheck_2513_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_snd_2423_);
lean_inc(v_fst_2422_);
lean_dec(v_a_2421_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2513_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___y_2428_; lean_object* v_snd_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2511_; 
v_snd_2443_ = lean_ctor_get(v_snd_2423_, 1);
v_isSharedCheck_2511_ = !lean_is_exclusive(v_snd_2423_);
if (v_isSharedCheck_2511_ == 0)
{
lean_object* v_unused_2512_; 
v_unused_2512_ = lean_ctor_get(v_snd_2423_, 0);
lean_dec(v_unused_2512_);
v___x_2445_ = v_snd_2423_;
v_isShared_2446_ = v_isSharedCheck_2511_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_snd_2443_);
lean_dec(v_snd_2423_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2511_;
goto v_resetjp_2444_;
}
v___jp_2427_:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2441_; 
lean_inc(v_fst_2422_);
v___x_2429_ = l_Lean_Expr_beta(v_e_2406_, v_fst_2422_);
v___x_2430_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2404_, v___x_2429_, v___y_2428_);
lean_dec(v___y_2428_);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2441_ == 0)
{
lean_object* v_unused_2442_; 
v_unused_2442_ = lean_ctor_get(v___x_2430_, 0);
lean_dec(v_unused_2442_);
v___x_2432_ = v___x_2430_;
v_isShared_2433_ = v_isSharedCheck_2441_;
goto v_resetjp_2431_;
}
else
{
lean_dec(v___x_2430_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2441_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
size_t v_sz_2434_; size_t v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2439_; 
v_sz_2434_ = lean_array_size(v_fst_2422_);
v___x_2435_ = ((size_t)0ULL);
v___x_2436_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(v_sz_2434_, v___x_2435_, v_fst_2422_);
v___x_2437_ = lean_array_to_list(v___x_2436_);
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 0, v___x_2437_);
v___x_2439_ = v___x_2432_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v___x_2437_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
v_resetjp_2444_:
{
lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2450_; lean_object* v___y_2451_; lean_object* v___x_2491_; uint8_t v___x_2492_; 
v___x_2491_ = lean_array_get_size(v_fst_2422_);
v___x_2492_ = lean_nat_dec_eq(v___x_2491_, v_n_2407_);
if (v___x_2492_ == 0)
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
lean_del_object(v___x_2445_);
lean_del_object(v___x_2425_);
lean_dec(v_fst_2422_);
lean_dec(v_a_2416_);
lean_dec_ref(v_e_2406_);
lean_dec(v_mvarId_2404_);
v___x_2493_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__9, &l_Lean_MVarId_applyN___lam__0___closed__9_once, _init_l_Lean_MVarId_applyN___lam__0___closed__9);
v___x_2494_ = l_Nat_reprFast(v_n_2407_);
v___x_2495_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2494_);
v___x_2496_ = l_Lean_MessageData_ofFormat(v___x_2495_);
v___x_2497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2493_);
lean_ctor_set(v___x_2497_, 1, v___x_2496_);
v___x_2498_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__11, &l_Lean_MVarId_applyN___lam__0___closed__11_once, _init_l_Lean_MVarId_applyN___lam__0___closed__11);
v___x_2499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2497_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = l_Lean_indentExpr(v_snd_2443_);
v___x_2501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_2501_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
v_a_2503_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2502_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2502_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
else
{
v___y_2448_ = v___y_2409_;
v___y_2449_ = v___y_2410_;
v___y_2450_ = v___y_2411_;
v___y_2451_ = v___y_2412_;
goto v___jp_2447_;
}
v___jp_2447_:
{
lean_object* v___x_2452_; 
lean_inc(v_a_2416_);
lean_inc(v_snd_2443_);
v___x_2452_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_useApproxDefEq_2408_, v_snd_2443_, v_a_2416_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; uint8_t v___x_2454_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
lean_dec_ref_known(v___x_2452_, 1);
v___x_2454_ = lean_unbox(v_a_2453_);
lean_dec(v_a_2453_);
if (v___x_2454_ == 0)
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2458_; 
lean_dec(v_fst_2422_);
lean_dec_ref(v_e_2406_);
lean_dec(v_mvarId_2404_);
v___x_2455_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__1, &l_Lean_MVarId_applyN___lam__0___closed__1_once, _init_l_Lean_MVarId_applyN___lam__0___closed__1);
v___x_2456_ = l_Lean_indentExpr(v_a_2416_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set_tag(v___x_2445_, 7);
lean_ctor_set(v___x_2445_, 1, v___x_2456_);
lean_ctor_set(v___x_2445_, 0, v___x_2455_);
v___x_2458_ = v___x_2445_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v___x_2455_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v___x_2456_);
v___x_2458_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
lean_object* v___x_2459_; lean_object* v___x_2461_; 
v___x_2459_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__3, &l_Lean_MVarId_applyN___lam__0___closed__3_once, _init_l_Lean_MVarId_applyN___lam__0___closed__3);
if (v_isShared_2426_ == 0)
{
lean_ctor_set_tag(v___x_2425_, 7);
lean_ctor_set(v___x_2425_, 1, v___x_2459_);
lean_ctor_set(v___x_2425_, 0, v___x_2458_);
v___x_2461_ = v___x_2425_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v___x_2458_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v___x_2459_);
v___x_2461_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v_a_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2480_; 
v___x_2462_ = l_Lean_indentExpr(v_snd_2443_);
v___x_2463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2461_);
lean_ctor_set(v___x_2463_, 1, v___x_2462_);
v___x_2464_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__5, &l_Lean_MVarId_applyN___lam__0___closed__5_once, _init_l_Lean_MVarId_applyN___lam__0___closed__5);
v___x_2465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2463_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = l_Nat_reprFast(v_n_2407_);
v___x_2467_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2466_);
v___x_2468_ = l_Lean_MessageData_ofFormat(v___x_2467_);
v___x_2469_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2465_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__7, &l_Lean_MVarId_applyN___lam__0___closed__7_once, _init_l_Lean_MVarId_applyN___lam__0___closed__7);
v___x_2471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2469_);
lean_ctor_set(v___x_2471_, 1, v___x_2470_);
v___x_2472_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_2471_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2480_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2480_ == 0)
{
v___x_2475_ = v___x_2472_;
v_isShared_2476_ = v_isSharedCheck_2480_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_a_2473_);
lean_dec(v___x_2472_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2480_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
lean_object* v___x_2478_; 
if (v_isShared_2476_ == 0)
{
v___x_2478_ = v___x_2475_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v_a_2473_);
v___x_2478_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
return v___x_2478_;
}
}
}
}
}
else
{
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec_ref(v___y_2448_);
lean_del_object(v___x_2445_);
lean_dec(v_snd_2443_);
lean_del_object(v___x_2425_);
lean_dec(v_a_2416_);
lean_dec(v_n_2407_);
v___y_2428_ = v___y_2449_;
goto v___jp_2427_;
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
lean_del_object(v___x_2445_);
lean_dec(v_snd_2443_);
lean_del_object(v___x_2425_);
lean_dec(v_fst_2422_);
lean_dec(v_a_2416_);
lean_dec(v_n_2407_);
lean_dec_ref(v_e_2406_);
lean_dec(v_mvarId_2404_);
v_a_2483_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2452_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2452_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2521_; 
lean_dec(v_a_2416_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
lean_dec(v_n_2407_);
lean_dec_ref(v_e_2406_);
lean_dec(v_mvarId_2404_);
v_a_2514_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2516_ = v___x_2420_;
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2420_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___x_2519_; 
if (v_isShared_2517_ == 0)
{
v___x_2519_ = v___x_2516_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_a_2514_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
else
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
lean_dec(v_a_2416_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
lean_dec(v_n_2407_);
lean_dec_ref(v_e_2406_);
lean_dec(v_mvarId_2404_);
v_a_2522_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2417_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2417_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
lean_dec(v_n_2407_);
lean_dec_ref(v_e_2406_);
lean_dec(v_mvarId_2404_);
v_a_2530_ = lean_ctor_get(v___x_2415_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2532_ = v___x_2415_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2415_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2530_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
else
{
lean_object* v_a_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2545_; 
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
lean_dec(v_n_2407_);
lean_dec_ref(v_e_2406_);
lean_dec(v_mvarId_2404_);
v_a_2538_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2540_ = v___x_2414_;
v_isShared_2541_ = v_isSharedCheck_2545_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_a_2538_);
lean_dec(v___x_2414_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2545_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___x_2543_; 
if (v_isShared_2541_ == 0)
{
v___x_2543_ = v___x_2540_;
goto v_reusejp_2542_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_a_2538_);
v___x_2543_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2542_;
}
v_reusejp_2542_:
{
return v___x_2543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0___boxed(lean_object* v_mvarId_2546_, lean_object* v___x_2547_, lean_object* v_e_2548_, lean_object* v_n_2549_, lean_object* v_useApproxDefEq_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
uint8_t v_useApproxDefEq_boxed_2556_; lean_object* v_res_2557_; 
v_useApproxDefEq_boxed_2556_ = lean_unbox(v_useApproxDefEq_2550_);
v_res_2557_ = l_Lean_MVarId_applyN___lam__0(v_mvarId_2546_, v___x_2547_, v_e_2548_, v_n_2549_, v_useApproxDefEq_boxed_2556_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN(lean_object* v_mvarId_2558_, lean_object* v_e_2559_, lean_object* v_n_2560_, uint8_t v_useApproxDefEq_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___f_2569_; lean_object* v___x_2570_; 
v___x_2567_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7));
v___x_2568_ = lean_box(v_useApproxDefEq_2561_);
lean_inc(v_mvarId_2558_);
v___f_2569_ = lean_alloc_closure((void*)(l_Lean_MVarId_applyN___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2569_, 0, v_mvarId_2558_);
lean_closure_set(v___f_2569_, 1, v___x_2567_);
lean_closure_set(v___f_2569_, 2, v_e_2559_);
lean_closure_set(v___f_2569_, 3, v_n_2560_);
lean_closure_set(v___f_2569_, 4, v___x_2568_);
v___x_2570_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2558_, v___f_2569_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___boxed(lean_object* v_mvarId_2571_, lean_object* v_e_2572_, lean_object* v_n_2573_, lean_object* v_useApproxDefEq_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_){
_start:
{
uint8_t v_useApproxDefEq_boxed_2580_; lean_object* v_res_2581_; 
v_useApproxDefEq_boxed_2580_ = lean_unbox(v_useApproxDefEq_2574_);
v_res_2581_ = l_Lean_MVarId_applyN(v_mvarId_2571_, v_e_2572_, v_n_2573_, v_useApproxDefEq_boxed_2580_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_);
lean_dec(v_a_2578_);
lean_dec_ref(v_a_2577_);
lean_dec(v_a_2576_);
lean_dec_ref(v_a_2575_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(lean_object* v_00_u03b1_2582_, lean_object* v_msg_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v_msg_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___boxed(lean_object* v_00_u03b1_2590_, lean_object* v_msg_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(v_00_u03b1_2590_, v_msg_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_);
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
return v_res_2597_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6(void){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2608_ = lean_box(0);
v___x_2609_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5));
v___x_2610_ = l_Lean_mkConst(v___x_2609_, v___x_2608_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(lean_object* v_tag_2611_, lean_object* v_type_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_){
_start:
{
lean_object* v___x_2619_; 
lean_inc(v_a_2617_);
lean_inc_ref(v_a_2616_);
lean_inc(v_a_2615_);
lean_inc_ref(v_a_2614_);
v___x_2619_ = lean_whnf(v_type_2612_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_object* v_a_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; uint8_t v___x_2623_; 
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2620_);
lean_dec_ref_known(v___x_2619_, 1);
v___x_2621_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1));
v___x_2622_ = lean_unsigned_to_nat(2u);
v___x_2623_ = l_Lean_Expr_isAppOfArity(v_a_2620_, v___x_2621_, v___x_2622_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2624_ = lean_st_ref_get(v_a_2613_);
v___x_2625_ = lean_array_get_size(v___x_2624_);
lean_dec(v___x_2624_);
v___x_2626_ = lean_unsigned_to_nat(1u);
v___x_2627_ = lean_nat_add(v___x_2625_, v___x_2626_);
v___x_2628_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3));
v___x_2629_ = lean_name_append_index_after(v___x_2628_, v___x_2627_);
v___x_2630_ = l_Lean_Name_append(v_tag_2611_, v___x_2629_);
v___x_2631_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2620_, v___x_2630_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_);
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2643_; 
v_a_2632_ = lean_ctor_get(v___x_2631_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2631_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2634_ = v___x_2631_;
v_isShared_2635_ = v_isSharedCheck_2643_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2631_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2643_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2641_; 
v___x_2636_ = lean_st_ref_take(v_a_2613_);
v___x_2637_ = l_Lean_Expr_mvarId_x21(v_a_2632_);
v___x_2638_ = lean_array_push(v___x_2636_, v___x_2637_);
v___x_2639_ = lean_st_ref_put(v_a_2613_, v___x_2638_);
if (v_isShared_2635_ == 0)
{
v___x_2641_ = v___x_2634_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_a_2632_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
else
{
return v___x_2631_;
}
}
else
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2644_ = l_Lean_Expr_appFn_x21(v_a_2620_);
v___x_2645_ = l_Lean_Expr_appArg_x21(v___x_2644_);
lean_dec_ref(v___x_2644_);
v___x_2646_ = l_Lean_Expr_appArg_x21(v_a_2620_);
lean_dec(v_a_2620_);
lean_inc_ref(v___x_2645_);
lean_inc(v_tag_2611_);
v___x_2647_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2611_, v___x_2645_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2649_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2647_, 1);
lean_inc_ref(v___x_2646_);
v___x_2649_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2611_, v___x_2646_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2659_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2652_ = v___x_2649_;
v_isShared_2653_ = v_isSharedCheck_2659_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2649_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2659_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2657_; 
v___x_2654_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6);
v___x_2655_ = l_Lean_mkApp4(v___x_2654_, v___x_2645_, v___x_2646_, v_a_2648_, v_a_2650_);
if (v_isShared_2653_ == 0)
{
lean_ctor_set(v___x_2652_, 0, v___x_2655_);
v___x_2657_ = v___x_2652_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___x_2655_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
else
{
lean_dec(v_a_2648_);
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2645_);
return v___x_2649_;
}
}
else
{
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2645_);
lean_dec(v_tag_2611_);
return v___x_2647_;
}
}
}
else
{
lean_dec(v_tag_2611_);
return v___x_2619_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___boxed(lean_object* v_tag_2660_, lean_object* v_type_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2660_, v_type_2661_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_);
lean_dec(v_a_2666_);
lean_dec_ref(v_a_2665_);
lean_dec(v_a_2664_);
lean_dec_ref(v_a_2663_);
lean_dec(v_a_2662_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0(lean_object* v_mvarId_2669_, lean_object* v___x_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_){
_start:
{
lean_object* v___x_2676_; 
lean_inc(v_mvarId_2669_);
v___x_2676_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2669_, v___x_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
if (lean_obj_tag(v___x_2676_) == 0)
{
lean_object* v___x_2677_; 
lean_dec_ref_known(v___x_2676_, 1);
lean_inc(v_mvarId_2669_);
v___x_2677_ = l_Lean_MVarId_getType_x27(v_mvarId_2669_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2723_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2680_ = v___x_2677_;
v_isShared_2681_ = v_isSharedCheck_2723_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v___x_2677_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2723_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; uint8_t v___x_2684_; 
v___x_2682_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1));
v___x_2683_ = lean_unsigned_to_nat(2u);
v___x_2684_ = l_Lean_Expr_isAppOfArity(v_a_2678_, v___x_2682_, v___x_2683_);
if (v___x_2684_ == 0)
{
lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2688_; 
lean_dec(v_a_2678_);
v___x_2685_ = lean_box(0);
v___x_2686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2686_, 0, v_mvarId_2669_);
lean_ctor_set(v___x_2686_, 1, v___x_2685_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set(v___x_2680_, 0, v___x_2686_);
v___x_2688_ = v___x_2680_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2686_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
else
{
lean_object* v___x_2690_; 
lean_del_object(v___x_2680_);
lean_inc(v_mvarId_2669_);
v___x_2690_ = l_Lean_MVarId_getTag(v_mvarId_2669_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v_a_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_a_2691_);
lean_dec_ref_known(v___x_2690_, 1);
v___x_2692_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0));
v___x_2693_ = lean_st_mk_ref(v___x_2692_);
v___x_2694_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_a_2691_, v_a_2678_, v___x_2693_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2705_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v___x_2694_, 1);
v___x_2696_ = lean_st_ref_get(v___x_2693_);
lean_dec(v___x_2693_);
v___x_2697_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2669_, v_a_2695_, v___y_2672_);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2705_ == 0)
{
lean_object* v_unused_2706_; 
v_unused_2706_ = lean_ctor_get(v___x_2697_, 0);
lean_dec(v_unused_2706_);
v___x_2699_ = v___x_2697_;
v_isShared_2700_ = v_isSharedCheck_2705_;
goto v_resetjp_2698_;
}
else
{
lean_dec(v___x_2697_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2705_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2701_ = lean_array_to_list(v___x_2696_);
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 0, v___x_2701_);
v___x_2703_ = v___x_2699_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2701_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
else
{
lean_object* v_a_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2714_; 
lean_dec(v___x_2693_);
lean_dec(v_mvarId_2669_);
v_a_2707_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2714_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2709_ = v___x_2694_;
v_isShared_2710_ = v_isSharedCheck_2714_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_a_2707_);
lean_dec(v___x_2694_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2714_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2712_; 
if (v_isShared_2710_ == 0)
{
v___x_2712_ = v___x_2709_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v_a_2707_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
}
else
{
lean_object* v_a_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2722_; 
lean_dec(v_a_2678_);
lean_dec(v_mvarId_2669_);
v_a_2715_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2717_ = v___x_2690_;
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_a_2715_);
lean_dec(v___x_2690_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___x_2720_; 
if (v_isShared_2718_ == 0)
{
v___x_2720_ = v___x_2717_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_a_2715_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec(v_mvarId_2669_);
v_a_2724_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2677_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2677_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
else
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2739_; 
lean_dec(v_mvarId_2669_);
v_a_2732_ = lean_ctor_get(v___x_2676_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2676_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v___x_2676_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2676_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0___boxed(lean_object* v_mvarId_2740_, lean_object* v___x_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Lean_MVarId_splitAndCore___lam__0(v_mvarId_2740_, v___x_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore(lean_object* v_mvarId_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_){
_start:
{
lean_object* v___x_2757_; lean_object* v___f_2758_; lean_object* v___x_2759_; 
v___x_2757_ = ((lean_object*)(l_Lean_MVarId_splitAndCore___closed__1));
lean_inc(v_mvarId_2751_);
v___f_2758_ = lean_alloc_closure((void*)(l_Lean_MVarId_splitAndCore___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2758_, 0, v_mvarId_2751_);
lean_closure_set(v___f_2758_, 1, v___x_2757_);
v___x_2759_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2751_, v___f_2758_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___boxed(lean_object* v_mvarId_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lean_MVarId_splitAndCore(v_mvarId_2760_, v_a_2761_, v_a_2762_, v_a_2763_, v_a_2764_);
lean_dec(v_a_2764_);
lean_dec_ref(v_a_2763_);
lean_dec(v_a_2762_);
lean_dec_ref(v_a_2761_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd(lean_object* v_mvarId_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_){
_start:
{
lean_object* v___x_2773_; 
v___x_2773_ = l_Lean_MVarId_splitAndCore(v_mvarId_2767_, v_a_2768_, v_a_2769_, v_a_2770_, v_a_2771_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd___boxed(lean_object* v_mvarId_2774_, lean_object* v_a_2775_, lean_object* v_a_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_){
_start:
{
lean_object* v_res_2780_; 
v_res_2780_ = l_Lean_MVarId_splitAnd(v_mvarId_2774_, v_a_2775_, v_a_2776_, v_a_2777_, v_a_2778_);
lean_dec(v_a_2778_);
lean_dec_ref(v_a_2777_);
lean_dec(v_a_2776_);
lean_dec_ref(v_a_2775_);
return v_res_2780_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2784_ = lean_box(0);
v___x_2785_ = ((lean_object*)(l_Lean_MVarId_exfalso___lam__0___closed__1));
v___x_2786_ = l_Lean_mkConst(v___x_2785_, v___x_2784_);
return v___x_2786_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0(lean_object* v_mvarId_2791_, lean_object* v___x_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___x_2798_; 
lean_inc(v_mvarId_2791_);
v___x_2798_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2791_, v___x_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
if (lean_obj_tag(v___x_2798_) == 0)
{
lean_object* v___x_2799_; 
lean_dec_ref_known(v___x_2798_, 1);
lean_inc(v_mvarId_2791_);
v___x_2799_ = l_Lean_MVarId_getType(v_mvarId_2791_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_a_2800_; lean_object* v___x_2801_; lean_object* v_a_2802_; lean_object* v___x_2803_; 
v_a_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_a_2800_);
lean_dec_ref_known(v___x_2799_, 1);
v___x_2801_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_a_2800_, v___y_2794_);
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc_n(v_a_2802_, 2);
lean_dec_ref(v___x_2801_);
v___x_2803_ = l_Lean_Meta_getLevel(v_a_2802_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v_a_2804_; lean_object* v___x_2805_; 
v_a_2804_ = lean_ctor_get(v___x_2803_, 0);
lean_inc(v_a_2804_);
lean_dec_ref_known(v___x_2803_, 1);
lean_inc(v_mvarId_2791_);
v___x_2805_ = l_Lean_MVarId_getTag(v_mvarId_2791_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2805_, 1);
v___x_2807_ = lean_box(0);
v___x_2808_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__2, &l_Lean_MVarId_exfalso___lam__0___closed__2_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__2);
v___x_2809_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2808_, v_a_2806_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2823_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc_n(v_a_2810_, 2);
lean_dec_ref_known(v___x_2809_, 1);
v___x_2811_ = ((lean_object*)(l_Lean_MVarId_exfalso___lam__0___closed__4));
v___x_2812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2812_, 0, v_a_2804_);
lean_ctor_set(v___x_2812_, 1, v___x_2807_);
v___x_2813_ = l_Lean_mkConst(v___x_2811_, v___x_2812_);
v___x_2814_ = l_Lean_mkAppB(v___x_2813_, v_a_2802_, v_a_2810_);
v___x_2815_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2791_, v___x_2814_, v___y_2794_);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2823_ == 0)
{
lean_object* v_unused_2824_; 
v_unused_2824_ = lean_ctor_get(v___x_2815_, 0);
lean_dec(v_unused_2824_);
v___x_2817_ = v___x_2815_;
v_isShared_2818_ = v_isSharedCheck_2823_;
goto v_resetjp_2816_;
}
else
{
lean_dec(v___x_2815_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2823_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2819_; lean_object* v___x_2821_; 
v___x_2819_ = l_Lean_Expr_mvarId_x21(v_a_2810_);
lean_dec(v_a_2810_);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v___x_2819_);
v___x_2821_ = v___x_2817_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v___x_2819_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v_a_2804_);
lean_dec(v_a_2802_);
lean_dec(v_mvarId_2791_);
v_a_2825_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2809_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2809_);
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
lean_dec(v_a_2804_);
lean_dec(v_a_2802_);
lean_dec(v_mvarId_2791_);
v_a_2833_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2805_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2805_);
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
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec(v_a_2802_);
lean_dec(v_mvarId_2791_);
v_a_2841_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2803_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2803_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
lean_dec(v_mvarId_2791_);
v_a_2849_ = lean_ctor_get(v___x_2799_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2799_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2799_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
else
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
lean_dec(v_mvarId_2791_);
v_a_2857_ = lean_ctor_get(v___x_2798_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2798_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v___x_2798_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2798_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2862_; 
if (v_isShared_2860_ == 0)
{
v___x_2862_ = v___x_2859_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0___boxed(lean_object* v_mvarId_2865_, lean_object* v___x_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l_Lean_MVarId_exfalso___lam__0(v_mvarId_2865_, v___x_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso(lean_object* v_mvarId_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_){
_start:
{
lean_object* v___x_2882_; lean_object* v___f_2883_; lean_object* v___x_2884_; 
v___x_2882_ = ((lean_object*)(l_Lean_MVarId_exfalso___closed__1));
lean_inc(v_mvarId_2876_);
v___f_2883_ = lean_alloc_closure((void*)(l_Lean_MVarId_exfalso___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2883_, 0, v_mvarId_2876_);
lean_closure_set(v___f_2883_, 1, v___x_2882_);
v___x_2884_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2876_, v___f_2883_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___boxed(lean_object* v_mvarId_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l_Lean_MVarId_exfalso(v_mvarId_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_);
lean_dec(v_a_2889_);
lean_dec_ref(v_a_2888_);
lean_dec(v_a_2887_);
lean_dec_ref(v_a_2886_);
return v_res_2891_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2895_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__1));
v___x_2896_ = l_Lean_MessageData_ofFormat(v___x_2895_);
return v___x_2896_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2897_; lean_object* v___x_2898_; 
v___x_2897_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__2, &l_Lean_MVarId_nthConstructor___lam__0___closed__2_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__2);
v___x_2898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2897_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0(lean_object* v_name_2903_, lean_object* v_goal_2904_, lean_object* v_idx_2905_, lean_object* v_expected_x3f_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v___x_2915_; 
lean_inc(v_name_2903_);
lean_inc(v_goal_2904_);
v___x_2915_ = l_Lean_MVarId_checkNotAssigned(v_goal_2904_, v_name_2903_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v___x_2916_; 
lean_dec_ref_known(v___x_2915_, 1);
lean_inc(v_goal_2904_);
v___x_2916_ = l_Lean_MVarId_getType_x27(v_goal_2904_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_object* v_a_2917_; lean_object* v___x_2918_; 
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
lean_inc(v_a_2917_);
lean_dec_ref_known(v___x_2916_, 1);
v___x_2918_ = l_Lean_Expr_getAppFn(v_a_2917_);
lean_dec(v_a_2917_);
if (lean_obj_tag(v___x_2918_) == 4)
{
lean_object* v_declName_2919_; lean_object* v_us_2920_; lean_object* v___x_2921_; lean_object* v_env_2922_; uint8_t v___x_2923_; lean_object* v___x_2924_; 
v_declName_2919_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_declName_2919_);
v_us_2920_ = lean_ctor_get(v___x_2918_, 1);
lean_inc(v_us_2920_);
lean_dec_ref_known(v___x_2918_, 2);
v___x_2921_ = lean_st_ref_get(v___y_2910_);
v_env_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc_ref(v_env_2922_);
lean_dec(v___x_2921_);
v___x_2923_ = 0;
v___x_2924_ = l_Lean_Environment_find_x3f(v_env_2922_, v_declName_2919_, v___x_2923_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_dec(v_us_2920_);
lean_dec(v_expected_x3f_2906_);
lean_dec(v_idx_2905_);
goto v___jp_2912_;
}
else
{
lean_object* v_val_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2995_; 
v_val_2925_ = lean_ctor_get(v___x_2924_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2924_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2927_ = v___x_2924_;
v_isShared_2928_ = v_isSharedCheck_2995_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_val_2925_);
lean_dec(v___x_2924_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2995_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
if (lean_obj_tag(v_val_2925_) == 5)
{
lean_object* v_val_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2994_; 
v_val_2929_ = lean_ctor_get(v_val_2925_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v_val_2925_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2931_ = v_val_2925_;
v_isShared_2932_ = v_isSharedCheck_2994_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_val_2929_);
lean_dec(v_val_2925_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2994_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; 
if (lean_obj_tag(v_expected_x3f_2906_) == 1)
{
lean_object* v_val_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2993_; 
v_val_2964_ = lean_ctor_get(v_expected_x3f_2906_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v_expected_x3f_2906_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2966_ = v_expected_x3f_2906_;
v_isShared_2967_ = v_isSharedCheck_2993_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_val_2964_);
lean_dec(v_expected_x3f_2906_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2993_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v_ctors_2968_; lean_object* v___x_2969_; uint8_t v___x_2970_; 
v_ctors_2968_ = lean_ctor_get(v_val_2929_, 4);
v___x_2969_ = l_List_lengthTR___redArg(v_ctors_2968_);
v___x_2970_ = lean_nat_dec_eq(v___x_2969_, v_val_2964_);
lean_dec(v___x_2969_);
if (v___x_2970_ == 0)
{
uint8_t v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2982_; 
v___x_2971_ = 1;
lean_inc(v_name_2903_);
v___x_2972_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2903_, v___x_2971_);
v___x_2973_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__7));
v___x_2974_ = lean_string_append(v___x_2972_, v___x_2973_);
v___x_2975_ = l_Nat_reprFast(v_val_2964_);
v___x_2976_ = lean_string_append(v___x_2974_, v___x_2975_);
lean_dec_ref(v___x_2975_);
v___x_2977_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__6));
v___x_2978_ = lean_string_append(v___x_2976_, v___x_2977_);
v___x_2979_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
v___x_2980_ = l_Lean_MessageData_ofFormat(v___x_2979_);
if (v_isShared_2967_ == 0)
{
lean_ctor_set(v___x_2966_, 0, v___x_2980_);
v___x_2982_ = v___x_2966_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2980_);
v___x_2982_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
lean_object* v___x_2983_; 
lean_inc(v_goal_2904_);
lean_inc(v_name_2903_);
v___x_2983_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2903_, v_goal_2904_, v___x_2982_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
if (lean_obj_tag(v___x_2983_) == 0)
{
lean_dec_ref_known(v___x_2983_, 1);
v___y_2934_ = v___y_2907_;
v___y_2935_ = v___y_2908_;
v___y_2936_ = v___y_2909_;
v___y_2937_ = v___y_2910_;
goto v___jp_2933_;
}
else
{
lean_object* v_a_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2991_; 
lean_del_object(v___x_2931_);
lean_dec_ref(v_val_2929_);
lean_del_object(v___x_2927_);
lean_dec(v_us_2920_);
lean_dec(v_idx_2905_);
lean_dec(v_goal_2904_);
lean_dec(v_name_2903_);
v_a_2984_ = lean_ctor_get(v___x_2983_, 0);
v_isSharedCheck_2991_ = !lean_is_exclusive(v___x_2983_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2986_ = v___x_2983_;
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_a_2984_);
lean_dec(v___x_2983_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2989_; 
if (v_isShared_2987_ == 0)
{
v___x_2989_ = v___x_2986_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_a_2984_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
}
}
}
else
{
lean_del_object(v___x_2966_);
lean_dec(v_val_2964_);
v___y_2934_ = v___y_2907_;
v___y_2935_ = v___y_2908_;
v___y_2936_ = v___y_2909_;
v___y_2937_ = v___y_2910_;
goto v___jp_2933_;
}
}
}
else
{
lean_dec(v_expected_x3f_2906_);
v___y_2934_ = v___y_2907_;
v___y_2935_ = v___y_2908_;
v___y_2936_ = v___y_2909_;
v___y_2937_ = v___y_2910_;
goto v___jp_2933_;
}
v___jp_2933_:
{
lean_object* v_ctors_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v_ctors_2938_ = lean_ctor_get(v_val_2929_, 4);
lean_inc(v_ctors_2938_);
lean_dec_ref(v_val_2929_);
v___x_2939_ = l_List_lengthTR___redArg(v_ctors_2938_);
v___x_2940_ = lean_nat_dec_lt(v_idx_2905_, v___x_2939_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2951_; 
lean_dec(v_ctors_2938_);
lean_dec(v_us_2920_);
v___x_2941_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__4));
v___x_2942_ = l_Nat_reprFast(v_idx_2905_);
v___x_2943_ = lean_string_append(v___x_2941_, v___x_2942_);
lean_dec_ref(v___x_2942_);
v___x_2944_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__5));
v___x_2945_ = lean_string_append(v___x_2943_, v___x_2944_);
v___x_2946_ = l_Nat_reprFast(v___x_2939_);
v___x_2947_ = lean_string_append(v___x_2945_, v___x_2946_);
lean_dec_ref(v___x_2946_);
v___x_2948_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__6));
v___x_2949_ = lean_string_append(v___x_2947_, v___x_2948_);
if (v_isShared_2932_ == 0)
{
lean_ctor_set_tag(v___x_2931_, 3);
lean_ctor_set(v___x_2931_, 0, v___x_2949_);
v___x_2951_ = v___x_2931_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v___x_2949_);
v___x_2951_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; lean_object* v___x_2954_; 
v___x_2952_ = l_Lean_MessageData_ofFormat(v___x_2951_);
if (v_isShared_2928_ == 0)
{
lean_ctor_set(v___x_2927_, 0, v___x_2952_);
v___x_2954_ = v___x_2927_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2952_);
v___x_2954_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
lean_object* v___x_2955_; 
v___x_2955_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2903_, v_goal_2904_, v___x_2954_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_);
return v___x_2955_;
}
}
}
else
{
lean_object* v___x_2958_; lean_object* v___x_2959_; uint8_t v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
lean_dec(v___x_2939_);
lean_del_object(v___x_2931_);
lean_del_object(v___x_2927_);
lean_dec(v_name_2903_);
v___x_2958_ = l_List_get___redArg(v_ctors_2938_, v_idx_2905_);
lean_dec(v_ctors_2938_);
v___x_2959_ = l_Lean_mkConst(v___x_2958_, v_us_2920_);
v___x_2960_ = 0;
v___x_2961_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_2961_, 0, v___x_2960_);
lean_ctor_set_uint8(v___x_2961_, 1, v___x_2940_);
lean_ctor_set_uint8(v___x_2961_, 2, v___x_2923_);
lean_ctor_set_uint8(v___x_2961_, 3, v___x_2940_);
v___x_2962_ = lean_box(0);
v___x_2963_ = l_Lean_MVarId_apply(v_goal_2904_, v___x_2959_, v___x_2961_, v___x_2962_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_);
return v___x_2963_;
}
}
}
}
else
{
lean_del_object(v___x_2927_);
lean_dec(v_val_2925_);
lean_dec(v_us_2920_);
lean_dec(v_expected_x3f_2906_);
lean_dec(v_idx_2905_);
goto v___jp_2912_;
}
}
}
}
else
{
lean_dec_ref(v___x_2918_);
lean_dec(v_expected_x3f_2906_);
lean_dec(v_idx_2905_);
goto v___jp_2912_;
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec(v_expected_x3f_2906_);
lean_dec(v_idx_2905_);
lean_dec(v_goal_2904_);
lean_dec(v_name_2903_);
v_a_2996_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2916_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2916_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_dec(v_expected_x3f_2906_);
lean_dec(v_idx_2905_);
lean_dec(v_goal_2904_);
lean_dec(v_name_2903_);
v_a_3004_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2915_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2915_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
v___jp_2912_:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__3, &l_Lean_MVarId_nthConstructor___lam__0___closed__3_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__3);
v___x_2914_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2903_, v_goal_2904_, v___x_2913_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
return v___x_2914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0___boxed(lean_object* v_name_3012_, lean_object* v_goal_3013_, lean_object* v_idx_3014_, lean_object* v_expected_x3f_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_Lean_MVarId_nthConstructor___lam__0(v_name_3012_, v_goal_3013_, v_idx_3014_, v_expected_x3f_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor(lean_object* v_name_3022_, lean_object* v_idx_3023_, lean_object* v_expected_x3f_3024_, lean_object* v_goal_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_){
_start:
{
lean_object* v___f_3031_; lean_object* v___x_3032_; 
lean_inc(v_goal_3025_);
v___f_3031_ = lean_alloc_closure((void*)(l_Lean_MVarId_nthConstructor___lam__0___boxed), 9, 4);
lean_closure_set(v___f_3031_, 0, v_name_3022_);
lean_closure_set(v___f_3031_, 1, v_goal_3025_);
lean_closure_set(v___f_3031_, 2, v_idx_3023_);
lean_closure_set(v___f_3031_, 3, v_expected_x3f_3024_);
v___x_3032_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_goal_3025_, v___f_3031_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___boxed(lean_object* v_name_3033_, lean_object* v_idx_3034_, lean_object* v_expected_x3f_3035_, lean_object* v_goal_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l_Lean_MVarId_nthConstructor(v_name_3033_, v_idx_3034_, v_expected_x3f_3035_, v_goal_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_);
lean_dec(v_a_3040_);
lean_dec_ref(v_a_3039_);
lean_dec(v_a_3038_);
lean_dec_ref(v_a_3037_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(lean_object* v_x_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_){
_start:
{
lean_object* v___x_3049_; 
v___x_3049_ = l_Lean_Meta_saveState___redArg(v___y_3045_, v___y_3047_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
lean_inc(v___y_3047_);
lean_inc_ref(v___y_3046_);
lean_inc(v___y_3045_);
lean_inc_ref(v___y_3044_);
v___x_3051_ = lean_apply_5(v_x_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, lean_box(0));
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3060_; 
lean_dec(v_a_3050_);
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3054_ = v___x_3051_;
v_isShared_3055_ = v_isSharedCheck_3060_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_a_3052_);
lean_dec(v___x_3051_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3060_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3056_; lean_object* v___x_3058_; 
v___x_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3056_, 0, v_a_3052_);
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 0, v___x_3056_);
v___x_3058_ = v___x_3054_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3056_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
else
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3091_; 
v_a_3061_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3063_ = v___x_3051_;
v_isShared_3064_ = v_isSharedCheck_3091_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3051_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3091_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
uint8_t v___x_3065_; 
v___x_3065_ = l_Lean_Exception_isInterrupt(v_a_3061_);
if (v___x_3065_ == 0)
{
uint8_t v___x_3066_; 
lean_inc(v_a_3061_);
v___x_3066_ = l_Lean_Exception_isRuntime(v_a_3061_);
if (v___x_3066_ == 0)
{
lean_object* v___x_3067_; 
lean_del_object(v___x_3063_);
lean_dec(v_a_3061_);
v___x_3067_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3050_, v___y_3045_, v___y_3047_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3075_; 
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3075_ == 0)
{
lean_object* v_unused_3076_; 
v_unused_3076_ = lean_ctor_get(v___x_3067_, 0);
lean_dec(v_unused_3076_);
v___x_3069_ = v___x_3067_;
v_isShared_3070_ = v_isSharedCheck_3075_;
goto v_resetjp_3068_;
}
else
{
lean_dec(v___x_3067_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3075_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3071_; lean_object* v___x_3073_; 
v___x_3071_ = lean_box(0);
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 0, v___x_3071_);
v___x_3073_ = v___x_3069_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v___x_3071_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
v_a_3077_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3067_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3067_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
else
{
lean_object* v___x_3086_; 
lean_dec(v_a_3050_);
if (v_isShared_3064_ == 0)
{
v___x_3086_ = v___x_3063_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3061_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
else
{
lean_object* v___x_3089_; 
lean_dec(v_a_3050_);
if (v_isShared_3064_ == 0)
{
v___x_3089_ = v___x_3063_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3061_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec_ref(v_x_3043_);
v_a_3092_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3049_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3049_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg___boxed(lean_object* v_x_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v_x_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(lean_object* v_00_u03b1_3107_, lean_object* v_x_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v_x_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___boxed(lean_object* v_00_u03b1_3115_, lean_object* v_x_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_){
_start:
{
lean_object* v_res_3122_; 
v_res_3122_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(v_00_u03b1_3115_, v_x_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
lean_dec(v___y_3118_);
lean_dec_ref(v___y_3117_);
return v_res_3122_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3124_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___lam__0___closed__0));
v___x_3125_ = l_Lean_stringToMessageData(v___x_3124_);
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0(lean_object* v_mvarId_3126_, lean_object* v___x_3127_, lean_object* v___x_3128_, lean_object* v___x_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
lean_object* v___x_3138_; 
v___x_3138_ = l_Lean_MVarId_apply(v_mvarId_3126_, v___x_3127_, v___x_3128_, v___x_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3148_; 
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3141_ = v___x_3138_;
v_isShared_3142_ = v_isSharedCheck_3148_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v___x_3138_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3148_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
if (lean_obj_tag(v_a_3139_) == 1)
{
lean_object* v_tail_3143_; 
v_tail_3143_ = lean_ctor_get(v_a_3139_, 1);
if (lean_obj_tag(v_tail_3143_) == 0)
{
lean_object* v_head_3144_; lean_object* v___x_3146_; 
v_head_3144_ = lean_ctor_get(v_a_3139_, 0);
lean_inc(v_head_3144_);
lean_dec_ref_known(v_a_3139_, 2);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v_head_3144_);
v___x_3146_ = v___x_3141_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_head_3144_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
else
{
lean_dec_ref_known(v_a_3139_, 2);
lean_del_object(v___x_3141_);
goto v___jp_3135_;
}
}
else
{
lean_del_object(v___x_3141_);
lean_dec(v_a_3139_);
goto v___jp_3135_;
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
v_a_3149_ = lean_ctor_get(v___x_3138_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3138_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3138_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
v___jp_3135_:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3137_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3136_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_);
return v___x_3137_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0___boxed(lean_object* v_mvarId_3157_, lean_object* v___x_3158_, lean_object* v___x_3159_, lean_object* v___x_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l_Lean_MVarId_iffOfEq___lam__0(v_mvarId_3157_, v___x_3158_, v___x_3159_, v___x_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
return v_res_3166_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___closed__2(void){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3170_ = lean_box(0);
v___x_3171_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___closed__1));
v___x_3172_ = l_Lean_mkConst(v___x_3171_, v___x_3170_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq(lean_object* v_mvarId_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_){
_start:
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___f_3186_; lean_object* v___x_3187_; 
v___x_3183_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___closed__2, &l_Lean_MVarId_iffOfEq___closed__2_once, _init_l_Lean_MVarId_iffOfEq___closed__2);
v___x_3184_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___closed__3));
v___x_3185_ = lean_box(0);
lean_inc(v_mvarId_3177_);
v___f_3186_ = lean_alloc_closure((void*)(l_Lean_MVarId_iffOfEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_3186_, 0, v_mvarId_3177_);
lean_closure_set(v___f_3186_, 1, v___x_3183_);
lean_closure_set(v___f_3186_, 2, v___x_3184_);
lean_closure_set(v___f_3186_, 3, v___x_3185_);
v___x_3187_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3186_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_);
if (lean_obj_tag(v___x_3187_) == 0)
{
lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3199_; 
v_a_3188_ = lean_ctor_get(v___x_3187_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v___x_3187_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3190_ = v___x_3187_;
v_isShared_3191_ = v_isSharedCheck_3199_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___x_3187_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3199_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
if (lean_obj_tag(v_a_3188_) == 0)
{
lean_object* v___x_3193_; 
if (v_isShared_3191_ == 0)
{
lean_ctor_set(v___x_3190_, 0, v_mvarId_3177_);
v___x_3193_ = v___x_3190_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_mvarId_3177_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
else
{
lean_object* v_val_3195_; lean_object* v___x_3197_; 
lean_dec(v_mvarId_3177_);
v_val_3195_ = lean_ctor_get(v_a_3188_, 0);
lean_inc(v_val_3195_);
lean_dec_ref_known(v_a_3188_, 1);
if (v_isShared_3191_ == 0)
{
lean_ctor_set(v___x_3190_, 0, v_val_3195_);
v___x_3197_ = v___x_3190_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v_val_3195_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_dec(v_mvarId_3177_);
v_a_3200_ = lean_ctor_get(v___x_3187_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3187_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3187_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3187_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___boxed(lean_object* v_mvarId_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_Lean_MVarId_iffOfEq(v_mvarId_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_);
lean_dec(v_a_3212_);
lean_dec_ref(v_a_3211_);
lean_dec(v_a_3210_);
lean_dec_ref(v_a_3209_);
return v_res_3214_;
}
}
static lean_object* _init_l_Lean_MVarId_propext___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v___x_3218_ = lean_box(0);
v___x_3219_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__1));
v___x_3220_ = l_Lean_mkConst(v___x_3219_, v___x_3218_);
return v___x_3220_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0(lean_object* v_mvarId_3224_, uint8_t v___x_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_){
_start:
{
lean_object* v___y_3232_; lean_object* v___y_3233_; lean_object* v___y_3234_; lean_object* v___y_3235_; uint8_t v___y_3239_; lean_object* v___y_3265_; lean_object* v___x_3303_; uint8_t v_transparency_3304_; uint8_t v___x_3305_; 
v___x_3303_ = l_Lean_Meta_Context_config(v___y_3226_);
v_transparency_3304_ = lean_ctor_get_uint8(v___x_3303_, 9);
lean_dec_ref(v___x_3303_);
v___x_3305_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3304_, v___x_3225_);
if (v___x_3305_ == 0)
{
lean_object* v_keyedConfig_3306_; uint8_t v_trackZetaDelta_3307_; lean_object* v_zetaDeltaSet_3308_; lean_object* v_lctx_3309_; lean_object* v_localInstances_3310_; lean_object* v_defEqCtx_x3f_3311_; lean_object* v_synthPendingDepth_3312_; lean_object* v_customCanUnfoldPredicate_x3f_3313_; uint8_t v_univApprox_3314_; uint8_t v_inTypeClassResolution_3315_; uint8_t v_cacheInferType_3316_; lean_object* v_rewriteSet_x3f_3317_; uint8_t v_rewriteFuelScope_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v_keyedConfig_3306_ = lean_ctor_get(v___y_3226_, 0);
v_trackZetaDelta_3307_ = lean_ctor_get_uint8(v___y_3226_, sizeof(void*)*8);
v_zetaDeltaSet_3308_ = lean_ctor_get(v___y_3226_, 1);
v_lctx_3309_ = lean_ctor_get(v___y_3226_, 2);
v_localInstances_3310_ = lean_ctor_get(v___y_3226_, 3);
v_defEqCtx_x3f_3311_ = lean_ctor_get(v___y_3226_, 4);
v_synthPendingDepth_3312_ = lean_ctor_get(v___y_3226_, 5);
v_customCanUnfoldPredicate_x3f_3313_ = lean_ctor_get(v___y_3226_, 6);
v_univApprox_3314_ = lean_ctor_get_uint8(v___y_3226_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_3315_ = lean_ctor_get_uint8(v___y_3226_, sizeof(void*)*8 + 2);
v_cacheInferType_3316_ = lean_ctor_get_uint8(v___y_3226_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_3317_ = lean_ctor_get(v___y_3226_, 7);
v_rewriteFuelScope_3318_ = lean_ctor_get_uint8(v___y_3226_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_3306_);
v___x_3319_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3225_, v_keyedConfig_3306_);
lean_inc(v_rewriteSet_x3f_3317_);
lean_inc(v_customCanUnfoldPredicate_x3f_3313_);
lean_inc(v_synthPendingDepth_3312_);
lean_inc(v_defEqCtx_x3f_3311_);
lean_inc_ref(v_localInstances_3310_);
lean_inc_ref(v_lctx_3309_);
lean_inc(v_zetaDeltaSet_3308_);
v___x_3320_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_3320_, 0, v___x_3319_);
lean_ctor_set(v___x_3320_, 1, v_zetaDeltaSet_3308_);
lean_ctor_set(v___x_3320_, 2, v_lctx_3309_);
lean_ctor_set(v___x_3320_, 3, v_localInstances_3310_);
lean_ctor_set(v___x_3320_, 4, v_defEqCtx_x3f_3311_);
lean_ctor_set(v___x_3320_, 5, v_synthPendingDepth_3312_);
lean_ctor_set(v___x_3320_, 6, v_customCanUnfoldPredicate_x3f_3313_);
lean_ctor_set(v___x_3320_, 7, v_rewriteSet_x3f_3317_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*8, v_trackZetaDelta_3307_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*8 + 1, v_univApprox_3314_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*8 + 2, v_inTypeClassResolution_3315_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*8 + 3, v_cacheInferType_3316_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*8 + 4, v_rewriteFuelScope_3318_);
lean_inc(v_mvarId_3224_);
v___x_3321_ = l_Lean_MVarId_getType_x27(v_mvarId_3224_, v___x_3320_, v___y_3227_, v___y_3228_, v___y_3229_);
lean_dec_ref_known(v___x_3320_, 8);
v___y_3265_ = v___x_3321_;
goto v___jp_3264_;
}
else
{
lean_object* v___x_3322_; 
lean_inc(v_mvarId_3224_);
v___x_3322_ = l_Lean_MVarId_getType_x27(v_mvarId_3224_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
v___y_3265_ = v___x_3322_;
goto v___jp_3264_;
}
v___jp_3231_:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3236_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3237_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3236_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_);
lean_dec_ref(v___y_3232_);
return v___x_3237_;
}
v___jp_3238_:
{
lean_object* v___x_3240_; uint8_t v___x_3241_; uint8_t v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
v___x_3240_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__2, &l_Lean_MVarId_propext___lam__0___closed__2_once, _init_l_Lean_MVarId_propext___lam__0___closed__2);
v___x_3241_ = 0;
v___x_3242_ = 0;
v___x_3243_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3243_, 0, v___x_3241_);
lean_ctor_set_uint8(v___x_3243_, 1, v___y_3239_);
lean_ctor_set_uint8(v___x_3243_, 2, v___x_3242_);
lean_ctor_set_uint8(v___x_3243_, 3, v___y_3239_);
v___x_3244_ = lean_box(0);
v___x_3245_ = l_Lean_MVarId_apply(v_mvarId_3224_, v___x_3240_, v___x_3243_, v___x_3244_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v_a_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3255_; 
v_a_3246_ = lean_ctor_get(v___x_3245_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3245_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3248_ = v___x_3245_;
v_isShared_3249_ = v_isSharedCheck_3255_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_a_3246_);
lean_dec(v___x_3245_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3255_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
if (lean_obj_tag(v_a_3246_) == 1)
{
lean_object* v_tail_3250_; 
v_tail_3250_ = lean_ctor_get(v_a_3246_, 1);
if (lean_obj_tag(v_tail_3250_) == 0)
{
lean_object* v_head_3251_; lean_object* v___x_3253_; 
lean_dec_ref(v___y_3226_);
v_head_3251_ = lean_ctor_get(v_a_3246_, 0);
lean_inc(v_head_3251_);
lean_dec_ref_known(v_a_3246_, 2);
if (v_isShared_3249_ == 0)
{
lean_ctor_set(v___x_3248_, 0, v_head_3251_);
v___x_3253_ = v___x_3248_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_head_3251_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
else
{
lean_dec_ref_known(v_a_3246_, 2);
lean_del_object(v___x_3248_);
v___y_3232_ = v___y_3226_;
v___y_3233_ = v___y_3227_;
v___y_3234_ = v___y_3228_;
v___y_3235_ = v___y_3229_;
goto v___jp_3231_;
}
}
else
{
lean_del_object(v___x_3248_);
lean_dec(v_a_3246_);
v___y_3232_ = v___y_3226_;
v___y_3233_ = v___y_3227_;
v___y_3234_ = v___y_3228_;
v___y_3235_ = v___y_3229_;
goto v___jp_3231_;
}
}
}
else
{
lean_object* v_a_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3263_; 
lean_dec_ref(v___y_3226_);
v_a_3256_ = lean_ctor_get(v___x_3245_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3245_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3258_ = v___x_3245_;
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_a_3256_);
lean_dec(v___x_3245_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3261_; 
if (v_isShared_3259_ == 0)
{
v___x_3261_ = v___x_3258_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_a_3256_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
}
v___jp_3264_:
{
if (lean_obj_tag(v___y_3265_) == 0)
{
lean_object* v_a_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; uint8_t v___x_3269_; 
v_a_3266_ = lean_ctor_get(v___y_3265_, 0);
lean_inc(v_a_3266_);
lean_dec_ref_known(v___y_3265_, 1);
v___x_3267_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__4));
v___x_3268_ = lean_unsigned_to_nat(3u);
v___x_3269_ = l_Lean_Expr_isAppOfArity(v_a_3266_, v___x_3267_, v___x_3268_);
if (v___x_3269_ == 0)
{
lean_object* v___x_3270_; lean_object* v___x_3271_; 
lean_dec(v_a_3266_);
lean_dec(v_mvarId_3224_);
v___x_3270_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3271_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3270_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
lean_dec_ref(v___y_3226_);
return v___x_3271_;
}
else
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3272_ = l_Lean_Expr_appFn_x21(v_a_3266_);
lean_dec(v_a_3266_);
v___x_3273_ = l_Lean_Expr_appArg_x21(v___x_3272_);
lean_dec_ref(v___x_3272_);
v___x_3274_ = l_Lean_Meta_isProp(v___x_3273_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; uint8_t v___x_3276_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
lean_dec_ref_known(v___x_3274_, 1);
v___x_3276_ = lean_unbox(v_a_3275_);
lean_dec(v_a_3275_);
if (v___x_3276_ == 0)
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
lean_dec(v_mvarId_3224_);
v___x_3277_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3278_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3277_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
lean_dec_ref(v___y_3226_);
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3281_ = v___x_3278_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3278_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
v___x_3284_ = v___x_3281_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3279_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
else
{
v___y_3239_ = v___x_3269_;
goto v___jp_3238_;
}
}
else
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3294_; 
lean_dec_ref(v___y_3226_);
lean_dec(v_mvarId_3224_);
v_a_3287_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3289_ = v___x_3274_;
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3274_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
}
}
else
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3302_; 
lean_dec_ref(v___y_3226_);
lean_dec(v_mvarId_3224_);
v_a_3295_ = lean_ctor_get(v___y_3265_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___y_3265_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3297_ = v___y_3265_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___y_3265_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3300_; 
if (v_isShared_3298_ == 0)
{
v___x_3300_ = v___x_3297_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v_a_3295_);
v___x_3300_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
return v___x_3300_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0___boxed(lean_object* v_mvarId_3323_, lean_object* v___x_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
uint8_t v___x_2533__boxed_3330_; lean_object* v_res_3331_; 
v___x_2533__boxed_3330_ = lean_unbox(v___x_3324_);
v_res_3331_ = l_Lean_MVarId_propext___lam__0(v_mvarId_3323_, v___x_2533__boxed_3330_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_);
lean_dec(v___y_3328_);
lean_dec_ref(v___y_3327_);
lean_dec(v___y_3326_);
return v_res_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext(lean_object* v_mvarId_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_){
_start:
{
uint8_t v___x_3338_; lean_object* v___x_3339_; lean_object* v___f_3340_; lean_object* v___x_3341_; 
v___x_3338_ = 2;
v___x_3339_ = lean_box(v___x_3338_);
lean_inc(v_mvarId_3332_);
v___f_3340_ = lean_alloc_closure((void*)(l_Lean_MVarId_propext___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3340_, 0, v_mvarId_3332_);
lean_closure_set(v___f_3340_, 1, v___x_3339_);
v___x_3341_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3340_, v_a_3333_, v_a_3334_, v_a_3335_, v_a_3336_);
if (lean_obj_tag(v___x_3341_) == 0)
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3353_; 
v_a_3342_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3344_ = v___x_3341_;
v_isShared_3345_ = v_isSharedCheck_3353_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3341_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3353_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
if (lean_obj_tag(v_a_3342_) == 0)
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 0, v_mvarId_3332_);
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_mvarId_3332_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
else
{
lean_object* v_val_3349_; lean_object* v___x_3351_; 
lean_dec(v_mvarId_3332_);
v_val_3349_ = lean_ctor_get(v_a_3342_, 0);
lean_inc(v_val_3349_);
lean_dec_ref_known(v_a_3342_, 1);
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 0, v_val_3349_);
v___x_3351_ = v___x_3344_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_val_3349_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
else
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3361_; 
lean_dec(v_mvarId_3332_);
v_a_3354_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___x_3341_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3341_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___boxed(lean_object* v_mvarId_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lean_MVarId_propext(v_mvarId_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_);
lean_dec(v_a_3366_);
lean_dec_ref(v_a_3365_);
lean_dec(v_a_3364_);
lean_dec_ref(v_a_3363_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0(lean_object* v_mvarId_3375_, lean_object* v___x_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_){
_start:
{
lean_object* v___y_3383_; lean_object* v___x_3427_; 
lean_inc(v_mvarId_3375_);
v___x_3427_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3375_, v___x_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v___x_3428_; uint8_t v_transparency_3429_; uint8_t v___x_3430_; uint8_t v___x_3431_; 
lean_dec_ref_known(v___x_3427_, 1);
v___x_3428_ = l_Lean_Meta_Context_config(v___y_3377_);
v_transparency_3429_ = lean_ctor_get_uint8(v___x_3428_, 9);
lean_dec_ref(v___x_3428_);
v___x_3430_ = 2;
v___x_3431_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3429_, v___x_3430_);
if (v___x_3431_ == 0)
{
lean_object* v_keyedConfig_3432_; uint8_t v_trackZetaDelta_3433_; lean_object* v_zetaDeltaSet_3434_; lean_object* v_lctx_3435_; lean_object* v_localInstances_3436_; lean_object* v_defEqCtx_x3f_3437_; lean_object* v_synthPendingDepth_3438_; lean_object* v_customCanUnfoldPredicate_x3f_3439_; uint8_t v_univApprox_3440_; uint8_t v_inTypeClassResolution_3441_; uint8_t v_cacheInferType_3442_; lean_object* v_rewriteSet_x3f_3443_; uint8_t v_rewriteFuelScope_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v_keyedConfig_3432_ = lean_ctor_get(v___y_3377_, 0);
v_trackZetaDelta_3433_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*8);
v_zetaDeltaSet_3434_ = lean_ctor_get(v___y_3377_, 1);
v_lctx_3435_ = lean_ctor_get(v___y_3377_, 2);
v_localInstances_3436_ = lean_ctor_get(v___y_3377_, 3);
v_defEqCtx_x3f_3437_ = lean_ctor_get(v___y_3377_, 4);
v_synthPendingDepth_3438_ = lean_ctor_get(v___y_3377_, 5);
v_customCanUnfoldPredicate_x3f_3439_ = lean_ctor_get(v___y_3377_, 6);
v_univApprox_3440_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_3441_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*8 + 2);
v_cacheInferType_3442_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_3443_ = lean_ctor_get(v___y_3377_, 7);
v_rewriteFuelScope_3444_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_3432_);
v___x_3445_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3430_, v_keyedConfig_3432_);
lean_inc(v_rewriteSet_x3f_3443_);
lean_inc(v_customCanUnfoldPredicate_x3f_3439_);
lean_inc(v_synthPendingDepth_3438_);
lean_inc(v_defEqCtx_x3f_3437_);
lean_inc_ref(v_localInstances_3436_);
lean_inc_ref(v_lctx_3435_);
lean_inc(v_zetaDeltaSet_3434_);
v___x_3446_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
lean_ctor_set(v___x_3446_, 1, v_zetaDeltaSet_3434_);
lean_ctor_set(v___x_3446_, 2, v_lctx_3435_);
lean_ctor_set(v___x_3446_, 3, v_localInstances_3436_);
lean_ctor_set(v___x_3446_, 4, v_defEqCtx_x3f_3437_);
lean_ctor_set(v___x_3446_, 5, v_synthPendingDepth_3438_);
lean_ctor_set(v___x_3446_, 6, v_customCanUnfoldPredicate_x3f_3439_);
lean_ctor_set(v___x_3446_, 7, v_rewriteSet_x3f_3443_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*8, v_trackZetaDelta_3433_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*8 + 1, v_univApprox_3440_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*8 + 2, v_inTypeClassResolution_3441_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*8 + 3, v_cacheInferType_3442_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*8 + 4, v_rewriteFuelScope_3444_);
lean_inc(v_mvarId_3375_);
v___x_3447_ = l_Lean_MVarId_getType_x27(v_mvarId_3375_, v___x_3446_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec_ref_known(v___x_3446_, 8);
v___y_3383_ = v___x_3447_;
goto v___jp_3382_;
}
else
{
lean_object* v___x_3448_; 
lean_inc(v_mvarId_3375_);
v___x_3448_ = l_Lean_MVarId_getType_x27(v_mvarId_3375_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
v___y_3383_ = v___x_3448_;
goto v___jp_3382_;
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
lean_dec_ref(v___y_3377_);
lean_dec(v_mvarId_3375_);
v_a_3449_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3427_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3427_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
v___jp_3382_:
{
if (lean_obj_tag(v___y_3383_) == 0)
{
lean_object* v_a_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; uint8_t v___x_3387_; 
v_a_3384_ = lean_ctor_get(v___y_3383_, 0);
lean_inc(v_a_3384_);
lean_dec_ref_known(v___y_3383_, 1);
v___x_3385_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1));
v___x_3386_ = lean_unsigned_to_nat(4u);
v___x_3387_ = l_Lean_Expr_isAppOfArity(v_a_3384_, v___x_3385_, v___x_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; lean_object* v___x_3389_; 
lean_dec(v_a_3384_);
lean_dec(v_mvarId_3375_);
v___x_3388_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3389_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3388_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec_ref(v___y_3377_);
return v___x_3389_;
}
else
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3390_ = l_Lean_Expr_appFn_x21(v_a_3384_);
v___x_3391_ = l_Lean_Expr_appFn_x21(v___x_3390_);
lean_dec_ref(v___x_3390_);
v___x_3392_ = l_Lean_Expr_appArg_x21(v___x_3391_);
lean_dec_ref(v___x_3391_);
v___x_3393_ = l_Lean_Expr_appArg_x21(v_a_3384_);
lean_dec(v_a_3384_);
v___x_3394_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3));
v___x_3395_ = lean_unsigned_to_nat(2u);
v___x_3396_ = lean_mk_empty_array_with_capacity(v___x_3395_);
v___x_3397_ = lean_array_push(v___x_3396_, v___x_3392_);
v___x_3398_ = lean_array_push(v___x_3397_, v___x_3393_);
v___x_3399_ = l_Lean_Meta_mkAppM(v___x_3394_, v___x_3398_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec_ref(v___y_3377_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; lean_object* v___x_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3409_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3400_);
lean_dec_ref_known(v___x_3399_, 1);
v___x_3401_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_3375_, v_a_3400_, v___y_3378_);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3409_ == 0)
{
lean_object* v_unused_3410_; 
v_unused_3410_ = lean_ctor_get(v___x_3401_, 0);
lean_dec(v_unused_3410_);
v___x_3403_ = v___x_3401_;
v_isShared_3404_ = v_isSharedCheck_3409_;
goto v_resetjp_3402_;
}
else
{
lean_dec(v___x_3401_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3409_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3405_ = lean_box(v___x_3387_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3405_);
v___x_3407_ = v___x_3403_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec(v_mvarId_3375_);
v_a_3411_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3399_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3399_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
}
else
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3426_; 
lean_dec_ref(v___y_3377_);
lean_dec(v_mvarId_3375_);
v_a_3419_ = lean_ctor_get(v___y_3383_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___y_3383_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3421_ = v___y_3383_;
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v___y_3383_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3424_; 
if (v_isShared_3422_ == 0)
{
v___x_3424_ = v___x_3421_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3419_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___boxed(lean_object* v_mvarId_3457_, lean_object* v___x_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l_Lean_MVarId_proofIrrelHeq___lam__0(v_mvarId_3457_, v___x_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_);
lean_dec(v___y_3462_);
lean_dec_ref(v___y_3461_);
lean_dec(v___y_3460_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1(lean_object* v___f_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_){
_start:
{
lean_object* v___x_3471_; 
v___x_3471_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3485_; 
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3474_ = v___x_3471_;
v_isShared_3475_ = v_isSharedCheck_3485_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3471_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3485_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
if (lean_obj_tag(v_a_3472_) == 0)
{
uint8_t v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3479_; 
v___x_3476_ = 0;
v___x_3477_ = lean_box(v___x_3476_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3477_);
v___x_3479_ = v___x_3474_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v___x_3477_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
return v___x_3479_;
}
}
else
{
lean_object* v_val_3481_; lean_object* v___x_3483_; 
v_val_3481_ = lean_ctor_get(v_a_3472_, 0);
lean_inc(v_val_3481_);
lean_dec_ref_known(v_a_3472_, 1);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v_val_3481_);
v___x_3483_ = v___x_3474_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_val_3481_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
}
else
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3493_; 
v_a_3486_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3488_ = v___x_3471_;
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v___x_3471_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3493_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3491_; 
if (v_isShared_3489_ == 0)
{
v___x_3491_ = v___x_3488_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v_a_3486_);
v___x_3491_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
return v___x_3491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1___boxed(lean_object* v___f_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_){
_start:
{
lean_object* v_res_3500_; 
v_res_3500_ = l_Lean_MVarId_proofIrrelHeq___lam__1(v___f_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_);
lean_dec(v___y_3498_);
lean_dec_ref(v___y_3497_);
lean_dec(v___y_3496_);
lean_dec_ref(v___y_3495_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq(lean_object* v_mvarId_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_){
_start:
{
lean_object* v___x_3510_; lean_object* v___f_3511_; lean_object* v___f_3512_; lean_object* v___x_3513_; 
v___x_3510_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___closed__1));
lean_inc(v_mvarId_3504_);
v___f_3511_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3511_, 0, v_mvarId_3504_);
lean_closure_set(v___f_3511_, 1, v___x_3510_);
v___f_3512_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3512_, 0, v___f_3511_);
v___x_3513_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_3504_, v___f_3512_, v_a_3505_, v_a_3506_, v_a_3507_, v_a_3508_);
return v___x_3513_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___boxed(lean_object* v_mvarId_3514_, lean_object* v_a_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_, lean_object* v_a_3518_, lean_object* v_a_3519_){
_start:
{
lean_object* v_res_3520_; 
v_res_3520_ = l_Lean_MVarId_proofIrrelHeq(v_mvarId_3514_, v_a_3515_, v_a_3516_, v_a_3517_, v_a_3518_);
lean_dec(v_a_3518_);
lean_dec_ref(v_a_3517_);
lean_dec(v_a_3516_);
lean_dec_ref(v_a_3515_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0(lean_object* v_mvarId_3525_, lean_object* v___x_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_){
_start:
{
lean_object* v___y_3533_; lean_object* v___x_3576_; 
lean_inc(v_mvarId_3525_);
v___x_3576_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3525_, v___x_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v___x_3577_; uint8_t v_transparency_3578_; uint8_t v___x_3579_; uint8_t v___x_3580_; 
lean_dec_ref_known(v___x_3576_, 1);
v___x_3577_ = l_Lean_Meta_Context_config(v___y_3527_);
v_transparency_3578_ = lean_ctor_get_uint8(v___x_3577_, 9);
lean_dec_ref(v___x_3577_);
v___x_3579_ = 2;
v___x_3580_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3578_, v___x_3579_);
if (v___x_3580_ == 0)
{
lean_object* v_keyedConfig_3581_; uint8_t v_trackZetaDelta_3582_; lean_object* v_zetaDeltaSet_3583_; lean_object* v_lctx_3584_; lean_object* v_localInstances_3585_; lean_object* v_defEqCtx_x3f_3586_; lean_object* v_synthPendingDepth_3587_; lean_object* v_customCanUnfoldPredicate_x3f_3588_; uint8_t v_univApprox_3589_; uint8_t v_inTypeClassResolution_3590_; uint8_t v_cacheInferType_3591_; lean_object* v_rewriteSet_x3f_3592_; uint8_t v_rewriteFuelScope_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v_keyedConfig_3581_ = lean_ctor_get(v___y_3527_, 0);
v_trackZetaDelta_3582_ = lean_ctor_get_uint8(v___y_3527_, sizeof(void*)*8);
v_zetaDeltaSet_3583_ = lean_ctor_get(v___y_3527_, 1);
v_lctx_3584_ = lean_ctor_get(v___y_3527_, 2);
v_localInstances_3585_ = lean_ctor_get(v___y_3527_, 3);
v_defEqCtx_x3f_3586_ = lean_ctor_get(v___y_3527_, 4);
v_synthPendingDepth_3587_ = lean_ctor_get(v___y_3527_, 5);
v_customCanUnfoldPredicate_x3f_3588_ = lean_ctor_get(v___y_3527_, 6);
v_univApprox_3589_ = lean_ctor_get_uint8(v___y_3527_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_3590_ = lean_ctor_get_uint8(v___y_3527_, sizeof(void*)*8 + 2);
v_cacheInferType_3591_ = lean_ctor_get_uint8(v___y_3527_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_3592_ = lean_ctor_get(v___y_3527_, 7);
v_rewriteFuelScope_3593_ = lean_ctor_get_uint8(v___y_3527_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_3581_);
v___x_3594_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3579_, v_keyedConfig_3581_);
lean_inc(v_rewriteSet_x3f_3592_);
lean_inc(v_customCanUnfoldPredicate_x3f_3588_);
lean_inc(v_synthPendingDepth_3587_);
lean_inc(v_defEqCtx_x3f_3586_);
lean_inc_ref(v_localInstances_3585_);
lean_inc_ref(v_lctx_3584_);
lean_inc(v_zetaDeltaSet_3583_);
v___x_3595_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_3595_, 0, v___x_3594_);
lean_ctor_set(v___x_3595_, 1, v_zetaDeltaSet_3583_);
lean_ctor_set(v___x_3595_, 2, v_lctx_3584_);
lean_ctor_set(v___x_3595_, 3, v_localInstances_3585_);
lean_ctor_set(v___x_3595_, 4, v_defEqCtx_x3f_3586_);
lean_ctor_set(v___x_3595_, 5, v_synthPendingDepth_3587_);
lean_ctor_set(v___x_3595_, 6, v_customCanUnfoldPredicate_x3f_3588_);
lean_ctor_set(v___x_3595_, 7, v_rewriteSet_x3f_3592_);
lean_ctor_set_uint8(v___x_3595_, sizeof(void*)*8, v_trackZetaDelta_3582_);
lean_ctor_set_uint8(v___x_3595_, sizeof(void*)*8 + 1, v_univApprox_3589_);
lean_ctor_set_uint8(v___x_3595_, sizeof(void*)*8 + 2, v_inTypeClassResolution_3590_);
lean_ctor_set_uint8(v___x_3595_, sizeof(void*)*8 + 3, v_cacheInferType_3591_);
lean_ctor_set_uint8(v___x_3595_, sizeof(void*)*8 + 4, v_rewriteFuelScope_3593_);
lean_inc(v_mvarId_3525_);
v___x_3596_ = l_Lean_MVarId_getType_x27(v_mvarId_3525_, v___x_3595_, v___y_3528_, v___y_3529_, v___y_3530_);
lean_dec_ref_known(v___x_3595_, 8);
v___y_3533_ = v___x_3596_;
goto v___jp_3532_;
}
else
{
lean_object* v___x_3597_; 
lean_inc(v_mvarId_3525_);
v___x_3597_ = l_Lean_MVarId_getType_x27(v_mvarId_3525_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
v___y_3533_ = v___x_3597_;
goto v___jp_3532_;
}
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3605_; 
lean_dec_ref(v___y_3527_);
lean_dec(v_mvarId_3525_);
v_a_3598_ = lean_ctor_get(v___x_3576_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3600_ = v___x_3576_;
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_a_3598_);
lean_dec(v___x_3576_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3598_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
}
v___jp_3532_:
{
if (lean_obj_tag(v___y_3533_) == 0)
{
lean_object* v_a_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; uint8_t v___x_3537_; 
v_a_3534_ = lean_ctor_get(v___y_3533_, 0);
lean_inc(v_a_3534_);
lean_dec_ref_known(v___y_3533_, 1);
v___x_3535_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__4));
v___x_3536_ = lean_unsigned_to_nat(3u);
v___x_3537_ = l_Lean_Expr_isAppOfArity(v_a_3534_, v___x_3535_, v___x_3536_);
if (v___x_3537_ == 0)
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
lean_dec(v_a_3534_);
lean_dec(v_mvarId_3525_);
v___x_3538_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3539_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3538_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
lean_dec_ref(v___y_3527_);
return v___x_3539_;
}
else
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3540_ = l_Lean_Expr_appFn_x21(v_a_3534_);
v___x_3541_ = l_Lean_Expr_appArg_x21(v___x_3540_);
lean_dec_ref(v___x_3540_);
v___x_3542_ = l_Lean_Expr_appArg_x21(v_a_3534_);
lean_dec(v_a_3534_);
v___x_3543_ = ((lean_object*)(l_Lean_MVarId_subsingletonElim___lam__0___closed__1));
v___x_3544_ = lean_unsigned_to_nat(2u);
v___x_3545_ = lean_mk_empty_array_with_capacity(v___x_3544_);
v___x_3546_ = lean_array_push(v___x_3545_, v___x_3541_);
v___x_3547_ = lean_array_push(v___x_3546_, v___x_3542_);
v___x_3548_ = l_Lean_Meta_mkAppM(v___x_3543_, v___x_3547_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
lean_dec_ref(v___y_3527_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v_a_3549_; lean_object* v___x_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3558_; 
v_a_3549_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_a_3549_);
lean_dec_ref_known(v___x_3548_, 1);
v___x_3550_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_3525_, v_a_3549_, v___y_3528_);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3558_ == 0)
{
lean_object* v_unused_3559_; 
v_unused_3559_ = lean_ctor_get(v___x_3550_, 0);
lean_dec(v_unused_3559_);
v___x_3552_ = v___x_3550_;
v_isShared_3553_ = v_isSharedCheck_3558_;
goto v_resetjp_3551_;
}
else
{
lean_dec(v___x_3550_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3558_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3554_; lean_object* v___x_3556_; 
v___x_3554_ = lean_box(v___x_3537_);
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 0, v___x_3554_);
v___x_3556_ = v___x_3552_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v___x_3554_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
return v___x_3556_;
}
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
lean_dec(v_mvarId_3525_);
v_a_3560_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3548_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3548_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
lean_dec_ref(v___y_3527_);
lean_dec(v_mvarId_3525_);
v_a_3568_ = lean_ctor_get(v___y_3533_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___y_3533_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___y_3533_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___y_3533_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0___boxed(lean_object* v_mvarId_3606_, lean_object* v___x_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_){
_start:
{
lean_object* v_res_3613_; 
v_res_3613_ = l_Lean_MVarId_subsingletonElim___lam__0(v_mvarId_3606_, v___x_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
lean_dec(v___y_3611_);
lean_dec_ref(v___y_3610_);
lean_dec(v___y_3609_);
return v_res_3613_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim(lean_object* v_mvarId_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_){
_start:
{
lean_object* v___x_3623_; lean_object* v___f_3624_; lean_object* v___f_3625_; lean_object* v___x_3626_; 
v___x_3623_ = ((lean_object*)(l_Lean_MVarId_subsingletonElim___closed__1));
lean_inc(v_mvarId_3617_);
v___f_3624_ = lean_alloc_closure((void*)(l_Lean_MVarId_subsingletonElim___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3624_, 0, v_mvarId_3617_);
lean_closure_set(v___f_3624_, 1, v___x_3623_);
v___f_3625_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3625_, 0, v___f_3624_);
v___x_3626_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_3617_, v___f_3625_, v_a_3618_, v_a_3619_, v_a_3620_, v_a_3621_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___boxed(lean_object* v_mvarId_3627_, lean_object* v_a_3628_, lean_object* v_a_3629_, lean_object* v_a_3630_, lean_object* v_a_3631_, lean_object* v_a_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Lean_MVarId_subsingletonElim(v_mvarId_3627_, v_a_3628_, v_a_3629_, v_a_3630_, v_a_3631_);
lean_dec(v_a_3631_);
lean_dec_ref(v_a_3630_);
lean_dec(v_a_3629_);
lean_dec_ref(v_a_3628_);
return v_res_3633_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Apply(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Tactic.Contradiction
// Imports: public import Lean.Meta.Tactic.Assumption public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Apply import Lean.Meta.HasNotBit import Lean.Meta.Tactic.Simp.Rewrite
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Meta_Simp_isEqnThmHypothesis(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAbsurd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_refutableHasNotBit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNot_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_saveState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_saveState___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value)} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value;
static const lean_array_object l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "contradiction"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 147, 90, 76, 177, 67, 155, 92)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__4 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__5 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__6 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__7;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "elimEmptyInductive, number subgoals: "};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "elimEmptyInductive out-of-fuel"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__8 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_mkGenDiseqMask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkGenDiseqMask___closed__0 = (const lean_object*)&l_Lean_Meta_mkGenDiseqMask___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Tactic.Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.Tactic.Contradiction.0.Lean.Meta.processGenDiseq"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: isGenDiseq localDecl.type\n  "};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_decide_eq_false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(101, 242, 48, 138, 187, 4, 117, 248)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_contradictionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 42, 230, 185, 74, 16, 247, 90)}};
static const lean_object* l_Lean_MVarId_contradictionCore___closed__0 = (const lean_object*)&l_Lean_MVarId_contradictionCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 99, 155, 115, 190, 254, 84, 130)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(215, 241, 81, 7, 129, 11, 88, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(234, 199, 235, 149, 198, 6, 20, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 78, 37, 212, 63, 127, 41, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 88, 171, 83, 172, 77, 248, 159)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(86, 220, 174, 134, 139, 23, 35, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 173, 142, 211, 165, 86, 65, 180)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 154, 136, 66, 43, 95, 3, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(142, 18, 4, 159, 144, 239, 124, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 255, 49, 161, 212, 67, 91, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(911661800) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(54, 37, 52, 164, 114, 188, 198, 209)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 78, 196, 57, 182, 60, 174, 81)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 112, 60, 29, 144, 20, 193, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(84, 54, 65, 98, 52, 12, 188, 139)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object* v_e_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_7_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2));
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = l_Lean_Expr_isAppOfArity(v_e_6_, v___x_7_, v___x_8_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = l_Lean_Expr_appArg_x21(v_e_6_);
v___x_11_ = l_Lean_Expr_hasLooseBVars(v___x_10_);
lean_dec_ref(v___x_10_);
if (v___x_11_ == 0)
{
return v___x_9_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object* v_e_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(v_e_13_);
lean_dec_ref(v_e_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_16_, lean_object* v_x_17_, lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
lean_object* v_ks_20_; lean_object* v_vs_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_45_; 
v_ks_20_ = lean_ctor_get(v_x_16_, 0);
v_vs_21_ = lean_ctor_get(v_x_16_, 1);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_45_ == 0)
{
v___x_23_ = v_x_16_;
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_vs_21_);
lean_inc(v_ks_20_);
lean_dec(v_x_16_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_25_ = lean_array_get_size(v_ks_20_);
v___x_26_ = lean_nat_dec_lt(v_x_17_, v___x_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
lean_dec(v_x_17_);
v___x_27_ = lean_array_push(v_ks_20_, v_x_18_);
v___x_28_ = lean_array_push(v_vs_21_, v_x_19_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_28_);
lean_ctor_set(v___x_23_, 0, v___x_27_);
v___x_30_ = v___x_23_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v___x_28_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
else
{
lean_object* v_k_x27_32_; uint8_t v___x_33_; 
v_k_x27_32_ = lean_array_fget_borrowed(v_ks_20_, v_x_17_);
v___x_33_ = l_Lean_instBEqMVarId_beq(v_x_18_, v_k_x27_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_35_; 
if (v_isShared_24_ == 0)
{
v___x_35_ = v___x_23_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_ks_20_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_vs_21_);
v___x_35_ = v_reuseFailAlloc_39_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_nat_add(v_x_17_, v___x_36_);
lean_dec(v_x_17_);
v_x_16_ = v___x_35_;
v_x_17_ = v___x_37_;
goto _start;
}
}
else
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v___x_40_ = lean_array_fset(v_ks_20_, v_x_17_, v_x_18_);
v___x_41_ = lean_array_fset(v_vs_21_, v_x_17_, v_x_19_);
lean_dec(v_x_17_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_41_);
lean_ctor_set(v___x_23_, 0, v___x_40_);
v___x_43_ = v___x_23_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_40_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_41_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_46_, lean_object* v_k_47_, lean_object* v_v_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_46_, v___x_49_, v_k_47_, v_v_48_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object* v_x_52_, size_t v_x_53_, size_t v_x_54_, lean_object* v_x_55_, lean_object* v_x_56_){
_start:
{
if (lean_obj_tag(v_x_52_) == 0)
{
lean_object* v_es_57_; size_t v___x_58_; size_t v___x_59_; lean_object* v_j_60_; lean_object* v___x_61_; uint8_t v___x_62_; 
v_es_57_ = lean_ctor_get(v_x_52_, 0);
v___x_58_ = ((size_t)31ULL);
v___x_59_ = lean_usize_land(v_x_53_, v___x_58_);
v_j_60_ = lean_usize_to_nat(v___x_59_);
v___x_61_ = lean_array_get_size(v_es_57_);
v___x_62_ = lean_nat_dec_lt(v_j_60_, v___x_61_);
if (v___x_62_ == 0)
{
lean_dec(v_j_60_);
lean_dec(v_x_56_);
lean_dec(v_x_55_);
return v_x_52_;
}
else
{
lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_101_; 
lean_inc_ref(v_es_57_);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_101_ == 0)
{
lean_object* v_unused_102_; 
v_unused_102_ = lean_ctor_get(v_x_52_, 0);
lean_dec(v_unused_102_);
v___x_64_ = v_x_52_;
v_isShared_65_ = v_isSharedCheck_101_;
goto v_resetjp_63_;
}
else
{
lean_dec(v_x_52_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_101_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v_v_66_; lean_object* v___x_67_; lean_object* v_xs_x27_68_; lean_object* v___y_70_; 
v_v_66_ = lean_array_fget(v_es_57_, v_j_60_);
v___x_67_ = lean_box(0);
v_xs_x27_68_ = lean_array_fset(v_es_57_, v_j_60_, v___x_67_);
switch(lean_obj_tag(v_v_66_))
{
case 0:
{
lean_object* v_key_75_; lean_object* v_val_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_86_; 
v_key_75_ = lean_ctor_get(v_v_66_, 0);
v_val_76_ = lean_ctor_get(v_v_66_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_v_66_);
if (v_isSharedCheck_86_ == 0)
{
v___x_78_ = v_v_66_;
v_isShared_79_ = v_isSharedCheck_86_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_val_76_);
lean_inc(v_key_75_);
lean_dec(v_v_66_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_86_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
uint8_t v___x_80_; 
v___x_80_ = l_Lean_instBEqMVarId_beq(v_x_55_, v_key_75_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_del_object(v___x_78_);
v___x_81_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_75_, v_val_76_, v_x_55_, v_x_56_);
v___x_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
v___y_70_ = v___x_82_;
goto v___jp_69_;
}
else
{
lean_object* v___x_84_; 
lean_dec(v_val_76_);
lean_dec(v_key_75_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 1, v_x_56_);
lean_ctor_set(v___x_78_, 0, v_x_55_);
v___x_84_ = v___x_78_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_x_55_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_x_56_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
v___y_70_ = v___x_84_;
goto v___jp_69_;
}
}
}
}
case 1:
{
lean_object* v_node_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_99_; 
v_node_87_ = lean_ctor_get(v_v_66_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v_v_66_);
if (v_isSharedCheck_99_ == 0)
{
v___x_89_ = v_v_66_;
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_node_87_);
lean_dec(v_v_66_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_99_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_91_ = ((size_t)5ULL);
v___x_92_ = lean_usize_shift_right(v_x_53_, v___x_91_);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_add(v_x_54_, v___x_93_);
v___x_95_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_node_87_, v___x_92_, v___x_94_, v_x_55_, v_x_56_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 0, v___x_95_);
v___x_97_ = v___x_89_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_95_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
v___y_70_ = v___x_97_;
goto v___jp_69_;
}
}
}
default: 
{
lean_object* v___x_100_; 
v___x_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_100_, 0, v_x_55_);
lean_ctor_set(v___x_100_, 1, v_x_56_);
v___y_70_ = v___x_100_;
goto v___jp_69_;
}
}
v___jp_69_:
{
lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_71_ = lean_array_fset(v_xs_x27_68_, v_j_60_, v___y_70_);
lean_dec(v_j_60_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_71_);
v___x_73_ = v___x_64_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
else
{
lean_object* v_ks_103_; lean_object* v_vs_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_122_; 
v_ks_103_ = lean_ctor_get(v_x_52_, 0);
v_vs_104_ = lean_ctor_get(v_x_52_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v_x_52_);
if (v_isSharedCheck_122_ == 0)
{
v___x_106_ = v_x_52_;
v_isShared_107_ = v_isSharedCheck_122_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_vs_104_);
lean_inc(v_ks_103_);
lean_dec(v_x_52_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_122_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_ks_103_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_vs_104_);
v___x_109_ = v_reuseFailAlloc_121_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
lean_object* v_newNode_110_; size_t v___x_111_; uint8_t v___x_112_; 
v_newNode_110_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v___x_109_, v_x_55_, v_x_56_);
v___x_111_ = ((size_t)7ULL);
v___x_112_ = lean_usize_dec_le(v___x_111_, v_x_54_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_113_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_110_);
v___x_114_ = lean_unsigned_to_nat(4u);
v___x_115_ = lean_nat_dec_lt(v___x_113_, v___x_114_);
lean_dec(v___x_113_);
if (v___x_115_ == 0)
{
lean_object* v_ks_116_; lean_object* v_vs_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v_ks_116_ = lean_ctor_get(v_newNode_110_, 0);
lean_inc_ref(v_ks_116_);
v_vs_117_ = lean_ctor_get(v_newNode_110_, 1);
lean_inc_ref(v_vs_117_);
lean_dec_ref(v_newNode_110_);
v___x_118_ = lean_unsigned_to_nat(0u);
v___x_119_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_120_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_x_54_, v_ks_116_, v_vs_117_, v___x_118_, v___x_119_);
lean_dec_ref(v_vs_117_);
lean_dec_ref(v_ks_116_);
return v___x_120_;
}
else
{
return v_newNode_110_;
}
}
else
{
return v_newNode_110_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_123_, lean_object* v_keys_124_, lean_object* v_vals_125_, lean_object* v_i_126_, lean_object* v_entries_127_){
_start:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_array_get_size(v_keys_124_);
v___x_129_ = lean_nat_dec_lt(v_i_126_, v___x_128_);
if (v___x_129_ == 0)
{
lean_dec(v_i_126_);
return v_entries_127_;
}
else
{
lean_object* v_k_130_; lean_object* v_v_131_; uint64_t v___x_132_; size_t v_h_133_; size_t v___x_134_; lean_object* v___x_135_; size_t v___x_136_; size_t v___x_137_; size_t v___x_138_; size_t v_h_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_k_130_ = lean_array_fget_borrowed(v_keys_124_, v_i_126_);
v_v_131_ = lean_array_fget_borrowed(v_vals_125_, v_i_126_);
v___x_132_ = l_Lean_instHashableMVarId_hash(v_k_130_);
v_h_133_ = lean_uint64_to_usize(v___x_132_);
v___x_134_ = ((size_t)5ULL);
v___x_135_ = lean_unsigned_to_nat(1u);
v___x_136_ = ((size_t)1ULL);
v___x_137_ = lean_usize_sub(v_depth_123_, v___x_136_);
v___x_138_ = lean_usize_mul(v___x_134_, v___x_137_);
v_h_139_ = lean_usize_shift_right(v_h_133_, v___x_138_);
v___x_140_ = lean_nat_add(v_i_126_, v___x_135_);
lean_dec(v_i_126_);
lean_inc(v_v_131_);
lean_inc(v_k_130_);
v___x_141_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_entries_127_, v_h_139_, v_depth_123_, v_k_130_, v_v_131_);
v_i_126_ = v___x_140_;
v_entries_127_ = v___x_141_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_143_, lean_object* v_keys_144_, lean_object* v_vals_145_, lean_object* v_i_146_, lean_object* v_entries_147_){
_start:
{
size_t v_depth_boxed_148_; lean_object* v_res_149_; 
v_depth_boxed_148_ = lean_unbox_usize(v_depth_143_);
lean_dec(v_depth_143_);
v_res_149_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_148_, v_keys_144_, v_vals_145_, v_i_146_, v_entries_147_);
lean_dec_ref(v_vals_145_);
lean_dec_ref(v_keys_144_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_150_, lean_object* v_x_151_, lean_object* v_x_152_, lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
size_t v_x_1127__boxed_155_; size_t v_x_1128__boxed_156_; lean_object* v_res_157_; 
v_x_1127__boxed_155_ = lean_unbox_usize(v_x_151_);
lean_dec(v_x_151_);
v_x_1128__boxed_156_ = lean_unbox_usize(v_x_152_);
lean_dec(v_x_152_);
v_res_157_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_150_, v_x_1127__boxed_155_, v_x_1128__boxed_156_, v_x_153_, v_x_154_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object* v_x_158_, lean_object* v_x_159_, lean_object* v_x_160_){
_start:
{
uint64_t v___x_161_; size_t v___x_162_; size_t v___x_163_; lean_object* v___x_164_; 
v___x_161_ = l_Lean_instHashableMVarId_hash(v_x_159_);
v___x_162_ = lean_uint64_to_usize(v___x_161_);
v___x_163_ = ((size_t)1ULL);
v___x_164_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_158_, v___x_162_, v___x_163_, v_x_159_, v_x_160_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object* v_mvarId_165_, lean_object* v_val_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; lean_object* v_mctx_170_; lean_object* v_cache_171_; lean_object* v_zetaDeltaFVarIds_172_; lean_object* v_postponed_173_; lean_object* v_diag_174_; lean_object* v_rewriteFires_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_205_; 
v___x_169_ = lean_st_ref_take(v___y_167_);
v_mctx_170_ = lean_ctor_get(v___x_169_, 0);
v_cache_171_ = lean_ctor_get(v___x_169_, 1);
v_zetaDeltaFVarIds_172_ = lean_ctor_get(v___x_169_, 2);
v_postponed_173_ = lean_ctor_get(v___x_169_, 3);
v_diag_174_ = lean_ctor_get(v___x_169_, 4);
v_rewriteFires_175_ = lean_ctor_get(v___x_169_, 5);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_205_ == 0)
{
v___x_177_ = v___x_169_;
v_isShared_178_ = v_isSharedCheck_205_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_rewriteFires_175_);
lean_inc(v_diag_174_);
lean_inc(v_postponed_173_);
lean_inc(v_zetaDeltaFVarIds_172_);
lean_inc(v_cache_171_);
lean_inc(v_mctx_170_);
lean_dec(v___x_169_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_205_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v_depth_179_; lean_object* v_levelAssignDepth_180_; lean_object* v_lmvarCounter_181_; lean_object* v_mvarCounter_182_; lean_object* v_lDecls_183_; lean_object* v_decls_184_; lean_object* v_userNames_185_; lean_object* v_lAssignment_186_; lean_object* v_eAssignment_187_; lean_object* v_dAssignment_188_; lean_object* v_instanceTypedMVars_189_; lean_object* v_synthNormMemo_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_204_; 
v_depth_179_ = lean_ctor_get(v_mctx_170_, 0);
v_levelAssignDepth_180_ = lean_ctor_get(v_mctx_170_, 1);
v_lmvarCounter_181_ = lean_ctor_get(v_mctx_170_, 2);
v_mvarCounter_182_ = lean_ctor_get(v_mctx_170_, 3);
v_lDecls_183_ = lean_ctor_get(v_mctx_170_, 4);
v_decls_184_ = lean_ctor_get(v_mctx_170_, 5);
v_userNames_185_ = lean_ctor_get(v_mctx_170_, 6);
v_lAssignment_186_ = lean_ctor_get(v_mctx_170_, 7);
v_eAssignment_187_ = lean_ctor_get(v_mctx_170_, 8);
v_dAssignment_188_ = lean_ctor_get(v_mctx_170_, 9);
v_instanceTypedMVars_189_ = lean_ctor_get(v_mctx_170_, 10);
v_synthNormMemo_190_ = lean_ctor_get(v_mctx_170_, 11);
v_isSharedCheck_204_ = !lean_is_exclusive(v_mctx_170_);
if (v_isSharedCheck_204_ == 0)
{
v___x_192_ = v_mctx_170_;
v_isShared_193_ = v_isSharedCheck_204_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_synthNormMemo_190_);
lean_inc(v_instanceTypedMVars_189_);
lean_inc(v_dAssignment_188_);
lean_inc(v_eAssignment_187_);
lean_inc(v_lAssignment_186_);
lean_inc(v_userNames_185_);
lean_inc(v_decls_184_);
lean_inc(v_lDecls_183_);
lean_inc(v_mvarCounter_182_);
lean_inc(v_lmvarCounter_181_);
lean_inc(v_levelAssignDepth_180_);
lean_inc(v_depth_179_);
lean_dec(v_mctx_170_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_204_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_194_ = lean_box(0);
v___x_195_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_eAssignment_187_, v_mvarId_165_, v_val_166_);
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 8, v___x_195_);
v___x_197_ = v___x_192_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_depth_179_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_levelAssignDepth_180_);
lean_ctor_set(v_reuseFailAlloc_203_, 2, v_lmvarCounter_181_);
lean_ctor_set(v_reuseFailAlloc_203_, 3, v_mvarCounter_182_);
lean_ctor_set(v_reuseFailAlloc_203_, 4, v_lDecls_183_);
lean_ctor_set(v_reuseFailAlloc_203_, 5, v_decls_184_);
lean_ctor_set(v_reuseFailAlloc_203_, 6, v_userNames_185_);
lean_ctor_set(v_reuseFailAlloc_203_, 7, v_lAssignment_186_);
lean_ctor_set(v_reuseFailAlloc_203_, 8, v___x_195_);
lean_ctor_set(v_reuseFailAlloc_203_, 9, v_dAssignment_188_);
lean_ctor_set(v_reuseFailAlloc_203_, 10, v_instanceTypedMVars_189_);
lean_ctor_set(v_reuseFailAlloc_203_, 11, v_synthNormMemo_190_);
v___x_197_ = v_reuseFailAlloc_203_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_199_; 
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 0, v___x_197_);
v___x_199_ = v___x_177_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_197_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v_cache_171_);
lean_ctor_set(v_reuseFailAlloc_202_, 2, v_zetaDeltaFVarIds_172_);
lean_ctor_set(v_reuseFailAlloc_202_, 3, v_postponed_173_);
lean_ctor_set(v_reuseFailAlloc_202_, 4, v_diag_174_);
lean_ctor_set(v_reuseFailAlloc_202_, 5, v_rewriteFires_175_);
v___x_199_ = v_reuseFailAlloc_202_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_st_ref_put(v___y_167_, v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_194_);
return v___x_201_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object* v_mvarId_206_, lean_object* v_val_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_206_, v_val_207_, v___y_208_);
lean_dec(v___y_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object* v_mvarId_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
lean_object* v___f_218_; lean_object* v___x_219_; 
v___f_218_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0));
lean_inc(v_mvarId_212_);
v___x_219_ = l_Lean_MVarId_getType(v_mvarId_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_263_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_263_ == 0)
{
v___x_222_ = v___x_219_;
v_isShared_223_ = v_isSharedCheck_263_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_219_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_263_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; 
v___x_224_ = lean_find_expr(v___f_218_, v_a_220_);
lean_dec(v_a_220_);
if (lean_obj_tag(v___x_224_) == 1)
{
lean_object* v_val_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
lean_del_object(v___x_222_);
v_val_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = l_Lean_Expr_appArg_x21(v_val_225_);
lean_dec(v_val_225_);
lean_inc(v_mvarId_212_);
v___x_227_ = l_Lean_MVarId_getType(v_mvarId_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_229_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_227_, 1);
v___x_229_ = l_Lean_Meta_mkFalseElim(v_a_228_, v___x_226_, v_a_213_, v_a_214_, v_a_215_, v_a_216_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v___x_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_240_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc(v_a_230_);
lean_dec_ref_known(v___x_229_, 1);
v___x_231_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_212_, v_a_230_, v_a_214_);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; 
v_unused_241_ = lean_ctor_get(v___x_231_, 0);
lean_dec(v_unused_241_);
v___x_233_ = v___x_231_;
v_isShared_234_ = v_isSharedCheck_240_;
goto v_resetjp_232_;
}
else
{
lean_dec(v___x_231_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_240_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_235_ = 1;
v___x_236_ = lean_box(v___x_235_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 0, v___x_236_);
v___x_238_ = v___x_233_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
lean_dec(v_mvarId_212_);
v_a_242_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_229_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_229_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec_ref(v___x_226_);
lean_dec(v_mvarId_212_);
v_a_250_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_227_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_227_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
else
{
uint8_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_dec(v___x_224_);
lean_dec(v_mvarId_212_);
v___x_258_ = 0;
v___x_259_ = lean_box(v___x_258_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_259_);
v___x_261_ = v___x_222_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec(v_mvarId_212_);
v_a_264_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_219_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_219_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object* v_mvarId_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_);
lean_dec(v_a_276_);
lean_dec_ref(v_a_275_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object* v_mvarId_279_, lean_object* v_val_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_279_, v_val_280_, v___y_282_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object* v_mvarId_287_, lean_object* v_val_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(v_mvarId_287_, v_val_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object* v_00_u03b2_295_, lean_object* v_x_296_, lean_object* v_x_297_, lean_object* v_x_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_x_296_, v_x_297_, v_x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_300_, lean_object* v_x_301_, size_t v_x_302_, size_t v_x_303_, lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_301_, v_x_302_, v_x_303_, v_x_304_, v_x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_307_, lean_object* v_x_308_, lean_object* v_x_309_, lean_object* v_x_310_, lean_object* v_x_311_, lean_object* v_x_312_){
_start:
{
size_t v_x_1478__boxed_313_; size_t v_x_1479__boxed_314_; lean_object* v_res_315_; 
v_x_1478__boxed_313_ = lean_unbox_usize(v_x_309_);
lean_dec(v_x_309_);
v_x_1479__boxed_314_ = lean_unbox_usize(v_x_310_);
lean_dec(v_x_310_);
v_res_315_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(v_00_u03b2_307_, v_x_308_, v_x_1478__boxed_313_, v_x_1479__boxed_314_, v_x_311_, v_x_312_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_316_, lean_object* v_n_317_, lean_object* v_k_318_, lean_object* v_v_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v_n_317_, v_k_318_, v_v_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_321_, size_t v_depth_322_, lean_object* v_keys_323_, lean_object* v_vals_324_, lean_object* v_heq_325_, lean_object* v_i_326_, lean_object* v_entries_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_322_, v_keys_323_, v_vals_324_, v_i_326_, v_entries_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_329_, lean_object* v_depth_330_, lean_object* v_keys_331_, lean_object* v_vals_332_, lean_object* v_heq_333_, lean_object* v_i_334_, lean_object* v_entries_335_){
_start:
{
size_t v_depth_boxed_336_; lean_object* v_res_337_; 
v_depth_boxed_336_ = lean_unbox_usize(v_depth_330_);
lean_dec(v_depth_330_);
v_res_337_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_329_, v_depth_boxed_336_, v_keys_331_, v_vals_332_, v_heq_333_, v_i_334_, v_entries_335_);
lean_dec_ref(v_vals_332_);
lean_dec_ref(v_keys_331_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_338_, lean_object* v_x_339_, lean_object* v_x_340_, lean_object* v_x_341_, lean_object* v_x_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_339_, v_x_340_, v_x_341_, v_x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object* v_fvarId_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lean_FVarId_getType___redArg(v_fvarId_344_, v_a_345_, v_a_347_, v_a_348_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_356_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_354_, 1);
v___x_356_ = l_Lean_Meta_whnfD(v_a_355_, v_a_345_, v_a_346_, v_a_347_, v_a_348_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_383_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_383_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_383_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_383_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; 
v___x_361_ = l_Lean_Expr_getAppFn(v_a_357_);
lean_dec(v_a_357_);
if (lean_obj_tag(v___x_361_) == 4)
{
lean_object* v_declName_362_; lean_object* v___x_363_; lean_object* v_env_364_; uint8_t v___x_365_; lean_object* v___x_366_; 
v_declName_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc(v_declName_362_);
lean_dec_ref_known(v___x_361_, 2);
v___x_363_ = lean_st_ref_get(v_a_348_);
v_env_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc_ref(v_env_364_);
lean_dec(v___x_363_);
v___x_365_ = 0;
v___x_366_ = l_Lean_Environment_find_x3f(v_env_364_, v_declName_362_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_del_object(v___x_359_);
goto v___jp_350_;
}
else
{
lean_object* v_val_367_; 
v_val_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_val_367_);
lean_dec_ref_known(v___x_366_, 1);
if (lean_obj_tag(v_val_367_) == 5)
{
lean_object* v_val_368_; lean_object* v_numIndices_369_; lean_object* v_ctors_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v_val_368_ = lean_ctor_get(v_val_367_, 0);
lean_inc_ref(v_val_368_);
lean_dec_ref_known(v_val_367_, 1);
v_numIndices_369_ = lean_ctor_get(v_val_368_, 2);
lean_inc(v_numIndices_369_);
v_ctors_370_ = lean_ctor_get(v_val_368_, 4);
lean_inc(v_ctors_370_);
lean_dec_ref(v_val_368_);
v___x_371_ = l_List_lengthTR___redArg(v_ctors_370_);
lean_dec(v_ctors_370_);
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = lean_nat_dec_eq(v___x_371_, v___x_372_);
lean_dec(v___x_371_);
if (v___x_373_ == 0)
{
uint8_t v___x_374_; lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_374_ = lean_nat_dec_lt(v___x_372_, v_numIndices_369_);
lean_dec(v_numIndices_369_);
v___x_375_ = lean_box(v___x_374_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_375_);
v___x_377_ = v___x_359_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_375_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
else
{
lean_object* v___x_379_; lean_object* v___x_381_; 
lean_dec(v_numIndices_369_);
v___x_379_ = lean_box(v___x_373_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_379_);
v___x_381_ = v___x_359_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
else
{
lean_dec(v_val_367_);
lean_del_object(v___x_359_);
goto v___jp_350_;
}
}
}
else
{
lean_dec_ref(v___x_361_);
lean_del_object(v___x_359_);
goto v___jp_350_;
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_a_384_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_356_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_356_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
v_a_392_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_354_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_354_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
v___jp_350_:
{
uint8_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_351_ = 0;
v___x_352_ = lean_box(v___x_351_);
v___x_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object* v_fvarId_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object* v_s_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lean_Meta_SavedState_restore___redArg(v_s_407_, v___y_410_, v___y_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object* v_s_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(v_s_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object* v_x_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_438_; 
lean_inc(v___y_432_);
v___x_438_ = lean_apply_6(v_x_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, lean_box(0));
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object* v_x_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(v_x_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_);
lean_dec(v___y_440_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object* v_mvarId_447_, lean_object* v_x_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_){
_start:
{
lean_object* v___f_455_; lean_object* v___x_456_; 
lean_inc(v___y_449_);
v___f_455_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_455_, 0, v_x_448_);
lean_closure_set(v___f_455_, 1, v___y_449_);
v___x_456_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_447_, v___f_455_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
if (lean_obj_tag(v___x_456_) == 0)
{
return v___x_456_;
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_456_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_456_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object* v_mvarId_465_, lean_object* v_x_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_465_, v_x_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object* v_00_u03b1_474_, lean_object* v_mvarId_475_, lean_object* v_x_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_475_, v_x_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object* v_00_u03b1_484_, lean_object* v_mvarId_485_, lean_object* v_x_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(v_00_u03b1_484_, v_mvarId_485_, v_x_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object* v_x_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_Meta_saveState___redArg(v___y_497_, v___y_499_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___y_504_; lean_object* v_a_505_; lean_object* v___x_525_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
lean_inc(v___y_499_);
lean_inc_ref(v___y_498_);
lean_inc(v___y_497_);
lean_inc_ref(v___y_496_);
lean_inc(v___y_495_);
v___x_525_ = lean_apply_6(v_x_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, lean_box(0));
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; uint8_t v___x_527_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_526_);
v___x_527_ = lean_unbox(v_a_526_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
lean_dec_ref_known(v___x_525_, 1);
lean_inc(v_a_502_);
v___x_528_ = l_Lean_Meta_SavedState_restore___redArg(v_a_502_, v___y_497_, v___y_499_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec(v_a_502_);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_535_ == 0)
{
lean_object* v_unused_536_; 
v_unused_536_ = lean_ctor_get(v___x_528_, 0);
lean_dec(v_unused_536_);
v___x_530_ = v___x_528_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_dec(v___x_528_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 0, v_a_526_);
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_526_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec(v_a_526_);
v_a_537_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_528_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_528_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
lean_inc(v_a_537_);
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
v___y_504_ = v___x_542_;
v_a_505_ = v_a_537_;
goto v___jp_503_;
}
}
}
}
else
{
lean_dec(v_a_526_);
lean_dec(v_a_502_);
return v___x_525_;
}
}
else
{
lean_object* v_a_545_; 
v_a_545_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_545_);
v___y_504_ = v___x_525_;
v_a_505_ = v_a_545_;
goto v___jp_503_;
}
v___jp_503_:
{
uint8_t v___x_506_; 
v___x_506_ = l_Lean_Exception_isInterrupt(v_a_505_);
if (v___x_506_ == 0)
{
uint8_t v___x_507_; 
lean_inc_ref(v_a_505_);
v___x_507_ = l_Lean_Exception_isRuntime(v_a_505_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; 
lean_dec_ref(v___y_504_);
v___x_508_ = l_Lean_Meta_SavedState_restore___redArg(v_a_502_, v___y_497_, v___y_499_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_515_ == 0)
{
lean_object* v_unused_516_; 
v_unused_516_ = lean_ctor_get(v___x_508_, 0);
lean_dec(v_unused_516_);
v___x_510_ = v___x_508_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_dec(v___x_508_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
lean_ctor_set_tag(v___x_510_, 1);
lean_ctor_set(v___x_510_, 0, v_a_505_);
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_505_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
else
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
lean_dec_ref(v_a_505_);
v_a_517_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_508_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_508_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
}
else
{
lean_dec_ref(v_a_505_);
lean_dec(v_a_502_);
return v___y_504_;
}
}
else
{
lean_dec_ref(v_a_505_);
lean_dec(v_a_502_);
return v___y_504_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_dec_ref(v_x_494_);
v_a_546_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_501_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_501_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object* v_x_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v_x_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object* v_msgData_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v___x_568_; lean_object* v_env_569_; uint8_t v___x_570_; lean_object* v_env_571_; lean_object* v___x_572_; lean_object* v_toCold_573_; lean_object* v_mctx_574_; lean_object* v_lctx_575_; lean_object* v_options_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_568_ = lean_st_ref_get(v___y_566_);
v_env_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc_ref(v_env_569_);
lean_dec(v___x_568_);
v___x_570_ = 0;
v_env_571_ = l_Lean_Environment_setRecordingDeps(v_env_569_, v___x_570_);
v___x_572_ = lean_st_ref_get(v___y_564_);
v_toCold_573_ = lean_ctor_get(v___y_565_, 0);
v_mctx_574_ = lean_ctor_get(v___x_572_, 0);
lean_inc_ref(v_mctx_574_);
lean_dec(v___x_572_);
v_lctx_575_ = lean_ctor_get(v___y_563_, 2);
v_options_576_ = lean_ctor_get(v_toCold_573_, 2);
lean_inc_ref(v_options_576_);
lean_inc_ref(v_lctx_575_);
v___x_577_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_577_, 0, v_env_571_);
lean_ctor_set(v___x_577_, 1, v_mctx_574_);
lean_ctor_set(v___x_577_, 2, v_lctx_575_);
lean_ctor_set(v___x_577_, 3, v_options_576_);
v___x_578_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
lean_ctor_set(v___x_578_, 1, v_msgData_562_);
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object* v_msgData_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msgData_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
return v_res_586_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_587_; double v___x_588_; 
v___x_587_ = lean_unsigned_to_nat(0u);
v___x_588_ = lean_float_of_nat(v___x_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object* v_cls_592_, lean_object* v_msg_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_ref_599_; lean_object* v___x_600_; lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_646_; 
v_ref_599_ = lean_ctor_get(v___y_596_, 2);
v___x_600_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msg_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_646_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_646_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_646_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v_traceState_606_; lean_object* v_env_607_; lean_object* v_nextMacroScope_608_; lean_object* v_ngen_609_; lean_object* v_auxDeclNGen_610_; lean_object* v_cache_611_; lean_object* v_recordedDeps_612_; lean_object* v_messages_613_; lean_object* v_infoState_614_; lean_object* v_snapshotTasks_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_645_; 
v___x_605_ = lean_st_ref_take(v___y_597_);
v_traceState_606_ = lean_ctor_get(v___x_605_, 4);
v_env_607_ = lean_ctor_get(v___x_605_, 0);
v_nextMacroScope_608_ = lean_ctor_get(v___x_605_, 1);
v_ngen_609_ = lean_ctor_get(v___x_605_, 2);
v_auxDeclNGen_610_ = lean_ctor_get(v___x_605_, 3);
v_cache_611_ = lean_ctor_get(v___x_605_, 5);
v_recordedDeps_612_ = lean_ctor_get(v___x_605_, 6);
v_messages_613_ = lean_ctor_get(v___x_605_, 7);
v_infoState_614_ = lean_ctor_get(v___x_605_, 8);
v_snapshotTasks_615_ = lean_ctor_get(v___x_605_, 9);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_645_ == 0)
{
v___x_617_ = v___x_605_;
v_isShared_618_ = v_isSharedCheck_645_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_snapshotTasks_615_);
lean_inc(v_infoState_614_);
lean_inc(v_messages_613_);
lean_inc(v_recordedDeps_612_);
lean_inc(v_cache_611_);
lean_inc(v_traceState_606_);
lean_inc(v_auxDeclNGen_610_);
lean_inc(v_ngen_609_);
lean_inc(v_nextMacroScope_608_);
lean_inc(v_env_607_);
lean_dec(v___x_605_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_645_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
uint64_t v_tid_619_; lean_object* v_traces_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_644_; 
v_tid_619_ = lean_ctor_get_uint64(v_traceState_606_, sizeof(void*)*1);
v_traces_620_ = lean_ctor_get(v_traceState_606_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v_traceState_606_);
if (v_isSharedCheck_644_ == 0)
{
v___x_622_ = v_traceState_606_;
v_isShared_623_ = v_isSharedCheck_644_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_traces_620_);
lean_dec(v_traceState_606_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_644_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; lean_object* v___x_625_; double v___x_626_; uint8_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_624_ = lean_box(0);
v___x_625_ = lean_box(0);
v___x_626_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0);
v___x_627_ = 0;
v___x_628_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1));
v___x_629_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_629_, 0, v_cls_592_);
lean_ctor_set(v___x_629_, 1, v___x_625_);
lean_ctor_set(v___x_629_, 2, v___x_628_);
lean_ctor_set_float(v___x_629_, sizeof(void*)*3, v___x_626_);
lean_ctor_set_float(v___x_629_, sizeof(void*)*3 + 8, v___x_626_);
lean_ctor_set_uint8(v___x_629_, sizeof(void*)*3 + 16, v___x_627_);
v___x_630_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2));
v___x_631_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set(v___x_631_, 1, v_a_601_);
lean_ctor_set(v___x_631_, 2, v___x_630_);
lean_inc(v_ref_599_);
v___x_632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_632_, 0, v_ref_599_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = l_Lean_PersistentArray_push___redArg(v_traces_620_, v___x_632_);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v___x_633_);
v___x_635_ = v___x_622_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_633_);
lean_ctor_set_uint64(v_reuseFailAlloc_643_, sizeof(void*)*1, v_tid_619_);
v___x_635_ = v_reuseFailAlloc_643_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_637_; 
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 4, v___x_635_);
v___x_637_ = v___x_617_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_env_607_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_nextMacroScope_608_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_ngen_609_);
lean_ctor_set(v_reuseFailAlloc_642_, 3, v_auxDeclNGen_610_);
lean_ctor_set(v_reuseFailAlloc_642_, 4, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_642_, 5, v_cache_611_);
lean_ctor_set(v_reuseFailAlloc_642_, 6, v_recordedDeps_612_);
lean_ctor_set(v_reuseFailAlloc_642_, 7, v_messages_613_);
lean_ctor_set(v_reuseFailAlloc_642_, 8, v_infoState_614_);
lean_ctor_set(v_reuseFailAlloc_642_, 9, v_snapshotTasks_615_);
v___x_637_ = v_reuseFailAlloc_642_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_638_ = lean_st_ref_put(v___y_597_, v___x_637_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_624_);
v___x_640_ = v___x_603_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_624_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object* v_cls_647_, lean_object* v_msg_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_647_, v_msg_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec_ref(v___y_649_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object* v_toInductionSubgoal_662_, lean_object* v_mvarId_663_, lean_object* v_fields_664_, lean_object* v_sz_665_, lean_object* v___x_666_, lean_object* v___x_667_, lean_object* v___x_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
size_t v_sz_boxed_675_; size_t v___x_15986__boxed_676_; uint8_t v___x_15988__boxed_677_; lean_object* v_res_678_; 
v_sz_boxed_675_ = lean_unbox_usize(v_sz_665_);
lean_dec(v_sz_665_);
v___x_15986__boxed_676_ = lean_unbox_usize(v___x_666_);
lean_dec(v___x_666_);
v___x_15988__boxed_677_ = lean_unbox(v___x_668_);
v_res_678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(v_toInductionSubgoal_662_, v_mvarId_663_, v_fields_664_, v_sz_boxed_675_, v___x_15986__boxed_676_, v___x_667_, v___x_15988__boxed_677_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v_fields_664_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object* v_val_679_, lean_object* v_as_680_, size_t v_sz_681_, size_t v_i_682_, lean_object* v_b_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
uint8_t v___x_690_; 
v___x_690_ = lean_usize_dec_lt(v_i_682_, v_sz_681_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v_b_683_);
return v___x_691_;
}
else
{
lean_object* v_a_692_; lean_object* v_toInductionSubgoal_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_734_; 
lean_dec_ref(v_b_683_);
v_a_692_ = lean_array_uget(v_as_680_, v_i_682_);
v_toInductionSubgoal_693_ = lean_ctor_get(v_a_692_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v_a_692_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; 
v_unused_735_ = lean_ctor_get(v_a_692_, 1);
lean_dec(v_unused_735_);
v___x_695_ = v_a_692_;
v_isShared_696_ = v_isSharedCheck_734_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_toInductionSubgoal_693_);
lean_dec(v_a_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_734_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v_mvarId_697_; lean_object* v_fields_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; size_t v_sz_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___f_707_; lean_object* v___x_708_; 
v_mvarId_697_ = lean_ctor_get(v_toInductionSubgoal_693_, 0);
lean_inc_n(v_mvarId_697_, 2);
v_fields_698_ = lean_ctor_get(v_toInductionSubgoal_693_, 1);
lean_inc_ref(v_fields_698_);
v___x_699_ = lean_box(0);
v___x_700_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_701_ = lean_unsigned_to_nat(0u);
v___x_702_ = lean_nat_dec_eq(v_val_679_, v___x_701_);
v_sz_703_ = lean_array_size(v_fields_698_);
v___x_704_ = lean_box_usize(v_sz_703_);
v___x_705_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1));
v___x_706_ = lean_box(v___x_702_);
v___f_707_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed), 13, 7);
lean_closure_set(v___f_707_, 0, v_toInductionSubgoal_693_);
lean_closure_set(v___f_707_, 1, v_mvarId_697_);
lean_closure_set(v___f_707_, 2, v_fields_698_);
lean_closure_set(v___f_707_, 3, v___x_704_);
lean_closure_set(v___f_707_, 4, v___x_705_);
lean_closure_set(v___f_707_, 5, v___x_700_);
lean_closure_set(v___f_707_, 6, v___x_706_);
v___x_708_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_697_, v___f_707_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_725_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_725_ == 0)
{
v___x_711_ = v___x_708_;
v_isShared_712_ = v_isSharedCheck_725_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_708_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_725_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
uint8_t v___x_713_; 
v___x_713_ = lean_unbox(v_a_709_);
lean_dec(v_a_709_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_717_; 
v___x_714_ = lean_box(v___x_702_);
v___x_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 1, v___x_699_);
lean_ctor_set(v___x_695_, 0, v___x_715_);
v___x_717_ = v___x_695_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v___x_715_);
lean_ctor_set(v_reuseFailAlloc_721_, 1, v___x_699_);
v___x_717_ = v_reuseFailAlloc_721_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_719_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 0, v___x_717_);
v___x_719_ = v___x_711_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
else
{
size_t v___x_722_; size_t v___x_723_; 
lean_del_object(v___x_711_);
lean_del_object(v___x_695_);
v___x_722_ = ((size_t)1ULL);
v___x_723_ = lean_usize_add(v_i_682_, v___x_722_);
v_i_682_ = v___x_723_;
v_b_683_ = v___x_700_;
goto _start;
}
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
lean_del_object(v___x_695_);
v_a_726_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_708_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_708_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_746_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_747_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__6));
v___x_748_ = l_Lean_Name_append(v___x_747_, v___x_746_);
return v___x_748_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0));
v___x_751_ = l_Lean_stringToMessageData(v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object* v_mvarId_752_, lean_object* v_fvarId_753_, lean_object* v___x_754_, uint8_t v___x_755_, lean_object* v___x_756_, lean_object* v_val_757_, uint8_t v___x_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_MVarId_cases(v_mvarId_752_, v_fvarId_753_, v___x_754_, v___x_755_, v___x_756_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v_toCold_799_; lean_object* v_options_800_; uint8_t v_hasTrace_801_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_765_, 1);
v_toCold_799_ = lean_ctor_get(v___y_762_, 0);
v_options_800_ = lean_ctor_get(v_toCold_799_, 2);
v_hasTrace_801_ = lean_ctor_get_uint8(v_options_800_, sizeof(void*)*1);
if (v_hasTrace_801_ == 0)
{
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
v___y_770_ = v___y_761_;
v___y_771_ = v___y_762_;
v___y_772_ = v___y_763_;
goto v___jp_767_;
}
else
{
lean_object* v_inheritedTraceOptions_802_; lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; 
v_inheritedTraceOptions_802_ = lean_ctor_get(v_toCold_799_, 11);
v___x_803_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_804_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_805_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_802_, v_options_800_, v___x_804_);
if (v___x_805_ == 0)
{
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
v___y_770_ = v___y_761_;
v___y_771_ = v___y_762_;
v___y_772_ = v___y_763_;
goto v___jp_767_;
}
else
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_806_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1, &l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1);
v___x_807_ = lean_array_get_size(v_a_766_);
v___x_808_ = l_Nat_reprFast(v___x_807_);
v___x_809_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
v___x_810_ = l_Lean_MessageData_ofFormat(v___x_809_);
v___x_811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_806_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_803_, v___x_811_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_dec_ref_known(v___x_812_, 1);
v___y_768_ = v___y_759_;
v___y_769_ = v___y_760_;
v___y_770_ = v___y_761_;
v___y_771_ = v___y_762_;
v___y_772_ = v___y_763_;
goto v___jp_767_;
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_dec(v_a_766_);
v_a_813_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_812_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_812_);
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
v___jp_767_:
{
lean_object* v___x_773_; size_t v_sz_774_; size_t v___x_775_; lean_object* v___x_776_; 
v___x_773_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_sz_774_ = lean_array_size(v_a_766_);
v___x_775_ = ((size_t)0ULL);
v___x_776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_757_, v_a_766_, v_sz_774_, v___x_775_, v___x_773_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v_a_766_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_790_; 
v_a_777_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_790_ == 0)
{
v___x_779_ = v___x_776_;
v_isShared_780_ = v_isSharedCheck_790_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_776_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_790_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v_fst_781_; 
v_fst_781_ = lean_ctor_get(v_a_777_, 0);
lean_inc(v_fst_781_);
lean_dec(v_a_777_);
if (lean_obj_tag(v_fst_781_) == 0)
{
lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_782_ = lean_box(v___x_758_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v___x_782_);
v___x_784_ = v___x_779_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
else
{
lean_object* v_val_786_; lean_object* v___x_788_; 
v_val_786_ = lean_ctor_get(v_fst_781_, 0);
lean_inc(v_val_786_);
lean_dec_ref_known(v_fst_781_, 1);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v_val_786_);
v___x_788_ = v___x_779_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_val_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
v_a_791_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_776_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_776_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_867_; 
v_a_821_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_867_ == 0)
{
v___x_823_ = v___x_765_;
v_isShared_824_ = v_isSharedCheck_867_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_765_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_867_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
uint8_t v___x_825_; 
v___x_825_ = l_Lean_Exception_isInterrupt(v_a_821_);
if (v___x_825_ == 0)
{
uint8_t v___x_826_; 
lean_inc(v_a_821_);
v___x_826_ = l_Lean_Exception_isRuntime(v_a_821_);
if (v___x_826_ == 0)
{
lean_object* v_toCold_827_; lean_object* v_options_828_; uint8_t v_hasTrace_829_; 
v_toCold_827_ = lean_ctor_get(v___y_762_, 0);
v_options_828_ = lean_ctor_get(v_toCold_827_, 2);
v_hasTrace_829_ = lean_ctor_get_uint8(v_options_828_, sizeof(void*)*1);
if (v_hasTrace_829_ == 0)
{
lean_object* v___x_830_; lean_object* v___x_832_; 
lean_dec(v_a_821_);
v___x_830_ = lean_box(v___x_755_);
if (v_isShared_824_ == 0)
{
lean_ctor_set_tag(v___x_823_, 0);
lean_ctor_set(v___x_823_, 0, v___x_830_);
v___x_832_ = v___x_823_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
else
{
lean_object* v_inheritedTraceOptions_834_; lean_object* v___x_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v_inheritedTraceOptions_834_ = lean_ctor_get(v_toCold_827_, 11);
v___x_835_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_836_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_837_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_834_, v_options_828_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; lean_object* v___x_840_; 
lean_dec(v_a_821_);
v___x_838_ = lean_box(v___x_755_);
if (v_isShared_824_ == 0)
{
lean_ctor_set_tag(v___x_823_, 0);
lean_ctor_set(v___x_823_, 0, v___x_838_);
v___x_840_ = v___x_823_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v___x_838_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
else
{
lean_object* v___x_842_; lean_object* v___x_843_; 
lean_del_object(v___x_823_);
v___x_842_ = l_Lean_Exception_toMessageData(v_a_821_);
v___x_843_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_835_, v___x_842_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_851_; 
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_851_ == 0)
{
lean_object* v_unused_852_; 
v_unused_852_ = lean_ctor_get(v___x_843_, 0);
lean_dec(v_unused_852_);
v___x_845_ = v___x_843_;
v_isShared_846_ = v_isSharedCheck_851_;
goto v_resetjp_844_;
}
else
{
lean_dec(v___x_843_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_851_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_847_; lean_object* v___x_849_; 
v___x_847_ = lean_box(v___x_755_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_847_);
v___x_849_ = v___x_845_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
v_a_853_ = lean_ctor_get(v___x_843_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_860_ == 0)
{
v___x_855_ = v___x_843_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_843_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_853_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
}
else
{
lean_object* v___x_862_; 
if (v_isShared_824_ == 0)
{
v___x_862_ = v___x_823_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_821_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
else
{
lean_object* v___x_865_; 
if (v_isShared_824_ == 0)
{
v___x_865_ = v___x_823_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_821_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object* v_mvarId_868_, lean_object* v_fvarId_869_, lean_object* v___x_870_, lean_object* v___x_871_, lean_object* v___x_872_, lean_object* v_val_873_, lean_object* v___x_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
uint8_t v___x_16108__boxed_881_; uint8_t v___x_16111__boxed_882_; lean_object* v_res_883_; 
v___x_16108__boxed_881_ = lean_unbox(v___x_871_);
v___x_16111__boxed_882_ = lean_unbox(v___x_874_);
v_res_883_ = l_Lean_Meta_ElimEmptyInductive_elim___lam__0(v_mvarId_868_, v_fvarId_869_, v___x_870_, v___x_16108__boxed_881_, v___x_872_, v_val_873_, v___x_16111__boxed_882_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v___y_875_);
lean_dec(v_val_873_);
return v_res_883_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__8));
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object* v_mvarId_887_, lean_object* v_fvarId_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_){
_start:
{
lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_899_ = lean_st_ref_get(v_a_889_);
v___x_900_ = lean_unsigned_to_nat(0u);
v___x_901_ = lean_nat_dec_eq(v___x_899_, v___x_900_);
if (v___x_901_ == 0)
{
uint8_t v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___f_911_; lean_object* v___x_912_; 
v___x_902_ = 1;
v___x_903_ = lean_st_ref_take(v_a_889_);
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = lean_nat_sub(v___x_903_, v___x_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_st_ref_put(v_a_889_, v___x_905_);
v___x_907_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__0));
v___x_908_ = lean_box(0);
v___x_909_ = lean_box(v___x_901_);
v___x_910_ = lean_box(v___x_902_);
v___f_911_ = lean_alloc_closure((void*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed), 13, 7);
lean_closure_set(v___f_911_, 0, v_mvarId_887_);
lean_closure_set(v___f_911_, 1, v_fvarId_888_);
lean_closure_set(v___f_911_, 2, v___x_907_);
lean_closure_set(v___f_911_, 3, v___x_909_);
lean_closure_set(v___f_911_, 4, v___x_908_);
lean_closure_set(v___f_911_, 5, v___x_899_);
lean_closure_set(v___f_911_, 6, v___x_910_);
v___x_912_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v___f_911_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
return v___x_912_;
}
else
{
lean_object* v_toCold_913_; lean_object* v_options_914_; uint8_t v_hasTrace_915_; 
lean_dec(v___x_899_);
lean_dec(v_fvarId_888_);
lean_dec(v_mvarId_887_);
v_toCold_913_ = lean_ctor_get(v_a_892_, 0);
v_options_914_ = lean_ctor_get(v_toCold_913_, 2);
v_hasTrace_915_ = lean_ctor_get_uint8(v_options_914_, sizeof(void*)*1);
if (v_hasTrace_915_ == 0)
{
goto v___jp_895_;
}
else
{
lean_object* v_inheritedTraceOptions_916_; lean_object* v___x_917_; lean_object* v___x_918_; uint8_t v___x_919_; 
v_inheritedTraceOptions_916_ = lean_ctor_get(v_toCold_913_, 11);
v___x_917_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_918_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_919_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_916_, v_options_914_, v___x_918_);
if (v___x_919_ == 0)
{
goto v___jp_895_;
}
else
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__9, &l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9);
v___x_921_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_917_, v___x_920_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_dec_ref_known(v___x_921_, 1);
goto v___jp_895_;
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
}
v___jp_895_:
{
uint8_t v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_896_ = 0;
v___x_897_ = lean_box(v___x_896_);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object* v___x_930_, lean_object* v___x_931_, lean_object* v_as_932_, size_t v_sz_933_, size_t v_i_934_, lean_object* v_b_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_a_943_; uint8_t v___x_947_; 
v___x_947_ = lean_usize_dec_lt(v_i_934_, v_sz_933_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v___x_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_948_, 0, v_b_935_);
return v___x_948_;
}
else
{
lean_object* v_subst_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v_a_952_; lean_object* v___x_953_; uint8_t v___x_954_; 
lean_dec_ref(v_b_935_);
v_subst_949_ = lean_ctor_get(v___x_930_, 2);
v___x_950_ = lean_box(0);
v___x_951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_a_952_ = lean_array_uget_borrowed(v_as_932_, v_i_934_);
lean_inc(v_subst_949_);
v___x_953_ = l_Lean_Meta_FVarSubst_apply(v_subst_949_, v_a_952_);
v___x_954_ = l_Lean_Expr_isFVar(v___x_953_);
if (v___x_954_ == 0)
{
lean_dec_ref(v___x_953_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = l_Lean_Expr_fvarId_x21(v___x_953_);
lean_dec_ref(v___x_953_);
lean_inc(v___x_955_);
v___x_956_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v___x_955_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; uint8_t v___x_958_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_a_957_);
lean_dec_ref_known(v___x_956_, 1);
v___x_958_ = lean_unbox(v_a_957_);
lean_dec(v_a_957_);
if (v___x_958_ == 0)
{
lean_dec(v___x_955_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_959_; 
lean_inc(v___x_931_);
v___x_959_ = l_Lean_Meta_ElimEmptyInductive_elim(v___x_931_, v___x_955_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_971_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_971_ == 0)
{
v___x_962_ = v___x_959_;
v_isShared_963_ = v_isSharedCheck_971_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_971_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
uint8_t v___x_964_; 
v___x_964_ = lean_unbox(v_a_960_);
lean_dec(v_a_960_);
if (v___x_964_ == 0)
{
lean_del_object(v___x_962_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_969_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v___x_965_ = lean_box(v___x_954_);
v___x_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
v___x_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
lean_ctor_set(v___x_967_, 1, v___x_950_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_967_);
v___x_969_ = v___x_962_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_967_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v_a_972_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_959_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_959_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
lean_dec(v___x_955_);
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v_a_980_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_956_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_956_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
v___jp_942_:
{
size_t v___x_944_; size_t v___x_945_; 
v___x_944_ = ((size_t)1ULL);
v___x_945_ = lean_usize_add(v_i_934_, v___x_944_);
lean_inc_ref(v_a_943_);
v_i_934_ = v___x_945_;
v_b_935_ = v_a_943_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object* v_toInductionSubgoal_988_, lean_object* v_mvarId_989_, lean_object* v_fields_990_, size_t v_sz_991_, size_t v___x_992_, lean_object* v___x_993_, uint8_t v___x_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v_toInductionSubgoal_988_, v_mvarId_989_, v_fields_990_, v_sz_991_, v___x_992_, v___x_993_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1015_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1004_ = v___x_1001_;
v_isShared_1005_ = v_isSharedCheck_1015_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_1001_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1015_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v_fst_1006_; 
v_fst_1006_ = lean_ctor_get(v_a_1002_, 0);
lean_inc(v_fst_1006_);
lean_dec(v_a_1002_);
if (lean_obj_tag(v_fst_1006_) == 0)
{
lean_object* v___x_1007_; lean_object* v___x_1009_; 
v___x_1007_ = lean_box(v___x_994_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v___x_1007_);
v___x_1009_ = v___x_1004_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
else
{
lean_object* v_val_1011_; lean_object* v___x_1013_; 
v_val_1011_ = lean_ctor_get(v_fst_1006_, 0);
lean_inc(v_val_1011_);
lean_dec_ref_known(v_fst_1006_, 1);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 0, v_val_1011_);
v___x_1013_ = v___x_1004_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_val_1011_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_a_1016_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1001_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1001_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object* v_val_1024_, lean_object* v_as_1025_, lean_object* v_sz_1026_, lean_object* v_i_1027_, lean_object* v_b_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
size_t v_sz_boxed_1035_; size_t v_i_boxed_1036_; lean_object* v_res_1037_; 
v_sz_boxed_1035_ = lean_unbox_usize(v_sz_1026_);
lean_dec(v_sz_1026_);
v_i_boxed_1036_ = lean_unbox_usize(v_i_1027_);
lean_dec(v_i_1027_);
v_res_1037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_1024_, v_as_1025_, v_sz_boxed_1035_, v_i_boxed_1036_, v_b_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v_as_1025_);
lean_dec(v_val_1024_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object* v___x_1038_, lean_object* v___x_1039_, lean_object* v_as_1040_, lean_object* v_sz_1041_, lean_object* v_i_1042_, lean_object* v_b_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
size_t v_sz_boxed_1050_; size_t v_i_boxed_1051_; lean_object* v_res_1052_; 
v_sz_boxed_1050_ = lean_unbox_usize(v_sz_1041_);
lean_dec(v_sz_1041_);
v_i_boxed_1051_ = lean_unbox_usize(v_i_1042_);
lean_dec(v_i_1042_);
v_res_1052_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v___x_1038_, v___x_1039_, v_as_1040_, v_sz_boxed_1050_, v_i_boxed_1051_, v_b_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v_as_1040_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object* v_mvarId_1053_, lean_object* v_fvarId_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_Meta_ElimEmptyInductive_elim(v_mvarId_1053_, v_fvarId_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec(v_a_1055_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object* v_cls_1062_, lean_object* v_msg_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_1062_, v_msg_1063_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object* v_cls_1071_, lean_object* v_msg_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(v_cls_1071_, v_msg_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object* v_x_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = l_Lean_Meta_saveState___redArg(v___y_1082_, v___y_1084_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___y_1089_; lean_object* v_a_1090_; lean_object* v___x_1110_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v___x_1086_, 1);
lean_inc(v___y_1084_);
lean_inc_ref(v___y_1083_);
lean_inc(v___y_1082_);
lean_inc_ref(v___y_1081_);
v___x_1110_ = lean_apply_5(v_x_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, lean_box(0));
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; uint8_t v___x_1112_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1111_);
v___x_1112_ = lean_unbox(v_a_1111_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; 
lean_dec_ref_known(v___x_1110_, 1);
lean_inc(v_a_1087_);
v___x_1113_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1087_, v___y_1082_, v___y_1084_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_a_1087_);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1120_ == 0)
{
lean_object* v_unused_1121_; 
v_unused_1121_ = lean_ctor_get(v___x_1113_, 0);
lean_dec(v_unused_1121_);
v___x_1115_ = v___x_1113_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_dec(v___x_1113_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v_a_1111_);
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1111_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec(v_a_1111_);
v_a_1122_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1113_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1113_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
lean_inc(v_a_1122_);
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
v___y_1089_ = v___x_1127_;
v_a_1090_ = v_a_1122_;
goto v___jp_1088_;
}
}
}
}
else
{
lean_dec(v_a_1111_);
lean_dec(v_a_1087_);
return v___x_1110_;
}
}
else
{
lean_object* v_a_1130_; 
v_a_1130_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1130_);
v___y_1089_ = v___x_1110_;
v_a_1090_ = v_a_1130_;
goto v___jp_1088_;
}
v___jp_1088_:
{
uint8_t v___x_1091_; 
v___x_1091_ = l_Lean_Exception_isInterrupt(v_a_1090_);
if (v___x_1091_ == 0)
{
uint8_t v___x_1092_; 
lean_inc_ref(v_a_1090_);
v___x_1092_ = l_Lean_Exception_isRuntime(v_a_1090_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; 
lean_dec_ref(v___y_1089_);
v___x_1093_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1087_, v___y_1082_, v___y_1084_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1100_ == 0)
{
lean_object* v_unused_1101_; 
v_unused_1101_ = lean_ctor_get(v___x_1093_, 0);
lean_dec(v_unused_1101_);
v___x_1095_ = v___x_1093_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_dec(v___x_1093_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
lean_ctor_set_tag(v___x_1095_, 1);
lean_ctor_set(v___x_1095_, 0, v_a_1090_);
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1090_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
lean_dec_ref(v_a_1090_);
v_a_1102_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1093_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1093_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
else
{
lean_dec_ref(v_a_1090_);
lean_dec(v_a_1087_);
return v___y_1089_;
}
}
else
{
lean_dec_ref(v_a_1090_);
lean_dec(v_a_1087_);
return v___y_1089_;
}
}
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
lean_dec_ref(v_x_1080_);
v_a_1131_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1086_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1086_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object* v_x_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v_x_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object* v_mvarId_1146_, lean_object* v_x_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1146_, v_x_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1153_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1153_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
v_a_1162_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1153_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1153_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object* v_mvarId_1170_, lean_object* v_x_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1170_, v_x_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object* v_00_u03b1_1178_, lean_object* v_mvarId_1179_, lean_object* v_x_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1179_, v_x_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object* v_00_u03b1_1187_, lean_object* v_mvarId_1188_, lean_object* v_x_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(v_00_u03b1_1187_, v_mvarId_1188_, v_x_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object* v_mvarId_1196_, lean_object* v_fuel_1197_, lean_object* v_fvarId_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l_Lean_MVarId_exfalso(v_mvarId_1196_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
v___x_1206_ = lean_st_mk_ref(v_fuel_1197_);
v___x_1207_ = l_Lean_Meta_ElimEmptyInductive_elim(v_a_1205_, v_fvarId_1198_, v___x_1206_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1216_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1210_ = v___x_1207_;
v_isShared_1211_ = v_isSharedCheck_1216_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1207_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1216_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1214_; 
v___x_1212_ = lean_st_ref_get(v___x_1206_);
lean_dec(v___x_1206_);
lean_dec(v___x_1212_);
if (v_isShared_1211_ == 0)
{
v___x_1214_ = v___x_1210_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1208_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
else
{
lean_dec(v___x_1206_);
return v___x_1207_;
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec(v_fvarId_1198_);
lean_dec(v_fuel_1197_);
v_a_1217_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1204_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1204_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object* v_mvarId_1225_, lean_object* v_fuel_1226_, lean_object* v_fvarId_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(v_mvarId_1225_, v_fuel_1226_, v_fvarId_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object* v_fvarId_1234_, lean_object* v___f_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_1234_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; uint8_t v___x_1243_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
v___x_1243_ = lean_unbox(v_a_1242_);
if (v___x_1243_ == 0)
{
lean_dec_ref(v___f_1235_);
return v___x_1241_;
}
else
{
lean_object* v___x_1244_; 
lean_dec_ref_known(v___x_1241_, 1);
v___x_1244_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v___f_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
return v___x_1244_;
}
}
else
{
lean_dec_ref(v___f_1235_);
return v___x_1241_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object* v_fvarId_1245_, lean_object* v___f_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(v_fvarId_1245_, v___f_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object* v_mvarId_1253_, lean_object* v_fvarId_1254_, lean_object* v_fuel_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v___f_1261_; lean_object* v___f_1262_; lean_object* v___x_1263_; 
lean_inc(v_fvarId_1254_);
lean_inc(v_mvarId_1253_);
v___f_1261_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1261_, 0, v_mvarId_1253_);
lean_closure_set(v___f_1261_, 1, v_fuel_1255_);
lean_closure_set(v___f_1261_, 2, v_fvarId_1254_);
v___f_1262_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1262_, 0, v_fvarId_1254_);
lean_closure_set(v___f_1262_, 1, v___f_1261_);
v___x_1263_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1253_, v___f_1262_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object* v_mvarId_1264_, lean_object* v_fvarId_1265_, lean_object* v_fuel_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1264_, v_fvarId_1265_, v_fuel_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_);
lean_dec(v_a_1270_);
lean_dec_ref(v_a_1269_);
lean_dec(v_a_1268_);
lean_dec_ref(v_a_1267_);
return v_res_1272_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object* v_e_1273_){
_start:
{
uint8_t v___x_1274_; 
v___x_1274_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v_e_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object* v_e_1275_){
_start:
{
uint8_t v_res_1276_; lean_object* v_r_1277_; 
v_res_1276_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(v_e_1275_);
v_r_1277_ = lean_box(v_res_1276_);
return v_r_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object* v_e_1278_, lean_object* v_acc_1279_){
_start:
{
if (lean_obj_tag(v_e_1278_) == 7)
{
lean_object* v_binderType_1280_; lean_object* v_body_1281_; uint8_t v___y_1283_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v_binderType_1280_ = lean_ctor_get(v_e_1278_, 1);
v_body_1281_ = lean_ctor_get(v_e_1278_, 2);
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = lean_expr_has_loose_bvar(v_body_1281_, v___x_1287_);
if (v___x_1288_ == 0)
{
uint8_t v___x_1289_; 
v___x_1289_ = l_Lean_Expr_isEq(v_binderType_1280_);
if (v___x_1289_ == 0)
{
uint8_t v___x_1290_; 
v___x_1290_ = l_Lean_Expr_isHEq(v_binderType_1280_);
v___y_1283_ = v___x_1290_;
goto v___jp_1282_;
}
else
{
v___y_1283_ = v___x_1289_;
goto v___jp_1282_;
}
}
else
{
uint8_t v___x_1291_; 
v___x_1291_ = 0;
v___y_1283_ = v___x_1291_;
goto v___jp_1282_;
}
v___jp_1282_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = lean_box(v___y_1283_);
v___x_1285_ = lean_array_push(v_acc_1279_, v___x_1284_);
v_e_1278_ = v_body_1281_;
v_acc_1279_ = v___x_1285_;
goto _start;
}
}
else
{
return v_acc_1279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object* v_e_1292_, lean_object* v_acc_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1292_, v_acc_1293_);
lean_dec_ref(v_e_1292_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object* v_e_1297_){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = ((lean_object*)(l_Lean_Meta_mkGenDiseqMask___closed__0));
v___x_1299_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1297_, v___x_1298_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object* v_e_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lean_Meta_mkGenDiseqMask(v_e_1300_);
lean_dec_ref(v_e_1300_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object* v_msg_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v___f_1309_; lean_object* v___x_4344__overap_1310_; lean_object* v___x_1311_; 
v___f_1309_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0));
v___x_4344__overap_1310_ = lean_panic_fn_borrowed(v___f_1309_, v_msg_1303_);
lean_inc(v___y_1307_);
lean_inc_ref(v___y_1306_);
lean_inc(v___y_1305_);
lean_inc_ref(v___y_1304_);
v___x_1311_ = lean_apply_5(v___x_4344__overap_1310_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, lean_box(0));
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object* v_msg_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v_msg_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object* v_e_1319_, lean_object* v___y_1320_){
_start:
{
uint8_t v___x_1322_; 
v___x_1322_ = l_Lean_Expr_hasMVar(v_e_1319_);
if (v___x_1322_ == 0)
{
lean_object* v___x_1323_; 
v___x_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1323_, 0, v_e_1319_);
return v___x_1323_;
}
else
{
lean_object* v___x_1324_; lean_object* v_mctx_1325_; lean_object* v___x_1326_; lean_object* v_fst_1327_; lean_object* v_snd_1328_; lean_object* v___x_1329_; lean_object* v_cache_1330_; lean_object* v_zetaDeltaFVarIds_1331_; lean_object* v_postponed_1332_; lean_object* v_diag_1333_; lean_object* v_rewriteFires_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1343_; 
v___x_1324_ = lean_st_ref_get(v___y_1320_);
v_mctx_1325_ = lean_ctor_get(v___x_1324_, 0);
lean_inc_ref(v_mctx_1325_);
lean_dec(v___x_1324_);
v___x_1326_ = l_Lean_instantiateMVarsCore(v_mctx_1325_, v_e_1319_);
v_fst_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_fst_1327_);
v_snd_1328_ = lean_ctor_get(v___x_1326_, 1);
lean_inc(v_snd_1328_);
lean_dec_ref(v___x_1326_);
v___x_1329_ = lean_st_ref_take(v___y_1320_);
v_cache_1330_ = lean_ctor_get(v___x_1329_, 1);
v_zetaDeltaFVarIds_1331_ = lean_ctor_get(v___x_1329_, 2);
v_postponed_1332_ = lean_ctor_get(v___x_1329_, 3);
v_diag_1333_ = lean_ctor_get(v___x_1329_, 4);
v_rewriteFires_1334_ = lean_ctor_get(v___x_1329_, 5);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1343_ == 0)
{
lean_object* v_unused_1344_; 
v_unused_1344_ = lean_ctor_get(v___x_1329_, 0);
lean_dec(v_unused_1344_);
v___x_1336_ = v___x_1329_;
v_isShared_1337_ = v_isSharedCheck_1343_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_rewriteFires_1334_);
lean_inc(v_diag_1333_);
lean_inc(v_postponed_1332_);
lean_inc(v_zetaDeltaFVarIds_1331_);
lean_inc(v_cache_1330_);
lean_dec(v___x_1329_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1343_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v_snd_1328_);
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_snd_1328_);
lean_ctor_set(v_reuseFailAlloc_1342_, 1, v_cache_1330_);
lean_ctor_set(v_reuseFailAlloc_1342_, 2, v_zetaDeltaFVarIds_1331_);
lean_ctor_set(v_reuseFailAlloc_1342_, 3, v_postponed_1332_);
lean_ctor_set(v_reuseFailAlloc_1342_, 4, v_diag_1333_);
lean_ctor_set(v_reuseFailAlloc_1342_, 5, v_rewriteFires_1334_);
v___x_1339_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = lean_st_ref_put(v___y_1320_, v___x_1339_);
v___x_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1341_, 0, v_fst_1327_);
return v___x_1341_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object* v_e_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1345_, v___y_1346_);
lean_dec(v___y_1346_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object* v_e_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1349_, v___y_1351_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object* v_e_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(v_e_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object* v_k_1363_, uint8_t v_allowLevelAssignments_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v___x_1370_; 
v___x_1370_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1364_, v_k_1363_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1378_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1373_ = v___x_1370_;
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_dec(v___x_1370_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1378_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1376_; 
if (v_isShared_1374_ == 0)
{
v___x_1376_ = v___x_1373_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_a_1371_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
v_a_1379_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1370_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1370_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object* v_k_1387_, lean_object* v_allowLevelAssignments_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1394_; lean_object* v_res_1395_; 
v_allowLevelAssignments_boxed_1394_ = lean_unbox(v_allowLevelAssignments_1388_);
v_res_1395_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1387_, v_allowLevelAssignments_boxed_1394_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object* v_00_u03b1_1396_, lean_object* v_k_1397_, uint8_t v_allowLevelAssignments_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1397_, v_allowLevelAssignments_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object* v_00_u03b1_1405_, lean_object* v_k_1406_, lean_object* v_allowLevelAssignments_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1413_; lean_object* v_res_1414_; 
v_allowLevelAssignments_boxed_1413_ = lean_unbox(v_allowLevelAssignments_1407_);
v_res_1414_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(v_00_u03b1_1405_, v_k_1406_, v_allowLevelAssignments_boxed_1413_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object* v_as_1417_, size_t v_sz_1418_, size_t v_i_1419_, lean_object* v_b_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v_a_1427_; uint8_t v___x_1431_; 
v___x_1431_ = lean_usize_dec_lt(v_i_1419_, v_sz_1418_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1432_, 0, v_b_1420_);
return v___x_1432_;
}
else
{
lean_object* v_snd_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1595_; 
v_snd_1433_ = lean_ctor_get(v_b_1420_, 1);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_b_1420_);
if (v_isSharedCheck_1595_ == 0)
{
lean_object* v_unused_1596_; 
v_unused_1596_ = lean_ctor_get(v_b_1420_, 0);
lean_dec(v_unused_1596_);
v___x_1435_ = v_b_1420_;
v_isShared_1436_ = v_isSharedCheck_1595_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_snd_1433_);
lean_dec(v_b_1420_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1595_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v_array_1437_; lean_object* v_start_1438_; lean_object* v_stop_1439_; lean_object* v___x_1440_; uint8_t v___x_1441_; 
v_array_1437_ = lean_ctor_get(v_snd_1433_, 0);
v_start_1438_ = lean_ctor_get(v_snd_1433_, 1);
v_stop_1439_ = lean_ctor_get(v_snd_1433_, 2);
v___x_1440_ = lean_box(0);
v___x_1441_ = lean_nat_dec_lt(v_start_1438_, v_stop_1439_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1443_; 
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v___x_1440_);
v___x_1443_ = v___x_1435_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v_snd_1433_);
v___x_1443_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1444_; 
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
else
{
lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1591_; 
lean_inc(v_stop_1439_);
lean_inc(v_start_1438_);
lean_inc_ref(v_array_1437_);
v_isSharedCheck_1591_ = !lean_is_exclusive(v_snd_1433_);
if (v_isSharedCheck_1591_ == 0)
{
lean_object* v_unused_1592_; lean_object* v_unused_1593_; lean_object* v_unused_1594_; 
v_unused_1592_ = lean_ctor_get(v_snd_1433_, 2);
lean_dec(v_unused_1592_);
v_unused_1593_ = lean_ctor_get(v_snd_1433_, 1);
lean_dec(v_unused_1593_);
v_unused_1594_ = lean_ctor_get(v_snd_1433_, 0);
lean_dec(v_unused_1594_);
v___x_1447_ = v_snd_1433_;
v_isShared_1448_ = v_isSharedCheck_1591_;
goto v_resetjp_1446_;
}
else
{
lean_dec(v_snd_1433_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1591_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1449_ = lean_array_fget(v_array_1437_, v_start_1438_);
v___x_1450_ = lean_unsigned_to_nat(1u);
v___x_1451_ = lean_nat_add(v_start_1438_, v___x_1450_);
lean_dec(v_start_1438_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 1, v___x_1451_);
v___x_1453_ = v___x_1447_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_array_1437_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v___x_1451_);
lean_ctor_set(v_reuseFailAlloc_1590_, 2, v_stop_1439_);
v___x_1453_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
uint8_t v___x_1454_; 
v___x_1454_ = lean_unbox(v___x_1449_);
lean_dec(v___x_1449_);
if (v___x_1454_ == 0)
{
lean_object* v___x_1456_; 
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 1, v___x_1453_);
lean_ctor_set(v___x_1435_, 0, v___x_1440_);
v___x_1456_ = v___x_1435_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1457_, 1, v___x_1453_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
v_a_1427_ = v___x_1456_;
goto v___jp_1426_;
}
}
else
{
lean_object* v_a_1458_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v___y_1463_; lean_object* v___x_1530_; 
v_a_1458_ = lean_array_uget_borrowed(v_as_1417_, v_i_1419_);
lean_inc(v___y_1424_);
lean_inc_ref(v___y_1423_);
lean_inc(v___y_1422_);
lean_inc_ref(v___y_1421_);
lean_inc(v_a_1458_);
v___x_1530_ = lean_infer_type(v_a_1458_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1532_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v___x_1532_ = l_Lean_Meta_matchEq_x3f(v_a_1531_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v___x_1532_, 1);
if (lean_obj_tag(v_a_1533_) == 1)
{
lean_object* v_val_1534_; lean_object* v_snd_1535_; lean_object* v_fst_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1572_; 
v_val_1534_ = lean_ctor_get(v_a_1533_, 0);
lean_inc(v_val_1534_);
lean_dec_ref_known(v_a_1533_, 1);
v_snd_1535_ = lean_ctor_get(v_val_1534_, 1);
lean_inc(v_snd_1535_);
lean_dec(v_val_1534_);
v_fst_1536_ = lean_ctor_get(v_snd_1535_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_snd_1535_);
if (v_isSharedCheck_1572_ == 0)
{
lean_object* v_unused_1573_; 
v_unused_1573_ = lean_ctor_get(v_snd_1535_, 1);
lean_dec(v_unused_1573_);
v___x_1538_ = v_snd_1535_;
v_isShared_1539_ = v_isSharedCheck_1572_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_fst_1536_);
lean_dec(v_snd_1535_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1572_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1540_; 
v___x_1540_ = l_Lean_Meta_mkEqRefl(v_fst_1536_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1542_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
lean_inc(v_a_1458_);
v___x_1542_ = l_Lean_Meta_isExprDefEq(v_a_1458_, v_a_1541_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1555_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1545_ = v___x_1542_;
v_isShared_1546_ = v_isSharedCheck_1555_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1542_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1555_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
uint8_t v___x_1547_; 
v___x_1547_ = lean_unbox(v_a_1543_);
lean_dec(v_a_1543_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; lean_object* v___x_1550_; 
lean_del_object(v___x_1435_);
v___x_1548_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 1, v___x_1453_);
lean_ctor_set(v___x_1538_, 0, v___x_1548_);
v___x_1550_ = v___x_1538_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1548_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v___x_1453_);
v___x_1550_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
lean_object* v___x_1552_; 
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 0, v___x_1550_);
v___x_1552_ = v___x_1545_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
else
{
lean_del_object(v___x_1545_);
lean_del_object(v___x_1538_);
v___y_1460_ = v___y_1421_;
v___y_1461_ = v___y_1422_;
v___y_1462_ = v___y_1423_;
v___y_1463_ = v___y_1424_;
goto v___jp_1459_;
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_del_object(v___x_1538_);
lean_dec_ref(v___x_1453_);
lean_del_object(v___x_1435_);
v_a_1556_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1542_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1542_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
lean_del_object(v___x_1538_);
lean_dec_ref(v___x_1453_);
lean_del_object(v___x_1435_);
v_a_1564_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1540_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1540_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
}
else
{
lean_dec(v_a_1533_);
v___y_1460_ = v___y_1421_;
v___y_1461_ = v___y_1422_;
v___y_1462_ = v___y_1423_;
v___y_1463_ = v___y_1424_;
goto v___jp_1459_;
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec_ref(v___x_1453_);
lean_del_object(v___x_1435_);
v_a_1574_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1532_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1532_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v___x_1453_);
lean_del_object(v___x_1435_);
v_a_1582_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1530_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1530_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
v___jp_1459_:
{
lean_object* v___x_1464_; 
lean_inc(v___y_1463_);
lean_inc_ref(v___y_1462_);
lean_inc(v___y_1461_);
lean_inc_ref(v___y_1460_);
lean_inc(v_a_1458_);
v___x_1464_ = lean_infer_type(v_a_1458_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1466_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = l_Lean_Meta_matchHEq_x3f(v_a_1465_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
if (lean_obj_tag(v_a_1467_) == 1)
{
lean_object* v_val_1468_; lean_object* v_snd_1469_; lean_object* v_fst_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1509_; 
lean_del_object(v___x_1435_);
v_val_1468_ = lean_ctor_get(v_a_1467_, 0);
lean_inc(v_val_1468_);
lean_dec_ref_known(v_a_1467_, 1);
v_snd_1469_ = lean_ctor_get(v_val_1468_, 1);
lean_inc(v_snd_1469_);
lean_dec(v_val_1468_);
v_fst_1470_ = lean_ctor_get(v_snd_1469_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_snd_1469_);
if (v_isSharedCheck_1509_ == 0)
{
lean_object* v_unused_1510_; 
v_unused_1510_ = lean_ctor_get(v_snd_1469_, 1);
lean_dec(v_unused_1510_);
v___x_1472_ = v_snd_1469_;
v_isShared_1473_ = v_isSharedCheck_1509_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_fst_1470_);
lean_dec(v_snd_1469_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1509_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_Meta_mkHEqRefl(v_fst_1470_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1476_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_a_1475_);
lean_dec_ref_known(v___x_1474_, 1);
lean_inc(v_a_1458_);
v___x_1476_ = l_Lean_Meta_isExprDefEq(v_a_1458_, v_a_1475_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1492_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1479_ = v___x_1476_;
v_isShared_1480_ = v_isSharedCheck_1492_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_a_1477_);
lean_dec(v___x_1476_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1492_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
uint8_t v___x_1481_; 
v___x_1481_ = lean_unbox(v_a_1477_);
lean_dec(v_a_1477_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; lean_object* v___x_1484_; 
v___x_1482_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 1, v___x_1453_);
lean_ctor_set(v___x_1472_, 0, v___x_1482_);
v___x_1484_ = v___x_1472_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1482_);
lean_ctor_set(v_reuseFailAlloc_1488_, 1, v___x_1453_);
v___x_1484_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1486_; 
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 0, v___x_1484_);
v___x_1486_ = v___x_1479_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1484_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
else
{
lean_object* v___x_1490_; 
lean_del_object(v___x_1479_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 1, v___x_1453_);
lean_ctor_set(v___x_1472_, 0, v___x_1440_);
v___x_1490_ = v___x_1472_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v___x_1453_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
v_a_1427_ = v___x_1490_;
goto v___jp_1426_;
}
}
}
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1495_; uint8_t v_isShared_1496_; uint8_t v_isSharedCheck_1500_; 
lean_del_object(v___x_1472_);
lean_dec_ref(v___x_1453_);
v_a_1493_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1500_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1500_ == 0)
{
v___x_1495_ = v___x_1476_;
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
else
{
lean_inc(v_a_1493_);
lean_dec(v___x_1476_);
v___x_1495_ = lean_box(0);
v_isShared_1496_ = v_isSharedCheck_1500_;
goto v_resetjp_1494_;
}
v_resetjp_1494_:
{
lean_object* v___x_1498_; 
if (v_isShared_1496_ == 0)
{
v___x_1498_ = v___x_1495_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_a_1493_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
else
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
lean_del_object(v___x_1472_);
lean_dec_ref(v___x_1453_);
v_a_1501_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1474_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1474_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
}
else
{
lean_object* v___x_1512_; 
lean_dec(v_a_1467_);
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 1, v___x_1453_);
lean_ctor_set(v___x_1435_, 0, v___x_1440_);
v___x_1512_ = v___x_1435_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v___x_1453_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
v_a_1427_ = v___x_1512_;
goto v___jp_1426_;
}
}
}
else
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1521_; 
lean_dec_ref(v___x_1453_);
lean_del_object(v___x_1435_);
v_a_1514_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1521_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1516_ = v___x_1466_;
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1466_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1521_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1519_; 
if (v_isShared_1517_ == 0)
{
v___x_1519_ = v___x_1516_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
lean_dec_ref(v___x_1453_);
lean_del_object(v___x_1435_);
v_a_1522_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1464_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1464_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1522_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
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
v___jp_1426_:
{
size_t v___x_1428_; size_t v___x_1429_; 
v___x_1428_ = ((size_t)1ULL);
v___x_1429_ = lean_usize_add(v_i_1419_, v___x_1428_);
v_i_1419_ = v___x_1429_;
v_b_1420_ = v_a_1427_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object* v_as_1597_, lean_object* v_sz_1598_, lean_object* v_i_1599_, lean_object* v_b_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
size_t v_sz_boxed_1606_; size_t v_i_boxed_1607_; lean_object* v_res_1608_; 
v_sz_boxed_1606_ = lean_unbox_usize(v_sz_1598_);
lean_dec(v_sz_1598_);
v_i_boxed_1607_ = lean_unbox_usize(v_i_1599_);
lean_dec(v_i_1599_);
v_res_1608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_as_1597_, v_sz_boxed_1606_, v_i_boxed_1607_, v_b_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec_ref(v_as_1597_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object* v___x_1609_, uint8_t v___x_1610_, lean_object* v_localDecl_1611_, lean_object* v_mvarId_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v___x_1618_; 
lean_inc_ref(v___x_1609_);
v___x_1618_ = l_Lean_Meta_forallMetaTelescope(v___x_1609_, v___x_1610_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v_fst_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1709_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1618_, 1);
v_fst_1620_ = lean_ctor_get(v_a_1619_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_a_1619_);
if (v_isSharedCheck_1709_ == 0)
{
lean_object* v_unused_1710_; 
v_unused_1710_ = lean_ctor_get(v_a_1619_, 1);
lean_dec(v_unused_1710_);
v___x_1622_ = v_a_1619_;
v_isShared_1623_ = v_isSharedCheck_1709_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_fst_1620_);
lean_dec(v_a_1619_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1709_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1630_; 
v___x_1624_ = l_Lean_Meta_mkGenDiseqMask(v___x_1609_);
lean_dec_ref(v___x_1609_);
v___x_1625_ = lean_unsigned_to_nat(0u);
v___x_1626_ = lean_array_get_size(v___x_1624_);
v___x_1627_ = l_Array_toSubarray___redArg(v___x_1624_, v___x_1625_, v___x_1626_);
v___x_1628_ = lean_box(0);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 1, v___x_1627_);
lean_ctor_set(v___x_1622_, 0, v___x_1628_);
v___x_1630_ = v___x_1622_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1628_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v___x_1627_);
v___x_1630_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
size_t v_sz_1631_; size_t v___x_1632_; lean_object* v___x_1633_; 
v_sz_1631_ = lean_array_size(v_fst_1620_);
v___x_1632_ = ((size_t)0ULL);
v___x_1633_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_fst_1620_, v_sz_1631_, v___x_1632_, v___x_1630_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1699_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1636_ = v___x_1633_;
v_isShared_1637_ = v_isSharedCheck_1699_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1633_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1699_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v_fst_1638_; 
v_fst_1638_ = lean_ctor_get(v_a_1634_, 0);
lean_inc(v_fst_1638_);
lean_dec(v_a_1634_);
if (lean_obj_tag(v_fst_1638_) == 0)
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1694_; 
lean_del_object(v___x_1636_);
v___x_1639_ = l_Lean_LocalDecl_toExpr(v_localDecl_1611_);
v___x_1640_ = l_Lean_mkAppN(v___x_1639_, v_fst_1620_);
lean_dec(v_fst_1620_);
v___x_1641_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_1640_, v___y_1614_);
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1644_ = v___x_1641_;
v_isShared_1645_ = v_isSharedCheck_1694_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1641_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1694_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1646_; 
lean_inc(v_a_1642_);
v___x_1646_ = l_Lean_Meta_hasAssignableMVar(v_a_1642_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1685_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1649_ = v___x_1646_;
v_isShared_1650_ = v_isSharedCheck_1685_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1646_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1685_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
uint8_t v___x_1651_; 
v___x_1651_ = lean_unbox(v_a_1647_);
lean_dec(v_a_1647_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1652_; 
lean_del_object(v___x_1649_);
v___x_1652_ = l_Lean_MVarId_getType(v_mvarId_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; lean_object* v___x_1654_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v___x_1652_, 1);
v___x_1654_ = l_Lean_Meta_mkFalseElim(v_a_1653_, v_a_1642_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1665_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1657_ = v___x_1654_;
v_isShared_1658_ = v_isSharedCheck_1665_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1654_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1665_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 1);
lean_ctor_set(v___x_1644_, 0, v_a_1655_);
v___x_1660_ = v___x_1644_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1655_);
v___x_1660_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1662_; 
if (v_isShared_1658_ == 0)
{
lean_ctor_set(v___x_1657_, 0, v___x_1660_);
v___x_1662_ = v___x_1657_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_del_object(v___x_1644_);
v_a_1666_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1654_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1654_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
else
{
lean_object* v_a_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1681_; 
lean_del_object(v___x_1644_);
lean_dec(v_a_1642_);
v_a_1674_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1676_ = v___x_1652_;
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_a_1674_);
lean_dec(v___x_1652_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1679_; 
if (v_isShared_1677_ == 0)
{
v___x_1679_ = v___x_1676_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1674_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
}
else
{
lean_object* v___x_1683_; 
lean_del_object(v___x_1644_);
lean_dec(v_a_1642_);
lean_dec(v_mvarId_1612_);
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 0, v___x_1628_);
v___x_1683_ = v___x_1649_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v___x_1628_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
else
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
lean_del_object(v___x_1644_);
lean_dec(v_a_1642_);
lean_dec(v_mvarId_1612_);
v_a_1686_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1646_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1646_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
return v___x_1691_;
}
}
}
}
}
else
{
lean_object* v_val_1695_; lean_object* v___x_1697_; 
lean_dec(v_fst_1620_);
lean_dec(v_mvarId_1612_);
lean_dec_ref(v_localDecl_1611_);
v_val_1695_ = lean_ctor_get(v_fst_1638_, 0);
lean_inc(v_val_1695_);
lean_dec_ref_known(v_fst_1638_, 1);
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 0, v_val_1695_);
v___x_1697_ = v___x_1636_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_val_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
else
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
lean_dec(v_fst_1620_);
lean_dec(v_mvarId_1612_);
lean_dec_ref(v_localDecl_1611_);
v_a_1700_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1633_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1633_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
}
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
lean_dec(v_mvarId_1612_);
lean_dec_ref(v_localDecl_1611_);
lean_dec_ref(v___x_1609_);
v_a_1711_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1618_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1618_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object* v___x_1719_, lean_object* v___x_1720_, lean_object* v_localDecl_1721_, lean_object* v_mvarId_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
uint8_t v___x_6087__boxed_1728_; lean_object* v_res_1729_; 
v___x_6087__boxed_1728_ = lean_unbox(v___x_1720_);
v_res_1729_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(v___x_1719_, v___x_6087__boxed_1728_, v_localDecl_1721_, v_mvarId_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
return v_res_1729_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3(void){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1733_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2));
v___x_1734_ = lean_unsigned_to_nat(2u);
v___x_1735_ = lean_unsigned_to_nat(120u);
v___x_1736_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1));
v___x_1737_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0));
v___x_1738_ = l_mkPanicMessageWithDecl(v___x_1737_, v___x_1736_, v___x_1735_, v___x_1734_, v___x_1733_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object* v_mvarId_1739_, lean_object* v_localDecl_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_){
_start:
{
lean_object* v___x_1746_; uint8_t v___x_1747_; 
v___x_1746_ = l_Lean_LocalDecl_type(v_localDecl_1740_);
lean_inc_ref(v___x_1746_);
v___x_1747_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_1746_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
lean_dec_ref(v___x_1746_);
lean_dec_ref(v_localDecl_1740_);
lean_dec(v_mvarId_1739_);
v___x_1748_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3);
v___x_1749_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v___x_1748_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_);
return v___x_1749_;
}
else
{
uint8_t v___x_1750_; lean_object* v___x_1751_; lean_object* v___f_1752_; uint8_t v___x_1753_; lean_object* v___x_1754_; 
v___x_1750_ = 0;
v___x_1751_ = lean_box(v___x_1750_);
lean_inc(v_mvarId_1739_);
v___f_1752_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1752_, 0, v___x_1746_);
lean_closure_set(v___f_1752_, 1, v___x_1751_);
lean_closure_set(v___f_1752_, 2, v_localDecl_1740_);
lean_closure_set(v___f_1752_, 3, v_mvarId_1739_);
v___x_1753_ = 0;
v___x_1754_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v___f_1752_, v___x_1753_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1774_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1757_ = v___x_1754_;
v_isShared_1758_ = v_isSharedCheck_1774_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1754_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1774_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
if (lean_obj_tag(v_a_1755_) == 1)
{
lean_object* v_val_1759_; lean_object* v___x_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1768_; 
lean_del_object(v___x_1757_);
v_val_1759_ = lean_ctor_get(v_a_1755_, 0);
lean_inc(v_val_1759_);
lean_dec_ref_known(v_a_1755_, 1);
v___x_1760_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1739_, v_val_1759_, v_a_1742_);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1768_ == 0)
{
lean_object* v_unused_1769_; 
v_unused_1769_ = lean_ctor_get(v___x_1760_, 0);
lean_dec(v_unused_1769_);
v___x_1762_ = v___x_1760_;
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
else
{
lean_dec(v___x_1760_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1764_ = lean_box(v___x_1747_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 0, v___x_1764_);
v___x_1766_ = v___x_1762_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
else
{
lean_object* v___x_1770_; lean_object* v___x_1772_; 
lean_dec(v_a_1755_);
lean_dec(v_mvarId_1739_);
v___x_1770_ = lean_box(v___x_1753_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 0, v___x_1770_);
v___x_1772_ = v___x_1757_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec(v_mvarId_1739_);
v_a_1775_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1754_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1754_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object* v_mvarId_1783_, lean_object* v_localDecl_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1783_, v_localDecl_1784_, v_a_1785_, v_a_1786_, v_a_1787_, v_a_1788_);
lean_dec(v_a_1788_);
lean_dec_ref(v_a_1787_);
lean_dec(v_a_1786_);
lean_dec_ref(v_a_1785_);
return v_res_1790_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1802_ = lean_box(0);
v___x_1803_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5));
v___x_1804_ = l_Lean_mkConst(v___x_1803_, v___x_1802_);
return v___x_1804_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7(void){
_start:
{
lean_object* v___x_1805_; lean_object* v_dummy_1806_; 
v___x_1805_ = lean_box(0);
v_dummy_1806_ = l_Lean_Expr_sort___override(v___x_1805_);
return v_dummy_1806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object* v_config_1807_, lean_object* v_mvarId_1808_, lean_object* v_as_1809_, size_t v_sz_1810_, size_t v_i_1811_, lean_object* v_b_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
uint8_t v___x_1818_; 
v___x_1818_ = lean_usize_dec_lt(v_i_1811_, v_sz_1810_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1819_; 
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v___x_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1819_, 0, v_b_1812_);
return v___x_1819_;
}
else
{
lean_object* v_snd_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_2403_; 
v_snd_1820_ = lean_ctor_get(v_b_1812_, 1);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_b_1812_);
if (v_isSharedCheck_2403_ == 0)
{
lean_object* v_unused_2404_; 
v_unused_2404_ = lean_ctor_get(v_b_1812_, 0);
lean_dec(v_unused_2404_);
v___x_1822_ = v_b_1812_;
v_isShared_1823_ = v_isSharedCheck_2403_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_snd_1820_);
lean_dec(v_b_1812_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_2403_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v_a_1825_; lean_object* v___x_1831_; lean_object* v_a_1833_; lean_object* v_a_1838_; 
v___x_1831_ = lean_box(0);
v_a_1838_ = lean_array_uget(v_as_1809_, v_i_1811_);
if (lean_obj_tag(v_a_1838_) == 0)
{
lean_del_object(v___x_1822_);
v_a_1833_ = v_snd_1820_;
goto v___jp_1832_;
}
else
{
lean_object* v_val_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_2402_; 
v_val_1839_ = lean_ctor_get(v_a_1838_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v_a_1838_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_1841_ = v_a_1838_;
v_isShared_1842_ = v_isSharedCheck_2402_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_val_1839_);
lean_dec(v_a_1838_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_2402_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; uint8_t v___y_1846_; uint8_t v___y_1847_; lean_object* v___y_1848_; lean_object* v___y_1849_; lean_object* v___y_1850_; lean_object* v___y_1851_; uint8_t v___x_1871_; 
v___x_1843_ = lean_box(0);
v___x_1844_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_1871_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1839_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; uint8_t v___y_1874_; uint8_t v___y_1875_; lean_object* v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1878_; lean_object* v___y_1879_; uint8_t v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; uint8_t v___y_1901_; lean_object* v___y_1902_; lean_object* v_a_1903_; uint8_t v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; uint8_t v___y_1914_; lean_object* v___y_1915_; lean_object* v___y_1916_; uint8_t v___y_1953_; uint8_t v_isHEq_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; uint8_t v_isEq_1998_; lean_object* v___y_1999_; lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2114_; lean_object* v___y_2115_; lean_object* v___y_2116_; lean_object* v___y_2117_; lean_object* v___y_2205_; lean_object* v___y_2206_; lean_object* v___y_2207_; lean_object* v___y_2208_; lean_object* v___x_2339_; 
v___x_1872_ = l_Lean_LocalDecl_type(v_val_1839_);
lean_inc_ref(v___x_1872_);
v___x_2339_ = l_Lean_Meta_matchNot_x3f(v___x_1872_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
if (lean_obj_tag(v_a_2340_) == 1)
{
lean_object* v_val_2341_; lean_object* v___x_2342_; 
v_val_2341_ = lean_ctor_get(v_a_2340_, 0);
lean_inc(v_val_2341_);
lean_dec_ref_known(v_a_2340_, 1);
v___x_2342_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_2341_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
lean_inc(v_a_2343_);
lean_dec_ref_known(v___x_2342_, 1);
if (lean_obj_tag(v_a_2343_) == 1)
{
lean_object* v_val_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2385_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec_ref(v_config_1807_);
v_val_2344_ = lean_ctor_get(v_a_2343_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v_a_2343_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2346_ = v_a_2343_;
v_isShared_2347_ = v_isSharedCheck_2385_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_val_2344_);
lean_dec(v_a_2343_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2385_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2348_; 
lean_inc(v_mvarId_1808_);
v___x_2348_ = l_Lean_MVarId_getType(v_mvarId_1808_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2349_);
lean_dec_ref_known(v___x_2348_, 1);
v___x_2350_ = l_Lean_LocalDecl_toExpr(v_val_1839_);
v___x_2351_ = l_Lean_mkFVar(v_val_2344_);
v___x_2352_ = l_Lean_Expr_app___override(v___x_2350_, v___x_2351_);
v___x_2353_ = l_Lean_Meta_mkFalseElim(v_a_2349_, v___x_2352_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v___x_2355_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref_known(v___x_2353_, 1);
v___x_2355_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1808_, v_a_2354_, v___y_1814_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v___x_2356_; lean_object* v___x_2358_; 
lean_dec_ref_known(v___x_2355_, 1);
v___x_2356_ = lean_box(v___x_1818_);
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 0, v___x_2356_);
v___x_2358_ = v___x_2346_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2356_);
v___x_2358_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
lean_object* v___x_2359_; 
v___x_2359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2358_);
lean_ctor_set(v___x_2359_, 1, v___x_1843_);
v_a_1825_ = v___x_2359_;
goto v___jp_1824_;
}
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
lean_del_object(v___x_2346_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_2361_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2355_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2355_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
else
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2376_; 
lean_del_object(v___x_2346_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2369_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2371_ = v___x_2353_;
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v___x_2353_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2369_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2384_; 
lean_del_object(v___x_2346_);
lean_dec(v_val_2344_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2377_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2379_ = v___x_2348_;
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___x_2348_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2382_; 
if (v_isShared_2380_ == 0)
{
v___x_2382_ = v___x_2379_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_a_2377_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
}
}
else
{
lean_dec(v_a_2343_);
v___y_2205_ = v___y_1813_;
v___y_2206_ = v___y_1814_;
v___y_2207_ = v___y_1815_;
v___y_2208_ = v___y_1816_;
goto v___jp_2204_;
}
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2386_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2342_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2342_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
else
{
lean_dec(v_a_2340_);
v___y_2205_ = v___y_1813_;
v___y_2206_ = v___y_1814_;
v___y_2207_ = v___y_1815_;
v___y_2208_ = v___y_1816_;
goto v___jp_2204_;
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2394_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2396_ = v___x_2339_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v___x_2339_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2394_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
v___jp_1873_:
{
uint8_t v_genDiseq_1880_; 
v_genDiseq_1880_ = lean_ctor_get_uint8(v_config_1807_, sizeof(void*)*1 + 2);
if (v_genDiseq_1880_ == 0)
{
lean_dec_ref(v___x_1872_);
v___y_1846_ = v___y_1874_;
v___y_1847_ = v___y_1875_;
v___y_1848_ = v___y_1876_;
v___y_1849_ = v___y_1877_;
v___y_1850_ = v___y_1878_;
v___y_1851_ = v___y_1879_;
goto v___jp_1845_;
}
else
{
uint8_t v___x_1881_; 
v___x_1881_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_1872_);
if (v___x_1881_ == 0)
{
v___y_1846_ = v___y_1874_;
v___y_1847_ = v___y_1875_;
v___y_1848_ = v___y_1876_;
v___y_1849_ = v___y_1877_;
v___y_1850_ = v___y_1878_;
v___y_1851_ = v___y_1879_;
goto v___jp_1845_;
}
else
{
lean_object* v___x_1882_; 
lean_inc(v_val_1839_);
lean_inc(v_mvarId_1808_);
v___x_1882_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1808_, v_val_1839_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; uint8_t v___x_1884_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1882_, 1);
v___x_1884_ = lean_unbox(v_a_1883_);
lean_dec(v_a_1883_);
if (v___x_1884_ == 0)
{
v___y_1846_ = v___y_1874_;
v___y_1847_ = v___y_1875_;
v___y_1848_ = v___y_1876_;
v___y_1849_ = v___y_1877_;
v___y_1850_ = v___y_1878_;
v___y_1851_ = v___y_1879_;
goto v___jp_1845_;
}
else
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v___x_1885_ = lean_box(v___x_1818_);
v___x_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1885_);
v___x_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1886_);
lean_ctor_set(v___x_1887_, 1, v___x_1843_);
v_a_1825_ = v___x_1887_;
goto v___jp_1824_;
}
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_1888_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1882_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1882_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1888_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
}
}
v___jp_1896_:
{
uint8_t v___x_1904_; 
v___x_1904_ = l_Lean_Exception_isInterrupt(v_a_1903_);
if (v___x_1904_ == 0)
{
uint8_t v___x_1905_; 
lean_inc_ref(v_a_1903_);
v___x_1905_ = l_Lean_Exception_isRuntime(v_a_1903_);
if (v___x_1905_ == 0)
{
lean_dec_ref(v_a_1903_);
v___y_1874_ = v___y_1897_;
v___y_1875_ = v___y_1901_;
v___y_1876_ = v___y_1900_;
v___y_1877_ = v___y_1898_;
v___y_1878_ = v___y_1902_;
v___y_1879_ = v___y_1899_;
goto v___jp_1873_;
}
else
{
lean_object* v___x_1906_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v___x_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_a_1903_);
return v___x_1906_;
}
}
else
{
lean_object* v___x_1907_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v___x_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1907_, 0, v_a_1903_);
return v___x_1907_;
}
}
v___jp_1908_:
{
if (lean_obj_tag(v___y_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1918_; uint8_t v___x_1919_; 
v_a_1917_ = lean_ctor_get(v___y_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v___y_1916_, 1);
v___x_1918_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_1919_ = l_Lean_Expr_isConstOf(v_a_1917_, v___x_1918_);
lean_dec(v_a_1917_);
if (v___x_1919_ == 0)
{
lean_dec_ref(v___y_1913_);
v___y_1874_ = v___y_1909_;
v___y_1875_ = v___y_1914_;
v___y_1876_ = v___y_1912_;
v___y_1877_ = v___y_1910_;
v___y_1878_ = v___y_1915_;
v___y_1879_ = v___y_1911_;
goto v___jp_1873_;
}
else
{
lean_object* v___x_1920_; 
lean_inc_ref(v___y_1913_);
v___x_1920_ = l_Lean_Meta_mkEqRefl(v___y_1913_, v___y_1912_, v___y_1910_, v___y_1915_, v___y_1911_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v___x_1922_; lean_object* v_dummy_1923_; lean_object* v_nargs_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1920_, 1);
v___x_1922_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_1923_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_1924_ = l_Lean_Expr_getAppNumArgs(v___y_1913_);
lean_inc(v_nargs_1924_);
v___x_1925_ = lean_mk_array(v_nargs_1924_, v_dummy_1923_);
v___x_1926_ = lean_unsigned_to_nat(1u);
v___x_1927_ = lean_nat_sub(v_nargs_1924_, v___x_1926_);
lean_dec(v_nargs_1924_);
v___x_1928_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_1913_, v___x_1925_, v___x_1927_);
v___x_1929_ = lean_array_push(v___x_1928_, v_a_1921_);
v___x_1930_ = l_Lean_mkAppN(v___x_1922_, v___x_1929_);
lean_dec_ref(v___x_1929_);
lean_inc(v_mvarId_1808_);
v___x_1931_ = l_Lean_MVarId_getType(v_mvarId_1808_, v___y_1912_, v___y_1910_, v___y_1915_, v___y_1911_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_a_1932_);
lean_dec_ref_known(v___x_1931_, 1);
lean_inc(v_val_1839_);
v___x_1933_ = l_Lean_LocalDecl_toExpr(v_val_1839_);
v___x_1934_ = l_Lean_Meta_mkAbsurd(v_a_1932_, v___x_1933_, v___x_1930_, v___y_1912_, v___y_1910_, v___y_1915_, v___y_1911_);
if (lean_obj_tag(v___x_1934_) == 0)
{
lean_object* v_a_1935_; lean_object* v___x_1936_; 
v_a_1935_ = lean_ctor_get(v___x_1934_, 0);
lean_inc(v_a_1935_);
lean_dec_ref_known(v___x_1934_, 1);
lean_inc(v_mvarId_1808_);
v___x_1936_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1808_, v_a_1935_, v___y_1910_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1945_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1936_);
if (v_isSharedCheck_1945_ == 0)
{
lean_object* v_unused_1946_; 
v_unused_1946_ = lean_ctor_get(v___x_1936_, 0);
lean_dec(v_unused_1946_);
v___x_1938_ = v___x_1936_;
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
else
{
lean_dec(v___x_1936_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1940_ = lean_box(v___x_1818_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set_tag(v___x_1938_, 1);
lean_ctor_set(v___x_1938_, 0, v___x_1940_);
v___x_1942_ = v___x_1938_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
lean_object* v___x_1943_; 
v___x_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1942_);
lean_ctor_set(v___x_1943_, 1, v___x_1843_);
v_a_1825_ = v___x_1943_;
goto v___jp_1824_;
}
}
}
else
{
lean_object* v_a_1947_; 
v_a_1947_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1947_);
lean_dec_ref_known(v___x_1936_, 1);
v___y_1897_ = v___y_1909_;
v___y_1898_ = v___y_1910_;
v___y_1899_ = v___y_1911_;
v___y_1900_ = v___y_1912_;
v___y_1901_ = v___y_1914_;
v___y_1902_ = v___y_1915_;
v_a_1903_ = v_a_1947_;
goto v___jp_1896_;
}
}
else
{
lean_object* v_a_1948_; 
v_a_1948_ = lean_ctor_get(v___x_1934_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1934_, 1);
v___y_1897_ = v___y_1909_;
v___y_1898_ = v___y_1910_;
v___y_1899_ = v___y_1911_;
v___y_1900_ = v___y_1912_;
v___y_1901_ = v___y_1914_;
v___y_1902_ = v___y_1915_;
v_a_1903_ = v_a_1948_;
goto v___jp_1896_;
}
}
else
{
lean_object* v_a_1949_; 
lean_dec_ref(v___x_1930_);
v_a_1949_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_a_1949_);
lean_dec_ref_known(v___x_1931_, 1);
v___y_1897_ = v___y_1909_;
v___y_1898_ = v___y_1910_;
v___y_1899_ = v___y_1911_;
v___y_1900_ = v___y_1912_;
v___y_1901_ = v___y_1914_;
v___y_1902_ = v___y_1915_;
v_a_1903_ = v_a_1949_;
goto v___jp_1896_;
}
}
else
{
lean_object* v_a_1950_; 
lean_dec_ref(v___y_1913_);
v_a_1950_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1950_);
lean_dec_ref_known(v___x_1920_, 1);
v___y_1897_ = v___y_1909_;
v___y_1898_ = v___y_1910_;
v___y_1899_ = v___y_1911_;
v___y_1900_ = v___y_1912_;
v___y_1901_ = v___y_1914_;
v___y_1902_ = v___y_1915_;
v_a_1903_ = v_a_1950_;
goto v___jp_1896_;
}
}
}
else
{
lean_object* v_a_1951_; 
lean_dec_ref(v___y_1913_);
v_a_1951_ = lean_ctor_get(v___y_1916_, 0);
lean_inc(v_a_1951_);
lean_dec_ref_known(v___y_1916_, 1);
v___y_1897_ = v___y_1909_;
v___y_1898_ = v___y_1910_;
v___y_1899_ = v___y_1911_;
v___y_1900_ = v___y_1912_;
v___y_1901_ = v___y_1914_;
v___y_1902_ = v___y_1915_;
v_a_1903_ = v_a_1951_;
goto v___jp_1896_;
}
}
v___jp_1952_:
{
uint8_t v_useDecide_1959_; 
v_useDecide_1959_ = lean_ctor_get_uint8(v_config_1807_, sizeof(void*)*1);
if (v_useDecide_1959_ == 0)
{
v___y_1874_ = v_isHEq_1954_;
v___y_1875_ = v___y_1953_;
v___y_1876_ = v___y_1955_;
v___y_1877_ = v___y_1956_;
v___y_1878_ = v___y_1957_;
v___y_1879_ = v___y_1958_;
goto v___jp_1873_;
}
else
{
uint8_t v___x_1960_; 
v___x_1960_ = l_Lean_Expr_hasFVar(v___x_1872_);
if (v___x_1960_ == 0)
{
lean_object* v___x_1961_; 
lean_inc_ref(v___x_1872_);
v___x_1961_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_1872_, v___y_1956_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; uint8_t v___x_1963_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref_known(v___x_1961_, 1);
v___x_1963_ = l_Lean_Expr_hasMVar(v_a_1962_);
if (v___x_1963_ == 0)
{
uint8_t v___x_1964_; 
v___x_1964_ = l_Lean_Expr_hasFVar(v_a_1962_);
lean_dec(v_a_1962_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; 
lean_inc_ref(v___x_1872_);
v___x_1965_ = l_Lean_Meta_mkDecide(v___x_1872_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; lean_object* v___x_1967_; uint8_t v_transparency_1968_; uint8_t v___x_1969_; uint8_t v___x_1970_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
lean_inc(v_a_1966_);
lean_dec_ref_known(v___x_1965_, 1);
v___x_1967_ = l_Lean_Meta_Context_config(v___y_1955_);
v_transparency_1968_ = lean_ctor_get_uint8(v___x_1967_, 9);
lean_dec_ref(v___x_1967_);
v___x_1969_ = 1;
v___x_1970_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1968_, v___x_1969_);
if (v___x_1970_ == 0)
{
lean_object* v_keyedConfig_1971_; uint8_t v_trackZetaDelta_1972_; lean_object* v_zetaDeltaSet_1973_; lean_object* v_lctx_1974_; lean_object* v_localInstances_1975_; lean_object* v_defEqCtx_x3f_1976_; lean_object* v_synthPendingDepth_1977_; lean_object* v_customCanUnfoldPredicate_x3f_1978_; uint8_t v_univApprox_1979_; uint8_t v_inTypeClassResolution_1980_; uint8_t v_cacheInferType_1981_; lean_object* v_rewriteSet_x3f_1982_; uint8_t v_rewriteFuelScope_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v_keyedConfig_1971_ = lean_ctor_get(v___y_1955_, 0);
v_trackZetaDelta_1972_ = lean_ctor_get_uint8(v___y_1955_, sizeof(void*)*8);
v_zetaDeltaSet_1973_ = lean_ctor_get(v___y_1955_, 1);
v_lctx_1974_ = lean_ctor_get(v___y_1955_, 2);
v_localInstances_1975_ = lean_ctor_get(v___y_1955_, 3);
v_defEqCtx_x3f_1976_ = lean_ctor_get(v___y_1955_, 4);
v_synthPendingDepth_1977_ = lean_ctor_get(v___y_1955_, 5);
v_customCanUnfoldPredicate_x3f_1978_ = lean_ctor_get(v___y_1955_, 6);
v_univApprox_1979_ = lean_ctor_get_uint8(v___y_1955_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_1980_ = lean_ctor_get_uint8(v___y_1955_, sizeof(void*)*8 + 2);
v_cacheInferType_1981_ = lean_ctor_get_uint8(v___y_1955_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_1982_ = lean_ctor_get(v___y_1955_, 7);
v_rewriteFuelScope_1983_ = lean_ctor_get_uint8(v___y_1955_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_1971_);
v___x_1984_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1969_, v_keyedConfig_1971_);
lean_inc(v_rewriteSet_x3f_1982_);
lean_inc(v_customCanUnfoldPredicate_x3f_1978_);
lean_inc(v_synthPendingDepth_1977_);
lean_inc(v_defEqCtx_x3f_1976_);
lean_inc_ref(v_localInstances_1975_);
lean_inc_ref(v_lctx_1974_);
lean_inc(v_zetaDeltaSet_1973_);
v___x_1985_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
lean_ctor_set(v___x_1985_, 1, v_zetaDeltaSet_1973_);
lean_ctor_set(v___x_1985_, 2, v_lctx_1974_);
lean_ctor_set(v___x_1985_, 3, v_localInstances_1975_);
lean_ctor_set(v___x_1985_, 4, v_defEqCtx_x3f_1976_);
lean_ctor_set(v___x_1985_, 5, v_synthPendingDepth_1977_);
lean_ctor_set(v___x_1985_, 6, v_customCanUnfoldPredicate_x3f_1978_);
lean_ctor_set(v___x_1985_, 7, v_rewriteSet_x3f_1982_);
lean_ctor_set_uint8(v___x_1985_, sizeof(void*)*8, v_trackZetaDelta_1972_);
lean_ctor_set_uint8(v___x_1985_, sizeof(void*)*8 + 1, v_univApprox_1979_);
lean_ctor_set_uint8(v___x_1985_, sizeof(void*)*8 + 2, v_inTypeClassResolution_1980_);
lean_ctor_set_uint8(v___x_1985_, sizeof(void*)*8 + 3, v_cacheInferType_1981_);
lean_ctor_set_uint8(v___x_1985_, sizeof(void*)*8 + 4, v_rewriteFuelScope_1983_);
lean_inc(v___y_1958_);
lean_inc_ref(v___y_1957_);
lean_inc(v___y_1956_);
lean_inc(v_a_1966_);
v___x_1986_ = lean_whnf(v_a_1966_, v___x_1985_, v___y_1956_, v___y_1957_, v___y_1958_);
v___y_1909_ = v_isHEq_1954_;
v___y_1910_ = v___y_1956_;
v___y_1911_ = v___y_1958_;
v___y_1912_ = v___y_1955_;
v___y_1913_ = v_a_1966_;
v___y_1914_ = v___y_1953_;
v___y_1915_ = v___y_1957_;
v___y_1916_ = v___x_1986_;
goto v___jp_1908_;
}
else
{
lean_object* v___x_1987_; 
lean_inc(v___y_1958_);
lean_inc_ref(v___y_1957_);
lean_inc(v___y_1956_);
lean_inc_ref(v___y_1955_);
lean_inc(v_a_1966_);
v___x_1987_ = lean_whnf(v_a_1966_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
v___y_1909_ = v_isHEq_1954_;
v___y_1910_ = v___y_1956_;
v___y_1911_ = v___y_1958_;
v___y_1912_ = v___y_1955_;
v___y_1913_ = v_a_1966_;
v___y_1914_ = v___y_1953_;
v___y_1915_ = v___y_1957_;
v___y_1916_ = v___x_1987_;
goto v___jp_1908_;
}
}
else
{
lean_object* v_a_1988_; 
v_a_1988_ = lean_ctor_get(v___x_1965_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v___x_1965_, 1);
v___y_1897_ = v_isHEq_1954_;
v___y_1898_ = v___y_1956_;
v___y_1899_ = v___y_1958_;
v___y_1900_ = v___y_1955_;
v___y_1901_ = v___y_1953_;
v___y_1902_ = v___y_1957_;
v_a_1903_ = v_a_1988_;
goto v___jp_1896_;
}
}
else
{
v___y_1874_ = v_isHEq_1954_;
v___y_1875_ = v___y_1953_;
v___y_1876_ = v___y_1955_;
v___y_1877_ = v___y_1956_;
v___y_1878_ = v___y_1957_;
v___y_1879_ = v___y_1958_;
goto v___jp_1873_;
}
}
else
{
lean_dec(v_a_1962_);
v___y_1874_ = v_isHEq_1954_;
v___y_1875_ = v___y_1953_;
v___y_1876_ = v___y_1955_;
v___y_1877_ = v___y_1956_;
v___y_1878_ = v___y_1957_;
v___y_1879_ = v___y_1958_;
goto v___jp_1873_;
}
}
else
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1996_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_1989_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1991_ = v___x_1961_;
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1961_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1994_; 
if (v_isShared_1992_ == 0)
{
v___x_1994_ = v___x_1991_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_a_1989_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
else
{
v___y_1874_ = v_isHEq_1954_;
v___y_1875_ = v___y_1953_;
v___y_1876_ = v___y_1955_;
v___y_1877_ = v___y_1956_;
v___y_1878_ = v___y_1957_;
v___y_1879_ = v___y_1958_;
goto v___jp_1873_;
}
}
}
v___jp_1997_:
{
lean_object* v___x_2003_; 
lean_inc_ref(v___x_1872_);
v___x_2003_ = l_Lean_Meta_matchHEq_x3f(v___x_1872_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_a_2004_);
lean_dec_ref_known(v___x_2003_, 1);
if (lean_obj_tag(v_a_2004_) == 1)
{
lean_object* v_val_2005_; lean_object* v_snd_2006_; lean_object* v_snd_2007_; lean_object* v_fst_2008_; lean_object* v_fst_2009_; lean_object* v_fst_2010_; lean_object* v_snd_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2104_; 
v_val_2005_ = lean_ctor_get(v_a_2004_, 0);
lean_inc(v_val_2005_);
lean_dec_ref_known(v_a_2004_, 1);
v_snd_2006_ = lean_ctor_get(v_val_2005_, 1);
lean_inc(v_snd_2006_);
v_snd_2007_ = lean_ctor_get(v_snd_2006_, 1);
lean_inc(v_snd_2007_);
v_fst_2008_ = lean_ctor_get(v_val_2005_, 0);
lean_inc(v_fst_2008_);
lean_dec(v_val_2005_);
v_fst_2009_ = lean_ctor_get(v_snd_2006_, 0);
lean_inc(v_fst_2009_);
lean_dec(v_snd_2006_);
v_fst_2010_ = lean_ctor_get(v_snd_2007_, 0);
v_snd_2011_ = lean_ctor_get(v_snd_2007_, 1);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_snd_2007_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2013_ = v_snd_2007_;
v_isShared_2014_ = v_isSharedCheck_2104_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_snd_2011_);
lean_inc(v_fst_2010_);
lean_dec(v_snd_2007_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2104_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2015_; 
v___x_2015_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2009_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
if (lean_obj_tag(v_a_2016_) == 1)
{
lean_object* v_val_2017_; lean_object* v___x_2018_; 
v_val_2017_ = lean_ctor_get(v_a_2016_, 0);
lean_inc(v_val_2017_);
lean_dec_ref_known(v_a_2016_, 1);
v___x_2018_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2011_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2019_);
lean_dec_ref_known(v___x_2018_, 1);
if (lean_obj_tag(v_a_2019_) == 1)
{
lean_object* v_toConstantVal_2020_; lean_object* v_val_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2087_; 
v_toConstantVal_2020_ = lean_ctor_get(v_val_2017_, 0);
lean_inc_ref(v_toConstantVal_2020_);
lean_dec(v_val_2017_);
v_val_2021_ = lean_ctor_get(v_a_2019_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_a_2019_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2023_ = v_a_2019_;
v_isShared_2024_ = v_isSharedCheck_2087_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_val_2021_);
lean_dec(v_a_2019_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2087_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v_toConstantVal_2025_; lean_object* v_name_2026_; lean_object* v_name_2027_; uint8_t v___x_2028_; 
v_toConstantVal_2025_ = lean_ctor_get(v_val_2021_, 0);
lean_inc_ref(v_toConstantVal_2025_);
lean_dec(v_val_2021_);
v_name_2026_ = lean_ctor_get(v_toConstantVal_2020_, 0);
lean_inc(v_name_2026_);
lean_dec_ref(v_toConstantVal_2020_);
v_name_2027_ = lean_ctor_get(v_toConstantVal_2025_, 0);
lean_inc(v_name_2027_);
lean_dec_ref(v_toConstantVal_2025_);
v___x_2028_ = lean_name_eq(v_name_2026_, v_name_2027_);
lean_dec(v_name_2027_);
lean_dec(v_name_2026_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Lean_Meta_isExprDefEq(v_fst_2008_, v_fst_2010_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; uint8_t v___x_2031_; 
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_a_2030_);
lean_dec_ref_known(v___x_2029_, 1);
v___x_2031_ = lean_unbox(v_a_2030_);
lean_dec(v_a_2030_);
if (v___x_2031_ == 0)
{
lean_del_object(v___x_2023_);
lean_del_object(v___x_2013_);
v___y_1953_ = v_isEq_1998_;
v_isHEq_1954_ = v___x_1818_;
v___y_1955_ = v___y_1999_;
v___y_1956_ = v___y_2000_;
v___y_1957_ = v___y_2001_;
v___y_1958_ = v___y_2002_;
goto v___jp_1952_;
}
else
{
lean_object* v___x_2032_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec_ref(v_config_1807_);
lean_inc(v_mvarId_1808_);
v___x_2032_ = l_Lean_MVarId_getType(v_mvarId_1808_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2033_);
lean_dec_ref_known(v___x_2032_, 1);
v___x_2034_ = l_Lean_LocalDecl_toExpr(v_val_1839_);
v___x_2035_ = l_Lean_Meta_mkEqOfHEq(v___x_2034_, v___x_1818_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v_a_2036_; lean_object* v___x_2037_; 
v_a_2036_ = lean_ctor_get(v___x_2035_, 0);
lean_inc(v_a_2036_);
lean_dec_ref_known(v___x_2035_, 1);
v___x_2037_ = l_Lean_Meta_mkNoConfusion(v_a_2033_, v_a_2036_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2039_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
lean_inc(v_a_2038_);
lean_dec_ref_known(v___x_2037_, 1);
v___x_2039_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1808_, v_a_2038_, v___y_2000_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2042_; 
lean_dec_ref_known(v___x_2039_, 1);
v___x_2040_ = lean_box(v___x_1818_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v___x_2040_);
v___x_2042_ = v___x_2023_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2044_; 
if (v_isShared_2014_ == 0)
{
lean_ctor_set(v___x_2013_, 1, v___x_1843_);
lean_ctor_set(v___x_2013_, 0, v___x_2042_);
v___x_2044_ = v___x_2013_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2045_, 1, v___x_1843_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
v_a_1825_ = v___x_2044_;
goto v___jp_1824_;
}
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_del_object(v___x_2023_);
lean_del_object(v___x_2013_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_2047_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2039_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2039_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
lean_del_object(v___x_2023_);
lean_del_object(v___x_2013_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2055_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2037_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2037_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec(v_a_2033_);
lean_del_object(v___x_2023_);
lean_del_object(v___x_2013_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2063_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2035_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2035_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_del_object(v___x_2023_);
lean_del_object(v___x_2013_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2071_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_2032_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2032_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2086_; 
lean_del_object(v___x_2023_);
lean_del_object(v___x_2013_);
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2079_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2081_ = v___x_2029_;
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_2029_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2084_; 
if (v_isShared_2082_ == 0)
{
v___x_2084_ = v___x_2081_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2079_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
else
{
lean_del_object(v___x_2023_);
lean_del_object(v___x_2013_);
lean_dec(v_fst_2010_);
lean_dec(v_fst_2008_);
v___y_1953_ = v_isEq_1998_;
v_isHEq_1954_ = v___x_1818_;
v___y_1955_ = v___y_1999_;
v___y_1956_ = v___y_2000_;
v___y_1957_ = v___y_2001_;
v___y_1958_ = v___y_2002_;
goto v___jp_1952_;
}
}
}
else
{
lean_dec(v_a_2019_);
lean_dec(v_val_2017_);
lean_del_object(v___x_2013_);
lean_dec(v_fst_2010_);
lean_dec(v_fst_2008_);
v___y_1953_ = v_isEq_1998_;
v_isHEq_1954_ = v___x_1818_;
v___y_1955_ = v___y_1999_;
v___y_1956_ = v___y_2000_;
v___y_1957_ = v___y_2001_;
v___y_1958_ = v___y_2002_;
goto v___jp_1952_;
}
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2095_; 
lean_dec(v_val_2017_);
lean_del_object(v___x_2013_);
lean_dec(v_fst_2010_);
lean_dec(v_fst_2008_);
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2088_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2090_ = v___x_2018_;
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_2018_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_a_2088_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
else
{
lean_dec(v_a_2016_);
lean_del_object(v___x_2013_);
lean_dec(v_snd_2011_);
lean_dec(v_fst_2010_);
lean_dec(v_fst_2008_);
v___y_1953_ = v_isEq_1998_;
v_isHEq_1954_ = v___x_1818_;
v___y_1955_ = v___y_1999_;
v___y_1956_ = v___y_2000_;
v___y_1957_ = v___y_2001_;
v___y_1958_ = v___y_2002_;
goto v___jp_1952_;
}
}
else
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2103_; 
lean_del_object(v___x_2013_);
lean_dec(v_snd_2011_);
lean_dec(v_fst_2010_);
lean_dec(v_fst_2008_);
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2096_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2098_ = v___x_2015_;
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2015_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2101_; 
if (v_isShared_2099_ == 0)
{
v___x_2101_ = v___x_2098_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_a_2096_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
}
}
else
{
lean_dec(v_a_2004_);
v___y_1953_ = v_isEq_1998_;
v_isHEq_1954_ = v___x_1871_;
v___y_1955_ = v___y_1999_;
v___y_1956_ = v___y_2000_;
v___y_1957_ = v___y_2001_;
v___y_1958_ = v___y_2002_;
goto v___jp_1952_;
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2105_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2003_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2003_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
v___jp_2113_:
{
lean_object* v___x_2118_; 
lean_inc_ref(v___x_1872_);
v___x_2118_ = l_Lean_Meta_matchEq_x3f(v___x_1872_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v___x_2118_, 1);
if (lean_obj_tag(v_a_2119_) == 1)
{
lean_object* v_val_2120_; lean_object* v_snd_2121_; lean_object* v_fst_2122_; lean_object* v_snd_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2195_; 
v_val_2120_ = lean_ctor_get(v_a_2119_, 0);
lean_inc(v_val_2120_);
lean_dec_ref_known(v_a_2119_, 1);
v_snd_2121_ = lean_ctor_get(v_val_2120_, 1);
lean_inc(v_snd_2121_);
lean_dec(v_val_2120_);
v_fst_2122_ = lean_ctor_get(v_snd_2121_, 0);
v_snd_2123_ = lean_ctor_get(v_snd_2121_, 1);
v_isSharedCheck_2195_ = !lean_is_exclusive(v_snd_2121_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2125_ = v_snd_2121_;
v_isShared_2126_ = v_isSharedCheck_2195_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_snd_2123_);
lean_inc(v_fst_2122_);
lean_dec(v_snd_2121_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2195_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; 
v___x_2127_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2122_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2127_, 1);
if (lean_obj_tag(v_a_2128_) == 1)
{
lean_object* v_val_2129_; lean_object* v___x_2130_; 
v_val_2129_ = lean_ctor_get(v_a_2128_, 0);
lean_inc(v_val_2129_);
lean_dec_ref_known(v_a_2128_, 1);
v___x_2130_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2123_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
if (lean_obj_tag(v_a_2131_) == 1)
{
lean_object* v_toConstantVal_2132_; lean_object* v_val_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2178_; 
v_toConstantVal_2132_ = lean_ctor_get(v_val_2129_, 0);
lean_inc_ref(v_toConstantVal_2132_);
lean_dec(v_val_2129_);
v_val_2133_ = lean_ctor_get(v_a_2131_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v_a_2131_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2135_ = v_a_2131_;
v_isShared_2136_ = v_isSharedCheck_2178_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_val_2133_);
lean_dec(v_a_2131_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2178_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v_toConstantVal_2137_; lean_object* v_name_2138_; lean_object* v_name_2139_; uint8_t v___x_2140_; 
v_toConstantVal_2137_ = lean_ctor_get(v_val_2133_, 0);
lean_inc_ref(v_toConstantVal_2137_);
lean_dec(v_val_2133_);
v_name_2138_ = lean_ctor_get(v_toConstantVal_2132_, 0);
lean_inc(v_name_2138_);
lean_dec_ref(v_toConstantVal_2132_);
v_name_2139_ = lean_ctor_get(v_toConstantVal_2137_, 0);
lean_inc(v_name_2139_);
lean_dec_ref(v_toConstantVal_2137_);
v___x_2140_ = lean_name_eq(v_name_2138_, v_name_2139_);
lean_dec(v_name_2139_);
lean_dec(v_name_2138_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2141_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec_ref(v_config_1807_);
lean_inc(v_mvarId_1808_);
v___x_2141_ = l_Lean_MVarId_getType(v_mvarId_1808_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2141_, 1);
v___x_2143_ = l_Lean_LocalDecl_toExpr(v_val_1839_);
v___x_2144_ = l_Lean_Meta_mkNoConfusion(v_a_2142_, v___x_2143_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v___x_2146_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_a_2145_);
lean_dec_ref_known(v___x_2144_, 1);
v___x_2146_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1808_, v_a_2145_, v___y_2115_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2149_; 
lean_dec_ref_known(v___x_2146_, 1);
v___x_2147_ = lean_box(v___x_1818_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 0, v___x_2147_);
v___x_2149_ = v___x_2135_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2147_);
v___x_2149_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
lean_object* v___x_2151_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 1, v___x_1843_);
lean_ctor_set(v___x_2125_, 0, v___x_2149_);
v___x_2151_ = v___x_2125_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2149_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v___x_1843_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
v_a_1825_ = v___x_2151_;
goto v___jp_1824_;
}
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_del_object(v___x_2135_);
lean_del_object(v___x_2125_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_2154_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2146_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2146_);
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
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
lean_del_object(v___x_2135_);
lean_del_object(v___x_2125_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2162_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2144_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2144_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
lean_del_object(v___x_2135_);
lean_del_object(v___x_2125_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2170_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2141_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2141_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
else
{
lean_del_object(v___x_2135_);
lean_del_object(v___x_2125_);
v_isEq_1998_ = v___x_1818_;
v___y_1999_ = v___y_2114_;
v___y_2000_ = v___y_2115_;
v___y_2001_ = v___y_2116_;
v___y_2002_ = v___y_2117_;
goto v___jp_1997_;
}
}
}
else
{
lean_dec(v_a_2131_);
lean_dec(v_val_2129_);
lean_del_object(v___x_2125_);
v_isEq_1998_ = v___x_1818_;
v___y_1999_ = v___y_2114_;
v___y_2000_ = v___y_2115_;
v___y_2001_ = v___y_2116_;
v___y_2002_ = v___y_2117_;
goto v___jp_1997_;
}
}
else
{
lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2186_; 
lean_dec(v_val_2129_);
lean_del_object(v___x_2125_);
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2179_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2181_ = v___x_2130_;
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2130_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2184_; 
if (v_isShared_2182_ == 0)
{
v___x_2184_ = v___x_2181_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2179_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
else
{
lean_dec(v_a_2128_);
lean_del_object(v___x_2125_);
lean_dec(v_snd_2123_);
v_isEq_1998_ = v___x_1818_;
v___y_1999_ = v___y_2114_;
v___y_2000_ = v___y_2115_;
v___y_2001_ = v___y_2116_;
v___y_2002_ = v___y_2117_;
goto v___jp_1997_;
}
}
else
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2194_; 
lean_del_object(v___x_2125_);
lean_dec(v_snd_2123_);
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2187_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2189_ = v___x_2127_;
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2127_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2187_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
}
}
else
{
lean_dec(v_a_2119_);
v_isEq_1998_ = v___x_1871_;
v___y_1999_ = v___y_2114_;
v___y_2000_ = v___y_2115_;
v___y_2001_ = v___y_2116_;
v___y_2002_ = v___y_2117_;
goto v___jp_1997_;
}
}
else
{
lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2203_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2196_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2198_ = v___x_2118_;
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v___x_2118_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2201_; 
if (v_isShared_2199_ == 0)
{
v___x_2201_ = v___x_2198_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_a_2196_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
}
v___jp_2204_:
{
lean_object* v___x_2209_; 
lean_inc_ref(v___x_1872_);
v___x_2209_ = l_Lean_refutableHasNotBit_x3f(v___x_1872_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2209_, 1);
if (lean_obj_tag(v_a_2210_) == 1)
{
lean_object* v_val_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2250_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec_ref(v_config_1807_);
v_val_2211_ = lean_ctor_get(v_a_2210_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v_a_2210_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2213_ = v_a_2210_;
v_isShared_2214_ = v_isSharedCheck_2250_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_val_2211_);
lean_dec(v_a_2210_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2250_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2215_; 
lean_inc(v_mvarId_1808_);
v___x_2215_ = l_Lean_MVarId_getType(v_mvarId_1808_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2215_) == 0)
{
lean_object* v_a_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v_a_2216_ = lean_ctor_get(v___x_2215_, 0);
lean_inc(v_a_2216_);
lean_dec_ref_known(v___x_2215_, 1);
v___x_2217_ = l_Lean_LocalDecl_toExpr(v_val_1839_);
v___x_2218_ = l_Lean_Meta_mkAbsurd(v_a_2216_, v_val_2211_, v___x_2217_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v___x_2220_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
lean_inc(v_a_2219_);
lean_dec_ref_known(v___x_2218_, 1);
v___x_2220_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1808_, v_a_2219_, v___y_2206_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v___x_2221_; lean_object* v___x_2223_; 
lean_dec_ref_known(v___x_2220_, 1);
v___x_2221_ = lean_box(v___x_1818_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v___x_2221_);
v___x_2223_ = v___x_2213_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v___x_2221_);
v___x_2223_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2223_);
lean_ctor_set(v___x_2224_, 1, v___x_1843_);
v_a_1825_ = v___x_2224_;
goto v___jp_1824_;
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
lean_del_object(v___x_2213_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_2226_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2220_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2220_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
lean_del_object(v___x_2213_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2234_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2218_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2218_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
else
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2249_; 
lean_del_object(v___x_2213_);
lean_dec(v_val_2211_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2242_ = lean_ctor_get(v___x_2215_, 0);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2215_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2244_ = v___x_2215_;
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2215_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
}
else
{
lean_object* v___x_2251_; 
lean_dec(v_a_2210_);
lean_inc_ref(v___x_1872_);
v___x_2251_ = l_Lean_Meta_matchNe_x3f(v___x_1872_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v_a_2252_; 
v_a_2252_ = lean_ctor_get(v___x_2251_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v___x_2251_, 1);
if (lean_obj_tag(v_a_2252_) == 1)
{
lean_object* v_val_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2322_; 
v_val_2253_ = lean_ctor_get(v_a_2252_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v_a_2252_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2255_ = v_a_2252_;
v_isShared_2256_ = v_isSharedCheck_2322_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_val_2253_);
lean_dec(v_a_2252_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2322_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v_snd_2257_; lean_object* v_fst_2258_; lean_object* v_snd_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2321_; 
v_snd_2257_ = lean_ctor_get(v_val_2253_, 1);
lean_inc(v_snd_2257_);
lean_dec(v_val_2253_);
v_fst_2258_ = lean_ctor_get(v_snd_2257_, 0);
v_snd_2259_ = lean_ctor_get(v_snd_2257_, 1);
v_isSharedCheck_2321_ = !lean_is_exclusive(v_snd_2257_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2261_ = v_snd_2257_;
v_isShared_2262_ = v_isSharedCheck_2321_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_snd_2259_);
lean_inc(v_fst_2258_);
lean_dec(v_snd_2257_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2321_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2263_; 
lean_inc(v_fst_2258_);
v___x_2263_ = l_Lean_Meta_isExprDefEq(v_fst_2258_, v_snd_2259_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; uint8_t v___x_2265_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2264_);
lean_dec_ref_known(v___x_2263_, 1);
v___x_2265_ = lean_unbox(v_a_2264_);
lean_dec(v_a_2264_);
if (v___x_2265_ == 0)
{
lean_del_object(v___x_2261_);
lean_dec(v_fst_2258_);
lean_del_object(v___x_2255_);
v___y_2114_ = v___y_2205_;
v___y_2115_ = v___y_2206_;
v___y_2116_ = v___y_2207_;
v___y_2117_ = v___y_2208_;
goto v___jp_2113_;
}
else
{
lean_object* v___x_2266_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec_ref(v_config_1807_);
lean_inc(v_mvarId_1808_);
v___x_2266_ = l_Lean_MVarId_getType(v_mvarId_1808_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2268_; 
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_a_2267_);
lean_dec_ref_known(v___x_2266_, 1);
v___x_2268_ = l_Lean_Meta_mkEqRefl(v_fst_2258_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2269_);
lean_dec_ref_known(v___x_2268_, 1);
v___x_2270_ = l_Lean_LocalDecl_toExpr(v_val_1839_);
v___x_2271_ = l_Lean_Meta_mkAbsurd(v_a_2267_, v_a_2269_, v___x_2270_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2273_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v___x_2273_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1808_, v_a_2272_, v___y_2206_);
if (lean_obj_tag(v___x_2273_) == 0)
{
lean_object* v___x_2274_; lean_object* v___x_2276_; 
lean_dec_ref_known(v___x_2273_, 1);
v___x_2274_ = lean_box(v___x_1818_);
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 0, v___x_2274_);
v___x_2276_ = v___x_2255_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v___x_2274_);
v___x_2276_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
lean_object* v___x_2278_; 
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 1, v___x_1843_);
lean_ctor_set(v___x_2261_, 0, v___x_2276_);
v___x_2278_ = v___x_2261_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v___x_2276_);
lean_ctor_set(v_reuseFailAlloc_2279_, 1, v___x_1843_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
v_a_1825_ = v___x_2278_;
goto v___jp_1824_;
}
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
lean_del_object(v___x_2261_);
lean_del_object(v___x_2255_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_2281_ = lean_ctor_get(v___x_2273_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2273_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2283_ = v___x_2273_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2273_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_a_2281_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
lean_del_object(v___x_2261_);
lean_del_object(v___x_2255_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2289_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2271_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2271_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
lean_dec(v_a_2267_);
lean_del_object(v___x_2261_);
lean_del_object(v___x_2255_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2297_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2268_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2268_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
else
{
lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_del_object(v___x_2261_);
lean_dec(v_fst_2258_);
lean_del_object(v___x_2255_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
v_a_2305_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2266_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_dec(v___x_2266_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
lean_del_object(v___x_2261_);
lean_dec(v_fst_2258_);
lean_del_object(v___x_2255_);
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2313_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2263_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2263_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2252_);
v___y_2114_ = v___y_2205_;
v___y_2115_ = v___y_2206_;
v___y_2116_ = v___y_2207_;
v___y_2117_ = v___y_2208_;
goto v___jp_2113_;
}
}
else
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2323_ = lean_ctor_get(v___x_2251_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2251_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___x_2251_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2251_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
}
else
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2338_; 
lean_dec_ref(v___x_1872_);
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_2331_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2333_ = v___x_2209_;
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_a_2331_);
lean_dec(v___x_2209_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2336_; 
if (v_isShared_2334_ == 0)
{
v___x_2336_ = v___x_2333_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2331_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
}
else
{
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_1833_ = v___x_1844_;
goto v___jp_1832_;
}
v___jp_1845_:
{
uint8_t v_emptyType_1852_; 
v_emptyType_1852_ = lean_ctor_get_uint8(v_config_1807_, sizeof(void*)*1 + 1);
if (v_emptyType_1852_ == 0)
{
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_1833_ = v___x_1844_;
goto v___jp_1832_;
}
else
{
if (v___y_1847_ == 0)
{
if (v___y_1846_ == 0)
{
lean_object* v_searchFuel_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v_searchFuel_1853_ = lean_ctor_get(v_config_1807_, 0);
v___x_1854_ = l_Lean_LocalDecl_fvarId(v_val_1839_);
lean_dec(v_val_1839_);
lean_inc(v_searchFuel_1853_);
lean_inc(v_mvarId_1808_);
v___x_1855_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1808_, v___x_1854_, v_searchFuel_1853_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; uint8_t v___x_1857_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1856_);
lean_dec_ref_known(v___x_1855_, 1);
v___x_1857_ = lean_unbox(v_a_1856_);
lean_dec(v_a_1856_);
if (v___x_1857_ == 0)
{
lean_del_object(v___x_1841_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_1833_ = v___x_1844_;
goto v___jp_1832_;
}
else
{
lean_object* v___x_1858_; lean_object* v___x_1860_; 
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v___x_1858_ = lean_box(v___x_1818_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 0, v___x_1858_);
v___x_1860_ = v___x_1841_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1858_);
v___x_1860_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1860_);
lean_ctor_set(v___x_1861_, 1, v___x_1843_);
v_a_1825_ = v___x_1861_;
goto v___jp_1824_;
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_del_object(v___x_1841_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
lean_dec(v_mvarId_1808_);
lean_dec_ref(v_config_1807_);
v_a_1863_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1855_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1855_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
}
else
{
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_1833_ = v___x_1844_;
goto v___jp_1832_;
}
}
else
{
lean_del_object(v___x_1841_);
lean_dec(v_val_1839_);
lean_del_object(v___x_1822_);
lean_dec(v_snd_1820_);
v_a_1833_ = v___x_1844_;
goto v___jp_1832_;
}
}
}
}
}
v___jp_1824_:
{
lean_object* v___x_1826_; lean_object* v___x_1828_; 
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v_a_1825_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 0, v___x_1826_);
v___x_1828_ = v___x_1822_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___x_1826_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_snd_1820_);
v___x_1828_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
return v___x_1829_;
}
}
v___jp_1832_:
{
lean_object* v___x_1834_; size_t v___x_1835_; size_t v___x_1836_; 
v___x_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1831_);
lean_ctor_set(v___x_1834_, 1, v_a_1833_);
v___x_1835_ = ((size_t)1ULL);
v___x_1836_ = lean_usize_add(v_i_1811_, v___x_1835_);
v_i_1811_ = v___x_1836_;
v_b_1812_ = v___x_1834_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object* v_config_2405_, lean_object* v_mvarId_2406_, lean_object* v_as_2407_, lean_object* v_sz_2408_, lean_object* v_i_2409_, lean_object* v_b_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
size_t v_sz_boxed_2416_; size_t v_i_boxed_2417_; lean_object* v_res_2418_; 
v_sz_boxed_2416_ = lean_unbox_usize(v_sz_2408_);
lean_dec(v_sz_2408_);
v_i_boxed_2417_ = lean_unbox_usize(v_i_2409_);
lean_dec(v_i_2409_);
v_res_2418_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2405_, v_mvarId_2406_, v_as_2407_, v_sz_boxed_2416_, v_i_boxed_2417_, v_b_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec_ref(v_as_2407_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object* v_config_2419_, lean_object* v_mvarId_2420_, lean_object* v_as_2421_, size_t v_sz_2422_, size_t v_i_2423_, lean_object* v_b_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
uint8_t v___x_2430_; 
v___x_2430_ = lean_usize_dec_lt(v_i_2423_, v_sz_2422_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; 
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v___x_2431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2431_, 0, v_b_2424_);
return v___x_2431_;
}
else
{
lean_object* v_snd_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_3015_; 
v_snd_2432_ = lean_ctor_get(v_b_2424_, 1);
v_isSharedCheck_3015_ = !lean_is_exclusive(v_b_2424_);
if (v_isSharedCheck_3015_ == 0)
{
lean_object* v_unused_3016_; 
v_unused_3016_ = lean_ctor_get(v_b_2424_, 0);
lean_dec(v_unused_3016_);
v___x_2434_ = v_b_2424_;
v_isShared_2435_ = v_isSharedCheck_3015_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_snd_2432_);
lean_dec(v_b_2424_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_3015_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v_a_2437_; lean_object* v___x_2443_; lean_object* v_a_2445_; lean_object* v_a_2450_; 
v___x_2443_ = lean_box(0);
v_a_2450_ = lean_array_uget(v_as_2421_, v_i_2423_);
if (lean_obj_tag(v_a_2450_) == 0)
{
lean_del_object(v___x_2434_);
v_a_2445_ = v_snd_2432_;
goto v___jp_2444_;
}
else
{
lean_object* v_val_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_3014_; 
v_val_2451_ = lean_ctor_get(v_a_2450_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v_a_2450_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_2453_ = v_a_2450_;
v_isShared_2454_ = v_isSharedCheck_3014_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_val_2451_);
lean_dec(v_a_2450_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_3014_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; uint8_t v___y_2458_; uint8_t v___y_2459_; lean_object* v___y_2460_; lean_object* v___y_2461_; lean_object* v___y_2462_; lean_object* v___y_2463_; uint8_t v___x_2483_; 
v___x_2455_ = lean_box(0);
v___x_2456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_2483_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2451_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; uint8_t v___y_2486_; uint8_t v___y_2487_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; uint8_t v___y_2512_; uint8_t v___y_2513_; lean_object* v___y_2514_; lean_object* v_a_2515_; lean_object* v___y_2521_; lean_object* v___y_2522_; lean_object* v___y_2523_; lean_object* v___y_2524_; uint8_t v___y_2525_; uint8_t v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; uint8_t v___y_2565_; uint8_t v_isHEq_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; uint8_t v_isEq_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2726_; lean_object* v___y_2727_; lean_object* v___y_2728_; lean_object* v___y_2729_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___x_2951_; 
v___x_2484_ = l_Lean_LocalDecl_type(v_val_2451_);
lean_inc_ref(v___x_2484_);
v___x_2951_ = l_Lean_Meta_matchNot_x3f(v___x_2484_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
lean_inc(v_a_2952_);
lean_dec_ref_known(v___x_2951_, 1);
if (lean_obj_tag(v_a_2952_) == 1)
{
lean_object* v_val_2953_; lean_object* v___x_2954_; 
v_val_2953_ = lean_ctor_get(v_a_2952_, 0);
lean_inc(v_val_2953_);
lean_dec_ref_known(v_a_2952_, 1);
v___x_2954_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_2953_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 1);
if (lean_obj_tag(v_a_2955_) == 1)
{
lean_object* v_val_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2997_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec_ref(v_config_2419_);
v_val_2956_ = lean_ctor_get(v_a_2955_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v_a_2955_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2958_ = v_a_2955_;
v_isShared_2959_ = v_isSharedCheck_2997_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_val_2956_);
lean_dec(v_a_2955_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2997_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2960_; 
lean_inc(v_mvarId_2420_);
v___x_2960_ = l_Lean_MVarId_getType(v_mvarId_2420_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v_a_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_a_2961_ = lean_ctor_get(v___x_2960_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v___x_2960_, 1);
v___x_2962_ = l_Lean_LocalDecl_toExpr(v_val_2451_);
v___x_2963_ = l_Lean_mkFVar(v_val_2956_);
v___x_2964_ = l_Lean_Expr_app___override(v___x_2962_, v___x_2963_);
v___x_2965_ = l_Lean_Meta_mkFalseElim(v_a_2961_, v___x_2964_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; lean_object* v___x_2967_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v___x_2965_, 1);
v___x_2967_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2420_, v_a_2966_, v___y_2426_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v___x_2968_; lean_object* v___x_2970_; 
lean_dec_ref_known(v___x_2967_, 1);
v___x_2968_ = lean_box(v___x_2430_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 0, v___x_2968_);
v___x_2970_ = v___x_2958_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2968_);
v___x_2970_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
lean_object* v___x_2971_; 
v___x_2971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
lean_ctor_set(v___x_2971_, 1, v___x_2455_);
v_a_2437_ = v___x_2971_;
goto v___jp_2436_;
}
}
else
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2980_; 
lean_del_object(v___x_2958_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2973_ = lean_ctor_get(v___x_2967_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2975_ = v___x_2967_;
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2967_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2978_; 
if (v_isShared_2976_ == 0)
{
v___x_2978_ = v___x_2975_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_a_2973_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
}
else
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
lean_del_object(v___x_2958_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2981_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2965_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2965_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
lean_del_object(v___x_2958_);
lean_dec(v_val_2956_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2989_ = lean_ctor_get(v___x_2960_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2960_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2960_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
}
else
{
lean_dec(v_a_2955_);
v___y_2817_ = v___y_2425_;
v___y_2818_ = v___y_2426_;
v___y_2819_ = v___y_2427_;
v___y_2820_ = v___y_2428_;
goto v___jp_2816_;
}
}
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2998_ = lean_ctor_get(v___x_2954_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2954_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2954_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
if (v_isShared_3001_ == 0)
{
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_a_2998_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
}
else
{
lean_dec(v_a_2952_);
v___y_2817_ = v___y_2425_;
v___y_2818_ = v___y_2426_;
v___y_2819_ = v___y_2427_;
v___y_2820_ = v___y_2428_;
goto v___jp_2816_;
}
}
else
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3013_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_3006_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_3008_ = v___x_2951_;
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_2951_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_a_3006_);
v___x_3011_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
return v___x_3011_;
}
}
}
v___jp_2485_:
{
uint8_t v_genDiseq_2492_; 
v_genDiseq_2492_ = lean_ctor_get_uint8(v_config_2419_, sizeof(void*)*1 + 2);
if (v_genDiseq_2492_ == 0)
{
lean_dec_ref(v___x_2484_);
v___y_2458_ = v___y_2487_;
v___y_2459_ = v___y_2486_;
v___y_2460_ = v___y_2488_;
v___y_2461_ = v___y_2489_;
v___y_2462_ = v___y_2490_;
v___y_2463_ = v___y_2491_;
goto v___jp_2457_;
}
else
{
uint8_t v___x_2493_; 
v___x_2493_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_2484_);
if (v___x_2493_ == 0)
{
v___y_2458_ = v___y_2487_;
v___y_2459_ = v___y_2486_;
v___y_2460_ = v___y_2488_;
v___y_2461_ = v___y_2489_;
v___y_2462_ = v___y_2490_;
v___y_2463_ = v___y_2491_;
goto v___jp_2457_;
}
else
{
lean_object* v___x_2494_; 
lean_inc(v_val_2451_);
lean_inc(v_mvarId_2420_);
v___x_2494_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_2420_, v_val_2451_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; uint8_t v___x_2496_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2495_);
lean_dec_ref_known(v___x_2494_, 1);
v___x_2496_ = lean_unbox(v_a_2495_);
lean_dec(v_a_2495_);
if (v___x_2496_ == 0)
{
v___y_2458_ = v___y_2487_;
v___y_2459_ = v___y_2486_;
v___y_2460_ = v___y_2488_;
v___y_2461_ = v___y_2489_;
v___y_2462_ = v___y_2490_;
v___y_2463_ = v___y_2491_;
goto v___jp_2457_;
}
else
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v___x_2497_ = lean_box(v___x_2430_);
v___x_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2497_);
v___x_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
lean_ctor_set(v___x_2499_, 1, v___x_2455_);
v_a_2437_ = v___x_2499_;
goto v___jp_2436_;
}
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2500_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2494_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2494_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
}
}
v___jp_2508_:
{
uint8_t v___x_2516_; 
v___x_2516_ = l_Lean_Exception_isInterrupt(v_a_2515_);
if (v___x_2516_ == 0)
{
uint8_t v___x_2517_; 
lean_inc_ref(v_a_2515_);
v___x_2517_ = l_Lean_Exception_isRuntime(v_a_2515_);
if (v___x_2517_ == 0)
{
lean_dec_ref(v_a_2515_);
v___y_2486_ = v___y_2513_;
v___y_2487_ = v___y_2512_;
v___y_2488_ = v___y_2511_;
v___y_2489_ = v___y_2514_;
v___y_2490_ = v___y_2509_;
v___y_2491_ = v___y_2510_;
goto v___jp_2485_;
}
else
{
lean_object* v___x_2518_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v___x_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2518_, 0, v_a_2515_);
return v___x_2518_;
}
}
else
{
lean_object* v___x_2519_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v___x_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2519_, 0, v_a_2515_);
return v___x_2519_;
}
}
v___jp_2520_:
{
if (lean_obj_tag(v___y_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v___x_2530_; uint8_t v___x_2531_; 
v_a_2529_ = lean_ctor_get(v___y_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___y_2528_, 1);
v___x_2530_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_2531_ = l_Lean_Expr_isConstOf(v_a_2529_, v___x_2530_);
lean_dec(v_a_2529_);
if (v___x_2531_ == 0)
{
lean_dec_ref(v___y_2523_);
v___y_2486_ = v___y_2526_;
v___y_2487_ = v___y_2525_;
v___y_2488_ = v___y_2524_;
v___y_2489_ = v___y_2527_;
v___y_2490_ = v___y_2521_;
v___y_2491_ = v___y_2522_;
goto v___jp_2485_;
}
else
{
lean_object* v___x_2532_; 
lean_inc_ref(v___y_2523_);
v___x_2532_ = l_Lean_Meta_mkEqRefl(v___y_2523_, v___y_2524_, v___y_2527_, v___y_2521_, v___y_2522_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2534_; lean_object* v_dummy_2535_; lean_object* v_nargs_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2534_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_2535_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_2536_ = l_Lean_Expr_getAppNumArgs(v___y_2523_);
lean_inc(v_nargs_2536_);
v___x_2537_ = lean_mk_array(v_nargs_2536_, v_dummy_2535_);
v___x_2538_ = lean_unsigned_to_nat(1u);
v___x_2539_ = lean_nat_sub(v_nargs_2536_, v___x_2538_);
lean_dec(v_nargs_2536_);
v___x_2540_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_2523_, v___x_2537_, v___x_2539_);
v___x_2541_ = lean_array_push(v___x_2540_, v_a_2533_);
v___x_2542_ = l_Lean_mkAppN(v___x_2534_, v___x_2541_);
lean_dec_ref(v___x_2541_);
lean_inc(v_mvarId_2420_);
v___x_2543_ = l_Lean_MVarId_getType(v_mvarId_2420_, v___y_2524_, v___y_2527_, v___y_2521_, v___y_2522_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2544_);
lean_dec_ref_known(v___x_2543_, 1);
lean_inc(v_val_2451_);
v___x_2545_ = l_Lean_LocalDecl_toExpr(v_val_2451_);
v___x_2546_ = l_Lean_Meta_mkAbsurd(v_a_2544_, v___x_2545_, v___x_2542_, v___y_2524_, v___y_2527_, v___y_2521_, v___y_2522_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2548_; 
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_a_2547_);
lean_dec_ref_known(v___x_2546_, 1);
lean_inc(v_mvarId_2420_);
v___x_2548_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2420_, v_a_2547_, v___y_2527_);
if (lean_obj_tag(v___x_2548_) == 0)
{
lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2557_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2557_ == 0)
{
lean_object* v_unused_2558_; 
v_unused_2558_ = lean_ctor_get(v___x_2548_, 0);
lean_dec(v_unused_2558_);
v___x_2550_ = v___x_2548_;
v_isShared_2551_ = v_isSharedCheck_2557_;
goto v_resetjp_2549_;
}
else
{
lean_dec(v___x_2548_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2557_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2552_; lean_object* v___x_2554_; 
v___x_2552_ = lean_box(v___x_2430_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set_tag(v___x_2550_, 1);
lean_ctor_set(v___x_2550_, 0, v___x_2552_);
v___x_2554_ = v___x_2550_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v___x_2552_);
v___x_2554_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2554_);
lean_ctor_set(v___x_2555_, 1, v___x_2455_);
v_a_2437_ = v___x_2555_;
goto v___jp_2436_;
}
}
}
else
{
lean_object* v_a_2559_; 
v_a_2559_ = lean_ctor_get(v___x_2548_, 0);
lean_inc(v_a_2559_);
lean_dec_ref_known(v___x_2548_, 1);
v___y_2509_ = v___y_2521_;
v___y_2510_ = v___y_2522_;
v___y_2511_ = v___y_2524_;
v___y_2512_ = v___y_2525_;
v___y_2513_ = v___y_2526_;
v___y_2514_ = v___y_2527_;
v_a_2515_ = v_a_2559_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_2560_; 
v_a_2560_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2546_, 1);
v___y_2509_ = v___y_2521_;
v___y_2510_ = v___y_2522_;
v___y_2511_ = v___y_2524_;
v___y_2512_ = v___y_2525_;
v___y_2513_ = v___y_2526_;
v___y_2514_ = v___y_2527_;
v_a_2515_ = v_a_2560_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_2561_; 
lean_dec_ref(v___x_2542_);
v_a_2561_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2561_);
lean_dec_ref_known(v___x_2543_, 1);
v___y_2509_ = v___y_2521_;
v___y_2510_ = v___y_2522_;
v___y_2511_ = v___y_2524_;
v___y_2512_ = v___y_2525_;
v___y_2513_ = v___y_2526_;
v___y_2514_ = v___y_2527_;
v_a_2515_ = v_a_2561_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_2562_; 
lean_dec_ref(v___y_2523_);
v_a_2562_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2562_);
lean_dec_ref_known(v___x_2532_, 1);
v___y_2509_ = v___y_2521_;
v___y_2510_ = v___y_2522_;
v___y_2511_ = v___y_2524_;
v___y_2512_ = v___y_2525_;
v___y_2513_ = v___y_2526_;
v___y_2514_ = v___y_2527_;
v_a_2515_ = v_a_2562_;
goto v___jp_2508_;
}
}
}
else
{
lean_object* v_a_2563_; 
lean_dec_ref(v___y_2523_);
v_a_2563_ = lean_ctor_get(v___y_2528_, 0);
lean_inc(v_a_2563_);
lean_dec_ref_known(v___y_2528_, 1);
v___y_2509_ = v___y_2521_;
v___y_2510_ = v___y_2522_;
v___y_2511_ = v___y_2524_;
v___y_2512_ = v___y_2525_;
v___y_2513_ = v___y_2526_;
v___y_2514_ = v___y_2527_;
v_a_2515_ = v_a_2563_;
goto v___jp_2508_;
}
}
v___jp_2564_:
{
uint8_t v_useDecide_2571_; 
v_useDecide_2571_ = lean_ctor_get_uint8(v_config_2419_, sizeof(void*)*1);
if (v_useDecide_2571_ == 0)
{
v___y_2486_ = v___y_2565_;
v___y_2487_ = v_isHEq_2566_;
v___y_2488_ = v___y_2567_;
v___y_2489_ = v___y_2568_;
v___y_2490_ = v___y_2569_;
v___y_2491_ = v___y_2570_;
goto v___jp_2485_;
}
else
{
uint8_t v___x_2572_; 
v___x_2572_ = l_Lean_Expr_hasFVar(v___x_2484_);
if (v___x_2572_ == 0)
{
lean_object* v___x_2573_; 
lean_inc_ref(v___x_2484_);
v___x_2573_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_2484_, v___y_2568_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; uint8_t v___x_2575_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___x_2573_, 1);
v___x_2575_ = l_Lean_Expr_hasMVar(v_a_2574_);
if (v___x_2575_ == 0)
{
uint8_t v___x_2576_; 
v___x_2576_ = l_Lean_Expr_hasFVar(v_a_2574_);
lean_dec(v_a_2574_);
if (v___x_2576_ == 0)
{
lean_object* v___x_2577_; 
lean_inc_ref(v___x_2484_);
v___x_2577_ = l_Lean_Meta_mkDecide(v___x_2484_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; lean_object* v___x_2579_; uint8_t v_transparency_2580_; uint8_t v___x_2581_; uint8_t v___x_2582_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
lean_dec_ref_known(v___x_2577_, 1);
v___x_2579_ = l_Lean_Meta_Context_config(v___y_2567_);
v_transparency_2580_ = lean_ctor_get_uint8(v___x_2579_, 9);
lean_dec_ref(v___x_2579_);
v___x_2581_ = 1;
v___x_2582_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2580_, v___x_2581_);
if (v___x_2582_ == 0)
{
lean_object* v_keyedConfig_2583_; uint8_t v_trackZetaDelta_2584_; lean_object* v_zetaDeltaSet_2585_; lean_object* v_lctx_2586_; lean_object* v_localInstances_2587_; lean_object* v_defEqCtx_x3f_2588_; lean_object* v_synthPendingDepth_2589_; lean_object* v_customCanUnfoldPredicate_x3f_2590_; uint8_t v_univApprox_2591_; uint8_t v_inTypeClassResolution_2592_; uint8_t v_cacheInferType_2593_; lean_object* v_rewriteSet_x3f_2594_; uint8_t v_rewriteFuelScope_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v_keyedConfig_2583_ = lean_ctor_get(v___y_2567_, 0);
v_trackZetaDelta_2584_ = lean_ctor_get_uint8(v___y_2567_, sizeof(void*)*8);
v_zetaDeltaSet_2585_ = lean_ctor_get(v___y_2567_, 1);
v_lctx_2586_ = lean_ctor_get(v___y_2567_, 2);
v_localInstances_2587_ = lean_ctor_get(v___y_2567_, 3);
v_defEqCtx_x3f_2588_ = lean_ctor_get(v___y_2567_, 4);
v_synthPendingDepth_2589_ = lean_ctor_get(v___y_2567_, 5);
v_customCanUnfoldPredicate_x3f_2590_ = lean_ctor_get(v___y_2567_, 6);
v_univApprox_2591_ = lean_ctor_get_uint8(v___y_2567_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_2592_ = lean_ctor_get_uint8(v___y_2567_, sizeof(void*)*8 + 2);
v_cacheInferType_2593_ = lean_ctor_get_uint8(v___y_2567_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_2594_ = lean_ctor_get(v___y_2567_, 7);
v_rewriteFuelScope_2595_ = lean_ctor_get_uint8(v___y_2567_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_2583_);
v___x_2596_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2581_, v_keyedConfig_2583_);
lean_inc(v_rewriteSet_x3f_2594_);
lean_inc(v_customCanUnfoldPredicate_x3f_2590_);
lean_inc(v_synthPendingDepth_2589_);
lean_inc(v_defEqCtx_x3f_2588_);
lean_inc_ref(v_localInstances_2587_);
lean_inc_ref(v_lctx_2586_);
lean_inc(v_zetaDeltaSet_2585_);
v___x_2597_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
lean_ctor_set(v___x_2597_, 1, v_zetaDeltaSet_2585_);
lean_ctor_set(v___x_2597_, 2, v_lctx_2586_);
lean_ctor_set(v___x_2597_, 3, v_localInstances_2587_);
lean_ctor_set(v___x_2597_, 4, v_defEqCtx_x3f_2588_);
lean_ctor_set(v___x_2597_, 5, v_synthPendingDepth_2589_);
lean_ctor_set(v___x_2597_, 6, v_customCanUnfoldPredicate_x3f_2590_);
lean_ctor_set(v___x_2597_, 7, v_rewriteSet_x3f_2594_);
lean_ctor_set_uint8(v___x_2597_, sizeof(void*)*8, v_trackZetaDelta_2584_);
lean_ctor_set_uint8(v___x_2597_, sizeof(void*)*8 + 1, v_univApprox_2591_);
lean_ctor_set_uint8(v___x_2597_, sizeof(void*)*8 + 2, v_inTypeClassResolution_2592_);
lean_ctor_set_uint8(v___x_2597_, sizeof(void*)*8 + 3, v_cacheInferType_2593_);
lean_ctor_set_uint8(v___x_2597_, sizeof(void*)*8 + 4, v_rewriteFuelScope_2595_);
lean_inc(v___y_2570_);
lean_inc_ref(v___y_2569_);
lean_inc(v___y_2568_);
lean_inc(v_a_2578_);
v___x_2598_ = lean_whnf(v_a_2578_, v___x_2597_, v___y_2568_, v___y_2569_, v___y_2570_);
v___y_2521_ = v___y_2569_;
v___y_2522_ = v___y_2570_;
v___y_2523_ = v_a_2578_;
v___y_2524_ = v___y_2567_;
v___y_2525_ = v_isHEq_2566_;
v___y_2526_ = v___y_2565_;
v___y_2527_ = v___y_2568_;
v___y_2528_ = v___x_2598_;
goto v___jp_2520_;
}
else
{
lean_object* v___x_2599_; 
lean_inc(v___y_2570_);
lean_inc_ref(v___y_2569_);
lean_inc(v___y_2568_);
lean_inc_ref(v___y_2567_);
lean_inc(v_a_2578_);
v___x_2599_ = lean_whnf(v_a_2578_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
v___y_2521_ = v___y_2569_;
v___y_2522_ = v___y_2570_;
v___y_2523_ = v_a_2578_;
v___y_2524_ = v___y_2567_;
v___y_2525_ = v_isHEq_2566_;
v___y_2526_ = v___y_2565_;
v___y_2527_ = v___y_2568_;
v___y_2528_ = v___x_2599_;
goto v___jp_2520_;
}
}
else
{
lean_object* v_a_2600_; 
v_a_2600_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2600_);
lean_dec_ref_known(v___x_2577_, 1);
v___y_2509_ = v___y_2569_;
v___y_2510_ = v___y_2570_;
v___y_2511_ = v___y_2567_;
v___y_2512_ = v_isHEq_2566_;
v___y_2513_ = v___y_2565_;
v___y_2514_ = v___y_2568_;
v_a_2515_ = v_a_2600_;
goto v___jp_2508_;
}
}
else
{
v___y_2486_ = v___y_2565_;
v___y_2487_ = v_isHEq_2566_;
v___y_2488_ = v___y_2567_;
v___y_2489_ = v___y_2568_;
v___y_2490_ = v___y_2569_;
v___y_2491_ = v___y_2570_;
goto v___jp_2485_;
}
}
else
{
lean_dec(v_a_2574_);
v___y_2486_ = v___y_2565_;
v___y_2487_ = v_isHEq_2566_;
v___y_2488_ = v___y_2567_;
v___y_2489_ = v___y_2568_;
v___y_2490_ = v___y_2569_;
v___y_2491_ = v___y_2570_;
goto v___jp_2485_;
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2601_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2573_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2573_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
else
{
v___y_2486_ = v___y_2565_;
v___y_2487_ = v_isHEq_2566_;
v___y_2488_ = v___y_2567_;
v___y_2489_ = v___y_2568_;
v___y_2490_ = v___y_2569_;
v___y_2491_ = v___y_2570_;
goto v___jp_2485_;
}
}
}
v___jp_2609_:
{
lean_object* v___x_2615_; 
lean_inc_ref(v___x_2484_);
v___x_2615_ = l_Lean_Meta_matchHEq_x3f(v___x_2484_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
if (lean_obj_tag(v_a_2616_) == 1)
{
lean_object* v_val_2617_; lean_object* v_snd_2618_; lean_object* v_snd_2619_; lean_object* v_fst_2620_; lean_object* v_fst_2621_; lean_object* v_fst_2622_; lean_object* v_snd_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2716_; 
v_val_2617_ = lean_ctor_get(v_a_2616_, 0);
lean_inc(v_val_2617_);
lean_dec_ref_known(v_a_2616_, 1);
v_snd_2618_ = lean_ctor_get(v_val_2617_, 1);
lean_inc(v_snd_2618_);
v_snd_2619_ = lean_ctor_get(v_snd_2618_, 1);
lean_inc(v_snd_2619_);
v_fst_2620_ = lean_ctor_get(v_val_2617_, 0);
lean_inc(v_fst_2620_);
lean_dec(v_val_2617_);
v_fst_2621_ = lean_ctor_get(v_snd_2618_, 0);
lean_inc(v_fst_2621_);
lean_dec(v_snd_2618_);
v_fst_2622_ = lean_ctor_get(v_snd_2619_, 0);
v_snd_2623_ = lean_ctor_get(v_snd_2619_, 1);
v_isSharedCheck_2716_ = !lean_is_exclusive(v_snd_2619_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2625_ = v_snd_2619_;
v_isShared_2626_ = v_isSharedCheck_2716_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_snd_2623_);
lean_inc(v_fst_2622_);
lean_dec(v_snd_2619_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2716_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2627_; 
v___x_2627_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2621_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; 
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___x_2627_, 1);
if (lean_obj_tag(v_a_2628_) == 1)
{
lean_object* v_val_2629_; lean_object* v___x_2630_; 
v_val_2629_ = lean_ctor_get(v_a_2628_, 0);
lean_inc(v_val_2629_);
lean_dec_ref_known(v_a_2628_, 1);
v___x_2630_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2623_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v_a_2631_; 
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
lean_inc(v_a_2631_);
lean_dec_ref_known(v___x_2630_, 1);
if (lean_obj_tag(v_a_2631_) == 1)
{
lean_object* v_toConstantVal_2632_; lean_object* v_val_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2699_; 
v_toConstantVal_2632_ = lean_ctor_get(v_val_2629_, 0);
lean_inc_ref(v_toConstantVal_2632_);
lean_dec(v_val_2629_);
v_val_2633_ = lean_ctor_get(v_a_2631_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v_a_2631_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2635_ = v_a_2631_;
v_isShared_2636_ = v_isSharedCheck_2699_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_val_2633_);
lean_dec(v_a_2631_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2699_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v_toConstantVal_2637_; lean_object* v_name_2638_; lean_object* v_name_2639_; uint8_t v___x_2640_; 
v_toConstantVal_2637_ = lean_ctor_get(v_val_2633_, 0);
lean_inc_ref(v_toConstantVal_2637_);
lean_dec(v_val_2633_);
v_name_2638_ = lean_ctor_get(v_toConstantVal_2632_, 0);
lean_inc(v_name_2638_);
lean_dec_ref(v_toConstantVal_2632_);
v_name_2639_ = lean_ctor_get(v_toConstantVal_2637_, 0);
lean_inc(v_name_2639_);
lean_dec_ref(v_toConstantVal_2637_);
v___x_2640_ = lean_name_eq(v_name_2638_, v_name_2639_);
lean_dec(v_name_2639_);
lean_dec(v_name_2638_);
if (v___x_2640_ == 0)
{
lean_object* v___x_2641_; 
v___x_2641_ = l_Lean_Meta_isExprDefEq(v_fst_2620_, v_fst_2622_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; uint8_t v___x_2643_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2642_);
lean_dec_ref_known(v___x_2641_, 1);
v___x_2643_ = lean_unbox(v_a_2642_);
lean_dec(v_a_2642_);
if (v___x_2643_ == 0)
{
lean_del_object(v___x_2635_);
lean_del_object(v___x_2625_);
v___y_2565_ = v_isEq_2610_;
v_isHEq_2566_ = v___x_2430_;
v___y_2567_ = v___y_2611_;
v___y_2568_ = v___y_2612_;
v___y_2569_ = v___y_2613_;
v___y_2570_ = v___y_2614_;
goto v___jp_2564_;
}
else
{
lean_object* v___x_2644_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec_ref(v_config_2419_);
lean_inc(v_mvarId_2420_);
v___x_2644_ = l_Lean_MVarId_getType(v_mvarId_2420_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2646_ = l_Lean_LocalDecl_toExpr(v_val_2451_);
v___x_2647_ = l_Lean_Meta_mkEqOfHEq(v___x_2646_, v___x_2430_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2649_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2647_, 1);
v___x_2649_ = l_Lean_Meta_mkNoConfusion(v_a_2645_, v_a_2648_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2651_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2649_, 1);
v___x_2651_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2420_, v_a_2650_, v___y_2612_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v___x_2652_; lean_object* v___x_2654_; 
lean_dec_ref_known(v___x_2651_, 1);
v___x_2652_ = lean_box(v___x_2430_);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 0, v___x_2652_);
v___x_2654_ = v___x_2635_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___x_2652_);
v___x_2654_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
lean_object* v___x_2656_; 
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 1, v___x_2455_);
lean_ctor_set(v___x_2625_, 0, v___x_2654_);
v___x_2656_ = v___x_2625_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v___x_2654_);
lean_ctor_set(v_reuseFailAlloc_2657_, 1, v___x_2455_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
v_a_2437_ = v___x_2656_;
goto v___jp_2436_;
}
}
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
lean_del_object(v___x_2635_);
lean_del_object(v___x_2625_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2659_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2651_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2651_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
lean_del_object(v___x_2635_);
lean_del_object(v___x_2625_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2667_ = lean_ctor_get(v___x_2649_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2649_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2649_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
lean_dec(v_a_2645_);
lean_del_object(v___x_2635_);
lean_del_object(v___x_2625_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2675_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2647_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2647_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
return v___x_2680_;
}
}
}
}
else
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
lean_del_object(v___x_2635_);
lean_del_object(v___x_2625_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2683_ = lean_ctor_get(v___x_2644_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2644_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2644_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
}
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_del_object(v___x_2635_);
lean_del_object(v___x_2625_);
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2691_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2641_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2641_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
else
{
lean_del_object(v___x_2635_);
lean_del_object(v___x_2625_);
lean_dec(v_fst_2622_);
lean_dec(v_fst_2620_);
v___y_2565_ = v_isEq_2610_;
v_isHEq_2566_ = v___x_2430_;
v___y_2567_ = v___y_2611_;
v___y_2568_ = v___y_2612_;
v___y_2569_ = v___y_2613_;
v___y_2570_ = v___y_2614_;
goto v___jp_2564_;
}
}
}
else
{
lean_dec(v_a_2631_);
lean_dec(v_val_2629_);
lean_del_object(v___x_2625_);
lean_dec(v_fst_2622_);
lean_dec(v_fst_2620_);
v___y_2565_ = v_isEq_2610_;
v_isHEq_2566_ = v___x_2430_;
v___y_2567_ = v___y_2611_;
v___y_2568_ = v___y_2612_;
v___y_2569_ = v___y_2613_;
v___y_2570_ = v___y_2614_;
goto v___jp_2564_;
}
}
else
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2707_; 
lean_dec(v_val_2629_);
lean_del_object(v___x_2625_);
lean_dec(v_fst_2622_);
lean_dec(v_fst_2620_);
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2700_ = lean_ctor_get(v___x_2630_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2702_ = v___x_2630_;
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v___x_2630_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2705_; 
if (v_isShared_2703_ == 0)
{
v___x_2705_ = v___x_2702_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_a_2700_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
}
else
{
lean_dec(v_a_2628_);
lean_del_object(v___x_2625_);
lean_dec(v_snd_2623_);
lean_dec(v_fst_2622_);
lean_dec(v_fst_2620_);
v___y_2565_ = v_isEq_2610_;
v_isHEq_2566_ = v___x_2430_;
v___y_2567_ = v___y_2611_;
v___y_2568_ = v___y_2612_;
v___y_2569_ = v___y_2613_;
v___y_2570_ = v___y_2614_;
goto v___jp_2564_;
}
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_del_object(v___x_2625_);
lean_dec(v_snd_2623_);
lean_dec(v_fst_2622_);
lean_dec(v_fst_2620_);
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2708_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2627_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2627_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
else
{
lean_dec(v_a_2616_);
v___y_2565_ = v_isEq_2610_;
v_isHEq_2566_ = v___x_2483_;
v___y_2567_ = v___y_2611_;
v___y_2568_ = v___y_2612_;
v___y_2569_ = v___y_2613_;
v___y_2570_ = v___y_2614_;
goto v___jp_2564_;
}
}
else
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2717_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2615_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2615_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
v___jp_2725_:
{
lean_object* v___x_2730_; 
lean_inc_ref(v___x_2484_);
v___x_2730_ = l_Lean_Meta_matchEq_x3f(v___x_2484_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; 
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_a_2731_);
lean_dec_ref_known(v___x_2730_, 1);
if (lean_obj_tag(v_a_2731_) == 1)
{
lean_object* v_val_2732_; lean_object* v_snd_2733_; lean_object* v_fst_2734_; lean_object* v_snd_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2807_; 
v_val_2732_ = lean_ctor_get(v_a_2731_, 0);
lean_inc(v_val_2732_);
lean_dec_ref_known(v_a_2731_, 1);
v_snd_2733_ = lean_ctor_get(v_val_2732_, 1);
lean_inc(v_snd_2733_);
lean_dec(v_val_2732_);
v_fst_2734_ = lean_ctor_get(v_snd_2733_, 0);
v_snd_2735_ = lean_ctor_get(v_snd_2733_, 1);
v_isSharedCheck_2807_ = !lean_is_exclusive(v_snd_2733_);
if (v_isSharedCheck_2807_ == 0)
{
v___x_2737_ = v_snd_2733_;
v_isShared_2738_ = v_isSharedCheck_2807_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_snd_2735_);
lean_inc(v_fst_2734_);
lean_dec(v_snd_2733_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2807_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2739_; 
v___x_2739_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2734_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
if (lean_obj_tag(v_a_2740_) == 1)
{
lean_object* v_val_2741_; lean_object* v___x_2742_; 
v_val_2741_ = lean_ctor_get(v_a_2740_, 0);
lean_inc(v_val_2741_);
lean_dec_ref_known(v_a_2740_, 1);
v___x_2742_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2735_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v_a_2743_; 
v_a_2743_ = lean_ctor_get(v___x_2742_, 0);
lean_inc(v_a_2743_);
lean_dec_ref_known(v___x_2742_, 1);
if (lean_obj_tag(v_a_2743_) == 1)
{
lean_object* v_toConstantVal_2744_; lean_object* v_val_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2790_; 
v_toConstantVal_2744_ = lean_ctor_get(v_val_2741_, 0);
lean_inc_ref(v_toConstantVal_2744_);
lean_dec(v_val_2741_);
v_val_2745_ = lean_ctor_get(v_a_2743_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v_a_2743_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2747_ = v_a_2743_;
v_isShared_2748_ = v_isSharedCheck_2790_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_val_2745_);
lean_dec(v_a_2743_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2790_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v_toConstantVal_2749_; lean_object* v_name_2750_; lean_object* v_name_2751_; uint8_t v___x_2752_; 
v_toConstantVal_2749_ = lean_ctor_get(v_val_2745_, 0);
lean_inc_ref(v_toConstantVal_2749_);
lean_dec(v_val_2745_);
v_name_2750_ = lean_ctor_get(v_toConstantVal_2744_, 0);
lean_inc(v_name_2750_);
lean_dec_ref(v_toConstantVal_2744_);
v_name_2751_ = lean_ctor_get(v_toConstantVal_2749_, 0);
lean_inc(v_name_2751_);
lean_dec_ref(v_toConstantVal_2749_);
v___x_2752_ = lean_name_eq(v_name_2750_, v_name_2751_);
lean_dec(v_name_2751_);
lean_dec(v_name_2750_);
if (v___x_2752_ == 0)
{
lean_object* v___x_2753_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec_ref(v_config_2419_);
lean_inc(v_mvarId_2420_);
v___x_2753_ = l_Lean_MVarId_getType(v_mvarId_2420_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2753_, 1);
v___x_2755_ = l_Lean_LocalDecl_toExpr(v_val_2451_);
v___x_2756_ = l_Lean_Meta_mkNoConfusion(v_a_2754_, v___x_2755_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_object* v_a_2757_; lean_object* v___x_2758_; 
v_a_2757_ = lean_ctor_get(v___x_2756_, 0);
lean_inc(v_a_2757_);
lean_dec_ref_known(v___x_2756_, 1);
v___x_2758_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2420_, v_a_2757_, v___y_2727_);
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_object* v___x_2759_; lean_object* v___x_2761_; 
lean_dec_ref_known(v___x_2758_, 1);
v___x_2759_ = lean_box(v___x_2430_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 0, v___x_2759_);
v___x_2761_ = v___x_2747_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v___x_2759_);
v___x_2761_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
lean_object* v___x_2763_; 
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 1, v___x_2455_);
lean_ctor_set(v___x_2737_, 0, v___x_2761_);
v___x_2763_ = v___x_2737_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v___x_2761_);
lean_ctor_set(v_reuseFailAlloc_2764_, 1, v___x_2455_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
v_a_2437_ = v___x_2763_;
goto v___jp_2436_;
}
}
}
else
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2773_; 
lean_del_object(v___x_2747_);
lean_del_object(v___x_2737_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2766_ = lean_ctor_get(v___x_2758_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2768_ = v___x_2758_;
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2758_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2766_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_del_object(v___x_2747_);
lean_del_object(v___x_2737_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2774_ = lean_ctor_get(v___x_2756_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2756_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2756_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_del_object(v___x_2747_);
lean_del_object(v___x_2737_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2782_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2753_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2753_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
else
{
lean_del_object(v___x_2747_);
lean_del_object(v___x_2737_);
v_isEq_2610_ = v___x_2430_;
v___y_2611_ = v___y_2726_;
v___y_2612_ = v___y_2727_;
v___y_2613_ = v___y_2728_;
v___y_2614_ = v___y_2729_;
goto v___jp_2609_;
}
}
}
else
{
lean_dec(v_a_2743_);
lean_dec(v_val_2741_);
lean_del_object(v___x_2737_);
v_isEq_2610_ = v___x_2430_;
v___y_2611_ = v___y_2726_;
v___y_2612_ = v___y_2727_;
v___y_2613_ = v___y_2728_;
v___y_2614_ = v___y_2729_;
goto v___jp_2609_;
}
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2798_; 
lean_dec(v_val_2741_);
lean_del_object(v___x_2737_);
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2791_ = lean_ctor_get(v___x_2742_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2793_ = v___x_2742_;
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2742_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2796_; 
if (v_isShared_2794_ == 0)
{
v___x_2796_ = v___x_2793_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_a_2791_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
}
}
else
{
lean_dec(v_a_2740_);
lean_del_object(v___x_2737_);
lean_dec(v_snd_2735_);
v_isEq_2610_ = v___x_2430_;
v___y_2611_ = v___y_2726_;
v___y_2612_ = v___y_2727_;
v___y_2613_ = v___y_2728_;
v___y_2614_ = v___y_2729_;
goto v___jp_2609_;
}
}
else
{
lean_object* v_a_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2806_; 
lean_del_object(v___x_2737_);
lean_dec(v_snd_2735_);
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2799_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2801_ = v___x_2739_;
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_a_2799_);
lean_dec(v___x_2739_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2806_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2804_; 
if (v_isShared_2802_ == 0)
{
v___x_2804_ = v___x_2801_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2799_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
return v___x_2804_;
}
}
}
}
}
else
{
lean_dec(v_a_2731_);
v_isEq_2610_ = v___x_2483_;
v___y_2611_ = v___y_2726_;
v___y_2612_ = v___y_2727_;
v___y_2613_ = v___y_2728_;
v___y_2614_ = v___y_2729_;
goto v___jp_2609_;
}
}
else
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2808_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2730_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2730_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2813_; 
if (v_isShared_2811_ == 0)
{
v___x_2813_ = v___x_2810_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2808_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
v___jp_2816_:
{
lean_object* v___x_2821_; 
lean_inc_ref(v___x_2484_);
v___x_2821_ = l_Lean_refutableHasNotBit_x3f(v___x_2484_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2822_);
lean_dec_ref_known(v___x_2821_, 1);
if (lean_obj_tag(v_a_2822_) == 1)
{
lean_object* v_val_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2862_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec_ref(v_config_2419_);
v_val_2823_ = lean_ctor_get(v_a_2822_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v_a_2822_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2825_ = v_a_2822_;
v_isShared_2826_ = v_isSharedCheck_2862_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_val_2823_);
lean_dec(v_a_2822_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2862_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2827_; 
lean_inc(v_mvarId_2420_);
v___x_2827_ = l_Lean_MVarId_getType(v_mvarId_2420_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2827_) == 0)
{
lean_object* v_a_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; 
v_a_2828_ = lean_ctor_get(v___x_2827_, 0);
lean_inc(v_a_2828_);
lean_dec_ref_known(v___x_2827_, 1);
v___x_2829_ = l_Lean_LocalDecl_toExpr(v_val_2451_);
v___x_2830_ = l_Lean_Meta_mkAbsurd(v_a_2828_, v_val_2823_, v___x_2829_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; lean_object* v___x_2832_; 
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
lean_inc(v_a_2831_);
lean_dec_ref_known(v___x_2830_, 1);
v___x_2832_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2420_, v_a_2831_, v___y_2818_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v___x_2833_; lean_object* v___x_2835_; 
lean_dec_ref_known(v___x_2832_, 1);
v___x_2833_ = lean_box(v___x_2430_);
if (v_isShared_2826_ == 0)
{
lean_ctor_set(v___x_2825_, 0, v___x_2833_);
v___x_2835_ = v___x_2825_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v___x_2833_);
v___x_2835_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
lean_object* v___x_2836_; 
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2835_);
lean_ctor_set(v___x_2836_, 1, v___x_2455_);
v_a_2437_ = v___x_2836_;
goto v___jp_2436_;
}
}
else
{
lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2845_; 
lean_del_object(v___x_2825_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2838_ = lean_ctor_get(v___x_2832_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2840_ = v___x_2832_;
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2832_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2843_; 
if (v_isShared_2841_ == 0)
{
v___x_2843_ = v___x_2840_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2838_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
}
}
else
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2853_; 
lean_del_object(v___x_2825_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2846_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2848_ = v___x_2830_;
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2830_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2851_; 
if (v_isShared_2849_ == 0)
{
v___x_2851_ = v___x_2848_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2846_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
return v___x_2851_;
}
}
}
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2861_; 
lean_del_object(v___x_2825_);
lean_dec(v_val_2823_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2854_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2856_ = v___x_2827_;
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2827_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___x_2859_; 
if (v_isShared_2857_ == 0)
{
v___x_2859_ = v___x_2856_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_a_2854_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
}
}
else
{
lean_object* v___x_2863_; 
lean_dec(v_a_2822_);
lean_inc_ref(v___x_2484_);
v___x_2863_ = l_Lean_Meta_matchNe_x3f(v___x_2484_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
lean_inc(v_a_2864_);
lean_dec_ref_known(v___x_2863_, 1);
if (lean_obj_tag(v_a_2864_) == 1)
{
lean_object* v_val_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2934_; 
v_val_2865_ = lean_ctor_get(v_a_2864_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v_a_2864_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2867_ = v_a_2864_;
v_isShared_2868_ = v_isSharedCheck_2934_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_val_2865_);
lean_dec(v_a_2864_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2934_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v_snd_2869_; lean_object* v_fst_2870_; lean_object* v_snd_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2933_; 
v_snd_2869_ = lean_ctor_get(v_val_2865_, 1);
lean_inc(v_snd_2869_);
lean_dec(v_val_2865_);
v_fst_2870_ = lean_ctor_get(v_snd_2869_, 0);
v_snd_2871_ = lean_ctor_get(v_snd_2869_, 1);
v_isSharedCheck_2933_ = !lean_is_exclusive(v_snd_2869_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2873_ = v_snd_2869_;
v_isShared_2874_ = v_isSharedCheck_2933_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_snd_2871_);
lean_inc(v_fst_2870_);
lean_dec(v_snd_2869_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2933_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2875_; 
lean_inc(v_fst_2870_);
v___x_2875_ = l_Lean_Meta_isExprDefEq(v_fst_2870_, v_snd_2871_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v_a_2876_; uint8_t v___x_2877_; 
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2876_);
lean_dec_ref_known(v___x_2875_, 1);
v___x_2877_ = lean_unbox(v_a_2876_);
lean_dec(v_a_2876_);
if (v___x_2877_ == 0)
{
lean_del_object(v___x_2873_);
lean_dec(v_fst_2870_);
lean_del_object(v___x_2867_);
v___y_2726_ = v___y_2817_;
v___y_2727_ = v___y_2818_;
v___y_2728_ = v___y_2819_;
v___y_2729_ = v___y_2820_;
goto v___jp_2725_;
}
else
{
lean_object* v___x_2878_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec_ref(v_config_2419_);
lean_inc(v_mvarId_2420_);
v___x_2878_ = l_Lean_MVarId_getType(v_mvarId_2420_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v___x_2880_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
lean_inc(v_a_2879_);
lean_dec_ref_known(v___x_2878_, 1);
v___x_2880_ = l_Lean_Meta_mkEqRefl(v_fst_2870_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
lean_inc(v_a_2881_);
lean_dec_ref_known(v___x_2880_, 1);
v___x_2882_ = l_Lean_LocalDecl_toExpr(v_val_2451_);
v___x_2883_ = l_Lean_Meta_mkAbsurd(v_a_2879_, v_a_2881_, v___x_2882_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; lean_object* v___x_2885_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_a_2884_);
lean_dec_ref_known(v___x_2883_, 1);
v___x_2885_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2420_, v_a_2884_, v___y_2818_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v___x_2886_; lean_object* v___x_2888_; 
lean_dec_ref_known(v___x_2885_, 1);
v___x_2886_ = lean_box(v___x_2430_);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 0, v___x_2886_);
v___x_2888_ = v___x_2867_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v___x_2886_);
v___x_2888_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
lean_object* v___x_2890_; 
if (v_isShared_2874_ == 0)
{
lean_ctor_set(v___x_2873_, 1, v___x_2455_);
lean_ctor_set(v___x_2873_, 0, v___x_2888_);
v___x_2890_ = v___x_2873_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v___x_2888_);
lean_ctor_set(v_reuseFailAlloc_2891_, 1, v___x_2455_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
v_a_2437_ = v___x_2890_;
goto v___jp_2436_;
}
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_del_object(v___x_2873_);
lean_del_object(v___x_2867_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2893_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2885_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2885_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2898_; 
if (v_isShared_2896_ == 0)
{
v___x_2898_ = v___x_2895_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2893_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
else
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2908_; 
lean_del_object(v___x_2873_);
lean_del_object(v___x_2867_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2901_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2903_ = v___x_2883_;
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v___x_2883_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2908_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2906_; 
if (v_isShared_2904_ == 0)
{
v___x_2906_ = v___x_2903_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2901_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
}
else
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2916_; 
lean_dec(v_a_2879_);
lean_del_object(v___x_2873_);
lean_del_object(v___x_2867_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2909_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2911_ = v___x_2880_;
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2880_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2914_; 
if (v_isShared_2912_ == 0)
{
v___x_2914_ = v___x_2911_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2909_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
}
else
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2924_; 
lean_del_object(v___x_2873_);
lean_dec(v_fst_2870_);
lean_del_object(v___x_2867_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
v_a_2917_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2919_ = v___x_2878_;
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v___x_2878_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
if (v_isShared_2920_ == 0)
{
v___x_2922_ = v___x_2919_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v_a_2917_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
}
}
else
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
lean_del_object(v___x_2873_);
lean_dec(v_fst_2870_);
lean_del_object(v___x_2867_);
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2925_ = lean_ctor_get(v___x_2875_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2927_ = v___x_2875_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___x_2875_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2864_);
v___y_2726_ = v___y_2817_;
v___y_2727_ = v___y_2818_;
v___y_2728_ = v___y_2819_;
v___y_2729_ = v___y_2820_;
goto v___jp_2725_;
}
}
else
{
lean_object* v_a_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2942_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2935_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2942_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2937_ = v___x_2863_;
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_a_2935_);
lean_dec(v___x_2863_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2940_; 
if (v_isShared_2938_ == 0)
{
v___x_2940_ = v___x_2937_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v_a_2935_);
v___x_2940_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
return v___x_2940_;
}
}
}
}
}
else
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
lean_dec_ref(v___x_2484_);
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2943_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___x_2821_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2821_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
}
}
else
{
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2445_ = v___x_2456_;
goto v___jp_2444_;
}
v___jp_2457_:
{
uint8_t v_emptyType_2464_; 
v_emptyType_2464_ = lean_ctor_get_uint8(v_config_2419_, sizeof(void*)*1 + 1);
if (v_emptyType_2464_ == 0)
{
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2445_ = v___x_2456_;
goto v___jp_2444_;
}
else
{
if (v___y_2459_ == 0)
{
if (v___y_2458_ == 0)
{
lean_object* v_searchFuel_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v_searchFuel_2465_ = lean_ctor_get(v_config_2419_, 0);
v___x_2466_ = l_Lean_LocalDecl_fvarId(v_val_2451_);
lean_dec(v_val_2451_);
lean_inc(v_searchFuel_2465_);
lean_inc(v_mvarId_2420_);
v___x_2467_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_2420_, v___x_2466_, v_searchFuel_2465_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v_a_2468_; uint8_t v___x_2469_; 
v_a_2468_ = lean_ctor_get(v___x_2467_, 0);
lean_inc(v_a_2468_);
lean_dec_ref_known(v___x_2467_, 1);
v___x_2469_ = lean_unbox(v_a_2468_);
lean_dec(v_a_2468_);
if (v___x_2469_ == 0)
{
lean_del_object(v___x_2453_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2445_ = v___x_2456_;
goto v___jp_2444_;
}
else
{
lean_object* v___x_2470_; lean_object* v___x_2472_; 
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v___x_2470_ = lean_box(v___x_2430_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v___x_2470_);
v___x_2472_ = v___x_2453_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v___x_2470_);
v___x_2472_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
lean_object* v___x_2473_; 
v___x_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
lean_ctor_set(v___x_2473_, 1, v___x_2455_);
v_a_2437_ = v___x_2473_;
goto v___jp_2436_;
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_del_object(v___x_2453_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
lean_dec(v_mvarId_2420_);
lean_dec_ref(v_config_2419_);
v_a_2475_ = lean_ctor_get(v___x_2467_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2467_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2467_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
else
{
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2445_ = v___x_2456_;
goto v___jp_2444_;
}
}
else
{
lean_del_object(v___x_2453_);
lean_dec(v_val_2451_);
lean_del_object(v___x_2434_);
lean_dec(v_snd_2432_);
v_a_2445_ = v___x_2456_;
goto v___jp_2444_;
}
}
}
}
}
v___jp_2436_:
{
lean_object* v___x_2438_; lean_object* v___x_2440_; 
v___x_2438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2438_, 0, v_a_2437_);
if (v_isShared_2435_ == 0)
{
lean_ctor_set(v___x_2434_, 0, v___x_2438_);
v___x_2440_ = v___x_2434_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2438_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_snd_2432_);
v___x_2440_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
lean_object* v___x_2441_; 
v___x_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2440_);
return v___x_2441_;
}
}
v___jp_2444_:
{
lean_object* v___x_2446_; size_t v___x_2447_; size_t v___x_2448_; lean_object* v___x_2449_; 
v___x_2446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2443_);
lean_ctor_set(v___x_2446_, 1, v_a_2445_);
v___x_2447_ = ((size_t)1ULL);
v___x_2448_ = lean_usize_add(v_i_2423_, v___x_2447_);
v___x_2449_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2419_, v_mvarId_2420_, v_as_2421_, v_sz_2422_, v___x_2448_, v___x_2446_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_);
return v___x_2449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object* v_config_3017_, lean_object* v_mvarId_3018_, lean_object* v_as_3019_, lean_object* v_sz_3020_, lean_object* v_i_3021_, lean_object* v_b_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
size_t v_sz_boxed_3028_; size_t v_i_boxed_3029_; lean_object* v_res_3030_; 
v_sz_boxed_3028_ = lean_unbox_usize(v_sz_3020_);
lean_dec(v_sz_3020_);
v_i_boxed_3029_ = lean_unbox_usize(v_i_3021_);
lean_dec(v_i_3021_);
v_res_3030_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_3017_, v_mvarId_3018_, v_as_3019_, v_sz_boxed_3028_, v_i_boxed_3029_, v_b_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
lean_dec(v___y_3024_);
lean_dec_ref(v___y_3023_);
lean_dec_ref(v_as_3019_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object* v_config_3034_, lean_object* v_mvarId_3035_, lean_object* v_as_3036_, size_t v_sz_3037_, size_t v_i_3038_, lean_object* v_b_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_){
_start:
{
uint8_t v___x_3045_; 
v___x_3045_ = lean_usize_dec_lt(v_i_3038_, v_sz_3037_);
if (v___x_3045_ == 0)
{
lean_object* v___x_3046_; 
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v___x_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3046_, 0, v_b_3039_);
return v___x_3046_;
}
else
{
lean_object* v_snd_3047_; lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3662_; 
v_snd_3047_ = lean_ctor_get(v_b_3039_, 1);
v_isSharedCheck_3662_ = !lean_is_exclusive(v_b_3039_);
if (v_isSharedCheck_3662_ == 0)
{
lean_object* v_unused_3663_; 
v_unused_3663_ = lean_ctor_get(v_b_3039_, 0);
lean_dec(v_unused_3663_);
v___x_3049_ = v_b_3039_;
v_isShared_3050_ = v_isSharedCheck_3662_;
goto v_resetjp_3048_;
}
else
{
lean_inc(v_snd_3047_);
lean_dec(v_b_3039_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3662_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
lean_object* v_a_3052_; lean_object* v___x_3058_; lean_object* v_a_3060_; lean_object* v_a_3065_; 
v___x_3058_ = lean_box(0);
v_a_3065_ = lean_array_uget(v_as_3036_, v_i_3038_);
if (lean_obj_tag(v_a_3065_) == 0)
{
lean_del_object(v___x_3049_);
v_a_3060_ = v_snd_3047_;
goto v___jp_3059_;
}
else
{
lean_object* v_val_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3661_; 
v_val_3066_ = lean_ctor_get(v_a_3065_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v_a_3065_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3068_ = v_a_3065_;
v_isShared_3069_ = v_isSharedCheck_3661_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_val_3066_);
lean_dec(v_a_3065_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3661_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3070_; lean_object* v___x_3071_; uint8_t v___y_3073_; uint8_t v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___y_3078_; uint8_t v___x_3099_; 
v___x_3070_ = lean_box(0);
v___x_3071_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3099_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3066_);
if (v___x_3099_ == 0)
{
lean_object* v___x_3100_; uint8_t v___y_3102_; uint8_t v___y_3103_; lean_object* v___y_3104_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3126_; lean_object* v___y_3127_; uint8_t v___y_3128_; uint8_t v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v_a_3132_; lean_object* v___y_3138_; lean_object* v___y_3139_; uint8_t v___y_3140_; uint8_t v___y_3141_; lean_object* v___y_3142_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; uint8_t v___y_3189_; uint8_t v_isHEq_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; uint8_t v_isEq_3234_; lean_object* v___y_3235_; lean_object* v___y_3236_; lean_object* v___y_3237_; lean_object* v___y_3238_; lean_object* v___y_3357_; lean_object* v___y_3358_; lean_object* v___y_3359_; lean_object* v___y_3360_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; lean_object* v___x_3591_; 
v___x_3100_ = l_Lean_LocalDecl_type(v_val_3066_);
lean_inc_ref(v___x_3100_);
v___x_3591_ = l_Lean_Meta_matchNot_x3f(v___x_3100_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v_a_3592_; 
v_a_3592_ = lean_ctor_get(v___x_3591_, 0);
lean_inc(v_a_3592_);
lean_dec_ref_known(v___x_3591_, 1);
if (lean_obj_tag(v_a_3592_) == 1)
{
lean_object* v_val_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3652_; 
v_val_3593_ = lean_ctor_get(v_a_3592_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v_a_3592_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3595_ = v_a_3592_;
v_isShared_3596_ = v_isSharedCheck_3652_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_val_3593_);
lean_dec(v_a_3592_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3652_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3597_; 
v___x_3597_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3593_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
if (lean_obj_tag(v___x_3597_) == 0)
{
lean_object* v_a_3598_; 
v_a_3598_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_a_3598_);
lean_dec_ref_known(v___x_3597_, 1);
if (lean_obj_tag(v_a_3598_) == 1)
{
lean_object* v_val_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3643_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec_ref(v_config_3034_);
v_val_3599_ = lean_ctor_get(v_a_3598_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_a_3598_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3601_ = v_a_3598_;
v_isShared_3602_ = v_isSharedCheck_3643_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_val_3599_);
lean_dec(v_a_3598_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3643_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3603_; 
lean_inc(v_mvarId_3035_);
v___x_3603_ = l_Lean_MVarId_getType(v_mvarId_3035_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v_a_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; 
v_a_3604_ = lean_ctor_get(v___x_3603_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3603_, 1);
v___x_3605_ = l_Lean_LocalDecl_toExpr(v_val_3066_);
v___x_3606_ = l_Lean_mkFVar(v_val_3599_);
v___x_3607_ = l_Lean_Expr_app___override(v___x_3605_, v___x_3606_);
v___x_3608_ = l_Lean_Meta_mkFalseElim(v_a_3604_, v___x_3607_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
if (lean_obj_tag(v___x_3608_) == 0)
{
lean_object* v_a_3609_; lean_object* v___x_3610_; 
v_a_3609_ = lean_ctor_get(v___x_3608_, 0);
lean_inc(v_a_3609_);
lean_dec_ref_known(v___x_3608_, 1);
v___x_3610_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3035_, v_a_3609_, v___y_3041_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v___x_3611_; lean_object* v___x_3613_; 
lean_dec_ref_known(v___x_3610_, 1);
v___x_3611_ = lean_box(v___x_3045_);
if (v_isShared_3602_ == 0)
{
lean_ctor_set(v___x_3601_, 0, v___x_3611_);
v___x_3613_ = v___x_3601_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v___x_3611_);
v___x_3613_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
lean_object* v___x_3614_; lean_object* v___x_3616_; 
v___x_3614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
lean_ctor_set(v___x_3614_, 1, v___x_3070_);
if (v_isShared_3596_ == 0)
{
lean_ctor_set_tag(v___x_3595_, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3614_);
v___x_3616_ = v___x_3595_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v___x_3614_);
v___x_3616_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
v_a_3052_ = v___x_3616_;
goto v___jp_3051_;
}
}
}
else
{
lean_object* v_a_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3626_; 
lean_del_object(v___x_3601_);
lean_del_object(v___x_3595_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3619_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3621_ = v___x_3610_;
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_a_3619_);
lean_dec(v___x_3610_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3624_; 
if (v_isShared_3622_ == 0)
{
v___x_3624_ = v___x_3621_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_a_3619_);
v___x_3624_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
return v___x_3624_;
}
}
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_del_object(v___x_3601_);
lean_del_object(v___x_3595_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3627_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3608_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3608_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
lean_del_object(v___x_3601_);
lean_dec(v_val_3599_);
lean_del_object(v___x_3595_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3635_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___x_3603_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3603_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
}
else
{
lean_dec(v_a_3598_);
lean_del_object(v___x_3595_);
v___y_3455_ = v___y_3040_;
v___y_3456_ = v___y_3041_;
v___y_3457_ = v___y_3042_;
v___y_3458_ = v___y_3043_;
goto v___jp_3454_;
}
}
else
{
lean_object* v_a_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3651_; 
lean_del_object(v___x_3595_);
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3644_ = lean_ctor_get(v___x_3597_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3597_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3646_ = v___x_3597_;
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_a_3644_);
lean_dec(v___x_3597_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3649_; 
if (v_isShared_3647_ == 0)
{
v___x_3649_ = v___x_3646_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_a_3644_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
}
else
{
lean_dec(v_a_3592_);
v___y_3455_ = v___y_3040_;
v___y_3456_ = v___y_3041_;
v___y_3457_ = v___y_3042_;
v___y_3458_ = v___y_3043_;
goto v___jp_3454_;
}
}
else
{
lean_object* v_a_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3660_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3653_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3660_ == 0)
{
v___x_3655_ = v___x_3591_;
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_a_3653_);
lean_dec(v___x_3591_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
if (v_isShared_3656_ == 0)
{
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v_a_3653_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
}
v___jp_3101_:
{
uint8_t v_genDiseq_3108_; 
v_genDiseq_3108_ = lean_ctor_get_uint8(v_config_3034_, sizeof(void*)*1 + 2);
if (v_genDiseq_3108_ == 0)
{
lean_dec_ref(v___x_3100_);
v___y_3073_ = v___y_3103_;
v___y_3074_ = v___y_3102_;
v___y_3075_ = v___y_3104_;
v___y_3076_ = v___y_3105_;
v___y_3077_ = v___y_3106_;
v___y_3078_ = v___y_3107_;
goto v___jp_3072_;
}
else
{
uint8_t v___x_3109_; 
v___x_3109_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_3100_);
if (v___x_3109_ == 0)
{
v___y_3073_ = v___y_3103_;
v___y_3074_ = v___y_3102_;
v___y_3075_ = v___y_3104_;
v___y_3076_ = v___y_3105_;
v___y_3077_ = v___y_3106_;
v___y_3078_ = v___y_3107_;
goto v___jp_3072_;
}
else
{
lean_object* v___x_3110_; 
lean_inc(v_val_3066_);
lean_inc(v_mvarId_3035_);
v___x_3110_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3035_, v_val_3066_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; uint8_t v___x_3112_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc(v_a_3111_);
lean_dec_ref_known(v___x_3110_, 1);
v___x_3112_ = lean_unbox(v_a_3111_);
lean_dec(v_a_3111_);
if (v___x_3112_ == 0)
{
v___y_3073_ = v___y_3103_;
v___y_3074_ = v___y_3102_;
v___y_3075_ = v___y_3104_;
v___y_3076_ = v___y_3105_;
v___y_3077_ = v___y_3106_;
v___y_3078_ = v___y_3107_;
goto v___jp_3072_;
}
else
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v___x_3113_ = lean_box(v___x_3045_);
v___x_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
v___x_3115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
lean_ctor_set(v___x_3115_, 1, v___x_3070_);
v___x_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
v_a_3052_ = v___x_3116_;
goto v___jp_3051_;
}
}
else
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3117_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3110_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3110_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
}
}
v___jp_3125_:
{
uint8_t v___x_3133_; 
v___x_3133_ = l_Lean_Exception_isInterrupt(v_a_3132_);
if (v___x_3133_ == 0)
{
uint8_t v___x_3134_; 
lean_inc_ref(v_a_3132_);
v___x_3134_ = l_Lean_Exception_isRuntime(v_a_3132_);
if (v___x_3134_ == 0)
{
lean_dec_ref(v_a_3132_);
v___y_3102_ = v___y_3129_;
v___y_3103_ = v___y_3128_;
v___y_3104_ = v___y_3130_;
v___y_3105_ = v___y_3131_;
v___y_3106_ = v___y_3127_;
v___y_3107_ = v___y_3126_;
goto v___jp_3101_;
}
else
{
lean_object* v___x_3135_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v___x_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3135_, 0, v_a_3132_);
return v___x_3135_;
}
}
else
{
lean_object* v___x_3136_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v___x_3136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3136_, 0, v_a_3132_);
return v___x_3136_;
}
}
v___jp_3137_:
{
if (lean_obj_tag(v___y_3145_) == 0)
{
lean_object* v_a_3146_; lean_object* v___x_3147_; uint8_t v___x_3148_; 
v_a_3146_ = lean_ctor_get(v___y_3145_, 0);
lean_inc(v_a_3146_);
lean_dec_ref_known(v___y_3145_, 1);
v___x_3147_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_3148_ = l_Lean_Expr_isConstOf(v_a_3146_, v___x_3147_);
lean_dec(v_a_3146_);
if (v___x_3148_ == 0)
{
lean_dec_ref(v___y_3143_);
v___y_3102_ = v___y_3141_;
v___y_3103_ = v___y_3140_;
v___y_3104_ = v___y_3142_;
v___y_3105_ = v___y_3144_;
v___y_3106_ = v___y_3139_;
v___y_3107_ = v___y_3138_;
goto v___jp_3101_;
}
else
{
lean_object* v___x_3149_; 
lean_inc_ref(v___y_3143_);
v___x_3149_ = l_Lean_Meta_mkEqRefl(v___y_3143_, v___y_3142_, v___y_3144_, v___y_3139_, v___y_3138_);
if (lean_obj_tag(v___x_3149_) == 0)
{
lean_object* v_a_3150_; lean_object* v___x_3151_; lean_object* v_dummy_3152_; lean_object* v_nargs_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v_a_3150_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_a_3150_);
lean_dec_ref_known(v___x_3149_, 1);
v___x_3151_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_3152_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_3153_ = l_Lean_Expr_getAppNumArgs(v___y_3143_);
lean_inc(v_nargs_3153_);
v___x_3154_ = lean_mk_array(v_nargs_3153_, v_dummy_3152_);
v___x_3155_ = lean_unsigned_to_nat(1u);
v___x_3156_ = lean_nat_sub(v_nargs_3153_, v___x_3155_);
lean_dec(v_nargs_3153_);
v___x_3157_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_3143_, v___x_3154_, v___x_3156_);
v___x_3158_ = lean_array_push(v___x_3157_, v_a_3150_);
v___x_3159_ = l_Lean_mkAppN(v___x_3151_, v___x_3158_);
lean_dec_ref(v___x_3158_);
lean_inc(v_mvarId_3035_);
v___x_3160_ = l_Lean_MVarId_getType(v_mvarId_3035_, v___y_3142_, v___y_3144_, v___y_3139_, v___y_3138_);
if (lean_obj_tag(v___x_3160_) == 0)
{
lean_object* v_a_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v_a_3161_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_a_3161_);
lean_dec_ref_known(v___x_3160_, 1);
lean_inc(v_val_3066_);
v___x_3162_ = l_Lean_LocalDecl_toExpr(v_val_3066_);
v___x_3163_ = l_Lean_Meta_mkAbsurd(v_a_3161_, v___x_3162_, v___x_3159_, v___y_3142_, v___y_3144_, v___y_3139_, v___y_3138_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; lean_object* v___x_3166_; uint8_t v_isShared_3167_; uint8_t v_isSharedCheck_3183_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3166_ = v___x_3163_;
v_isShared_3167_ = v_isSharedCheck_3183_;
goto v_resetjp_3165_;
}
else
{
lean_inc(v_a_3164_);
lean_dec(v___x_3163_);
v___x_3166_ = lean_box(0);
v_isShared_3167_ = v_isSharedCheck_3183_;
goto v_resetjp_3165_;
}
v_resetjp_3165_:
{
lean_object* v___x_3168_; 
lean_inc(v_mvarId_3035_);
v___x_3168_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3035_, v_a_3164_, v___y_3144_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3180_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; 
v_unused_3181_ = lean_ctor_get(v___x_3168_, 0);
lean_dec(v_unused_3181_);
v___x_3170_ = v___x_3168_;
v_isShared_3171_ = v_isSharedCheck_3180_;
goto v_resetjp_3169_;
}
else
{
lean_dec(v___x_3168_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3180_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3172_; lean_object* v___x_3174_; 
v___x_3172_ = lean_box(v___x_3045_);
if (v_isShared_3171_ == 0)
{
lean_ctor_set_tag(v___x_3170_, 1);
lean_ctor_set(v___x_3170_, 0, v___x_3172_);
v___x_3174_ = v___x_3170_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3172_);
v___x_3174_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
lean_object* v___x_3175_; lean_object* v___x_3177_; 
v___x_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v___x_3070_);
if (v_isShared_3167_ == 0)
{
lean_ctor_set(v___x_3166_, 0, v___x_3175_);
v___x_3177_ = v___x_3166_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v___x_3175_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
v_a_3052_ = v___x_3177_;
goto v___jp_3051_;
}
}
}
}
else
{
lean_object* v_a_3182_; 
lean_del_object(v___x_3166_);
v_a_3182_ = lean_ctor_get(v___x_3168_, 0);
lean_inc(v_a_3182_);
lean_dec_ref_known(v___x_3168_, 1);
v___y_3126_ = v___y_3138_;
v___y_3127_ = v___y_3139_;
v___y_3128_ = v___y_3140_;
v___y_3129_ = v___y_3141_;
v___y_3130_ = v___y_3142_;
v___y_3131_ = v___y_3144_;
v_a_3132_ = v_a_3182_;
goto v___jp_3125_;
}
}
}
else
{
lean_object* v_a_3184_; 
v_a_3184_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3184_);
lean_dec_ref_known(v___x_3163_, 1);
v___y_3126_ = v___y_3138_;
v___y_3127_ = v___y_3139_;
v___y_3128_ = v___y_3140_;
v___y_3129_ = v___y_3141_;
v___y_3130_ = v___y_3142_;
v___y_3131_ = v___y_3144_;
v_a_3132_ = v_a_3184_;
goto v___jp_3125_;
}
}
else
{
lean_object* v_a_3185_; 
lean_dec_ref(v___x_3159_);
v_a_3185_ = lean_ctor_get(v___x_3160_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v___x_3160_, 1);
v___y_3126_ = v___y_3138_;
v___y_3127_ = v___y_3139_;
v___y_3128_ = v___y_3140_;
v___y_3129_ = v___y_3141_;
v___y_3130_ = v___y_3142_;
v___y_3131_ = v___y_3144_;
v_a_3132_ = v_a_3185_;
goto v___jp_3125_;
}
}
else
{
lean_object* v_a_3186_; 
lean_dec_ref(v___y_3143_);
v_a_3186_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_a_3186_);
lean_dec_ref_known(v___x_3149_, 1);
v___y_3126_ = v___y_3138_;
v___y_3127_ = v___y_3139_;
v___y_3128_ = v___y_3140_;
v___y_3129_ = v___y_3141_;
v___y_3130_ = v___y_3142_;
v___y_3131_ = v___y_3144_;
v_a_3132_ = v_a_3186_;
goto v___jp_3125_;
}
}
}
else
{
lean_object* v_a_3187_; 
lean_dec_ref(v___y_3143_);
v_a_3187_ = lean_ctor_get(v___y_3145_, 0);
lean_inc(v_a_3187_);
lean_dec_ref_known(v___y_3145_, 1);
v___y_3126_ = v___y_3138_;
v___y_3127_ = v___y_3139_;
v___y_3128_ = v___y_3140_;
v___y_3129_ = v___y_3141_;
v___y_3130_ = v___y_3142_;
v___y_3131_ = v___y_3144_;
v_a_3132_ = v_a_3187_;
goto v___jp_3125_;
}
}
v___jp_3188_:
{
uint8_t v_useDecide_3195_; 
v_useDecide_3195_ = lean_ctor_get_uint8(v_config_3034_, sizeof(void*)*1);
if (v_useDecide_3195_ == 0)
{
v___y_3102_ = v___y_3189_;
v___y_3103_ = v_isHEq_3190_;
v___y_3104_ = v___y_3191_;
v___y_3105_ = v___y_3192_;
v___y_3106_ = v___y_3193_;
v___y_3107_ = v___y_3194_;
goto v___jp_3101_;
}
else
{
uint8_t v___x_3196_; 
v___x_3196_ = l_Lean_Expr_hasFVar(v___x_3100_);
if (v___x_3196_ == 0)
{
lean_object* v___x_3197_; 
lean_inc_ref(v___x_3100_);
v___x_3197_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_3100_, v___y_3192_);
if (lean_obj_tag(v___x_3197_) == 0)
{
lean_object* v_a_3198_; uint8_t v___x_3199_; 
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
lean_inc(v_a_3198_);
lean_dec_ref_known(v___x_3197_, 1);
v___x_3199_ = l_Lean_Expr_hasMVar(v_a_3198_);
if (v___x_3199_ == 0)
{
uint8_t v___x_3200_; 
v___x_3200_ = l_Lean_Expr_hasFVar(v_a_3198_);
lean_dec(v_a_3198_);
if (v___x_3200_ == 0)
{
lean_object* v___x_3201_; 
lean_inc_ref(v___x_3100_);
v___x_3201_ = l_Lean_Meta_mkDecide(v___x_3100_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3203_; uint8_t v_transparency_3204_; uint8_t v___x_3205_; uint8_t v___x_3206_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___x_3201_, 1);
v___x_3203_ = l_Lean_Meta_Context_config(v___y_3191_);
v_transparency_3204_ = lean_ctor_get_uint8(v___x_3203_, 9);
lean_dec_ref(v___x_3203_);
v___x_3205_ = 1;
v___x_3206_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3204_, v___x_3205_);
if (v___x_3206_ == 0)
{
lean_object* v_keyedConfig_3207_; uint8_t v_trackZetaDelta_3208_; lean_object* v_zetaDeltaSet_3209_; lean_object* v_lctx_3210_; lean_object* v_localInstances_3211_; lean_object* v_defEqCtx_x3f_3212_; lean_object* v_synthPendingDepth_3213_; lean_object* v_customCanUnfoldPredicate_x3f_3214_; uint8_t v_univApprox_3215_; uint8_t v_inTypeClassResolution_3216_; uint8_t v_cacheInferType_3217_; lean_object* v_rewriteSet_x3f_3218_; uint8_t v_rewriteFuelScope_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_keyedConfig_3207_ = lean_ctor_get(v___y_3191_, 0);
v_trackZetaDelta_3208_ = lean_ctor_get_uint8(v___y_3191_, sizeof(void*)*8);
v_zetaDeltaSet_3209_ = lean_ctor_get(v___y_3191_, 1);
v_lctx_3210_ = lean_ctor_get(v___y_3191_, 2);
v_localInstances_3211_ = lean_ctor_get(v___y_3191_, 3);
v_defEqCtx_x3f_3212_ = lean_ctor_get(v___y_3191_, 4);
v_synthPendingDepth_3213_ = lean_ctor_get(v___y_3191_, 5);
v_customCanUnfoldPredicate_x3f_3214_ = lean_ctor_get(v___y_3191_, 6);
v_univApprox_3215_ = lean_ctor_get_uint8(v___y_3191_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_3216_ = lean_ctor_get_uint8(v___y_3191_, sizeof(void*)*8 + 2);
v_cacheInferType_3217_ = lean_ctor_get_uint8(v___y_3191_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_3218_ = lean_ctor_get(v___y_3191_, 7);
v_rewriteFuelScope_3219_ = lean_ctor_get_uint8(v___y_3191_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_3207_);
v___x_3220_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3205_, v_keyedConfig_3207_);
lean_inc(v_rewriteSet_x3f_3218_);
lean_inc(v_customCanUnfoldPredicate_x3f_3214_);
lean_inc(v_synthPendingDepth_3213_);
lean_inc(v_defEqCtx_x3f_3212_);
lean_inc_ref(v_localInstances_3211_);
lean_inc_ref(v_lctx_3210_);
lean_inc(v_zetaDeltaSet_3209_);
v___x_3221_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_3221_, 0, v___x_3220_);
lean_ctor_set(v___x_3221_, 1, v_zetaDeltaSet_3209_);
lean_ctor_set(v___x_3221_, 2, v_lctx_3210_);
lean_ctor_set(v___x_3221_, 3, v_localInstances_3211_);
lean_ctor_set(v___x_3221_, 4, v_defEqCtx_x3f_3212_);
lean_ctor_set(v___x_3221_, 5, v_synthPendingDepth_3213_);
lean_ctor_set(v___x_3221_, 6, v_customCanUnfoldPredicate_x3f_3214_);
lean_ctor_set(v___x_3221_, 7, v_rewriteSet_x3f_3218_);
lean_ctor_set_uint8(v___x_3221_, sizeof(void*)*8, v_trackZetaDelta_3208_);
lean_ctor_set_uint8(v___x_3221_, sizeof(void*)*8 + 1, v_univApprox_3215_);
lean_ctor_set_uint8(v___x_3221_, sizeof(void*)*8 + 2, v_inTypeClassResolution_3216_);
lean_ctor_set_uint8(v___x_3221_, sizeof(void*)*8 + 3, v_cacheInferType_3217_);
lean_ctor_set_uint8(v___x_3221_, sizeof(void*)*8 + 4, v_rewriteFuelScope_3219_);
lean_inc(v___y_3194_);
lean_inc_ref(v___y_3193_);
lean_inc(v___y_3192_);
lean_inc(v_a_3202_);
v___x_3222_ = lean_whnf(v_a_3202_, v___x_3221_, v___y_3192_, v___y_3193_, v___y_3194_);
v___y_3138_ = v___y_3194_;
v___y_3139_ = v___y_3193_;
v___y_3140_ = v_isHEq_3190_;
v___y_3141_ = v___y_3189_;
v___y_3142_ = v___y_3191_;
v___y_3143_ = v_a_3202_;
v___y_3144_ = v___y_3192_;
v___y_3145_ = v___x_3222_;
goto v___jp_3137_;
}
else
{
lean_object* v___x_3223_; 
lean_inc(v___y_3194_);
lean_inc_ref(v___y_3193_);
lean_inc(v___y_3192_);
lean_inc_ref(v___y_3191_);
lean_inc(v_a_3202_);
v___x_3223_ = lean_whnf(v_a_3202_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_);
v___y_3138_ = v___y_3194_;
v___y_3139_ = v___y_3193_;
v___y_3140_ = v_isHEq_3190_;
v___y_3141_ = v___y_3189_;
v___y_3142_ = v___y_3191_;
v___y_3143_ = v_a_3202_;
v___y_3144_ = v___y_3192_;
v___y_3145_ = v___x_3223_;
goto v___jp_3137_;
}
}
else
{
lean_object* v_a_3224_; 
v_a_3224_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3224_);
lean_dec_ref_known(v___x_3201_, 1);
v___y_3126_ = v___y_3194_;
v___y_3127_ = v___y_3193_;
v___y_3128_ = v_isHEq_3190_;
v___y_3129_ = v___y_3189_;
v___y_3130_ = v___y_3191_;
v___y_3131_ = v___y_3192_;
v_a_3132_ = v_a_3224_;
goto v___jp_3125_;
}
}
else
{
v___y_3102_ = v___y_3189_;
v___y_3103_ = v_isHEq_3190_;
v___y_3104_ = v___y_3191_;
v___y_3105_ = v___y_3192_;
v___y_3106_ = v___y_3193_;
v___y_3107_ = v___y_3194_;
goto v___jp_3101_;
}
}
else
{
lean_dec(v_a_3198_);
v___y_3102_ = v___y_3189_;
v___y_3103_ = v_isHEq_3190_;
v___y_3104_ = v___y_3191_;
v___y_3105_ = v___y_3192_;
v___y_3106_ = v___y_3193_;
v___y_3107_ = v___y_3194_;
goto v___jp_3101_;
}
}
else
{
lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3232_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3225_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3232_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3227_ = v___x_3197_;
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v___x_3197_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3230_; 
if (v_isShared_3228_ == 0)
{
v___x_3230_ = v___x_3227_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v_a_3225_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
}
}
else
{
v___y_3102_ = v___y_3189_;
v___y_3103_ = v_isHEq_3190_;
v___y_3104_ = v___y_3191_;
v___y_3105_ = v___y_3192_;
v___y_3106_ = v___y_3193_;
v___y_3107_ = v___y_3194_;
goto v___jp_3101_;
}
}
}
v___jp_3233_:
{
lean_object* v___x_3239_; 
lean_inc_ref(v___x_3100_);
v___x_3239_ = l_Lean_Meta_matchHEq_x3f(v___x_3100_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref_known(v___x_3239_, 1);
if (lean_obj_tag(v_a_3240_) == 1)
{
lean_object* v_val_3241_; lean_object* v_snd_3242_; lean_object* v_snd_3243_; lean_object* v_fst_3244_; lean_object* v_fst_3245_; lean_object* v_fst_3246_; lean_object* v_snd_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3347_; 
v_val_3241_ = lean_ctor_get(v_a_3240_, 0);
lean_inc(v_val_3241_);
lean_dec_ref_known(v_a_3240_, 1);
v_snd_3242_ = lean_ctor_get(v_val_3241_, 1);
lean_inc(v_snd_3242_);
v_snd_3243_ = lean_ctor_get(v_snd_3242_, 1);
lean_inc(v_snd_3243_);
v_fst_3244_ = lean_ctor_get(v_val_3241_, 0);
lean_inc(v_fst_3244_);
lean_dec(v_val_3241_);
v_fst_3245_ = lean_ctor_get(v_snd_3242_, 0);
lean_inc(v_fst_3245_);
lean_dec(v_snd_3242_);
v_fst_3246_ = lean_ctor_get(v_snd_3243_, 0);
v_snd_3247_ = lean_ctor_get(v_snd_3243_, 1);
v_isSharedCheck_3347_ = !lean_is_exclusive(v_snd_3243_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3249_ = v_snd_3243_;
v_isShared_3250_ = v_isSharedCheck_3347_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_snd_3247_);
lean_inc(v_fst_3246_);
lean_dec(v_snd_3243_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3347_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3245_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3251_, 1);
if (lean_obj_tag(v_a_3252_) == 1)
{
lean_object* v_val_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3338_; 
v_val_3253_ = lean_ctor_get(v_a_3252_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v_a_3252_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3255_ = v_a_3252_;
v_isShared_3256_ = v_isSharedCheck_3338_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_val_3253_);
lean_dec(v_a_3252_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3338_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3257_; 
v___x_3257_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3247_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_a_3258_);
lean_dec_ref_known(v___x_3257_, 1);
if (lean_obj_tag(v_a_3258_) == 1)
{
lean_object* v_toConstantVal_3259_; lean_object* v_val_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3329_; 
v_toConstantVal_3259_ = lean_ctor_get(v_val_3253_, 0);
lean_inc_ref(v_toConstantVal_3259_);
lean_dec(v_val_3253_);
v_val_3260_ = lean_ctor_get(v_a_3258_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v_a_3258_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3262_ = v_a_3258_;
v_isShared_3263_ = v_isSharedCheck_3329_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_val_3260_);
lean_dec(v_a_3258_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3329_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v_toConstantVal_3264_; lean_object* v_name_3265_; lean_object* v_name_3266_; uint8_t v___x_3267_; 
v_toConstantVal_3264_ = lean_ctor_get(v_val_3260_, 0);
lean_inc_ref(v_toConstantVal_3264_);
lean_dec(v_val_3260_);
v_name_3265_ = lean_ctor_get(v_toConstantVal_3259_, 0);
lean_inc(v_name_3265_);
lean_dec_ref(v_toConstantVal_3259_);
v_name_3266_ = lean_ctor_get(v_toConstantVal_3264_, 0);
lean_inc(v_name_3266_);
lean_dec_ref(v_toConstantVal_3264_);
v___x_3267_ = lean_name_eq(v_name_3265_, v_name_3266_);
lean_dec(v_name_3266_);
lean_dec(v_name_3265_);
if (v___x_3267_ == 0)
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_Meta_isExprDefEq(v_fst_3244_, v_fst_3246_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; uint8_t v___x_3270_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_a_3269_);
lean_dec_ref_known(v___x_3268_, 1);
v___x_3270_ = lean_unbox(v_a_3269_);
lean_dec(v_a_3269_);
if (v___x_3270_ == 0)
{
lean_del_object(v___x_3262_);
lean_del_object(v___x_3255_);
lean_del_object(v___x_3249_);
v___y_3189_ = v_isEq_3234_;
v_isHEq_3190_ = v___x_3045_;
v___y_3191_ = v___y_3235_;
v___y_3192_ = v___y_3236_;
v___y_3193_ = v___y_3237_;
v___y_3194_ = v___y_3238_;
goto v___jp_3188_;
}
else
{
lean_object* v___x_3271_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec_ref(v_config_3034_);
lean_inc(v_mvarId_3035_);
v___x_3271_ = l_Lean_MVarId_getType(v_mvarId_3035_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
if (lean_obj_tag(v___x_3271_) == 0)
{
lean_object* v_a_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v_a_3272_ = lean_ctor_get(v___x_3271_, 0);
lean_inc(v_a_3272_);
lean_dec_ref_known(v___x_3271_, 1);
v___x_3273_ = l_Lean_LocalDecl_toExpr(v_val_3066_);
v___x_3274_ = l_Lean_Meta_mkEqOfHEq(v___x_3273_, v___x_3045_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; lean_object* v___x_3276_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
lean_dec_ref_known(v___x_3274_, 1);
v___x_3276_ = l_Lean_Meta_mkNoConfusion(v_a_3272_, v_a_3275_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v___x_3278_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
v___x_3278_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3035_, v_a_3277_, v___y_3236_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v___x_3279_; lean_object* v___x_3281_; 
lean_dec_ref_known(v___x_3278_, 1);
v___x_3279_ = lean_box(v___x_3045_);
if (v_isShared_3263_ == 0)
{
lean_ctor_set(v___x_3262_, 0, v___x_3279_);
v___x_3281_ = v___x_3262_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v___x_3279_);
v___x_3281_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
lean_object* v___x_3283_; 
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 1, v___x_3070_);
lean_ctor_set(v___x_3249_, 0, v___x_3281_);
v___x_3283_ = v___x_3249_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v___x_3281_);
lean_ctor_set(v_reuseFailAlloc_3287_, 1, v___x_3070_);
v___x_3283_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
lean_object* v___x_3285_; 
if (v_isShared_3256_ == 0)
{
lean_ctor_set_tag(v___x_3255_, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3283_);
v___x_3285_ = v___x_3255_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3283_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
v_a_3052_ = v___x_3285_;
goto v___jp_3051_;
}
}
}
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
lean_del_object(v___x_3262_);
lean_del_object(v___x_3255_);
lean_del_object(v___x_3249_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3289_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3278_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3278_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
else
{
lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3304_; 
lean_del_object(v___x_3262_);
lean_del_object(v___x_3255_);
lean_del_object(v___x_3249_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3297_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3304_ == 0)
{
v___x_3299_ = v___x_3276_;
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v___x_3276_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___x_3302_; 
if (v_isShared_3300_ == 0)
{
v___x_3302_ = v___x_3299_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3303_; 
v_reuseFailAlloc_3303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3303_, 0, v_a_3297_);
v___x_3302_ = v_reuseFailAlloc_3303_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
return v___x_3302_;
}
}
}
}
else
{
lean_object* v_a_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3312_; 
lean_dec(v_a_3272_);
lean_del_object(v___x_3262_);
lean_del_object(v___x_3255_);
lean_del_object(v___x_3249_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3305_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3307_ = v___x_3274_;
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_a_3305_);
lean_dec(v___x_3274_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3310_; 
if (v_isShared_3308_ == 0)
{
v___x_3310_ = v___x_3307_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_a_3305_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
return v___x_3310_;
}
}
}
}
else
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3320_; 
lean_del_object(v___x_3262_);
lean_del_object(v___x_3255_);
lean_del_object(v___x_3249_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3313_ = lean_ctor_get(v___x_3271_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3315_ = v___x_3271_;
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v___x_3271_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3318_; 
if (v_isShared_3316_ == 0)
{
v___x_3318_ = v___x_3315_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_a_3313_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_del_object(v___x_3262_);
lean_del_object(v___x_3255_);
lean_del_object(v___x_3249_);
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3321_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3268_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3268_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
else
{
lean_del_object(v___x_3262_);
lean_del_object(v___x_3255_);
lean_del_object(v___x_3249_);
lean_dec(v_fst_3246_);
lean_dec(v_fst_3244_);
v___y_3189_ = v_isEq_3234_;
v_isHEq_3190_ = v___x_3045_;
v___y_3191_ = v___y_3235_;
v___y_3192_ = v___y_3236_;
v___y_3193_ = v___y_3237_;
v___y_3194_ = v___y_3238_;
goto v___jp_3188_;
}
}
}
else
{
lean_dec(v_a_3258_);
lean_del_object(v___x_3255_);
lean_dec(v_val_3253_);
lean_del_object(v___x_3249_);
lean_dec(v_fst_3246_);
lean_dec(v_fst_3244_);
v___y_3189_ = v_isEq_3234_;
v_isHEq_3190_ = v___x_3045_;
v___y_3191_ = v___y_3235_;
v___y_3192_ = v___y_3236_;
v___y_3193_ = v___y_3237_;
v___y_3194_ = v___y_3238_;
goto v___jp_3188_;
}
}
else
{
lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3337_; 
lean_del_object(v___x_3255_);
lean_dec(v_val_3253_);
lean_del_object(v___x_3249_);
lean_dec(v_fst_3246_);
lean_dec(v_fst_3244_);
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3330_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3332_ = v___x_3257_;
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v___x_3257_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3335_; 
if (v_isShared_3333_ == 0)
{
v___x_3335_ = v___x_3332_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v_a_3330_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
}
}
}
else
{
lean_dec(v_a_3252_);
lean_del_object(v___x_3249_);
lean_dec(v_snd_3247_);
lean_dec(v_fst_3246_);
lean_dec(v_fst_3244_);
v___y_3189_ = v_isEq_3234_;
v_isHEq_3190_ = v___x_3045_;
v___y_3191_ = v___y_3235_;
v___y_3192_ = v___y_3236_;
v___y_3193_ = v___y_3237_;
v___y_3194_ = v___y_3238_;
goto v___jp_3188_;
}
}
else
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3346_; 
lean_del_object(v___x_3249_);
lean_dec(v_snd_3247_);
lean_dec(v_fst_3246_);
lean_dec(v_fst_3244_);
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3339_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3341_ = v___x_3251_;
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___x_3251_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3344_; 
if (v_isShared_3342_ == 0)
{
v___x_3344_ = v___x_3341_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_a_3339_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
}
}
else
{
lean_dec(v_a_3240_);
v___y_3189_ = v_isEq_3234_;
v_isHEq_3190_ = v___x_3099_;
v___y_3191_ = v___y_3235_;
v___y_3192_ = v___y_3236_;
v___y_3193_ = v___y_3237_;
v___y_3194_ = v___y_3238_;
goto v___jp_3188_;
}
}
else
{
lean_object* v_a_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3355_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3348_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3350_ = v___x_3239_;
v_isShared_3351_ = v_isSharedCheck_3355_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_a_3348_);
lean_dec(v___x_3239_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3355_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3353_; 
if (v_isShared_3351_ == 0)
{
v___x_3353_ = v___x_3350_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_a_3348_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
}
v___jp_3356_:
{
lean_object* v___x_3361_; 
lean_inc_ref(v___x_3100_);
v___x_3361_ = l_Lean_Meta_matchEq_x3f(v___x_3100_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_object* v_a_3362_; 
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
lean_inc(v_a_3362_);
lean_dec_ref_known(v___x_3361_, 1);
if (lean_obj_tag(v_a_3362_) == 1)
{
lean_object* v_val_3363_; lean_object* v_snd_3364_; lean_object* v_fst_3365_; lean_object* v_snd_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3445_; 
v_val_3363_ = lean_ctor_get(v_a_3362_, 0);
lean_inc(v_val_3363_);
lean_dec_ref_known(v_a_3362_, 1);
v_snd_3364_ = lean_ctor_get(v_val_3363_, 1);
lean_inc(v_snd_3364_);
lean_dec(v_val_3363_);
v_fst_3365_ = lean_ctor_get(v_snd_3364_, 0);
v_snd_3366_ = lean_ctor_get(v_snd_3364_, 1);
v_isSharedCheck_3445_ = !lean_is_exclusive(v_snd_3364_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3368_ = v_snd_3364_;
v_isShared_3369_ = v_isSharedCheck_3445_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_snd_3366_);
lean_inc(v_fst_3365_);
lean_dec(v_snd_3364_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3445_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3370_; 
v___x_3370_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3365_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3370_) == 0)
{
lean_object* v_a_3371_; 
v_a_3371_ = lean_ctor_get(v___x_3370_, 0);
lean_inc(v_a_3371_);
lean_dec_ref_known(v___x_3370_, 1);
if (lean_obj_tag(v_a_3371_) == 1)
{
lean_object* v_val_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3436_; 
v_val_3372_ = lean_ctor_get(v_a_3371_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v_a_3371_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3374_ = v_a_3371_;
v_isShared_3375_ = v_isSharedCheck_3436_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_val_3372_);
lean_dec(v_a_3371_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3436_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; 
v___x_3376_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3366_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3377_);
lean_dec_ref_known(v___x_3376_, 1);
if (lean_obj_tag(v_a_3377_) == 1)
{
lean_object* v_toConstantVal_3378_; lean_object* v_val_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3427_; 
v_toConstantVal_3378_ = lean_ctor_get(v_val_3372_, 0);
lean_inc_ref(v_toConstantVal_3378_);
lean_dec(v_val_3372_);
v_val_3379_ = lean_ctor_get(v_a_3377_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v_a_3377_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3381_ = v_a_3377_;
v_isShared_3382_ = v_isSharedCheck_3427_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_val_3379_);
lean_dec(v_a_3377_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3427_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v_toConstantVal_3383_; lean_object* v_name_3384_; lean_object* v_name_3385_; uint8_t v___x_3386_; 
v_toConstantVal_3383_ = lean_ctor_get(v_val_3379_, 0);
lean_inc_ref(v_toConstantVal_3383_);
lean_dec(v_val_3379_);
v_name_3384_ = lean_ctor_get(v_toConstantVal_3378_, 0);
lean_inc(v_name_3384_);
lean_dec_ref(v_toConstantVal_3378_);
v_name_3385_ = lean_ctor_get(v_toConstantVal_3383_, 0);
lean_inc(v_name_3385_);
lean_dec_ref(v_toConstantVal_3383_);
v___x_3386_ = lean_name_eq(v_name_3384_, v_name_3385_);
lean_dec(v_name_3385_);
lean_dec(v_name_3384_);
if (v___x_3386_ == 0)
{
lean_object* v___x_3387_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec_ref(v_config_3034_);
lean_inc(v_mvarId_3035_);
v___x_3387_ = l_Lean_MVarId_getType(v_mvarId_3035_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3387_) == 0)
{
lean_object* v_a_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; 
v_a_3388_ = lean_ctor_get(v___x_3387_, 0);
lean_inc(v_a_3388_);
lean_dec_ref_known(v___x_3387_, 1);
v___x_3389_ = l_Lean_LocalDecl_toExpr(v_val_3066_);
v___x_3390_ = l_Lean_Meta_mkNoConfusion(v_a_3388_, v___x_3389_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; lean_object* v___x_3392_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
lean_inc(v_a_3391_);
lean_dec_ref_known(v___x_3390_, 1);
v___x_3392_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3035_, v_a_3391_, v___y_3358_);
if (lean_obj_tag(v___x_3392_) == 0)
{
lean_object* v___x_3393_; lean_object* v___x_3395_; 
lean_dec_ref_known(v___x_3392_, 1);
v___x_3393_ = lean_box(v___x_3045_);
if (v_isShared_3382_ == 0)
{
lean_ctor_set(v___x_3381_, 0, v___x_3393_);
v___x_3395_ = v___x_3381_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v___x_3393_);
v___x_3395_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
lean_object* v___x_3397_; 
if (v_isShared_3369_ == 0)
{
lean_ctor_set(v___x_3368_, 1, v___x_3070_);
lean_ctor_set(v___x_3368_, 0, v___x_3395_);
v___x_3397_ = v___x_3368_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v___x_3395_);
lean_ctor_set(v_reuseFailAlloc_3401_, 1, v___x_3070_);
v___x_3397_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
lean_object* v___x_3399_; 
if (v_isShared_3375_ == 0)
{
lean_ctor_set_tag(v___x_3374_, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3397_);
v___x_3399_ = v___x_3374_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v___x_3397_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
v_a_3052_ = v___x_3399_;
goto v___jp_3051_;
}
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_del_object(v___x_3381_);
lean_del_object(v___x_3374_);
lean_del_object(v___x_3368_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3403_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3392_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3392_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_del_object(v___x_3381_);
lean_del_object(v___x_3374_);
lean_del_object(v___x_3368_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3411_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3390_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3390_);
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
else
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3426_; 
lean_del_object(v___x_3381_);
lean_del_object(v___x_3374_);
lean_del_object(v___x_3368_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3419_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3421_ = v___x_3387_;
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v___x_3387_);
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
else
{
lean_del_object(v___x_3381_);
lean_del_object(v___x_3374_);
lean_del_object(v___x_3368_);
v_isEq_3234_ = v___x_3045_;
v___y_3235_ = v___y_3357_;
v___y_3236_ = v___y_3358_;
v___y_3237_ = v___y_3359_;
v___y_3238_ = v___y_3360_;
goto v___jp_3233_;
}
}
}
else
{
lean_dec(v_a_3377_);
lean_del_object(v___x_3374_);
lean_dec(v_val_3372_);
lean_del_object(v___x_3368_);
v_isEq_3234_ = v___x_3045_;
v___y_3235_ = v___y_3357_;
v___y_3236_ = v___y_3358_;
v___y_3237_ = v___y_3359_;
v___y_3238_ = v___y_3360_;
goto v___jp_3233_;
}
}
else
{
lean_object* v_a_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3435_; 
lean_del_object(v___x_3374_);
lean_dec(v_val_3372_);
lean_del_object(v___x_3368_);
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3428_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3435_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3435_ == 0)
{
v___x_3430_ = v___x_3376_;
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_a_3428_);
lean_dec(v___x_3376_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3435_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3433_; 
if (v_isShared_3431_ == 0)
{
v___x_3433_ = v___x_3430_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_a_3428_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
}
}
}
else
{
lean_dec(v_a_3371_);
lean_del_object(v___x_3368_);
lean_dec(v_snd_3366_);
v_isEq_3234_ = v___x_3045_;
v___y_3235_ = v___y_3357_;
v___y_3236_ = v___y_3358_;
v___y_3237_ = v___y_3359_;
v___y_3238_ = v___y_3360_;
goto v___jp_3233_;
}
}
else
{
lean_object* v_a_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3444_; 
lean_del_object(v___x_3368_);
lean_dec(v_snd_3366_);
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3437_ = lean_ctor_get(v___x_3370_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3370_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3439_ = v___x_3370_;
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_a_3437_);
lean_dec(v___x_3370_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3442_; 
if (v_isShared_3440_ == 0)
{
v___x_3442_ = v___x_3439_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_a_3437_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
}
}
}
else
{
lean_dec(v_a_3362_);
v_isEq_3234_ = v___x_3099_;
v___y_3235_ = v___y_3357_;
v___y_3236_ = v___y_3358_;
v___y_3237_ = v___y_3359_;
v___y_3238_ = v___y_3360_;
goto v___jp_3233_;
}
}
else
{
lean_object* v_a_3446_; lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3453_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3446_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3453_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3453_ == 0)
{
v___x_3448_ = v___x_3361_;
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
else
{
lean_inc(v_a_3446_);
lean_dec(v___x_3361_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3453_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3451_; 
if (v_isShared_3449_ == 0)
{
v___x_3451_ = v___x_3448_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v_a_3446_);
v___x_3451_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
return v___x_3451_;
}
}
}
}
v___jp_3454_:
{
lean_object* v___x_3459_; 
lean_inc_ref(v___x_3100_);
v___x_3459_ = l_Lean_refutableHasNotBit_x3f(v___x_3100_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_a_3460_);
lean_dec_ref_known(v___x_3459_, 1);
if (lean_obj_tag(v_a_3460_) == 1)
{
lean_object* v_val_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3501_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec_ref(v_config_3034_);
v_val_3461_ = lean_ctor_get(v_a_3460_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v_a_3460_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3463_ = v_a_3460_;
v_isShared_3464_ = v_isSharedCheck_3501_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_val_3461_);
lean_dec(v_a_3460_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3501_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3465_; 
lean_inc(v_mvarId_3035_);
v___x_3465_ = l_Lean_MVarId_getType(v_mvarId_3035_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_object* v_a_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v_a_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3466_);
lean_dec_ref_known(v___x_3465_, 1);
v___x_3467_ = l_Lean_LocalDecl_toExpr(v_val_3066_);
v___x_3468_ = l_Lean_Meta_mkAbsurd(v_a_3466_, v_val_3461_, v___x_3467_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v_a_3469_; lean_object* v___x_3470_; 
v_a_3469_ = lean_ctor_get(v___x_3468_, 0);
lean_inc(v_a_3469_);
lean_dec_ref_known(v___x_3468_, 1);
v___x_3470_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3035_, v_a_3469_, v___y_3456_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v___x_3471_; lean_object* v___x_3473_; 
lean_dec_ref_known(v___x_3470_, 1);
v___x_3471_ = lean_box(v___x_3045_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v___x_3471_);
v___x_3473_ = v___x_3463_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v___x_3471_);
v___x_3473_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3474_, 0, v___x_3473_);
lean_ctor_set(v___x_3474_, 1, v___x_3070_);
v___x_3475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
v_a_3052_ = v___x_3475_;
goto v___jp_3051_;
}
}
else
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3484_; 
lean_del_object(v___x_3463_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3477_ = lean_ctor_get(v___x_3470_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3479_ = v___x_3470_;
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v___x_3470_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3484_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
lean_del_object(v___x_3463_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3485_ = lean_ctor_get(v___x_3468_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3468_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3468_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3485_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_del_object(v___x_3463_);
lean_dec(v_val_3461_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3493_ = lean_ctor_get(v___x_3465_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3465_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3465_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3465_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
else
{
lean_object* v___x_3502_; 
lean_dec(v_a_3460_);
lean_inc_ref(v___x_3100_);
v___x_3502_ = l_Lean_Meta_matchNe_x3f(v___x_3100_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v_a_3503_; 
v_a_3503_ = lean_ctor_get(v___x_3502_, 0);
lean_inc(v_a_3503_);
lean_dec_ref_known(v___x_3502_, 1);
if (lean_obj_tag(v_a_3503_) == 1)
{
lean_object* v_val_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3574_; 
v_val_3504_ = lean_ctor_get(v_a_3503_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v_a_3503_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3506_ = v_a_3503_;
v_isShared_3507_ = v_isSharedCheck_3574_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_val_3504_);
lean_dec(v_a_3503_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3574_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v_snd_3508_; lean_object* v_fst_3509_; lean_object* v_snd_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3573_; 
v_snd_3508_ = lean_ctor_get(v_val_3504_, 1);
lean_inc(v_snd_3508_);
lean_dec(v_val_3504_);
v_fst_3509_ = lean_ctor_get(v_snd_3508_, 0);
v_snd_3510_ = lean_ctor_get(v_snd_3508_, 1);
v_isSharedCheck_3573_ = !lean_is_exclusive(v_snd_3508_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3512_ = v_snd_3508_;
v_isShared_3513_ = v_isSharedCheck_3573_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_snd_3510_);
lean_inc(v_fst_3509_);
lean_dec(v_snd_3508_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3573_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3514_; 
lean_inc(v_fst_3509_);
v___x_3514_ = l_Lean_Meta_isExprDefEq(v_fst_3509_, v_snd_3510_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v_a_3515_; uint8_t v___x_3516_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
lean_inc(v_a_3515_);
lean_dec_ref_known(v___x_3514_, 1);
v___x_3516_ = lean_unbox(v_a_3515_);
lean_dec(v_a_3515_);
if (v___x_3516_ == 0)
{
lean_del_object(v___x_3512_);
lean_dec(v_fst_3509_);
lean_del_object(v___x_3506_);
v___y_3357_ = v___y_3455_;
v___y_3358_ = v___y_3456_;
v___y_3359_ = v___y_3457_;
v___y_3360_ = v___y_3458_;
goto v___jp_3356_;
}
else
{
lean_object* v___x_3517_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec_ref(v_config_3034_);
lean_inc(v_mvarId_3035_);
v___x_3517_ = l_Lean_MVarId_getType(v_mvarId_3035_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3517_) == 0)
{
lean_object* v_a_3518_; lean_object* v___x_3519_; 
v_a_3518_ = lean_ctor_get(v___x_3517_, 0);
lean_inc(v_a_3518_);
lean_dec_ref_known(v___x_3517_, 1);
v___x_3519_ = l_Lean_Meta_mkEqRefl(v_fst_3509_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v_a_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; 
v_a_3520_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_a_3520_);
lean_dec_ref_known(v___x_3519_, 1);
v___x_3521_ = l_Lean_LocalDecl_toExpr(v_val_3066_);
v___x_3522_ = l_Lean_Meta_mkAbsurd(v_a_3518_, v_a_3520_, v___x_3521_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; lean_object* v___x_3524_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_a_3523_);
lean_dec_ref_known(v___x_3522_, 1);
v___x_3524_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3035_, v_a_3523_, v___y_3456_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v___x_3525_; lean_object* v___x_3527_; 
lean_dec_ref_known(v___x_3524_, 1);
v___x_3525_ = lean_box(v___x_3045_);
if (v_isShared_3507_ == 0)
{
lean_ctor_set(v___x_3506_, 0, v___x_3525_);
v___x_3527_ = v___x_3506_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v___x_3525_);
v___x_3527_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
lean_object* v___x_3529_; 
if (v_isShared_3513_ == 0)
{
lean_ctor_set(v___x_3512_, 1, v___x_3070_);
lean_ctor_set(v___x_3512_, 0, v___x_3527_);
v___x_3529_ = v___x_3512_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3527_);
lean_ctor_set(v_reuseFailAlloc_3531_, 1, v___x_3070_);
v___x_3529_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
lean_object* v___x_3530_; 
v___x_3530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
v_a_3052_ = v___x_3530_;
goto v___jp_3051_;
}
}
}
else
{
lean_object* v_a_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3540_; 
lean_del_object(v___x_3512_);
lean_del_object(v___x_3506_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3533_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3535_ = v___x_3524_;
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_a_3533_);
lean_dec(v___x_3524_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3538_; 
if (v_isShared_3536_ == 0)
{
v___x_3538_ = v___x_3535_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_a_3533_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_del_object(v___x_3512_);
lean_del_object(v___x_3506_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3541_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3522_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3522_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
else
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3556_; 
lean_dec(v_a_3518_);
lean_del_object(v___x_3512_);
lean_del_object(v___x_3506_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3549_ = lean_ctor_get(v___x_3519_, 0);
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3556_ == 0)
{
v___x_3551_ = v___x_3519_;
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3519_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3554_; 
if (v_isShared_3552_ == 0)
{
v___x_3554_ = v___x_3551_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_a_3549_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
}
else
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3564_; 
lean_del_object(v___x_3512_);
lean_dec(v_fst_3509_);
lean_del_object(v___x_3506_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
v_a_3557_ = lean_ctor_get(v___x_3517_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3517_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3559_ = v___x_3517_;
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3517_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3562_; 
if (v_isShared_3560_ == 0)
{
v___x_3562_ = v___x_3559_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v_a_3557_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
}
}
else
{
lean_object* v_a_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3572_; 
lean_del_object(v___x_3512_);
lean_dec(v_fst_3509_);
lean_del_object(v___x_3506_);
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3565_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3567_ = v___x_3514_;
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_a_3565_);
lean_dec(v___x_3514_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3570_; 
if (v_isShared_3568_ == 0)
{
v___x_3570_ = v___x_3567_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3565_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3503_);
v___y_3357_ = v___y_3455_;
v___y_3358_ = v___y_3456_;
v___y_3359_ = v___y_3457_;
v___y_3360_ = v___y_3458_;
goto v___jp_3356_;
}
}
else
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3575_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3502_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3502_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
lean_dec_ref(v___x_3100_);
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3583_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3459_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3459_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
}
else
{
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3060_ = v___x_3071_;
goto v___jp_3059_;
}
v___jp_3072_:
{
uint8_t v_emptyType_3079_; 
v_emptyType_3079_ = lean_ctor_get_uint8(v_config_3034_, sizeof(void*)*1 + 1);
if (v_emptyType_3079_ == 0)
{
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3060_ = v___x_3071_;
goto v___jp_3059_;
}
else
{
if (v___y_3074_ == 0)
{
if (v___y_3073_ == 0)
{
lean_object* v_searchFuel_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v_searchFuel_3080_ = lean_ctor_get(v_config_3034_, 0);
v___x_3081_ = l_Lean_LocalDecl_fvarId(v_val_3066_);
lean_dec(v_val_3066_);
lean_inc(v_searchFuel_3080_);
lean_inc(v_mvarId_3035_);
v___x_3082_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3035_, v___x_3081_, v_searchFuel_3080_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; uint8_t v___x_3084_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3082_, 1);
v___x_3084_ = lean_unbox(v_a_3083_);
lean_dec(v_a_3083_);
if (v___x_3084_ == 0)
{
lean_del_object(v___x_3068_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3060_ = v___x_3071_;
goto v___jp_3059_;
}
else
{
lean_object* v___x_3085_; lean_object* v___x_3087_; 
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v___x_3085_ = lean_box(v___x_3045_);
if (v_isShared_3069_ == 0)
{
lean_ctor_set(v___x_3068_, 0, v___x_3085_);
v___x_3087_ = v___x_3068_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v___x_3085_);
v___x_3087_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3087_);
lean_ctor_set(v___x_3088_, 1, v___x_3070_);
v___x_3089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
v_a_3052_ = v___x_3089_;
goto v___jp_3051_;
}
}
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_del_object(v___x_3068_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
lean_dec(v_mvarId_3035_);
lean_dec_ref(v_config_3034_);
v_a_3091_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3082_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3082_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
else
{
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3060_ = v___x_3071_;
goto v___jp_3059_;
}
}
else
{
lean_del_object(v___x_3068_);
lean_dec(v_val_3066_);
lean_del_object(v___x_3049_);
lean_dec(v_snd_3047_);
v_a_3060_ = v___x_3071_;
goto v___jp_3059_;
}
}
}
}
}
v___jp_3051_:
{
lean_object* v___x_3053_; lean_object* v___x_3055_; 
v___x_3053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3053_, 0, v_a_3052_);
if (v_isShared_3050_ == 0)
{
lean_ctor_set(v___x_3049_, 0, v___x_3053_);
v___x_3055_ = v___x_3049_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v___x_3053_);
lean_ctor_set(v_reuseFailAlloc_3057_, 1, v_snd_3047_);
v___x_3055_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
lean_object* v___x_3056_; 
v___x_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3055_);
return v___x_3056_;
}
}
v___jp_3059_:
{
lean_object* v___x_3061_; size_t v___x_3062_; size_t v___x_3063_; 
v___x_3061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3058_);
lean_ctor_set(v___x_3061_, 1, v_a_3060_);
v___x_3062_ = ((size_t)1ULL);
v___x_3063_ = lean_usize_add(v_i_3038_, v___x_3062_);
v_i_3038_ = v___x_3063_;
v_b_3039_ = v___x_3061_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_config_3664_, lean_object* v_mvarId_3665_, lean_object* v_as_3666_, lean_object* v_sz_3667_, lean_object* v_i_3668_, lean_object* v_b_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
size_t v_sz_boxed_3675_; size_t v_i_boxed_3676_; lean_object* v_res_3677_; 
v_sz_boxed_3675_ = lean_unbox_usize(v_sz_3667_);
lean_dec(v_sz_3667_);
v_i_boxed_3676_ = lean_unbox_usize(v_i_3668_);
lean_dec(v_i_3668_);
v_res_3677_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3664_, v_mvarId_3665_, v_as_3666_, v_sz_boxed_3675_, v_i_boxed_3676_, v_b_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec_ref(v_as_3666_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object* v_config_3678_, lean_object* v_mvarId_3679_, lean_object* v_as_3680_, size_t v_sz_3681_, size_t v_i_3682_, lean_object* v_b_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_){
_start:
{
uint8_t v___x_3689_; 
v___x_3689_ = lean_usize_dec_lt(v_i_3682_, v_sz_3681_);
if (v___x_3689_ == 0)
{
lean_object* v___x_3690_; 
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v___x_3690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3690_, 0, v_b_3683_);
return v___x_3690_;
}
else
{
lean_object* v_snd_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_4306_; 
v_snd_3691_ = lean_ctor_get(v_b_3683_, 1);
v_isSharedCheck_4306_ = !lean_is_exclusive(v_b_3683_);
if (v_isSharedCheck_4306_ == 0)
{
lean_object* v_unused_4307_; 
v_unused_4307_ = lean_ctor_get(v_b_3683_, 0);
lean_dec(v_unused_4307_);
v___x_3693_ = v_b_3683_;
v_isShared_3694_ = v_isSharedCheck_4306_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_snd_3691_);
lean_dec(v_b_3683_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_4306_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v_a_3696_; lean_object* v___x_3702_; lean_object* v_a_3704_; lean_object* v_a_3709_; 
v___x_3702_ = lean_box(0);
v_a_3709_ = lean_array_uget(v_as_3680_, v_i_3682_);
if (lean_obj_tag(v_a_3709_) == 0)
{
lean_del_object(v___x_3693_);
v_a_3704_ = v_snd_3691_;
goto v___jp_3703_;
}
else
{
lean_object* v_val_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_4305_; 
v_val_3710_ = lean_ctor_get(v_a_3709_, 0);
v_isSharedCheck_4305_ = !lean_is_exclusive(v_a_3709_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_3712_ = v_a_3709_;
v_isShared_3713_ = v_isSharedCheck_4305_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_val_3710_);
lean_dec(v_a_3709_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_4305_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; uint8_t v___y_3717_; uint8_t v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v___y_3722_; uint8_t v___x_3743_; 
v___x_3714_ = lean_box(0);
v___x_3715_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3743_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3710_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; uint8_t v___y_3746_; uint8_t v___y_3747_; lean_object* v___y_3748_; lean_object* v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3751_; uint8_t v___y_3770_; lean_object* v___y_3771_; lean_object* v___y_3772_; uint8_t v___y_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v_a_3776_; uint8_t v___y_3782_; lean_object* v___y_3783_; lean_object* v___y_3784_; lean_object* v___y_3785_; uint8_t v___y_3786_; lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3789_; uint8_t v___y_3833_; uint8_t v_isHEq_3834_; lean_object* v___y_3835_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; uint8_t v_isEq_3878_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4003_; lean_object* v___y_4004_; lean_object* v___y_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4102_; lean_object* v___x_4235_; 
v___x_3744_ = l_Lean_LocalDecl_type(v_val_3710_);
lean_inc_ref(v___x_3744_);
v___x_4235_ = l_Lean_Meta_matchNot_x3f(v___x_3744_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_);
if (lean_obj_tag(v___x_4235_) == 0)
{
lean_object* v_a_4236_; 
v_a_4236_ = lean_ctor_get(v___x_4235_, 0);
lean_inc(v_a_4236_);
lean_dec_ref_known(v___x_4235_, 1);
if (lean_obj_tag(v_a_4236_) == 1)
{
lean_object* v_val_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4296_; 
v_val_4237_ = lean_ctor_get(v_a_4236_, 0);
v_isSharedCheck_4296_ = !lean_is_exclusive(v_a_4236_);
if (v_isSharedCheck_4296_ == 0)
{
v___x_4239_ = v_a_4236_;
v_isShared_4240_ = v_isSharedCheck_4296_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_val_4237_);
lean_dec(v_a_4236_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4296_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4241_; 
v___x_4241_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_4237_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_);
if (lean_obj_tag(v___x_4241_) == 0)
{
lean_object* v_a_4242_; 
v_a_4242_ = lean_ctor_get(v___x_4241_, 0);
lean_inc(v_a_4242_);
lean_dec_ref_known(v___x_4241_, 1);
if (lean_obj_tag(v_a_4242_) == 1)
{
lean_object* v_val_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4287_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec_ref(v_config_3678_);
v_val_4243_ = lean_ctor_get(v_a_4242_, 0);
v_isSharedCheck_4287_ = !lean_is_exclusive(v_a_4242_);
if (v_isSharedCheck_4287_ == 0)
{
v___x_4245_ = v_a_4242_;
v_isShared_4246_ = v_isSharedCheck_4287_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_val_4243_);
lean_dec(v_a_4242_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4287_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4247_; 
lean_inc(v_mvarId_3679_);
v___x_4247_ = l_Lean_MVarId_getType(v_mvarId_3679_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
lean_inc(v_a_4248_);
lean_dec_ref_known(v___x_4247_, 1);
v___x_4249_ = l_Lean_LocalDecl_toExpr(v_val_3710_);
v___x_4250_ = l_Lean_mkFVar(v_val_4243_);
v___x_4251_ = l_Lean_Expr_app___override(v___x_4249_, v___x_4250_);
v___x_4252_ = l_Lean_Meta_mkFalseElim(v_a_4248_, v___x_4251_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_);
if (lean_obj_tag(v___x_4252_) == 0)
{
lean_object* v_a_4253_; lean_object* v___x_4254_; 
v_a_4253_ = lean_ctor_get(v___x_4252_, 0);
lean_inc(v_a_4253_);
lean_dec_ref_known(v___x_4252_, 1);
v___x_4254_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3679_, v_a_4253_, v___y_3685_);
if (lean_obj_tag(v___x_4254_) == 0)
{
lean_object* v___x_4255_; lean_object* v___x_4257_; 
lean_dec_ref_known(v___x_4254_, 1);
v___x_4255_ = lean_box(v___x_3689_);
if (v_isShared_4246_ == 0)
{
lean_ctor_set(v___x_4245_, 0, v___x_4255_);
v___x_4257_ = v___x_4245_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v___x_4255_);
v___x_4257_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
lean_object* v___x_4258_; lean_object* v___x_4260_; 
v___x_4258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4257_);
lean_ctor_set(v___x_4258_, 1, v___x_3714_);
if (v_isShared_4240_ == 0)
{
lean_ctor_set_tag(v___x_4239_, 0);
lean_ctor_set(v___x_4239_, 0, v___x_4258_);
v___x_4260_ = v___x_4239_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v___x_4258_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
v_a_3696_ = v___x_4260_;
goto v___jp_3695_;
}
}
}
else
{
lean_object* v_a_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4270_; 
lean_del_object(v___x_4245_);
lean_del_object(v___x_4239_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_4263_ = lean_ctor_get(v___x_4254_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4265_ = v___x_4254_;
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_a_4263_);
lean_dec(v___x_4254_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
lean_object* v___x_4268_; 
if (v_isShared_4266_ == 0)
{
v___x_4268_ = v___x_4265_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_a_4263_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
}
}
}
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4278_; 
lean_del_object(v___x_4245_);
lean_del_object(v___x_4239_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4271_ = lean_ctor_get(v___x_4252_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4252_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4273_ = v___x_4252_;
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4252_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4276_; 
if (v_isShared_4274_ == 0)
{
v___x_4276_ = v___x_4273_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4271_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
return v___x_4276_;
}
}
}
}
else
{
lean_object* v_a_4279_; lean_object* v___x_4281_; uint8_t v_isShared_4282_; uint8_t v_isSharedCheck_4286_; 
lean_del_object(v___x_4245_);
lean_dec(v_val_4243_);
lean_del_object(v___x_4239_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4279_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4286_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4286_ == 0)
{
v___x_4281_ = v___x_4247_;
v_isShared_4282_ = v_isSharedCheck_4286_;
goto v_resetjp_4280_;
}
else
{
lean_inc(v_a_4279_);
lean_dec(v___x_4247_);
v___x_4281_ = lean_box(0);
v_isShared_4282_ = v_isSharedCheck_4286_;
goto v_resetjp_4280_;
}
v_resetjp_4280_:
{
lean_object* v___x_4284_; 
if (v_isShared_4282_ == 0)
{
v___x_4284_ = v___x_4281_;
goto v_reusejp_4283_;
}
else
{
lean_object* v_reuseFailAlloc_4285_; 
v_reuseFailAlloc_4285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4285_, 0, v_a_4279_);
v___x_4284_ = v_reuseFailAlloc_4285_;
goto v_reusejp_4283_;
}
v_reusejp_4283_:
{
return v___x_4284_;
}
}
}
}
}
else
{
lean_dec(v_a_4242_);
lean_del_object(v___x_4239_);
v___y_4099_ = v___y_3684_;
v___y_4100_ = v___y_3685_;
v___y_4101_ = v___y_3686_;
v___y_4102_ = v___y_3687_;
goto v___jp_4098_;
}
}
else
{
lean_object* v_a_4288_; lean_object* v___x_4290_; uint8_t v_isShared_4291_; uint8_t v_isSharedCheck_4295_; 
lean_del_object(v___x_4239_);
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_4288_ = lean_ctor_get(v___x_4241_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4241_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4290_ = v___x_4241_;
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
else
{
lean_inc(v_a_4288_);
lean_dec(v___x_4241_);
v___x_4290_ = lean_box(0);
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
v_resetjp_4289_:
{
lean_object* v___x_4293_; 
if (v_isShared_4291_ == 0)
{
v___x_4293_ = v___x_4290_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_a_4288_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
return v___x_4293_;
}
}
}
}
}
else
{
lean_dec(v_a_4236_);
v___y_4099_ = v___y_3684_;
v___y_4100_ = v___y_3685_;
v___y_4101_ = v___y_3686_;
v___y_4102_ = v___y_3687_;
goto v___jp_4098_;
}
}
else
{
lean_object* v_a_4297_; lean_object* v___x_4299_; uint8_t v_isShared_4300_; uint8_t v_isSharedCheck_4304_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_4297_ = lean_ctor_get(v___x_4235_, 0);
v_isSharedCheck_4304_ = !lean_is_exclusive(v___x_4235_);
if (v_isSharedCheck_4304_ == 0)
{
v___x_4299_ = v___x_4235_;
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
else
{
lean_inc(v_a_4297_);
lean_dec(v___x_4235_);
v___x_4299_ = lean_box(0);
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
v_resetjp_4298_:
{
lean_object* v___x_4302_; 
if (v_isShared_4300_ == 0)
{
v___x_4302_ = v___x_4299_;
goto v_reusejp_4301_;
}
else
{
lean_object* v_reuseFailAlloc_4303_; 
v_reuseFailAlloc_4303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4303_, 0, v_a_4297_);
v___x_4302_ = v_reuseFailAlloc_4303_;
goto v_reusejp_4301_;
}
v_reusejp_4301_:
{
return v___x_4302_;
}
}
}
v___jp_3745_:
{
uint8_t v_genDiseq_3752_; 
v_genDiseq_3752_ = lean_ctor_get_uint8(v_config_3678_, sizeof(void*)*1 + 2);
if (v_genDiseq_3752_ == 0)
{
lean_dec_ref(v___x_3744_);
v___y_3717_ = v___y_3746_;
v___y_3718_ = v___y_3747_;
v___y_3719_ = v___y_3748_;
v___y_3720_ = v___y_3749_;
v___y_3721_ = v___y_3750_;
v___y_3722_ = v___y_3751_;
goto v___jp_3716_;
}
else
{
uint8_t v___x_3753_; 
v___x_3753_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_3744_);
if (v___x_3753_ == 0)
{
v___y_3717_ = v___y_3746_;
v___y_3718_ = v___y_3747_;
v___y_3719_ = v___y_3748_;
v___y_3720_ = v___y_3749_;
v___y_3721_ = v___y_3750_;
v___y_3722_ = v___y_3751_;
goto v___jp_3716_;
}
else
{
lean_object* v___x_3754_; 
lean_inc(v_val_3710_);
lean_inc(v_mvarId_3679_);
v___x_3754_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3679_, v_val_3710_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_);
if (lean_obj_tag(v___x_3754_) == 0)
{
lean_object* v_a_3755_; uint8_t v___x_3756_; 
v_a_3755_ = lean_ctor_get(v___x_3754_, 0);
lean_inc(v_a_3755_);
lean_dec_ref_known(v___x_3754_, 1);
v___x_3756_ = lean_unbox(v_a_3755_);
lean_dec(v_a_3755_);
if (v___x_3756_ == 0)
{
v___y_3717_ = v___y_3746_;
v___y_3718_ = v___y_3747_;
v___y_3719_ = v___y_3748_;
v___y_3720_ = v___y_3749_;
v___y_3721_ = v___y_3750_;
v___y_3722_ = v___y_3751_;
goto v___jp_3716_;
}
else
{
lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v___x_3757_ = lean_box(v___x_3689_);
v___x_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3757_);
v___x_3759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3758_);
lean_ctor_set(v___x_3759_, 1, v___x_3714_);
v___x_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
v_a_3696_ = v___x_3760_;
goto v___jp_3695_;
}
}
else
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3768_; 
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_3761_ = lean_ctor_get(v___x_3754_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3754_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3763_ = v___x_3754_;
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3754_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3766_; 
if (v_isShared_3764_ == 0)
{
v___x_3766_ = v___x_3763_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v_a_3761_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
}
}
}
v___jp_3769_:
{
uint8_t v___x_3777_; 
v___x_3777_ = l_Lean_Exception_isInterrupt(v_a_3776_);
if (v___x_3777_ == 0)
{
uint8_t v___x_3778_; 
lean_inc_ref(v_a_3776_);
v___x_3778_ = l_Lean_Exception_isRuntime(v_a_3776_);
if (v___x_3778_ == 0)
{
lean_dec_ref(v_a_3776_);
v___y_3746_ = v___y_3770_;
v___y_3747_ = v___y_3773_;
v___y_3748_ = v___y_3775_;
v___y_3749_ = v___y_3774_;
v___y_3750_ = v___y_3771_;
v___y_3751_ = v___y_3772_;
goto v___jp_3745_;
}
else
{
lean_object* v___x_3779_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v___x_3779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3779_, 0, v_a_3776_);
return v___x_3779_;
}
}
else
{
lean_object* v___x_3780_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v___x_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3780_, 0, v_a_3776_);
return v___x_3780_;
}
}
v___jp_3781_:
{
if (lean_obj_tag(v___y_3789_) == 0)
{
lean_object* v_a_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; 
v_a_3790_ = lean_ctor_get(v___y_3789_, 0);
lean_inc(v_a_3790_);
lean_dec_ref_known(v___y_3789_, 1);
v___x_3791_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3));
v___x_3792_ = l_Lean_Expr_isConstOf(v_a_3790_, v___x_3791_);
lean_dec(v_a_3790_);
if (v___x_3792_ == 0)
{
lean_dec_ref(v___y_3785_);
v___y_3746_ = v___y_3782_;
v___y_3747_ = v___y_3786_;
v___y_3748_ = v___y_3788_;
v___y_3749_ = v___y_3787_;
v___y_3750_ = v___y_3783_;
v___y_3751_ = v___y_3784_;
goto v___jp_3745_;
}
else
{
lean_object* v___x_3793_; 
lean_inc_ref(v___y_3785_);
v___x_3793_ = l_Lean_Meta_mkEqRefl(v___y_3785_, v___y_3788_, v___y_3787_, v___y_3783_, v___y_3784_);
if (lean_obj_tag(v___x_3793_) == 0)
{
lean_object* v_a_3794_; lean_object* v___x_3795_; lean_object* v_dummy_3796_; lean_object* v_nargs_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v_a_3794_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3794_);
lean_dec_ref_known(v___x_3793_, 1);
v___x_3795_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6);
v_dummy_3796_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_nargs_3797_ = l_Lean_Expr_getAppNumArgs(v___y_3785_);
lean_inc(v_nargs_3797_);
v___x_3798_ = lean_mk_array(v_nargs_3797_, v_dummy_3796_);
v___x_3799_ = lean_unsigned_to_nat(1u);
v___x_3800_ = lean_nat_sub(v_nargs_3797_, v___x_3799_);
lean_dec(v_nargs_3797_);
v___x_3801_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_3785_, v___x_3798_, v___x_3800_);
v___x_3802_ = lean_array_push(v___x_3801_, v_a_3794_);
v___x_3803_ = l_Lean_mkAppN(v___x_3795_, v___x_3802_);
lean_dec_ref(v___x_3802_);
lean_inc(v_mvarId_3679_);
v___x_3804_ = l_Lean_MVarId_getType(v_mvarId_3679_, v___y_3788_, v___y_3787_, v___y_3783_, v___y_3784_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v_a_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v_a_3805_ = lean_ctor_get(v___x_3804_, 0);
lean_inc(v_a_3805_);
lean_dec_ref_known(v___x_3804_, 1);
lean_inc(v_val_3710_);
v___x_3806_ = l_Lean_LocalDecl_toExpr(v_val_3710_);
v___x_3807_ = l_Lean_Meta_mkAbsurd(v_a_3805_, v___x_3806_, v___x_3803_, v___y_3788_, v___y_3787_, v___y_3783_, v___y_3784_);
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v_a_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3827_; 
v_a_3808_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_3827_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_3827_ == 0)
{
v___x_3810_ = v___x_3807_;
v_isShared_3811_ = v_isSharedCheck_3827_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_a_3808_);
lean_dec(v___x_3807_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3827_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3812_; 
lean_inc(v_mvarId_3679_);
v___x_3812_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3679_, v_a_3808_, v___y_3787_);
if (lean_obj_tag(v___x_3812_) == 0)
{
lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3824_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3824_ == 0)
{
lean_object* v_unused_3825_; 
v_unused_3825_ = lean_ctor_get(v___x_3812_, 0);
lean_dec(v_unused_3825_);
v___x_3814_ = v___x_3812_;
v_isShared_3815_ = v_isSharedCheck_3824_;
goto v_resetjp_3813_;
}
else
{
lean_dec(v___x_3812_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3824_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3816_; lean_object* v___x_3818_; 
v___x_3816_ = lean_box(v___x_3689_);
if (v_isShared_3815_ == 0)
{
lean_ctor_set_tag(v___x_3814_, 1);
lean_ctor_set(v___x_3814_, 0, v___x_3816_);
v___x_3818_ = v___x_3814_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3816_);
v___x_3818_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
lean_object* v___x_3819_; lean_object* v___x_3821_; 
v___x_3819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3818_);
lean_ctor_set(v___x_3819_, 1, v___x_3714_);
if (v_isShared_3811_ == 0)
{
lean_ctor_set(v___x_3810_, 0, v___x_3819_);
v___x_3821_ = v___x_3810_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v___x_3819_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
v_a_3696_ = v___x_3821_;
goto v___jp_3695_;
}
}
}
}
else
{
lean_object* v_a_3826_; 
lean_del_object(v___x_3810_);
v_a_3826_ = lean_ctor_get(v___x_3812_, 0);
lean_inc(v_a_3826_);
lean_dec_ref_known(v___x_3812_, 1);
v___y_3770_ = v___y_3782_;
v___y_3771_ = v___y_3783_;
v___y_3772_ = v___y_3784_;
v___y_3773_ = v___y_3786_;
v___y_3774_ = v___y_3787_;
v___y_3775_ = v___y_3788_;
v_a_3776_ = v_a_3826_;
goto v___jp_3769_;
}
}
}
else
{
lean_object* v_a_3828_; 
v_a_3828_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_a_3828_);
lean_dec_ref_known(v___x_3807_, 1);
v___y_3770_ = v___y_3782_;
v___y_3771_ = v___y_3783_;
v___y_3772_ = v___y_3784_;
v___y_3773_ = v___y_3786_;
v___y_3774_ = v___y_3787_;
v___y_3775_ = v___y_3788_;
v_a_3776_ = v_a_3828_;
goto v___jp_3769_;
}
}
else
{
lean_object* v_a_3829_; 
lean_dec_ref(v___x_3803_);
v_a_3829_ = lean_ctor_get(v___x_3804_, 0);
lean_inc(v_a_3829_);
lean_dec_ref_known(v___x_3804_, 1);
v___y_3770_ = v___y_3782_;
v___y_3771_ = v___y_3783_;
v___y_3772_ = v___y_3784_;
v___y_3773_ = v___y_3786_;
v___y_3774_ = v___y_3787_;
v___y_3775_ = v___y_3788_;
v_a_3776_ = v_a_3829_;
goto v___jp_3769_;
}
}
else
{
lean_object* v_a_3830_; 
lean_dec_ref(v___y_3785_);
v_a_3830_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3830_);
lean_dec_ref_known(v___x_3793_, 1);
v___y_3770_ = v___y_3782_;
v___y_3771_ = v___y_3783_;
v___y_3772_ = v___y_3784_;
v___y_3773_ = v___y_3786_;
v___y_3774_ = v___y_3787_;
v___y_3775_ = v___y_3788_;
v_a_3776_ = v_a_3830_;
goto v___jp_3769_;
}
}
}
else
{
lean_object* v_a_3831_; 
lean_dec_ref(v___y_3785_);
v_a_3831_ = lean_ctor_get(v___y_3789_, 0);
lean_inc(v_a_3831_);
lean_dec_ref_known(v___y_3789_, 1);
v___y_3770_ = v___y_3782_;
v___y_3771_ = v___y_3783_;
v___y_3772_ = v___y_3784_;
v___y_3773_ = v___y_3786_;
v___y_3774_ = v___y_3787_;
v___y_3775_ = v___y_3788_;
v_a_3776_ = v_a_3831_;
goto v___jp_3769_;
}
}
v___jp_3832_:
{
uint8_t v_useDecide_3839_; 
v_useDecide_3839_ = lean_ctor_get_uint8(v_config_3678_, sizeof(void*)*1);
if (v_useDecide_3839_ == 0)
{
v___y_3746_ = v___y_3833_;
v___y_3747_ = v_isHEq_3834_;
v___y_3748_ = v___y_3835_;
v___y_3749_ = v___y_3836_;
v___y_3750_ = v___y_3837_;
v___y_3751_ = v___y_3838_;
goto v___jp_3745_;
}
else
{
uint8_t v___x_3840_; 
v___x_3840_ = l_Lean_Expr_hasFVar(v___x_3744_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3841_; 
lean_inc_ref(v___x_3744_);
v___x_3841_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_3744_, v___y_3836_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; uint8_t v___x_3843_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
lean_inc(v_a_3842_);
lean_dec_ref_known(v___x_3841_, 1);
v___x_3843_ = l_Lean_Expr_hasMVar(v_a_3842_);
if (v___x_3843_ == 0)
{
uint8_t v___x_3844_; 
v___x_3844_ = l_Lean_Expr_hasFVar(v_a_3842_);
lean_dec(v_a_3842_);
if (v___x_3844_ == 0)
{
lean_object* v___x_3845_; 
lean_inc_ref(v___x_3744_);
v___x_3845_ = l_Lean_Meta_mkDecide(v___x_3744_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
if (lean_obj_tag(v___x_3845_) == 0)
{
lean_object* v_a_3846_; lean_object* v___x_3847_; uint8_t v_transparency_3848_; uint8_t v___x_3849_; uint8_t v___x_3850_; 
v_a_3846_ = lean_ctor_get(v___x_3845_, 0);
lean_inc(v_a_3846_);
lean_dec_ref_known(v___x_3845_, 1);
v___x_3847_ = l_Lean_Meta_Context_config(v___y_3835_);
v_transparency_3848_ = lean_ctor_get_uint8(v___x_3847_, 9);
lean_dec_ref(v___x_3847_);
v___x_3849_ = 1;
v___x_3850_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3848_, v___x_3849_);
if (v___x_3850_ == 0)
{
lean_object* v_keyedConfig_3851_; uint8_t v_trackZetaDelta_3852_; lean_object* v_zetaDeltaSet_3853_; lean_object* v_lctx_3854_; lean_object* v_localInstances_3855_; lean_object* v_defEqCtx_x3f_3856_; lean_object* v_synthPendingDepth_3857_; lean_object* v_customCanUnfoldPredicate_x3f_3858_; uint8_t v_univApprox_3859_; uint8_t v_inTypeClassResolution_3860_; uint8_t v_cacheInferType_3861_; lean_object* v_rewriteSet_x3f_3862_; uint8_t v_rewriteFuelScope_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v_keyedConfig_3851_ = lean_ctor_get(v___y_3835_, 0);
v_trackZetaDelta_3852_ = lean_ctor_get_uint8(v___y_3835_, sizeof(void*)*8);
v_zetaDeltaSet_3853_ = lean_ctor_get(v___y_3835_, 1);
v_lctx_3854_ = lean_ctor_get(v___y_3835_, 2);
v_localInstances_3855_ = lean_ctor_get(v___y_3835_, 3);
v_defEqCtx_x3f_3856_ = lean_ctor_get(v___y_3835_, 4);
v_synthPendingDepth_3857_ = lean_ctor_get(v___y_3835_, 5);
v_customCanUnfoldPredicate_x3f_3858_ = lean_ctor_get(v___y_3835_, 6);
v_univApprox_3859_ = lean_ctor_get_uint8(v___y_3835_, sizeof(void*)*8 + 1);
v_inTypeClassResolution_3860_ = lean_ctor_get_uint8(v___y_3835_, sizeof(void*)*8 + 2);
v_cacheInferType_3861_ = lean_ctor_get_uint8(v___y_3835_, sizeof(void*)*8 + 3);
v_rewriteSet_x3f_3862_ = lean_ctor_get(v___y_3835_, 7);
v_rewriteFuelScope_3863_ = lean_ctor_get_uint8(v___y_3835_, sizeof(void*)*8 + 4);
lean_inc_ref(v_keyedConfig_3851_);
v___x_3864_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3849_, v_keyedConfig_3851_);
lean_inc(v_rewriteSet_x3f_3862_);
lean_inc(v_customCanUnfoldPredicate_x3f_3858_);
lean_inc(v_synthPendingDepth_3857_);
lean_inc(v_defEqCtx_x3f_3856_);
lean_inc_ref(v_localInstances_3855_);
lean_inc_ref(v_lctx_3854_);
lean_inc(v_zetaDeltaSet_3853_);
v___x_3865_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_3865_, 0, v___x_3864_);
lean_ctor_set(v___x_3865_, 1, v_zetaDeltaSet_3853_);
lean_ctor_set(v___x_3865_, 2, v_lctx_3854_);
lean_ctor_set(v___x_3865_, 3, v_localInstances_3855_);
lean_ctor_set(v___x_3865_, 4, v_defEqCtx_x3f_3856_);
lean_ctor_set(v___x_3865_, 5, v_synthPendingDepth_3857_);
lean_ctor_set(v___x_3865_, 6, v_customCanUnfoldPredicate_x3f_3858_);
lean_ctor_set(v___x_3865_, 7, v_rewriteSet_x3f_3862_);
lean_ctor_set_uint8(v___x_3865_, sizeof(void*)*8, v_trackZetaDelta_3852_);
lean_ctor_set_uint8(v___x_3865_, sizeof(void*)*8 + 1, v_univApprox_3859_);
lean_ctor_set_uint8(v___x_3865_, sizeof(void*)*8 + 2, v_inTypeClassResolution_3860_);
lean_ctor_set_uint8(v___x_3865_, sizeof(void*)*8 + 3, v_cacheInferType_3861_);
lean_ctor_set_uint8(v___x_3865_, sizeof(void*)*8 + 4, v_rewriteFuelScope_3863_);
lean_inc(v___y_3838_);
lean_inc_ref(v___y_3837_);
lean_inc(v___y_3836_);
lean_inc(v_a_3846_);
v___x_3866_ = lean_whnf(v_a_3846_, v___x_3865_, v___y_3836_, v___y_3837_, v___y_3838_);
v___y_3782_ = v___y_3833_;
v___y_3783_ = v___y_3837_;
v___y_3784_ = v___y_3838_;
v___y_3785_ = v_a_3846_;
v___y_3786_ = v_isHEq_3834_;
v___y_3787_ = v___y_3836_;
v___y_3788_ = v___y_3835_;
v___y_3789_ = v___x_3866_;
goto v___jp_3781_;
}
else
{
lean_object* v___x_3867_; 
lean_inc(v___y_3838_);
lean_inc_ref(v___y_3837_);
lean_inc(v___y_3836_);
lean_inc_ref(v___y_3835_);
lean_inc(v_a_3846_);
v___x_3867_ = lean_whnf(v_a_3846_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
v___y_3782_ = v___y_3833_;
v___y_3783_ = v___y_3837_;
v___y_3784_ = v___y_3838_;
v___y_3785_ = v_a_3846_;
v___y_3786_ = v_isHEq_3834_;
v___y_3787_ = v___y_3836_;
v___y_3788_ = v___y_3835_;
v___y_3789_ = v___x_3867_;
goto v___jp_3781_;
}
}
else
{
lean_object* v_a_3868_; 
v_a_3868_ = lean_ctor_get(v___x_3845_, 0);
lean_inc(v_a_3868_);
lean_dec_ref_known(v___x_3845_, 1);
v___y_3770_ = v___y_3833_;
v___y_3771_ = v___y_3837_;
v___y_3772_ = v___y_3838_;
v___y_3773_ = v_isHEq_3834_;
v___y_3774_ = v___y_3836_;
v___y_3775_ = v___y_3835_;
v_a_3776_ = v_a_3868_;
goto v___jp_3769_;
}
}
else
{
v___y_3746_ = v___y_3833_;
v___y_3747_ = v_isHEq_3834_;
v___y_3748_ = v___y_3835_;
v___y_3749_ = v___y_3836_;
v___y_3750_ = v___y_3837_;
v___y_3751_ = v___y_3838_;
goto v___jp_3745_;
}
}
else
{
lean_dec(v_a_3842_);
v___y_3746_ = v___y_3833_;
v___y_3747_ = v_isHEq_3834_;
v___y_3748_ = v___y_3835_;
v___y_3749_ = v___y_3836_;
v___y_3750_ = v___y_3837_;
v___y_3751_ = v___y_3838_;
goto v___jp_3745_;
}
}
else
{
lean_object* v_a_3869_; lean_object* v___x_3871_; uint8_t v_isShared_3872_; uint8_t v_isSharedCheck_3876_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_3869_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3876_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3876_ == 0)
{
v___x_3871_ = v___x_3841_;
v_isShared_3872_ = v_isSharedCheck_3876_;
goto v_resetjp_3870_;
}
else
{
lean_inc(v_a_3869_);
lean_dec(v___x_3841_);
v___x_3871_ = lean_box(0);
v_isShared_3872_ = v_isSharedCheck_3876_;
goto v_resetjp_3870_;
}
v_resetjp_3870_:
{
lean_object* v___x_3874_; 
if (v_isShared_3872_ == 0)
{
v___x_3874_ = v___x_3871_;
goto v_reusejp_3873_;
}
else
{
lean_object* v_reuseFailAlloc_3875_; 
v_reuseFailAlloc_3875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3875_, 0, v_a_3869_);
v___x_3874_ = v_reuseFailAlloc_3875_;
goto v_reusejp_3873_;
}
v_reusejp_3873_:
{
return v___x_3874_;
}
}
}
}
else
{
v___y_3746_ = v___y_3833_;
v___y_3747_ = v_isHEq_3834_;
v___y_3748_ = v___y_3835_;
v___y_3749_ = v___y_3836_;
v___y_3750_ = v___y_3837_;
v___y_3751_ = v___y_3838_;
goto v___jp_3745_;
}
}
}
v___jp_3877_:
{
lean_object* v___x_3883_; 
lean_inc_ref(v___x_3744_);
v___x_3883_ = l_Lean_Meta_matchHEq_x3f(v___x_3744_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3883_) == 0)
{
lean_object* v_a_3884_; 
v_a_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc(v_a_3884_);
lean_dec_ref_known(v___x_3883_, 1);
if (lean_obj_tag(v_a_3884_) == 1)
{
lean_object* v_val_3885_; lean_object* v_snd_3886_; lean_object* v_snd_3887_; lean_object* v_fst_3888_; lean_object* v_fst_3889_; lean_object* v_fst_3890_; lean_object* v_snd_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3991_; 
v_val_3885_ = lean_ctor_get(v_a_3884_, 0);
lean_inc(v_val_3885_);
lean_dec_ref_known(v_a_3884_, 1);
v_snd_3886_ = lean_ctor_get(v_val_3885_, 1);
lean_inc(v_snd_3886_);
v_snd_3887_ = lean_ctor_get(v_snd_3886_, 1);
lean_inc(v_snd_3887_);
v_fst_3888_ = lean_ctor_get(v_val_3885_, 0);
lean_inc(v_fst_3888_);
lean_dec(v_val_3885_);
v_fst_3889_ = lean_ctor_get(v_snd_3886_, 0);
lean_inc(v_fst_3889_);
lean_dec(v_snd_3886_);
v_fst_3890_ = lean_ctor_get(v_snd_3887_, 0);
v_snd_3891_ = lean_ctor_get(v_snd_3887_, 1);
v_isSharedCheck_3991_ = !lean_is_exclusive(v_snd_3887_);
if (v_isSharedCheck_3991_ == 0)
{
v___x_3893_ = v_snd_3887_;
v_isShared_3894_ = v_isSharedCheck_3991_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_snd_3891_);
lean_inc(v_fst_3890_);
lean_dec(v_snd_3887_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3991_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3895_; 
v___x_3895_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3889_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3896_; 
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
lean_inc(v_a_3896_);
lean_dec_ref_known(v___x_3895_, 1);
if (lean_obj_tag(v_a_3896_) == 1)
{
lean_object* v_val_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_3982_; 
v_val_3897_ = lean_ctor_get(v_a_3896_, 0);
v_isSharedCheck_3982_ = !lean_is_exclusive(v_a_3896_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3899_ = v_a_3896_;
v_isShared_3900_ = v_isSharedCheck_3982_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_val_3897_);
lean_dec(v_a_3896_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_3982_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3901_; 
v___x_3901_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3891_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3901_) == 0)
{
lean_object* v_a_3902_; 
v_a_3902_ = lean_ctor_get(v___x_3901_, 0);
lean_inc(v_a_3902_);
lean_dec_ref_known(v___x_3901_, 1);
if (lean_obj_tag(v_a_3902_) == 1)
{
lean_object* v_toConstantVal_3903_; lean_object* v_val_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3973_; 
v_toConstantVal_3903_ = lean_ctor_get(v_val_3897_, 0);
lean_inc_ref(v_toConstantVal_3903_);
lean_dec(v_val_3897_);
v_val_3904_ = lean_ctor_get(v_a_3902_, 0);
v_isSharedCheck_3973_ = !lean_is_exclusive(v_a_3902_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3906_ = v_a_3902_;
v_isShared_3907_ = v_isSharedCheck_3973_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_val_3904_);
lean_dec(v_a_3902_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3973_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v_toConstantVal_3908_; lean_object* v_name_3909_; lean_object* v_name_3910_; uint8_t v___x_3911_; 
v_toConstantVal_3908_ = lean_ctor_get(v_val_3904_, 0);
lean_inc_ref(v_toConstantVal_3908_);
lean_dec(v_val_3904_);
v_name_3909_ = lean_ctor_get(v_toConstantVal_3903_, 0);
lean_inc(v_name_3909_);
lean_dec_ref(v_toConstantVal_3903_);
v_name_3910_ = lean_ctor_get(v_toConstantVal_3908_, 0);
lean_inc(v_name_3910_);
lean_dec_ref(v_toConstantVal_3908_);
v___x_3911_ = lean_name_eq(v_name_3909_, v_name_3910_);
lean_dec(v_name_3910_);
lean_dec(v_name_3909_);
if (v___x_3911_ == 0)
{
lean_object* v___x_3912_; 
v___x_3912_ = l_Lean_Meta_isExprDefEq(v_fst_3888_, v_fst_3890_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v_a_3913_; uint8_t v___x_3914_; 
v_a_3913_ = lean_ctor_get(v___x_3912_, 0);
lean_inc(v_a_3913_);
lean_dec_ref_known(v___x_3912_, 1);
v___x_3914_ = lean_unbox(v_a_3913_);
lean_dec(v_a_3913_);
if (v___x_3914_ == 0)
{
lean_del_object(v___x_3906_);
lean_del_object(v___x_3899_);
lean_del_object(v___x_3893_);
v___y_3833_ = v_isEq_3878_;
v_isHEq_3834_ = v___x_3689_;
v___y_3835_ = v___y_3879_;
v___y_3836_ = v___y_3880_;
v___y_3837_ = v___y_3881_;
v___y_3838_ = v___y_3882_;
goto v___jp_3832_;
}
else
{
lean_object* v___x_3915_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec_ref(v_config_3678_);
lean_inc(v_mvarId_3679_);
v___x_3915_ = l_Lean_MVarId_getType(v_mvarId_3679_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
lean_inc(v_a_3916_);
lean_dec_ref_known(v___x_3915_, 1);
v___x_3917_ = l_Lean_LocalDecl_toExpr(v_val_3710_);
v___x_3918_ = l_Lean_Meta_mkEqOfHEq(v___x_3917_, v___x_3689_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v_a_3919_; lean_object* v___x_3920_; 
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
lean_inc(v_a_3919_);
lean_dec_ref_known(v___x_3918_, 1);
v___x_3920_ = l_Lean_Meta_mkNoConfusion(v_a_3916_, v_a_3919_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3920_) == 0)
{
lean_object* v_a_3921_; lean_object* v___x_3922_; 
v_a_3921_ = lean_ctor_get(v___x_3920_, 0);
lean_inc(v_a_3921_);
lean_dec_ref_known(v___x_3920_, 1);
v___x_3922_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3679_, v_a_3921_, v___y_3880_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v___x_3923_; lean_object* v___x_3925_; 
lean_dec_ref_known(v___x_3922_, 1);
v___x_3923_ = lean_box(v___x_3689_);
if (v_isShared_3907_ == 0)
{
lean_ctor_set(v___x_3906_, 0, v___x_3923_);
v___x_3925_ = v___x_3906_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v___x_3923_);
v___x_3925_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
lean_object* v___x_3927_; 
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 1, v___x_3714_);
lean_ctor_set(v___x_3893_, 0, v___x_3925_);
v___x_3927_ = v___x_3893_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v___x_3925_);
lean_ctor_set(v_reuseFailAlloc_3931_, 1, v___x_3714_);
v___x_3927_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
lean_object* v___x_3929_; 
if (v_isShared_3900_ == 0)
{
lean_ctor_set_tag(v___x_3899_, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3927_);
v___x_3929_ = v___x_3899_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3927_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
v_a_3696_ = v___x_3929_;
goto v___jp_3695_;
}
}
}
}
else
{
lean_object* v_a_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3940_; 
lean_del_object(v___x_3906_);
lean_del_object(v___x_3899_);
lean_del_object(v___x_3893_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_3933_ = lean_ctor_get(v___x_3922_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v___x_3922_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3935_ = v___x_3922_;
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_a_3933_);
lean_dec(v___x_3922_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v___x_3938_; 
if (v_isShared_3936_ == 0)
{
v___x_3938_ = v___x_3935_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3933_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3948_; 
lean_del_object(v___x_3906_);
lean_del_object(v___x_3899_);
lean_del_object(v___x_3893_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_3941_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3948_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3948_ == 0)
{
v___x_3943_ = v___x_3920_;
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v___x_3920_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v___x_3946_; 
if (v_isShared_3944_ == 0)
{
v___x_3946_ = v___x_3943_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_a_3941_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
return v___x_3946_;
}
}
}
}
else
{
lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3956_; 
lean_dec(v_a_3916_);
lean_del_object(v___x_3906_);
lean_del_object(v___x_3899_);
lean_del_object(v___x_3893_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_3949_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3951_ = v___x_3918_;
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v___x_3918_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_a_3949_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
}
else
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3964_; 
lean_del_object(v___x_3906_);
lean_del_object(v___x_3899_);
lean_del_object(v___x_3893_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_3957_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3959_ = v___x_3915_;
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v___x_3915_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_a_3957_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
return v___x_3962_;
}
}
}
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
lean_del_object(v___x_3906_);
lean_del_object(v___x_3899_);
lean_del_object(v___x_3893_);
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_3965_ = lean_ctor_get(v___x_3912_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3912_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v___x_3912_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
else
{
lean_del_object(v___x_3906_);
lean_del_object(v___x_3899_);
lean_del_object(v___x_3893_);
lean_dec(v_fst_3890_);
lean_dec(v_fst_3888_);
v___y_3833_ = v_isEq_3878_;
v_isHEq_3834_ = v___x_3689_;
v___y_3835_ = v___y_3879_;
v___y_3836_ = v___y_3880_;
v___y_3837_ = v___y_3881_;
v___y_3838_ = v___y_3882_;
goto v___jp_3832_;
}
}
}
else
{
lean_dec(v_a_3902_);
lean_del_object(v___x_3899_);
lean_dec(v_val_3897_);
lean_del_object(v___x_3893_);
lean_dec(v_fst_3890_);
lean_dec(v_fst_3888_);
v___y_3833_ = v_isEq_3878_;
v_isHEq_3834_ = v___x_3689_;
v___y_3835_ = v___y_3879_;
v___y_3836_ = v___y_3880_;
v___y_3837_ = v___y_3881_;
v___y_3838_ = v___y_3882_;
goto v___jp_3832_;
}
}
else
{
lean_object* v_a_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3981_; 
lean_del_object(v___x_3899_);
lean_dec(v_val_3897_);
lean_del_object(v___x_3893_);
lean_dec(v_fst_3890_);
lean_dec(v_fst_3888_);
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_3974_ = lean_ctor_get(v___x_3901_, 0);
v_isSharedCheck_3981_ = !lean_is_exclusive(v___x_3901_);
if (v_isSharedCheck_3981_ == 0)
{
v___x_3976_ = v___x_3901_;
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_a_3974_);
lean_dec(v___x_3901_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3979_; 
if (v_isShared_3977_ == 0)
{
v___x_3979_ = v___x_3976_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v_a_3974_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
}
}
}
else
{
lean_dec(v_a_3896_);
lean_del_object(v___x_3893_);
lean_dec(v_snd_3891_);
lean_dec(v_fst_3890_);
lean_dec(v_fst_3888_);
v___y_3833_ = v_isEq_3878_;
v_isHEq_3834_ = v___x_3689_;
v___y_3835_ = v___y_3879_;
v___y_3836_ = v___y_3880_;
v___y_3837_ = v___y_3881_;
v___y_3838_ = v___y_3882_;
goto v___jp_3832_;
}
}
else
{
lean_object* v_a_3983_; lean_object* v___x_3985_; uint8_t v_isShared_3986_; uint8_t v_isSharedCheck_3990_; 
lean_del_object(v___x_3893_);
lean_dec(v_snd_3891_);
lean_dec(v_fst_3890_);
lean_dec(v_fst_3888_);
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_3983_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3990_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3985_ = v___x_3895_;
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
else
{
lean_inc(v_a_3983_);
lean_dec(v___x_3895_);
v___x_3985_ = lean_box(0);
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
v_resetjp_3984_:
{
lean_object* v___x_3988_; 
if (v_isShared_3986_ == 0)
{
v___x_3988_ = v___x_3985_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3989_; 
v_reuseFailAlloc_3989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3989_, 0, v_a_3983_);
v___x_3988_ = v_reuseFailAlloc_3989_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
return v___x_3988_;
}
}
}
}
}
else
{
lean_dec(v_a_3884_);
v___y_3833_ = v_isEq_3878_;
v_isHEq_3834_ = v___x_3743_;
v___y_3835_ = v___y_3879_;
v___y_3836_ = v___y_3880_;
v___y_3837_ = v___y_3881_;
v___y_3838_ = v___y_3882_;
goto v___jp_3832_;
}
}
else
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_3999_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_3992_ = lean_ctor_get(v___x_3883_, 0);
v_isSharedCheck_3999_ = !lean_is_exclusive(v___x_3883_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3994_ = v___x_3883_;
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v___x_3883_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3997_; 
if (v_isShared_3995_ == 0)
{
v___x_3997_ = v___x_3994_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v_a_3992_);
v___x_3997_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
return v___x_3997_;
}
}
}
}
v___jp_4000_:
{
lean_object* v___x_4005_; 
lean_inc_ref(v___x_3744_);
v___x_4005_ = l_Lean_Meta_matchEq_x3f(v___x_3744_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
if (lean_obj_tag(v___x_4005_) == 0)
{
lean_object* v_a_4006_; 
v_a_4006_ = lean_ctor_get(v___x_4005_, 0);
lean_inc(v_a_4006_);
lean_dec_ref_known(v___x_4005_, 1);
if (lean_obj_tag(v_a_4006_) == 1)
{
lean_object* v_val_4007_; lean_object* v_snd_4008_; lean_object* v_fst_4009_; lean_object* v_snd_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4089_; 
v_val_4007_ = lean_ctor_get(v_a_4006_, 0);
lean_inc(v_val_4007_);
lean_dec_ref_known(v_a_4006_, 1);
v_snd_4008_ = lean_ctor_get(v_val_4007_, 1);
lean_inc(v_snd_4008_);
lean_dec(v_val_4007_);
v_fst_4009_ = lean_ctor_get(v_snd_4008_, 0);
v_snd_4010_ = lean_ctor_get(v_snd_4008_, 1);
v_isSharedCheck_4089_ = !lean_is_exclusive(v_snd_4008_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_4012_ = v_snd_4008_;
v_isShared_4013_ = v_isSharedCheck_4089_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_snd_4010_);
lean_inc(v_fst_4009_);
lean_dec(v_snd_4008_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4089_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4014_; 
v___x_4014_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4009_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
if (lean_obj_tag(v___x_4014_) == 0)
{
lean_object* v_a_4015_; 
v_a_4015_ = lean_ctor_get(v___x_4014_, 0);
lean_inc(v_a_4015_);
lean_dec_ref_known(v___x_4014_, 1);
if (lean_obj_tag(v_a_4015_) == 1)
{
lean_object* v_val_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4080_; 
v_val_4016_ = lean_ctor_get(v_a_4015_, 0);
v_isSharedCheck_4080_ = !lean_is_exclusive(v_a_4015_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4018_ = v_a_4015_;
v_isShared_4019_ = v_isSharedCheck_4080_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_val_4016_);
lean_dec(v_a_4015_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4080_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4020_; 
v___x_4020_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4010_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
if (lean_obj_tag(v___x_4020_) == 0)
{
lean_object* v_a_4021_; 
v_a_4021_ = lean_ctor_get(v___x_4020_, 0);
lean_inc(v_a_4021_);
lean_dec_ref_known(v___x_4020_, 1);
if (lean_obj_tag(v_a_4021_) == 1)
{
lean_object* v_toConstantVal_4022_; lean_object* v_val_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4071_; 
v_toConstantVal_4022_ = lean_ctor_get(v_val_4016_, 0);
lean_inc_ref(v_toConstantVal_4022_);
lean_dec(v_val_4016_);
v_val_4023_ = lean_ctor_get(v_a_4021_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v_a_4021_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4025_ = v_a_4021_;
v_isShared_4026_ = v_isSharedCheck_4071_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_val_4023_);
lean_dec(v_a_4021_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4071_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
lean_object* v_toConstantVal_4027_; lean_object* v_name_4028_; lean_object* v_name_4029_; uint8_t v___x_4030_; 
v_toConstantVal_4027_ = lean_ctor_get(v_val_4023_, 0);
lean_inc_ref(v_toConstantVal_4027_);
lean_dec(v_val_4023_);
v_name_4028_ = lean_ctor_get(v_toConstantVal_4022_, 0);
lean_inc(v_name_4028_);
lean_dec_ref(v_toConstantVal_4022_);
v_name_4029_ = lean_ctor_get(v_toConstantVal_4027_, 0);
lean_inc(v_name_4029_);
lean_dec_ref(v_toConstantVal_4027_);
v___x_4030_ = lean_name_eq(v_name_4028_, v_name_4029_);
lean_dec(v_name_4029_);
lean_dec(v_name_4028_);
if (v___x_4030_ == 0)
{
lean_object* v___x_4031_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec_ref(v_config_3678_);
lean_inc(v_mvarId_3679_);
v___x_4031_ = l_Lean_MVarId_getType(v_mvarId_3679_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
if (lean_obj_tag(v___x_4031_) == 0)
{
lean_object* v_a_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v_a_4032_ = lean_ctor_get(v___x_4031_, 0);
lean_inc(v_a_4032_);
lean_dec_ref_known(v___x_4031_, 1);
v___x_4033_ = l_Lean_LocalDecl_toExpr(v_val_3710_);
v___x_4034_ = l_Lean_Meta_mkNoConfusion(v_a_4032_, v___x_4033_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_object* v_a_4035_; lean_object* v___x_4036_; 
v_a_4035_ = lean_ctor_get(v___x_4034_, 0);
lean_inc(v_a_4035_);
lean_dec_ref_known(v___x_4034_, 1);
v___x_4036_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3679_, v_a_4035_, v___y_4002_);
if (lean_obj_tag(v___x_4036_) == 0)
{
lean_object* v___x_4037_; lean_object* v___x_4039_; 
lean_dec_ref_known(v___x_4036_, 1);
v___x_4037_ = lean_box(v___x_3689_);
if (v_isShared_4026_ == 0)
{
lean_ctor_set(v___x_4025_, 0, v___x_4037_);
v___x_4039_ = v___x_4025_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v___x_4037_);
v___x_4039_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
lean_object* v___x_4041_; 
if (v_isShared_4013_ == 0)
{
lean_ctor_set(v___x_4012_, 1, v___x_3714_);
lean_ctor_set(v___x_4012_, 0, v___x_4039_);
v___x_4041_ = v___x_4012_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v___x_4039_);
lean_ctor_set(v_reuseFailAlloc_4045_, 1, v___x_3714_);
v___x_4041_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
lean_object* v___x_4043_; 
if (v_isShared_4019_ == 0)
{
lean_ctor_set_tag(v___x_4018_, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4041_);
v___x_4043_ = v___x_4018_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v___x_4041_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
v_a_3696_ = v___x_4043_;
goto v___jp_3695_;
}
}
}
}
else
{
lean_object* v_a_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4054_; 
lean_del_object(v___x_4025_);
lean_del_object(v___x_4018_);
lean_del_object(v___x_4012_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_4047_ = lean_ctor_get(v___x_4036_, 0);
v_isSharedCheck_4054_ = !lean_is_exclusive(v___x_4036_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_4049_ = v___x_4036_;
v_isShared_4050_ = v_isSharedCheck_4054_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_a_4047_);
lean_dec(v___x_4036_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4054_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4052_; 
if (v_isShared_4050_ == 0)
{
v___x_4052_ = v___x_4049_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4053_, 0, v_a_4047_);
v___x_4052_ = v_reuseFailAlloc_4053_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
return v___x_4052_;
}
}
}
}
else
{
lean_object* v_a_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4062_; 
lean_del_object(v___x_4025_);
lean_del_object(v___x_4018_);
lean_del_object(v___x_4012_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4055_ = lean_ctor_get(v___x_4034_, 0);
v_isSharedCheck_4062_ = !lean_is_exclusive(v___x_4034_);
if (v_isSharedCheck_4062_ == 0)
{
v___x_4057_ = v___x_4034_;
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_a_4055_);
lean_dec(v___x_4034_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
lean_object* v___x_4060_; 
if (v_isShared_4058_ == 0)
{
v___x_4060_ = v___x_4057_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_a_4055_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
return v___x_4060_;
}
}
}
}
else
{
lean_object* v_a_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4070_; 
lean_del_object(v___x_4025_);
lean_del_object(v___x_4018_);
lean_del_object(v___x_4012_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4063_ = lean_ctor_get(v___x_4031_, 0);
v_isSharedCheck_4070_ = !lean_is_exclusive(v___x_4031_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4065_ = v___x_4031_;
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_a_4063_);
lean_dec(v___x_4031_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4068_; 
if (v_isShared_4066_ == 0)
{
v___x_4068_ = v___x_4065_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_a_4063_);
v___x_4068_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
return v___x_4068_;
}
}
}
}
else
{
lean_del_object(v___x_4025_);
lean_del_object(v___x_4018_);
lean_del_object(v___x_4012_);
v_isEq_3878_ = v___x_3689_;
v___y_3879_ = v___y_4001_;
v___y_3880_ = v___y_4002_;
v___y_3881_ = v___y_4003_;
v___y_3882_ = v___y_4004_;
goto v___jp_3877_;
}
}
}
else
{
lean_dec(v_a_4021_);
lean_del_object(v___x_4018_);
lean_dec(v_val_4016_);
lean_del_object(v___x_4012_);
v_isEq_3878_ = v___x_3689_;
v___y_3879_ = v___y_4001_;
v___y_3880_ = v___y_4002_;
v___y_3881_ = v___y_4003_;
v___y_3882_ = v___y_4004_;
goto v___jp_3877_;
}
}
else
{
lean_object* v_a_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4079_; 
lean_del_object(v___x_4018_);
lean_dec(v_val_4016_);
lean_del_object(v___x_4012_);
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_4072_ = lean_ctor_get(v___x_4020_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4020_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4074_ = v___x_4020_;
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_a_4072_);
lean_dec(v___x_4020_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_a_4072_);
v___x_4077_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
return v___x_4077_;
}
}
}
}
}
else
{
lean_dec(v_a_4015_);
lean_del_object(v___x_4012_);
lean_dec(v_snd_4010_);
v_isEq_3878_ = v___x_3689_;
v___y_3879_ = v___y_4001_;
v___y_3880_ = v___y_4002_;
v___y_3881_ = v___y_4003_;
v___y_3882_ = v___y_4004_;
goto v___jp_3877_;
}
}
else
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4088_; 
lean_del_object(v___x_4012_);
lean_dec(v_snd_4010_);
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_4081_ = lean_ctor_get(v___x_4014_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4014_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4083_ = v___x_4014_;
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4014_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4086_; 
if (v_isShared_4084_ == 0)
{
v___x_4086_ = v___x_4083_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_a_4081_);
v___x_4086_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
return v___x_4086_;
}
}
}
}
}
else
{
lean_dec(v_a_4006_);
v_isEq_3878_ = v___x_3743_;
v___y_3879_ = v___y_4001_;
v___y_3880_ = v___y_4002_;
v___y_3881_ = v___y_4003_;
v___y_3882_ = v___y_4004_;
goto v___jp_3877_;
}
}
else
{
lean_object* v_a_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4097_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_4090_ = lean_ctor_get(v___x_4005_, 0);
v_isSharedCheck_4097_ = !lean_is_exclusive(v___x_4005_);
if (v_isSharedCheck_4097_ == 0)
{
v___x_4092_ = v___x_4005_;
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_a_4090_);
lean_dec(v___x_4005_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4095_; 
if (v_isShared_4093_ == 0)
{
v___x_4095_ = v___x_4092_;
goto v_reusejp_4094_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v_a_4090_);
v___x_4095_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4094_;
}
v_reusejp_4094_:
{
return v___x_4095_;
}
}
}
}
v___jp_4098_:
{
lean_object* v___x_4103_; 
lean_inc_ref(v___x_3744_);
v___x_4103_ = l_Lean_refutableHasNotBit_x3f(v___x_3744_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4103_) == 0)
{
lean_object* v_a_4104_; 
v_a_4104_ = lean_ctor_get(v___x_4103_, 0);
lean_inc(v_a_4104_);
lean_dec_ref_known(v___x_4103_, 1);
if (lean_obj_tag(v_a_4104_) == 1)
{
lean_object* v_val_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4145_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec_ref(v_config_3678_);
v_val_4105_ = lean_ctor_get(v_a_4104_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v_a_4104_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4107_ = v_a_4104_;
v_isShared_4108_ = v_isSharedCheck_4145_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_val_4105_);
lean_dec(v_a_4104_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4145_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4109_; 
lean_inc(v_mvarId_3679_);
v___x_4109_ = l_Lean_MVarId_getType(v_mvarId_3679_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4109_) == 0)
{
lean_object* v_a_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
v_a_4110_ = lean_ctor_get(v___x_4109_, 0);
lean_inc(v_a_4110_);
lean_dec_ref_known(v___x_4109_, 1);
v___x_4111_ = l_Lean_LocalDecl_toExpr(v_val_3710_);
v___x_4112_ = l_Lean_Meta_mkAbsurd(v_a_4110_, v_val_4105_, v___x_4111_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4112_) == 0)
{
lean_object* v_a_4113_; lean_object* v___x_4114_; 
v_a_4113_ = lean_ctor_get(v___x_4112_, 0);
lean_inc(v_a_4113_);
lean_dec_ref_known(v___x_4112_, 1);
v___x_4114_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3679_, v_a_4113_, v___y_4100_);
if (lean_obj_tag(v___x_4114_) == 0)
{
lean_object* v___x_4115_; lean_object* v___x_4117_; 
lean_dec_ref_known(v___x_4114_, 1);
v___x_4115_ = lean_box(v___x_3689_);
if (v_isShared_4108_ == 0)
{
lean_ctor_set(v___x_4107_, 0, v___x_4115_);
v___x_4117_ = v___x_4107_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v___x_4115_);
v___x_4117_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4117_);
lean_ctor_set(v___x_4118_, 1, v___x_3714_);
v___x_4119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4118_);
v_a_3696_ = v___x_4119_;
goto v___jp_3695_;
}
}
else
{
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4128_; 
lean_del_object(v___x_4107_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_4121_ = lean_ctor_get(v___x_4114_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4114_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4123_ = v___x_4114_;
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4114_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4126_; 
if (v_isShared_4124_ == 0)
{
v___x_4126_ = v___x_4123_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4121_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
return v___x_4126_;
}
}
}
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
lean_del_object(v___x_4107_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4129_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_4112_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_4112_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v___x_4134_; 
if (v_isShared_4132_ == 0)
{
v___x_4134_ = v___x_4131_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_a_4129_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
else
{
lean_object* v_a_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4144_; 
lean_del_object(v___x_4107_);
lean_dec(v_val_4105_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4137_ = lean_ctor_get(v___x_4109_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___x_4109_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4139_ = v___x_4109_;
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_a_4137_);
lean_dec(v___x_4109_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v_a_4137_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
}
}
else
{
lean_object* v___x_4146_; 
lean_dec(v_a_4104_);
lean_inc_ref(v___x_3744_);
v___x_4146_ = l_Lean_Meta_matchNe_x3f(v___x_3744_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4146_) == 0)
{
lean_object* v_a_4147_; 
v_a_4147_ = lean_ctor_get(v___x_4146_, 0);
lean_inc(v_a_4147_);
lean_dec_ref_known(v___x_4146_, 1);
if (lean_obj_tag(v_a_4147_) == 1)
{
lean_object* v_val_4148_; lean_object* v___x_4150_; uint8_t v_isShared_4151_; uint8_t v_isSharedCheck_4218_; 
v_val_4148_ = lean_ctor_get(v_a_4147_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v_a_4147_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4150_ = v_a_4147_;
v_isShared_4151_ = v_isSharedCheck_4218_;
goto v_resetjp_4149_;
}
else
{
lean_inc(v_val_4148_);
lean_dec(v_a_4147_);
v___x_4150_ = lean_box(0);
v_isShared_4151_ = v_isSharedCheck_4218_;
goto v_resetjp_4149_;
}
v_resetjp_4149_:
{
lean_object* v_snd_4152_; lean_object* v_fst_4153_; lean_object* v_snd_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4217_; 
v_snd_4152_ = lean_ctor_get(v_val_4148_, 1);
lean_inc(v_snd_4152_);
lean_dec(v_val_4148_);
v_fst_4153_ = lean_ctor_get(v_snd_4152_, 0);
v_snd_4154_ = lean_ctor_get(v_snd_4152_, 1);
v_isSharedCheck_4217_ = !lean_is_exclusive(v_snd_4152_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4156_ = v_snd_4152_;
v_isShared_4157_ = v_isSharedCheck_4217_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_snd_4154_);
lean_inc(v_fst_4153_);
lean_dec(v_snd_4152_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4217_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v___x_4158_; 
lean_inc(v_fst_4153_);
v___x_4158_ = l_Lean_Meta_isExprDefEq(v_fst_4153_, v_snd_4154_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; uint8_t v___x_4160_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref_known(v___x_4158_, 1);
v___x_4160_ = lean_unbox(v_a_4159_);
lean_dec(v_a_4159_);
if (v___x_4160_ == 0)
{
lean_del_object(v___x_4156_);
lean_dec(v_fst_4153_);
lean_del_object(v___x_4150_);
v___y_4001_ = v___y_4099_;
v___y_4002_ = v___y_4100_;
v___y_4003_ = v___y_4101_;
v___y_4004_ = v___y_4102_;
goto v___jp_4000_;
}
else
{
lean_object* v___x_4161_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec_ref(v_config_3678_);
lean_inc(v_mvarId_3679_);
v___x_4161_ = l_Lean_MVarId_getType(v_mvarId_3679_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4161_) == 0)
{
lean_object* v_a_4162_; lean_object* v___x_4163_; 
v_a_4162_ = lean_ctor_get(v___x_4161_, 0);
lean_inc(v_a_4162_);
lean_dec_ref_known(v___x_4161_, 1);
v___x_4163_ = l_Lean_Meta_mkEqRefl(v_fst_4153_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_object* v_a_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
lean_inc(v_a_4164_);
lean_dec_ref_known(v___x_4163_, 1);
v___x_4165_ = l_Lean_LocalDecl_toExpr(v_val_3710_);
v___x_4166_ = l_Lean_Meta_mkAbsurd(v_a_4162_, v_a_4164_, v___x_4165_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_object* v_a_4167_; lean_object* v___x_4168_; 
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_a_4167_);
lean_dec_ref_known(v___x_4166_, 1);
v___x_4168_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3679_, v_a_4167_, v___y_4100_);
if (lean_obj_tag(v___x_4168_) == 0)
{
lean_object* v___x_4169_; lean_object* v___x_4171_; 
lean_dec_ref_known(v___x_4168_, 1);
v___x_4169_ = lean_box(v___x_3689_);
if (v_isShared_4151_ == 0)
{
lean_ctor_set(v___x_4150_, 0, v___x_4169_);
v___x_4171_ = v___x_4150_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v___x_4169_);
v___x_4171_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
lean_object* v___x_4173_; 
if (v_isShared_4157_ == 0)
{
lean_ctor_set(v___x_4156_, 1, v___x_3714_);
lean_ctor_set(v___x_4156_, 0, v___x_4171_);
v___x_4173_ = v___x_4156_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4175_; 
v_reuseFailAlloc_4175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4175_, 0, v___x_4171_);
lean_ctor_set(v_reuseFailAlloc_4175_, 1, v___x_3714_);
v___x_4173_ = v_reuseFailAlloc_4175_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
lean_object* v___x_4174_; 
v___x_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4174_, 0, v___x_4173_);
v_a_3696_ = v___x_4174_;
goto v___jp_3695_;
}
}
}
else
{
lean_object* v_a_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4184_; 
lean_del_object(v___x_4156_);
lean_del_object(v___x_4150_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_4177_ = lean_ctor_get(v___x_4168_, 0);
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4179_ = v___x_4168_;
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_a_4177_);
lean_dec(v___x_4168_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v_a_4177_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
}
}
else
{
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_del_object(v___x_4156_);
lean_del_object(v___x_4150_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4185_ = lean_ctor_get(v___x_4166_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4166_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4166_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4166_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
lean_dec(v_a_4162_);
lean_del_object(v___x_4156_);
lean_del_object(v___x_4150_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4193_ = lean_ctor_get(v___x_4163_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4163_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4163_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4163_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4208_; 
lean_del_object(v___x_4156_);
lean_dec(v_fst_4153_);
lean_del_object(v___x_4150_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
v_a_4201_ = lean_ctor_get(v___x_4161_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_4161_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4203_ = v___x_4161_;
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4161_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4206_; 
if (v_isShared_4204_ == 0)
{
v___x_4206_ = v___x_4203_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_a_4201_);
v___x_4206_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
return v___x_4206_;
}
}
}
}
}
else
{
lean_object* v_a_4209_; lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4216_; 
lean_del_object(v___x_4156_);
lean_dec(v_fst_4153_);
lean_del_object(v___x_4150_);
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_4209_ = lean_ctor_get(v___x_4158_, 0);
v_isSharedCheck_4216_ = !lean_is_exclusive(v___x_4158_);
if (v_isSharedCheck_4216_ == 0)
{
v___x_4211_ = v___x_4158_;
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
else
{
lean_inc(v_a_4209_);
lean_dec(v___x_4158_);
v___x_4211_ = lean_box(0);
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
v_resetjp_4210_:
{
lean_object* v___x_4214_; 
if (v_isShared_4212_ == 0)
{
v___x_4214_ = v___x_4211_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_a_4209_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
}
}
}
}
else
{
lean_dec(v_a_4147_);
v___y_4001_ = v___y_4099_;
v___y_4002_ = v___y_4100_;
v___y_4003_ = v___y_4101_;
v___y_4004_ = v___y_4102_;
goto v___jp_4000_;
}
}
else
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4226_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_4219_ = lean_ctor_get(v___x_4146_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4146_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4221_ = v___x_4146_;
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4146_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4224_; 
if (v_isShared_4222_ == 0)
{
v___x_4224_ = v___x_4221_;
goto v_reusejp_4223_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v_a_4219_);
v___x_4224_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4223_;
}
v_reusejp_4223_:
{
return v___x_4224_;
}
}
}
}
}
else
{
lean_object* v_a_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4234_; 
lean_dec_ref(v___x_3744_);
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_4227_ = lean_ctor_get(v___x_4103_, 0);
v_isSharedCheck_4234_ = !lean_is_exclusive(v___x_4103_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_4229_ = v___x_4103_;
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_a_4227_);
lean_dec(v___x_4103_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
lean_object* v___x_4232_; 
if (v_isShared_4230_ == 0)
{
v___x_4232_ = v___x_4229_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v_a_4227_);
v___x_4232_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
return v___x_4232_;
}
}
}
}
}
else
{
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_3704_ = v___x_3715_;
goto v___jp_3703_;
}
v___jp_3716_:
{
uint8_t v_emptyType_3723_; 
v_emptyType_3723_ = lean_ctor_get_uint8(v_config_3678_, sizeof(void*)*1 + 1);
if (v_emptyType_3723_ == 0)
{
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_3704_ = v___x_3715_;
goto v___jp_3703_;
}
else
{
if (v___y_3717_ == 0)
{
if (v___y_3718_ == 0)
{
lean_object* v_searchFuel_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v_searchFuel_3724_ = lean_ctor_get(v_config_3678_, 0);
v___x_3725_ = l_Lean_LocalDecl_fvarId(v_val_3710_);
lean_dec(v_val_3710_);
lean_inc(v_searchFuel_3724_);
lean_inc(v_mvarId_3679_);
v___x_3726_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3679_, v___x_3725_, v_searchFuel_3724_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; uint8_t v___x_3728_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___x_3726_, 1);
v___x_3728_ = lean_unbox(v_a_3727_);
lean_dec(v_a_3727_);
if (v___x_3728_ == 0)
{
lean_del_object(v___x_3712_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_3704_ = v___x_3715_;
goto v___jp_3703_;
}
else
{
lean_object* v___x_3729_; lean_object* v___x_3731_; 
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v___x_3729_ = lean_box(v___x_3689_);
if (v_isShared_3713_ == 0)
{
lean_ctor_set(v___x_3712_, 0, v___x_3729_);
v___x_3731_ = v___x_3712_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v___x_3729_);
v___x_3731_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
lean_ctor_set(v___x_3732_, 1, v___x_3714_);
v___x_3733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
v_a_3696_ = v___x_3733_;
goto v___jp_3695_;
}
}
}
else
{
lean_object* v_a_3735_; lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3742_; 
lean_del_object(v___x_3712_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
lean_dec(v_mvarId_3679_);
lean_dec_ref(v_config_3678_);
v_a_3735_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3742_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3742_ == 0)
{
v___x_3737_ = v___x_3726_;
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
else
{
lean_inc(v_a_3735_);
lean_dec(v___x_3726_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3742_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v___x_3740_; 
if (v_isShared_3738_ == 0)
{
v___x_3740_ = v___x_3737_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v_a_3735_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
else
{
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_3704_ = v___x_3715_;
goto v___jp_3703_;
}
}
else
{
lean_del_object(v___x_3712_);
lean_dec(v_val_3710_);
lean_del_object(v___x_3693_);
lean_dec(v_snd_3691_);
v_a_3704_ = v___x_3715_;
goto v___jp_3703_;
}
}
}
}
}
v___jp_3695_:
{
lean_object* v___x_3697_; lean_object* v___x_3699_; 
v___x_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3697_, 0, v_a_3696_);
if (v_isShared_3694_ == 0)
{
lean_ctor_set(v___x_3693_, 0, v___x_3697_);
v___x_3699_ = v___x_3693_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3697_);
lean_ctor_set(v_reuseFailAlloc_3701_, 1, v_snd_3691_);
v___x_3699_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
lean_object* v___x_3700_; 
v___x_3700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3700_, 0, v___x_3699_);
return v___x_3700_;
}
}
v___jp_3703_:
{
lean_object* v___x_3705_; size_t v___x_3706_; size_t v___x_3707_; lean_object* v___x_3708_; 
v___x_3705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3702_);
lean_ctor_set(v___x_3705_, 1, v_a_3704_);
v___x_3706_ = ((size_t)1ULL);
v___x_3707_ = lean_usize_add(v_i_3682_, v___x_3706_);
v___x_3708_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3678_, v_mvarId_3679_, v_as_3680_, v_sz_3681_, v___x_3707_, v___x_3705_, v___y_3684_, v___y_3685_, v___y_3686_, v___y_3687_);
return v___x_3708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_config_4308_, lean_object* v_mvarId_4309_, lean_object* v_as_4310_, lean_object* v_sz_4311_, lean_object* v_i_4312_, lean_object* v_b_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_){
_start:
{
size_t v_sz_boxed_4319_; size_t v_i_boxed_4320_; lean_object* v_res_4321_; 
v_sz_boxed_4319_ = lean_unbox_usize(v_sz_4311_);
lean_dec(v_sz_4311_);
v_i_boxed_4320_ = lean_unbox_usize(v_i_4312_);
lean_dec(v_i_4312_);
v_res_4321_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4308_, v_mvarId_4309_, v_as_4310_, v_sz_boxed_4319_, v_i_boxed_4320_, v_b_4313_, v___y_4314_, v___y_4315_, v___y_4316_, v___y_4317_);
lean_dec(v___y_4317_);
lean_dec_ref(v___y_4316_);
lean_dec(v___y_4315_);
lean_dec_ref(v___y_4314_);
lean_dec_ref(v_as_4310_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object* v_init_4322_, lean_object* v_config_4323_, lean_object* v_mvarId_4324_, lean_object* v_n_4325_, lean_object* v_b_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_){
_start:
{
if (lean_obj_tag(v_n_4325_) == 0)
{
lean_object* v_cs_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; size_t v_sz_4335_; size_t v___x_4336_; lean_object* v___x_4337_; 
v_cs_4332_ = lean_ctor_get(v_n_4325_, 0);
v___x_4333_ = lean_box(0);
v___x_4334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4334_, 0, v___x_4333_);
lean_ctor_set(v___x_4334_, 1, v_b_4326_);
v_sz_4335_ = lean_array_size(v_cs_4332_);
v___x_4336_ = ((size_t)0ULL);
v___x_4337_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4322_, v_config_4323_, v_mvarId_4324_, v_cs_4332_, v_sz_4335_, v___x_4336_, v___x_4334_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v_a_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4352_; 
v_a_4338_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4340_ = v___x_4337_;
v_isShared_4341_ = v_isSharedCheck_4352_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_a_4338_);
lean_dec(v___x_4337_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4352_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
lean_object* v_fst_4342_; 
v_fst_4342_ = lean_ctor_get(v_a_4338_, 0);
if (lean_obj_tag(v_fst_4342_) == 0)
{
lean_object* v_snd_4343_; lean_object* v___x_4344_; lean_object* v___x_4346_; 
v_snd_4343_ = lean_ctor_get(v_a_4338_, 1);
lean_inc(v_snd_4343_);
lean_dec(v_a_4338_);
v___x_4344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4344_, 0, v_snd_4343_);
if (v_isShared_4341_ == 0)
{
lean_ctor_set(v___x_4340_, 0, v___x_4344_);
v___x_4346_ = v___x_4340_;
goto v_reusejp_4345_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v___x_4344_);
v___x_4346_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4345_;
}
v_reusejp_4345_:
{
return v___x_4346_;
}
}
else
{
lean_object* v_val_4348_; lean_object* v___x_4350_; 
lean_inc_ref(v_fst_4342_);
lean_dec(v_a_4338_);
v_val_4348_ = lean_ctor_get(v_fst_4342_, 0);
lean_inc(v_val_4348_);
lean_dec_ref_known(v_fst_4342_, 1);
if (v_isShared_4341_ == 0)
{
lean_ctor_set(v___x_4340_, 0, v_val_4348_);
v___x_4350_ = v___x_4340_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_val_4348_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4360_; 
v_a_4353_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4355_ = v___x_4337_;
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4337_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4358_; 
if (v_isShared_4356_ == 0)
{
v___x_4358_ = v___x_4355_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_a_4353_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
else
{
lean_object* v_vs_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; size_t v_sz_4364_; size_t v___x_4365_; lean_object* v___x_4366_; 
v_vs_4361_ = lean_ctor_get(v_n_4325_, 0);
v___x_4362_ = lean_box(0);
v___x_4363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4363_, 0, v___x_4362_);
lean_ctor_set(v___x_4363_, 1, v_b_4326_);
v_sz_4364_ = lean_array_size(v_vs_4361_);
v___x_4365_ = ((size_t)0ULL);
v___x_4366_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4323_, v_mvarId_4324_, v_vs_4361_, v_sz_4364_, v___x_4365_, v___x_4363_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_);
if (lean_obj_tag(v___x_4366_) == 0)
{
lean_object* v_a_4367_; lean_object* v___x_4369_; uint8_t v_isShared_4370_; uint8_t v_isSharedCheck_4381_; 
v_a_4367_ = lean_ctor_get(v___x_4366_, 0);
v_isSharedCheck_4381_ = !lean_is_exclusive(v___x_4366_);
if (v_isSharedCheck_4381_ == 0)
{
v___x_4369_ = v___x_4366_;
v_isShared_4370_ = v_isSharedCheck_4381_;
goto v_resetjp_4368_;
}
else
{
lean_inc(v_a_4367_);
lean_dec(v___x_4366_);
v___x_4369_ = lean_box(0);
v_isShared_4370_ = v_isSharedCheck_4381_;
goto v_resetjp_4368_;
}
v_resetjp_4368_:
{
lean_object* v_fst_4371_; 
v_fst_4371_ = lean_ctor_get(v_a_4367_, 0);
if (lean_obj_tag(v_fst_4371_) == 0)
{
lean_object* v_snd_4372_; lean_object* v___x_4373_; lean_object* v___x_4375_; 
v_snd_4372_ = lean_ctor_get(v_a_4367_, 1);
lean_inc(v_snd_4372_);
lean_dec(v_a_4367_);
v___x_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4373_, 0, v_snd_4372_);
if (v_isShared_4370_ == 0)
{
lean_ctor_set(v___x_4369_, 0, v___x_4373_);
v___x_4375_ = v___x_4369_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v___x_4373_);
v___x_4375_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
return v___x_4375_;
}
}
else
{
lean_object* v_val_4377_; lean_object* v___x_4379_; 
lean_inc_ref(v_fst_4371_);
lean_dec(v_a_4367_);
v_val_4377_ = lean_ctor_get(v_fst_4371_, 0);
lean_inc(v_val_4377_);
lean_dec_ref_known(v_fst_4371_, 1);
if (v_isShared_4370_ == 0)
{
lean_ctor_set(v___x_4369_, 0, v_val_4377_);
v___x_4379_ = v___x_4369_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v_val_4377_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
return v___x_4379_;
}
}
}
}
else
{
lean_object* v_a_4382_; lean_object* v___x_4384_; uint8_t v_isShared_4385_; uint8_t v_isSharedCheck_4389_; 
v_a_4382_ = lean_ctor_get(v___x_4366_, 0);
v_isSharedCheck_4389_ = !lean_is_exclusive(v___x_4366_);
if (v_isSharedCheck_4389_ == 0)
{
v___x_4384_ = v___x_4366_;
v_isShared_4385_ = v_isSharedCheck_4389_;
goto v_resetjp_4383_;
}
else
{
lean_inc(v_a_4382_);
lean_dec(v___x_4366_);
v___x_4384_ = lean_box(0);
v_isShared_4385_ = v_isSharedCheck_4389_;
goto v_resetjp_4383_;
}
v_resetjp_4383_:
{
lean_object* v___x_4387_; 
if (v_isShared_4385_ == 0)
{
v___x_4387_ = v___x_4384_;
goto v_reusejp_4386_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v_a_4382_);
v___x_4387_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4386_;
}
v_reusejp_4386_:
{
return v___x_4387_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object* v_init_4390_, lean_object* v_config_4391_, lean_object* v_mvarId_4392_, lean_object* v_as_4393_, size_t v_sz_4394_, size_t v_i_4395_, lean_object* v_b_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_){
_start:
{
uint8_t v___x_4402_; 
v___x_4402_ = lean_usize_dec_lt(v_i_4395_, v_sz_4394_);
if (v___x_4402_ == 0)
{
lean_object* v___x_4403_; 
lean_dec(v_mvarId_4392_);
lean_dec_ref(v_config_4391_);
v___x_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4403_, 0, v_b_4396_);
return v___x_4403_;
}
else
{
lean_object* v_snd_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4438_; 
v_snd_4404_ = lean_ctor_get(v_b_4396_, 1);
v_isSharedCheck_4438_ = !lean_is_exclusive(v_b_4396_);
if (v_isSharedCheck_4438_ == 0)
{
lean_object* v_unused_4439_; 
v_unused_4439_ = lean_ctor_get(v_b_4396_, 0);
lean_dec(v_unused_4439_);
v___x_4406_ = v_b_4396_;
v_isShared_4407_ = v_isSharedCheck_4438_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_snd_4404_);
lean_dec(v_b_4396_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4438_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___x_4408_; lean_object* v_a_4409_; lean_object* v___x_4410_; 
v___x_4408_ = lean_box(0);
v_a_4409_ = lean_array_uget_borrowed(v_as_4393_, v_i_4395_);
lean_inc(v_snd_4404_);
lean_inc(v_mvarId_4392_);
lean_inc_ref(v_config_4391_);
v___x_4410_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4390_, v_config_4391_, v_mvarId_4392_, v_a_4409_, v_snd_4404_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
if (lean_obj_tag(v___x_4410_) == 0)
{
lean_object* v_a_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4429_; 
v_a_4411_ = lean_ctor_get(v___x_4410_, 0);
v_isSharedCheck_4429_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4413_ = v___x_4410_;
v_isShared_4414_ = v_isSharedCheck_4429_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_a_4411_);
lean_dec(v___x_4410_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4429_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
if (lean_obj_tag(v_a_4411_) == 0)
{
lean_object* v___x_4415_; lean_object* v___x_4417_; 
lean_dec(v_mvarId_4392_);
lean_dec_ref(v_config_4391_);
v___x_4415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4415_, 0, v_a_4411_);
if (v_isShared_4407_ == 0)
{
lean_ctor_set(v___x_4406_, 0, v___x_4415_);
v___x_4417_ = v___x_4406_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v___x_4415_);
lean_ctor_set(v_reuseFailAlloc_4421_, 1, v_snd_4404_);
v___x_4417_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
lean_object* v___x_4419_; 
if (v_isShared_4414_ == 0)
{
lean_ctor_set(v___x_4413_, 0, v___x_4417_);
v___x_4419_ = v___x_4413_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v___x_4417_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
}
else
{
lean_object* v_a_4422_; lean_object* v___x_4424_; 
lean_del_object(v___x_4413_);
lean_dec(v_snd_4404_);
v_a_4422_ = lean_ctor_get(v_a_4411_, 0);
lean_inc(v_a_4422_);
lean_dec_ref_known(v_a_4411_, 1);
if (v_isShared_4407_ == 0)
{
lean_ctor_set(v___x_4406_, 1, v_a_4422_);
lean_ctor_set(v___x_4406_, 0, v___x_4408_);
v___x_4424_ = v___x_4406_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v___x_4408_);
lean_ctor_set(v_reuseFailAlloc_4428_, 1, v_a_4422_);
v___x_4424_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
size_t v___x_4425_; size_t v___x_4426_; 
v___x_4425_ = ((size_t)1ULL);
v___x_4426_ = lean_usize_add(v_i_4395_, v___x_4425_);
v_i_4395_ = v___x_4426_;
v_b_4396_ = v___x_4424_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4437_; 
lean_del_object(v___x_4406_);
lean_dec(v_snd_4404_);
lean_dec(v_mvarId_4392_);
lean_dec_ref(v_config_4391_);
v_a_4430_ = lean_ctor_get(v___x_4410_, 0);
v_isSharedCheck_4437_ = !lean_is_exclusive(v___x_4410_);
if (v_isSharedCheck_4437_ == 0)
{
v___x_4432_ = v___x_4410_;
v_isShared_4433_ = v_isSharedCheck_4437_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v___x_4410_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4437_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
lean_object* v___x_4435_; 
if (v_isShared_4433_ == 0)
{
v___x_4435_ = v___x_4432_;
goto v_reusejp_4434_;
}
else
{
lean_object* v_reuseFailAlloc_4436_; 
v_reuseFailAlloc_4436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4436_, 0, v_a_4430_);
v___x_4435_ = v_reuseFailAlloc_4436_;
goto v_reusejp_4434_;
}
v_reusejp_4434_:
{
return v___x_4435_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object* v_init_4440_, lean_object* v_config_4441_, lean_object* v_mvarId_4442_, lean_object* v_as_4443_, lean_object* v_sz_4444_, lean_object* v_i_4445_, lean_object* v_b_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_){
_start:
{
size_t v_sz_boxed_4452_; size_t v_i_boxed_4453_; lean_object* v_res_4454_; 
v_sz_boxed_4452_ = lean_unbox_usize(v_sz_4444_);
lean_dec(v_sz_4444_);
v_i_boxed_4453_ = lean_unbox_usize(v_i_4445_);
lean_dec(v_i_4445_);
v_res_4454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4440_, v_config_4441_, v_mvarId_4442_, v_as_4443_, v_sz_boxed_4452_, v_i_boxed_4453_, v_b_4446_, v___y_4447_, v___y_4448_, v___y_4449_, v___y_4450_);
lean_dec(v___y_4450_);
lean_dec_ref(v___y_4449_);
lean_dec(v___y_4448_);
lean_dec_ref(v___y_4447_);
lean_dec_ref(v_as_4443_);
lean_dec_ref(v_init_4440_);
return v_res_4454_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object* v_init_4455_, lean_object* v_config_4456_, lean_object* v_mvarId_4457_, lean_object* v_n_4458_, lean_object* v_b_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
lean_object* v_res_4465_; 
v_res_4465_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4455_, v_config_4456_, v_mvarId_4457_, v_n_4458_, v_b_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_);
lean_dec(v___y_4463_);
lean_dec_ref(v___y_4462_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec_ref(v_n_4458_);
lean_dec_ref(v_init_4455_);
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object* v_config_4466_, lean_object* v_mvarId_4467_, lean_object* v_t_4468_, lean_object* v_init_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_){
_start:
{
lean_object* v_root_4475_; lean_object* v_tail_4476_; lean_object* v___x_4477_; 
v_root_4475_ = lean_ctor_get(v_t_4468_, 0);
v_tail_4476_ = lean_ctor_get(v_t_4468_, 1);
lean_inc(v_mvarId_4467_);
lean_inc_ref(v_config_4466_);
lean_inc_ref(v_init_4469_);
v___x_4477_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4469_, v_config_4466_, v_mvarId_4467_, v_root_4475_, v_init_4469_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_);
lean_dec_ref(v_init_4469_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4514_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4514_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4514_ == 0)
{
v___x_4480_ = v___x_4477_;
v_isShared_4481_ = v_isSharedCheck_4514_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v___x_4477_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4514_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
if (lean_obj_tag(v_a_4478_) == 0)
{
lean_object* v_a_4482_; lean_object* v___x_4484_; 
lean_dec(v_mvarId_4467_);
lean_dec_ref(v_config_4466_);
v_a_4482_ = lean_ctor_get(v_a_4478_, 0);
lean_inc(v_a_4482_);
lean_dec_ref_known(v_a_4478_, 1);
if (v_isShared_4481_ == 0)
{
lean_ctor_set(v___x_4480_, 0, v_a_4482_);
v___x_4484_ = v___x_4480_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_a_4482_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
return v___x_4484_;
}
}
else
{
lean_object* v_a_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; size_t v_sz_4489_; size_t v___x_4490_; lean_object* v___x_4491_; 
lean_del_object(v___x_4480_);
v_a_4486_ = lean_ctor_get(v_a_4478_, 0);
lean_inc(v_a_4486_);
lean_dec_ref_known(v_a_4478_, 1);
v___x_4487_ = lean_box(0);
v___x_4488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4488_, 0, v___x_4487_);
lean_ctor_set(v___x_4488_, 1, v_a_4486_);
v_sz_4489_ = lean_array_size(v_tail_4476_);
v___x_4490_ = ((size_t)0ULL);
v___x_4491_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_4466_, v_mvarId_4467_, v_tail_4476_, v_sz_4489_, v___x_4490_, v___x_4488_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v_a_4492_; lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4505_; 
v_a_4492_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4494_ = v___x_4491_;
v_isShared_4495_ = v_isSharedCheck_4505_;
goto v_resetjp_4493_;
}
else
{
lean_inc(v_a_4492_);
lean_dec(v___x_4491_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4505_;
goto v_resetjp_4493_;
}
v_resetjp_4493_:
{
lean_object* v_fst_4496_; 
v_fst_4496_ = lean_ctor_get(v_a_4492_, 0);
if (lean_obj_tag(v_fst_4496_) == 0)
{
lean_object* v_snd_4497_; lean_object* v___x_4499_; 
v_snd_4497_ = lean_ctor_get(v_a_4492_, 1);
lean_inc(v_snd_4497_);
lean_dec(v_a_4492_);
if (v_isShared_4495_ == 0)
{
lean_ctor_set(v___x_4494_, 0, v_snd_4497_);
v___x_4499_ = v___x_4494_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v_snd_4497_);
v___x_4499_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
return v___x_4499_;
}
}
else
{
lean_object* v_val_4501_; lean_object* v___x_4503_; 
lean_inc_ref(v_fst_4496_);
lean_dec(v_a_4492_);
v_val_4501_ = lean_ctor_get(v_fst_4496_, 0);
lean_inc(v_val_4501_);
lean_dec_ref_known(v_fst_4496_, 1);
if (v_isShared_4495_ == 0)
{
lean_ctor_set(v___x_4494_, 0, v_val_4501_);
v___x_4503_ = v___x_4494_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v_val_4501_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
else
{
lean_object* v_a_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4513_; 
v_a_4506_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4508_ = v___x_4491_;
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_a_4506_);
lean_dec(v___x_4491_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4506_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
return v___x_4511_;
}
}
}
}
}
}
else
{
lean_object* v_a_4515_; lean_object* v___x_4517_; uint8_t v_isShared_4518_; uint8_t v_isSharedCheck_4522_; 
lean_dec(v_mvarId_4467_);
lean_dec_ref(v_config_4466_);
v_a_4515_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4522_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4522_ == 0)
{
v___x_4517_ = v___x_4477_;
v_isShared_4518_ = v_isSharedCheck_4522_;
goto v_resetjp_4516_;
}
else
{
lean_inc(v_a_4515_);
lean_dec(v___x_4477_);
v___x_4517_ = lean_box(0);
v_isShared_4518_ = v_isSharedCheck_4522_;
goto v_resetjp_4516_;
}
v_resetjp_4516_:
{
lean_object* v___x_4520_; 
if (v_isShared_4518_ == 0)
{
v___x_4520_ = v___x_4517_;
goto v_reusejp_4519_;
}
else
{
lean_object* v_reuseFailAlloc_4521_; 
v_reuseFailAlloc_4521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4521_, 0, v_a_4515_);
v___x_4520_ = v_reuseFailAlloc_4521_;
goto v_reusejp_4519_;
}
v_reusejp_4519_:
{
return v___x_4520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object* v_config_4523_, lean_object* v_mvarId_4524_, lean_object* v_t_4525_, lean_object* v_init_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_){
_start:
{
lean_object* v_res_4532_; 
v_res_4532_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4523_, v_mvarId_4524_, v_t_4525_, v_init_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_);
lean_dec(v___y_4530_);
lean_dec_ref(v___y_4529_);
lean_dec(v___y_4528_);
lean_dec_ref(v___y_4527_);
lean_dec_ref(v_t_4525_);
return v_res_4532_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object* v_mvarId_4533_, lean_object* v___x_4534_, lean_object* v_config_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_){
_start:
{
lean_object* v___x_4541_; 
lean_inc(v_mvarId_4533_);
v___x_4541_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4533_, v___x_4534_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_);
if (lean_obj_tag(v___x_4541_) == 0)
{
lean_object* v___x_4542_; 
lean_dec_ref_known(v___x_4541_, 1);
lean_inc(v_mvarId_4533_);
v___x_4542_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_4533_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_);
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4576_; 
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4576_ == 0)
{
v___x_4545_ = v___x_4542_;
v_isShared_4546_ = v_isSharedCheck_4576_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4542_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4576_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
uint8_t v___x_4547_; 
v___x_4547_ = lean_unbox(v_a_4543_);
if (v___x_4547_ == 0)
{
lean_object* v_lctx_4548_; lean_object* v_decls_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; 
lean_del_object(v___x_4545_);
v_lctx_4548_ = lean_ctor_get(v___y_4536_, 2);
v_decls_4549_ = lean_ctor_get(v_lctx_4548_, 1);
v___x_4550_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_4551_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4535_, v_mvarId_4533_, v_decls_4549_, v___x_4550_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_);
if (lean_obj_tag(v___x_4551_) == 0)
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4564_; 
v_a_4552_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4564_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4554_ = v___x_4551_;
v_isShared_4555_ = v_isSharedCheck_4564_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4551_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4564_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v_fst_4556_; 
v_fst_4556_ = lean_ctor_get(v_a_4552_, 0);
lean_inc(v_fst_4556_);
lean_dec(v_a_4552_);
if (lean_obj_tag(v_fst_4556_) == 0)
{
lean_object* v___x_4558_; 
if (v_isShared_4555_ == 0)
{
lean_ctor_set(v___x_4554_, 0, v_a_4543_);
v___x_4558_ = v___x_4554_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_a_4543_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
return v___x_4558_;
}
}
else
{
lean_object* v_val_4560_; lean_object* v___x_4562_; 
lean_dec(v_a_4543_);
v_val_4560_ = lean_ctor_get(v_fst_4556_, 0);
lean_inc(v_val_4560_);
lean_dec_ref_known(v_fst_4556_, 1);
if (v_isShared_4555_ == 0)
{
lean_ctor_set(v___x_4554_, 0, v_val_4560_);
v___x_4562_ = v___x_4554_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_val_4560_);
v___x_4562_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
return v___x_4562_;
}
}
}
}
else
{
lean_object* v_a_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4572_; 
lean_dec(v_a_4543_);
v_a_4565_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4567_ = v___x_4551_;
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
else
{
lean_inc(v_a_4565_);
lean_dec(v___x_4551_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
lean_object* v___x_4570_; 
if (v_isShared_4568_ == 0)
{
v___x_4570_ = v___x_4567_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4565_);
v___x_4570_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
return v___x_4570_;
}
}
}
}
else
{
lean_object* v___x_4574_; 
lean_dec_ref(v_config_4535_);
lean_dec(v_mvarId_4533_);
if (v_isShared_4546_ == 0)
{
v___x_4574_ = v___x_4545_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_a_4543_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
return v___x_4574_;
}
}
}
}
else
{
lean_dec_ref(v_config_4535_);
lean_dec(v_mvarId_4533_);
return v___x_4542_;
}
}
else
{
lean_object* v_a_4577_; lean_object* v___x_4579_; uint8_t v_isShared_4580_; uint8_t v_isSharedCheck_4584_; 
lean_dec_ref(v_config_4535_);
lean_dec(v_mvarId_4533_);
v_a_4577_ = lean_ctor_get(v___x_4541_, 0);
v_isSharedCheck_4584_ = !lean_is_exclusive(v___x_4541_);
if (v_isSharedCheck_4584_ == 0)
{
v___x_4579_ = v___x_4541_;
v_isShared_4580_ = v_isSharedCheck_4584_;
goto v_resetjp_4578_;
}
else
{
lean_inc(v_a_4577_);
lean_dec(v___x_4541_);
v___x_4579_ = lean_box(0);
v_isShared_4580_ = v_isSharedCheck_4584_;
goto v_resetjp_4578_;
}
v_resetjp_4578_:
{
lean_object* v___x_4582_; 
if (v_isShared_4580_ == 0)
{
v___x_4582_ = v___x_4579_;
goto v_reusejp_4581_;
}
else
{
lean_object* v_reuseFailAlloc_4583_; 
v_reuseFailAlloc_4583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4583_, 0, v_a_4577_);
v___x_4582_ = v_reuseFailAlloc_4583_;
goto v_reusejp_4581_;
}
v_reusejp_4581_:
{
return v___x_4582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object* v_mvarId_4585_, lean_object* v___x_4586_, lean_object* v_config_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_){
_start:
{
lean_object* v_res_4593_; 
v_res_4593_ = l_Lean_MVarId_contradictionCore___lam__0(v_mvarId_4585_, v___x_4586_, v_config_4587_, v___y_4588_, v___y_4589_, v___y_4590_, v___y_4591_);
lean_dec(v___y_4591_);
lean_dec_ref(v___y_4590_);
lean_dec(v___y_4589_);
lean_dec_ref(v___y_4588_);
return v_res_4593_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object* v_mvarId_4596_, lean_object* v_config_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_){
_start:
{
lean_object* v___x_4603_; lean_object* v___f_4604_; lean_object* v___x_4605_; 
v___x_4603_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
lean_inc(v_mvarId_4596_);
v___f_4604_ = lean_alloc_closure((void*)(l_Lean_MVarId_contradictionCore___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4604_, 0, v_mvarId_4596_);
lean_closure_set(v___f_4604_, 1, v___x_4603_);
lean_closure_set(v___f_4604_, 2, v_config_4597_);
v___x_4605_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_4596_, v___f_4604_, v_a_4598_, v_a_4599_, v_a_4600_, v_a_4601_);
return v___x_4605_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object* v_mvarId_4606_, lean_object* v_config_4607_, lean_object* v_a_4608_, lean_object* v_a_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_){
_start:
{
lean_object* v_res_4613_; 
v_res_4613_ = l_Lean_MVarId_contradictionCore(v_mvarId_4606_, v_config_4607_, v_a_4608_, v_a_4609_, v_a_4610_, v_a_4611_);
lean_dec(v_a_4611_);
lean_dec_ref(v_a_4610_);
lean_dec(v_a_4609_);
lean_dec_ref(v_a_4608_);
return v_res_4613_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object* v_mvarId_4614_, lean_object* v_config_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_){
_start:
{
lean_object* v___x_4621_; 
lean_inc(v_mvarId_4614_);
v___x_4621_ = l_Lean_MVarId_contradictionCore(v_mvarId_4614_, v_config_4615_, v_a_4616_, v_a_4617_, v_a_4618_, v_a_4619_);
if (lean_obj_tag(v___x_4621_) == 0)
{
lean_object* v_a_4622_; lean_object* v___x_4624_; uint8_t v_isShared_4625_; uint8_t v_isSharedCheck_4634_; 
v_a_4622_ = lean_ctor_get(v___x_4621_, 0);
v_isSharedCheck_4634_ = !lean_is_exclusive(v___x_4621_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4624_ = v___x_4621_;
v_isShared_4625_ = v_isSharedCheck_4634_;
goto v_resetjp_4623_;
}
else
{
lean_inc(v_a_4622_);
lean_dec(v___x_4621_);
v___x_4624_ = lean_box(0);
v_isShared_4625_ = v_isSharedCheck_4634_;
goto v_resetjp_4623_;
}
v_resetjp_4623_:
{
uint8_t v___x_4626_; 
v___x_4626_ = lean_unbox(v_a_4622_);
lean_dec(v_a_4622_);
if (v___x_4626_ == 0)
{
lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
lean_del_object(v___x_4624_);
v___x_4627_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
v___x_4628_ = lean_box(0);
v___x_4629_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4627_, v_mvarId_4614_, v___x_4628_, v_a_4616_, v_a_4617_, v_a_4618_, v_a_4619_);
return v___x_4629_;
}
else
{
lean_object* v___x_4630_; lean_object* v___x_4632_; 
lean_dec(v_mvarId_4614_);
v___x_4630_ = lean_box(0);
if (v_isShared_4625_ == 0)
{
lean_ctor_set(v___x_4624_, 0, v___x_4630_);
v___x_4632_ = v___x_4624_;
goto v_reusejp_4631_;
}
else
{
lean_object* v_reuseFailAlloc_4633_; 
v_reuseFailAlloc_4633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4633_, 0, v___x_4630_);
v___x_4632_ = v_reuseFailAlloc_4633_;
goto v_reusejp_4631_;
}
v_reusejp_4631_:
{
return v___x_4632_;
}
}
}
}
else
{
lean_object* v_a_4635_; lean_object* v___x_4637_; uint8_t v_isShared_4638_; uint8_t v_isSharedCheck_4642_; 
lean_dec(v_mvarId_4614_);
v_a_4635_ = lean_ctor_get(v___x_4621_, 0);
v_isSharedCheck_4642_ = !lean_is_exclusive(v___x_4621_);
if (v_isSharedCheck_4642_ == 0)
{
v___x_4637_ = v___x_4621_;
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
else
{
lean_inc(v_a_4635_);
lean_dec(v___x_4621_);
v___x_4637_ = lean_box(0);
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
v_resetjp_4636_:
{
lean_object* v___x_4640_; 
if (v_isShared_4638_ == 0)
{
v___x_4640_ = v___x_4637_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v_a_4635_);
v___x_4640_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
return v___x_4640_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object* v_mvarId_4643_, lean_object* v_config_4644_, lean_object* v_a_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_){
_start:
{
lean_object* v_res_4650_; 
v_res_4650_ = l_Lean_MVarId_contradiction(v_mvarId_4643_, v_config_4644_, v_a_4645_, v_a_4646_, v_a_4647_, v_a_4648_);
lean_dec(v_a_4648_);
lean_dec_ref(v_a_4647_);
lean_dec(v_a_4646_);
lean_dec_ref(v_a_4645_);
return v_res_4650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4713_; uint8_t v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; 
v___x_4713_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_4714_ = 0;
v___x_4715_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_4716_ = l_Lean_registerTraceClass(v___x_4713_, v___x_4714_, v___x_4715_);
return v___x_4716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object* v_a_4717_){
_start:
{
lean_object* v_res_4718_; 
v_res_4718_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
return v_res_4718_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Contradiction(builtin);
}
#ifdef __cplusplus
}
#endif

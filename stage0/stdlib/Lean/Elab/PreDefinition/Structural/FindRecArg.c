// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.FindRecArg
// Imports: public import Lean.Elab.PreDefinition.TerminationMeasure public import Lean.Elab.PreDefinition.Structural.Basic public import Lean.Elab.PreDefinition.Structural.RecArgInfo import Init.Omega
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInst_toMessageData(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_andList(lean_object*);
extern lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Elab_TerminationMeasure_structuralArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_ofInductiveVal(lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_prettyParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Elab_Structural_prettyParam___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_prettyParam___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_prettyParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_prettyParam___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Structural_prettyParameterSet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_prettyParameterSet___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_prettyParameterSet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "parameters "};
static const lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_prettyParameterSet___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Structural_prettyParameterSet___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__2;
static const lean_string_object l_Lean_Elab_Structural_prettyParameterSet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "parameter "};
static const lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_prettyParameterSet___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Structural_prettyParameterSet___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_prettyParameterSet___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParameterSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParameterSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__1(lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Elab.PreDefinition.Structural.FindRecArg"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Elab.Structural.getRecArgInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "its type is not an inductive"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__1;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "its type "};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__3;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = " is an inductive family and indices are not pairwise distinct"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__5;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "{indInfo.name} not in {indInfo.all}"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__7;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "its type is an inductive datatype"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__9;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "\nand the datatype parameter"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__10 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__11;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "\ndepends on the function parameter"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__12 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__13;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "\nwhich is not fixed."};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__14 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__15;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " is an inductive family"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__16 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__17;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nand index"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__18 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__19;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "\ndepends on the non index"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__20 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__20_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__21;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = " is an inductive family and indices are not variables"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__22 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__22_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__23;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__24;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "it is a let-binding"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__25 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__25_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__26;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "assertion violation: fixedParamPerm.size = xs.size\n  "};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__27 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__27_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__28;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "the index #"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__29 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__29_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__30;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " exceeds "};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__31 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__31_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__32;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = ", the number of parameters"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__33 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__33_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__34;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfo___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "it is unchanged in the recursive calls"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__35 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfo___closed__35_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfo___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfo___closed__36;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Not considering parameter "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "cannot use specified measure for structural recursion:"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3;
static const lean_array_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__6_value;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__7 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__7_value;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__7_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9_value;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__10 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__11 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12;
static const lean_string_object l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "getRecArgInfos report: "};
static const lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__13 = (const lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_nonIndicesFirst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_nonIndicesFirst___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_nonIndicesFirst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_nonIndicesFirst___closed__1;
static const lean_ctor_object l_Lean_Elab_Structural_nonIndicesFirst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4_value),((lean_object*)&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4_value)}};
static const lean_object* l_Lean_Elab_Structural_nonIndicesFirst___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_nonIndicesFirst___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_nonIndicesFirst(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_nonIndicesFirst___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__3(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_inductiveGroups___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_IndGroupInst_isDefEq___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_inductiveGroups___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_inductiveGroups___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inductiveGroups(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inductiveGroups___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Elab.Structural.argsInGroup"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(uint8_t, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_argsInGroup(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_argsInGroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_maxCombinationSize;
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Skipping arguments of type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ", as "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = " has no compatible argument.\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Too many possible combinations of parameters of type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " (or "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 87, .m_capacity = 87, .m_length = 86, .m_data = "please indicate the recursive argument explicitly using `termination_by structural`).\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Structural_findRecArgCandidates___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_findRecArgCandidates___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "no parameters suitable for structural recursion"};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_findRecArgCandidates___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__1_value)}};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_findRecArgCandidates___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__3;
static const lean_string_object l_Lean_Elab_Structural_findRecArgCandidates___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "inductive groups: "};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_findRecArgCandidates___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__5;
static const lean_array_object l_Lean_Elab_Structural_findRecArgCandidates___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__6_value;
static const lean_string_object l_Lean_Elab_Structural_findRecArgCandidates___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "recArgInfos:"};
static const lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__7 = (const lean_object*)&l_Lean_Elab_Structural_findRecArgCandidates___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Structural_findRecArgCandidates___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__8;
static lean_once_cell_t l_Lean_Elab_Structural_findRecArgCandidates___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_findRecArgCandidates___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_findRecArgCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_findRecArgCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "the type "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = " does not have a `.brecOn` recursor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Cannot use "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_tryCandidates___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "failed to infer structural recursion:\n"};
static const lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_tryCandidates___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_tryCandidates___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___closed__1;
static const lean_string_object l_Lean_Elab_Structural_tryCandidates___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "tryCandidates:\n"};
static const lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_tryCandidates___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_tryCandidates___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; uint8_t v___x_9_; lean_object* v_env_10_; lean_object* v___x_11_; lean_object* v_toCold_12_; lean_object* v_mctx_13_; lean_object* v_lctx_14_; lean_object* v_options_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = 0;
v_env_10_ = l_Lean_Environment_setRecordingDeps(v_env_8_, v___x_9_);
v___x_11_ = lean_st_ref_get(v___y_3_);
v_toCold_12_ = lean_ctor_get(v___y_4_, 0);
v_mctx_13_ = lean_ctor_get(v___x_11_, 0);
lean_inc_ref(v_mctx_13_);
lean_dec(v___x_11_);
v_lctx_14_ = lean_ctor_get(v___y_2_, 2);
v_options_15_ = lean_ctor_get(v_toCold_12_, 2);
lean_inc_ref(v_options_15_);
lean_inc_ref(v_lctx_14_);
v___x_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_16_, 0, v_env_10_);
lean_ctor_set(v___x_16_, 1, v_mctx_13_);
lean_ctor_set(v___x_16_, 2, v_lctx_14_);
lean_ctor_set(v___x_16_, 3, v_options_15_);
v___x_17_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v_msgData_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_prettyParam___closed__1(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParam___closed__0));
v___x_28_ = l_Lean_stringToMessageData(v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParam(lean_object* v_xs_29_, lean_object* v_i_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v___x_36_; lean_object* v_x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_36_ = l_Lean_instInhabitedExpr;
v_x_37_ = lean_array_get_borrowed(v___x_36_, v_xs_29_, v_i_30_);
v___x_38_ = l_Lean_Expr_fvarId_x21(v_x_37_);
v___x_39_ = l_Lean_FVarId_getUserName___redArg(v___x_38_, v_a_31_, v_a_33_, v_a_34_);
if (lean_obj_tag(v___x_39_) == 0)
{
lean_object* v_a_40_; uint8_t v___x_41_; 
v_a_40_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_a_40_);
lean_dec_ref_known(v___x_39_, 1);
v___x_41_ = l_Lean_Name_hasMacroScopes(v_a_40_);
lean_dec(v_a_40_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; lean_object* v___x_43_; 
lean_inc(v_x_37_);
v___x_42_ = l_Lean_MessageData_ofExpr(v_x_37_);
v___x_43_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v___x_42_, v_a_31_, v_a_32_, v_a_33_, v_a_34_);
return v___x_43_;
}
else
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_44_ = lean_obj_once(&l_Lean_Elab_Structural_prettyParam___closed__1, &l_Lean_Elab_Structural_prettyParam___closed__1_once, _init_l_Lean_Elab_Structural_prettyParam___closed__1);
v___x_45_ = lean_unsigned_to_nat(1u);
v___x_46_ = lean_nat_add(v_i_30_, v___x_45_);
v___x_47_ = l_Nat_reprFast(v___x_46_);
v___x_48_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
v___x_49_ = l_Lean_MessageData_ofFormat(v___x_48_);
v___x_50_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_44_);
lean_ctor_set(v___x_50_, 1, v___x_49_);
v___x_51_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v___x_50_, v_a_31_, v_a_32_, v_a_33_, v_a_34_);
return v___x_51_;
}
}
else
{
lean_object* v_a_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
v_a_52_ = lean_ctor_get(v___x_39_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_59_ == 0)
{
v___x_54_ = v___x_39_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_a_52_);
lean_dec(v___x_39_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_57_; 
if (v_isShared_55_ == 0)
{
v___x_57_ = v___x_54_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_a_52_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParam___boxed(lean_object* v_xs_60_, lean_object* v_i_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Elab_Structural_prettyParam(v_xs_60_, v_i_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
lean_dec(v_i_61_);
lean_dec_ref(v_xs_60_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0(lean_object* v_k_68_, lean_object* v_b_69_, lean_object* v_c_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v___x_76_; 
lean_inc(v___y_74_);
lean_inc_ref(v___y_73_);
lean_inc(v___y_72_);
lean_inc_ref(v___y_71_);
v___x_76_ = lean_apply_7(v_k_68_, v_b_69_, v_c_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, lean_box(0));
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0___boxed(lean_object* v_k_77_, lean_object* v_b_78_, lean_object* v_c_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0(v_k_77_, v_b_78_, v_c_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(lean_object* v_e_86_, lean_object* v_k_87_, uint8_t v_cleanupAnnotations_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___f_94_; uint8_t v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___f_94_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_94_, 0, v_k_87_);
v___x_95_ = 1;
v___x_96_ = 0;
v___x_97_ = lean_box(0);
v___x_98_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_86_, v___x_95_, v___x_96_, v___x_95_, v___x_96_, v___x_97_, v___f_94_, v_cleanupAnnotations_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_106_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_106_ == 0)
{
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_106_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_a_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_106_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_104_; 
if (v_isShared_102_ == 0)
{
v___x_104_ = v___x_101_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_a_99_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
else
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_a_107_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_98_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_98_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg___boxed(lean_object* v_e_115_, lean_object* v_k_116_, lean_object* v_cleanupAnnotations_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_123_; lean_object* v_res_124_; 
v_cleanupAnnotations_boxed_123_ = lean_unbox(v_cleanupAnnotations_117_);
v_res_124_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_e_115_, v_k_116_, v_cleanupAnnotations_boxed_123_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
lean_dec(v___y_119_);
lean_dec_ref(v___y_118_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0(lean_object* v_00_u03b1_125_, lean_object* v_e_126_, lean_object* v_k_127_, uint8_t v_cleanupAnnotations_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_e_126_, v_k_127_, v_cleanupAnnotations_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___boxed(lean_object* v_00_u03b1_135_, lean_object* v_e_136_, lean_object* v_k_137_, lean_object* v_cleanupAnnotations_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_144_; lean_object* v_res_145_; 
v_cleanupAnnotations_boxed_144_ = lean_unbox(v_cleanupAnnotations_138_);
v_res_145_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0(v_00_u03b1_135_, v_e_136_, v_k_137_, v_cleanupAnnotations_boxed_144_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___lam__0(lean_object* v_recArgInfo_146_, lean_object* v_xs_147_, lean_object* v_ys_148_, lean_object* v_x_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_fixedParamPerm_155_; lean_object* v_recArgPos_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_fixedParamPerm_155_ = lean_ctor_get(v_recArgInfo_146_, 1);
lean_inc_ref(v_fixedParamPerm_155_);
v_recArgPos_156_ = lean_ctor_get(v_recArgInfo_146_, 2);
lean_inc(v_recArgPos_156_);
lean_dec_ref(v_recArgInfo_146_);
v___x_157_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_155_, v_xs_147_, v_ys_148_);
v___x_158_ = l_Lean_Elab_Structural_prettyParam(v___x_157_, v_recArgPos_156_, v___y_150_, v___y_151_, v___y_152_, v___y_153_);
lean_dec(v_recArgPos_156_);
lean_dec_ref(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___lam__0___boxed(lean_object* v_recArgInfo_159_, lean_object* v_xs_160_, lean_object* v_ys_161_, lean_object* v_x_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Elab_Structural_prettyRecArg___lam__0(v_recArgInfo_159_, v_xs_160_, v_ys_161_, v_x_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec_ref(v_x_162_);
lean_dec_ref(v_xs_160_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg(lean_object* v_xs_169_, lean_object* v_value_170_, lean_object* v_recArgInfo_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___f_177_; uint8_t v___x_178_; lean_object* v___x_179_; 
v___f_177_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_prettyRecArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_177_, 0, v_recArgInfo_171_);
lean_closure_set(v___f_177_, 1, v_xs_169_);
v___x_178_ = 0;
v___x_179_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_value_170_, v___f_177_, v___x_178_, v_a_172_, v_a_173_, v_a_174_, v_a_175_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyRecArg___boxed(lean_object* v_xs_180_, lean_object* v_value_181_, lean_object* v_recArgInfo_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_Elab_Structural_prettyRecArg(v_xs_180_, v_value_181_, v_recArgInfo_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
return v_res_188_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__0));
v___x_191_ = l_Lean_stringToMessageData(v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0(lean_object* v_xs_192_, lean_object* v_as_193_, size_t v_sz_194_, size_t v_i_195_, lean_object* v_b_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
uint8_t v___x_202_; 
v___x_202_ = lean_usize_dec_lt(v_i_195_, v_sz_194_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; 
lean_dec_ref(v_xs_192_);
v___x_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_203_, 0, v_b_196_);
return v___x_203_;
}
else
{
lean_object* v_snd_204_; lean_object* v_snd_205_; lean_object* v_fst_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_288_; 
v_snd_204_ = lean_ctor_get(v_b_196_, 1);
lean_inc(v_snd_204_);
v_snd_205_ = lean_ctor_get(v_snd_204_, 1);
lean_inc(v_snd_205_);
v_fst_206_ = lean_ctor_get(v_b_196_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v_b_196_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; 
v_unused_289_ = lean_ctor_get(v_b_196_, 1);
lean_dec(v_unused_289_);
v___x_208_ = v_b_196_;
v_isShared_209_ = v_isSharedCheck_288_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_fst_206_);
lean_dec(v_b_196_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_288_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v_fst_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_286_; 
v_fst_210_ = lean_ctor_get(v_snd_204_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v_snd_204_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; 
v_unused_287_ = lean_ctor_get(v_snd_204_, 1);
lean_dec(v_unused_287_);
v___x_212_ = v_snd_204_;
v_isShared_213_ = v_isSharedCheck_286_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_fst_210_);
lean_dec(v_snd_204_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_286_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v_array_214_; lean_object* v_start_215_; lean_object* v_stop_216_; uint8_t v___x_217_; 
v_array_214_ = lean_ctor_get(v_snd_205_, 0);
v_start_215_ = lean_ctor_get(v_snd_205_, 1);
v_stop_216_ = lean_ctor_get(v_snd_205_, 2);
v___x_217_ = lean_nat_dec_lt(v_start_215_, v_stop_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_219_; 
lean_dec_ref(v_xs_192_);
if (v_isShared_213_ == 0)
{
v___x_219_ = v___x_212_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_fst_210_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v_snd_205_);
v___x_219_ = v_reuseFailAlloc_224_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_object* v___x_221_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___x_219_);
v___x_221_ = v___x_208_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_fst_206_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v___x_219_);
v___x_221_ = v_reuseFailAlloc_223_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
lean_object* v___x_222_; 
v___x_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
return v___x_222_;
}
}
}
else
{
lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_282_; 
lean_inc(v_stop_216_);
lean_inc(v_start_215_);
lean_inc_ref(v_array_214_);
v_isSharedCheck_282_ = !lean_is_exclusive(v_snd_205_);
if (v_isSharedCheck_282_ == 0)
{
lean_object* v_unused_283_; lean_object* v_unused_284_; lean_object* v_unused_285_; 
v_unused_283_ = lean_ctor_get(v_snd_205_, 2);
lean_dec(v_unused_283_);
v_unused_284_ = lean_ctor_get(v_snd_205_, 1);
lean_dec(v_unused_284_);
v_unused_285_ = lean_ctor_get(v_snd_205_, 0);
lean_dec(v_unused_285_);
v___x_226_ = v_snd_205_;
v_isShared_227_ = v_isSharedCheck_282_;
goto v_resetjp_225_;
}
else
{
lean_dec(v_snd_205_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_282_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v_array_228_; lean_object* v_start_229_; lean_object* v_stop_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_235_; 
v_array_228_ = lean_ctor_get(v_fst_210_, 0);
v_start_229_ = lean_ctor_get(v_fst_210_, 1);
v_stop_230_ = lean_ctor_get(v_fst_210_, 2);
v___x_231_ = lean_array_fget(v_array_214_, v_start_215_);
v___x_232_ = lean_unsigned_to_nat(1u);
v___x_233_ = lean_nat_add(v_start_215_, v___x_232_);
lean_dec(v_start_215_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 1, v___x_233_);
v___x_235_ = v___x_226_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_array_214_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_stop_216_);
v___x_235_ = v_reuseFailAlloc_281_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
uint8_t v___x_236_; 
v___x_236_ = lean_nat_dec_lt(v_start_229_, v_stop_230_);
if (v___x_236_ == 0)
{
lean_object* v___x_238_; 
lean_dec(v___x_231_);
lean_dec_ref(v_xs_192_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v___x_235_);
v___x_238_ = v___x_212_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_fst_210_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_235_);
v___x_238_ = v_reuseFailAlloc_243_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___x_238_);
v___x_240_ = v___x_208_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_fst_206_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v___x_238_);
v___x_240_ = v_reuseFailAlloc_242_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
return v___x_241_;
}
}
}
else
{
lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_277_; 
lean_inc(v_stop_230_);
lean_inc(v_start_229_);
lean_inc_ref(v_array_228_);
v_isSharedCheck_277_ = !lean_is_exclusive(v_fst_210_);
if (v_isSharedCheck_277_ == 0)
{
lean_object* v_unused_278_; lean_object* v_unused_279_; lean_object* v_unused_280_; 
v_unused_278_ = lean_ctor_get(v_fst_210_, 2);
lean_dec(v_unused_278_);
v_unused_279_ = lean_ctor_get(v_fst_210_, 1);
lean_dec(v_unused_279_);
v_unused_280_ = lean_ctor_get(v_fst_210_, 0);
lean_dec(v_unused_280_);
v___x_245_ = v_fst_210_;
v_isShared_246_ = v_isSharedCheck_277_;
goto v_resetjp_244_;
}
else
{
lean_dec(v_fst_210_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_277_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v_a_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_251_; 
v_a_247_ = lean_array_uget_borrowed(v_as_193_, v_i_195_);
v___x_248_ = lean_array_fget(v_array_228_, v_start_229_);
v___x_249_ = lean_nat_add(v_start_229_, v___x_232_);
lean_dec(v_start_229_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 1, v___x_249_);
v___x_251_ = v___x_245_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v_array_228_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_276_, 2, v_stop_230_);
v___x_251_ = v_reuseFailAlloc_276_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; 
lean_inc_ref(v_xs_192_);
v___x_252_ = l_Lean_Elab_Structural_prettyRecArg(v_xs_192_, v___x_248_, v___x_231_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_260_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v___x_252_, 1);
v___x_254_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1);
v___x_255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_255_, 0, v_a_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
lean_inc(v_a_247_);
v___x_256_ = l_Lean_MessageData_ofName(v_a_247_);
v___x_257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = lean_array_push(v_fst_206_, v___x_257_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v___x_235_);
lean_ctor_set(v___x_212_, 0, v___x_251_);
v___x_260_ = v___x_212_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_251_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v___x_235_);
v___x_260_ = v_reuseFailAlloc_267_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_262_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___x_260_);
lean_ctor_set(v___x_208_, 0, v___x_258_);
v___x_262_ = v___x_208_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v___x_260_);
v___x_262_ = v_reuseFailAlloc_266_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
size_t v___x_263_; size_t v___x_264_; 
v___x_263_ = ((size_t)1ULL);
v___x_264_ = lean_usize_add(v_i_195_, v___x_263_);
v_i_195_ = v___x_264_;
v_b_196_ = v___x_262_;
goto _start;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
lean_dec_ref(v___x_251_);
lean_dec_ref(v___x_235_);
lean_del_object(v___x_212_);
lean_del_object(v___x_208_);
lean_dec(v_fst_206_);
lean_dec_ref(v_xs_192_);
v_a_268_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_252_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_252_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___boxed(lean_object* v_xs_290_, lean_object* v_as_291_, lean_object* v_sz_292_, lean_object* v_i_293_, lean_object* v_b_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
size_t v_sz_boxed_300_; size_t v_i_boxed_301_; lean_object* v_res_302_; 
v_sz_boxed_300_ = lean_unbox_usize(v_sz_292_);
lean_dec(v_sz_292_);
v_i_boxed_301_ = lean_unbox_usize(v_i_293_);
lean_dec(v_i_293_);
v_res_302_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0(v_xs_290_, v_as_291_, v_sz_boxed_300_, v_i_boxed_301_, v_b_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec_ref(v_as_291_);
return v_res_302_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_prettyParameterSet___closed__2(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParameterSet___closed__1));
v___x_307_ = l_Lean_stringToMessageData(v___x_306_);
return v___x_307_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_prettyParameterSet___closed__4(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParameterSet___closed__3));
v___x_310_ = l_Lean_stringToMessageData(v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParameterSet(lean_object* v_fnNames_311_, lean_object* v_xs_312_, lean_object* v_values_313_, lean_object* v_recArgInfos_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_320_ = lean_array_get_size(v_fnNames_311_);
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_dec_eq(v___x_320_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v_l_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; size_t v_sz_331_; size_t v___x_332_; lean_object* v___x_333_; 
v___x_323_ = lean_unsigned_to_nat(0u);
v_l_324_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParameterSet___closed__0));
v___x_325_ = lean_array_get_size(v_values_313_);
v___x_326_ = l_Array_toSubarray___redArg(v_values_313_, v___x_323_, v___x_325_);
v___x_327_ = lean_array_get_size(v_recArgInfos_314_);
v___x_328_ = l_Array_toSubarray___redArg(v_recArgInfos_314_, v___x_323_, v___x_327_);
v___x_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_329_, 0, v___x_326_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
v___x_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_330_, 0, v_l_324_);
lean_ctor_set(v___x_330_, 1, v___x_329_);
v_sz_331_ = lean_array_size(v_fnNames_311_);
v___x_332_ = ((size_t)0ULL);
v___x_333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0(v_xs_312_, v_fnNames_311_, v_sz_331_, v___x_332_, v___x_330_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_353_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_353_ == 0)
{
v___x_336_ = v___x_333_;
v_isShared_337_ = v_isSharedCheck_353_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_333_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_353_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v_fst_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_351_; 
v_fst_338_ = lean_ctor_get(v_a_334_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v_a_334_);
if (v_isSharedCheck_351_ == 0)
{
lean_object* v_unused_352_; 
v_unused_352_ = lean_ctor_get(v_a_334_, 1);
lean_dec(v_unused_352_);
v___x_340_ = v_a_334_;
v_isShared_341_ = v_isSharedCheck_351_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_fst_338_);
lean_dec(v_a_334_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_351_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_346_; 
v___x_342_ = lean_obj_once(&l_Lean_Elab_Structural_prettyParameterSet___closed__2, &l_Lean_Elab_Structural_prettyParameterSet___closed__2_once, _init_l_Lean_Elab_Structural_prettyParameterSet___closed__2);
v___x_343_ = lean_array_to_list(v_fst_338_);
v___x_344_ = l_Lean_MessageData_andList(v___x_343_);
if (v_isShared_341_ == 0)
{
lean_ctor_set_tag(v___x_340_, 7);
lean_ctor_set(v___x_340_, 1, v___x_344_);
lean_ctor_set(v___x_340_, 0, v___x_342_);
v___x_346_ = v___x_340_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_342_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v___x_344_);
v___x_346_ = v_reuseFailAlloc_350_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_object* v___x_348_; 
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 0, v___x_346_);
v___x_348_ = v___x_336_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_346_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
v_a_354_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_333_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_333_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_362_ = l_Lean_instInhabitedExpr;
v___x_363_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = lean_array_get(v___x_362_, v_values_313_, v___x_364_);
lean_dec_ref(v_values_313_);
v___x_366_ = lean_array_get(v___x_363_, v_recArgInfos_314_, v___x_364_);
lean_dec_ref(v_recArgInfos_314_);
v___x_367_ = l_Lean_Elab_Structural_prettyRecArg(v_xs_312_, v___x_365_, v___x_366_, v_a_315_, v_a_316_, v_a_317_, v_a_318_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_377_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_377_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_377_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_377_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_372_ = lean_obj_once(&l_Lean_Elab_Structural_prettyParameterSet___closed__4, &l_Lean_Elab_Structural_prettyParameterSet___closed__4_once, _init_l_Lean_Elab_Structural_prettyParameterSet___closed__4);
v___x_373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
lean_ctor_set(v___x_373_, 1, v_a_368_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v___x_373_);
v___x_375_ = v___x_370_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
else
{
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_prettyParameterSet___boxed(lean_object* v_fnNames_378_, lean_object* v_xs_379_, lean_object* v_values_380_, lean_object* v_recArgInfos_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_Elab_Structural_prettyParameterSet(v_fnNames_378_, v_xs_379_, v_values_380_, v_recArgInfos_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_);
lean_dec(v_a_385_);
lean_dec_ref(v_a_384_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_382_);
lean_dec_ref(v_fnNames_378_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1(lean_object* v_xs_388_, lean_object* v_v_389_, lean_object* v_i_390_){
_start:
{
lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_391_ = lean_array_get_size(v_xs_388_);
v___x_392_ = lean_nat_dec_lt(v_i_390_, v___x_391_);
if (v___x_392_ == 0)
{
lean_object* v___x_393_; 
lean_dec(v_i_390_);
v___x_393_ = lean_box(0);
return v___x_393_;
}
else
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = lean_array_fget_borrowed(v_xs_388_, v_i_390_);
v___x_395_ = lean_expr_eqv(v___x_394_, v_v_389_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = lean_unsigned_to_nat(1u);
v___x_397_ = lean_nat_add(v_i_390_, v___x_396_);
lean_dec(v_i_390_);
v_i_390_ = v___x_397_;
goto _start;
}
else
{
lean_object* v___x_399_; 
v___x_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_399_, 0, v_i_390_);
return v___x_399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_400_, lean_object* v_v_401_, lean_object* v_i_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1(v_xs_400_, v_v_401_, v_i_402_);
lean_dec_ref(v_v_401_);
lean_dec_ref(v_xs_400_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0(lean_object* v_xs_404_, lean_object* v_v_405_){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_unsigned_to_nat(0u);
v___x_407_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0_spec__1(v_xs_404_, v_v_405_, v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0___boxed(lean_object* v_xs_408_, lean_object* v_v_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0(v_xs_408_, v_v_409_);
lean_dec_ref(v_v_409_);
lean_dec_ref(v_xs_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(lean_object* v_xs_411_, lean_object* v_v_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0_spec__0(v_xs_411_, v_v_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v___x_414_; 
v___x_414_ = lean_box(0);
return v___x_414_;
}
else
{
lean_object* v_val_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_val_415_ = lean_ctor_get(v___x_413_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_413_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_val_415_);
lean_dec(v___x_413_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_val_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0___boxed(lean_object* v_xs_423_, lean_object* v_v_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(v_xs_423_, v_v_424_);
lean_dec_ref(v_v_424_);
lean_dec_ref(v_xs_423_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1(lean_object* v_xs_426_, lean_object* v_as_427_, size_t v_sz_428_, size_t v_i_429_, lean_object* v_b_430_){
_start:
{
lean_object* v_a_432_; uint8_t v___x_436_; 
v___x_436_ = lean_usize_dec_lt(v_i_429_, v_sz_428_);
if (v___x_436_ == 0)
{
return v_b_430_;
}
else
{
lean_object* v_a_437_; lean_object* v___x_438_; 
v_a_437_ = lean_array_uget_borrowed(v_as_427_, v_i_429_);
v___x_438_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(v_xs_426_, v_a_437_);
if (lean_obj_tag(v___x_438_) == 1)
{
lean_object* v_val_439_; uint8_t v___x_440_; 
v_val_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_val_439_);
lean_dec_ref_known(v___x_438_, 1);
v___x_440_ = lean_nat_dec_lt(v_val_439_, v_b_430_);
if (v___x_440_ == 0)
{
lean_dec(v_val_439_);
v_a_432_ = v_b_430_;
goto v___jp_431_;
}
else
{
lean_dec(v_b_430_);
v_a_432_ = v_val_439_;
goto v___jp_431_;
}
}
else
{
lean_dec(v___x_438_);
v_a_432_ = v_b_430_;
goto v___jp_431_;
}
}
v___jp_431_:
{
size_t v___x_433_; size_t v___x_434_; 
v___x_433_ = ((size_t)1ULL);
v___x_434_ = lean_usize_add(v_i_429_, v___x_433_);
v_i_429_ = v___x_434_;
v_b_430_ = v_a_432_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1___boxed(lean_object* v_xs_441_, lean_object* v_as_442_, lean_object* v_sz_443_, lean_object* v_i_444_, lean_object* v_b_445_){
_start:
{
size_t v_sz_boxed_446_; size_t v_i_boxed_447_; lean_object* v_res_448_; 
v_sz_boxed_446_ = lean_unbox_usize(v_sz_443_);
lean_dec(v_sz_443_);
v_i_boxed_447_ = lean_unbox_usize(v_i_444_);
lean_dec(v_i_444_);
v_res_448_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1(v_xs_441_, v_as_442_, v_sz_boxed_446_, v_i_boxed_447_, v_b_445_);
lean_dec_ref(v_as_442_);
lean_dec_ref(v_xs_441_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos(lean_object* v_xs_449_, lean_object* v_indices_450_){
_start:
{
lean_object* v_minPos_451_; size_t v_sz_452_; size_t v___x_453_; lean_object* v___x_454_; 
v_minPos_451_ = lean_array_get_size(v_xs_449_);
v_sz_452_ = lean_array_size(v_indices_450_);
v___x_453_ = ((size_t)0ULL);
v___x_454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__1(v_xs_449_, v_indices_450_, v_sz_452_, v___x_453_, v_minPos_451_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos___boxed(lean_object* v_xs_455_, lean_object* v_indices_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos(v_xs_455_, v_indices_456_);
lean_dec_ref(v_indices_456_);
lean_dec_ref(v_xs_455_);
return v_res_457_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0(lean_object* v_x_458_){
_start:
{
uint8_t v___x_459_; 
v___x_459_ = 0;
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0___boxed(lean_object* v_x_460_){
_start:
{
uint8_t v_res_461_; lean_object* v_r_462_; 
v_res_461_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__0(v_x_460_);
lean_dec(v_x_460_);
v_r_462_ = lean_box(v_res_461_);
return v_r_462_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1(lean_object* v_fvarId_463_, lean_object* v_x_464_){
_start:
{
uint8_t v___x_465_; 
v___x_465_ = l_Lean_instBEqFVarId_beq(v_fvarId_463_, v_x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_466_, lean_object* v_x_467_){
_start:
{
uint8_t v_res_468_; lean_object* v_r_469_; 
v_res_468_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1(v_fvarId_466_, v_x_467_);
lean_dec(v_x_467_);
lean_dec(v_fvarId_466_);
v_r_469_ = lean_box(v_res_468_);
return v_r_469_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_box(0);
v___x_472_ = lean_unsigned_to_nat(16u);
v___x_473_ = lean_mk_array(v___x_472_, v___x_471_);
return v___x_473_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_474_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__1);
v___x_475_ = lean_unsigned_to_nat(0u);
v___x_476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
lean_ctor_set(v___x_476_, 1, v___x_474_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(lean_object* v_e_477_, lean_object* v_fvarId_478_, lean_object* v___y_479_){
_start:
{
lean_object* v___f_481_; lean_object* v___f_482_; lean_object* v___x_483_; uint8_t v_fst_485_; lean_object* v_mctx_486_; lean_object* v___y_505_; lean_object* v_mctx_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v___f_481_ = ((lean_object*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__0));
v___f_482_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_482_, 0, v_fvarId_478_);
v___x_483_ = lean_st_ref_get(v___y_479_);
v_mctx_510_ = lean_ctor_get(v___x_483_, 0);
lean_inc_ref_n(v_mctx_510_, 2);
lean_dec(v___x_483_);
v___x_511_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___closed__2);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set(v___x_512_, 1, v_mctx_510_);
v___x_513_ = l_Lean_Expr_hasFVar(v_e_477_);
if (v___x_513_ == 0)
{
uint8_t v___x_514_; 
v___x_514_ = l_Lean_Expr_hasMVar(v_e_477_);
if (v___x_514_ == 0)
{
lean_dec_ref_known(v___x_512_, 2);
lean_dec_ref(v___f_482_);
lean_dec_ref(v_e_477_);
v_fst_485_ = v___x_514_;
v_mctx_486_ = v_mctx_510_;
goto v___jp_484_;
}
else
{
lean_object* v___x_515_; 
lean_dec_ref(v_mctx_510_);
v___x_515_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_482_, v___f_481_, v_e_477_, v___x_512_);
v___y_505_ = v___x_515_;
goto v___jp_504_;
}
}
else
{
lean_object* v___x_516_; 
lean_dec_ref(v_mctx_510_);
v___x_516_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_482_, v___f_481_, v_e_477_, v___x_512_);
v___y_505_ = v___x_516_;
goto v___jp_504_;
}
v___jp_484_:
{
lean_object* v___x_487_; lean_object* v_cache_488_; lean_object* v_zetaDeltaFVarIds_489_; lean_object* v_postponed_490_; lean_object* v_diag_491_; lean_object* v_rewriteFires_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_502_; 
v___x_487_ = lean_st_ref_take(v___y_479_);
v_cache_488_ = lean_ctor_get(v___x_487_, 1);
v_zetaDeltaFVarIds_489_ = lean_ctor_get(v___x_487_, 2);
v_postponed_490_ = lean_ctor_get(v___x_487_, 3);
v_diag_491_ = lean_ctor_get(v___x_487_, 4);
v_rewriteFires_492_ = lean_ctor_get(v___x_487_, 5);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_502_ == 0)
{
lean_object* v_unused_503_; 
v_unused_503_ = lean_ctor_get(v___x_487_, 0);
lean_dec(v_unused_503_);
v___x_494_ = v___x_487_;
v_isShared_495_ = v_isSharedCheck_502_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_rewriteFires_492_);
lean_inc(v_diag_491_);
lean_inc(v_postponed_490_);
lean_inc(v_zetaDeltaFVarIds_489_);
lean_inc(v_cache_488_);
lean_dec(v___x_487_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_502_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v_mctx_486_);
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_mctx_486_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_cache_488_);
lean_ctor_set(v_reuseFailAlloc_501_, 2, v_zetaDeltaFVarIds_489_);
lean_ctor_set(v_reuseFailAlloc_501_, 3, v_postponed_490_);
lean_ctor_set(v_reuseFailAlloc_501_, 4, v_diag_491_);
lean_ctor_set(v_reuseFailAlloc_501_, 5, v_rewriteFires_492_);
v___x_497_ = v_reuseFailAlloc_501_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_st_ref_put(v___y_479_, v___x_497_);
v___x_499_ = lean_box(v_fst_485_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
}
v___jp_504_:
{
lean_object* v_snd_506_; lean_object* v_fst_507_; lean_object* v_mctx_508_; uint8_t v___x_509_; 
v_snd_506_ = lean_ctor_get(v___y_505_, 1);
lean_inc(v_snd_506_);
v_fst_507_ = lean_ctor_get(v___y_505_, 0);
lean_inc(v_fst_507_);
lean_dec_ref(v___y_505_);
v_mctx_508_ = lean_ctor_get(v_snd_506_, 1);
lean_inc_ref(v_mctx_508_);
lean_dec(v_snd_506_);
v___x_509_ = lean_unbox(v_fst_507_);
lean_dec(v_fst_507_);
v_fst_485_ = v___x_509_;
v_mctx_486_ = v_mctx_508_;
goto v___jp_484_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg___boxed(lean_object* v_e_517_, lean_object* v_fvarId_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(v_e_517_, v_fvarId_518_, v___y_519_);
lean_dec(v___y_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0(lean_object* v_e_522_, lean_object* v_fvarId_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(v_e_522_, v_fvarId_523_, v___y_525_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___boxed(lean_object* v_e_530_, lean_object* v_fvarId_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0(v_e_530_, v_fvarId_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
return v_res_537_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1(lean_object* v_a_538_, lean_object* v_as_539_, size_t v_i_540_, size_t v_stop_541_){
_start:
{
uint8_t v___x_542_; 
v___x_542_ = lean_usize_dec_eq(v_i_540_, v_stop_541_);
if (v___x_542_ == 0)
{
lean_object* v___x_543_; uint8_t v___x_544_; 
v___x_543_ = lean_array_uget_borrowed(v_as_539_, v_i_540_);
v___x_544_ = lean_expr_eqv(v_a_538_, v___x_543_);
if (v___x_544_ == 0)
{
size_t v___x_545_; size_t v___x_546_; 
v___x_545_ = ((size_t)1ULL);
v___x_546_ = lean_usize_add(v_i_540_, v___x_545_);
v_i_540_ = v___x_546_;
goto _start;
}
else
{
return v___x_544_;
}
}
else
{
uint8_t v___x_548_; 
v___x_548_ = 0;
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1___boxed(lean_object* v_a_549_, lean_object* v_as_550_, lean_object* v_i_551_, lean_object* v_stop_552_){
_start:
{
size_t v_i_boxed_553_; size_t v_stop_boxed_554_; uint8_t v_res_555_; lean_object* v_r_556_; 
v_i_boxed_553_ = lean_unbox_usize(v_i_551_);
lean_dec(v_i_551_);
v_stop_boxed_554_ = lean_unbox_usize(v_stop_552_);
lean_dec(v_stop_552_);
v_res_555_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1(v_a_549_, v_as_550_, v_i_boxed_553_, v_stop_boxed_554_);
lean_dec_ref(v_as_550_);
lean_dec_ref(v_a_549_);
v_r_556_ = lean_box(v_res_555_);
return v_r_556_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1(lean_object* v_as_557_, lean_object* v_a_558_){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_559_ = lean_unsigned_to_nat(0u);
v___x_560_ = lean_array_get_size(v_as_557_);
v___x_561_ = lean_nat_dec_lt(v___x_559_, v___x_560_);
if (v___x_561_ == 0)
{
return v___x_561_;
}
else
{
size_t v___x_562_; size_t v___x_563_; uint8_t v___x_564_; 
v___x_562_ = ((size_t)0ULL);
v___x_563_ = lean_usize_of_nat(v___x_560_);
v___x_564_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1_spec__1(v_a_558_, v_as_557_, v___x_562_, v___x_563_);
return v___x_564_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1___boxed(lean_object* v_as_565_, lean_object* v_a_566_){
_start:
{
uint8_t v_res_567_; lean_object* v_r_568_; 
v_res_567_ = l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1(v_as_565_, v_a_566_);
lean_dec_ref(v_a_566_);
lean_dec_ref(v_as_565_);
v_r_568_ = lean_box(v_res_567_);
return v_r_568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(lean_object* v_a_572_, lean_object* v_indices_573_, lean_object* v_a_574_, lean_object* v_as_575_, size_t v_sz_576_, size_t v_i_577_, lean_object* v_b_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_a_585_; uint8_t v___x_589_; 
v___x_589_ = lean_usize_dec_lt(v_i_577_, v_sz_576_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; 
lean_dec_ref(v_a_574_);
lean_dec_ref(v_a_572_);
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v_b_578_);
return v___x_590_;
}
else
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v_a_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
lean_dec_ref(v_b_578_);
v___x_591_ = lean_box(0);
v___x_592_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_593_ = lean_array_uget_borrowed(v_as_575_, v_i_577_);
v___x_594_ = l_Lean_Expr_fvarId_x21(v_a_593_);
lean_inc_ref(v_a_572_);
v___x_595_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(v_a_572_, v___x_594_, v___y_580_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_609_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_609_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_609_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_609_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
uint8_t v___x_600_; 
v___x_600_ = l_Array_contains___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__1(v_indices_573_, v_a_593_);
if (v___x_600_ == 0)
{
uint8_t v___x_601_; 
v___x_601_ = lean_unbox(v_a_596_);
lean_dec(v_a_596_);
if (v___x_601_ == 0)
{
lean_del_object(v___x_598_);
v_a_585_ = v___x_592_;
goto v___jp_584_;
}
else
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_607_; 
lean_dec_ref(v_a_572_);
lean_inc(v_a_593_);
v___x_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_602_, 0, v_a_574_);
lean_ctor_set(v___x_602_, 1, v_a_593_);
v___x_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
lean_ctor_set(v___x_605_, 1, v___x_591_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_605_);
v___x_607_ = v___x_598_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
else
{
lean_del_object(v___x_598_);
lean_dec(v_a_596_);
v_a_585_ = v___x_592_;
goto v___jp_584_;
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref(v_a_574_);
lean_dec_ref(v_a_572_);
v_a_610_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_595_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_595_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
v___jp_584_:
{
size_t v___x_586_; size_t v___x_587_; 
v___x_586_ = ((size_t)1ULL);
v___x_587_ = lean_usize_add(v_i_577_, v___x_586_);
lean_inc_ref(v_a_585_);
v_i_577_ = v___x_587_;
v_b_578_ = v_a_585_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___boxed(lean_object* v_a_618_, lean_object* v_indices_619_, lean_object* v_a_620_, lean_object* v_as_621_, lean_object* v_sz_622_, lean_object* v_i_623_, lean_object* v_b_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_){
_start:
{
size_t v_sz_boxed_630_; size_t v_i_boxed_631_; lean_object* v_res_632_; 
v_sz_boxed_630_ = lean_unbox_usize(v_sz_622_);
lean_dec(v_sz_622_);
v_i_boxed_631_ = lean_unbox_usize(v_i_623_);
lean_dec(v_i_623_);
v_res_632_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(v_a_618_, v_indices_619_, v_a_620_, v_as_621_, v_sz_boxed_630_, v_i_boxed_631_, v_b_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec_ref(v_as_621_);
lean_dec_ref(v_indices_619_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4(lean_object* v_ys_633_, lean_object* v_indices_634_, lean_object* v_as_635_, size_t v_sz_636_, size_t v_i_637_, lean_object* v_b_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
uint8_t v___x_644_; 
v___x_644_ = lean_usize_dec_lt(v_i_637_, v_sz_636_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; 
v___x_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_645_, 0, v_b_638_);
return v___x_645_;
}
else
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v_a_648_; lean_object* v___x_649_; 
lean_dec_ref(v_b_638_);
v___x_646_ = lean_box(0);
v___x_647_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_648_ = lean_array_uget_borrowed(v_as_635_, v_i_637_);
lean_inc(v___y_642_);
lean_inc_ref(v___y_641_);
lean_inc(v___y_640_);
lean_inc_ref(v___y_639_);
lean_inc(v_a_648_);
v___x_649_ = lean_infer_type(v_a_648_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; size_t v_sz_651_; size_t v___x_652_; lean_object* v___x_653_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_a_650_);
lean_dec_ref_known(v___x_649_, 1);
v_sz_651_ = lean_array_size(v_ys_633_);
v___x_652_ = ((size_t)0ULL);
lean_inc(v_a_648_);
v___x_653_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(v_a_650_, v_indices_634_, v_a_648_, v_ys_633_, v_sz_651_, v___x_652_, v___x_647_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_673_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_673_ == 0)
{
v___x_656_ = v___x_653_;
v_isShared_657_ = v_isSharedCheck_673_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_653_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_673_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v_fst_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_671_; 
v_fst_658_ = lean_ctor_get(v_a_654_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v_a_654_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; 
v_unused_672_ = lean_ctor_get(v_a_654_, 1);
lean_dec(v_unused_672_);
v___x_660_ = v_a_654_;
v_isShared_661_ = v_isSharedCheck_671_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_fst_658_);
lean_dec(v_a_654_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_671_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
if (lean_obj_tag(v_fst_658_) == 0)
{
size_t v___x_662_; size_t v___x_663_; 
lean_del_object(v___x_660_);
lean_del_object(v___x_656_);
v___x_662_ = ((size_t)1ULL);
v___x_663_ = lean_usize_add(v_i_637_, v___x_662_);
v_i_637_ = v___x_663_;
v_b_638_ = v___x_647_;
goto _start;
}
else
{
lean_object* v___x_666_; 
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_646_);
v___x_666_ = v___x_660_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_fst_658_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v___x_646_);
v___x_666_ = v_reuseFailAlloc_670_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
lean_object* v___x_668_; 
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_666_);
v___x_668_ = v___x_656_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
}
else
{
return v___x_653_;
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
v_a_674_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_649_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_649_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4___boxed(lean_object* v_ys_682_, lean_object* v_indices_683_, lean_object* v_as_684_, lean_object* v_sz_685_, lean_object* v_i_686_, lean_object* v_b_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
size_t v_sz_boxed_693_; size_t v_i_boxed_694_; lean_object* v_res_695_; 
v_sz_boxed_693_ = lean_unbox_usize(v_sz_685_);
lean_dec(v_sz_685_);
v_i_boxed_694_ = lean_unbox_usize(v_i_686_);
lean_dec(v_i_686_);
v_res_695_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4(v_ys_682_, v_indices_683_, v_as_684_, v_sz_boxed_693_, v_i_boxed_694_, v_b_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec_ref(v_as_684_);
lean_dec_ref(v_indices_683_);
lean_dec_ref(v_ys_682_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3(lean_object* v_indices_696_, lean_object* v_ys_697_, lean_object* v_as_698_, size_t v_sz_699_, size_t v_i_700_, lean_object* v_b_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
uint8_t v___x_707_; 
v___x_707_ = lean_usize_dec_lt(v_i_700_, v_sz_699_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; 
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v_b_701_);
return v___x_708_;
}
else
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v_a_711_; lean_object* v___x_712_; 
lean_dec_ref(v_b_701_);
v___x_709_ = lean_box(0);
v___x_710_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_711_ = lean_array_uget_borrowed(v_as_698_, v_i_700_);
lean_inc(v___y_705_);
lean_inc_ref(v___y_704_);
lean_inc(v___y_703_);
lean_inc_ref(v___y_702_);
lean_inc(v_a_711_);
v___x_712_ = lean_infer_type(v_a_711_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; size_t v_sz_714_; size_t v___x_715_; lean_object* v___x_716_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
v_sz_714_ = lean_array_size(v_ys_697_);
v___x_715_ = ((size_t)0ULL);
lean_inc(v_a_711_);
v___x_716_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2(v_a_713_, v_indices_696_, v_a_711_, v_ys_697_, v_sz_714_, v___x_715_, v___x_710_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
if (lean_obj_tag(v___x_716_) == 0)
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_736_; 
v_a_717_ = lean_ctor_get(v___x_716_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_736_ == 0)
{
v___x_719_ = v___x_716_;
v_isShared_720_ = v_isSharedCheck_736_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_716_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_736_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_fst_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_734_; 
v_fst_721_ = lean_ctor_get(v_a_717_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v_a_717_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; 
v_unused_735_ = lean_ctor_get(v_a_717_, 1);
lean_dec(v_unused_735_);
v___x_723_ = v_a_717_;
v_isShared_724_ = v_isSharedCheck_734_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_fst_721_);
lean_dec(v_a_717_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_734_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
if (lean_obj_tag(v_fst_721_) == 0)
{
size_t v___x_725_; size_t v___x_726_; lean_object* v___x_727_; 
lean_del_object(v___x_723_);
lean_del_object(v___x_719_);
v___x_725_ = ((size_t)1ULL);
v___x_726_ = lean_usize_add(v_i_700_, v___x_725_);
v___x_727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3_spec__4(v_ys_697_, v_indices_696_, v_as_698_, v_sz_699_, v___x_726_, v___x_710_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
return v___x_727_;
}
else
{
lean_object* v___x_729_; 
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 1, v___x_709_);
v___x_729_ = v___x_723_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_fst_721_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v___x_709_);
v___x_729_ = v_reuseFailAlloc_733_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
lean_object* v___x_731_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 0, v___x_729_);
v___x_731_ = v___x_719_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_729_);
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
else
{
return v___x_716_;
}
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
v_a_737_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_712_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_712_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3___boxed(lean_object* v_indices_745_, lean_object* v_ys_746_, lean_object* v_as_747_, lean_object* v_sz_748_, lean_object* v_i_749_, lean_object* v_b_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
size_t v_sz_boxed_756_; size_t v_i_boxed_757_; lean_object* v_res_758_; 
v_sz_boxed_756_ = lean_unbox_usize(v_sz_748_);
lean_dec(v_sz_748_);
v_i_boxed_757_ = lean_unbox_usize(v_i_749_);
lean_dec(v_i_749_);
v_res_758_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3(v_indices_745_, v_ys_746_, v_as_747_, v_sz_boxed_756_, v_i_boxed_757_, v_b_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec_ref(v_as_747_);
lean_dec_ref(v_ys_746_);
lean_dec_ref(v_indices_745_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(lean_object* v_ys_759_, lean_object* v_indices_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; size_t v_sz_768_; size_t v___x_769_; lean_object* v___x_770_; 
v___x_766_ = lean_box(0);
v___x_767_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_sz_768_ = lean_array_size(v_indices_760_);
v___x_769_ = ((size_t)0ULL);
v___x_770_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__3(v_indices_760_, v_ys_759_, v_indices_760_, v_sz_768_, v___x_769_, v___x_767_, v_a_761_, v_a_762_, v_a_763_, v_a_764_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_783_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_783_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_783_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_783_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v_fst_775_; 
v_fst_775_ = lean_ctor_get(v_a_771_, 0);
lean_inc(v_fst_775_);
lean_dec(v_a_771_);
if (lean_obj_tag(v_fst_775_) == 0)
{
lean_object* v___x_777_; 
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v___x_766_);
v___x_777_ = v___x_773_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_766_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
else
{
lean_object* v_val_779_; lean_object* v___x_781_; 
v_val_779_ = lean_ctor_get(v_fst_775_, 0);
lean_inc(v_val_779_);
lean_dec_ref_known(v_fst_775_, 1);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v_val_779_);
v___x_781_ = v___x_773_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_val_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
v_a_784_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_770_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_770_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f___boxed(lean_object* v_ys_792_, lean_object* v_indices_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(v_ys_792_, v_indices_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_);
lean_dec(v_a_797_);
lean_dec_ref(v_a_796_);
lean_dec(v_a_795_);
lean_dec_ref(v_a_794_);
lean_dec_ref(v_indices_793_);
lean_dec_ref(v_ys_792_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(lean_object* v_a_800_, lean_object* v_as_801_, size_t v_sz_802_, size_t v_i_803_, lean_object* v_b_804_, lean_object* v___y_805_){
_start:
{
uint8_t v___x_807_; 
v___x_807_ = lean_usize_dec_lt(v_i_803_, v_sz_802_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; 
lean_dec_ref(v_a_800_);
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v_b_804_);
return v___x_808_;
}
else
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v_a_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
lean_dec_ref(v_b_804_);
v___x_809_ = lean_box(0);
v___x_810_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_811_ = lean_array_uget_borrowed(v_as_801_, v_i_803_);
v___x_812_ = l_Lean_Expr_fvarId_x21(v_a_811_);
lean_inc_ref(v_a_800_);
v___x_813_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__0___redArg(v_a_800_, v___x_812_, v___y_805_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_829_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_829_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_829_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_829_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
uint8_t v___x_818_; 
v___x_818_ = lean_unbox(v_a_814_);
lean_dec(v_a_814_);
if (v___x_818_ == 0)
{
size_t v___x_819_; size_t v___x_820_; 
lean_del_object(v___x_816_);
v___x_819_ = ((size_t)1ULL);
v___x_820_ = lean_usize_add(v_i_803_, v___x_819_);
v_i_803_ = v___x_820_;
v_b_804_ = v___x_810_;
goto _start;
}
else
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
lean_inc(v_a_811_);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v_a_800_);
lean_ctor_set(v___x_822_, 1, v_a_811_);
v___x_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
v___x_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
lean_ctor_set(v___x_825_, 1, v___x_809_);
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 0, v___x_825_);
v___x_827_ = v___x_816_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v___x_825_);
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
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_dec_ref(v_a_800_);
v_a_830_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_813_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_813_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg___boxed(lean_object* v_a_838_, lean_object* v_as_839_, lean_object* v_sz_840_, lean_object* v_i_841_, lean_object* v_b_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
size_t v_sz_boxed_845_; size_t v_i_boxed_846_; lean_object* v_res_847_; 
v_sz_boxed_845_ = lean_unbox_usize(v_sz_840_);
lean_dec(v_sz_840_);
v_i_boxed_846_ = lean_unbox_usize(v_i_841_);
lean_dec(v_i_841_);
v_res_847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(v_a_838_, v_as_839_, v_sz_boxed_845_, v_i_boxed_846_, v_b_842_, v___y_843_);
lean_dec(v___y_843_);
lean_dec_ref(v_as_839_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1(lean_object* v_ys_848_, lean_object* v_as_849_, size_t v_sz_850_, size_t v_i_851_, lean_object* v_b_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
uint8_t v___x_858_; 
v___x_858_ = lean_usize_dec_lt(v_i_851_, v_sz_850_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; 
v___x_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_859_, 0, v_b_852_);
return v___x_859_;
}
else
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v_a_862_; size_t v_sz_863_; size_t v___x_864_; lean_object* v___x_865_; 
lean_dec_ref(v_b_852_);
v___x_860_ = lean_box(0);
v___x_861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_a_862_ = lean_array_uget_borrowed(v_as_849_, v_i_851_);
v_sz_863_ = lean_array_size(v_ys_848_);
v___x_864_ = ((size_t)0ULL);
lean_inc(v_a_862_);
v___x_865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(v_a_862_, v_ys_848_, v_sz_863_, v___x_864_, v___x_861_, v___y_854_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_885_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_885_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_885_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_885_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v_fst_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_883_; 
v_fst_870_ = lean_ctor_get(v_a_866_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v_a_866_);
if (v_isSharedCheck_883_ == 0)
{
lean_object* v_unused_884_; 
v_unused_884_ = lean_ctor_get(v_a_866_, 1);
lean_dec(v_unused_884_);
v___x_872_ = v_a_866_;
v_isShared_873_ = v_isSharedCheck_883_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_fst_870_);
lean_dec(v_a_866_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_883_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
if (lean_obj_tag(v_fst_870_) == 0)
{
size_t v___x_874_; size_t v___x_875_; 
lean_del_object(v___x_872_);
lean_del_object(v___x_868_);
v___x_874_ = ((size_t)1ULL);
v___x_875_ = lean_usize_add(v_i_851_, v___x_874_);
v_i_851_ = v___x_875_;
v_b_852_ = v___x_861_;
goto _start;
}
else
{
lean_object* v___x_878_; 
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 1, v___x_860_);
v___x_878_ = v___x_872_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_fst_870_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v___x_860_);
v___x_878_ = v_reuseFailAlloc_882_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_880_; 
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_878_);
v___x_880_ = v___x_868_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
}
else
{
return v___x_865_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1___boxed(lean_object* v_ys_886_, lean_object* v_as_887_, lean_object* v_sz_888_, lean_object* v_i_889_, lean_object* v_b_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
size_t v_sz_boxed_896_; size_t v_i_boxed_897_; lean_object* v_res_898_; 
v_sz_boxed_896_ = lean_unbox_usize(v_sz_888_);
lean_dec(v_sz_888_);
v_i_boxed_897_ = lean_unbox_usize(v_i_889_);
lean_dec(v_i_889_);
v_res_898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1(v_ys_886_, v_as_887_, v_sz_boxed_896_, v_i_boxed_897_, v_b_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec_ref(v_as_887_);
lean_dec_ref(v_ys_886_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f(lean_object* v_ys_899_, lean_object* v_indParams_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; size_t v_sz_908_; size_t v___x_909_; lean_object* v___x_910_; 
v___x_906_ = lean_box(0);
v___x_907_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f_spec__2___closed__0));
v_sz_908_ = lean_array_size(v_indParams_900_);
v___x_909_ = ((size_t)0ULL);
v___x_910_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__1(v_ys_899_, v_indParams_900_, v_sz_908_, v___x_909_, v___x_907_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_923_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_923_ == 0)
{
v___x_913_ = v___x_910_;
v_isShared_914_ = v_isSharedCheck_923_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_910_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_923_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v_fst_915_; 
v_fst_915_ = lean_ctor_get(v_a_911_, 0);
lean_inc(v_fst_915_);
lean_dec(v_a_911_);
if (lean_obj_tag(v_fst_915_) == 0)
{
lean_object* v___x_917_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 0, v___x_906_);
v___x_917_ = v___x_913_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_906_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
else
{
lean_object* v_val_919_; lean_object* v___x_921_; 
v_val_919_ = lean_ctor_get(v_fst_915_, 0);
lean_inc(v_val_919_);
lean_dec_ref_known(v_fst_915_, 1);
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 0, v_val_919_);
v___x_921_ = v___x_913_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_val_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
v_a_924_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_910_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_910_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f___boxed(lean_object* v_ys_932_, lean_object* v_indParams_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f(v_ys_932_, v_indParams_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_);
lean_dec(v_a_937_);
lean_dec_ref(v_a_936_);
lean_dec(v_a_935_);
lean_dec_ref(v_a_934_);
lean_dec_ref(v_indParams_933_);
lean_dec_ref(v_ys_932_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0(lean_object* v_a_940_, lean_object* v_as_941_, size_t v_sz_942_, size_t v_i_943_, lean_object* v_b_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___redArg(v_a_940_, v_as_941_, v_sz_942_, v_i_943_, v_b_944_, v___y_946_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0___boxed(lean_object* v_a_951_, lean_object* v_as_952_, lean_object* v_sz_953_, lean_object* v_i_954_, lean_object* v_b_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
size_t v_sz_boxed_961_; size_t v_i_boxed_962_; lean_object* v_res_963_; 
v_sz_boxed_961_ = lean_unbox_usize(v_sz_953_);
lean_dec(v_sz_953_);
v_i_boxed_962_ = lean_unbox_usize(v_i_954_);
lean_dec(v_i_954_);
v_res_963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f_spec__0(v_a_951_, v_as_952_, v_sz_boxed_961_, v_i_boxed_962_, v_b_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec_ref(v_as_952_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__1(lean_object* v_msg_964_){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = lean_unsigned_to_nat(0u);
v___x_966_ = lean_panic_fn_borrowed(v___x_965_, v_msg_964_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(lean_object* v_msg_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___f_974_; lean_object* v___x_4719__overap_975_; lean_object* v___x_976_; 
v___f_974_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___closed__0));
v___x_4719__overap_975_ = lean_panic_fn_borrowed(v___f_974_, v_msg_968_);
lean_inc(v___y_972_);
lean_inc_ref(v___y_971_);
lean_inc(v___y_970_);
lean_inc_ref(v___y_969_);
v___x_976_ = lean_apply_5(v___x_4719__overap_975_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, lean_box(0));
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2___boxed(lean_object* v_msg_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(v_msg_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
return v_res_983_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3(void){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_987_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2));
v___x_988_ = lean_unsigned_to_nat(107u);
v___x_989_ = lean_unsigned_to_nat(97u);
v___x_990_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1));
v___x_991_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0));
v___x_992_ = l_mkPanicMessageWithDecl(v___x_991_, v___x_990_, v___x_989_, v___x_988_, v___x_987_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5(lean_object* v_xs_993_, size_t v_sz_994_, size_t v_i_995_, lean_object* v_bs_996_){
_start:
{
uint8_t v___x_997_; 
v___x_997_ = lean_usize_dec_lt(v_i_995_, v_sz_994_);
if (v___x_997_ == 0)
{
return v_bs_996_;
}
else
{
lean_object* v_v_998_; lean_object* v___x_999_; lean_object* v_bs_x27_1000_; lean_object* v___y_1002_; lean_object* v___x_1007_; 
v_v_998_ = lean_array_uget(v_bs_996_, v_i_995_);
v___x_999_ = lean_unsigned_to_nat(0u);
v_bs_x27_1000_ = lean_array_uset(v_bs_996_, v_i_995_, v___x_999_);
v___x_1007_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(v_xs_993_, v_v_998_);
lean_dec(v_v_998_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__3);
v___x_1009_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__1(v___x_1008_);
v___y_1002_ = v___x_1009_;
goto v___jp_1001_;
}
else
{
lean_object* v_val_1010_; 
v_val_1010_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_val_1010_);
lean_dec_ref_known(v___x_1007_, 1);
v___y_1002_ = v_val_1010_;
goto v___jp_1001_;
}
v___jp_1001_:
{
size_t v___x_1003_; size_t v___x_1004_; lean_object* v___x_1005_; 
v___x_1003_ = ((size_t)1ULL);
v___x_1004_ = lean_usize_add(v_i_995_, v___x_1003_);
v___x_1005_ = lean_array_uset(v_bs_x27_1000_, v_i_995_, v___y_1002_);
v_i_995_ = v___x_1004_;
v_bs_996_ = v___x_1005_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___boxed(lean_object* v_xs_1011_, lean_object* v_sz_1012_, lean_object* v_i_1013_, lean_object* v_bs_1014_){
_start:
{
size_t v_sz_boxed_1015_; size_t v_i_boxed_1016_; lean_object* v_res_1017_; 
v_sz_boxed_1015_ = lean_unbox_usize(v_sz_1012_);
lean_dec(v_sz_1012_);
v_i_boxed_1016_ = lean_unbox_usize(v_i_1013_);
lean_dec(v_i_1013_);
v_res_1017_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5(v_xs_1011_, v_sz_boxed_1015_, v_i_boxed_1016_, v_bs_1014_);
lean_dec_ref(v_xs_1011_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(lean_object* v_msg_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v_ref_1024_; lean_object* v___x_1025_; lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1034_; 
v_ref_1024_ = lean_ctor_get(v___y_1021_, 2);
v___x_1025_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v_msg_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_);
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1028_ = v___x_1025_;
v_isShared_1029_ = v_isSharedCheck_1034_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1025_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1034_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1030_; lean_object* v___x_1032_; 
lean_inc(v_ref_1024_);
v___x_1030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_ref_1024_);
lean_ctor_set(v___x_1030_, 1, v_a_1026_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set_tag(v___x_1028_, 1);
lean_ctor_set(v___x_1028_, 0, v___x_1030_);
v___x_1032_ = v___x_1028_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1030_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg___boxed(lean_object* v_msg_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v_msg_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7(lean_object* v_xs_1042_, lean_object* v_v_1043_, lean_object* v_i_1044_){
_start:
{
lean_object* v___x_1045_; uint8_t v___x_1046_; 
v___x_1045_ = lean_array_get_size(v_xs_1042_);
v___x_1046_ = lean_nat_dec_lt(v_i_1044_, v___x_1045_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; 
lean_dec(v_i_1044_);
v___x_1047_ = lean_box(0);
return v___x_1047_;
}
else
{
lean_object* v___x_1048_; uint8_t v___x_1049_; 
v___x_1048_ = lean_array_fget_borrowed(v_xs_1042_, v_i_1044_);
v___x_1049_ = lean_name_eq(v___x_1048_, v_v_1043_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = lean_unsigned_to_nat(1u);
v___x_1051_ = lean_nat_add(v_i_1044_, v___x_1050_);
lean_dec(v_i_1044_);
v_i_1044_ = v___x_1051_;
goto _start;
}
else
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1053_, 0, v_i_1044_);
return v___x_1053_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7___boxed(lean_object* v_xs_1054_, lean_object* v_v_1055_, lean_object* v_i_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7(v_xs_1054_, v_v_1055_, v_i_1056_);
lean_dec(v_v_1055_);
lean_dec_ref(v_xs_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5(lean_object* v_xs_1058_, lean_object* v_v_1059_){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5_spec__7(v_xs_1058_, v_v_1059_, v___x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5___boxed(lean_object* v_xs_1062_, lean_object* v_v_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5(v_xs_1062_, v_v_1063_);
lean_dec(v_v_1063_);
lean_dec_ref(v_xs_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4(lean_object* v_xs_1065_, lean_object* v_v_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4_spec__5(v_xs_1065_, v_v_1066_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_box(0);
return v___x_1068_;
}
else
{
lean_object* v_val_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_val_1069_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1067_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_val_1069_);
lean_dec(v___x_1067_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_val_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4___boxed(lean_object* v_xs_1077_, lean_object* v_v_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4(v_xs_1077_, v_v_1078_);
lean_dec(v_v_1078_);
lean_dec_ref(v_xs_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6(lean_object* v_i_1080_, lean_object* v___x_1081_, lean_object* v_as_1082_, size_t v_i_1083_, size_t v_stop_1084_){
_start:
{
uint8_t v___x_1089_; 
v___x_1089_ = lean_usize_dec_eq(v_i_1083_, v_stop_1084_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; uint8_t v___x_1091_; 
v___x_1090_ = lean_array_uget_borrowed(v_as_1082_, v_i_1083_);
v___x_1091_ = l_Lean_Expr_isFVar(v___x_1090_);
if (v___x_1091_ == 0)
{
uint8_t v___x_1092_; 
v___x_1092_ = lean_nat_dec_lt(v_i_1080_, v___x_1081_);
if (v___x_1092_ == 0)
{
goto v___jp_1085_;
}
else
{
return v___x_1092_;
}
}
else
{
goto v___jp_1085_;
}
}
else
{
uint8_t v___x_1093_; 
v___x_1093_ = 0;
return v___x_1093_;
}
v___jp_1085_:
{
size_t v___x_1086_; size_t v___x_1087_; 
v___x_1086_ = ((size_t)1ULL);
v___x_1087_ = lean_usize_add(v_i_1083_, v___x_1086_);
v_i_1083_ = v___x_1087_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6___boxed(lean_object* v_i_1094_, lean_object* v___x_1095_, lean_object* v_as_1096_, lean_object* v_i_1097_, lean_object* v_stop_1098_){
_start:
{
size_t v_i_boxed_1099_; size_t v_stop_boxed_1100_; uint8_t v_res_1101_; lean_object* v_r_1102_; 
v_i_boxed_1099_ = lean_unbox_usize(v_i_1097_);
lean_dec(v_i_1097_);
v_stop_boxed_1100_ = lean_unbox_usize(v_stop_1098_);
lean_dec(v_stop_1098_);
v_res_1101_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6(v_i_1094_, v___x_1095_, v_as_1096_, v_i_boxed_1099_, v_stop_boxed_1100_);
lean_dec_ref(v_as_1096_);
lean_dec(v___x_1095_);
lean_dec(v_i_1094_);
v_r_1102_ = lean_box(v_res_1101_);
return v_r_1102_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(lean_object* v_as_1103_, lean_object* v_a_1104_, lean_object* v_x_1105_){
_start:
{
lean_object* v_zero_1106_; uint8_t v_isZero_1107_; 
v_zero_1106_ = lean_unsigned_to_nat(0u);
v_isZero_1107_ = lean_nat_dec_eq(v_x_1105_, v_zero_1106_);
if (v_isZero_1107_ == 1)
{
lean_dec(v_x_1105_);
return v_isZero_1107_;
}
else
{
lean_object* v_one_1108_; lean_object* v_n_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v_one_1108_ = lean_unsigned_to_nat(1u);
v_n_1109_ = lean_nat_sub(v_x_1105_, v_one_1108_);
lean_dec(v_x_1105_);
v___x_1110_ = lean_array_fget_borrowed(v_as_1103_, v_n_1109_);
v___x_1111_ = lean_expr_eqv(v_a_1104_, v___x_1110_);
if (v___x_1111_ == 0)
{
v_x_1105_ = v_n_1109_;
goto _start;
}
else
{
lean_dec(v_n_1109_);
return v_isZero_1107_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_as_1113_, lean_object* v_a_1114_, lean_object* v_x_1115_){
_start:
{
uint8_t v_res_1116_; lean_object* v_r_1117_; 
v_res_1116_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(v_as_1113_, v_a_1114_, v_x_1115_);
lean_dec_ref(v_a_1114_);
lean_dec_ref(v_as_1113_);
v_r_1117_ = lean_box(v_res_1116_);
return v_r_1117_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3(lean_object* v_as_1118_, lean_object* v_i_1119_){
_start:
{
lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1120_ = lean_array_get_size(v_as_1118_);
v___x_1121_ = lean_nat_dec_lt(v_i_1119_, v___x_1120_);
if (v___x_1121_ == 0)
{
uint8_t v___x_1122_; 
lean_dec(v_i_1119_);
v___x_1122_ = 1;
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; uint8_t v___x_1124_; 
v___x_1123_ = lean_array_fget_borrowed(v_as_1118_, v_i_1119_);
lean_inc(v_i_1119_);
v___x_1124_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(v_as_1118_, v___x_1123_, v_i_1119_);
if (v___x_1124_ == 0)
{
lean_dec(v_i_1119_);
return v___x_1124_;
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_unsigned_to_nat(1u);
v___x_1126_ = lean_nat_add(v_i_1119_, v___x_1125_);
lean_dec(v_i_1119_);
v_i_1119_ = v___x_1126_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3___boxed(lean_object* v_as_1128_, lean_object* v_i_1129_){
_start:
{
uint8_t v_res_1130_; lean_object* v_r_1131_; 
v_res_1130_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3(v_as_1128_, v_i_1129_);
lean_dec_ref(v_as_1128_);
v_r_1131_ = lean_box(v_res_1130_);
return v_r_1131_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(lean_object* v_as_1132_){
_start:
{
lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1133_ = lean_unsigned_to_nat(0u);
v___x_1134_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3(v_as_1132_, v___x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3___boxed(lean_object* v_as_1135_){
_start:
{
uint8_t v_res_1136_; lean_object* v_r_1137_; 
v_res_1136_ = l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(v_as_1135_);
lean_dec_ref(v_as_1135_);
v_r_1137_ = lean_box(v_res_1136_);
return v_r_1137_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__1(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__0));
v___x_1140_ = l_Lean_stringToMessageData(v___x_1139_);
return v___x_1140_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__3(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__2));
v___x_1143_ = l_Lean_stringToMessageData(v___x_1142_);
return v___x_1143_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__5(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__4));
v___x_1146_ = l_Lean_stringToMessageData(v___x_1145_);
return v___x_1146_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__7(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1148_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__6));
v___x_1149_ = lean_unsigned_to_nat(59u);
v___x_1150_ = lean_unsigned_to_nat(96u);
v___x_1151_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1));
v___x_1152_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0));
v___x_1153_ = l_mkPanicMessageWithDecl(v___x_1152_, v___x_1151_, v___x_1150_, v___x_1149_, v___x_1148_);
return v___x_1153_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__9(void){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__8));
v___x_1156_ = l_Lean_stringToMessageData(v___x_1155_);
return v___x_1156_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__11(void){
_start:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__10));
v___x_1159_ = l_Lean_stringToMessageData(v___x_1158_);
return v___x_1159_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__13(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__12));
v___x_1162_ = l_Lean_stringToMessageData(v___x_1161_);
return v___x_1162_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__15(void){
_start:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__14));
v___x_1165_ = l_Lean_stringToMessageData(v___x_1164_);
return v___x_1165_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__17(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__16));
v___x_1168_ = l_Lean_stringToMessageData(v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__19(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__18));
v___x_1171_ = l_Lean_stringToMessageData(v___x_1170_);
return v___x_1171_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__21(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__20));
v___x_1174_ = l_Lean_stringToMessageData(v___x_1173_);
return v___x_1174_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__23(void){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__22));
v___x_1177_ = l_Lean_stringToMessageData(v___x_1176_);
return v___x_1177_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__24(void){
_start:
{
lean_object* v___x_1178_; lean_object* v_dummy_1179_; 
v___x_1178_ = lean_box(0);
v_dummy_1179_ = l_Lean_Expr_sort___override(v___x_1178_);
return v_dummy_1179_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__26(void){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__25));
v___x_1182_ = l_Lean_stringToMessageData(v___x_1181_);
return v___x_1182_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__28(void){
_start:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1184_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__27));
v___x_1185_ = lean_unsigned_to_nat(2u);
v___x_1186_ = lean_unsigned_to_nat(68u);
v___x_1187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__1));
v___x_1188_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0));
v___x_1189_ = l_mkPanicMessageWithDecl(v___x_1188_, v___x_1187_, v___x_1186_, v___x_1185_, v___x_1184_);
return v___x_1189_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__30(void){
_start:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__29));
v___x_1192_ = l_Lean_stringToMessageData(v___x_1191_);
return v___x_1192_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__32(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__31));
v___x_1195_ = l_Lean_stringToMessageData(v___x_1194_);
return v___x_1195_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__34(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__33));
v___x_1198_ = l_Lean_stringToMessageData(v___x_1197_);
return v___x_1198_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfo___closed__36(void){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfo___closed__35));
v___x_1201_ = l_Lean_stringToMessageData(v___x_1200_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfo(lean_object* v_fnName_1202_, lean_object* v_fixedParamPerm_1203_, lean_object* v_xs_1204_, lean_object* v_i_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_){
_start:
{
lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v_lower_1352_; lean_object* v_upper_1353_; lean_object* v___y_1371_; lean_object* v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; uint8_t v___x_1438_; 
v___x_1337_ = lean_array_get_size(v_fixedParamPerm_1203_);
v___x_1338_ = lean_array_get_size(v_xs_1204_);
v___x_1438_ = lean_nat_dec_eq(v___x_1337_, v___x_1338_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v___x_1439_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__28, &l_Lean_Elab_Structural_getRecArgInfo___closed__28_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__28);
v___x_1440_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(v___x_1439_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_);
return v___x_1440_;
}
else
{
uint8_t v___x_1441_; 
v___x_1441_ = lean_nat_dec_lt(v_i_1205_, v___x_1338_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v___x_1442_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__30, &l_Lean_Elab_Structural_getRecArgInfo___closed__30_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__30);
v___x_1443_ = lean_unsigned_to_nat(1u);
v___x_1444_ = lean_nat_add(v_i_1205_, v___x_1443_);
lean_dec(v_i_1205_);
v___x_1445_ = l_Nat_reprFast(v___x_1444_);
v___x_1446_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
v___x_1447_ = l_Lean_MessageData_ofFormat(v___x_1446_);
v___x_1448_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1442_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
v___x_1449_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__32, &l_Lean_Elab_Structural_getRecArgInfo___closed__32_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__32);
v___x_1450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1448_);
lean_ctor_set(v___x_1450_, 1, v___x_1449_);
v___x_1451_ = l_Nat_reprFast(v___x_1338_);
v___x_1452_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
v___x_1453_ = l_Lean_MessageData_ofFormat(v___x_1452_);
v___x_1454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1450_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
v___x_1455_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__34, &l_Lean_Elab_Structural_getRecArgInfo___closed__34_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__34);
v___x_1456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1454_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
v___x_1457_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1456_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_);
return v___x_1457_;
}
else
{
uint8_t v___x_1458_; 
v___x_1458_ = l_Lean_Elab_FixedParamPerm_isFixed(v_fixedParamPerm_1203_, v_i_1205_);
if (v___x_1458_ == 0)
{
v___y_1411_ = v_a_1206_;
v___y_1412_ = v_a_1207_;
v___y_1413_ = v_a_1208_;
v___y_1414_ = v_a_1209_;
goto v___jp_1410_;
}
else
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v___x_1459_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__36, &l_Lean_Elab_Structural_getRecArgInfo___closed__36_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__36);
v___x_1460_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1459_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_);
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
}
v___jp_1211_:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__1, &l_Lean_Elab_Structural_getRecArgInfo___closed__1_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__1);
v___x_1217_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1216_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
return v___x_1217_;
}
v___jp_1218_:
{
uint8_t v___x_1230_; 
v___x_1230_ = l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(v___y_1229_);
if (v___x_1230_ == 0)
{
lean_object* v_name_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1219_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v_name_1231_ = lean_ctor_get(v___y_1221_, 0);
lean_inc(v_name_1231_);
lean_dec_ref(v___y_1221_);
v___x_1232_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__3, &l_Lean_Elab_Structural_getRecArgInfo___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__3);
v___x_1233_ = l_Lean_MessageData_ofName(v_name_1231_);
v___x_1234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1232_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__5, &l_Lean_Elab_Structural_getRecArgInfo___closed__5_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__5);
v___x_1236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1234_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v___x_1237_ = l_Lean_indentExpr(v___y_1224_);
v___x_1238_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1236_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1238_, v___y_1228_, v___y_1226_, v___y_1220_, v___y_1222_);
return v___x_1239_;
}
else
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_fixedParamPerm_1203_, v_xs_1204_);
v___x_1241_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(v___x_1240_, v___y_1229_, v___y_1228_, v___y_1226_, v___y_1220_, v___y_1222_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1241_, 1);
if (lean_obj_tag(v_a_1242_) == 0)
{
lean_object* v___x_1243_; 
v___x_1243_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadParamDep_x3f(v___x_1240_, v___y_1219_, v___y_1228_, v___y_1226_, v___y_1220_, v___y_1222_);
lean_dec_ref(v___x_1240_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1294_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1246_ = v___x_1243_;
v_isShared_1247_ = v_isSharedCheck_1294_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1243_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1294_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
if (lean_obj_tag(v_a_1244_) == 0)
{
lean_object* v_name_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1268_; 
lean_dec_ref(v___y_1224_);
v_name_1248_ = lean_ctor_get(v___y_1221_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___y_1221_);
if (v_isSharedCheck_1268_ == 0)
{
lean_object* v_unused_1269_; lean_object* v_unused_1270_; 
v_unused_1269_ = lean_ctor_get(v___y_1221_, 2);
lean_dec(v_unused_1269_);
v_unused_1270_ = lean_ctor_get(v___y_1221_, 1);
lean_dec(v_unused_1270_);
v___x_1250_ = v___y_1221_;
v_isShared_1251_ = v_isSharedCheck_1268_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_name_1248_);
lean_dec(v___y_1221_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1268_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = lean_array_mk(v___y_1223_);
v___x_1253_ = l_Array_idxOf_x3f___at___00Lean_Elab_Structural_getRecArgInfo_spec__4(v___x_1252_, v_name_1248_);
lean_dec(v_name_1248_);
lean_dec_ref(v___x_1252_);
if (lean_obj_tag(v___x_1253_) == 1)
{
lean_object* v_val_1254_; size_t v_sz_1255_; size_t v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1260_; 
v_val_1254_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_val_1254_);
lean_dec_ref_known(v___x_1253_, 1);
v_sz_1255_ = lean_array_size(v___y_1229_);
v___x_1256_ = ((size_t)0ULL);
v___x_1257_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5(v_xs_1204_, v_sz_1255_, v___x_1256_, v___y_1229_);
v___x_1258_ = l_Lean_Elab_Structural_IndGroupInfo_ofInductiveVal(v___y_1225_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 2, v___y_1219_);
lean_ctor_set(v___x_1250_, 1, v___y_1227_);
lean_ctor_set(v___x_1250_, 0, v___x_1258_);
v___x_1260_ = v___x_1250_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1258_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v___y_1227_);
lean_ctor_set(v_reuseFailAlloc_1265_, 2, v___y_1219_);
v___x_1260_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1261_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1261_, 0, v_fnName_1202_);
lean_ctor_set(v___x_1261_, 1, v_fixedParamPerm_1203_);
lean_ctor_set(v___x_1261_, 2, v_i_1205_);
lean_ctor_set(v___x_1261_, 3, v___x_1257_);
lean_ctor_set(v___x_1261_, 4, v___x_1260_);
lean_ctor_set(v___x_1261_, 5, v_val_1254_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 0, v___x_1261_);
v___x_1263_ = v___x_1246_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1261_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
else
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
lean_dec(v___x_1253_);
lean_del_object(v___x_1250_);
lean_del_object(v___x_1246_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1225_);
lean_dec_ref(v___y_1219_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v___x_1266_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__7, &l_Lean_Elab_Structural_getRecArgInfo___closed__7_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__7);
v___x_1267_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__2(v___x_1266_, v___y_1228_, v___y_1226_, v___y_1220_, v___y_1222_);
return v___x_1267_;
}
}
}
else
{
lean_object* v_val_1271_; lean_object* v_fst_1272_; lean_object* v_snd_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1293_; 
lean_del_object(v___x_1246_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1221_);
lean_dec_ref(v___y_1219_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v_val_1271_ = lean_ctor_get(v_a_1244_, 0);
lean_inc(v_val_1271_);
lean_dec_ref_known(v_a_1244_, 1);
v_fst_1272_ = lean_ctor_get(v_val_1271_, 0);
v_snd_1273_ = lean_ctor_get(v_val_1271_, 1);
v_isSharedCheck_1293_ = !lean_is_exclusive(v_val_1271_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1275_ = v_val_1271_;
v_isShared_1276_ = v_isSharedCheck_1293_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_snd_1273_);
lean_inc(v_fst_1272_);
lean_dec(v_val_1271_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1293_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1280_; 
v___x_1277_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__9, &l_Lean_Elab_Structural_getRecArgInfo___closed__9_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__9);
v___x_1278_ = l_Lean_indentExpr(v___y_1224_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set_tag(v___x_1275_, 7);
lean_ctor_set(v___x_1275_, 1, v___x_1278_);
lean_ctor_set(v___x_1275_, 0, v___x_1277_);
v___x_1280_ = v___x_1275_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1277_);
lean_ctor_set(v_reuseFailAlloc_1292_, 1, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1281_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__11, &l_Lean_Elab_Structural_getRecArgInfo___closed__11_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__11);
v___x_1282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1280_);
lean_ctor_set(v___x_1282_, 1, v___x_1281_);
v___x_1283_ = l_Lean_indentExpr(v_fst_1272_);
v___x_1284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1282_);
lean_ctor_set(v___x_1284_, 1, v___x_1283_);
v___x_1285_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__13, &l_Lean_Elab_Structural_getRecArgInfo___closed__13_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__13);
v___x_1286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = l_Lean_indentExpr(v_snd_1273_);
v___x_1288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1286_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__15, &l_Lean_Elab_Structural_getRecArgInfo___closed__15_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__15);
v___x_1290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1290_, v___y_1228_, v___y_1226_, v___y_1220_, v___y_1222_);
return v___x_1291_;
}
}
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1221_);
lean_dec_ref(v___y_1219_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v_a_1295_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1243_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1243_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
else
{
lean_object* v_val_1303_; lean_object* v_fst_1304_; lean_object* v_snd_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1328_; 
lean_dec_ref(v___x_1240_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1219_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v_val_1303_ = lean_ctor_get(v_a_1242_, 0);
lean_inc(v_val_1303_);
lean_dec_ref_known(v_a_1242_, 1);
v_fst_1304_ = lean_ctor_get(v_val_1303_, 0);
v_snd_1305_ = lean_ctor_get(v_val_1303_, 1);
v_isSharedCheck_1328_ = !lean_is_exclusive(v_val_1303_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1307_ = v_val_1303_;
v_isShared_1308_ = v_isSharedCheck_1328_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_snd_1305_);
lean_inc(v_fst_1304_);
lean_dec(v_val_1303_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1328_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v_name_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
v_name_1309_ = lean_ctor_get(v___y_1221_, 0);
lean_inc(v_name_1309_);
lean_dec_ref(v___y_1221_);
v___x_1310_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__3, &l_Lean_Elab_Structural_getRecArgInfo___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__3);
v___x_1311_ = l_Lean_MessageData_ofName(v_name_1309_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set_tag(v___x_1307_, 7);
lean_ctor_set(v___x_1307_, 1, v___x_1311_);
lean_ctor_set(v___x_1307_, 0, v___x_1310_);
v___x_1313_ = v___x_1307_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1310_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v___x_1311_);
v___x_1313_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1314_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__17, &l_Lean_Elab_Structural_getRecArgInfo___closed__17_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__17);
v___x_1315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = l_Lean_indentExpr(v___y_1224_);
v___x_1317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__19, &l_Lean_Elab_Structural_getRecArgInfo___closed__19_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__19);
v___x_1319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = l_Lean_indentExpr(v_fst_1304_);
v___x_1321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1319_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
v___x_1322_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__21, &l_Lean_Elab_Structural_getRecArgInfo___closed__21_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__21);
v___x_1323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1321_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = l_Lean_indentExpr(v_snd_1305_);
v___x_1325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set(v___x_1325_, 1, v___x_1324_);
v___x_1326_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1325_, v___y_1228_, v___y_1226_, v___y_1220_, v___y_1222_);
return v___x_1326_;
}
}
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
lean_dec_ref(v___x_1240_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1221_);
lean_dec_ref(v___y_1219_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v_a_1329_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1241_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1241_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
}
}
v___jp_1339_:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1354_ = l_Array_toSubarray___redArg(v___y_1341_, v_lower_1352_, v_upper_1353_);
v___x_1355_ = l_Subarray_copy___redArg(v___x_1354_);
v___x_1356_ = lean_array_get_size(v___x_1355_);
v___x_1357_ = lean_nat_dec_lt(v___y_1342_, v___x_1356_);
lean_dec(v___y_1342_);
if (v___x_1357_ == 0)
{
v___y_1219_ = v___y_1343_;
v___y_1220_ = v___y_1340_;
v___y_1221_ = v___y_1344_;
v___y_1222_ = v___y_1345_;
v___y_1223_ = v___y_1346_;
v___y_1224_ = v___y_1347_;
v___y_1225_ = v___y_1348_;
v___y_1226_ = v___y_1349_;
v___y_1227_ = v___y_1350_;
v___y_1228_ = v___y_1351_;
v___y_1229_ = v___x_1355_;
goto v___jp_1218_;
}
else
{
if (v___x_1357_ == 0)
{
v___y_1219_ = v___y_1343_;
v___y_1220_ = v___y_1340_;
v___y_1221_ = v___y_1344_;
v___y_1222_ = v___y_1345_;
v___y_1223_ = v___y_1346_;
v___y_1224_ = v___y_1347_;
v___y_1225_ = v___y_1348_;
v___y_1226_ = v___y_1349_;
v___y_1227_ = v___y_1350_;
v___y_1228_ = v___y_1351_;
v___y_1229_ = v___x_1355_;
goto v___jp_1218_;
}
else
{
size_t v___x_1358_; size_t v___x_1359_; uint8_t v___x_1360_; 
v___x_1358_ = ((size_t)0ULL);
v___x_1359_ = lean_usize_of_nat(v___x_1356_);
v___x_1360_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_getRecArgInfo_spec__6(v_i_1205_, v___x_1338_, v___x_1355_, v___x_1358_, v___x_1359_);
if (v___x_1360_ == 0)
{
v___y_1219_ = v___y_1343_;
v___y_1220_ = v___y_1340_;
v___y_1221_ = v___y_1344_;
v___y_1222_ = v___y_1345_;
v___y_1223_ = v___y_1346_;
v___y_1224_ = v___y_1347_;
v___y_1225_ = v___y_1348_;
v___y_1226_ = v___y_1349_;
v___y_1227_ = v___y_1350_;
v___y_1228_ = v___y_1351_;
v___y_1229_ = v___x_1355_;
goto v___jp_1218_;
}
else
{
lean_object* v_name_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v___x_1355_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1348_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1343_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v_name_1361_ = lean_ctor_get(v___y_1344_, 0);
lean_inc(v_name_1361_);
lean_dec_ref(v___y_1344_);
v___x_1362_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__3, &l_Lean_Elab_Structural_getRecArgInfo___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__3);
v___x_1363_ = l_Lean_MessageData_ofName(v_name_1361_);
v___x_1364_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__23, &l_Lean_Elab_Structural_getRecArgInfo___closed__23_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__23);
v___x_1366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1364_);
lean_ctor_set(v___x_1366_, 1, v___x_1365_);
v___x_1367_ = l_Lean_indentExpr(v___y_1347_);
v___x_1368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1366_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v___x_1369_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1368_, v___y_1351_, v___y_1349_, v___y_1340_, v___y_1345_);
return v___x_1369_;
}
}
}
}
v___jp_1370_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = l_Lean_LocalDecl_type(v___y_1371_);
lean_dec_ref(v___y_1371_);
v___x_1377_ = l_Lean_Meta_whnfD(v___x_1376_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1379_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
v___x_1379_ = l_Lean_Expr_getAppFn(v_a_1378_);
if (lean_obj_tag(v___x_1379_) == 4)
{
lean_object* v_declName_1380_; lean_object* v_us_1381_; lean_object* v___x_1382_; lean_object* v_env_1383_; uint8_t v___x_1384_; lean_object* v___x_1385_; 
v_declName_1380_ = lean_ctor_get(v___x_1379_, 0);
lean_inc(v_declName_1380_);
v_us_1381_ = lean_ctor_get(v___x_1379_, 1);
lean_inc(v_us_1381_);
lean_dec_ref_known(v___x_1379_, 2);
v___x_1382_ = lean_st_ref_get(v___y_1375_);
v_env_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc_ref(v_env_1383_);
lean_dec(v___x_1382_);
v___x_1384_ = 0;
v___x_1385_ = l_Lean_Environment_find_x3f(v_env_1383_, v_declName_1380_, v___x_1384_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_dec(v_us_1381_);
lean_dec(v_a_1378_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v___y_1212_ = v___y_1372_;
v___y_1213_ = v___y_1373_;
v___y_1214_ = v___y_1374_;
v___y_1215_ = v___y_1375_;
goto v___jp_1211_;
}
else
{
lean_object* v_val_1386_; 
v_val_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_val_1386_);
lean_dec_ref_known(v___x_1385_, 1);
if (lean_obj_tag(v_val_1386_) == 5)
{
lean_object* v_val_1387_; lean_object* v_toConstantVal_1388_; lean_object* v_numParams_1389_; lean_object* v_all_1390_; lean_object* v_nargs_1391_; lean_object* v_dummy_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v_val_1387_ = lean_ctor_get(v_val_1386_, 0);
lean_inc_ref(v_val_1387_);
lean_dec_ref_known(v_val_1386_, 1);
v_toConstantVal_1388_ = lean_ctor_get(v_val_1387_, 0);
lean_inc_ref(v_toConstantVal_1388_);
v_numParams_1389_ = lean_ctor_get(v_val_1387_, 1);
v_all_1390_ = lean_ctor_get(v_val_1387_, 3);
lean_inc(v_all_1390_);
v_nargs_1391_ = l_Lean_Expr_getAppNumArgs(v_a_1378_);
v_dummy_1392_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__24, &l_Lean_Elab_Structural_getRecArgInfo___closed__24_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__24);
lean_inc(v_nargs_1391_);
v___x_1393_ = lean_mk_array(v_nargs_1391_, v_dummy_1392_);
v___x_1394_ = lean_unsigned_to_nat(1u);
v___x_1395_ = lean_nat_sub(v_nargs_1391_, v___x_1394_);
lean_dec(v_nargs_1391_);
lean_inc(v_a_1378_);
v___x_1396_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1378_, v___x_1393_, v___x_1395_);
v___x_1397_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1389_);
lean_inc_ref(v___x_1396_);
v___x_1398_ = l_Array_toSubarray___redArg(v___x_1396_, v___x_1397_, v_numParams_1389_);
v___x_1399_ = l_Subarray_copy___redArg(v___x_1398_);
v___x_1400_ = lean_array_get_size(v___x_1396_);
v___x_1401_ = lean_nat_dec_le(v_numParams_1389_, v___x_1397_);
if (v___x_1401_ == 0)
{
lean_inc(v_numParams_1389_);
v___y_1340_ = v___y_1374_;
v___y_1341_ = v___x_1396_;
v___y_1342_ = v___x_1397_;
v___y_1343_ = v___x_1399_;
v___y_1344_ = v_toConstantVal_1388_;
v___y_1345_ = v___y_1375_;
v___y_1346_ = v_all_1390_;
v___y_1347_ = v_a_1378_;
v___y_1348_ = v_val_1387_;
v___y_1349_ = v___y_1373_;
v___y_1350_ = v_us_1381_;
v___y_1351_ = v___y_1372_;
v_lower_1352_ = v_numParams_1389_;
v_upper_1353_ = v___x_1400_;
goto v___jp_1339_;
}
else
{
v___y_1340_ = v___y_1374_;
v___y_1341_ = v___x_1396_;
v___y_1342_ = v___x_1397_;
v___y_1343_ = v___x_1399_;
v___y_1344_ = v_toConstantVal_1388_;
v___y_1345_ = v___y_1375_;
v___y_1346_ = v_all_1390_;
v___y_1347_ = v_a_1378_;
v___y_1348_ = v_val_1387_;
v___y_1349_ = v___y_1373_;
v___y_1350_ = v_us_1381_;
v___y_1351_ = v___y_1372_;
v_lower_1352_ = v___x_1397_;
v_upper_1353_ = v___x_1400_;
goto v___jp_1339_;
}
}
else
{
lean_dec(v_val_1386_);
lean_dec(v_us_1381_);
lean_dec(v_a_1378_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v___y_1212_ = v___y_1372_;
v___y_1213_ = v___y_1373_;
v___y_1214_ = v___y_1374_;
v___y_1215_ = v___y_1375_;
goto v___jp_1211_;
}
}
}
else
{
lean_dec_ref(v___x_1379_);
lean_dec(v_a_1378_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v___y_1212_ = v___y_1372_;
v___y_1213_ = v___y_1373_;
v___y_1214_ = v___y_1374_;
v___y_1215_ = v___y_1375_;
goto v___jp_1211_;
}
}
else
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1409_; 
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v_a_1402_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1404_ = v___x_1377_;
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v___x_1377_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1407_; 
if (v_isShared_1405_ == 0)
{
v___x_1407_ = v___x_1404_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_a_1402_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
}
v___jp_1410_:
{
lean_object* v_x_1415_; lean_object* v___x_1416_; 
v_x_1415_ = lean_array_fget_borrowed(v_xs_1204_, v_i_1205_);
v___x_1416_ = l_Lean_Meta_getFVarLocalDecl___redArg(v_x_1415_, v___y_1411_, v___y_1413_, v___y_1414_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; uint8_t v___x_1418_; uint8_t v___x_1419_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
lean_inc(v_a_1417_);
lean_dec_ref_known(v___x_1416_, 1);
v___x_1418_ = 0;
v___x_1419_ = l_Lean_LocalDecl_isLet(v_a_1417_, v___x_1418_);
if (v___x_1419_ == 0)
{
v___y_1371_ = v_a_1417_;
v___y_1372_ = v___y_1411_;
v___y_1373_ = v___y_1412_;
v___y_1374_ = v___y_1413_;
v___y_1375_ = v___y_1414_;
goto v___jp_1370_;
}
else
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec(v_a_1417_);
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v___x_1420_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfo___closed__26, &l_Lean_Elab_Structural_getRecArgInfo___closed__26_once, _init_l_Lean_Elab_Structural_getRecArgInfo___closed__26);
v___x_1421_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_1420_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1421_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1421_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_i_1205_);
lean_dec_ref(v_fixedParamPerm_1203_);
lean_dec(v_fnName_1202_);
v_a_1430_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1416_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1416_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfo___boxed(lean_object* v_fnName_1469_, lean_object* v_fixedParamPerm_1470_, lean_object* v_xs_1471_, lean_object* v_i_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Elab_Structural_getRecArgInfo(v_fnName_1469_, v_fixedParamPerm_1470_, v_xs_1471_, v_i_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_);
lean_dec(v_a_1476_);
lean_dec_ref(v_a_1475_);
lean_dec(v_a_1474_);
lean_dec_ref(v_a_1473_);
lean_dec_ref(v_xs_1471_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0(lean_object* v_00_u03b1_1479_, lean_object* v_msg_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v_msg_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___boxed(lean_object* v_00_u03b1_1487_, lean_object* v_msg_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0(v_00_u03b1_1487_, v_msg_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
return v_res_1494_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4(lean_object* v_as_1495_, lean_object* v_a_1496_, lean_object* v_x_1497_, lean_object* v_x_1498_){
_start:
{
uint8_t v___x_1499_; 
v___x_1499_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___redArg(v_as_1495_, v_a_1496_, v_x_1497_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4___boxed(lean_object* v_as_1500_, lean_object* v_a_1501_, lean_object* v_x_1502_, lean_object* v_x_1503_){
_start:
{
uint8_t v_res_1504_; lean_object* v_r_1505_; 
v_res_1504_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3_spec__3_spec__4(v_as_1500_, v_a_1501_, v_x_1502_, v_x_1503_);
lean_dec_ref(v_a_1501_);
lean_dec_ref(v_as_1500_);
v_r_1505_ = lean_box(v_res_1504_);
return v_r_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__0(lean_object* v___x_1506_, lean_object* v_e_1507_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = l_Lean_indentD(v_e_1507_);
v___x_1509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1506_);
lean_ctor_set(v___x_1509_, 1, v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__1(lean_object* v_val_1510_, lean_object* v_fnName_1511_, lean_object* v_fixedParamPerm_1512_, lean_object* v_args_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lean_Elab_TerminationMeasure_structuralArg(v_val_1510_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; lean_object* v___x_1521_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1519_, 1);
v___x_1521_ = l_Lean_Elab_Structural_getRecArgInfo(v_fnName_1511_, v_fixedParamPerm_1512_, v_args_1513_, v_a_1520_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_);
return v___x_1521_;
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
lean_dec_ref(v_fixedParamPerm_1512_);
lean_dec(v_fnName_1511_);
v_a_1522_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1519_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1519_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__1___boxed(lean_object* v_val_1530_, lean_object* v_fnName_1531_, lean_object* v_fixedParamPerm_1532_, lean_object* v_args_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Lean_Elab_Structural_getRecArgInfos___lam__1(v_val_1530_, v_fnName_1531_, v_fixedParamPerm_1532_, v_args_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec_ref(v_args_1533_);
return v_res_1539_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1541_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__0));
v___x_1542_ = l_Lean_stringToMessageData(v___x_1541_);
return v___x_1542_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__2));
v___x_1545_ = l_Lean_stringToMessageData(v___x_1544_);
return v___x_1545_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6(void){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__5));
v___x_1550_ = l_Lean_MessageData_ofFormat(v___x_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(lean_object* v_upperBound_1551_, lean_object* v_fnName_1552_, lean_object* v_fixedParamPerm_1553_, lean_object* v_args_1554_, lean_object* v_a_1555_, lean_object* v_b_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_fst_1563_; lean_object* v_snd_1564_; uint8_t v___x_1569_; 
v___x_1569_ = lean_nat_dec_lt(v_a_1555_, v_upperBound_1551_);
if (v___x_1569_ == 0)
{
lean_object* v___x_1570_; 
lean_dec(v_a_1555_);
lean_dec_ref(v_fixedParamPerm_1553_);
lean_dec(v_fnName_1552_);
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v_b_1556_);
return v___x_1570_;
}
else
{
lean_object* v_fst_1571_; lean_object* v_snd_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1618_; 
v_fst_1571_ = lean_ctor_get(v_b_1556_, 0);
v_snd_1572_ = lean_ctor_get(v_b_1556_, 1);
v_isSharedCheck_1618_ = !lean_is_exclusive(v_b_1556_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1574_ = v_b_1556_;
v_isShared_1575_ = v_isSharedCheck_1618_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_snd_1572_);
lean_inc(v_fst_1571_);
lean_dec(v_b_1556_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1618_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1576_; 
lean_inc(v_a_1555_);
lean_inc_ref(v_fixedParamPerm_1553_);
lean_inc(v_fnName_1552_);
v___x_1576_ = l_Lean_Elab_Structural_getRecArgInfo(v_fnName_1552_, v_fixedParamPerm_1553_, v_args_1554_, v_a_1555_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1578_; 
lean_del_object(v___x_1574_);
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v___x_1578_ = lean_array_push(v_fst_1571_, v_a_1577_);
v_fst_1563_ = v___x_1578_;
v_snd_1564_ = v_snd_1572_;
goto v___jp_1562_;
}
else
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1617_; 
v_a_1579_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1581_ = v___x_1576_;
v_isShared_1582_ = v_isSharedCheck_1617_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1576_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1617_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
uint8_t v___x_1583_; 
v___x_1583_ = l_Lean_Exception_isInterrupt(v_a_1579_);
if (v___x_1583_ == 0)
{
uint8_t v___x_1584_; 
lean_inc(v_a_1579_);
v___x_1584_ = l_Lean_Exception_isRuntime(v_a_1579_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; 
lean_del_object(v___x_1581_);
v___x_1585_ = l_Lean_Elab_Structural_prettyParam(v_args_1554_, v_a_1555_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1587_; lean_object* v___x_1589_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1587_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__1);
if (v_isShared_1575_ == 0)
{
lean_ctor_set_tag(v___x_1574_, 7);
lean_ctor_set(v___x_1574_, 1, v_a_1586_);
lean_ctor_set(v___x_1574_, 0, v___x_1587_);
v___x_1589_ = v___x_1574_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_a_1586_);
v___x_1589_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1590_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_prettyParameterSet_spec__0___closed__1);
v___x_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1589_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
lean_inc(v_fnName_1552_);
v___x_1592_ = l_Lean_MessageData_ofName(v_fnName_1552_);
v___x_1593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3);
v___x_1595_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1593_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = l_Lean_Exception_toMessageData(v_a_1579_);
v___x_1597_ = l_Lean_indentD(v___x_1596_);
v___x_1598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1595_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
v___x_1599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1599_, 0, v_snd_1572_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__6);
v___x_1601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1599_);
lean_ctor_set(v___x_1601_, 1, v___x_1600_);
v_fst_1563_ = v_fst_1571_;
v_snd_1564_ = v___x_1601_;
goto v___jp_1562_;
}
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
lean_dec(v_a_1579_);
lean_del_object(v___x_1574_);
lean_dec(v_snd_1572_);
lean_dec(v_fst_1571_);
lean_dec(v_a_1555_);
lean_dec_ref(v_fixedParamPerm_1553_);
lean_dec(v_fnName_1552_);
v_a_1603_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1585_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1585_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1603_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
else
{
lean_object* v___x_1612_; 
lean_del_object(v___x_1574_);
lean_dec(v_snd_1572_);
lean_dec(v_fst_1571_);
lean_dec(v_a_1555_);
lean_dec_ref(v_fixedParamPerm_1553_);
lean_dec(v_fnName_1552_);
if (v_isShared_1582_ == 0)
{
v___x_1612_ = v___x_1581_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1579_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
else
{
lean_object* v___x_1615_; 
lean_del_object(v___x_1574_);
lean_dec(v_snd_1572_);
lean_dec(v_fst_1571_);
lean_dec(v_a_1555_);
lean_dec_ref(v_fixedParamPerm_1553_);
lean_dec(v_fnName_1552_);
if (v_isShared_1582_ == 0)
{
v___x_1615_ = v___x_1581_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1579_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
}
}
v___jp_1562_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v_fst_1563_);
lean_ctor_set(v___x_1565_, 1, v_snd_1564_);
v___x_1566_ = lean_unsigned_to_nat(1u);
v___x_1567_ = lean_nat_add(v_a_1555_, v___x_1566_);
lean_dec(v_a_1555_);
v_a_1555_ = v___x_1567_;
v_b_1556_ = v___x_1565_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___boxed(lean_object* v_upperBound_1619_, lean_object* v_fnName_1620_, lean_object* v_fixedParamPerm_1621_, lean_object* v_args_1622_, lean_object* v_a_1623_, lean_object* v_b_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(v_upperBound_1619_, v_fnName_1620_, v_fixedParamPerm_1621_, v_args_1622_, v_a_1623_, v_b_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec(v___y_1626_);
lean_dec_ref(v___y_1625_);
lean_dec_ref(v_args_1622_);
lean_dec(v_upperBound_1619_);
return v_res_1630_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1631_; double v___x_1632_; 
v___x_1631_ = lean_unsigned_to_nat(0u);
v___x_1632_ = lean_float_of_nat(v___x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(lean_object* v_cls_1634_, lean_object* v_msg_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v_ref_1641_; lean_object* v___x_1642_; lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1688_; 
v_ref_1641_ = lean_ctor_get(v___y_1638_, 2);
v___x_1642_ = l_Lean_addMessageContextFull___at___00Lean_Elab_Structural_prettyParam_spec__0(v_msg_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_);
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1688_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1688_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1647_; lean_object* v_traceState_1648_; lean_object* v_env_1649_; lean_object* v_nextMacroScope_1650_; lean_object* v_ngen_1651_; lean_object* v_auxDeclNGen_1652_; lean_object* v_cache_1653_; lean_object* v_recordedDeps_1654_; lean_object* v_messages_1655_; lean_object* v_infoState_1656_; lean_object* v_snapshotTasks_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1687_; 
v___x_1647_ = lean_st_ref_take(v___y_1639_);
v_traceState_1648_ = lean_ctor_get(v___x_1647_, 4);
v_env_1649_ = lean_ctor_get(v___x_1647_, 0);
v_nextMacroScope_1650_ = lean_ctor_get(v___x_1647_, 1);
v_ngen_1651_ = lean_ctor_get(v___x_1647_, 2);
v_auxDeclNGen_1652_ = lean_ctor_get(v___x_1647_, 3);
v_cache_1653_ = lean_ctor_get(v___x_1647_, 5);
v_recordedDeps_1654_ = lean_ctor_get(v___x_1647_, 6);
v_messages_1655_ = lean_ctor_get(v___x_1647_, 7);
v_infoState_1656_ = lean_ctor_get(v___x_1647_, 8);
v_snapshotTasks_1657_ = lean_ctor_get(v___x_1647_, 9);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1659_ = v___x_1647_;
v_isShared_1660_ = v_isSharedCheck_1687_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_snapshotTasks_1657_);
lean_inc(v_infoState_1656_);
lean_inc(v_messages_1655_);
lean_inc(v_recordedDeps_1654_);
lean_inc(v_cache_1653_);
lean_inc(v_traceState_1648_);
lean_inc(v_auxDeclNGen_1652_);
lean_inc(v_ngen_1651_);
lean_inc(v_nextMacroScope_1650_);
lean_inc(v_env_1649_);
lean_dec(v___x_1647_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1687_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
uint64_t v_tid_1661_; lean_object* v_traces_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1686_; 
v_tid_1661_ = lean_ctor_get_uint64(v_traceState_1648_, sizeof(void*)*1);
v_traces_1662_ = lean_ctor_get(v_traceState_1648_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_traceState_1648_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1664_ = v_traceState_1648_;
v_isShared_1665_ = v_isSharedCheck_1686_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_traces_1662_);
lean_dec(v_traceState_1648_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1686_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; double v___x_1668_; uint8_t v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1677_; 
v___x_1666_ = lean_box(0);
v___x_1667_ = lean_box(0);
v___x_1668_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__0);
v___x_1669_ = 0;
v___x_1670_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1));
v___x_1671_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1671_, 0, v_cls_1634_);
lean_ctor_set(v___x_1671_, 1, v___x_1667_);
lean_ctor_set(v___x_1671_, 2, v___x_1670_);
lean_ctor_set_float(v___x_1671_, sizeof(void*)*3, v___x_1668_);
lean_ctor_set_float(v___x_1671_, sizeof(void*)*3 + 8, v___x_1668_);
lean_ctor_set_uint8(v___x_1671_, sizeof(void*)*3 + 16, v___x_1669_);
v___x_1672_ = ((lean_object*)(l_Lean_Elab_Structural_prettyParameterSet___closed__0));
v___x_1673_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1671_);
lean_ctor_set(v___x_1673_, 1, v_a_1643_);
lean_ctor_set(v___x_1673_, 2, v___x_1672_);
lean_inc(v_ref_1641_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v_ref_1641_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = l_Lean_PersistentArray_push___redArg(v_traces_1662_, v___x_1674_);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 0, v___x_1675_);
v___x_1677_ = v___x_1664_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1675_);
lean_ctor_set_uint64(v_reuseFailAlloc_1685_, sizeof(void*)*1, v_tid_1661_);
v___x_1677_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
lean_object* v___x_1679_; 
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 4, v___x_1677_);
v___x_1679_ = v___x_1659_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_env_1649_);
lean_ctor_set(v_reuseFailAlloc_1684_, 1, v_nextMacroScope_1650_);
lean_ctor_set(v_reuseFailAlloc_1684_, 2, v_ngen_1651_);
lean_ctor_set(v_reuseFailAlloc_1684_, 3, v_auxDeclNGen_1652_);
lean_ctor_set(v_reuseFailAlloc_1684_, 4, v___x_1677_);
lean_ctor_set(v_reuseFailAlloc_1684_, 5, v_cache_1653_);
lean_ctor_set(v_reuseFailAlloc_1684_, 6, v_recordedDeps_1654_);
lean_ctor_set(v_reuseFailAlloc_1684_, 7, v_messages_1655_);
lean_ctor_set(v_reuseFailAlloc_1684_, 8, v_infoState_1656_);
lean_ctor_set(v_reuseFailAlloc_1684_, 9, v_snapshotTasks_1657_);
v___x_1679_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
lean_object* v___x_1680_; lean_object* v___x_1682_; 
v___x_1680_ = lean_st_ref_put(v___y_1639_, v___x_1679_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 0, v___x_1666_);
v___x_1682_ = v___x_1645_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v___x_1666_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___boxed(lean_object* v_cls_1689_, lean_object* v_msg_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v_cls_1689_, v_msg_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
return v_res_1696_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1698_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__0));
v___x_1699_ = l_Lean_stringToMessageData(v___x_1698_);
return v___x_1699_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___f_1701_; 
v___x_1700_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__1);
v___f_1701_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_getRecArgInfos___lam__0), 2, 1);
lean_closure_set(v___f_1701_, 0, v___x_1700_);
return v___f_1701_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0___closed__1));
v___x_1703_ = l_Lean_stringToMessageData(v___x_1702_);
return v___x_1703_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5(void){
_start:
{
lean_object* v_report_1706_; lean_object* v_recArgInfos_1707_; lean_object* v___x_1708_; 
v_report_1706_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3);
v_recArgInfos_1707_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4));
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_recArgInfos_1707_);
lean_ctor_set(v___x_1708_, 1, v_report_1706_);
return v___x_1708_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12(void){
_start:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1719_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9));
v___x_1720_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__11));
v___x_1721_ = l_Lean_Name_append(v___x_1720_, v___x_1719_);
return v___x_1721_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14(void){
_start:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1723_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__13));
v___x_1724_ = l_Lean_stringToMessageData(v___x_1723_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2(lean_object* v_termMeasure_x3f_1725_, lean_object* v_fixedParamPerm_1726_, lean_object* v_xs_1727_, lean_object* v_fnName_1728_, lean_object* v_ys_1729_, lean_object* v_x_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
if (lean_obj_tag(v_termMeasure_x3f_1725_) == 1)
{
lean_object* v_val_1736_; lean_object* v_ref_1737_; lean_object* v_toCold_1738_; lean_object* v_currRecDepth_1739_; lean_object* v_ref_1740_; uint16_t v_optionFlags_1741_; uint8_t v_suppressElabErrors_1742_; uint8_t v_isRecordingDeps_1743_; lean_object* v___f_1744_; lean_object* v_args_1745_; lean_object* v___f_1746_; lean_object* v_ref_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v_val_1736_ = lean_ctor_get(v_termMeasure_x3f_1725_, 0);
lean_inc(v_val_1736_);
lean_dec_ref_known(v_termMeasure_x3f_1725_, 1);
v_ref_1737_ = lean_ctor_get(v_val_1736_, 0);
lean_inc(v_ref_1737_);
v_toCold_1738_ = lean_ctor_get(v___y_1733_, 0);
v_currRecDepth_1739_ = lean_ctor_get(v___y_1733_, 1);
v_ref_1740_ = lean_ctor_get(v___y_1733_, 2);
v_optionFlags_1741_ = lean_ctor_get_uint16(v___y_1733_, sizeof(void*)*3);
v_suppressElabErrors_1742_ = lean_ctor_get_uint8(v___y_1733_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1743_ = lean_ctor_get_uint8(v___y_1733_, sizeof(void*)*3 + 3);
v___f_1744_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__2);
lean_inc_ref(v_fixedParamPerm_1726_);
v_args_1745_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_1726_, v_xs_1727_, v_ys_1729_);
v___f_1746_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_getRecArgInfos___lam__1___boxed), 9, 4);
lean_closure_set(v___f_1746_, 0, v_val_1736_);
lean_closure_set(v___f_1746_, 1, v_fnName_1728_);
lean_closure_set(v___f_1746_, 2, v_fixedParamPerm_1726_);
lean_closure_set(v___f_1746_, 3, v_args_1745_);
v_ref_1747_ = l_Lean_replaceRef(v_ref_1737_, v_ref_1740_);
lean_dec(v_ref_1737_);
lean_inc(v_currRecDepth_1739_);
lean_inc_ref(v_toCold_1738_);
v___x_1748_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1748_, 0, v_toCold_1738_);
lean_ctor_set(v___x_1748_, 1, v_currRecDepth_1739_);
lean_ctor_set(v___x_1748_, 2, v_ref_1747_);
lean_ctor_set_uint16(v___x_1748_, sizeof(void*)*3, v_optionFlags_1741_);
lean_ctor_set_uint8(v___x_1748_, sizeof(void*)*3 + 2, v_suppressElabErrors_1742_);
lean_ctor_set_uint8(v___x_1748_, sizeof(void*)*3 + 3, v_isRecordingDeps_1743_);
v___x_1749_ = l_Lean_Meta_mapErrorImp___redArg(v___f_1746_, v___f_1744_, v___y_1731_, v___y_1732_, v___x_1748_, v___y_1734_);
lean_dec_ref_known(v___x_1748_, 3);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1762_; 
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1752_ = v___x_1749_;
v_isShared_1753_ = v_isSharedCheck_1762_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1749_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1762_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1760_; 
v___x_1754_ = lean_unsigned_to_nat(1u);
v___x_1755_ = lean_mk_empty_array_with_capacity(v___x_1754_);
v___x_1756_ = lean_array_push(v___x_1755_, v_a_1750_);
v___x_1757_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3);
v___x_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1756_);
lean_ctor_set(v___x_1758_, 1, v___x_1757_);
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 0, v___x_1758_);
v___x_1760_ = v___x_1752_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v___x_1758_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
v_a_1763_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1749_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1749_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v_args_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; 
lean_dec(v_termMeasure_x3f_1725_);
lean_inc_ref(v_fixedParamPerm_1726_);
v_args_1771_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_1726_, v_xs_1727_, v_ys_1729_);
v___x_1772_ = lean_array_get_size(v_args_1771_);
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__5);
v___x_1775_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(v___x_1772_, v_fnName_1728_, v_fixedParamPerm_1726_, v_args_1771_, v___x_1773_, v___x_1774_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_);
lean_dec_ref(v_args_1771_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1811_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1811_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1811_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v_fst_1780_; lean_object* v_snd_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1810_; 
v_fst_1780_ = lean_ctor_get(v_a_1776_, 0);
v_snd_1781_ = lean_ctor_get(v_a_1776_, 1);
v_isSharedCheck_1810_ = !lean_is_exclusive(v_a_1776_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1783_ = v_a_1776_;
v_isShared_1784_ = v_isSharedCheck_1810_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_snd_1781_);
lean_inc(v_fst_1780_);
lean_dec(v_a_1776_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1810_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v_toCold_1792_; lean_object* v_options_1793_; uint8_t v_hasTrace_1794_; 
v_toCold_1792_ = lean_ctor_get(v___y_1733_, 0);
v_options_1793_ = lean_ctor_get(v_toCold_1792_, 2);
v_hasTrace_1794_ = lean_ctor_get_uint8(v_options_1793_, sizeof(void*)*1);
if (v_hasTrace_1794_ == 0)
{
goto v___jp_1785_;
}
else
{
lean_object* v_inheritedTraceOptions_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; uint8_t v___x_1798_; 
v_inheritedTraceOptions_1795_ = lean_ctor_get(v_toCold_1792_, 11);
v___x_1796_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9));
v___x_1797_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12);
v___x_1798_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1795_, v_options_1793_, v___x_1797_);
if (v___x_1798_ == 0)
{
goto v___jp_1785_;
}
else
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1799_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__14);
lean_inc(v_snd_1781_);
v___x_1800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1799_);
lean_ctor_set(v___x_1800_, 1, v_snd_1781_);
v___x_1801_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v___x_1796_, v___x_1800_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_dec_ref_known(v___x_1801_, 1);
goto v___jp_1785_;
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_del_object(v___x_1783_);
lean_dec(v_snd_1781_);
lean_dec(v_fst_1780_);
lean_del_object(v___x_1778_);
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1801_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1801_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
}
v___jp_1785_:
{
lean_object* v___x_1787_; 
if (v_isShared_1784_ == 0)
{
v___x_1787_ = v___x_1783_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_fst_1780_);
lean_ctor_set(v_reuseFailAlloc_1791_, 1, v_snd_1781_);
v___x_1787_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
lean_object* v___x_1789_; 
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1787_);
v___x_1789_ = v___x_1778_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v___x_1787_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
}
}
}
}
else
{
return v___x_1775_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___lam__2___boxed(lean_object* v_termMeasure_x3f_1812_, lean_object* v_fixedParamPerm_1813_, lean_object* v_xs_1814_, lean_object* v_fnName_1815_, lean_object* v_ys_1816_, lean_object* v_x_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lean_Elab_Structural_getRecArgInfos___lam__2(v_termMeasure_x3f_1812_, v_fixedParamPerm_1813_, v_xs_1814_, v_fnName_1815_, v_ys_1816_, v_x_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec_ref(v_x_1817_);
lean_dec_ref(v_xs_1814_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos(lean_object* v_fnName_1824_, lean_object* v_fixedParamPerm_1825_, lean_object* v_xs_1826_, lean_object* v_value_1827_, lean_object* v_termMeasure_x3f_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v___f_1834_; uint8_t v___x_1835_; lean_object* v___x_1836_; 
v___f_1834_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___boxed), 11, 4);
lean_closure_set(v___f_1834_, 0, v_termMeasure_x3f_1828_);
lean_closure_set(v___f_1834_, 1, v_fixedParamPerm_1825_);
lean_closure_set(v___f_1834_, 2, v_xs_1826_);
lean_closure_set(v___f_1834_, 3, v_fnName_1824_);
v___x_1835_ = 0;
v___x_1836_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_value_1827_, v___f_1834_, v___x_1835_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_getRecArgInfos___boxed(lean_object* v_fnName_1837_, lean_object* v_fixedParamPerm_1838_, lean_object* v_xs_1839_, lean_object* v_value_1840_, lean_object* v_termMeasure_x3f_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lean_Elab_Structural_getRecArgInfos(v_fnName_1837_, v_fixedParamPerm_1838_, v_xs_1839_, v_value_1840_, v_termMeasure_x3f_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
lean_dec(v_a_1843_);
lean_dec_ref(v_a_1842_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1(lean_object* v_upperBound_1848_, lean_object* v_fnName_1849_, lean_object* v_fixedParamPerm_1850_, lean_object* v_args_1851_, lean_object* v_inst_1852_, lean_object* v_R_1853_, lean_object* v_a_1854_, lean_object* v_b_1855_, lean_object* v_c_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg(v_upperBound_1848_, v_fnName_1849_, v_fixedParamPerm_1850_, v_args_1851_, v_a_1854_, v_b_1855_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___boxed(lean_object* v_upperBound_1863_, lean_object* v_fnName_1864_, lean_object* v_fixedParamPerm_1865_, lean_object* v_args_1866_, lean_object* v_inst_1867_, lean_object* v_R_1868_, lean_object* v_a_1869_, lean_object* v_b_1870_, lean_object* v_c_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1(v_upperBound_1863_, v_fnName_1864_, v_fixedParamPerm_1865_, v_args_1866_, v_inst_1867_, v_R_1868_, v_a_1869_, v_b_1870_, v_c_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec_ref(v_args_1866_);
lean_dec(v_upperBound_1863_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7___redArg(lean_object* v_x_1878_, lean_object* v_x_1879_){
_start:
{
if (lean_obj_tag(v_x_1879_) == 0)
{
return v_x_1878_;
}
else
{
lean_object* v_key_1880_; lean_object* v_value_1881_; lean_object* v_tail_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1905_; 
v_key_1880_ = lean_ctor_get(v_x_1879_, 0);
v_value_1881_ = lean_ctor_get(v_x_1879_, 1);
v_tail_1882_ = lean_ctor_get(v_x_1879_, 2);
v_isSharedCheck_1905_ = !lean_is_exclusive(v_x_1879_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1884_ = v_x_1879_;
v_isShared_1885_ = v_isSharedCheck_1905_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_tail_1882_);
lean_inc(v_value_1881_);
lean_inc(v_key_1880_);
lean_dec(v_x_1879_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1905_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1886_; uint64_t v___x_1887_; uint64_t v___x_1888_; uint64_t v___x_1889_; uint64_t v_fold_1890_; uint64_t v___x_1891_; uint64_t v___x_1892_; uint64_t v___x_1893_; size_t v___x_1894_; size_t v___x_1895_; size_t v___x_1896_; size_t v___x_1897_; size_t v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1901_; 
v___x_1886_ = lean_array_get_size(v_x_1878_);
v___x_1887_ = lean_uint64_of_nat(v_key_1880_);
v___x_1888_ = 32ULL;
v___x_1889_ = lean_uint64_shift_right(v___x_1887_, v___x_1888_);
v_fold_1890_ = lean_uint64_xor(v___x_1887_, v___x_1889_);
v___x_1891_ = 16ULL;
v___x_1892_ = lean_uint64_shift_right(v_fold_1890_, v___x_1891_);
v___x_1893_ = lean_uint64_xor(v_fold_1890_, v___x_1892_);
v___x_1894_ = lean_uint64_to_usize(v___x_1893_);
v___x_1895_ = lean_usize_of_nat(v___x_1886_);
v___x_1896_ = ((size_t)1ULL);
v___x_1897_ = lean_usize_sub(v___x_1895_, v___x_1896_);
v___x_1898_ = lean_usize_land(v___x_1894_, v___x_1897_);
v___x_1899_ = lean_array_uget_borrowed(v_x_1878_, v___x_1898_);
lean_inc(v___x_1899_);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 2, v___x_1899_);
v___x_1901_ = v___x_1884_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_key_1880_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v_value_1881_);
lean_ctor_set(v_reuseFailAlloc_1904_, 2, v___x_1899_);
v___x_1901_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_array_uset(v_x_1878_, v___x_1898_, v___x_1901_);
v_x_1878_ = v___x_1902_;
v_x_1879_ = v_tail_1882_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2___redArg(lean_object* v_i_1906_, lean_object* v_source_1907_, lean_object* v_target_1908_){
_start:
{
lean_object* v___x_1909_; uint8_t v___x_1910_; 
v___x_1909_ = lean_array_get_size(v_source_1907_);
v___x_1910_ = lean_nat_dec_lt(v_i_1906_, v___x_1909_);
if (v___x_1910_ == 0)
{
lean_dec_ref(v_source_1907_);
lean_dec(v_i_1906_);
return v_target_1908_;
}
else
{
lean_object* v_es_1911_; lean_object* v___x_1912_; lean_object* v_source_1913_; lean_object* v_target_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v_es_1911_ = lean_array_fget(v_source_1907_, v_i_1906_);
v___x_1912_ = lean_box(0);
v_source_1913_ = lean_array_fset(v_source_1907_, v_i_1906_, v___x_1912_);
v_target_1914_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7___redArg(v_target_1908_, v_es_1911_);
v___x_1915_ = lean_unsigned_to_nat(1u);
v___x_1916_ = lean_nat_add(v_i_1906_, v___x_1915_);
lean_dec(v_i_1906_);
v_i_1906_ = v___x_1916_;
v_source_1907_ = v_source_1913_;
v_target_1908_ = v_target_1914_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1___redArg(lean_object* v_data_1918_){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v_nbuckets_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1919_ = lean_array_get_size(v_data_1918_);
v___x_1920_ = lean_unsigned_to_nat(2u);
v_nbuckets_1921_ = lean_nat_mul(v___x_1919_, v___x_1920_);
v___x_1922_ = lean_unsigned_to_nat(0u);
v___x_1923_ = lean_box(0);
v___x_1924_ = lean_mk_array(v_nbuckets_1921_, v___x_1923_);
v___x_1925_ = lean_array_propagate_mark(v_data_1918_, v___x_1924_);
v___x_1926_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2___redArg(v___x_1922_, v_data_1918_, v___x_1925_);
return v___x_1926_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(lean_object* v_a_1927_, lean_object* v_x_1928_){
_start:
{
if (lean_obj_tag(v_x_1928_) == 0)
{
uint8_t v___x_1929_; 
v___x_1929_ = 0;
return v___x_1929_;
}
else
{
lean_object* v_key_1930_; lean_object* v_tail_1931_; uint8_t v___x_1932_; 
v_key_1930_ = lean_ctor_get(v_x_1928_, 0);
v_tail_1931_ = lean_ctor_get(v_x_1928_, 2);
v___x_1932_ = lean_nat_dec_eq(v_key_1930_, v_a_1927_);
if (v___x_1932_ == 0)
{
v_x_1928_ = v_tail_1931_;
goto _start;
}
else
{
return v___x_1932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg___boxed(lean_object* v_a_1934_, lean_object* v_x_1935_){
_start:
{
uint8_t v_res_1936_; lean_object* v_r_1937_; 
v_res_1936_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(v_a_1934_, v_x_1935_);
lean_dec(v_x_1935_);
lean_dec(v_a_1934_);
v_r_1937_ = lean_box(v_res_1936_);
return v_r_1937_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(lean_object* v_m_1938_, lean_object* v_a_1939_, lean_object* v_b_1940_){
_start:
{
lean_object* v_size_1941_; lean_object* v_buckets_1942_; lean_object* v___x_1943_; uint64_t v___x_1944_; uint64_t v___x_1945_; uint64_t v___x_1946_; uint64_t v_fold_1947_; uint64_t v___x_1948_; uint64_t v___x_1949_; uint64_t v___x_1950_; size_t v___x_1951_; size_t v___x_1952_; size_t v___x_1953_; size_t v___x_1954_; size_t v___x_1955_; lean_object* v_bkt_1956_; uint8_t v___x_1957_; 
v_size_1941_ = lean_ctor_get(v_m_1938_, 0);
v_buckets_1942_ = lean_ctor_get(v_m_1938_, 1);
v___x_1943_ = lean_array_get_size(v_buckets_1942_);
v___x_1944_ = lean_uint64_of_nat(v_a_1939_);
v___x_1945_ = 32ULL;
v___x_1946_ = lean_uint64_shift_right(v___x_1944_, v___x_1945_);
v_fold_1947_ = lean_uint64_xor(v___x_1944_, v___x_1946_);
v___x_1948_ = 16ULL;
v___x_1949_ = lean_uint64_shift_right(v_fold_1947_, v___x_1948_);
v___x_1950_ = lean_uint64_xor(v_fold_1947_, v___x_1949_);
v___x_1951_ = lean_uint64_to_usize(v___x_1950_);
v___x_1952_ = lean_usize_of_nat(v___x_1943_);
v___x_1953_ = ((size_t)1ULL);
v___x_1954_ = lean_usize_sub(v___x_1952_, v___x_1953_);
v___x_1955_ = lean_usize_land(v___x_1951_, v___x_1954_);
v_bkt_1956_ = lean_array_uget_borrowed(v_buckets_1942_, v___x_1955_);
v___x_1957_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(v_a_1939_, v_bkt_1956_);
if (v___x_1957_ == 0)
{
lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1978_; 
lean_inc_ref(v_buckets_1942_);
lean_inc(v_size_1941_);
v_isSharedCheck_1978_ = !lean_is_exclusive(v_m_1938_);
if (v_isSharedCheck_1978_ == 0)
{
lean_object* v_unused_1979_; lean_object* v_unused_1980_; 
v_unused_1979_ = lean_ctor_get(v_m_1938_, 1);
lean_dec(v_unused_1979_);
v_unused_1980_ = lean_ctor_get(v_m_1938_, 0);
lean_dec(v_unused_1980_);
v___x_1959_ = v_m_1938_;
v_isShared_1960_ = v_isSharedCheck_1978_;
goto v_resetjp_1958_;
}
else
{
lean_dec(v_m_1938_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1978_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1961_; lean_object* v_size_x27_1962_; lean_object* v___x_1963_; lean_object* v_buckets_x27_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; uint8_t v___x_1970_; 
v___x_1961_ = lean_unsigned_to_nat(1u);
v_size_x27_1962_ = lean_nat_add(v_size_1941_, v___x_1961_);
lean_dec(v_size_1941_);
lean_inc(v_bkt_1956_);
v___x_1963_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1963_, 0, v_a_1939_);
lean_ctor_set(v___x_1963_, 1, v_b_1940_);
lean_ctor_set(v___x_1963_, 2, v_bkt_1956_);
v_buckets_x27_1964_ = lean_array_uset(v_buckets_1942_, v___x_1955_, v___x_1963_);
v___x_1965_ = lean_unsigned_to_nat(4u);
v___x_1966_ = lean_nat_mul(v_size_x27_1962_, v___x_1965_);
v___x_1967_ = lean_unsigned_to_nat(3u);
v___x_1968_ = lean_nat_div(v___x_1966_, v___x_1967_);
lean_dec(v___x_1966_);
v___x_1969_ = lean_array_get_size(v_buckets_x27_1964_);
v___x_1970_ = lean_nat_dec_le(v___x_1968_, v___x_1969_);
lean_dec(v___x_1968_);
if (v___x_1970_ == 0)
{
lean_object* v_val_1971_; lean_object* v___x_1973_; 
v_val_1971_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1___redArg(v_buckets_x27_1964_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v_val_1971_);
lean_ctor_set(v___x_1959_, 0, v_size_x27_1962_);
v___x_1973_ = v___x_1959_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_size_x27_1962_);
lean_ctor_set(v_reuseFailAlloc_1974_, 1, v_val_1971_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
else
{
lean_object* v___x_1976_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v_buckets_x27_1964_);
lean_ctor_set(v___x_1959_, 0, v_size_x27_1962_);
v___x_1976_ = v___x_1959_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_size_x27_1962_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v_buckets_x27_1964_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
else
{
lean_dec(v_b_1940_);
lean_dec(v_a_1939_);
return v_m_1938_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1(lean_object* v_as_1981_, size_t v_sz_1982_, size_t v_i_1983_, lean_object* v_b_1984_){
_start:
{
uint8_t v___x_1985_; 
v___x_1985_ = lean_usize_dec_lt(v_i_1983_, v_sz_1982_);
if (v___x_1985_ == 0)
{
return v_b_1984_;
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; size_t v___x_1989_; size_t v___x_1990_; 
v_a_1986_ = lean_array_uget_borrowed(v_as_1981_, v_i_1983_);
v___x_1987_ = lean_box(0);
lean_inc(v_a_1986_);
v___x_1988_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(v_b_1984_, v_a_1986_, v___x_1987_);
v___x_1989_ = ((size_t)1ULL);
v___x_1990_ = lean_usize_add(v_i_1983_, v___x_1989_);
v_i_1983_ = v___x_1990_;
v_b_1984_ = v___x_1988_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1___boxed(lean_object* v_as_1992_, lean_object* v_sz_1993_, lean_object* v_i_1994_, lean_object* v_b_1995_){
_start:
{
size_t v_sz_boxed_1996_; size_t v_i_boxed_1997_; lean_object* v_res_1998_; 
v_sz_boxed_1996_ = lean_unbox_usize(v_sz_1993_);
lean_dec(v_sz_1993_);
v_i_boxed_1997_ = lean_unbox_usize(v_i_1994_);
lean_dec(v_i_1994_);
v_res_1998_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1(v_as_1992_, v_sz_boxed_1996_, v_i_boxed_1997_, v_b_1995_);
lean_dec_ref(v_as_1992_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2(lean_object* v_as_1999_, size_t v_sz_2000_, size_t v_i_2001_, lean_object* v_b_2002_){
_start:
{
uint8_t v___x_2003_; 
v___x_2003_ = lean_usize_dec_lt(v_i_2001_, v_sz_2000_);
if (v___x_2003_ == 0)
{
return v_b_2002_;
}
else
{
lean_object* v_a_2004_; lean_object* v_indicesPos_2005_; size_t v_sz_2006_; size_t v___x_2007_; lean_object* v___x_2008_; size_t v___x_2009_; size_t v___x_2010_; 
v_a_2004_ = lean_array_uget_borrowed(v_as_1999_, v_i_2001_);
v_indicesPos_2005_ = lean_ctor_get(v_a_2004_, 3);
v_sz_2006_ = lean_array_size(v_indicesPos_2005_);
v___x_2007_ = ((size_t)0ULL);
v___x_2008_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__1(v_indicesPos_2005_, v_sz_2006_, v___x_2007_, v_b_2002_);
v___x_2009_ = ((size_t)1ULL);
v___x_2010_ = lean_usize_add(v_i_2001_, v___x_2009_);
v_i_2001_ = v___x_2010_;
v_b_2002_ = v___x_2008_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2___boxed(lean_object* v_as_2012_, lean_object* v_sz_2013_, lean_object* v_i_2014_, lean_object* v_b_2015_){
_start:
{
size_t v_sz_boxed_2016_; size_t v_i_boxed_2017_; lean_object* v_res_2018_; 
v_sz_boxed_2016_ = lean_unbox_usize(v_sz_2013_);
lean_dec(v_sz_2013_);
v_i_boxed_2017_ = lean_unbox_usize(v_i_2014_);
lean_dec(v_i_2014_);
v_res_2018_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2(v_as_2012_, v_sz_boxed_2016_, v_i_boxed_2017_, v_b_2015_);
lean_dec_ref(v_as_2012_);
return v_res_2018_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(lean_object* v_m_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_buckets_2021_; lean_object* v___x_2022_; uint64_t v___x_2023_; uint64_t v___x_2024_; uint64_t v___x_2025_; uint64_t v_fold_2026_; uint64_t v___x_2027_; uint64_t v___x_2028_; uint64_t v___x_2029_; size_t v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v_buckets_2021_ = lean_ctor_get(v_m_2019_, 1);
v___x_2022_ = lean_array_get_size(v_buckets_2021_);
v___x_2023_ = lean_uint64_of_nat(v_a_2020_);
v___x_2024_ = 32ULL;
v___x_2025_ = lean_uint64_shift_right(v___x_2023_, v___x_2024_);
v_fold_2026_ = lean_uint64_xor(v___x_2023_, v___x_2025_);
v___x_2027_ = 16ULL;
v___x_2028_ = lean_uint64_shift_right(v_fold_2026_, v___x_2027_);
v___x_2029_ = lean_uint64_xor(v_fold_2026_, v___x_2028_);
v___x_2030_ = lean_uint64_to_usize(v___x_2029_);
v___x_2031_ = lean_usize_of_nat(v___x_2022_);
v___x_2032_ = ((size_t)1ULL);
v___x_2033_ = lean_usize_sub(v___x_2031_, v___x_2032_);
v___x_2034_ = lean_usize_land(v___x_2030_, v___x_2033_);
v___x_2035_ = lean_array_uget_borrowed(v_buckets_2021_, v___x_2034_);
v___x_2036_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(v_a_2020_, v___x_2035_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg___boxed(lean_object* v_m_2037_, lean_object* v_a_2038_){
_start:
{
uint8_t v_res_2039_; lean_object* v_r_2040_; 
v_res_2039_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v_m_2037_, v_a_2038_);
lean_dec(v_a_2038_);
lean_dec_ref(v_m_2037_);
v_r_2040_ = lean_box(v_res_2039_);
return v_r_2040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4(lean_object* v___x_2041_, lean_object* v_as_2042_, size_t v_sz_2043_, size_t v_i_2044_, lean_object* v_b_2045_){
_start:
{
lean_object* v_a_2047_; uint8_t v___x_2051_; 
v___x_2051_ = lean_usize_dec_lt(v_i_2044_, v_sz_2043_);
if (v___x_2051_ == 0)
{
return v_b_2045_;
}
else
{
lean_object* v_fst_2052_; lean_object* v_snd_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2068_; 
v_fst_2052_ = lean_ctor_get(v_b_2045_, 0);
v_snd_2053_ = lean_ctor_get(v_b_2045_, 1);
v_isSharedCheck_2068_ = !lean_is_exclusive(v_b_2045_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2055_ = v_b_2045_;
v_isShared_2056_ = v_isSharedCheck_2068_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_snd_2053_);
lean_inc(v_fst_2052_);
lean_dec(v_b_2045_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2068_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v_a_2057_; lean_object* v_recArgPos_2058_; uint8_t v___x_2059_; 
v_a_2057_ = lean_array_uget_borrowed(v_as_2042_, v_i_2044_);
v_recArgPos_2058_ = lean_ctor_get(v_a_2057_, 2);
v___x_2059_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v___x_2041_, v_recArgPos_2058_);
if (v___x_2059_ == 0)
{
lean_object* v___x_2060_; lean_object* v___x_2062_; 
lean_inc(v_a_2057_);
v___x_2060_ = lean_array_push(v_snd_2053_, v_a_2057_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 1, v___x_2060_);
v___x_2062_ = v___x_2055_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_fst_2052_);
lean_ctor_set(v_reuseFailAlloc_2063_, 1, v___x_2060_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
v_a_2047_ = v___x_2062_;
goto v___jp_2046_;
}
}
else
{
lean_object* v___x_2064_; lean_object* v___x_2066_; 
lean_inc(v_a_2057_);
v___x_2064_ = lean_array_push(v_fst_2052_, v_a_2057_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 0, v___x_2064_);
v___x_2066_ = v___x_2055_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2064_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v_snd_2053_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
v_a_2047_ = v___x_2066_;
goto v___jp_2046_;
}
}
}
}
v___jp_2046_:
{
size_t v___x_2048_; size_t v___x_2049_; 
v___x_2048_ = ((size_t)1ULL);
v___x_2049_ = lean_usize_add(v_i_2044_, v___x_2048_);
v_i_2044_ = v___x_2049_;
v_b_2045_ = v_a_2047_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4___boxed(lean_object* v___x_2069_, lean_object* v_as_2070_, lean_object* v_sz_2071_, lean_object* v_i_2072_, lean_object* v_b_2073_){
_start:
{
size_t v_sz_boxed_2074_; size_t v_i_boxed_2075_; lean_object* v_res_2076_; 
v_sz_boxed_2074_ = lean_unbox_usize(v_sz_2071_);
lean_dec(v_sz_2071_);
v_i_boxed_2075_ = lean_unbox_usize(v_i_2072_);
lean_dec(v_i_2072_);
v_res_2076_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4(v___x_2069_, v_as_2070_, v_sz_boxed_2074_, v_i_boxed_2075_, v_b_2073_);
lean_dec_ref(v_as_2070_);
lean_dec_ref(v___x_2069_);
return v_res_2076_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_nonIndicesFirst___closed__0(void){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2077_ = lean_box(0);
v___x_2078_ = lean_unsigned_to_nat(16u);
v___x_2079_ = lean_mk_array(v___x_2078_, v___x_2077_);
return v___x_2079_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_nonIndicesFirst___closed__1(void){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v_indicesPos_2082_; 
v___x_2080_ = lean_obj_once(&l_Lean_Elab_Structural_nonIndicesFirst___closed__0, &l_Lean_Elab_Structural_nonIndicesFirst___closed__0_once, _init_l_Lean_Elab_Structural_nonIndicesFirst___closed__0);
v___x_2081_ = lean_unsigned_to_nat(0u);
v_indicesPos_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_indicesPos_2082_, 0, v___x_2081_);
lean_ctor_set(v_indicesPos_2082_, 1, v___x_2080_);
return v_indicesPos_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_nonIndicesFirst(lean_object* v_recArgInfos_2085_){
_start:
{
lean_object* v_indicesPos_2086_; size_t v_sz_2087_; size_t v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v_fst_2092_; lean_object* v_snd_2093_; lean_object* v___x_2094_; 
v_indicesPos_2086_ = lean_obj_once(&l_Lean_Elab_Structural_nonIndicesFirst___closed__1, &l_Lean_Elab_Structural_nonIndicesFirst___closed__1_once, _init_l_Lean_Elab_Structural_nonIndicesFirst___closed__1);
v_sz_2087_ = lean_array_size(v_recArgInfos_2085_);
v___x_2088_ = ((size_t)0ULL);
v___x_2089_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__2(v_recArgInfos_2085_, v_sz_2087_, v___x_2088_, v_indicesPos_2086_);
v___x_2090_ = ((lean_object*)(l_Lean_Elab_Structural_nonIndicesFirst___closed__2));
v___x_2091_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_nonIndicesFirst_spec__4(v___x_2089_, v_recArgInfos_2085_, v_sz_2087_, v___x_2088_, v___x_2090_);
lean_dec_ref(v___x_2089_);
v_fst_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_fst_2092_);
v_snd_2093_ = lean_ctor_get(v___x_2091_, 1);
lean_inc(v_snd_2093_);
lean_dec_ref(v___x_2091_);
v___x_2094_ = l_Array_append___redArg(v_snd_2093_, v_fst_2092_);
lean_dec(v_fst_2092_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_nonIndicesFirst___boxed(lean_object* v_recArgInfos_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l_Lean_Elab_Structural_nonIndicesFirst(v_recArgInfos_2095_);
lean_dec_ref(v_recArgInfos_2095_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0(lean_object* v_00_u03b2_2097_, lean_object* v_m_2098_, lean_object* v_a_2099_, lean_object* v_b_2100_){
_start:
{
lean_object* v___x_2101_; 
v___x_2101_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0___redArg(v_m_2098_, v_a_2099_, v_b_2100_);
return v___x_2101_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3(lean_object* v_00_u03b2_2102_, lean_object* v_m_2103_, lean_object* v_a_2104_){
_start:
{
uint8_t v___x_2105_; 
v___x_2105_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___redArg(v_m_2103_, v_a_2104_);
return v___x_2105_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3___boxed(lean_object* v_00_u03b2_2106_, lean_object* v_m_2107_, lean_object* v_a_2108_){
_start:
{
uint8_t v_res_2109_; lean_object* v_r_2110_; 
v_res_2109_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Elab_Structural_nonIndicesFirst_spec__3(v_00_u03b2_2106_, v_m_2107_, v_a_2108_);
lean_dec(v_a_2108_);
lean_dec_ref(v_m_2107_);
v_r_2110_ = lean_box(v_res_2109_);
return v_r_2110_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0(lean_object* v_00_u03b2_2111_, lean_object* v_a_2112_, lean_object* v_x_2113_){
_start:
{
uint8_t v___x_2114_; 
v___x_2114_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___redArg(v_a_2112_, v_x_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2115_, lean_object* v_a_2116_, lean_object* v_x_2117_){
_start:
{
uint8_t v_res_2118_; lean_object* v_r_2119_; 
v_res_2118_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__0(v_00_u03b2_2115_, v_a_2116_, v_x_2117_);
lean_dec(v_x_2117_);
lean_dec(v_a_2116_);
v_r_2119_ = lean_box(v_res_2118_);
return v_r_2119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1(lean_object* v_00_u03b2_2120_, lean_object* v_data_2121_){
_start:
{
lean_object* v___x_2122_; 
v___x_2122_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1___redArg(v_data_2121_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2123_, lean_object* v_i_2124_, lean_object* v_source_2125_, lean_object* v_target_2126_){
_start:
{
lean_object* v___x_2127_; 
v___x_2127_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2___redArg(v_i_2124_, v_source_2125_, v_target_2126_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7(lean_object* v_00_u03b2_2128_, lean_object* v_x_2129_, lean_object* v_x_2130_){
_start:
{
lean_object* v___x_2131_; 
v___x_2131_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Structural_nonIndicesFirst_spec__0_spec__1_spec__2_spec__7___redArg(v_x_2129_, v_x_2130_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0(lean_object* v___y_2132_, lean_object* v_a_2133_, lean_object* v_toPure_2134_, uint8_t v_____do__lift_2135_){
_start:
{
if (v_____do__lift_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2136_ = lean_array_push(v___y_2132_, v_a_2133_);
v___x_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
v___x_2138_ = lean_apply_2(v_toPure_2134_, lean_box(0), v___x_2137_);
return v___x_2138_;
}
else
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
lean_dec(v_a_2133_);
v___x_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2139_, 0, v___y_2132_);
v___x_2140_ = lean_apply_2(v_toPure_2134_, lean_box(0), v___x_2139_);
return v___x_2140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0___boxed(lean_object* v___y_2141_, lean_object* v_a_2142_, lean_object* v_toPure_2143_, lean_object* v_____do__lift_2144_){
_start:
{
uint8_t v_____do__lift_159__boxed_2145_; lean_object* v_res_2146_; 
v_____do__lift_159__boxed_2145_ = lean_unbox(v_____do__lift_2144_);
v_res_2146_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0(v___y_2141_, v_a_2142_, v_toPure_2143_, v_____do__lift_159__boxed_2145_);
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__1(lean_object* v_eq_2147_, lean_object* v_a_2148_, lean_object* v_x_2149_){
_start:
{
lean_object* v___x_2150_; 
v___x_2150_ = lean_apply_2(v_eq_2147_, v_x_2149_, v_a_2148_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2(lean_object* v_toPure_2151_, lean_object* v___x_2152_, lean_object* v_toBind_2153_, lean_object* v_eq_2154_, lean_object* v_inst_2155_, lean_object* v_a_2156_, lean_object* v_x_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v___f_2159_; lean_object* v___x_2160_; uint8_t v___x_2161_; 
lean_inc(v_toPure_2151_);
lean_inc(v_a_2156_);
lean_inc_ref(v___y_2158_);
v___f_2159_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2159_, 0, v___y_2158_);
lean_closure_set(v___f_2159_, 1, v_a_2156_);
lean_closure_set(v___f_2159_, 2, v_toPure_2151_);
v___x_2160_ = lean_array_get_size(v___y_2158_);
v___x_2161_ = lean_nat_dec_lt(v___x_2152_, v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
lean_dec_ref(v___y_2158_);
lean_dec(v_a_2156_);
lean_dec_ref(v_inst_2155_);
lean_dec(v_eq_2154_);
v___x_2162_ = lean_box(v___x_2161_);
v___x_2163_ = lean_apply_2(v_toPure_2151_, lean_box(0), v___x_2162_);
v___x_2164_ = lean_apply_4(v_toBind_2153_, lean_box(0), lean_box(0), v___x_2163_, v___f_2159_);
return v___x_2164_;
}
else
{
if (v___x_2161_ == 0)
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
lean_dec_ref(v___y_2158_);
lean_dec(v_a_2156_);
lean_dec_ref(v_inst_2155_);
lean_dec(v_eq_2154_);
v___x_2165_ = lean_box(v___x_2161_);
v___x_2166_ = lean_apply_2(v_toPure_2151_, lean_box(0), v___x_2165_);
v___x_2167_ = lean_apply_4(v_toBind_2153_, lean_box(0), lean_box(0), v___x_2166_, v___f_2159_);
return v___x_2167_;
}
else
{
lean_object* v___f_2168_; size_t v___x_2169_; size_t v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_dec(v_toPure_2151_);
v___f_2168_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2168_, 0, v_eq_2154_);
lean_closure_set(v___f_2168_, 1, v_a_2156_);
v___x_2169_ = ((size_t)0ULL);
v___x_2170_ = lean_usize_of_nat(v___x_2160_);
v___x_2171_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2155_, v___f_2168_, v___y_2158_, v___x_2169_, v___x_2170_);
v___x_2172_ = lean_apply_4(v_toBind_2153_, lean_box(0), lean_box(0), v___x_2171_, v___f_2159_);
return v___x_2172_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2___boxed(lean_object* v_toPure_2173_, lean_object* v___x_2174_, lean_object* v_toBind_2175_, lean_object* v_eq_2176_, lean_object* v_inst_2177_, lean_object* v_a_2178_, lean_object* v_x_2179_, lean_object* v___y_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2(v_toPure_2173_, v___x_2174_, v_toBind_2175_, v_eq_2176_, v_inst_2177_, v_a_2178_, v_x_2179_, v___y_2180_);
lean_dec(v___x_2174_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__3(lean_object* v_toPure_2182_, lean_object* v_____s_2183_){
_start:
{
lean_object* v___x_2184_; 
v___x_2184_ = lean_apply_2(v_toPure_2182_, lean_box(0), v_____s_2183_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg(lean_object* v_inst_2187_, lean_object* v_eq_2188_, lean_object* v_xs_2189_){
_start:
{
lean_object* v_toApplicative_2190_; lean_object* v_toBind_2191_; lean_object* v_toPure_2192_; lean_object* v___x_2193_; lean_object* v_ret_2194_; lean_object* v___f_2195_; lean_object* v___f_2196_; size_t v_sz_2197_; size_t v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_toApplicative_2190_ = lean_ctor_get(v_inst_2187_, 0);
v_toBind_2191_ = lean_ctor_get(v_inst_2187_, 1);
lean_inc_n(v_toBind_2191_, 2);
v_toPure_2192_ = lean_ctor_get(v_toApplicative_2190_, 1);
v___x_2193_ = lean_unsigned_to_nat(0u);
v_ret_2194_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0));
lean_inc_ref(v_inst_2187_);
lean_inc_n(v_toPure_2192_, 2);
v___f_2195_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_2195_, 0, v_toPure_2192_);
lean_closure_set(v___f_2195_, 1, v___x_2193_);
lean_closure_set(v___f_2195_, 2, v_toBind_2191_);
lean_closure_set(v___f_2195_, 3, v_eq_2188_);
lean_closure_set(v___f_2195_, 4, v_inst_2187_);
v___f_2196_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___lam__3), 2, 1);
lean_closure_set(v___f_2196_, 0, v_toPure_2192_);
v_sz_2197_ = lean_array_size(v_xs_2189_);
v___x_2198_ = ((size_t)0ULL);
v___x_2199_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_2187_, v_xs_2189_, v___f_2195_, v_sz_2197_, v___x_2198_, v_ret_2194_);
v___x_2200_ = lean_apply_4(v_toBind_2191_, lean_box(0), lean_box(0), v___x_2199_, v___f_2196_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup(lean_object* v_m_2201_, lean_object* v_00_u03b1_2202_, lean_object* v_inst_2203_, lean_object* v_eq_2204_, lean_object* v_xs_2205_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg(v_inst_2203_, v_eq_2204_, v_xs_2205_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0(size_t v_sz_2207_, size_t v_i_2208_, lean_object* v_bs_2209_){
_start:
{
uint8_t v___x_2210_; 
v___x_2210_ = lean_usize_dec_lt(v_i_2208_, v_sz_2207_);
if (v___x_2210_ == 0)
{
return v_bs_2209_;
}
else
{
lean_object* v_v_2211_; lean_object* v_indGroupInst_2212_; lean_object* v___x_2213_; lean_object* v_bs_x27_2214_; size_t v___x_2215_; size_t v___x_2216_; lean_object* v___x_2217_; 
v_v_2211_ = lean_array_uget_borrowed(v_bs_2209_, v_i_2208_);
v_indGroupInst_2212_ = lean_ctor_get(v_v_2211_, 4);
lean_inc_ref(v_indGroupInst_2212_);
v___x_2213_ = lean_unsigned_to_nat(0u);
v_bs_x27_2214_ = lean_array_uset(v_bs_2209_, v_i_2208_, v___x_2213_);
v___x_2215_ = ((size_t)1ULL);
v___x_2216_ = lean_usize_add(v_i_2208_, v___x_2215_);
v___x_2217_ = lean_array_uset(v_bs_x27_2214_, v_i_2208_, v_indGroupInst_2212_);
v_i_2208_ = v___x_2216_;
v_bs_2209_ = v___x_2217_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0___boxed(lean_object* v_sz_2219_, lean_object* v_i_2220_, lean_object* v_bs_2221_){
_start:
{
size_t v_sz_boxed_2222_; size_t v_i_boxed_2223_; lean_object* v_res_2224_; 
v_sz_boxed_2222_ = lean_unbox_usize(v_sz_2219_);
lean_dec(v_sz_2219_);
v_i_boxed_2223_ = lean_unbox_usize(v_i_2220_);
lean_dec(v_i_2220_);
v_res_2224_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0(v_sz_boxed_2222_, v_i_boxed_2223_, v_bs_2221_);
return v_res_2224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(lean_object* v_eq_2225_, lean_object* v_a_2226_, lean_object* v_as_2227_, size_t v_i_2228_, size_t v_stop_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
uint8_t v___x_2235_; 
v___x_2235_ = lean_usize_dec_eq(v_i_2228_, v_stop_2229_);
if (v___x_2235_ == 0)
{
uint8_t v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2236_ = 1;
v___x_2237_ = lean_array_uget_borrowed(v_as_2227_, v_i_2228_);
lean_inc_ref(v_eq_2225_);
lean_inc(v___y_2233_);
lean_inc_ref(v___y_2232_);
lean_inc(v___y_2231_);
lean_inc_ref(v___y_2230_);
lean_inc(v_a_2226_);
lean_inc(v___x_2237_);
v___x_2238_ = lean_apply_7(v_eq_2225_, v___x_2237_, v_a_2226_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, lean_box(0));
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2251_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2241_ = v___x_2238_;
v_isShared_2242_ = v_isSharedCheck_2251_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2238_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2251_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
uint8_t v___x_2243_; 
v___x_2243_ = lean_unbox(v_a_2239_);
lean_dec(v_a_2239_);
if (v___x_2243_ == 0)
{
size_t v___x_2244_; size_t v___x_2245_; 
lean_del_object(v___x_2241_);
v___x_2244_ = ((size_t)1ULL);
v___x_2245_ = lean_usize_add(v_i_2228_, v___x_2244_);
v_i_2228_ = v___x_2245_;
goto _start;
}
else
{
lean_object* v___x_2247_; lean_object* v___x_2249_; 
lean_dec(v_a_2226_);
lean_dec_ref(v_eq_2225_);
v___x_2247_ = lean_box(v___x_2236_);
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 0, v___x_2247_);
v___x_2249_ = v___x_2241_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v___x_2247_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
}
else
{
lean_dec(v_a_2226_);
lean_dec_ref(v_eq_2225_);
return v___x_2238_;
}
}
else
{
uint8_t v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
lean_dec(v_a_2226_);
lean_dec_ref(v_eq_2225_);
v___x_2252_ = 0;
v___x_2253_ = lean_box(v___x_2252_);
v___x_2254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2253_);
return v___x_2254_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg___boxed(lean_object* v_eq_2255_, lean_object* v_a_2256_, lean_object* v_as_2257_, lean_object* v_i_2258_, lean_object* v_stop_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
size_t v_i_boxed_2265_; size_t v_stop_boxed_2266_; lean_object* v_res_2267_; 
v_i_boxed_2265_ = lean_unbox_usize(v_i_2258_);
lean_dec(v_i_2258_);
v_stop_boxed_2266_ = lean_unbox_usize(v_stop_2259_);
lean_dec(v_stop_2259_);
v_res_2267_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(v_eq_2255_, v_a_2256_, v_as_2257_, v_i_boxed_2265_, v_stop_boxed_2266_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec_ref(v_as_2257_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(lean_object* v_b_2268_, lean_object* v_a_2269_, uint8_t v_____do__lift_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_){
_start:
{
if (v_____do__lift_2270_ == 0)
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2276_ = lean_array_push(v_b_2268_, v_a_2269_);
v___x_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
v___x_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
return v___x_2278_;
}
else
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_dec(v_a_2269_);
v___x_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2279_, 0, v_b_2268_);
v___x_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
return v___x_2280_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_b_2281_, lean_object* v_a_2282_, lean_object* v_____do__lift_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
uint8_t v_____do__lift_1276__boxed_2289_; lean_object* v_res_2290_; 
v_____do__lift_1276__boxed_2289_ = lean_unbox(v_____do__lift_2283_);
v_res_2290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(v_b_2281_, v_a_2282_, v_____do__lift_1276__boxed_2289_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(lean_object* v_eq_2291_, lean_object* v_as_2292_, size_t v_sz_2293_, size_t v_i_2294_, lean_object* v_b_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v___y_2302_; uint8_t v___x_2324_; 
v___x_2324_ = lean_usize_dec_lt(v_i_2294_, v_sz_2293_);
if (v___x_2324_ == 0)
{
lean_object* v___x_2325_; 
lean_dec_ref(v_eq_2291_);
v___x_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2325_, 0, v_b_2295_);
return v___x_2325_;
}
else
{
lean_object* v___x_2326_; lean_object* v_a_2327_; lean_object* v___x_2328_; uint8_t v___x_2329_; 
v___x_2326_ = lean_unsigned_to_nat(0u);
v_a_2327_ = lean_array_uget_borrowed(v_as_2292_, v_i_2294_);
v___x_2328_ = lean_array_get_size(v_b_2295_);
v___x_2329_ = lean_nat_dec_lt(v___x_2326_, v___x_2328_);
if (v___x_2329_ == 0)
{
lean_object* v___x_2330_; 
lean_inc(v_a_2327_);
v___x_2330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(v_b_2295_, v_a_2327_, v___x_2329_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
v___y_2302_ = v___x_2330_;
goto v___jp_2301_;
}
else
{
size_t v___x_2331_; size_t v___x_2332_; lean_object* v___x_2333_; 
v___x_2331_ = ((size_t)0ULL);
v___x_2332_ = lean_usize_of_nat(v___x_2328_);
lean_inc(v_a_2327_);
lean_inc_ref(v_eq_2291_);
v___x_2333_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(v_eq_2291_, v_a_2327_, v_b_2295_, v___x_2331_, v___x_2332_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; uint8_t v___x_2335_; lean_object* v___x_2336_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2333_, 1);
v___x_2335_ = lean_unbox(v_a_2334_);
lean_dec(v_a_2334_);
lean_inc(v_a_2327_);
v___x_2336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___lam__0(v_b_2295_, v_a_2327_, v___x_2335_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
v___y_2302_ = v___x_2336_;
goto v___jp_2301_;
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec_ref(v_b_2295_);
lean_dec_ref(v_eq_2291_);
v_a_2337_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2333_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2333_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
}
v___jp_2301_:
{
if (lean_obj_tag(v___y_2302_) == 0)
{
lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2315_; 
v_a_2303_ = lean_ctor_get(v___y_2302_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___y_2302_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2305_ = v___y_2302_;
v_isShared_2306_ = v_isSharedCheck_2315_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___y_2302_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2315_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
if (lean_obj_tag(v_a_2303_) == 0)
{
lean_object* v_a_2307_; lean_object* v___x_2309_; 
lean_dec_ref(v_eq_2291_);
v_a_2307_ = lean_ctor_get(v_a_2303_, 0);
lean_inc(v_a_2307_);
lean_dec_ref_known(v_a_2303_, 1);
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 0, v_a_2307_);
v___x_2309_ = v___x_2305_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2307_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
else
{
lean_object* v_a_2311_; size_t v___x_2312_; size_t v___x_2313_; 
lean_del_object(v___x_2305_);
v_a_2311_ = lean_ctor_get(v_a_2303_, 0);
lean_inc(v_a_2311_);
lean_dec_ref_known(v_a_2303_, 1);
v___x_2312_ = ((size_t)1ULL);
v___x_2313_ = lean_usize_add(v_i_2294_, v___x_2312_);
v_i_2294_ = v___x_2313_;
v_b_2295_ = v_a_2311_;
goto _start;
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec_ref(v_eq_2291_);
v_a_2316_ = lean_ctor_get(v___y_2302_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___y_2302_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___y_2302_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___y_2302_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg___boxed(lean_object* v_eq_2345_, lean_object* v_as_2346_, lean_object* v_sz_2347_, lean_object* v_i_2348_, lean_object* v_b_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_){
_start:
{
size_t v_sz_boxed_2355_; size_t v_i_boxed_2356_; lean_object* v_res_2357_; 
v_sz_boxed_2355_ = lean_unbox_usize(v_sz_2347_);
lean_dec(v_sz_2347_);
v_i_boxed_2356_ = lean_unbox_usize(v_i_2348_);
lean_dec(v_i_2348_);
v_res_2357_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(v_eq_2345_, v_as_2346_, v_sz_boxed_2355_, v_i_boxed_2356_, v_b_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec_ref(v_as_2346_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(lean_object* v_eq_2358_, lean_object* v_xs_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v_ret_2365_; size_t v_sz_2366_; size_t v___x_2367_; lean_object* v___x_2368_; 
v_ret_2365_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0));
v_sz_2366_ = lean_array_size(v_xs_2359_);
v___x_2367_ = ((size_t)0ULL);
v___x_2368_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(v_eq_2358_, v_xs_2359_, v_sz_2366_, v___x_2367_, v_ret_2365_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg___boxed(lean_object* v_eq_2369_, lean_object* v_xs_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(v_eq_2369_, v_xs_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
lean_dec_ref(v_xs_2370_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inductiveGroups(lean_object* v_recArgInfos_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_){
_start:
{
lean_object* v___x_2384_; size_t v_sz_2385_; size_t v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2384_ = ((lean_object*)(l_Lean_Elab_Structural_inductiveGroups___closed__0));
v_sz_2385_ = lean_array_size(v_recArgInfos_2378_);
v___x_2386_ = ((size_t)0ULL);
v___x_2387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_inductiveGroups_spec__0(v_sz_2385_, v___x_2386_, v_recArgInfos_2378_);
v___x_2388_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(v___x_2384_, v___x_2387_, v_a_2379_, v_a_2380_, v_a_2381_, v_a_2382_);
lean_dec_ref(v___x_2387_);
return v___x_2388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inductiveGroups___boxed(lean_object* v_recArgInfos_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Lean_Elab_Structural_inductiveGroups(v_recArgInfos_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
lean_dec(v_a_2391_);
lean_dec_ref(v_a_2390_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1(lean_object* v_00_u03b1_2396_, lean_object* v_eq_2397_, lean_object* v_xs_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___redArg(v_eq_2397_, v_xs_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1___boxed(lean_object* v_00_u03b1_2405_, lean_object* v_eq_2406_, lean_object* v_xs_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1(v_00_u03b1_2405_, v_eq_2406_, v_xs_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
lean_dec(v___y_2411_);
lean_dec_ref(v___y_2410_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec_ref(v_xs_2407_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1(lean_object* v_00_u03b1_2414_, lean_object* v_eq_2415_, lean_object* v_a_2416_, lean_object* v_as_2417_, size_t v_i_2418_, size_t v_stop_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v___x_2425_; 
v___x_2425_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___redArg(v_eq_2415_, v_a_2416_, v_as_2417_, v_i_2418_, v_stop_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2426_, lean_object* v_eq_2427_, lean_object* v_a_2428_, lean_object* v_as_2429_, lean_object* v_i_2430_, lean_object* v_stop_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
size_t v_i_boxed_2437_; size_t v_stop_boxed_2438_; lean_object* v_res_2439_; 
v_i_boxed_2437_ = lean_unbox_usize(v_i_2430_);
lean_dec(v_i_2430_);
v_stop_boxed_2438_ = lean_unbox_usize(v_stop_2431_);
lean_dec(v_stop_2431_);
v_res_2439_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__1(v_00_u03b1_2426_, v_eq_2427_, v_a_2428_, v_as_2429_, v_i_boxed_2437_, v_stop_boxed_2438_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec_ref(v_as_2429_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2(lean_object* v_00_u03b1_2440_, lean_object* v_eq_2441_, lean_object* v_as_2442_, size_t v_sz_2443_, size_t v_i_2444_, lean_object* v_b_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___redArg(v_eq_2441_, v_as_2442_, v_sz_2443_, v_i_2444_, v_b_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2452_, lean_object* v_eq_2453_, lean_object* v_as_2454_, lean_object* v_sz_2455_, lean_object* v_i_2456_, lean_object* v_b_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
size_t v_sz_boxed_2463_; size_t v_i_boxed_2464_; lean_object* v_res_2465_; 
v_sz_boxed_2463_ = lean_unbox_usize(v_sz_2455_);
lean_dec(v_sz_2455_);
v_i_boxed_2464_ = lean_unbox_usize(v_i_2456_);
lean_dec(v_i_2456_);
v_res_2465_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___at___00Lean_Elab_Structural_inductiveGroups_spec__1_spec__2(v_00_u03b1_2452_, v_eq_2453_, v_as_2454_, v_sz_boxed_2463_, v_i_boxed_2464_, v_b_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec_ref(v_as_2454_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(lean_object* v_e_2466_, lean_object* v___y_2467_){
_start:
{
uint8_t v___x_2469_; 
v___x_2469_ = l_Lean_Expr_hasMVar(v_e_2466_);
if (v___x_2469_ == 0)
{
lean_object* v___x_2470_; 
v___x_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2470_, 0, v_e_2466_);
return v___x_2470_;
}
else
{
lean_object* v___x_2471_; lean_object* v_mctx_2472_; lean_object* v___x_2473_; lean_object* v_fst_2474_; lean_object* v_snd_2475_; lean_object* v___x_2476_; lean_object* v_cache_2477_; lean_object* v_zetaDeltaFVarIds_2478_; lean_object* v_postponed_2479_; lean_object* v_diag_2480_; lean_object* v_rewriteFires_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2490_; 
v___x_2471_ = lean_st_ref_get(v___y_2467_);
v_mctx_2472_ = lean_ctor_get(v___x_2471_, 0);
lean_inc_ref(v_mctx_2472_);
lean_dec(v___x_2471_);
v___x_2473_ = l_Lean_instantiateMVarsCore(v_mctx_2472_, v_e_2466_);
v_fst_2474_ = lean_ctor_get(v___x_2473_, 0);
lean_inc(v_fst_2474_);
v_snd_2475_ = lean_ctor_get(v___x_2473_, 1);
lean_inc(v_snd_2475_);
lean_dec_ref(v___x_2473_);
v___x_2476_ = lean_st_ref_take(v___y_2467_);
v_cache_2477_ = lean_ctor_get(v___x_2476_, 1);
v_zetaDeltaFVarIds_2478_ = lean_ctor_get(v___x_2476_, 2);
v_postponed_2479_ = lean_ctor_get(v___x_2476_, 3);
v_diag_2480_ = lean_ctor_get(v___x_2476_, 4);
v_rewriteFires_2481_ = lean_ctor_get(v___x_2476_, 5);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2490_ == 0)
{
lean_object* v_unused_2491_; 
v_unused_2491_ = lean_ctor_get(v___x_2476_, 0);
lean_dec(v_unused_2491_);
v___x_2483_ = v___x_2476_;
v_isShared_2484_ = v_isSharedCheck_2490_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_rewriteFires_2481_);
lean_inc(v_diag_2480_);
lean_inc(v_postponed_2479_);
lean_inc(v_zetaDeltaFVarIds_2478_);
lean_inc(v_cache_2477_);
lean_dec(v___x_2476_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2490_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
lean_ctor_set(v___x_2483_, 0, v_snd_2475_);
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_snd_2475_);
lean_ctor_set(v_reuseFailAlloc_2489_, 1, v_cache_2477_);
lean_ctor_set(v_reuseFailAlloc_2489_, 2, v_zetaDeltaFVarIds_2478_);
lean_ctor_set(v_reuseFailAlloc_2489_, 3, v_postponed_2479_);
lean_ctor_set(v_reuseFailAlloc_2489_, 4, v_diag_2480_);
lean_ctor_set(v_reuseFailAlloc_2489_, 5, v_rewriteFires_2481_);
v___x_2486_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = lean_st_ref_put(v___y_2467_, v___x_2486_);
v___x_2488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2488_, 0, v_fst_2474_);
return v___x_2488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg___boxed(lean_object* v_e_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(v_e_2492_, v___y_2493_);
lean_dec(v___y_2493_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0(lean_object* v_e_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_){
_start:
{
lean_object* v___x_2502_; 
v___x_2502_ = l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(v_e_2496_, v___y_2498_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___boxed(lean_object* v_e_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v_res_2509_; 
v_res_2509_ = l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0(v_e_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
return v_res_2509_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2511_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__2));
v___x_2512_ = lean_unsigned_to_nat(109u);
v___x_2513_ = lean_unsigned_to_nat(216u);
v___x_2514_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__0));
v___x_2515_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_getRecArgInfo_spec__5___closed__0));
v___x_2516_ = l_mkPanicMessageWithDecl(v___x_2515_, v___x_2514_, v___x_2513_, v___x_2512_, v___x_2511_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(lean_object* v___x_2517_, size_t v_sz_2518_, size_t v_i_2519_, lean_object* v_bs_2520_){
_start:
{
uint8_t v___x_2521_; 
v___x_2521_ = lean_usize_dec_lt(v_i_2519_, v_sz_2518_);
if (v___x_2521_ == 0)
{
return v_bs_2520_;
}
else
{
lean_object* v_v_2522_; lean_object* v___x_2523_; lean_object* v_bs_x27_2524_; lean_object* v___y_2526_; lean_object* v___x_2531_; 
v_v_2522_ = lean_array_uget(v_bs_2520_, v_i_2519_);
v___x_2523_ = lean_unsigned_to_nat(0u);
v_bs_x27_2524_ = lean_array_uset(v_bs_2520_, v_i_2519_, v___x_2523_);
v___x_2531_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_getIndexMinPos_spec__0(v___x_2517_, v_v_2522_);
lean_dec(v_v_2522_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___closed__1);
v___x_2533_ = l_panic___at___00Lean_Elab_Structural_getRecArgInfo_spec__1(v___x_2532_);
v___y_2526_ = v___x_2533_;
goto v___jp_2525_;
}
else
{
lean_object* v_val_2534_; 
v_val_2534_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_val_2534_);
lean_dec_ref_known(v___x_2531_, 1);
v___y_2526_ = v_val_2534_;
goto v___jp_2525_;
}
v___jp_2525_:
{
size_t v___x_2527_; size_t v___x_2528_; lean_object* v___x_2529_; 
v___x_2527_ = ((size_t)1ULL);
v___x_2528_ = lean_usize_add(v_i_2519_, v___x_2527_);
v___x_2529_ = lean_array_uset(v_bs_x27_2524_, v_i_2519_, v___y_2526_);
v_i_2519_ = v___x_2528_;
v_bs_2520_ = v___x_2529_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2___boxed(lean_object* v___x_2535_, lean_object* v_sz_2536_, lean_object* v_i_2537_, lean_object* v_bs_2538_){
_start:
{
size_t v_sz_boxed_2539_; size_t v_i_boxed_2540_; lean_object* v_res_2541_; 
v_sz_boxed_2539_ = lean_unbox_usize(v_sz_2536_);
lean_dec(v_sz_2536_);
v_i_boxed_2540_ = lean_unbox_usize(v_i_2537_);
lean_dec(v_i_2537_);
v_res_2541_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(v___x_2535_, v_sz_boxed_2539_, v_i_boxed_2540_, v_bs_2538_);
lean_dec_ref(v___x_2535_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1(size_t v_sz_2542_, size_t v_i_2543_, lean_object* v_bs_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
uint8_t v___x_2550_; 
v___x_2550_ = lean_usize_dec_lt(v_i_2543_, v_sz_2542_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; 
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v_bs_2544_);
return v___x_2551_;
}
else
{
lean_object* v_v_2552_; lean_object* v___x_2553_; lean_object* v_bs_x27_2554_; lean_object* v___x_2555_; 
v_v_2552_ = lean_array_uget(v_bs_2544_, v_i_2543_);
v___x_2553_ = lean_unsigned_to_nat(0u);
v_bs_x27_2554_ = lean_array_uset(v_bs_2544_, v_i_2543_, v___x_2553_);
v___x_2555_ = l_Lean_instantiateMVars___at___00Lean_Elab_Structural_argsInGroup_spec__0___redArg(v_v_2552_, v___y_2546_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v_a_2556_; size_t v___x_2557_; size_t v___x_2558_; lean_object* v___x_2559_; 
v_a_2556_ = lean_ctor_get(v___x_2555_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2555_, 1);
v___x_2557_ = ((size_t)1ULL);
v___x_2558_ = lean_usize_add(v_i_2543_, v___x_2557_);
v___x_2559_ = lean_array_uset(v_bs_x27_2554_, v_i_2543_, v_a_2556_);
v_i_2543_ = v___x_2558_;
v_bs_2544_ = v___x_2559_;
goto _start;
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
lean_dec_ref(v_bs_x27_2554_);
v_a_2561_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2555_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2555_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1___boxed(lean_object* v_sz_2569_, lean_object* v_i_2570_, lean_object* v_bs_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
size_t v_sz_boxed_2577_; size_t v_i_boxed_2578_; lean_object* v_res_2579_; 
v_sz_boxed_2577_ = lean_unbox_usize(v_sz_2569_);
lean_dec(v_sz_2569_);
v_i_boxed_2578_ = lean_unbox_usize(v_i_2570_);
lean_dec(v_i_2570_);
v_res_2579_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1(v_sz_boxed_2577_, v_i_boxed_2578_, v_bs_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
return v_res_2579_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(uint8_t v_a_2580_, lean_object* v___x_2581_, lean_object* v_as_2582_, size_t v_i_2583_, size_t v_stop_2584_){
_start:
{
uint8_t v___x_2585_; 
v___x_2585_ = lean_usize_dec_eq(v_i_2583_, v_stop_2584_);
if (v___x_2585_ == 0)
{
uint8_t v___x_2586_; uint8_t v___y_2588_; lean_object* v___x_2592_; uint8_t v___x_2593_; 
v___x_2586_ = 1;
v___x_2592_ = lean_array_uget_borrowed(v_as_2582_, v_i_2583_);
v___x_2593_ = l_Lean_Expr_isFVar(v___x_2592_);
if (v___x_2593_ == 0)
{
v___y_2588_ = v_a_2580_;
goto v___jp_2587_;
}
else
{
lean_object* v___x_2594_; uint8_t v___x_2595_; 
v___x_2594_ = lean_unsigned_to_nat(0u);
v___x_2595_ = lean_nat_dec_eq(v___x_2581_, v___x_2594_);
v___y_2588_ = v___x_2595_;
goto v___jp_2587_;
}
v___jp_2587_:
{
if (v___y_2588_ == 0)
{
size_t v___x_2589_; size_t v___x_2590_; 
v___x_2589_ = ((size_t)1ULL);
v___x_2590_ = lean_usize_add(v_i_2583_, v___x_2589_);
v_i_2583_ = v___x_2590_;
goto _start;
}
else
{
return v___x_2586_;
}
}
}
else
{
uint8_t v___x_2596_; 
v___x_2596_ = 0;
return v___x_2596_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3___boxed(lean_object* v_a_2597_, lean_object* v___x_2598_, lean_object* v_as_2599_, lean_object* v_i_2600_, lean_object* v_stop_2601_){
_start:
{
uint8_t v_a_7793__boxed_2602_; size_t v_i_boxed_2603_; size_t v_stop_boxed_2604_; uint8_t v_res_2605_; lean_object* v_r_2606_; 
v_a_7793__boxed_2602_ = lean_unbox(v_a_2597_);
v_i_boxed_2603_ = lean_unbox_usize(v_i_2600_);
lean_dec(v_i_2600_);
v_stop_boxed_2604_ = lean_unbox_usize(v_stop_2601_);
lean_dec(v_stop_2601_);
v_res_2605_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(v_a_7793__boxed_2602_, v___x_2598_, v_as_2599_, v_i_boxed_2603_, v_stop_boxed_2604_);
lean_dec_ref(v_as_2599_);
lean_dec(v___x_2598_);
v_r_2606_ = lean_box(v_res_2605_);
return v_r_2606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4(lean_object* v___x_2607_, lean_object* v_ys_2608_, lean_object* v___x_2609_, lean_object* v_recArgInfo_2610_, lean_object* v___x_2611_, lean_object* v___x_2612_, lean_object* v_group_2613_, lean_object* v___x_2614_, lean_object* v_as_2615_, size_t v_sz_2616_, size_t v_i_2617_, lean_object* v_b_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v_a_2625_; uint8_t v___x_2629_; 
v___x_2629_ = lean_usize_dec_lt(v_i_2617_, v_sz_2616_);
if (v___x_2629_ == 0)
{
lean_object* v___x_2630_; 
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v_b_2618_);
return v___x_2630_;
}
else
{
lean_object* v_snd_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2787_; 
v_snd_2631_ = lean_ctor_get(v_b_2618_, 1);
v_isSharedCheck_2787_ = !lean_is_exclusive(v_b_2618_);
if (v_isSharedCheck_2787_ == 0)
{
lean_object* v_unused_2788_; 
v_unused_2788_ = lean_ctor_get(v_b_2618_, 0);
lean_dec(v_unused_2788_);
v___x_2633_ = v_b_2618_;
v_isShared_2634_ = v_isSharedCheck_2787_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_snd_2631_);
lean_dec(v_b_2618_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2787_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v_next_2635_; lean_object* v_upperBound_2636_; lean_object* v___x_2637_; 
v_next_2635_ = lean_ctor_get(v_snd_2631_, 0);
lean_inc(v_next_2635_);
v_upperBound_2636_ = lean_ctor_get(v_snd_2631_, 1);
v___x_2637_ = lean_box(0);
if (lean_obj_tag(v_next_2635_) == 0)
{
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
goto v___jp_2638_;
}
else
{
lean_object* v_val_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2786_; 
v_val_2643_ = lean_ctor_get(v_next_2635_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_next_2635_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2645_ = v_next_2635_;
v_isShared_2646_ = v_isSharedCheck_2786_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_val_2643_);
lean_dec(v_next_2635_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2786_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
uint8_t v___x_2647_; 
v___x_2647_ = lean_nat_dec_lt(v_val_2643_, v_upperBound_2636_);
if (v___x_2647_ == 0)
{
lean_del_object(v___x_2645_);
lean_dec(v_val_2643_);
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
goto v___jp_2638_;
}
else
{
lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2783_; 
lean_inc(v_upperBound_2636_);
lean_del_object(v___x_2633_);
v_isSharedCheck_2783_ = !lean_is_exclusive(v_snd_2631_);
if (v_isSharedCheck_2783_ == 0)
{
lean_object* v_unused_2784_; lean_object* v_unused_2785_; 
v_unused_2784_ = lean_ctor_get(v_snd_2631_, 1);
lean_dec(v_unused_2784_);
v_unused_2785_ = lean_ctor_get(v_snd_2631_, 0);
lean_dec(v_unused_2785_);
v___x_2649_ = v_snd_2631_;
v_isShared_2650_ = v_isSharedCheck_2783_;
goto v_resetjp_2648_;
}
else
{
lean_dec(v_snd_2631_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2783_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v_a_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2655_; 
v_a_2651_ = lean_array_uget_borrowed(v_as_2615_, v_i_2617_);
v___x_2652_ = lean_unsigned_to_nat(1u);
v___x_2653_ = lean_nat_add(v_val_2643_, v___x_2652_);
if (v_isShared_2646_ == 0)
{
lean_ctor_set(v___x_2645_, 0, v___x_2653_);
v___x_2655_ = v___x_2645_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v___x_2653_);
v___x_2655_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
lean_object* v___x_2657_; 
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 0, v___x_2655_);
v___x_2657_ = v___x_2649_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v___x_2655_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v_upperBound_2636_);
v___x_2657_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
lean_object* v___x_2658_; 
lean_inc(v___y_2622_);
lean_inc_ref(v___y_2621_);
lean_inc(v___y_2620_);
lean_inc_ref(v___y_2619_);
lean_inc_ref(v___x_2607_);
v___x_2658_ = lean_infer_type(v___x_2607_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2660_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = l_Lean_Meta_whnfD(v_a_2659_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2660_) == 0)
{
lean_object* v_a_2661_; uint8_t v___x_2662_; lean_object* v___x_2663_; 
v_a_2661_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2661_);
lean_dec_ref_known(v___x_2660_, 1);
v___x_2662_ = 0;
lean_inc(v_a_2651_);
v___x_2663_ = l_Lean_Meta_forallMetaTelescope(v_a_2651_, v___x_2662_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v_snd_2665_; lean_object* v_fst_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2756_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
v_snd_2665_ = lean_ctor_get(v_a_2664_, 1);
v_fst_2666_ = lean_ctor_get(v_a_2664_, 0);
v_isSharedCheck_2756_ = !lean_is_exclusive(v_a_2664_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2668_ = v_a_2664_;
v_isShared_2669_ = v_isSharedCheck_2756_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_snd_2665_);
lean_inc(v_fst_2666_);
lean_dec(v_a_2664_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2756_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v_snd_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2754_; 
v_snd_2670_ = lean_ctor_get(v_snd_2665_, 1);
v_isSharedCheck_2754_ = !lean_is_exclusive(v_snd_2665_);
if (v_isSharedCheck_2754_ == 0)
{
lean_object* v_unused_2755_; 
v_unused_2755_ = lean_ctor_get(v_snd_2665_, 0);
lean_dec(v_unused_2755_);
v___x_2672_ = v_snd_2665_;
v_isShared_2673_ = v_isSharedCheck_2754_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_snd_2670_);
lean_dec(v_snd_2665_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2754_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Lean_Meta_isExprDefEqGuarded(v_snd_2670_, v_a_2661_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; uint8_t v___x_2676_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
lean_inc(v_a_2675_);
lean_dec_ref_known(v___x_2674_, 1);
v___x_2676_ = lean_unbox(v_a_2675_);
if (v___x_2676_ == 0)
{
lean_object* v___x_2678_; 
lean_dec(v_a_2675_);
lean_del_object(v___x_2668_);
lean_dec(v_fst_2666_);
lean_dec(v_val_2643_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 1, v___x_2657_);
lean_ctor_set(v___x_2672_, 0, v___x_2637_);
v___x_2678_ = v___x_2672_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v___x_2637_);
lean_ctor_set(v_reuseFailAlloc_2679_, 1, v___x_2657_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
v_a_2625_ = v___x_2678_;
goto v___jp_2624_;
}
}
else
{
size_t v_sz_2680_; size_t v___x_2681_; lean_object* v___x_2682_; 
v_sz_2680_ = lean_array_size(v_fst_2666_);
v___x_2681_ = ((size_t)0ULL);
v___x_2682_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1(v_sz_2680_, v___x_2681_, v_fst_2666_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2729_; lean_object* v___x_2730_; uint8_t v___x_2731_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2729_ = lean_unsigned_to_nat(0u);
v___x_2730_ = lean_array_get_size(v_a_2683_);
v___x_2731_ = lean_nat_dec_lt(v___x_2729_, v___x_2730_);
if (v___x_2731_ == 0)
{
lean_dec(v_a_2675_);
lean_del_object(v___x_2668_);
goto v___jp_2684_;
}
else
{
if (v___x_2731_ == 0)
{
lean_dec(v_a_2675_);
lean_del_object(v___x_2668_);
goto v___jp_2684_;
}
else
{
size_t v___x_2732_; uint8_t v___x_2733_; uint8_t v___x_2734_; 
v___x_2732_ = lean_usize_of_nat(v___x_2730_);
v___x_2733_ = lean_unbox(v_a_2675_);
lean_dec(v_a_2675_);
v___x_2734_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(v___x_2733_, v___x_2614_, v_a_2683_, v___x_2681_, v___x_2732_);
if (v___x_2734_ == 0)
{
lean_del_object(v___x_2668_);
goto v___jp_2684_;
}
else
{
lean_object* v___x_2736_; 
lean_dec(v_a_2683_);
lean_del_object(v___x_2672_);
lean_dec(v_val_2643_);
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 1, v___x_2657_);
lean_ctor_set(v___x_2668_, 0, v___x_2637_);
v___x_2736_ = v___x_2668_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v___x_2637_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v___x_2657_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
v_a_2625_ = v___x_2736_;
goto v___jp_2624_;
}
}
}
}
v___jp_2684_:
{
uint8_t v___x_2685_; 
v___x_2685_ = l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(v_a_2683_);
if (v___x_2685_ == 0)
{
lean_object* v___x_2687_; 
lean_dec(v_a_2683_);
lean_dec(v_val_2643_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 1, v___x_2657_);
lean_ctor_set(v___x_2672_, 0, v___x_2637_);
v___x_2687_ = v___x_2672_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2637_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v___x_2657_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
v_a_2625_ = v___x_2687_;
goto v___jp_2624_;
}
}
else
{
lean_object* v___x_2689_; 
v___x_2689_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(v_ys_2608_, v_a_2683_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2720_; 
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2692_ = v___x_2689_;
v_isShared_2693_ = v_isSharedCheck_2720_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2689_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2720_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
if (lean_obj_tag(v_a_2690_) == 1)
{
lean_object* v___x_2695_; 
lean_dec_ref_known(v_a_2690_, 1);
lean_del_object(v___x_2692_);
lean_dec(v_a_2683_);
lean_dec(v_val_2643_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 1, v___x_2657_);
lean_ctor_set(v___x_2672_, 0, v___x_2637_);
v___x_2695_ = v___x_2672_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2637_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v___x_2657_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
v_a_2625_ = v___x_2695_;
goto v___jp_2624_;
}
}
else
{
lean_object* v_fnName_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2714_; 
lean_dec(v_a_2690_);
lean_dec_ref(v___x_2607_);
v_fnName_2697_ = lean_ctor_get(v_recArgInfo_2610_, 0);
v_isSharedCheck_2714_ = !lean_is_exclusive(v_recArgInfo_2610_);
if (v_isSharedCheck_2714_ == 0)
{
lean_object* v_unused_2715_; lean_object* v_unused_2716_; lean_object* v_unused_2717_; lean_object* v_unused_2718_; lean_object* v_unused_2719_; 
v_unused_2715_ = lean_ctor_get(v_recArgInfo_2610_, 5);
lean_dec(v_unused_2715_);
v_unused_2716_ = lean_ctor_get(v_recArgInfo_2610_, 4);
lean_dec(v_unused_2716_);
v_unused_2717_ = lean_ctor_get(v_recArgInfo_2610_, 3);
lean_dec(v_unused_2717_);
v_unused_2718_ = lean_ctor_get(v_recArgInfo_2610_, 2);
lean_dec(v_unused_2718_);
v_unused_2719_ = lean_ctor_get(v_recArgInfo_2610_, 1);
lean_dec(v_unused_2719_);
v___x_2699_ = v_recArgInfo_2610_;
v_isShared_2700_ = v_isSharedCheck_2714_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_fnName_2697_);
lean_dec(v_recArgInfo_2610_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2714_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
size_t v_sz_2701_; lean_object* v___x_2702_; lean_object* v___x_2704_; 
v_sz_2701_ = lean_array_size(v_a_2683_);
v___x_2702_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(v___x_2609_, v_sz_2701_, v___x_2681_, v_a_2683_);
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 5, v_val_2643_);
lean_ctor_set(v___x_2699_, 4, v_group_2613_);
lean_ctor_set(v___x_2699_, 3, v___x_2702_);
lean_ctor_set(v___x_2699_, 2, v___x_2612_);
lean_ctor_set(v___x_2699_, 1, v___x_2611_);
v___x_2704_ = v___x_2699_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v_fnName_2697_);
lean_ctor_set(v_reuseFailAlloc_2713_, 1, v___x_2611_);
lean_ctor_set(v_reuseFailAlloc_2713_, 2, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2713_, 3, v___x_2702_);
lean_ctor_set(v_reuseFailAlloc_2713_, 4, v_group_2613_);
lean_ctor_set(v_reuseFailAlloc_2713_, 5, v_val_2643_);
v___x_2704_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2708_; 
v___x_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2704_);
v___x_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2705_);
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 1, v___x_2657_);
lean_ctor_set(v___x_2672_, 0, v___x_2706_);
v___x_2708_ = v___x_2672_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v___x_2706_);
lean_ctor_set(v_reuseFailAlloc_2712_, 1, v___x_2657_);
v___x_2708_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
lean_object* v___x_2710_; 
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 0, v___x_2708_);
v___x_2710_ = v___x_2692_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v___x_2708_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2721_; lean_object* v___x_2723_; uint8_t v_isShared_2724_; uint8_t v_isSharedCheck_2728_; 
lean_dec(v_a_2683_);
lean_del_object(v___x_2672_);
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2643_);
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
v_a_2721_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2723_ = v___x_2689_;
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
else
{
lean_inc(v_a_2721_);
lean_dec(v___x_2689_);
v___x_2723_ = lean_box(0);
v_isShared_2724_ = v_isSharedCheck_2728_;
goto v_resetjp_2722_;
}
v_resetjp_2722_:
{
lean_object* v___x_2726_; 
if (v_isShared_2724_ == 0)
{
v___x_2726_ = v___x_2723_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_a_2721_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
}
}
else
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2745_; 
lean_dec(v_a_2675_);
lean_del_object(v___x_2672_);
lean_del_object(v___x_2668_);
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2643_);
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
v_a_2738_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2740_ = v___x_2682_;
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2682_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2745_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2743_; 
if (v_isShared_2741_ == 0)
{
v___x_2743_ = v___x_2740_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_a_2738_);
v___x_2743_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2742_;
}
v_reusejp_2742_:
{
return v___x_2743_;
}
}
}
}
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
lean_del_object(v___x_2672_);
lean_del_object(v___x_2668_);
lean_dec(v_fst_2666_);
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2643_);
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
v_a_2746_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2674_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2674_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
}
}
}
else
{
lean_object* v_a_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2764_; 
lean_dec(v_a_2661_);
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2643_);
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
v_a_2757_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2759_ = v___x_2663_;
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_a_2757_);
lean_dec(v___x_2663_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2762_; 
if (v_isShared_2760_ == 0)
{
v___x_2762_ = v___x_2759_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_a_2757_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
}
else
{
lean_object* v_a_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2772_; 
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2643_);
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
v_a_2765_ = lean_ctor_get(v___x_2660_, 0);
v_isSharedCheck_2772_ = !lean_is_exclusive(v___x_2660_);
if (v_isSharedCheck_2772_ == 0)
{
v___x_2767_ = v___x_2660_;
v_isShared_2768_ = v_isSharedCheck_2772_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_a_2765_);
lean_dec(v___x_2660_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2772_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2770_; 
if (v_isShared_2768_ == 0)
{
v___x_2770_ = v___x_2767_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v_a_2765_);
v___x_2770_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
return v___x_2770_;
}
}
}
}
else
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2780_; 
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2643_);
lean_dec_ref(v_group_2613_);
lean_dec(v___x_2612_);
lean_dec_ref(v___x_2611_);
lean_dec_ref(v_recArgInfo_2610_);
lean_dec_ref(v___x_2607_);
v_a_2773_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2775_ = v___x_2658_;
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2658_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_a_2773_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
}
}
}
}
}
v___jp_2638_:
{
lean_object* v___x_2640_; 
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 0, v___x_2637_);
v___x_2640_ = v___x_2633_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2637_);
lean_ctor_set(v_reuseFailAlloc_2642_, 1, v_snd_2631_);
v___x_2640_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
lean_object* v___x_2641_; 
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
return v___x_2641_;
}
}
}
}
v___jp_2624_:
{
size_t v___x_2626_; size_t v___x_2627_; 
v___x_2626_ = ((size_t)1ULL);
v___x_2627_ = lean_usize_add(v_i_2617_, v___x_2626_);
v_i_2617_ = v___x_2627_;
v_b_2618_ = v_a_2625_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4___boxed(lean_object** _args){
lean_object* v___x_2789_ = _args[0];
lean_object* v_ys_2790_ = _args[1];
lean_object* v___x_2791_ = _args[2];
lean_object* v_recArgInfo_2792_ = _args[3];
lean_object* v___x_2793_ = _args[4];
lean_object* v___x_2794_ = _args[5];
lean_object* v_group_2795_ = _args[6];
lean_object* v___x_2796_ = _args[7];
lean_object* v_as_2797_ = _args[8];
lean_object* v_sz_2798_ = _args[9];
lean_object* v_i_2799_ = _args[10];
lean_object* v_b_2800_ = _args[11];
lean_object* v___y_2801_ = _args[12];
lean_object* v___y_2802_ = _args[13];
lean_object* v___y_2803_ = _args[14];
lean_object* v___y_2804_ = _args[15];
lean_object* v___y_2805_ = _args[16];
_start:
{
size_t v_sz_boxed_2806_; size_t v_i_boxed_2807_; lean_object* v_res_2808_; 
v_sz_boxed_2806_ = lean_unbox_usize(v_sz_2798_);
lean_dec(v_sz_2798_);
v_i_boxed_2807_ = lean_unbox_usize(v_i_2799_);
lean_dec(v_i_2799_);
v_res_2808_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4(v___x_2789_, v_ys_2790_, v___x_2791_, v_recArgInfo_2792_, v___x_2793_, v___x_2794_, v_group_2795_, v___x_2796_, v_as_2797_, v_sz_boxed_2806_, v_i_boxed_2807_, v_b_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
lean_dec_ref(v_as_2797_);
lean_dec(v___x_2796_);
lean_dec_ref(v___x_2791_);
lean_dec_ref(v_ys_2790_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4(lean_object* v___x_2809_, lean_object* v___x_2810_, lean_object* v_ys_2811_, lean_object* v___x_2812_, lean_object* v_recArgInfo_2813_, lean_object* v___x_2814_, lean_object* v___x_2815_, lean_object* v_group_2816_, lean_object* v_as_2817_, size_t v_sz_2818_, size_t v_i_2819_, lean_object* v_b_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v_a_2827_; uint8_t v___x_2831_; 
v___x_2831_ = lean_usize_dec_lt(v_i_2819_, v_sz_2818_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2832_; 
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
v___x_2832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2832_, 0, v_b_2820_);
return v___x_2832_;
}
else
{
lean_object* v_snd_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2989_; 
v_snd_2833_ = lean_ctor_get(v_b_2820_, 1);
v_isSharedCheck_2989_ = !lean_is_exclusive(v_b_2820_);
if (v_isSharedCheck_2989_ == 0)
{
lean_object* v_unused_2990_; 
v_unused_2990_ = lean_ctor_get(v_b_2820_, 0);
lean_dec(v_unused_2990_);
v___x_2835_ = v_b_2820_;
v_isShared_2836_ = v_isSharedCheck_2989_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_snd_2833_);
lean_dec(v_b_2820_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2989_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v_next_2837_; lean_object* v_upperBound_2838_; lean_object* v___x_2839_; 
v_next_2837_ = lean_ctor_get(v_snd_2833_, 0);
lean_inc(v_next_2837_);
v_upperBound_2838_ = lean_ctor_get(v_snd_2833_, 1);
v___x_2839_ = lean_box(0);
if (lean_obj_tag(v_next_2837_) == 0)
{
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
goto v___jp_2840_;
}
else
{
lean_object* v_val_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2988_; 
v_val_2845_ = lean_ctor_get(v_next_2837_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_next_2837_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2847_ = v_next_2837_;
v_isShared_2848_ = v_isSharedCheck_2988_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_val_2845_);
lean_dec(v_next_2837_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2988_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
uint8_t v___x_2849_; 
v___x_2849_ = lean_nat_dec_lt(v_val_2845_, v_upperBound_2838_);
if (v___x_2849_ == 0)
{
lean_del_object(v___x_2847_);
lean_dec(v_val_2845_);
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
goto v___jp_2840_;
}
else
{
lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2985_; 
lean_inc(v_upperBound_2838_);
lean_del_object(v___x_2835_);
v_isSharedCheck_2985_ = !lean_is_exclusive(v_snd_2833_);
if (v_isSharedCheck_2985_ == 0)
{
lean_object* v_unused_2986_; lean_object* v_unused_2987_; 
v_unused_2986_ = lean_ctor_get(v_snd_2833_, 1);
lean_dec(v_unused_2986_);
v_unused_2987_ = lean_ctor_get(v_snd_2833_, 0);
lean_dec(v_unused_2987_);
v___x_2851_ = v_snd_2833_;
v_isShared_2852_ = v_isSharedCheck_2985_;
goto v_resetjp_2850_;
}
else
{
lean_dec(v_snd_2833_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2985_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v_a_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2857_; 
v_a_2853_ = lean_array_uget_borrowed(v_as_2817_, v_i_2819_);
v___x_2854_ = lean_unsigned_to_nat(1u);
v___x_2855_ = lean_nat_add(v_val_2845_, v___x_2854_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 0, v___x_2855_);
v___x_2857_ = v___x_2847_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v___x_2855_);
v___x_2857_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
lean_object* v___x_2859_; 
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 0, v___x_2857_);
v___x_2859_ = v___x_2851_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2857_);
lean_ctor_set(v_reuseFailAlloc_2983_, 1, v_upperBound_2838_);
v___x_2859_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
lean_object* v___x_2860_; 
lean_inc(v___y_2824_);
lean_inc_ref(v___y_2823_);
lean_inc(v___y_2822_);
lean_inc_ref(v___y_2821_);
lean_inc_ref(v___x_2809_);
v___x_2860_ = lean_infer_type(v___x_2809_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2860_) == 0)
{
lean_object* v_a_2861_; lean_object* v___x_2862_; 
v_a_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_a_2861_);
lean_dec_ref_known(v___x_2860_, 1);
v___x_2862_ = l_Lean_Meta_whnfD(v_a_2861_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2862_) == 0)
{
lean_object* v_a_2863_; uint8_t v___x_2864_; lean_object* v___x_2865_; 
v_a_2863_ = lean_ctor_get(v___x_2862_, 0);
lean_inc(v_a_2863_);
lean_dec_ref_known(v___x_2862_, 1);
v___x_2864_ = 0;
lean_inc(v_a_2853_);
v___x_2865_ = l_Lean_Meta_forallMetaTelescope(v_a_2853_, v___x_2864_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v_a_2866_; lean_object* v_snd_2867_; lean_object* v_fst_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2958_; 
v_a_2866_ = lean_ctor_get(v___x_2865_, 0);
lean_inc(v_a_2866_);
lean_dec_ref_known(v___x_2865_, 1);
v_snd_2867_ = lean_ctor_get(v_a_2866_, 1);
v_fst_2868_ = lean_ctor_get(v_a_2866_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v_a_2866_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2870_ = v_a_2866_;
v_isShared_2871_ = v_isSharedCheck_2958_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_snd_2867_);
lean_inc(v_fst_2868_);
lean_dec(v_a_2866_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2958_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v_snd_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2956_; 
v_snd_2872_ = lean_ctor_get(v_snd_2867_, 1);
v_isSharedCheck_2956_ = !lean_is_exclusive(v_snd_2867_);
if (v_isSharedCheck_2956_ == 0)
{
lean_object* v_unused_2957_; 
v_unused_2957_ = lean_ctor_get(v_snd_2867_, 0);
lean_dec(v_unused_2957_);
v___x_2874_ = v_snd_2867_;
v_isShared_2875_ = v_isSharedCheck_2956_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_snd_2872_);
lean_dec(v_snd_2867_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2956_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; 
v___x_2876_ = l_Lean_Meta_isExprDefEqGuarded(v_snd_2872_, v_a_2863_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; uint8_t v___x_2878_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref_known(v___x_2876_, 1);
v___x_2878_ = lean_unbox(v_a_2877_);
if (v___x_2878_ == 0)
{
lean_object* v___x_2880_; 
lean_dec(v_a_2877_);
lean_del_object(v___x_2870_);
lean_dec(v_fst_2868_);
lean_dec(v_val_2845_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 1, v___x_2859_);
lean_ctor_set(v___x_2874_, 0, v___x_2839_);
v___x_2880_ = v___x_2874_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2881_, 1, v___x_2859_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
v_a_2827_ = v___x_2880_;
goto v___jp_2826_;
}
}
else
{
size_t v_sz_2882_; size_t v___x_2883_; lean_object* v___x_2884_; 
v_sz_2882_ = lean_array_size(v_fst_2868_);
v___x_2883_ = ((size_t)0ULL);
v___x_2884_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__1(v_sz_2882_, v___x_2883_, v_fst_2868_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2931_; lean_object* v___x_2932_; uint8_t v___x_2933_; 
v_a_2885_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_a_2885_);
lean_dec_ref_known(v___x_2884_, 1);
v___x_2931_ = lean_unsigned_to_nat(0u);
v___x_2932_ = lean_array_get_size(v_a_2885_);
v___x_2933_ = lean_nat_dec_lt(v___x_2931_, v___x_2932_);
if (v___x_2933_ == 0)
{
lean_dec(v_a_2877_);
lean_del_object(v___x_2870_);
goto v___jp_2886_;
}
else
{
if (v___x_2933_ == 0)
{
lean_dec(v_a_2877_);
lean_del_object(v___x_2870_);
goto v___jp_2886_;
}
else
{
size_t v___x_2934_; uint8_t v___x_2935_; uint8_t v___x_2936_; 
v___x_2934_ = lean_usize_of_nat(v___x_2932_);
v___x_2935_ = lean_unbox(v_a_2877_);
lean_dec(v_a_2877_);
v___x_2936_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_argsInGroup_spec__3(v___x_2935_, v___x_2810_, v_a_2885_, v___x_2883_, v___x_2934_);
if (v___x_2936_ == 0)
{
lean_del_object(v___x_2870_);
goto v___jp_2886_;
}
else
{
lean_object* v___x_2938_; 
lean_dec(v_a_2885_);
lean_del_object(v___x_2874_);
lean_dec(v_val_2845_);
if (v_isShared_2871_ == 0)
{
lean_ctor_set(v___x_2870_, 1, v___x_2859_);
lean_ctor_set(v___x_2870_, 0, v___x_2839_);
v___x_2938_ = v___x_2870_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v___x_2859_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
v_a_2827_ = v___x_2938_;
goto v___jp_2826_;
}
}
}
}
v___jp_2886_:
{
uint8_t v___x_2887_; 
v___x_2887_ = l_Array_allDiff___at___00Lean_Elab_Structural_getRecArgInfo_spec__3(v_a_2885_);
if (v___x_2887_ == 0)
{
lean_object* v___x_2889_; 
lean_dec(v_a_2885_);
lean_dec(v_val_2845_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 1, v___x_2859_);
lean_ctor_set(v___x_2874_, 0, v___x_2839_);
v___x_2889_ = v___x_2874_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2890_, 1, v___x_2859_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
v_a_2827_ = v___x_2889_;
goto v___jp_2826_;
}
}
else
{
lean_object* v___x_2891_; 
v___x_2891_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_hasBadIndexDep_x3f(v_ys_2811_, v_a_2885_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2922_; 
v_a_2892_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2922_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2894_ = v___x_2891_;
v_isShared_2895_ = v_isSharedCheck_2922_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2891_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2922_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
if (lean_obj_tag(v_a_2892_) == 1)
{
lean_object* v___x_2897_; 
lean_dec_ref_known(v_a_2892_, 1);
lean_del_object(v___x_2894_);
lean_dec(v_a_2885_);
lean_dec(v_val_2845_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 1, v___x_2859_);
lean_ctor_set(v___x_2874_, 0, v___x_2839_);
v___x_2897_ = v___x_2874_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2898_, 1, v___x_2859_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
v_a_2827_ = v___x_2897_;
goto v___jp_2826_;
}
}
else
{
lean_object* v_fnName_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2916_; 
lean_dec(v_a_2892_);
lean_dec_ref(v___x_2809_);
v_fnName_2899_ = lean_ctor_get(v_recArgInfo_2813_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v_recArgInfo_2813_);
if (v_isSharedCheck_2916_ == 0)
{
lean_object* v_unused_2917_; lean_object* v_unused_2918_; lean_object* v_unused_2919_; lean_object* v_unused_2920_; lean_object* v_unused_2921_; 
v_unused_2917_ = lean_ctor_get(v_recArgInfo_2813_, 5);
lean_dec(v_unused_2917_);
v_unused_2918_ = lean_ctor_get(v_recArgInfo_2813_, 4);
lean_dec(v_unused_2918_);
v_unused_2919_ = lean_ctor_get(v_recArgInfo_2813_, 3);
lean_dec(v_unused_2919_);
v_unused_2920_ = lean_ctor_get(v_recArgInfo_2813_, 2);
lean_dec(v_unused_2920_);
v_unused_2921_ = lean_ctor_get(v_recArgInfo_2813_, 1);
lean_dec(v_unused_2921_);
v___x_2901_ = v_recArgInfo_2813_;
v_isShared_2902_ = v_isSharedCheck_2916_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_fnName_2899_);
lean_dec(v_recArgInfo_2813_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2916_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
size_t v_sz_2903_; lean_object* v___x_2904_; lean_object* v___x_2906_; 
v_sz_2903_ = lean_array_size(v_a_2885_);
v___x_2904_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_argsInGroup_spec__2(v___x_2812_, v_sz_2903_, v___x_2883_, v_a_2885_);
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 5, v_val_2845_);
lean_ctor_set(v___x_2901_, 4, v_group_2816_);
lean_ctor_set(v___x_2901_, 3, v___x_2904_);
lean_ctor_set(v___x_2901_, 2, v___x_2815_);
lean_ctor_set(v___x_2901_, 1, v___x_2814_);
v___x_2906_ = v___x_2901_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_fnName_2899_);
lean_ctor_set(v_reuseFailAlloc_2915_, 1, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2915_, 2, v___x_2815_);
lean_ctor_set(v_reuseFailAlloc_2915_, 3, v___x_2904_);
lean_ctor_set(v_reuseFailAlloc_2915_, 4, v_group_2816_);
lean_ctor_set(v_reuseFailAlloc_2915_, 5, v_val_2845_);
v___x_2906_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2910_; 
v___x_2907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
v___x_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 1, v___x_2859_);
lean_ctor_set(v___x_2874_, 0, v___x_2908_);
v___x_2910_ = v___x_2874_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2908_);
lean_ctor_set(v_reuseFailAlloc_2914_, 1, v___x_2859_);
v___x_2910_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2912_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 0, v___x_2910_);
v___x_2912_ = v___x_2894_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v___x_2910_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2930_; 
lean_dec(v_a_2885_);
lean_del_object(v___x_2874_);
lean_dec_ref(v___x_2859_);
lean_dec(v_val_2845_);
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
v_a_2923_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2925_ = v___x_2891_;
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_dec(v___x_2891_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2928_; 
if (v_isShared_2926_ == 0)
{
v___x_2928_ = v___x_2925_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_a_2923_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
}
}
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2947_; 
lean_dec(v_a_2877_);
lean_del_object(v___x_2874_);
lean_del_object(v___x_2870_);
lean_dec_ref(v___x_2859_);
lean_dec(v_val_2845_);
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
v_a_2940_ = lean_ctor_get(v___x_2884_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2884_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2942_ = v___x_2884_;
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2884_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
lean_del_object(v___x_2874_);
lean_del_object(v___x_2870_);
lean_dec(v_fst_2868_);
lean_dec_ref(v___x_2859_);
lean_dec(v_val_2845_);
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
v_a_2948_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2876_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2876_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
}
}
else
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2966_; 
lean_dec(v_a_2863_);
lean_dec_ref(v___x_2859_);
lean_dec(v_val_2845_);
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
v_a_2959_ = lean_ctor_get(v___x_2865_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2865_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2961_ = v___x_2865_;
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v___x_2865_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_a_2959_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
}
}
else
{
lean_object* v_a_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2974_; 
lean_dec_ref(v___x_2859_);
lean_dec(v_val_2845_);
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
v_a_2967_ = lean_ctor_get(v___x_2862_, 0);
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2862_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2969_ = v___x_2862_;
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_a_2967_);
lean_dec(v___x_2862_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2972_; 
if (v_isShared_2970_ == 0)
{
v___x_2972_ = v___x_2969_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_a_2967_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
}
else
{
lean_object* v_a_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2982_; 
lean_dec_ref(v___x_2859_);
lean_dec(v_val_2845_);
lean_dec_ref(v_group_2816_);
lean_dec(v___x_2815_);
lean_dec_ref(v___x_2814_);
lean_dec_ref(v_recArgInfo_2813_);
lean_dec_ref(v___x_2809_);
v_a_2975_ = lean_ctor_get(v___x_2860_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2860_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2977_ = v___x_2860_;
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_a_2975_);
lean_dec(v___x_2860_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2980_; 
if (v_isShared_2978_ == 0)
{
v___x_2980_ = v___x_2977_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_a_2975_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
return v___x_2980_;
}
}
}
}
}
}
}
}
}
v___jp_2840_:
{
lean_object* v___x_2842_; 
if (v_isShared_2836_ == 0)
{
lean_ctor_set(v___x_2835_, 0, v___x_2839_);
v___x_2842_ = v___x_2835_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2844_, 1, v_snd_2833_);
v___x_2842_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
lean_object* v___x_2843_; 
v___x_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
return v___x_2843_;
}
}
}
}
v___jp_2826_:
{
size_t v___x_2828_; size_t v___x_2829_; lean_object* v___x_2830_; 
v___x_2828_ = ((size_t)1ULL);
v___x_2829_ = lean_usize_add(v_i_2819_, v___x_2828_);
v___x_2830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4_spec__4(v___x_2809_, v_ys_2811_, v___x_2812_, v_recArgInfo_2813_, v___x_2814_, v___x_2815_, v_group_2816_, v___x_2810_, v_as_2817_, v_sz_2818_, v___x_2829_, v_a_2827_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
return v___x_2830_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4___boxed(lean_object** _args){
lean_object* v___x_2991_ = _args[0];
lean_object* v___x_2992_ = _args[1];
lean_object* v_ys_2993_ = _args[2];
lean_object* v___x_2994_ = _args[3];
lean_object* v_recArgInfo_2995_ = _args[4];
lean_object* v___x_2996_ = _args[5];
lean_object* v___x_2997_ = _args[6];
lean_object* v_group_2998_ = _args[7];
lean_object* v_as_2999_ = _args[8];
lean_object* v_sz_3000_ = _args[9];
lean_object* v_i_3001_ = _args[10];
lean_object* v_b_3002_ = _args[11];
lean_object* v___y_3003_ = _args[12];
lean_object* v___y_3004_ = _args[13];
lean_object* v___y_3005_ = _args[14];
lean_object* v___y_3006_ = _args[15];
lean_object* v___y_3007_ = _args[16];
_start:
{
size_t v_sz_boxed_3008_; size_t v_i_boxed_3009_; lean_object* v_res_3010_; 
v_sz_boxed_3008_ = lean_unbox_usize(v_sz_3000_);
lean_dec(v_sz_3000_);
v_i_boxed_3009_ = lean_unbox_usize(v_i_3001_);
lean_dec(v_i_3001_);
v_res_3010_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4(v___x_2991_, v___x_2992_, v_ys_2993_, v___x_2994_, v_recArgInfo_2995_, v___x_2996_, v___x_2997_, v_group_2998_, v_as_2999_, v_sz_boxed_3008_, v_i_boxed_3009_, v_b_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec_ref(v_as_2999_);
lean_dec_ref(v___x_2994_);
lean_dec_ref(v_ys_2993_);
lean_dec(v___x_2992_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0(lean_object* v_group_3011_, lean_object* v_fixedParamPerm_3012_, lean_object* v_xs_3013_, lean_object* v___x_3014_, lean_object* v_recArgPos_3015_, lean_object* v_a_3016_, lean_object* v___x_3017_, lean_object* v___x_3018_, lean_object* v_ys_3019_, lean_object* v_x_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_){
_start:
{
lean_object* v_toIndGroupInfo_3026_; lean_object* v_all_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3065_; 
v_toIndGroupInfo_3026_ = lean_ctor_get(v_group_3011_, 0);
lean_inc_ref(v_toIndGroupInfo_3026_);
v_all_3027_ = lean_ctor_get(v_toIndGroupInfo_3026_, 0);
lean_inc_ref(v_ys_3019_);
lean_inc_ref(v_fixedParamPerm_3012_);
v___x_3028_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_fixedParamPerm_3012_, v_xs_3013_, v_ys_3019_);
v___x_3029_ = lean_array_get(v___x_3014_, v___x_3028_, v_recArgPos_3015_);
v___x_3030_ = lean_array_get_size(v_all_3027_);
v___x_3031_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_toIndGroupInfo_3026_);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_toIndGroupInfo_3026_);
if (v_isSharedCheck_3065_ == 0)
{
lean_object* v_unused_3066_; lean_object* v_unused_3067_; 
v_unused_3066_ = lean_ctor_get(v_toIndGroupInfo_3026_, 1);
lean_dec(v_unused_3066_);
v_unused_3067_ = lean_ctor_get(v_toIndGroupInfo_3026_, 0);
lean_dec(v_unused_3067_);
v___x_3033_ = v_toIndGroupInfo_3026_;
v_isShared_3034_ = v_isSharedCheck_3065_;
goto v_resetjp_3032_;
}
else
{
lean_dec(v_toIndGroupInfo_3026_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3065_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3035_; lean_object* v___x_3037_; 
v___x_3035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3030_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 1, v___x_3031_);
lean_ctor_set(v___x_3033_, 0, v___x_3035_);
v___x_3037_ = v___x_3033_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v___x_3035_);
lean_ctor_set(v_reuseFailAlloc_3064_, 1, v___x_3031_);
v___x_3037_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; size_t v_sz_3040_; size_t v___x_3041_; lean_object* v___x_3042_; 
v___x_3038_ = lean_box(0);
v___x_3039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3038_);
lean_ctor_set(v___x_3039_, 1, v___x_3037_);
v_sz_3040_ = lean_array_size(v_a_3016_);
v___x_3041_ = ((size_t)0ULL);
v___x_3042_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_argsInGroup_spec__4(v___x_3029_, v___x_3017_, v_ys_3019_, v___x_3028_, v___x_3018_, v_fixedParamPerm_3012_, v_recArgPos_3015_, v_group_3011_, v_a_3016_, v_sz_3040_, v___x_3041_, v___x_3039_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_);
lean_dec_ref(v___x_3028_);
lean_dec_ref(v_ys_3019_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3055_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3045_ = v___x_3042_;
v_isShared_3046_ = v_isSharedCheck_3055_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_3042_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3055_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v_fst_3047_; 
v_fst_3047_ = lean_ctor_get(v_a_3043_, 0);
lean_inc(v_fst_3047_);
lean_dec(v_a_3043_);
if (lean_obj_tag(v_fst_3047_) == 0)
{
lean_object* v___x_3049_; 
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3038_);
v___x_3049_ = v___x_3045_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3038_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
else
{
lean_object* v_val_3051_; lean_object* v___x_3053_; 
v_val_3051_ = lean_ctor_get(v_fst_3047_, 0);
lean_inc(v_val_3051_);
lean_dec_ref_known(v_fst_3047_, 1);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v_val_3051_);
v___x_3053_ = v___x_3045_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_val_3051_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
else
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3063_; 
v_a_3056_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3058_ = v___x_3042_;
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_3042_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0___boxed(lean_object* v_group_3068_, lean_object* v_fixedParamPerm_3069_, lean_object* v_xs_3070_, lean_object* v___x_3071_, lean_object* v_recArgPos_3072_, lean_object* v_a_3073_, lean_object* v___x_3074_, lean_object* v___x_3075_, lean_object* v_ys_3076_, lean_object* v_x_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_){
_start:
{
lean_object* v_res_3083_; 
v_res_3083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0(v_group_3068_, v_fixedParamPerm_3069_, v_xs_3070_, v___x_3071_, v_recArgPos_3072_, v_a_3073_, v___x_3074_, v___x_3075_, v_ys_3076_, v_x_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_);
lean_dec(v___y_3081_);
lean_dec_ref(v___y_3080_);
lean_dec(v___y_3079_);
lean_dec_ref(v___y_3078_);
lean_dec_ref(v_x_3077_);
lean_dec(v___x_3074_);
lean_dec_ref(v_a_3073_);
lean_dec_ref(v___x_3071_);
lean_dec_ref(v_xs_3070_);
return v_res_3083_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(lean_object* v_group_3084_, lean_object* v_a_3085_, lean_object* v_xs_3086_, lean_object* v_value_3087_, lean_object* v_as_3088_, size_t v_i_3089_, size_t v_stop_3090_, lean_object* v_b_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_){
_start:
{
lean_object* v_a_3098_; lean_object* v_val_3103_; uint8_t v___x_3105_; 
v___x_3105_ = lean_usize_dec_eq(v_i_3089_, v_stop_3090_);
if (v___x_3105_ == 0)
{
lean_object* v___x_3106_; lean_object* v_fixedParamPerm_3107_; lean_object* v_recArgPos_3108_; lean_object* v_indGroupInst_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3106_ = lean_array_uget_borrowed(v_as_3088_, v_i_3089_);
v_fixedParamPerm_3107_ = lean_ctor_get(v___x_3106_, 1);
v_recArgPos_3108_ = lean_ctor_get(v___x_3106_, 2);
v_indGroupInst_3109_ = lean_ctor_get(v___x_3106_, 4);
v___x_3110_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_indGroupInst_3109_);
lean_inc_ref(v_group_3084_);
v___x_3111_ = l_Lean_Elab_Structural_IndGroupInst_isDefEq(v_group_3084_, v_indGroupInst_3109_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; uint8_t v___x_3113_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref_known(v___x_3111_, 1);
v___x_3113_ = lean_unbox(v_a_3112_);
lean_dec(v_a_3112_);
if (v___x_3113_ == 0)
{
lean_object* v___x_3114_; lean_object* v___x_3115_; uint8_t v___x_3116_; 
v___x_3114_ = lean_array_get_size(v_a_3085_);
v___x_3115_ = lean_unsigned_to_nat(0u);
v___x_3116_ = lean_nat_dec_eq(v___x_3114_, v___x_3115_);
if (v___x_3116_ == 0)
{
lean_object* v___f_3117_; lean_object* v___x_3118_; 
lean_inc(v___x_3106_);
lean_inc_ref(v_a_3085_);
lean_inc(v_recArgPos_3108_);
lean_inc_ref(v_xs_3086_);
lean_inc_ref(v_fixedParamPerm_3107_);
lean_inc_ref(v_group_3084_);
v___f_3117_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___lam__0___boxed), 15, 8);
lean_closure_set(v___f_3117_, 0, v_group_3084_);
lean_closure_set(v___f_3117_, 1, v_fixedParamPerm_3107_);
lean_closure_set(v___f_3117_, 2, v_xs_3086_);
lean_closure_set(v___f_3117_, 3, v___x_3110_);
lean_closure_set(v___f_3117_, 4, v_recArgPos_3108_);
lean_closure_set(v___f_3117_, 5, v_a_3085_);
lean_closure_set(v___f_3117_, 6, v___x_3114_);
lean_closure_set(v___f_3117_, 7, v___x_3106_);
lean_inc_ref(v_value_3087_);
v___x_3118_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_prettyRecArg_spec__0___redArg(v_value_3087_, v___f_3117_, v___x_3116_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3119_);
lean_dec_ref_known(v___x_3118_, 1);
if (lean_obj_tag(v_a_3119_) == 0)
{
v_a_3098_ = v_b_3091_;
goto v___jp_3097_;
}
else
{
lean_object* v_val_3120_; 
v_val_3120_ = lean_ctor_get(v_a_3119_, 0);
lean_inc(v_val_3120_);
lean_dec_ref_known(v_a_3119_, 1);
v_val_3103_ = v_val_3120_;
goto v___jp_3102_;
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v_b_3091_);
lean_dec_ref(v_value_3087_);
lean_dec_ref(v_xs_3086_);
lean_dec_ref(v_a_3085_);
lean_dec_ref(v_group_3084_);
v_a_3121_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3118_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3118_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
else
{
v_a_3098_ = v_b_3091_;
goto v___jp_3097_;
}
}
else
{
lean_inc(v___x_3106_);
v_val_3103_ = v___x_3106_;
goto v___jp_3102_;
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec_ref(v_b_3091_);
lean_dec_ref(v_value_3087_);
lean_dec_ref(v_xs_3086_);
lean_dec_ref(v_a_3085_);
lean_dec_ref(v_group_3084_);
v_a_3129_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3111_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3111_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
else
{
lean_object* v___x_3137_; 
lean_dec_ref(v_value_3087_);
lean_dec_ref(v_xs_3086_);
lean_dec_ref(v_a_3085_);
lean_dec_ref(v_group_3084_);
v___x_3137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3137_, 0, v_b_3091_);
return v___x_3137_;
}
v___jp_3097_:
{
size_t v___x_3099_; size_t v___x_3100_; 
v___x_3099_ = ((size_t)1ULL);
v___x_3100_ = lean_usize_add(v_i_3089_, v___x_3099_);
v_i_3089_ = v___x_3100_;
v_b_3091_ = v_a_3098_;
goto _start;
}
v___jp_3102_:
{
lean_object* v___x_3104_; 
v___x_3104_ = lean_array_push(v_b_3091_, v_val_3103_);
v_a_3098_ = v___x_3104_;
goto v___jp_3097_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6___boxed(lean_object* v_group_3138_, lean_object* v_a_3139_, lean_object* v_xs_3140_, lean_object* v_value_3141_, lean_object* v_as_3142_, lean_object* v_i_3143_, lean_object* v_stop_3144_, lean_object* v_b_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_){
_start:
{
size_t v_i_boxed_3151_; size_t v_stop_boxed_3152_; lean_object* v_res_3153_; 
v_i_boxed_3151_ = lean_unbox_usize(v_i_3143_);
lean_dec(v_i_3143_);
v_stop_boxed_3152_ = lean_unbox_usize(v_stop_3144_);
lean_dec(v_stop_3144_);
v_res_3153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(v_group_3138_, v_a_3139_, v_xs_3140_, v_value_3141_, v_as_3142_, v_i_boxed_3151_, v_stop_boxed_3152_, v_b_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_);
lean_dec(v___y_3149_);
lean_dec_ref(v___y_3148_);
lean_dec(v___y_3147_);
lean_dec_ref(v___y_3146_);
lean_dec_ref(v_as_3142_);
return v_res_3153_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5(lean_object* v_group_3154_, lean_object* v_a_3155_, lean_object* v_xs_3156_, lean_object* v_value_3157_, lean_object* v_as_3158_, lean_object* v_start_3159_, lean_object* v_stop_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_){
_start:
{
lean_object* v___x_3166_; uint8_t v___x_3167_; 
v___x_3166_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__4));
v___x_3167_ = lean_nat_dec_lt(v_start_3159_, v_stop_3160_);
if (v___x_3167_ == 0)
{
lean_object* v___x_3168_; 
lean_dec_ref(v_value_3157_);
lean_dec_ref(v_xs_3156_);
lean_dec_ref(v_a_3155_);
lean_dec_ref(v_group_3154_);
v___x_3168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3166_);
return v___x_3168_;
}
else
{
lean_object* v___x_3169_; uint8_t v___x_3170_; 
v___x_3169_ = lean_array_get_size(v_as_3158_);
v___x_3170_ = lean_nat_dec_le(v_stop_3160_, v___x_3169_);
if (v___x_3170_ == 0)
{
uint8_t v___x_3171_; 
v___x_3171_ = lean_nat_dec_lt(v_start_3159_, v___x_3169_);
if (v___x_3171_ == 0)
{
lean_object* v___x_3172_; 
lean_dec_ref(v_value_3157_);
lean_dec_ref(v_xs_3156_);
lean_dec_ref(v_a_3155_);
lean_dec_ref(v_group_3154_);
v___x_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3166_);
return v___x_3172_;
}
else
{
size_t v___x_3173_; size_t v___x_3174_; lean_object* v___x_3175_; 
v___x_3173_ = lean_usize_of_nat(v_start_3159_);
v___x_3174_ = lean_usize_of_nat(v___x_3169_);
v___x_3175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(v_group_3154_, v_a_3155_, v_xs_3156_, v_value_3157_, v_as_3158_, v___x_3173_, v___x_3174_, v___x_3166_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_);
return v___x_3175_;
}
}
else
{
size_t v___x_3176_; size_t v___x_3177_; lean_object* v___x_3178_; 
v___x_3176_ = lean_usize_of_nat(v_start_3159_);
v___x_3177_ = lean_usize_of_nat(v_stop_3160_);
v___x_3178_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5_spec__6(v_group_3154_, v_a_3155_, v_xs_3156_, v_value_3157_, v_as_3158_, v___x_3176_, v___x_3177_, v___x_3166_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_);
return v___x_3178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5___boxed(lean_object* v_group_3179_, lean_object* v_a_3180_, lean_object* v_xs_3181_, lean_object* v_value_3182_, lean_object* v_as_3183_, lean_object* v_start_3184_, lean_object* v_stop_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5(v_group_3179_, v_a_3180_, v_xs_3181_, v_value_3182_, v_as_3183_, v_start_3184_, v_stop_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v_stop_3185_);
lean_dec(v_start_3184_);
lean_dec_ref(v_as_3183_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_argsInGroup(lean_object* v_group_3192_, lean_object* v_xs_3193_, lean_object* v_value_3194_, lean_object* v_recArgInfos_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v___x_3201_; 
lean_inc_ref(v_group_3192_);
v___x_3201_ = l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(v_group_3192_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___x_3201_, 1);
v___x_3203_ = lean_unsigned_to_nat(0u);
v___x_3204_ = lean_array_get_size(v_recArgInfos_3195_);
v___x_3205_ = l_Array_filterMapM___at___00Lean_Elab_Structural_argsInGroup_spec__5(v_group_3192_, v_a_3202_, v_xs_3193_, v_value_3194_, v_recArgInfos_3195_, v___x_3203_, v___x_3204_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_);
return v___x_3205_;
}
else
{
lean_object* v_a_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3213_; 
lean_dec_ref(v_value_3194_);
lean_dec_ref(v_xs_3193_);
lean_dec_ref(v_group_3192_);
v_a_3206_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3213_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3213_ == 0)
{
v___x_3208_ = v___x_3201_;
v_isShared_3209_ = v_isSharedCheck_3213_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_a_3206_);
lean_dec(v___x_3201_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3213_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
lean_object* v___x_3211_; 
if (v_isShared_3209_ == 0)
{
v___x_3211_ = v___x_3208_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v_a_3206_);
v___x_3211_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
return v___x_3211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_argsInGroup___boxed(lean_object* v_group_3214_, lean_object* v_xs_3215_, lean_object* v_value_3216_, lean_object* v_recArgInfos_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_){
_start:
{
lean_object* v_res_3223_; 
v_res_3223_ = l_Lean_Elab_Structural_argsInGroup(v_group_3214_, v_xs_3215_, v_value_3216_, v_recArgInfos_3217_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_);
lean_dec(v_a_3221_);
lean_dec_ref(v_a_3220_);
lean_dec(v_a_3219_);
lean_dec_ref(v_a_3218_);
lean_dec_ref(v_recArgInfos_3217_);
return v_res_3223_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_maxCombinationSize(void){
_start:
{
lean_object* v___x_3224_; 
v___x_3224_ = lean_unsigned_to_nat(10u);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(lean_object* v_xss_3227_, lean_object* v_i_3228_, lean_object* v_acc_3229_){
_start:
{
lean_object* v___x_3230_; uint8_t v___x_3231_; 
v___x_3230_ = lean_array_get_size(v_xss_3227_);
v___x_3231_ = lean_nat_dec_lt(v_i_3228_, v___x_3230_);
if (v___x_3231_ == 0)
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; 
v___x_3232_ = lean_unsigned_to_nat(1u);
v___x_3233_ = lean_mk_empty_array_with_capacity(v___x_3232_);
v___x_3234_ = lean_array_push(v___x_3233_, v_acc_3229_);
return v___x_3234_;
}
else
{
lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; uint8_t v___x_3239_; 
v___x_3235_ = lean_array_fget_borrowed(v_xss_3227_, v_i_3228_);
v___x_3236_ = lean_unsigned_to_nat(0u);
v___x_3237_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___closed__0));
v___x_3238_ = lean_array_get_size(v___x_3235_);
v___x_3239_ = lean_nat_dec_lt(v___x_3236_, v___x_3238_);
if (v___x_3239_ == 0)
{
lean_dec_ref(v_acc_3229_);
return v___x_3237_;
}
else
{
size_t v___x_3240_; size_t v___x_3241_; lean_object* v___x_3242_; 
v___x_3240_ = ((size_t)0ULL);
v___x_3241_ = lean_usize_of_nat(v___x_3238_);
v___x_3242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(v_i_3228_, v_acc_3229_, v_xss_3227_, v___x_3235_, v___x_3240_, v___x_3241_, v___x_3237_);
return v___x_3242_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(lean_object* v_i_3243_, lean_object* v_acc_3244_, lean_object* v_xss_3245_, lean_object* v_as_3246_, size_t v_i_3247_, size_t v_stop_3248_, lean_object* v_b_3249_){
_start:
{
uint8_t v___x_3250_; 
v___x_3250_ = lean_usize_dec_eq(v_i_3247_, v_stop_3248_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; size_t v___x_3257_; size_t v___x_3258_; 
v___x_3251_ = lean_array_uget_borrowed(v_as_3246_, v_i_3247_);
v___x_3252_ = lean_unsigned_to_nat(1u);
v___x_3253_ = lean_nat_add(v_i_3243_, v___x_3252_);
lean_inc(v___x_3251_);
lean_inc_ref(v_acc_3244_);
v___x_3254_ = lean_array_push(v_acc_3244_, v___x_3251_);
v___x_3255_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(v_xss_3245_, v___x_3253_, v___x_3254_);
lean_dec(v___x_3253_);
v___x_3256_ = l_Array_append___redArg(v_b_3249_, v___x_3255_);
lean_dec_ref(v___x_3255_);
v___x_3257_ = ((size_t)1ULL);
v___x_3258_ = lean_usize_add(v_i_3247_, v___x_3257_);
v_i_3247_ = v___x_3258_;
v_b_3249_ = v___x_3256_;
goto _start;
}
else
{
lean_dec_ref(v_acc_3244_);
return v_b_3249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg___boxed(lean_object* v_i_3260_, lean_object* v_acc_3261_, lean_object* v_xss_3262_, lean_object* v_as_3263_, lean_object* v_i_3264_, lean_object* v_stop_3265_, lean_object* v_b_3266_){
_start:
{
size_t v_i_boxed_3267_; size_t v_stop_boxed_3268_; lean_object* v_res_3269_; 
v_i_boxed_3267_ = lean_unbox_usize(v_i_3264_);
lean_dec(v_i_3264_);
v_stop_boxed_3268_ = lean_unbox_usize(v_stop_3265_);
lean_dec(v_stop_3265_);
v_res_3269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(v_i_3260_, v_acc_3261_, v_xss_3262_, v_as_3263_, v_i_boxed_3267_, v_stop_boxed_3268_, v_b_3266_);
lean_dec_ref(v_as_3263_);
lean_dec_ref(v_xss_3262_);
lean_dec(v_i_3260_);
return v_res_3269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg___boxed(lean_object* v_xss_3270_, lean_object* v_i_3271_, lean_object* v_acc_3272_){
_start:
{
lean_object* v_res_3273_; 
v_res_3273_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(v_xss_3270_, v_i_3271_, v_acc_3272_);
lean_dec(v_i_3271_);
lean_dec_ref(v_xss_3270_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go(lean_object* v_00_u03b1_3274_, lean_object* v_xss_3275_, lean_object* v_i_3276_, lean_object* v_acc_3277_){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(v_xss_3275_, v_i_3276_, v_acc_3277_);
return v___x_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___boxed(lean_object* v_00_u03b1_3279_, lean_object* v_xss_3280_, lean_object* v_i_3281_, lean_object* v_acc_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go(v_00_u03b1_3279_, v_xss_3280_, v_i_3281_, v_acc_3282_);
lean_dec(v_i_3281_);
lean_dec_ref(v_xss_3280_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0(lean_object* v_00_u03b1_3284_, lean_object* v_i_3285_, lean_object* v_acc_3286_, lean_object* v_xss_3287_, lean_object* v_as_3288_, size_t v_i_3289_, size_t v_stop_3290_, lean_object* v_b_3291_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___redArg(v_i_3285_, v_acc_3286_, v_xss_3287_, v_as_3288_, v_i_3289_, v_stop_3290_, v_b_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0___boxed(lean_object* v_00_u03b1_3293_, lean_object* v_i_3294_, lean_object* v_acc_3295_, lean_object* v_xss_3296_, lean_object* v_as_3297_, lean_object* v_i_3298_, lean_object* v_stop_3299_, lean_object* v_b_3300_){
_start:
{
size_t v_i_boxed_3301_; size_t v_stop_boxed_3302_; lean_object* v_res_3303_; 
v_i_boxed_3301_ = lean_unbox_usize(v_i_3298_);
lean_dec(v_i_3298_);
v_stop_boxed_3302_ = lean_unbox_usize(v_stop_3299_);
lean_dec(v_stop_3299_);
v_res_3303_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go_spec__0(v_00_u03b1_3293_, v_i_3294_, v_acc_3295_, v_xss_3296_, v_as_3297_, v_i_boxed_3301_, v_stop_boxed_3302_, v_b_3300_);
lean_dec_ref(v_as_3297_);
lean_dec_ref(v_xss_3296_);
lean_dec(v_i_3294_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(lean_object* v_as_3304_, size_t v_i_3305_, size_t v_stop_3306_, lean_object* v_b_3307_){
_start:
{
uint8_t v___x_3308_; 
v___x_3308_ = lean_usize_dec_eq(v_i_3305_, v_stop_3306_);
if (v___x_3308_ == 0)
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; size_t v___x_3312_; size_t v___x_3313_; 
v___x_3309_ = lean_array_uget_borrowed(v_as_3304_, v_i_3305_);
v___x_3310_ = lean_array_get_size(v___x_3309_);
v___x_3311_ = lean_nat_mul(v_b_3307_, v___x_3310_);
lean_dec(v_b_3307_);
v___x_3312_ = ((size_t)1ULL);
v___x_3313_ = lean_usize_add(v_i_3305_, v___x_3312_);
v_i_3305_ = v___x_3313_;
v_b_3307_ = v___x_3311_;
goto _start;
}
else
{
return v_b_3307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg___boxed(lean_object* v_as_3315_, lean_object* v_i_3316_, lean_object* v_stop_3317_, lean_object* v_b_3318_){
_start:
{
size_t v_i_boxed_3319_; size_t v_stop_boxed_3320_; lean_object* v_res_3321_; 
v_i_boxed_3319_ = lean_unbox_usize(v_i_3316_);
lean_dec(v_i_3316_);
v_stop_boxed_3320_ = lean_unbox_usize(v_stop_3317_);
lean_dec(v_stop_3317_);
v_res_3321_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(v_as_3315_, v_i_boxed_3319_, v_stop_boxed_3320_, v_b_3318_);
lean_dec_ref(v_as_3315_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___redArg(lean_object* v_xss_3322_){
_start:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___y_3327_; lean_object* v___x_3333_; uint8_t v___x_3334_; 
v___x_3323_ = lean_unsigned_to_nat(10u);
v___x_3324_ = lean_unsigned_to_nat(1u);
v___x_3325_ = lean_unsigned_to_nat(0u);
v___x_3333_ = lean_array_get_size(v_xss_3322_);
v___x_3334_ = lean_nat_dec_lt(v___x_3325_, v___x_3333_);
if (v___x_3334_ == 0)
{
v___y_3327_ = v___x_3324_;
goto v___jp_3326_;
}
else
{
size_t v___x_3335_; size_t v___x_3336_; lean_object* v___x_3337_; 
v___x_3335_ = ((size_t)0ULL);
v___x_3336_ = lean_usize_of_nat(v___x_3333_);
v___x_3337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(v_xss_3322_, v___x_3335_, v___x_3336_, v___x_3324_);
v___y_3327_ = v___x_3337_;
goto v___jp_3326_;
}
v___jp_3326_:
{
uint8_t v___x_3328_; 
v___x_3328_ = lean_nat_dec_lt(v___x_3323_, v___y_3327_);
lean_dec(v___y_3327_);
if (v___x_3328_ == 0)
{
lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3329_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_dedup___redArg___closed__0));
v___x_3330_ = l___private_Lean_Elab_PreDefinition_Structural_FindRecArg_0__Lean_Elab_Structural_allCombinations_go___redArg(v_xss_3322_, v___x_3325_, v___x_3329_);
v___x_3331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3330_);
return v___x_3331_;
}
else
{
lean_object* v___x_3332_; 
v___x_3332_ = lean_box(0);
return v___x_3332_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___redArg___boxed(lean_object* v_xss_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l_Lean_Elab_Structural_allCombinations___redArg(v_xss_3338_);
lean_dec_ref(v_xss_3338_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations(lean_object* v_00_u03b1_3340_, lean_object* v_xss_3341_){
_start:
{
lean_object* v___x_3342_; 
v___x_3342_ = l_Lean_Elab_Structural_allCombinations___redArg(v_xss_3341_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_allCombinations___boxed(lean_object* v_00_u03b1_3343_, lean_object* v_xss_3344_){
_start:
{
lean_object* v_res_3345_; 
v_res_3345_ = l_Lean_Elab_Structural_allCombinations(v_00_u03b1_3343_, v_xss_3344_);
lean_dec_ref(v_xss_3344_);
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0(lean_object* v_00_u03b1_3346_, lean_object* v_as_3347_, size_t v_i_3348_, size_t v_stop_3349_, lean_object* v_b_3350_){
_start:
{
lean_object* v___x_3351_; 
v___x_3351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___redArg(v_as_3347_, v_i_3348_, v_stop_3349_, v_b_3350_);
return v___x_3351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0___boxed(lean_object* v_00_u03b1_3352_, lean_object* v_as_3353_, lean_object* v_i_3354_, lean_object* v_stop_3355_, lean_object* v_b_3356_){
_start:
{
size_t v_i_boxed_3357_; size_t v_stop_boxed_3358_; lean_object* v_res_3359_; 
v_i_boxed_3357_ = lean_unbox_usize(v_i_3354_);
lean_dec(v_i_3354_);
v_stop_boxed_3358_ = lean_unbox_usize(v_stop_3355_);
lean_dec(v_stop_3355_);
v_res_3359_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_allCombinations_spec__0(v_00_u03b1_3352_, v_as_3353_, v_i_boxed_3357_, v_stop_boxed_3358_, v_b_3356_);
lean_dec_ref(v_as_3353_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(lean_object* v_as_3360_, size_t v_i_3361_, size_t v_stop_3362_, lean_object* v_b_3363_){
_start:
{
uint8_t v___x_3364_; 
v___x_3364_ = lean_usize_dec_eq(v_i_3361_, v_stop_3362_);
if (v___x_3364_ == 0)
{
lean_object* v___x_3365_; lean_object* v___x_3366_; size_t v___x_3367_; size_t v___x_3368_; 
v___x_3365_ = lean_array_uget_borrowed(v_as_3360_, v_i_3361_);
v___x_3366_ = l_Array_append___redArg(v_b_3363_, v___x_3365_);
v___x_3367_ = ((size_t)1ULL);
v___x_3368_ = lean_usize_add(v_i_3361_, v___x_3367_);
v_i_3361_ = v___x_3368_;
v_b_3363_ = v___x_3366_;
goto _start;
}
else
{
return v_b_3363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7___boxed(lean_object* v_as_3370_, lean_object* v_i_3371_, lean_object* v_stop_3372_, lean_object* v_b_3373_){
_start:
{
size_t v_i_boxed_3374_; size_t v_stop_boxed_3375_; lean_object* v_res_3376_; 
v_i_boxed_3374_ = lean_unbox_usize(v_i_3371_);
lean_dec(v_i_3371_);
v_stop_boxed_3375_ = lean_unbox_usize(v_stop_3372_);
lean_dec(v_stop_3372_);
v_res_3376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(v_as_3370_, v_i_boxed_3374_, v_stop_boxed_3375_, v_b_3373_);
lean_dec_ref(v_as_3370_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__8(lean_object* v_a_3377_, lean_object* v_a_3378_){
_start:
{
if (lean_obj_tag(v_a_3377_) == 0)
{
lean_object* v___x_3379_; 
v___x_3379_ = l_List_reverse___redArg(v_a_3378_);
return v___x_3379_;
}
else
{
lean_object* v_head_3380_; lean_object* v_tail_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3391_; 
v_head_3380_ = lean_ctor_get(v_a_3377_, 0);
v_tail_3381_ = lean_ctor_get(v_a_3377_, 1);
v_isSharedCheck_3391_ = !lean_is_exclusive(v_a_3377_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3383_ = v_a_3377_;
v_isShared_3384_ = v_isSharedCheck_3391_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_tail_3381_);
lean_inc(v_head_3380_);
lean_dec(v_a_3377_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3391_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3388_; 
v___x_3385_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_3380_);
v___x_3386_ = l_Lean_MessageData_ofFormat(v___x_3385_);
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 1, v_a_3378_);
lean_ctor_set(v___x_3383_, 0, v___x_3386_);
v___x_3388_ = v___x_3383_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v___x_3386_);
lean_ctor_set(v_reuseFailAlloc_3390_, 1, v_a_3378_);
v___x_3388_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
v_a_3377_ = v_tail_3381_;
v_a_3378_ = v___x_3388_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1(size_t v_sz_3392_, size_t v_i_3393_, lean_object* v_bs_3394_){
_start:
{
uint8_t v___x_3395_; 
v___x_3395_ = lean_usize_dec_lt(v_i_3393_, v_sz_3392_);
if (v___x_3395_ == 0)
{
return v_bs_3394_;
}
else
{
lean_object* v_v_3396_; lean_object* v___x_3397_; lean_object* v_bs_x27_3398_; lean_object* v___x_3399_; size_t v___x_3400_; size_t v___x_3401_; lean_object* v___x_3402_; 
v_v_3396_ = lean_array_uget(v_bs_3394_, v_i_3393_);
v___x_3397_ = lean_unsigned_to_nat(0u);
v_bs_x27_3398_ = lean_array_uset(v_bs_3394_, v_i_3393_, v___x_3397_);
v___x_3399_ = l_Lean_Elab_Structural_nonIndicesFirst(v_v_3396_);
lean_dec(v_v_3396_);
v___x_3400_ = ((size_t)1ULL);
v___x_3401_ = lean_usize_add(v_i_3393_, v___x_3400_);
v___x_3402_ = lean_array_uset(v_bs_x27_3398_, v_i_3393_, v___x_3399_);
v_i_3393_ = v___x_3401_;
v_bs_3394_ = v___x_3402_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1___boxed(lean_object* v_sz_3404_, lean_object* v_i_3405_, lean_object* v_bs_3406_){
_start:
{
size_t v_sz_boxed_3407_; size_t v_i_boxed_3408_; lean_object* v_res_3409_; 
v_sz_boxed_3407_ = lean_unbox_usize(v_sz_3404_);
lean_dec(v_sz_3404_);
v_i_boxed_3408_ = lean_unbox_usize(v_i_3405_);
lean_dec(v_i_3405_);
v_res_3409_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1(v_sz_boxed_3407_, v_i_boxed_3408_, v_bs_3406_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0(lean_object* v_xs_3410_, lean_object* v_as_3411_, size_t v_sz_3412_, size_t v_i_3413_, lean_object* v_b_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
uint8_t v___x_3420_; 
v___x_3420_ = lean_usize_dec_lt(v_i_3413_, v_sz_3412_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; 
lean_dec_ref(v_xs_3410_);
v___x_3421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3421_, 0, v_b_3414_);
return v___x_3421_;
}
else
{
lean_object* v_snd_3422_; lean_object* v_snd_3423_; lean_object* v_snd_3424_; lean_object* v_snd_3425_; lean_object* v_fst_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3570_; 
v_snd_3422_ = lean_ctor_get(v_b_3414_, 1);
lean_inc(v_snd_3422_);
v_snd_3423_ = lean_ctor_get(v_snd_3422_, 1);
lean_inc(v_snd_3423_);
v_snd_3424_ = lean_ctor_get(v_snd_3423_, 1);
lean_inc(v_snd_3424_);
v_snd_3425_ = lean_ctor_get(v_snd_3424_, 1);
lean_inc(v_snd_3425_);
v_fst_3426_ = lean_ctor_get(v_b_3414_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v_b_3414_);
if (v_isSharedCheck_3570_ == 0)
{
lean_object* v_unused_3571_; 
v_unused_3571_ = lean_ctor_get(v_b_3414_, 1);
lean_dec(v_unused_3571_);
v___x_3428_ = v_b_3414_;
v_isShared_3429_ = v_isSharedCheck_3570_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_fst_3426_);
lean_dec(v_b_3414_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3570_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v_fst_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3568_; 
v_fst_3430_ = lean_ctor_get(v_snd_3422_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v_snd_3422_);
if (v_isSharedCheck_3568_ == 0)
{
lean_object* v_unused_3569_; 
v_unused_3569_ = lean_ctor_get(v_snd_3422_, 1);
lean_dec(v_unused_3569_);
v___x_3432_ = v_snd_3422_;
v_isShared_3433_ = v_isSharedCheck_3568_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_fst_3430_);
lean_dec(v_snd_3422_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3568_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v_fst_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3566_; 
v_fst_3434_ = lean_ctor_get(v_snd_3423_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v_snd_3423_);
if (v_isSharedCheck_3566_ == 0)
{
lean_object* v_unused_3567_; 
v_unused_3567_ = lean_ctor_get(v_snd_3423_, 1);
lean_dec(v_unused_3567_);
v___x_3436_ = v_snd_3423_;
v_isShared_3437_ = v_isSharedCheck_3566_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_fst_3434_);
lean_dec(v_snd_3423_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3566_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v_fst_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3564_; 
v_fst_3438_ = lean_ctor_get(v_snd_3424_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v_snd_3424_);
if (v_isSharedCheck_3564_ == 0)
{
lean_object* v_unused_3565_; 
v_unused_3565_ = lean_ctor_get(v_snd_3424_, 1);
lean_dec(v_unused_3565_);
v___x_3440_ = v_snd_3424_;
v_isShared_3441_ = v_isSharedCheck_3564_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_fst_3438_);
lean_dec(v_snd_3424_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3564_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v_array_3442_; lean_object* v_start_3443_; lean_object* v_stop_3444_; uint8_t v___x_3445_; 
v_array_3442_ = lean_ctor_get(v_snd_3425_, 0);
v_start_3443_ = lean_ctor_get(v_snd_3425_, 1);
v_stop_3444_ = lean_ctor_get(v_snd_3425_, 2);
v___x_3445_ = lean_nat_dec_lt(v_start_3443_, v_stop_3444_);
if (v___x_3445_ == 0)
{
lean_object* v___x_3447_; 
lean_dec_ref(v_xs_3410_);
if (v_isShared_3441_ == 0)
{
v___x_3447_ = v___x_3440_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_fst_3438_);
lean_ctor_set(v_reuseFailAlloc_3458_, 1, v_snd_3425_);
v___x_3447_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
lean_object* v___x_3449_; 
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3447_);
v___x_3449_ = v___x_3436_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_fst_3434_);
lean_ctor_set(v_reuseFailAlloc_3457_, 1, v___x_3447_);
v___x_3449_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
lean_object* v___x_3451_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 1, v___x_3449_);
v___x_3451_ = v___x_3432_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v_fst_3430_);
lean_ctor_set(v_reuseFailAlloc_3456_, 1, v___x_3449_);
v___x_3451_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
lean_object* v___x_3453_; 
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 1, v___x_3451_);
v___x_3453_ = v___x_3428_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_fst_3426_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v___x_3451_);
v___x_3453_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
return v___x_3454_;
}
}
}
}
}
else
{
lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3560_; 
lean_inc(v_stop_3444_);
lean_inc(v_start_3443_);
lean_inc_ref(v_array_3442_);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_snd_3425_);
if (v_isSharedCheck_3560_ == 0)
{
lean_object* v_unused_3561_; lean_object* v_unused_3562_; lean_object* v_unused_3563_; 
v_unused_3561_ = lean_ctor_get(v_snd_3425_, 2);
lean_dec(v_unused_3561_);
v_unused_3562_ = lean_ctor_get(v_snd_3425_, 1);
lean_dec(v_unused_3562_);
v_unused_3563_ = lean_ctor_get(v_snd_3425_, 0);
lean_dec(v_unused_3563_);
v___x_3460_ = v_snd_3425_;
v_isShared_3461_ = v_isSharedCheck_3560_;
goto v_resetjp_3459_;
}
else
{
lean_dec(v_snd_3425_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3560_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v_array_3462_; lean_object* v_start_3463_; lean_object* v_stop_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3469_; 
v_array_3462_ = lean_ctor_get(v_fst_3438_, 0);
v_start_3463_ = lean_ctor_get(v_fst_3438_, 1);
v_stop_3464_ = lean_ctor_get(v_fst_3438_, 2);
v___x_3465_ = lean_array_fget(v_array_3442_, v_start_3443_);
v___x_3466_ = lean_unsigned_to_nat(1u);
v___x_3467_ = lean_nat_add(v_start_3443_, v___x_3466_);
lean_dec(v_start_3443_);
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 1, v___x_3467_);
v___x_3469_ = v___x_3460_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_array_3442_);
lean_ctor_set(v_reuseFailAlloc_3559_, 1, v___x_3467_);
lean_ctor_set(v_reuseFailAlloc_3559_, 2, v_stop_3444_);
v___x_3469_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
uint8_t v___x_3470_; 
v___x_3470_ = lean_nat_dec_lt(v_start_3463_, v_stop_3464_);
if (v___x_3470_ == 0)
{
lean_object* v___x_3472_; 
lean_dec(v___x_3465_);
lean_dec_ref(v_xs_3410_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 1, v___x_3469_);
v___x_3472_ = v___x_3440_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_fst_3438_);
lean_ctor_set(v_reuseFailAlloc_3483_, 1, v___x_3469_);
v___x_3472_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
lean_object* v___x_3474_; 
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3472_);
v___x_3474_ = v___x_3436_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_fst_3434_);
lean_ctor_set(v_reuseFailAlloc_3482_, 1, v___x_3472_);
v___x_3474_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
lean_object* v___x_3476_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 1, v___x_3474_);
v___x_3476_ = v___x_3432_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_fst_3430_);
lean_ctor_set(v_reuseFailAlloc_3481_, 1, v___x_3474_);
v___x_3476_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
lean_object* v___x_3478_; 
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 1, v___x_3476_);
v___x_3478_ = v___x_3428_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_fst_3426_);
lean_ctor_set(v_reuseFailAlloc_3480_, 1, v___x_3476_);
v___x_3478_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
lean_object* v___x_3479_; 
v___x_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3478_);
return v___x_3479_;
}
}
}
}
}
else
{
lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3555_; 
lean_inc(v_stop_3464_);
lean_inc(v_start_3463_);
lean_inc_ref(v_array_3462_);
v_isSharedCheck_3555_ = !lean_is_exclusive(v_fst_3438_);
if (v_isSharedCheck_3555_ == 0)
{
lean_object* v_unused_3556_; lean_object* v_unused_3557_; lean_object* v_unused_3558_; 
v_unused_3556_ = lean_ctor_get(v_fst_3438_, 2);
lean_dec(v_unused_3556_);
v_unused_3557_ = lean_ctor_get(v_fst_3438_, 1);
lean_dec(v_unused_3557_);
v_unused_3558_ = lean_ctor_get(v_fst_3438_, 0);
lean_dec(v_unused_3558_);
v___x_3485_ = v_fst_3438_;
v_isShared_3486_ = v_isSharedCheck_3555_;
goto v_resetjp_3484_;
}
else
{
lean_dec(v_fst_3438_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3555_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v_array_3487_; lean_object* v_start_3488_; lean_object* v_stop_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3493_; 
v_array_3487_ = lean_ctor_get(v_fst_3434_, 0);
v_start_3488_ = lean_ctor_get(v_fst_3434_, 1);
v_stop_3489_ = lean_ctor_get(v_fst_3434_, 2);
v___x_3490_ = lean_array_fget(v_array_3462_, v_start_3463_);
v___x_3491_ = lean_nat_add(v_start_3463_, v___x_3466_);
lean_dec(v_start_3463_);
if (v_isShared_3486_ == 0)
{
lean_ctor_set(v___x_3485_, 1, v___x_3491_);
v___x_3493_ = v___x_3485_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v_array_3462_);
lean_ctor_set(v_reuseFailAlloc_3554_, 1, v___x_3491_);
lean_ctor_set(v_reuseFailAlloc_3554_, 2, v_stop_3464_);
v___x_3493_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
uint8_t v___x_3494_; 
v___x_3494_ = lean_nat_dec_lt(v_start_3488_, v_stop_3489_);
if (v___x_3494_ == 0)
{
lean_object* v___x_3496_; 
lean_dec(v___x_3490_);
lean_dec(v___x_3465_);
lean_dec_ref(v_xs_3410_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 1, v___x_3469_);
lean_ctor_set(v___x_3440_, 0, v___x_3493_);
v___x_3496_ = v___x_3440_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v___x_3493_);
lean_ctor_set(v_reuseFailAlloc_3507_, 1, v___x_3469_);
v___x_3496_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
lean_object* v___x_3498_; 
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3496_);
v___x_3498_ = v___x_3436_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_fst_3434_);
lean_ctor_set(v_reuseFailAlloc_3506_, 1, v___x_3496_);
v___x_3498_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
lean_object* v___x_3500_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 1, v___x_3498_);
v___x_3500_ = v___x_3432_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_fst_3430_);
lean_ctor_set(v_reuseFailAlloc_3505_, 1, v___x_3498_);
v___x_3500_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
lean_object* v___x_3502_; 
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 1, v___x_3500_);
v___x_3502_ = v___x_3428_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_fst_3426_);
lean_ctor_set(v_reuseFailAlloc_3504_, 1, v___x_3500_);
v___x_3502_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
lean_object* v___x_3503_; 
v___x_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
return v___x_3503_;
}
}
}
}
}
else
{
lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3550_; 
lean_inc(v_stop_3489_);
lean_inc(v_start_3488_);
lean_inc_ref(v_array_3487_);
lean_del_object(v___x_3428_);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_fst_3434_);
if (v_isSharedCheck_3550_ == 0)
{
lean_object* v_unused_3551_; lean_object* v_unused_3552_; lean_object* v_unused_3553_; 
v_unused_3551_ = lean_ctor_get(v_fst_3434_, 2);
lean_dec(v_unused_3551_);
v_unused_3552_ = lean_ctor_get(v_fst_3434_, 1);
lean_dec(v_unused_3552_);
v_unused_3553_ = lean_ctor_get(v_fst_3434_, 0);
lean_dec(v_unused_3553_);
v___x_3509_ = v_fst_3434_;
v_isShared_3510_ = v_isSharedCheck_3550_;
goto v_resetjp_3508_;
}
else
{
lean_dec(v_fst_3434_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3550_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v_a_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3515_; 
v_a_3511_ = lean_array_uget_borrowed(v_as_3411_, v_i_3413_);
v___x_3512_ = lean_array_fget(v_array_3487_, v_start_3488_);
v___x_3513_ = lean_nat_add(v_start_3488_, v___x_3466_);
lean_dec(v_start_3488_);
if (v_isShared_3510_ == 0)
{
lean_ctor_set(v___x_3509_, 1, v___x_3513_);
v___x_3515_ = v___x_3509_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_array_3487_);
lean_ctor_set(v_reuseFailAlloc_3549_, 1, v___x_3513_);
lean_ctor_set(v_reuseFailAlloc_3549_, 2, v_stop_3489_);
v___x_3515_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
lean_object* v___x_3516_; 
lean_inc_ref(v_xs_3410_);
lean_inc(v_a_3511_);
v___x_3516_ = l_Lean_Elab_Structural_getRecArgInfos(v_a_3511_, v___x_3465_, v_xs_3410_, v___x_3512_, v___x_3490_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v_fst_3518_; lean_object* v_snd_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3540_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3517_);
lean_dec_ref_known(v___x_3516_, 1);
v_fst_3518_ = lean_ctor_get(v_a_3517_, 0);
v_snd_3519_ = lean_ctor_get(v_a_3517_, 1);
v_isSharedCheck_3540_ = !lean_is_exclusive(v_a_3517_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3521_ = v_a_3517_;
v_isShared_3522_ = v_isSharedCheck_3540_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_snd_3519_);
lean_inc(v_fst_3518_);
lean_dec(v_a_3517_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3540_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3526_; 
v___x_3523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3523_, 0, v_fst_3426_);
lean_ctor_set(v___x_3523_, 1, v_snd_3519_);
v___x_3524_ = lean_array_push(v_fst_3430_, v_fst_3518_);
if (v_isShared_3522_ == 0)
{
lean_ctor_set(v___x_3521_, 1, v___x_3469_);
lean_ctor_set(v___x_3521_, 0, v___x_3493_);
v___x_3526_ = v___x_3521_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v___x_3493_);
lean_ctor_set(v_reuseFailAlloc_3539_, 1, v___x_3469_);
v___x_3526_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
lean_object* v___x_3528_; 
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 1, v___x_3526_);
lean_ctor_set(v___x_3440_, 0, v___x_3515_);
v___x_3528_ = v___x_3440_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___x_3515_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v___x_3526_);
v___x_3528_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
lean_object* v___x_3530_; 
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 1, v___x_3528_);
lean_ctor_set(v___x_3436_, 0, v___x_3524_);
v___x_3530_ = v___x_3436_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3524_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
lean_object* v___x_3532_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 1, v___x_3530_);
lean_ctor_set(v___x_3432_, 0, v___x_3523_);
v___x_3532_ = v___x_3432_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3523_);
lean_ctor_set(v_reuseFailAlloc_3536_, 1, v___x_3530_);
v___x_3532_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
size_t v___x_3533_; size_t v___x_3534_; 
v___x_3533_ = ((size_t)1ULL);
v___x_3534_ = lean_usize_add(v_i_3413_, v___x_3533_);
v_i_3413_ = v___x_3534_;
v_b_3414_ = v___x_3532_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_dec_ref(v___x_3515_);
lean_dec_ref(v___x_3493_);
lean_dec_ref(v___x_3469_);
lean_del_object(v___x_3440_);
lean_del_object(v___x_3436_);
lean_del_object(v___x_3432_);
lean_dec(v_fst_3430_);
lean_dec(v_fst_3426_);
lean_dec_ref(v_xs_3410_);
v_a_3541_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3516_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3516_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0___boxed(lean_object* v_xs_3572_, lean_object* v_as_3573_, lean_object* v_sz_3574_, lean_object* v_i_3575_, lean_object* v_b_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
size_t v_sz_boxed_3582_; size_t v_i_boxed_3583_; lean_object* v_res_3584_; 
v_sz_boxed_3582_ = lean_unbox_usize(v_sz_3574_);
lean_dec(v_sz_3574_);
v_i_boxed_3583_ = lean_unbox_usize(v_i_3575_);
lean_dec(v_i_3575_);
v_res_3584_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0(v_xs_3572_, v_as_3573_, v_sz_boxed_3582_, v_i_boxed_3583_, v_b_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec_ref(v_as_3573_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__6(lean_object* v_a_3585_, lean_object* v_a_3586_){
_start:
{
if (lean_obj_tag(v_a_3585_) == 0)
{
lean_object* v___x_3587_; 
v___x_3587_ = l_List_reverse___redArg(v_a_3586_);
return v___x_3587_;
}
else
{
lean_object* v_head_3588_; lean_object* v_tail_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3598_; 
v_head_3588_ = lean_ctor_get(v_a_3585_, 0);
v_tail_3589_ = lean_ctor_get(v_a_3585_, 1);
v_isSharedCheck_3598_ = !lean_is_exclusive(v_a_3585_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3591_ = v_a_3585_;
v_isShared_3592_ = v_isSharedCheck_3598_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_tail_3589_);
lean_inc(v_head_3588_);
lean_dec(v_a_3585_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3598_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3593_; lean_object* v___x_3595_; 
v___x_3593_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_head_3588_);
if (v_isShared_3592_ == 0)
{
lean_ctor_set(v___x_3591_, 1, v_a_3586_);
lean_ctor_set(v___x_3591_, 0, v___x_3593_);
v___x_3595_ = v___x_3591_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v___x_3593_);
lean_ctor_set(v_reuseFailAlloc_3597_, 1, v_a_3586_);
v___x_3595_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
v_a_3585_ = v_tail_3589_;
v_a_3586_ = v___x_3595_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(lean_object* v_as_3599_, lean_object* v_j_3600_){
_start:
{
lean_object* v___x_3601_; uint8_t v___x_3602_; 
v___x_3601_ = lean_array_get_size(v_as_3599_);
v___x_3602_ = lean_nat_dec_lt(v_j_3600_, v___x_3601_);
if (v___x_3602_ == 0)
{
lean_object* v___x_3603_; 
lean_dec(v_j_3600_);
v___x_3603_ = lean_box(0);
return v___x_3603_;
}
else
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; uint8_t v___x_3607_; 
v___x_3604_ = lean_array_fget_borrowed(v_as_3599_, v_j_3600_);
v___x_3605_ = lean_array_get_size(v___x_3604_);
v___x_3606_ = lean_unsigned_to_nat(0u);
v___x_3607_ = lean_nat_dec_eq(v___x_3605_, v___x_3606_);
if (v___x_3607_ == 0)
{
lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3608_ = lean_unsigned_to_nat(1u);
v___x_3609_ = lean_nat_add(v_j_3600_, v___x_3608_);
lean_dec(v_j_3600_);
v_j_3600_ = v___x_3609_;
goto _start;
}
else
{
lean_object* v___x_3611_; 
v___x_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3611_, 0, v_j_3600_);
return v___x_3611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3___boxed(lean_object* v_as_3612_, lean_object* v_j_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(v_as_3612_, v_j_3613_);
lean_dec_ref(v_as_3612_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(lean_object* v_a_3615_, lean_object* v_as_3616_, size_t v_sz_3617_, size_t v_i_3618_, lean_object* v_b_3619_){
_start:
{
uint8_t v___x_3621_; 
v___x_3621_ = lean_usize_dec_lt(v_i_3618_, v_sz_3617_);
if (v___x_3621_ == 0)
{
lean_object* v___x_3622_; 
lean_dec_ref(v_a_3615_);
v___x_3622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3622_, 0, v_b_3619_);
return v___x_3622_;
}
else
{
lean_object* v_a_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; size_t v___x_3626_; size_t v___x_3627_; 
v_a_3623_ = lean_array_uget_borrowed(v_as_3616_, v_i_3618_);
lean_inc(v_a_3623_);
lean_inc_ref(v_a_3615_);
v___x_3624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3624_, 0, v_a_3615_);
lean_ctor_set(v___x_3624_, 1, v_a_3623_);
v___x_3625_ = lean_array_push(v_b_3619_, v___x_3624_);
v___x_3626_ = ((size_t)1ULL);
v___x_3627_ = lean_usize_add(v_i_3618_, v___x_3626_);
v_i_3618_ = v___x_3627_;
v_b_3619_ = v___x_3625_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg___boxed(lean_object* v_a_3629_, lean_object* v_as_3630_, lean_object* v_sz_3631_, lean_object* v_i_3632_, lean_object* v_b_3633_, lean_object* v___y_3634_){
_start:
{
size_t v_sz_boxed_3635_; size_t v_i_boxed_3636_; lean_object* v_res_3637_; 
v_sz_boxed_3635_ = lean_unbox_usize(v_sz_3631_);
lean_dec(v_sz_3631_);
v_i_boxed_3636_ = lean_unbox_usize(v_i_3632_);
lean_dec(v_i_3632_);
v_res_3637_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(v_a_3629_, v_as_3630_, v_sz_boxed_3635_, v_i_boxed_3636_, v_b_3633_);
lean_dec_ref(v_as_3630_);
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(lean_object* v_a_3638_, lean_object* v_xs_3639_, lean_object* v_as_3640_, size_t v_sz_3641_, size_t v_i_3642_, lean_object* v_b_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_){
_start:
{
uint8_t v___x_3649_; 
v___x_3649_ = lean_usize_dec_lt(v_i_3642_, v_sz_3641_);
if (v___x_3649_ == 0)
{
lean_object* v___x_3650_; 
lean_dec_ref(v_xs_3639_);
lean_dec_ref(v_a_3638_);
v___x_3650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3650_, 0, v_b_3643_);
return v___x_3650_;
}
else
{
lean_object* v_snd_3651_; lean_object* v_fst_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3695_; 
v_snd_3651_ = lean_ctor_get(v_b_3643_, 1);
v_fst_3652_ = lean_ctor_get(v_b_3643_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v_b_3643_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3654_ = v_b_3643_;
v_isShared_3655_ = v_isSharedCheck_3695_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_snd_3651_);
lean_inc(v_fst_3652_);
lean_dec(v_b_3643_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3695_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v_array_3656_; lean_object* v_start_3657_; lean_object* v_stop_3658_; uint8_t v___x_3659_; 
v_array_3656_ = lean_ctor_get(v_snd_3651_, 0);
v_start_3657_ = lean_ctor_get(v_snd_3651_, 1);
v_stop_3658_ = lean_ctor_get(v_snd_3651_, 2);
v___x_3659_ = lean_nat_dec_lt(v_start_3657_, v_stop_3658_);
if (v___x_3659_ == 0)
{
lean_object* v___x_3661_; 
lean_dec_ref(v_xs_3639_);
lean_dec_ref(v_a_3638_);
if (v_isShared_3655_ == 0)
{
v___x_3661_ = v___x_3654_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v_fst_3652_);
lean_ctor_set(v_reuseFailAlloc_3663_, 1, v_snd_3651_);
v___x_3661_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
lean_object* v___x_3662_; 
v___x_3662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3661_);
return v___x_3662_;
}
}
else
{
lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3691_; 
lean_inc(v_stop_3658_);
lean_inc(v_start_3657_);
lean_inc_ref(v_array_3656_);
v_isSharedCheck_3691_ = !lean_is_exclusive(v_snd_3651_);
if (v_isSharedCheck_3691_ == 0)
{
lean_object* v_unused_3692_; lean_object* v_unused_3693_; lean_object* v_unused_3694_; 
v_unused_3692_ = lean_ctor_get(v_snd_3651_, 2);
lean_dec(v_unused_3692_);
v_unused_3693_ = lean_ctor_get(v_snd_3651_, 1);
lean_dec(v_unused_3693_);
v_unused_3694_ = lean_ctor_get(v_snd_3651_, 0);
lean_dec(v_unused_3694_);
v___x_3665_ = v_snd_3651_;
v_isShared_3666_ = v_isSharedCheck_3691_;
goto v_resetjp_3664_;
}
else
{
lean_dec(v_snd_3651_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3691_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v_a_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3672_; 
v_a_3667_ = lean_array_uget_borrowed(v_as_3640_, v_i_3642_);
v___x_3668_ = lean_array_fget(v_array_3656_, v_start_3657_);
v___x_3669_ = lean_unsigned_to_nat(1u);
v___x_3670_ = lean_nat_add(v_start_3657_, v___x_3669_);
lean_dec(v_start_3657_);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 1, v___x_3670_);
v___x_3672_ = v___x_3665_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_array_3656_);
lean_ctor_set(v_reuseFailAlloc_3690_, 1, v___x_3670_);
lean_ctor_set(v_reuseFailAlloc_3690_, 2, v_stop_3658_);
v___x_3672_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
lean_object* v___x_3673_; 
lean_inc(v_a_3667_);
lean_inc_ref(v_xs_3639_);
lean_inc_ref(v_a_3638_);
v___x_3673_ = l_Lean_Elab_Structural_argsInGroup(v_a_3638_, v_xs_3639_, v_a_3667_, v___x_3668_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_);
lean_dec(v___x_3668_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; lean_object* v___x_3677_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref_known(v___x_3673_, 1);
v___x_3675_ = lean_array_push(v_fst_3652_, v_a_3674_);
if (v_isShared_3655_ == 0)
{
lean_ctor_set(v___x_3654_, 1, v___x_3672_);
lean_ctor_set(v___x_3654_, 0, v___x_3675_);
v___x_3677_ = v___x_3654_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v___x_3675_);
lean_ctor_set(v_reuseFailAlloc_3681_, 1, v___x_3672_);
v___x_3677_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
size_t v___x_3678_; size_t v___x_3679_; 
v___x_3678_ = ((size_t)1ULL);
v___x_3679_ = lean_usize_add(v_i_3642_, v___x_3678_);
v_i_3642_ = v___x_3679_;
v_b_3643_ = v___x_3677_;
goto _start;
}
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec_ref(v___x_3672_);
lean_del_object(v___x_3654_);
lean_dec(v_fst_3652_);
lean_dec_ref(v_xs_3639_);
lean_dec_ref(v_a_3638_);
v_a_3682_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3673_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3673_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2___boxed(lean_object* v_a_3696_, lean_object* v_xs_3697_, lean_object* v_as_3698_, lean_object* v_sz_3699_, lean_object* v_i_3700_, lean_object* v_b_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
size_t v_sz_boxed_3707_; size_t v_i_boxed_3708_; lean_object* v_res_3709_; 
v_sz_boxed_3707_ = lean_unbox_usize(v_sz_3699_);
lean_dec(v_sz_3699_);
v_i_boxed_3708_ = lean_unbox_usize(v_i_3700_);
lean_dec(v_i_3700_);
v_res_3709_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(v_a_3696_, v_xs_3697_, v_as_3698_, v_sz_boxed_3707_, v_i_boxed_3708_, v_b_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec_ref(v_as_3698_);
return v_res_3709_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2(void){
_start:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; 
v___x_3713_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__1));
v___x_3714_ = l_Lean_stringToMessageData(v___x_3713_);
return v___x_3714_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4(void){
_start:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__3));
v___x_3717_ = l_Lean_stringToMessageData(v___x_3716_);
return v___x_3717_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6(void){
_start:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; 
v___x_3719_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__5));
v___x_3720_ = l_Lean_stringToMessageData(v___x_3719_);
return v___x_3720_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8(void){
_start:
{
lean_object* v___x_3722_; lean_object* v___x_3723_; 
v___x_3722_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__7));
v___x_3723_ = l_Lean_stringToMessageData(v___x_3722_);
return v___x_3723_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10(void){
_start:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___x_3725_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__9));
v___x_3726_ = l_Lean_stringToMessageData(v___x_3725_);
return v___x_3726_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12(void){
_start:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3728_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__11));
v___x_3729_ = l_Lean_stringToMessageData(v___x_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5(lean_object* v___x_3730_, lean_object* v_values_3731_, lean_object* v_xs_3732_, lean_object* v_fnNames_3733_, lean_object* v_as_3734_, size_t v_sz_3735_, size_t v_i_3736_, lean_object* v_b_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
lean_object* v_a_3744_; uint8_t v___x_3748_; 
v___x_3748_ = lean_usize_dec_lt(v_i_3736_, v_sz_3735_);
if (v___x_3748_ == 0)
{
lean_object* v___x_3749_; 
lean_dec_ref(v_xs_3732_);
lean_dec_ref(v___x_3730_);
v___x_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3749_, 0, v_b_3737_);
return v___x_3749_;
}
else
{
lean_object* v_fst_3750_; lean_object* v_snd_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3825_; 
v_fst_3750_ = lean_ctor_get(v_b_3737_, 0);
v_snd_3751_ = lean_ctor_get(v_b_3737_, 1);
v_isSharedCheck_3825_ = !lean_is_exclusive(v_b_3737_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3753_ = v_b_3737_;
v_isShared_3754_ = v_isSharedCheck_3825_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_snd_3751_);
lean_inc(v_fst_3750_);
lean_dec(v_b_3737_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3825_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3755_; lean_object* v_recArgInfoss_3756_; lean_object* v___x_3757_; lean_object* v_a_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3762_; 
v___x_3755_ = lean_unsigned_to_nat(0u);
v_recArgInfoss_3756_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0));
v___x_3757_ = lean_box(0);
v_a_3758_ = lean_array_uget_borrowed(v_as_3734_, v_i_3736_);
v___x_3759_ = lean_array_get_size(v___x_3730_);
lean_inc_ref(v___x_3730_);
v___x_3760_ = l_Array_toSubarray___redArg(v___x_3730_, v___x_3755_, v___x_3759_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 1, v___x_3760_);
lean_ctor_set(v___x_3753_, 0, v_recArgInfoss_3756_);
v___x_3762_ = v___x_3753_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_recArgInfoss_3756_);
lean_ctor_set(v_reuseFailAlloc_3824_, 1, v___x_3760_);
v___x_3762_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
size_t v_sz_3763_; size_t v___x_3764_; lean_object* v___x_3765_; 
v_sz_3763_ = lean_array_size(v_values_3731_);
v___x_3764_ = ((size_t)0ULL);
lean_inc_ref(v_xs_3732_);
lean_inc(v_a_3758_);
v___x_3765_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(v_a_3758_, v_xs_3732_, v_values_3731_, v_sz_3763_, v___x_3764_, v___x_3762_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; lean_object* v_fst_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3814_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
lean_inc(v_a_3766_);
lean_dec_ref_known(v___x_3765_, 1);
v_fst_3767_ = lean_ctor_get(v_a_3766_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v_a_3766_);
if (v_isSharedCheck_3814_ == 0)
{
lean_object* v_unused_3815_; 
v_unused_3815_ = lean_ctor_get(v_a_3766_, 1);
lean_dec(v_unused_3815_);
v___x_3769_ = v_a_3766_;
v_isShared_3770_ = v_isSharedCheck_3814_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_fst_3767_);
lean_dec(v_a_3766_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3814_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3771_; 
v___x_3771_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(v_fst_3767_, v___x_3755_);
if (lean_obj_tag(v___x_3771_) == 1)
{
lean_object* v_val_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3785_; 
lean_dec(v_fst_3767_);
v_val_3772_ = lean_ctor_get(v___x_3771_, 0);
lean_inc(v_val_3772_);
lean_dec_ref_known(v___x_3771_, 1);
v___x_3773_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2);
lean_inc(v_a_3758_);
v___x_3774_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_a_3758_);
v___x_3775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3773_);
lean_ctor_set(v___x_3775_, 1, v___x_3774_);
v___x_3776_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4);
v___x_3777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3775_);
lean_ctor_set(v___x_3777_, 1, v___x_3776_);
v___x_3778_ = lean_array_get_borrowed(v___x_3757_, v_fnNames_3733_, v_val_3772_);
lean_dec(v_val_3772_);
lean_inc(v___x_3778_);
v___x_3779_ = l_Lean_MessageData_ofName(v___x_3778_);
v___x_3780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3777_);
lean_ctor_set(v___x_3780_, 1, v___x_3779_);
v___x_3781_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6);
v___x_3782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3780_);
lean_ctor_set(v___x_3782_, 1, v___x_3781_);
v___x_3783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3783_, 0, v_fst_3750_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 1, v_snd_3751_);
lean_ctor_set(v___x_3769_, 0, v___x_3783_);
v___x_3785_ = v___x_3769_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3783_);
lean_ctor_set(v_reuseFailAlloc_3786_, 1, v_snd_3751_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
v_a_3744_ = v___x_3785_;
goto v___jp_3743_;
}
}
else
{
lean_object* v___x_3787_; 
lean_dec(v___x_3771_);
v___x_3787_ = l_Lean_Elab_Structural_allCombinations___redArg(v_fst_3767_);
lean_dec(v_fst_3767_);
if (lean_obj_tag(v___x_3787_) == 1)
{
lean_object* v_val_3788_; size_t v_sz_3789_; lean_object* v___x_3790_; 
v_val_3788_ = lean_ctor_get(v___x_3787_, 0);
lean_inc(v_val_3788_);
lean_dec_ref_known(v___x_3787_, 1);
v_sz_3789_ = lean_array_size(v_val_3788_);
lean_inc(v_a_3758_);
v___x_3790_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(v_a_3758_, v_val_3788_, v_sz_3789_, v___x_3764_, v_snd_3751_);
lean_dec(v_val_3788_);
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_object* v_a_3791_; lean_object* v___x_3793_; 
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
lean_inc(v_a_3791_);
lean_dec_ref_known(v___x_3790_, 1);
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 1, v_a_3791_);
lean_ctor_set(v___x_3769_, 0, v_fst_3750_);
v___x_3793_ = v___x_3769_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_fst_3750_);
lean_ctor_set(v_reuseFailAlloc_3794_, 1, v_a_3791_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
v_a_3744_ = v___x_3793_;
goto v___jp_3743_;
}
}
else
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
lean_del_object(v___x_3769_);
lean_dec(v_fst_3750_);
lean_dec_ref(v_xs_3732_);
lean_dec_ref(v___x_3730_);
v_a_3795_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3797_ = v___x_3790_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3790_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3800_; 
if (v_isShared_3798_ == 0)
{
v___x_3800_ = v___x_3797_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3795_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
return v___x_3800_;
}
}
}
}
else
{
lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3812_; 
lean_dec(v___x_3787_);
v___x_3803_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8);
lean_inc(v_a_3758_);
v___x_3804_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_a_3758_);
v___x_3805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3803_);
lean_ctor_set(v___x_3805_, 1, v___x_3804_);
v___x_3806_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10);
v___x_3807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3805_);
lean_ctor_set(v___x_3807_, 1, v___x_3806_);
v___x_3808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3808_, 0, v_fst_3750_);
lean_ctor_set(v___x_3808_, 1, v___x_3807_);
v___x_3809_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12);
v___x_3810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3808_);
lean_ctor_set(v___x_3810_, 1, v___x_3809_);
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 1, v_snd_3751_);
lean_ctor_set(v___x_3769_, 0, v___x_3810_);
v___x_3812_ = v___x_3769_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3810_);
lean_ctor_set(v_reuseFailAlloc_3813_, 1, v_snd_3751_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
v_a_3744_ = v___x_3812_;
goto v___jp_3743_;
}
}
}
}
}
else
{
lean_object* v_a_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3823_; 
lean_dec(v_snd_3751_);
lean_dec(v_fst_3750_);
lean_dec_ref(v_xs_3732_);
lean_dec_ref(v___x_3730_);
v_a_3816_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3818_ = v___x_3765_;
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_a_3816_);
lean_dec(v___x_3765_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3821_; 
if (v_isShared_3819_ == 0)
{
v___x_3821_ = v___x_3818_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3816_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
}
}
}
v___jp_3743_:
{
size_t v___x_3745_; size_t v___x_3746_; 
v___x_3745_ = ((size_t)1ULL);
v___x_3746_ = lean_usize_add(v_i_3736_, v___x_3745_);
v_i_3736_ = v___x_3746_;
v_b_3737_ = v_a_3744_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___boxed(lean_object* v___x_3826_, lean_object* v_values_3827_, lean_object* v_xs_3828_, lean_object* v_fnNames_3829_, lean_object* v_as_3830_, lean_object* v_sz_3831_, lean_object* v_i_3832_, lean_object* v_b_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_){
_start:
{
size_t v_sz_boxed_3839_; size_t v_i_boxed_3840_; lean_object* v_res_3841_; 
v_sz_boxed_3839_ = lean_unbox_usize(v_sz_3831_);
lean_dec(v_sz_3831_);
v_i_boxed_3840_ = lean_unbox_usize(v_i_3832_);
lean_dec(v_i_3832_);
v_res_3841_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5(v___x_3826_, v_values_3827_, v_xs_3828_, v_fnNames_3829_, v_as_3830_, v_sz_boxed_3839_, v_i_boxed_3840_, v_b_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_);
lean_dec(v___y_3837_);
lean_dec_ref(v___y_3836_);
lean_dec(v___y_3835_);
lean_dec_ref(v___y_3834_);
lean_dec_ref(v_as_3830_);
lean_dec_ref(v_fnNames_3829_);
lean_dec_ref(v_values_3827_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5(lean_object* v_xs_3842_, lean_object* v___x_3843_, lean_object* v_values_3844_, lean_object* v_fnNames_3845_, lean_object* v_as_3846_, size_t v_sz_3847_, size_t v_i_3848_, lean_object* v_b_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_){
_start:
{
lean_object* v_a_3856_; uint8_t v___x_3860_; 
v___x_3860_ = lean_usize_dec_lt(v_i_3848_, v_sz_3847_);
if (v___x_3860_ == 0)
{
lean_object* v___x_3861_; 
lean_dec_ref(v___x_3843_);
lean_dec_ref(v_xs_3842_);
v___x_3861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3861_, 0, v_b_3849_);
return v___x_3861_;
}
else
{
lean_object* v_fst_3862_; lean_object* v_snd_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3937_; 
v_fst_3862_ = lean_ctor_get(v_b_3849_, 0);
v_snd_3863_ = lean_ctor_get(v_b_3849_, 1);
v_isSharedCheck_3937_ = !lean_is_exclusive(v_b_3849_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3865_ = v_b_3849_;
v_isShared_3866_ = v_isSharedCheck_3937_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_snd_3863_);
lean_inc(v_fst_3862_);
lean_dec(v_b_3849_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3937_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3867_; lean_object* v_recArgInfoss_3868_; lean_object* v___x_3869_; lean_object* v_a_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3874_; 
v___x_3867_ = lean_unsigned_to_nat(0u);
v_recArgInfoss_3868_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__0));
v___x_3869_ = lean_box(0);
v_a_3870_ = lean_array_uget_borrowed(v_as_3846_, v_i_3848_);
v___x_3871_ = lean_array_get_size(v___x_3843_);
lean_inc_ref(v___x_3843_);
v___x_3872_ = l_Array_toSubarray___redArg(v___x_3843_, v___x_3867_, v___x_3871_);
if (v_isShared_3866_ == 0)
{
lean_ctor_set(v___x_3865_, 1, v___x_3872_);
lean_ctor_set(v___x_3865_, 0, v_recArgInfoss_3868_);
v___x_3874_ = v___x_3865_;
goto v_reusejp_3873_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_recArgInfoss_3868_);
lean_ctor_set(v_reuseFailAlloc_3936_, 1, v___x_3872_);
v___x_3874_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3873_;
}
v_reusejp_3873_:
{
size_t v_sz_3875_; size_t v___x_3876_; lean_object* v___x_3877_; 
v_sz_3875_ = lean_array_size(v_values_3844_);
v___x_3876_ = ((size_t)0ULL);
lean_inc_ref(v_xs_3842_);
lean_inc(v_a_3870_);
v___x_3877_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__2(v_a_3870_, v_xs_3842_, v_values_3844_, v_sz_3875_, v___x_3876_, v___x_3874_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_object* v_a_3878_; lean_object* v_fst_3879_; lean_object* v___x_3881_; uint8_t v_isShared_3882_; uint8_t v_isSharedCheck_3926_; 
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
lean_inc(v_a_3878_);
lean_dec_ref_known(v___x_3877_, 1);
v_fst_3879_ = lean_ctor_get(v_a_3878_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v_a_3878_);
if (v_isSharedCheck_3926_ == 0)
{
lean_object* v_unused_3927_; 
v_unused_3927_ = lean_ctor_get(v_a_3878_, 1);
lean_dec(v_unused_3927_);
v___x_3881_ = v_a_3878_;
v_isShared_3882_ = v_isSharedCheck_3926_;
goto v_resetjp_3880_;
}
else
{
lean_inc(v_fst_3879_);
lean_dec(v_a_3878_);
v___x_3881_ = lean_box(0);
v_isShared_3882_ = v_isSharedCheck_3926_;
goto v_resetjp_3880_;
}
v_resetjp_3880_:
{
lean_object* v___x_3883_; 
v___x_3883_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__3(v_fst_3879_, v___x_3867_);
if (lean_obj_tag(v___x_3883_) == 1)
{
lean_object* v_val_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3897_; 
lean_dec(v_fst_3879_);
v_val_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc(v_val_3884_);
lean_dec_ref_known(v___x_3883_, 1);
v___x_3885_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__2);
lean_inc(v_a_3870_);
v___x_3886_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_a_3870_);
v___x_3887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3885_);
lean_ctor_set(v___x_3887_, 1, v___x_3886_);
v___x_3888_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__4);
v___x_3889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3887_);
lean_ctor_set(v___x_3889_, 1, v___x_3888_);
v___x_3890_ = lean_array_get_borrowed(v___x_3869_, v_fnNames_3845_, v_val_3884_);
lean_dec(v_val_3884_);
lean_inc(v___x_3890_);
v___x_3891_ = l_Lean_MessageData_ofName(v___x_3890_);
v___x_3892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3889_);
lean_ctor_set(v___x_3892_, 1, v___x_3891_);
v___x_3893_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__6);
v___x_3894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3892_);
lean_ctor_set(v___x_3894_, 1, v___x_3893_);
v___x_3895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3895_, 0, v_fst_3862_);
lean_ctor_set(v___x_3895_, 1, v___x_3894_);
if (v_isShared_3882_ == 0)
{
lean_ctor_set(v___x_3881_, 1, v_snd_3863_);
lean_ctor_set(v___x_3881_, 0, v___x_3895_);
v___x_3897_ = v___x_3881_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v___x_3895_);
lean_ctor_set(v_reuseFailAlloc_3898_, 1, v_snd_3863_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
v_a_3856_ = v___x_3897_;
goto v___jp_3855_;
}
}
else
{
lean_object* v___x_3899_; 
lean_dec(v___x_3883_);
v___x_3899_ = l_Lean_Elab_Structural_allCombinations___redArg(v_fst_3879_);
lean_dec(v_fst_3879_);
if (lean_obj_tag(v___x_3899_) == 1)
{
lean_object* v_val_3900_; size_t v_sz_3901_; lean_object* v___x_3902_; 
v_val_3900_ = lean_ctor_get(v___x_3899_, 0);
lean_inc(v_val_3900_);
lean_dec_ref_known(v___x_3899_, 1);
v_sz_3901_ = lean_array_size(v_val_3900_);
lean_inc(v_a_3870_);
v___x_3902_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(v_a_3870_, v_val_3900_, v_sz_3901_, v___x_3876_, v_snd_3863_);
lean_dec(v_val_3900_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; lean_object* v___x_3905_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
lean_inc(v_a_3903_);
lean_dec_ref_known(v___x_3902_, 1);
if (v_isShared_3882_ == 0)
{
lean_ctor_set(v___x_3881_, 1, v_a_3903_);
lean_ctor_set(v___x_3881_, 0, v_fst_3862_);
v___x_3905_ = v___x_3881_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_fst_3862_);
lean_ctor_set(v_reuseFailAlloc_3906_, 1, v_a_3903_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
v_a_3856_ = v___x_3905_;
goto v___jp_3855_;
}
}
else
{
lean_object* v_a_3907_; lean_object* v___x_3909_; uint8_t v_isShared_3910_; uint8_t v_isSharedCheck_3914_; 
lean_del_object(v___x_3881_);
lean_dec(v_fst_3862_);
lean_dec_ref(v___x_3843_);
lean_dec_ref(v_xs_3842_);
v_a_3907_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3909_ = v___x_3902_;
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
else
{
lean_inc(v_a_3907_);
lean_dec(v___x_3902_);
v___x_3909_ = lean_box(0);
v_isShared_3910_ = v_isSharedCheck_3914_;
goto v_resetjp_3908_;
}
v_resetjp_3908_:
{
lean_object* v___x_3912_; 
if (v_isShared_3910_ == 0)
{
v___x_3912_ = v___x_3909_;
goto v_reusejp_3911_;
}
else
{
lean_object* v_reuseFailAlloc_3913_; 
v_reuseFailAlloc_3913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3913_, 0, v_a_3907_);
v___x_3912_ = v_reuseFailAlloc_3913_;
goto v_reusejp_3911_;
}
v_reusejp_3911_:
{
return v___x_3912_;
}
}
}
}
else
{
lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3924_; 
lean_dec(v___x_3899_);
v___x_3915_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__8);
lean_inc(v_a_3870_);
v___x_3916_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_a_3870_);
v___x_3917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3917_, 0, v___x_3915_);
lean_ctor_set(v___x_3917_, 1, v___x_3916_);
v___x_3918_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__10);
v___x_3919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3917_);
lean_ctor_set(v___x_3919_, 1, v___x_3918_);
v___x_3920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3920_, 0, v_fst_3862_);
lean_ctor_set(v___x_3920_, 1, v___x_3919_);
v___x_3921_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5___closed__12);
v___x_3922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3920_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
if (v_isShared_3882_ == 0)
{
lean_ctor_set(v___x_3881_, 1, v_snd_3863_);
lean_ctor_set(v___x_3881_, 0, v___x_3922_);
v___x_3924_ = v___x_3881_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v___x_3922_);
lean_ctor_set(v_reuseFailAlloc_3925_, 1, v_snd_3863_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
v_a_3856_ = v___x_3924_;
goto v___jp_3855_;
}
}
}
}
}
else
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3935_; 
lean_dec(v_snd_3863_);
lean_dec(v_fst_3862_);
lean_dec_ref(v___x_3843_);
lean_dec_ref(v_xs_3842_);
v_a_3928_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3930_ = v___x_3877_;
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v___x_3877_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v___x_3933_; 
if (v_isShared_3931_ == 0)
{
v___x_3933_ = v___x_3930_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_a_3928_);
v___x_3933_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
return v___x_3933_;
}
}
}
}
}
}
v___jp_3855_:
{
size_t v___x_3857_; size_t v___x_3858_; lean_object* v___x_3859_; 
v___x_3857_ = ((size_t)1ULL);
v___x_3858_ = lean_usize_add(v_i_3848_, v___x_3857_);
v___x_3859_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5_spec__5(v___x_3843_, v_values_3844_, v_xs_3842_, v_fnNames_3845_, v_as_3846_, v_sz_3847_, v___x_3858_, v_a_3856_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_);
return v___x_3859_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5___boxed(lean_object* v_xs_3938_, lean_object* v___x_3939_, lean_object* v_values_3940_, lean_object* v_fnNames_3941_, lean_object* v_as_3942_, lean_object* v_sz_3943_, lean_object* v_i_3944_, lean_object* v_b_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
size_t v_sz_boxed_3951_; size_t v_i_boxed_3952_; lean_object* v_res_3953_; 
v_sz_boxed_3951_ = lean_unbox_usize(v_sz_3943_);
lean_dec(v_sz_3943_);
v_i_boxed_3952_ = lean_unbox_usize(v_i_3944_);
lean_dec(v_i_3944_);
v_res_3953_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5(v_xs_3938_, v___x_3939_, v_values_3940_, v_fnNames_3941_, v_as_3942_, v_sz_boxed_3951_, v_i_boxed_3952_, v_b_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
lean_dec(v___y_3949_);
lean_dec_ref(v___y_3948_);
lean_dec(v___y_3947_);
lean_dec_ref(v___y_3946_);
lean_dec_ref(v_as_3942_);
lean_dec_ref(v_fnNames_3941_);
lean_dec_ref(v_values_3940_);
return v_res_3953_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__3(void){
_start:
{
lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3959_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__2));
v___x_3960_ = l_Lean_MessageData_ofFormat(v___x_3959_);
return v___x_3960_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__5(void){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3962_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__4));
v___x_3963_ = l_Lean_stringToMessageData(v___x_3962_);
return v___x_3963_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__8(void){
_start:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; 
v___x_3967_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__7));
v___x_3968_ = l_Lean_stringToMessageData(v___x_3967_);
return v___x_3968_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__9(void){
_start:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3969_ = lean_box(1);
v___x_3970_ = l_Lean_MessageData_ofFormat(v___x_3969_);
return v___x_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_findRecArgCandidates(lean_object* v_fnNames_3971_, lean_object* v_fixedParamPerms_3972_, lean_object* v_xs_3973_, lean_object* v_values_3974_, lean_object* v_termMeasure_x3fs_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_){
_start:
{
lean_object* v___x_3981_; lean_object* v_candidates_3982_; lean_object* v___x_3983_; lean_object* v_perms_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v_report_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; size_t v_sz_3995_; size_t v___x_3996_; lean_object* v___x_3997_; 
v___x_3981_ = lean_unsigned_to_nat(0u);
v_candidates_3982_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__0));
v___x_3983_ = lean_array_get_size(v_values_3974_);
v_perms_3984_ = lean_ctor_get(v_fixedParamPerms_3972_, 1);
lean_inc_ref(v_perms_3984_);
lean_dec_ref(v_fixedParamPerms_3972_);
lean_inc_ref(v_values_3974_);
v___x_3985_ = l_Array_toSubarray___redArg(v_values_3974_, v___x_3981_, v___x_3983_);
v___x_3986_ = lean_array_get_size(v_termMeasure_x3fs_3975_);
v_report_3987_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__3);
v___x_3988_ = l_Array_toSubarray___redArg(v_termMeasure_x3fs_3975_, v___x_3981_, v___x_3986_);
v___x_3989_ = lean_array_get_size(v_perms_3984_);
v___x_3990_ = l_Array_toSubarray___redArg(v_perms_3984_, v___x_3981_, v___x_3989_);
v___x_3991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3991_, 0, v___x_3988_);
lean_ctor_set(v___x_3991_, 1, v___x_3990_);
v___x_3992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3985_);
lean_ctor_set(v___x_3992_, 1, v___x_3991_);
v___x_3993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3993_, 0, v_candidates_3982_);
lean_ctor_set(v___x_3993_, 1, v___x_3992_);
v___x_3994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3994_, 0, v_report_3987_);
lean_ctor_set(v___x_3994_, 1, v___x_3993_);
v_sz_3995_ = lean_array_size(v_fnNames_3971_);
v___x_3996_ = ((size_t)0ULL);
lean_inc_ref(v_xs_3973_);
v___x_3997_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__0(v_xs_3973_, v_fnNames_3971_, v_sz_3995_, v___x_3996_, v___x_3994_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_3997_) == 0)
{
lean_object* v_a_3998_; lean_object* v_snd_3999_; lean_object* v_toCold_4000_; lean_object* v_options_4001_; lean_object* v_fst_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4140_; 
v_a_3998_ = lean_ctor_get(v___x_3997_, 0);
lean_inc(v_a_3998_);
lean_dec_ref_known(v___x_3997_, 1);
v_snd_3999_ = lean_ctor_get(v_a_3998_, 1);
lean_inc(v_snd_3999_);
v_toCold_4000_ = lean_ctor_get(v_a_3978_, 0);
v_options_4001_ = lean_ctor_get(v_toCold_4000_, 2);
v_fst_4002_ = lean_ctor_get(v_a_3998_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v_a_3998_);
if (v_isSharedCheck_4140_ == 0)
{
lean_object* v_unused_4141_; 
v_unused_4141_ = lean_ctor_get(v_a_3998_, 1);
lean_dec(v_unused_4141_);
v___x_4004_ = v_a_3998_;
v_isShared_4005_ = v_isSharedCheck_4140_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_fst_4002_);
lean_dec(v_a_3998_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4140_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v_fst_4006_; lean_object* v___x_4008_; uint8_t v_isShared_4009_; uint8_t v_isSharedCheck_4138_; 
v_fst_4006_ = lean_ctor_get(v_snd_3999_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v_snd_3999_);
if (v_isSharedCheck_4138_ == 0)
{
lean_object* v_unused_4139_; 
v_unused_4139_ = lean_ctor_get(v_snd_3999_, 1);
lean_dec(v_unused_4139_);
v___x_4008_ = v_snd_3999_;
v_isShared_4009_ = v_isSharedCheck_4138_;
goto v_resetjp_4007_;
}
else
{
lean_inc(v_fst_4006_);
lean_dec(v_snd_3999_);
v___x_4008_ = lean_box(0);
v_isShared_4009_ = v_isSharedCheck_4138_;
goto v_resetjp_4007_;
}
v_resetjp_4007_:
{
lean_object* v_inheritedTraceOptions_4010_; uint8_t v_hasTrace_4011_; size_t v_sz_4012_; lean_object* v___x_4013_; lean_object* v___y_4015_; lean_object* v_report_4016_; lean_object* v___y_4017_; lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v___y_4054_; lean_object* v___y_4055_; lean_object* v___y_4056_; lean_object* v___x_4063_; lean_object* v___y_4065_; lean_object* v___y_4066_; lean_object* v___y_4067_; lean_object* v___y_4068_; lean_object* v___y_4069_; lean_object* v___y_4103_; lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; 
v_inheritedTraceOptions_4010_ = lean_ctor_get(v_toCold_4000_, 11);
v_hasTrace_4011_ = lean_ctor_get_uint8(v_options_4001_, sizeof(void*)*1);
v_sz_4012_ = lean_array_size(v_fst_4006_);
v___x_4013_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_findRecArgCandidates_spec__1(v_sz_4012_, v___x_3996_, v_fst_4006_);
v___x_4063_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9));
if (v_hasTrace_4011_ == 0)
{
v___y_4103_ = v_a_3976_;
v___y_4104_ = v_a_3977_;
v___y_4105_ = v_a_3978_;
v___y_4106_ = v_a_3979_;
goto v___jp_4102_;
}
else
{
lean_object* v___x_4112_; uint8_t v___x_4113_; 
v___x_4112_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12);
v___x_4113_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4010_, v_options_4001_, v___x_4112_);
if (v___x_4113_ == 0)
{
v___y_4103_ = v_a_3976_;
v___y_4104_ = v_a_3977_;
v___y_4105_ = v_a_3978_;
v___y_4106_ = v_a_3979_;
goto v___jp_4102_;
}
else
{
lean_object* v___x_4114_; lean_object* v___y_4116_; lean_object* v___x_4133_; lean_object* v___x_4134_; uint8_t v___x_4135_; 
v___x_4114_ = lean_obj_once(&l_Lean_Elab_Structural_findRecArgCandidates___closed__8, &l_Lean_Elab_Structural_findRecArgCandidates___closed__8_once, _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__8);
v___x_4133_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__6));
v___x_4134_ = lean_array_get_size(v___x_4013_);
v___x_4135_ = lean_nat_dec_lt(v___x_3981_, v___x_4134_);
if (v___x_4135_ == 0)
{
v___y_4116_ = v___x_4133_;
goto v___jp_4115_;
}
else
{
size_t v___x_4136_; lean_object* v___x_4137_; 
v___x_4136_ = lean_usize_of_nat(v___x_4134_);
v___x_4137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(v___x_4013_, v___x_3996_, v___x_4136_, v___x_4133_);
v___y_4116_ = v___x_4137_;
goto v___jp_4115_;
}
v___jp_4115_:
{
lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; 
v___x_4117_ = lean_array_to_list(v___y_4116_);
v___x_4118_ = lean_box(0);
v___x_4119_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__8(v___x_4117_, v___x_4118_);
v___x_4120_ = lean_obj_once(&l_Lean_Elab_Structural_findRecArgCandidates___closed__9, &l_Lean_Elab_Structural_findRecArgCandidates___closed__9_once, _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__9);
v___x_4121_ = l_Lean_MessageData_joinSep(v___x_4119_, v___x_4120_);
v___x_4122_ = l_Lean_indentD(v___x_4121_);
v___x_4123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4114_);
lean_ctor_set(v___x_4123_, 1, v___x_4122_);
v___x_4124_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v___x_4063_, v___x_4123_, v_a_3976_, v_a_3977_, v_a_3978_, v_a_3979_);
if (lean_obj_tag(v___x_4124_) == 0)
{
lean_dec_ref_known(v___x_4124_, 1);
v___y_4103_ = v_a_3976_;
v___y_4104_ = v_a_3977_;
v___y_4105_ = v_a_3978_;
v___y_4106_ = v_a_3979_;
goto v___jp_4102_;
}
else
{
lean_object* v_a_4125_; lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4132_; 
lean_dec_ref(v___x_4013_);
lean_del_object(v___x_4008_);
lean_del_object(v___x_4004_);
lean_dec(v_fst_4002_);
lean_dec_ref(v_values_3974_);
lean_dec_ref(v_xs_3973_);
v_a_4125_ = lean_ctor_get(v___x_4124_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v___x_4124_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4127_ = v___x_4124_;
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
else
{
lean_inc(v_a_4125_);
lean_dec(v___x_4124_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
lean_object* v___x_4130_; 
if (v_isShared_4128_ == 0)
{
v___x_4130_ = v___x_4127_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_a_4125_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
}
}
}
}
v___jp_4014_:
{
lean_object* v___x_4022_; 
if (v_isShared_4009_ == 0)
{
lean_ctor_set(v___x_4008_, 1, v_candidates_3982_);
lean_ctor_set(v___x_4008_, 0, v_report_4016_);
v___x_4022_ = v___x_4008_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_report_4016_);
lean_ctor_set(v_reuseFailAlloc_4050_, 1, v_candidates_3982_);
v___x_4022_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
size_t v_sz_4023_; lean_object* v___x_4024_; 
v_sz_4023_ = lean_array_size(v___y_4015_);
v___x_4024_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__5(v_xs_3973_, v___x_4013_, v_values_3974_, v_fnNames_3971_, v___y_4015_, v_sz_4023_, v___x_3996_, v___x_4022_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_);
lean_dec_ref(v___y_4015_);
lean_dec_ref(v_values_3974_);
if (lean_obj_tag(v___x_4024_) == 0)
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4041_; 
v_a_4025_ = lean_ctor_get(v___x_4024_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_4024_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4027_ = v___x_4024_;
v_isShared_4028_ = v_isSharedCheck_4041_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v___x_4024_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4041_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v_fst_4029_; lean_object* v_snd_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4040_; 
v_fst_4029_ = lean_ctor_get(v_a_4025_, 0);
v_snd_4030_ = lean_ctor_get(v_a_4025_, 1);
v_isSharedCheck_4040_ = !lean_is_exclusive(v_a_4025_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4032_ = v_a_4025_;
v_isShared_4033_ = v_isSharedCheck_4040_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_snd_4030_);
lean_inc(v_fst_4029_);
lean_dec(v_a_4025_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4040_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4035_; 
if (v_isShared_4033_ == 0)
{
lean_ctor_set(v___x_4032_, 1, v_fst_4029_);
lean_ctor_set(v___x_4032_, 0, v_snd_4030_);
v___x_4035_ = v___x_4032_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_snd_4030_);
lean_ctor_set(v_reuseFailAlloc_4039_, 1, v_fst_4029_);
v___x_4035_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_object* v___x_4037_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 0, v___x_4035_);
v___x_4037_ = v___x_4027_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v___x_4035_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
return v___x_4037_;
}
}
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4049_; 
v_a_4042_ = lean_ctor_get(v___x_4024_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___x_4024_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4044_ = v___x_4024_;
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v___x_4024_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_a_4042_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
return v___x_4047_;
}
}
}
}
}
v___jp_4051_:
{
lean_object* v___x_4057_; uint8_t v___x_4058_; 
v___x_4057_ = lean_array_get_size(v___y_4052_);
v___x_4058_ = lean_nat_dec_eq(v___x_4057_, v___x_3981_);
if (v___x_4058_ == 0)
{
lean_del_object(v___x_4004_);
v___y_4015_ = v___y_4052_;
v_report_4016_ = v_fst_4002_;
v___y_4017_ = v___y_4053_;
v___y_4018_ = v___y_4054_;
v___y_4019_ = v___y_4055_;
v___y_4020_ = v___y_4056_;
goto v___jp_4014_;
}
else
{
lean_object* v___x_4059_; lean_object* v___x_4061_; 
v___x_4059_ = lean_obj_once(&l_Lean_Elab_Structural_findRecArgCandidates___closed__3, &l_Lean_Elab_Structural_findRecArgCandidates___closed__3_once, _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__3);
if (v_isShared_4005_ == 0)
{
lean_ctor_set_tag(v___x_4004_, 7);
lean_ctor_set(v___x_4004_, 1, v___x_4059_);
v___x_4061_ = v___x_4004_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v_fst_4002_);
lean_ctor_set(v_reuseFailAlloc_4062_, 1, v___x_4059_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
v___y_4015_ = v___y_4052_;
v_report_4016_ = v___x_4061_;
v___y_4017_ = v___y_4053_;
v___y_4018_ = v___y_4054_;
v___y_4019_ = v___y_4055_;
v___y_4020_ = v___y_4056_;
goto v___jp_4014_;
}
}
}
v___jp_4064_:
{
lean_object* v___x_4070_; 
v___x_4070_ = l_Lean_Elab_Structural_inductiveGroups(v___y_4069_, v___y_4066_, v___y_4065_, v___y_4067_, v___y_4068_);
if (lean_obj_tag(v___x_4070_) == 0)
{
lean_object* v_toCold_4071_; lean_object* v_options_4072_; uint8_t v_hasTrace_4073_; 
v_toCold_4071_ = lean_ctor_get(v___y_4067_, 0);
v_options_4072_ = lean_ctor_get(v_toCold_4071_, 2);
v_hasTrace_4073_ = lean_ctor_get_uint8(v_options_4072_, sizeof(void*)*1);
if (v_hasTrace_4073_ == 0)
{
lean_object* v_a_4074_; 
v_a_4074_ = lean_ctor_get(v___x_4070_, 0);
lean_inc(v_a_4074_);
lean_dec_ref_known(v___x_4070_, 1);
v___y_4052_ = v_a_4074_;
v___y_4053_ = v___y_4066_;
v___y_4054_ = v___y_4065_;
v___y_4055_ = v___y_4067_;
v___y_4056_ = v___y_4068_;
goto v___jp_4051_;
}
else
{
lean_object* v_a_4075_; lean_object* v_inheritedTraceOptions_4076_; lean_object* v___x_4077_; uint8_t v___x_4078_; 
v_a_4075_ = lean_ctor_get(v___x_4070_, 0);
lean_inc(v_a_4075_);
lean_dec_ref_known(v___x_4070_, 1);
v_inheritedTraceOptions_4076_ = lean_ctor_get(v_toCold_4071_, 11);
v___x_4077_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12);
v___x_4078_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4076_, v_options_4072_, v___x_4077_);
if (v___x_4078_ == 0)
{
v___y_4052_ = v_a_4075_;
v___y_4053_ = v___y_4066_;
v___y_4054_ = v___y_4065_;
v___y_4055_ = v___y_4067_;
v___y_4056_ = v___y_4068_;
goto v___jp_4051_;
}
else
{
lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4079_ = lean_obj_once(&l_Lean_Elab_Structural_findRecArgCandidates___closed__5, &l_Lean_Elab_Structural_findRecArgCandidates___closed__5_once, _init_l_Lean_Elab_Structural_findRecArgCandidates___closed__5);
lean_inc(v_a_4075_);
v___x_4080_ = lean_array_to_list(v_a_4075_);
v___x_4081_ = lean_box(0);
v___x_4082_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__6(v___x_4080_, v___x_4081_);
v___x_4083_ = l_Lean_MessageData_ofList(v___x_4082_);
v___x_4084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4084_, 0, v___x_4079_);
lean_ctor_set(v___x_4084_, 1, v___x_4083_);
v___x_4085_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v___x_4063_, v___x_4084_, v___y_4066_, v___y_4065_, v___y_4067_, v___y_4068_);
if (lean_obj_tag(v___x_4085_) == 0)
{
lean_dec_ref_known(v___x_4085_, 1);
v___y_4052_ = v_a_4075_;
v___y_4053_ = v___y_4066_;
v___y_4054_ = v___y_4065_;
v___y_4055_ = v___y_4067_;
v___y_4056_ = v___y_4068_;
goto v___jp_4051_;
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
lean_dec(v_a_4075_);
lean_dec_ref(v___x_4013_);
lean_del_object(v___x_4008_);
lean_del_object(v___x_4004_);
lean_dec(v_fst_4002_);
lean_dec_ref(v_values_3974_);
lean_dec_ref(v_xs_3973_);
v_a_4086_ = lean_ctor_get(v___x_4085_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4085_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4085_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4085_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
lean_dec_ref(v___x_4013_);
lean_del_object(v___x_4008_);
lean_del_object(v___x_4004_);
lean_dec(v_fst_4002_);
lean_dec_ref(v_values_3974_);
lean_dec_ref(v_xs_3973_);
v_a_4094_ = lean_ctor_get(v___x_4070_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4070_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4070_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4070_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
v___jp_4102_:
{
lean_object* v___x_4107_; lean_object* v___x_4108_; uint8_t v___x_4109_; 
v___x_4107_ = ((lean_object*)(l_Lean_Elab_Structural_findRecArgCandidates___closed__6));
v___x_4108_ = lean_array_get_size(v___x_4013_);
v___x_4109_ = lean_nat_dec_lt(v___x_3981_, v___x_4108_);
if (v___x_4109_ == 0)
{
v___y_4065_ = v___y_4104_;
v___y_4066_ = v___y_4103_;
v___y_4067_ = v___y_4105_;
v___y_4068_ = v___y_4106_;
v___y_4069_ = v___x_4107_;
goto v___jp_4064_;
}
else
{
size_t v___x_4110_; lean_object* v___x_4111_; 
v___x_4110_ = lean_usize_of_nat(v___x_4108_);
v___x_4111_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_findRecArgCandidates_spec__7(v___x_4013_, v___x_3996_, v___x_4110_, v___x_4107_);
v___y_4065_ = v___y_4104_;
v___y_4066_ = v___y_4103_;
v___y_4067_ = v___y_4105_;
v___y_4068_ = v___y_4106_;
v___y_4069_ = v___x_4111_;
goto v___jp_4064_;
}
}
}
}
}
else
{
lean_object* v_a_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4149_; 
lean_dec_ref(v_values_3974_);
lean_dec_ref(v_xs_3973_);
v_a_4142_ = lean_ctor_get(v___x_3997_, 0);
v_isSharedCheck_4149_ = !lean_is_exclusive(v___x_3997_);
if (v_isSharedCheck_4149_ == 0)
{
v___x_4144_ = v___x_3997_;
v_isShared_4145_ = v_isSharedCheck_4149_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_a_4142_);
lean_dec(v___x_3997_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4149_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
lean_object* v___x_4147_; 
if (v_isShared_4145_ == 0)
{
v___x_4147_ = v___x_4144_;
goto v_reusejp_4146_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_a_4142_);
v___x_4147_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4146_;
}
v_reusejp_4146_:
{
return v___x_4147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_findRecArgCandidates___boxed(lean_object* v_fnNames_4150_, lean_object* v_fixedParamPerms_4151_, lean_object* v_xs_4152_, lean_object* v_values_4153_, lean_object* v_termMeasure_x3fs_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_){
_start:
{
lean_object* v_res_4160_; 
v_res_4160_ = l_Lean_Elab_Structural_findRecArgCandidates(v_fnNames_4150_, v_fixedParamPerms_4151_, v_xs_4152_, v_values_4153_, v_termMeasure_x3fs_4154_, v_a_4155_, v_a_4156_, v_a_4157_, v_a_4158_);
lean_dec(v_a_4158_);
lean_dec_ref(v_a_4157_);
lean_dec(v_a_4156_);
lean_dec_ref(v_a_4155_);
lean_dec_ref(v_fnNames_4150_);
return v_res_4160_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4(lean_object* v_a_4161_, lean_object* v_as_4162_, size_t v_sz_4163_, size_t v_i_4164_, lean_object* v_b_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_){
_start:
{
lean_object* v___x_4171_; 
v___x_4171_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___redArg(v_a_4161_, v_as_4162_, v_sz_4163_, v_i_4164_, v_b_4165_);
return v___x_4171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4___boxed(lean_object* v_a_4172_, lean_object* v_as_4173_, lean_object* v_sz_4174_, lean_object* v_i_4175_, lean_object* v_b_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_){
_start:
{
size_t v_sz_boxed_4182_; size_t v_i_boxed_4183_; lean_object* v_res_4184_; 
v_sz_boxed_4182_ = lean_unbox_usize(v_sz_4174_);
lean_dec(v_sz_4174_);
v_i_boxed_4183_ = lean_unbox_usize(v_i_4175_);
lean_dec(v_i_4175_);
v_res_4184_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_findRecArgCandidates_spec__4(v_a_4172_, v_as_4173_, v_sz_boxed_4182_, v_i_boxed_4183_, v_b_4176_, v___y_4177_, v___y_4178_, v___y_4179_, v___y_4180_);
lean_dec(v___y_4180_);
lean_dec_ref(v___y_4179_);
lean_dec(v___y_4178_);
lean_dec_ref(v___y_4177_);
lean_dec_ref(v_as_4173_);
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(lean_object* v_constName_4185_, uint8_t v_skipRealize_4186_, lean_object* v___y_4187_){
_start:
{
lean_object* v___x_4189_; lean_object* v_env_4190_; uint8_t v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4189_ = lean_st_ref_get(v___y_4187_);
v_env_4190_ = lean_ctor_get(v___x_4189_, 0);
lean_inc_ref(v_env_4190_);
lean_dec(v___x_4189_);
v___x_4191_ = l_Lean_Environment_contains(v_env_4190_, v_constName_4185_, v_skipRealize_4186_);
v___x_4192_ = lean_box(v___x_4191_);
v___x_4193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4193_, 0, v___x_4192_);
return v___x_4193_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg___boxed(lean_object* v_constName_4194_, lean_object* v_skipRealize_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_){
_start:
{
uint8_t v_skipRealize_boxed_4198_; lean_object* v_res_4199_; 
v_skipRealize_boxed_4198_ = lean_unbox(v_skipRealize_4195_);
v_res_4199_ = l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(v_constName_4194_, v_skipRealize_boxed_4198_, v___y_4196_);
lean_dec(v___y_4196_);
return v_res_4199_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0(lean_object* v_constName_4200_, uint8_t v_skipRealize_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_){
_start:
{
lean_object* v___x_4207_; 
v___x_4207_ = l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(v_constName_4200_, v_skipRealize_4201_, v___y_4205_);
return v___x_4207_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___boxed(lean_object* v_constName_4208_, lean_object* v_skipRealize_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
uint8_t v_skipRealize_boxed_4215_; lean_object* v_res_4216_; 
v_skipRealize_boxed_4215_ = lean_unbox(v_skipRealize_4209_);
v_res_4216_ = l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0(v_constName_4208_, v_skipRealize_boxed_4215_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_);
lean_dec(v___y_4213_);
lean_dec_ref(v___y_4212_);
lean_dec(v___y_4211_);
lean_dec_ref(v___y_4210_);
return v_res_4216_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(lean_object* v_x_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = l_Lean_Meta_saveState___redArg(v___y_4219_, v___y_4221_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v_a_4224_; lean_object* v___x_4225_; 
v_a_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_a_4224_);
lean_dec_ref_known(v___x_4223_, 1);
lean_inc(v___y_4221_);
lean_inc_ref(v___y_4220_);
lean_inc(v___y_4219_);
lean_inc_ref(v___y_4218_);
v___x_4225_ = lean_apply_5(v_x_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_, lean_box(0));
if (lean_obj_tag(v___x_4225_) == 0)
{
lean_dec(v_a_4224_);
return v___x_4225_;
}
else
{
lean_object* v_a_4226_; uint8_t v___x_4227_; 
v_a_4226_ = lean_ctor_get(v___x_4225_, 0);
lean_inc(v_a_4226_);
v___x_4227_ = l_Lean_Exception_isInterrupt(v_a_4226_);
if (v___x_4227_ == 0)
{
uint8_t v___x_4228_; 
lean_inc(v_a_4226_);
v___x_4228_ = l_Lean_Exception_isRuntime(v_a_4226_);
if (v___x_4228_ == 0)
{
lean_object* v___x_4229_; 
lean_dec_ref_known(v___x_4225_, 1);
v___x_4229_ = l_Lean_Meta_SavedState_restore___redArg(v_a_4224_, v___y_4219_, v___y_4221_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4236_; 
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4236_ == 0)
{
lean_object* v_unused_4237_; 
v_unused_4237_ = lean_ctor_get(v___x_4229_, 0);
lean_dec(v_unused_4237_);
v___x_4231_ = v___x_4229_;
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
else
{
lean_dec(v___x_4229_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___x_4234_; 
if (v_isShared_4232_ == 0)
{
lean_ctor_set_tag(v___x_4231_, 1);
lean_ctor_set(v___x_4231_, 0, v_a_4226_);
v___x_4234_ = v___x_4231_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_a_4226_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
return v___x_4234_;
}
}
}
else
{
lean_object* v_a_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4245_; 
lean_dec(v_a_4226_);
v_a_4238_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4245_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4245_ == 0)
{
v___x_4240_ = v___x_4229_;
v_isShared_4241_ = v_isSharedCheck_4245_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_a_4238_);
lean_dec(v___x_4229_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4245_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
lean_object* v___x_4243_; 
if (v_isShared_4241_ == 0)
{
v___x_4243_ = v___x_4240_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v_a_4238_);
v___x_4243_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
return v___x_4243_;
}
}
}
}
else
{
lean_dec(v_a_4226_);
lean_dec(v_a_4224_);
return v___x_4225_;
}
}
else
{
lean_dec(v_a_4226_);
lean_dec(v_a_4224_);
return v___x_4225_;
}
}
}
else
{
lean_object* v_a_4246_; lean_object* v___x_4248_; uint8_t v_isShared_4249_; uint8_t v_isSharedCheck_4253_; 
lean_dec_ref(v_x_4217_);
v_a_4246_ = lean_ctor_get(v___x_4223_, 0);
v_isSharedCheck_4253_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4248_ = v___x_4223_;
v_isShared_4249_ = v_isSharedCheck_4253_;
goto v_resetjp_4247_;
}
else
{
lean_inc(v_a_4246_);
lean_dec(v___x_4223_);
v___x_4248_ = lean_box(0);
v_isShared_4249_ = v_isSharedCheck_4253_;
goto v_resetjp_4247_;
}
v_resetjp_4247_:
{
lean_object* v___x_4251_; 
if (v_isShared_4249_ == 0)
{
v___x_4251_ = v___x_4248_;
goto v_reusejp_4250_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v_a_4246_);
v___x_4251_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4250_;
}
v_reusejp_4250_:
{
return v___x_4251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg___boxed(lean_object* v_x_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_){
_start:
{
lean_object* v_res_4260_; 
v_res_4260_ = l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(v_x_4254_, v___y_4255_, v___y_4256_, v___y_4257_, v___y_4258_);
lean_dec(v___y_4258_);
lean_dec_ref(v___y_4257_);
lean_dec(v___y_4256_);
lean_dec_ref(v___y_4255_);
return v_res_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1(lean_object* v_00_u03b1_4261_, lean_object* v_x_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_){
_start:
{
lean_object* v___x_4268_; 
v___x_4268_ = l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(v_x_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_);
return v___x_4268_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___boxed(lean_object* v_00_u03b1_4269_, lean_object* v_x_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
lean_object* v_res_4276_; 
v_res_4276_ = l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1(v_00_u03b1_4269_, v_x_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_);
lean_dec(v___y_4274_);
lean_dec_ref(v___y_4273_);
lean_dec(v___y_4272_);
lean_dec_ref(v___y_4271_);
return v_res_4276_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4278_; lean_object* v___x_4279_; 
v___x_4278_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__0));
v___x_4279_ = l_Lean_stringToMessageData(v___x_4278_);
return v___x_4279_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; 
v___x_4281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__2));
v___x_4282_ = l_Lean_stringToMessageData(v___x_4281_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0(lean_object* v___x_4283_, uint8_t v___x_4284_, lean_object* v_group_4285_, lean_object* v_k_4286_, lean_object* v_comb_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_){
_start:
{
lean_object* v___x_4293_; 
v___x_4293_ = l_Lean_hasConst___at___00Lean_Elab_Structural_tryCandidates_spec__0___redArg(v___x_4283_, v___x_4284_, v___y_4291_);
if (lean_obj_tag(v___x_4293_) == 0)
{
lean_object* v_a_4294_; uint8_t v___x_4295_; 
v_a_4294_ = lean_ctor_get(v___x_4293_, 0);
lean_inc(v_a_4294_);
lean_dec_ref_known(v___x_4293_, 1);
v___x_4295_ = lean_unbox(v_a_4294_);
lean_dec(v_a_4294_);
if (v___x_4295_ == 0)
{
lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
v___x_4296_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__1);
v___x_4297_ = l_Lean_Elab_Structural_IndGroupInst_toMessageData(v_group_4285_);
v___x_4298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4298_, 0, v___x_4296_);
lean_ctor_set(v___x_4298_, 1, v___x_4297_);
v___x_4299_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___closed__3);
v___x_4300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4300_, 0, v___x_4298_);
lean_ctor_set(v___x_4300_, 1, v___x_4299_);
v___x_4301_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_4300_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v___x_4302_; 
lean_dec_ref_known(v___x_4301_, 1);
v___x_4302_ = lean_apply_6(v_k_4286_, v_comb_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, lean_box(0));
return v___x_4302_;
}
else
{
lean_object* v_a_4303_; lean_object* v___x_4305_; uint8_t v_isShared_4306_; uint8_t v_isSharedCheck_4310_; 
lean_dec(v___y_4291_);
lean_dec_ref(v___y_4290_);
lean_dec(v___y_4289_);
lean_dec_ref(v___y_4288_);
lean_dec_ref(v_comb_4287_);
lean_dec_ref(v_k_4286_);
v_a_4303_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4305_ = v___x_4301_;
v_isShared_4306_ = v_isSharedCheck_4310_;
goto v_resetjp_4304_;
}
else
{
lean_inc(v_a_4303_);
lean_dec(v___x_4301_);
v___x_4305_ = lean_box(0);
v_isShared_4306_ = v_isSharedCheck_4310_;
goto v_resetjp_4304_;
}
v_resetjp_4304_:
{
lean_object* v___x_4308_; 
if (v_isShared_4306_ == 0)
{
v___x_4308_ = v___x_4305_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v_a_4303_);
v___x_4308_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
return v___x_4308_;
}
}
}
}
else
{
lean_object* v___x_4311_; 
lean_dec_ref(v_group_4285_);
v___x_4311_ = lean_apply_6(v_k_4286_, v_comb_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, lean_box(0));
return v___x_4311_;
}
}
else
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4319_; 
lean_dec(v___y_4291_);
lean_dec_ref(v___y_4290_);
lean_dec(v___y_4289_);
lean_dec_ref(v___y_4288_);
lean_dec_ref(v_comb_4287_);
lean_dec_ref(v_k_4286_);
lean_dec_ref(v_group_4285_);
v_a_4312_ = lean_ctor_get(v___x_4293_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v___x_4293_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4314_ = v___x_4293_;
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4293_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4317_; 
if (v_isShared_4315_ == 0)
{
v___x_4317_ = v___x_4314_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4312_);
v___x_4317_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
return v___x_4317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___boxed(lean_object* v___x_4320_, lean_object* v___x_4321_, lean_object* v_group_4322_, lean_object* v_k_4323_, lean_object* v_comb_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_){
_start:
{
uint8_t v___x_4296__boxed_4330_; lean_object* v_res_4331_; 
v___x_4296__boxed_4330_ = lean_unbox(v___x_4321_);
v_res_4331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0(v___x_4320_, v___x_4296__boxed_4330_, v_group_4322_, v_k_4323_, v_comb_4324_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4328_);
return v_res_4331_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; 
v___x_4333_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__0));
v___x_4334_ = l_Lean_stringToMessageData(v___x_4333_);
return v___x_4334_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_4335_; lean_object* v___x_4336_; 
v___x_4335_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__4));
v___x_4336_ = l_Lean_stringToMessageData(v___x_4335_);
return v___x_4336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(lean_object* v_k_4337_, lean_object* v_fnNames_4338_, lean_object* v_xs_4339_, lean_object* v_values_4340_, lean_object* v_as_4341_, size_t v_sz_4342_, size_t v_i_4343_, lean_object* v_b_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_){
_start:
{
uint8_t v___x_4350_; 
v___x_4350_ = lean_usize_dec_lt(v_i_4343_, v_sz_4342_);
if (v___x_4350_ == 0)
{
lean_object* v___x_4351_; 
lean_dec_ref(v_values_4340_);
lean_dec_ref(v_xs_4339_);
lean_dec_ref(v_k_4337_);
v___x_4351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4351_, 0, v_b_4344_);
return v___x_4351_;
}
else
{
lean_object* v_snd_4352_; lean_object* v___x_4354_; uint8_t v_isShared_4355_; uint8_t v_isSharedCheck_4423_; 
v_snd_4352_ = lean_ctor_get(v_b_4344_, 1);
v_isSharedCheck_4423_ = !lean_is_exclusive(v_b_4344_);
if (v_isSharedCheck_4423_ == 0)
{
lean_object* v_unused_4424_; 
v_unused_4424_ = lean_ctor_get(v_b_4344_, 0);
lean_dec(v_unused_4424_);
v___x_4354_ = v_b_4344_;
v_isShared_4355_ = v_isSharedCheck_4423_;
goto v_resetjp_4353_;
}
else
{
lean_inc(v_snd_4352_);
lean_dec(v_b_4344_);
v___x_4354_ = lean_box(0);
v_isShared_4355_ = v_isSharedCheck_4423_;
goto v_resetjp_4353_;
}
v_resetjp_4353_:
{
lean_object* v_a_4356_; lean_object* v_group_4357_; lean_object* v_comb_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4422_; 
v_a_4356_ = lean_array_uget(v_as_4341_, v_i_4343_);
v_group_4357_ = lean_ctor_get(v_a_4356_, 0);
v_comb_4358_ = lean_ctor_get(v_a_4356_, 1);
v_isSharedCheck_4422_ = !lean_is_exclusive(v_a_4356_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4360_ = v_a_4356_;
v_isShared_4361_ = v_isSharedCheck_4422_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_comb_4358_);
lean_inc(v_group_4357_);
lean_dec(v_a_4356_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4422_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v_toIndGroupInfo_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___f_4367_; lean_object* v___x_4368_; 
v_toIndGroupInfo_4362_ = lean_ctor_get(v_group_4357_, 0);
v___x_4363_ = lean_box(0);
v___x_4364_ = lean_unsigned_to_nat(0u);
v___x_4365_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_toIndGroupInfo_4362_, v___x_4364_);
v___x_4366_ = lean_box(v___x_4350_);
lean_inc_ref(v_comb_4358_);
lean_inc_ref(v_k_4337_);
v___f_4367_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_4367_, 0, v___x_4365_);
lean_closure_set(v___f_4367_, 1, v___x_4366_);
lean_closure_set(v___f_4367_, 2, v_group_4357_);
lean_closure_set(v___f_4367_, 3, v_k_4337_);
lean_closure_set(v___f_4367_, 4, v_comb_4358_);
v___x_4368_ = l_Lean_commitIfNoEx___at___00Lean_Elab_Structural_tryCandidates_spec__1___redArg(v___f_4367_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
if (lean_obj_tag(v___x_4368_) == 0)
{
lean_object* v_a_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4380_; 
lean_del_object(v___x_4360_);
lean_dec_ref(v_comb_4358_);
lean_dec_ref(v_values_4340_);
lean_dec_ref(v_xs_4339_);
lean_dec_ref(v_k_4337_);
v_a_4369_ = lean_ctor_get(v___x_4368_, 0);
v_isSharedCheck_4380_ = !lean_is_exclusive(v___x_4368_);
if (v_isSharedCheck_4380_ == 0)
{
v___x_4371_ = v___x_4368_;
v_isShared_4372_ = v_isSharedCheck_4380_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_a_4369_);
lean_dec(v___x_4368_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4380_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4373_; lean_object* v___x_4375_; 
v___x_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4373_, 0, v_a_4369_);
if (v_isShared_4355_ == 0)
{
lean_ctor_set(v___x_4354_, 0, v___x_4373_);
v___x_4375_ = v___x_4354_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4379_; 
v_reuseFailAlloc_4379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4379_, 0, v___x_4373_);
lean_ctor_set(v_reuseFailAlloc_4379_, 1, v_snd_4352_);
v___x_4375_ = v_reuseFailAlloc_4379_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
lean_object* v___x_4377_; 
if (v_isShared_4372_ == 0)
{
lean_ctor_set(v___x_4371_, 0, v___x_4375_);
v___x_4377_ = v___x_4371_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4378_; 
v_reuseFailAlloc_4378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4378_, 0, v___x_4375_);
v___x_4377_ = v_reuseFailAlloc_4378_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
return v___x_4377_;
}
}
}
}
else
{
lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4421_; 
v_a_4381_ = lean_ctor_get(v___x_4368_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4368_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4383_ = v___x_4368_;
v_isShared_4384_ = v_isSharedCheck_4421_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v___x_4368_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4421_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
uint8_t v___x_4385_; 
v___x_4385_ = l_Lean_Exception_isInterrupt(v_a_4381_);
if (v___x_4385_ == 0)
{
uint8_t v___x_4386_; 
lean_inc(v_a_4381_);
v___x_4386_ = l_Lean_Exception_isRuntime(v_a_4381_);
if (v___x_4386_ == 0)
{
lean_object* v___x_4387_; 
lean_del_object(v___x_4383_);
lean_inc_ref(v_values_4340_);
lean_inc_ref(v_xs_4339_);
v___x_4387_ = l_Lean_Elab_Structural_prettyParameterSet(v_fnNames_4338_, v_xs_4339_, v_values_4340_, v_comb_4358_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
if (lean_obj_tag(v___x_4387_) == 0)
{
lean_object* v_a_4388_; lean_object* v___x_4389_; lean_object* v___x_4391_; 
v_a_4388_ = lean_ctor_get(v___x_4387_, 0);
lean_inc(v_a_4388_);
lean_dec_ref_known(v___x_4387_, 1);
v___x_4389_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__1);
if (v_isShared_4361_ == 0)
{
lean_ctor_set_tag(v___x_4360_, 7);
lean_ctor_set(v___x_4360_, 1, v_a_4388_);
lean_ctor_set(v___x_4360_, 0, v___x_4389_);
v___x_4391_ = v___x_4360_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4406_; 
v_reuseFailAlloc_4406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4406_, 0, v___x_4389_);
lean_ctor_set(v_reuseFailAlloc_4406_, 1, v_a_4388_);
v___x_4391_ = v_reuseFailAlloc_4406_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4401_; 
v___x_4392_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Structural_getRecArgInfos_spec__1___redArg___closed__3);
v___x_4393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4393_, 0, v___x_4391_);
lean_ctor_set(v___x_4393_, 1, v___x_4392_);
v___x_4394_ = l_Lean_Exception_toMessageData(v_a_4381_);
v___x_4395_ = l_Lean_indentD(v___x_4394_);
v___x_4396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4396_, 0, v___x_4393_);
lean_ctor_set(v___x_4396_, 1, v___x_4395_);
v___x_4397_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___closed__2);
v___x_4398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4398_, 0, v___x_4396_);
lean_ctor_set(v___x_4398_, 1, v___x_4397_);
v___x_4399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4399_, 0, v_snd_4352_);
lean_ctor_set(v___x_4399_, 1, v___x_4398_);
if (v_isShared_4355_ == 0)
{
lean_ctor_set(v___x_4354_, 1, v___x_4399_);
lean_ctor_set(v___x_4354_, 0, v___x_4363_);
v___x_4401_ = v___x_4354_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v___x_4363_);
lean_ctor_set(v_reuseFailAlloc_4405_, 1, v___x_4399_);
v___x_4401_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
size_t v___x_4402_; size_t v___x_4403_; 
v___x_4402_ = ((size_t)1ULL);
v___x_4403_ = lean_usize_add(v_i_4343_, v___x_4402_);
v_i_4343_ = v___x_4403_;
v_b_4344_ = v___x_4401_;
goto _start;
}
}
}
else
{
lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
lean_dec(v_a_4381_);
lean_del_object(v___x_4360_);
lean_del_object(v___x_4354_);
lean_dec(v_snd_4352_);
lean_dec_ref(v_values_4340_);
lean_dec_ref(v_xs_4339_);
lean_dec_ref(v_k_4337_);
v_a_4407_ = lean_ctor_get(v___x_4387_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4387_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v___x_4387_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_dec(v___x_4387_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4412_; 
if (v_isShared_4410_ == 0)
{
v___x_4412_ = v___x_4409_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v_a_4407_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
return v___x_4412_;
}
}
}
}
else
{
lean_object* v___x_4416_; 
lean_del_object(v___x_4360_);
lean_dec_ref(v_comb_4358_);
lean_del_object(v___x_4354_);
lean_dec(v_snd_4352_);
lean_dec_ref(v_values_4340_);
lean_dec_ref(v_xs_4339_);
lean_dec_ref(v_k_4337_);
if (v_isShared_4384_ == 0)
{
v___x_4416_ = v___x_4383_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_a_4381_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
else
{
lean_object* v___x_4419_; 
lean_del_object(v___x_4360_);
lean_dec_ref(v_comb_4358_);
lean_del_object(v___x_4354_);
lean_dec(v_snd_4352_);
lean_dec_ref(v_values_4340_);
lean_dec_ref(v_xs_4339_);
lean_dec_ref(v_k_4337_);
if (v_isShared_4384_ == 0)
{
v___x_4419_ = v___x_4383_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4381_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg___boxed(lean_object* v_k_4425_, lean_object* v_fnNames_4426_, lean_object* v_xs_4427_, lean_object* v_values_4428_, lean_object* v_as_4429_, lean_object* v_sz_4430_, lean_object* v_i_4431_, lean_object* v_b_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_){
_start:
{
size_t v_sz_boxed_4438_; size_t v_i_boxed_4439_; lean_object* v_res_4440_; 
v_sz_boxed_4438_ = lean_unbox_usize(v_sz_4430_);
lean_dec(v_sz_4430_);
v_i_boxed_4439_ = lean_unbox_usize(v_i_4431_);
lean_dec(v_i_4431_);
v_res_4440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(v_k_4425_, v_fnNames_4426_, v_xs_4427_, v_values_4428_, v_as_4429_, v_sz_boxed_4438_, v_i_boxed_4439_, v_b_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_);
lean_dec(v___y_4436_);
lean_dec_ref(v___y_4435_);
lean_dec(v___y_4434_);
lean_dec_ref(v___y_4433_);
lean_dec_ref(v_as_4429_);
lean_dec_ref(v_fnNames_4426_);
return v_res_4440_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_tryCandidates___redArg___closed__1(void){
_start:
{
lean_object* v___x_4442_; lean_object* v___x_4443_; 
v___x_4442_ = ((lean_object*)(l_Lean_Elab_Structural_tryCandidates___redArg___closed__0));
v___x_4443_ = l_Lean_stringToMessageData(v___x_4442_);
return v___x_4443_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_tryCandidates___redArg___closed__3(void){
_start:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; 
v___x_4445_ = ((lean_object*)(l_Lean_Elab_Structural_tryCandidates___redArg___closed__2));
v___x_4446_ = l_Lean_stringToMessageData(v___x_4445_);
return v___x_4446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___redArg(lean_object* v_fnNames_4447_, lean_object* v_xs_4448_, lean_object* v_values_4449_, lean_object* v_candidates_4450_, lean_object* v_k_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_){
_start:
{
lean_object* v_candidates_4457_; lean_object* v_report_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4518_; 
v_candidates_4457_ = lean_ctor_get(v_candidates_4450_, 0);
v_report_4458_ = lean_ctor_get(v_candidates_4450_, 1);
v_isSharedCheck_4518_ = !lean_is_exclusive(v_candidates_4450_);
if (v_isSharedCheck_4518_ == 0)
{
v___x_4460_ = v_candidates_4450_;
v_isShared_4461_ = v_isSharedCheck_4518_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_report_4458_);
lean_inc(v_candidates_4457_);
lean_dec(v_candidates_4450_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4518_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v___x_4462_; lean_object* v___x_4464_; 
v___x_4462_ = lean_box(0);
if (v_isShared_4461_ == 0)
{
lean_ctor_set(v___x_4460_, 0, v___x_4462_);
v___x_4464_ = v___x_4460_;
goto v_reusejp_4463_;
}
else
{
lean_object* v_reuseFailAlloc_4517_; 
v_reuseFailAlloc_4517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4517_, 0, v___x_4462_);
lean_ctor_set(v_reuseFailAlloc_4517_, 1, v_report_4458_);
v___x_4464_ = v_reuseFailAlloc_4517_;
goto v_reusejp_4463_;
}
v_reusejp_4463_:
{
size_t v_sz_4465_; size_t v___x_4466_; lean_object* v___x_4467_; 
v_sz_4465_ = lean_array_size(v_candidates_4457_);
v___x_4466_ = ((size_t)0ULL);
v___x_4467_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(v_k_4451_, v_fnNames_4447_, v_xs_4448_, v_values_4449_, v_candidates_4457_, v_sz_4465_, v___x_4466_, v___x_4464_, v_a_4452_, v_a_4453_, v_a_4454_, v_a_4455_);
lean_dec_ref(v_candidates_4457_);
if (lean_obj_tag(v___x_4467_) == 0)
{
lean_object* v_a_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4508_; 
v_a_4468_ = lean_ctor_get(v___x_4467_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4467_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4470_ = v___x_4467_;
v_isShared_4471_ = v_isSharedCheck_4508_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_a_4468_);
lean_dec(v___x_4467_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4508_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v_fst_4472_; 
v_fst_4472_ = lean_ctor_get(v_a_4468_, 0);
if (lean_obj_tag(v_fst_4472_) == 0)
{
lean_object* v_toCold_4473_; lean_object* v_options_4474_; lean_object* v_snd_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4502_; 
lean_del_object(v___x_4470_);
v_toCold_4473_ = lean_ctor_get(v_a_4454_, 0);
v_options_4474_ = lean_ctor_get(v_toCold_4473_, 2);
v_snd_4475_ = lean_ctor_get(v_a_4468_, 1);
v_isSharedCheck_4502_ = !lean_is_exclusive(v_a_4468_);
if (v_isSharedCheck_4502_ == 0)
{
lean_object* v_unused_4503_; 
v_unused_4503_ = lean_ctor_get(v_a_4468_, 0);
lean_dec(v_unused_4503_);
v___x_4477_ = v_a_4468_;
v_isShared_4478_ = v_isSharedCheck_4502_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_snd_4475_);
lean_dec(v_a_4468_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4502_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
lean_object* v_inheritedTraceOptions_4479_; uint8_t v_hasTrace_4480_; lean_object* v___x_4481_; lean_object* v___x_4483_; 
v_inheritedTraceOptions_4479_ = lean_ctor_get(v_toCold_4473_, 11);
v_hasTrace_4480_ = lean_ctor_get_uint8(v_options_4474_, sizeof(void*)*1);
v___x_4481_ = lean_obj_once(&l_Lean_Elab_Structural_tryCandidates___redArg___closed__1, &l_Lean_Elab_Structural_tryCandidates___redArg___closed__1_once, _init_l_Lean_Elab_Structural_tryCandidates___redArg___closed__1);
if (v_isShared_4478_ == 0)
{
lean_ctor_set_tag(v___x_4477_, 7);
lean_ctor_set(v___x_4477_, 0, v___x_4481_);
v___x_4483_ = v___x_4477_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v___x_4481_);
lean_ctor_set(v_reuseFailAlloc_4501_, 1, v_snd_4475_);
v___x_4483_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
if (v_hasTrace_4480_ == 0)
{
lean_object* v___x_4484_; 
v___x_4484_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_4483_, v_a_4452_, v_a_4453_, v_a_4454_, v_a_4455_);
return v___x_4484_;
}
else
{
lean_object* v___x_4485_; lean_object* v___x_4486_; uint8_t v___x_4487_; 
v___x_4485_ = ((lean_object*)(l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__9));
v___x_4486_ = lean_obj_once(&l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12, &l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12_once, _init_l_Lean_Elab_Structural_getRecArgInfos___lam__2___closed__12);
v___x_4487_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4479_, v_options_4474_, v___x_4486_);
if (v___x_4487_ == 0)
{
lean_object* v___x_4488_; 
v___x_4488_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_4483_, v_a_4452_, v_a_4453_, v_a_4454_, v_a_4455_);
return v___x_4488_;
}
else
{
lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4489_ = lean_obj_once(&l_Lean_Elab_Structural_tryCandidates___redArg___closed__3, &l_Lean_Elab_Structural_tryCandidates___redArg___closed__3_once, _init_l_Lean_Elab_Structural_tryCandidates___redArg___closed__3);
lean_inc_ref(v___x_4483_);
v___x_4490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4490_, 0, v___x_4489_);
lean_ctor_set(v___x_4490_, 1, v___x_4483_);
v___x_4491_ = l_Lean_addTrace___at___00Lean_Elab_Structural_getRecArgInfos_spec__0(v___x_4485_, v___x_4490_, v_a_4452_, v_a_4453_, v_a_4454_, v_a_4455_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v___x_4492_; 
lean_dec_ref_known(v___x_4491_, 1);
v___x_4492_ = l_Lean_throwError___at___00Lean_Elab_Structural_getRecArgInfo_spec__0___redArg(v___x_4483_, v_a_4452_, v_a_4453_, v_a_4454_, v_a_4455_);
return v___x_4492_;
}
else
{
lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
lean_dec_ref(v___x_4483_);
v_a_4493_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4495_ = v___x_4491_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4491_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4498_; 
if (v_isShared_4496_ == 0)
{
v___x_4498_ = v___x_4495_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4493_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
return v___x_4498_;
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
lean_object* v_val_4504_; lean_object* v___x_4506_; 
lean_inc_ref(v_fst_4472_);
lean_dec(v_a_4468_);
v_val_4504_ = lean_ctor_get(v_fst_4472_, 0);
lean_inc(v_val_4504_);
lean_dec_ref_known(v_fst_4472_, 1);
if (v_isShared_4471_ == 0)
{
lean_ctor_set(v___x_4470_, 0, v_val_4504_);
v___x_4506_ = v___x_4470_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_val_4504_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
return v___x_4506_;
}
}
}
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4516_; 
v_a_4509_ = lean_ctor_get(v___x_4467_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4467_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4511_ = v___x_4467_;
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_a_4509_);
lean_dec(v___x_4467_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4514_; 
if (v_isShared_4512_ == 0)
{
v___x_4514_ = v___x_4511_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v_a_4509_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
return v___x_4514_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___redArg___boxed(lean_object* v_fnNames_4519_, lean_object* v_xs_4520_, lean_object* v_values_4521_, lean_object* v_candidates_4522_, lean_object* v_k_4523_, lean_object* v_a_4524_, lean_object* v_a_4525_, lean_object* v_a_4526_, lean_object* v_a_4527_, lean_object* v_a_4528_){
_start:
{
lean_object* v_res_4529_; 
v_res_4529_ = l_Lean_Elab_Structural_tryCandidates___redArg(v_fnNames_4519_, v_xs_4520_, v_values_4521_, v_candidates_4522_, v_k_4523_, v_a_4524_, v_a_4525_, v_a_4526_, v_a_4527_);
lean_dec(v_a_4527_);
lean_dec_ref(v_a_4526_);
lean_dec(v_a_4525_);
lean_dec_ref(v_a_4524_);
lean_dec_ref(v_fnNames_4519_);
return v_res_4529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates(lean_object* v_00_u03b1_4530_, lean_object* v_fnNames_4531_, lean_object* v_xs_4532_, lean_object* v_values_4533_, lean_object* v_candidates_4534_, lean_object* v_k_4535_, lean_object* v_a_4536_, lean_object* v_a_4537_, lean_object* v_a_4538_, lean_object* v_a_4539_){
_start:
{
lean_object* v___x_4541_; 
v___x_4541_ = l_Lean_Elab_Structural_tryCandidates___redArg(v_fnNames_4531_, v_xs_4532_, v_values_4533_, v_candidates_4534_, v_k_4535_, v_a_4536_, v_a_4537_, v_a_4538_, v_a_4539_);
return v___x_4541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_tryCandidates___boxed(lean_object* v_00_u03b1_4542_, lean_object* v_fnNames_4543_, lean_object* v_xs_4544_, lean_object* v_values_4545_, lean_object* v_candidates_4546_, lean_object* v_k_4547_, lean_object* v_a_4548_, lean_object* v_a_4549_, lean_object* v_a_4550_, lean_object* v_a_4551_, lean_object* v_a_4552_){
_start:
{
lean_object* v_res_4553_; 
v_res_4553_ = l_Lean_Elab_Structural_tryCandidates(v_00_u03b1_4542_, v_fnNames_4543_, v_xs_4544_, v_values_4545_, v_candidates_4546_, v_k_4547_, v_a_4548_, v_a_4549_, v_a_4550_, v_a_4551_);
lean_dec(v_a_4551_);
lean_dec_ref(v_a_4550_);
lean_dec(v_a_4549_);
lean_dec_ref(v_a_4548_);
lean_dec_ref(v_fnNames_4543_);
return v_res_4553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2(lean_object* v_00_u03b1_4554_, lean_object* v_k_4555_, lean_object* v_fnNames_4556_, lean_object* v_xs_4557_, lean_object* v_values_4558_, lean_object* v_as_4559_, size_t v_sz_4560_, size_t v_i_4561_, lean_object* v_b_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v___x_4568_; 
v___x_4568_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___redArg(v_k_4555_, v_fnNames_4556_, v_xs_4557_, v_values_4558_, v_as_4559_, v_sz_4560_, v_i_4561_, v_b_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_);
return v___x_4568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2___boxed(lean_object* v_00_u03b1_4569_, lean_object* v_k_4570_, lean_object* v_fnNames_4571_, lean_object* v_xs_4572_, lean_object* v_values_4573_, lean_object* v_as_4574_, lean_object* v_sz_4575_, lean_object* v_i_4576_, lean_object* v_b_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_){
_start:
{
size_t v_sz_boxed_4583_; size_t v_i_boxed_4584_; lean_object* v_res_4585_; 
v_sz_boxed_4583_ = lean_unbox_usize(v_sz_4575_);
lean_dec(v_sz_4575_);
v_i_boxed_4584_ = lean_unbox_usize(v_i_4576_);
lean_dec(v_i_4576_);
v_res_4585_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_tryCandidates_spec__2(v_00_u03b1_4569_, v_k_4570_, v_fnNames_4571_, v_xs_4572_, v_values_4573_, v_as_4574_, v_sz_boxed_4583_, v_i_boxed_4584_, v_b_4577_, v___y_4578_, v___y_4579_, v___y_4580_, v___y_4581_);
lean_dec(v___y_4581_);
lean_dec_ref(v___y_4580_);
lean_dec(v___y_4579_);
lean_dec_ref(v___y_4578_);
lean_dec_ref(v_as_4574_);
lean_dec_ref(v_fnNames_4571_);
return v_res_4585_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_TerminationMeasure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_TerminationMeasure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Structural_maxCombinationSize = _init_l_Lean_Elab_Structural_maxCombinationSize();
lean_mark_persistent(l_Lean_Elab_Structural_maxCombinationSize);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_TerminationMeasure(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_TerminationMeasure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_FindRecArg(builtin);
}
#ifdef __cplusplus
}
#endif

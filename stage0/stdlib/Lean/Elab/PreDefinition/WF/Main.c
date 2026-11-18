// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Main
// Imports: public import Lean.Elab.PreDefinition.WF.PackMutual public import Lean.Elab.PreDefinition.WF.FloatRecApp public import Lean.Elab.PreDefinition.WF.Rel public import Lean.Elab.PreDefinition.WF.Fix public import Lean.Elab.PreDefinition.WF.Unfold public import Lean.Elab.PreDefinition.WF.Preprocess public import Lean.Elab.PreDefinition.WF.GuessLex
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
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Elab_WF_floatRecApp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_guessLex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_packMutual(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_copyExtraModUses(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_markAsRecursive___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Elab_WF_elabWFRel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "well-founded recursion cannot be used, `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` does not take any (non-fixed) arguments"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_wfRecursion___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_wfRecursion___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_wfRecursion___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "marking functions defined by well-founded recursion as `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` is not effective"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value),LEAN_SCALAR_PTR_LITERAL(106, 254, 211, 230, 8, 182, 79, 36)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "wfRel: "};
static const lean_object* l_Lean_Elab_wfRecursion___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "wfRecursion: expected unary function type: "};
static const lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__0_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__1_value;
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_wfRecursion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_wfRecursion___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l_Lean_Elab_wfRecursion___closed__2 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ">> "};
static const lean_object* l_Lean_Elab_wfRecursion___closed__3 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__3_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__4;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " :=\n"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__5 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__5_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__6;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unaryPreDefProcessed:"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__7 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__7_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__8;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unaryPreDef:"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__9 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__9_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__10;
static const lean_ctor_object l_Lean_Elab_wfRecursion___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_wfRecursion___boxed__const__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 60, 146, 67, 170, 35, 9, 50)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Main"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(142, 191, 24, 173, 99, 110, 250, 159)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(183, 176, 152, 199, 88, 244, 126, 231)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(74, 192, 220, 42, 201, 36, 231, 139)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(136, 8, 70, 241, 95, 177, 39, 230)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 164, 65, 123, 204, 166, 116, 237)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 212, 71, 249, 113, 26, 236, 1)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 192, 221, 228, 155, 175, 93, 246)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 119, 48, 4, 113, 111, 251, 171)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(12, 104, 40, 162, 247, 89, 56, 248)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(128, 159, 143, 175, 93, 190, 135, 30)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(5, 178, 65, 214, 219, 44, 29, 26)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1197449596) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(114, 70, 68, 25, 255, 132, 81, 38)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 173, 23, 241, 152, 14, 79, 23)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(93, 207, 166, 163, 30, 74, 122, 49)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(48, 76, 225, 120, 116, 96, 87, 123)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1);
v___x_7_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_6_);
lean_ctor_set(v___x_7_, 2, v___x_6_);
lean_ctor_set(v___x_7_, 3, v___x_6_);
lean_ctor_set(v___x_7_, 4, v___x_6_);
lean_ctor_set(v___x_7_, 5, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object* v_env_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v_nextMacroScope_13_; lean_object* v_ngen_14_; lean_object* v_auxDeclNGen_15_; lean_object* v_traceState_16_; lean_object* v_recordedDeps_17_; lean_object* v_messages_18_; lean_object* v_infoState_19_; lean_object* v_snapshotTasks_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_47_; 
v___x_12_ = lean_st_ref_take(v___y_10_);
v_nextMacroScope_13_ = lean_ctor_get(v___x_12_, 1);
v_ngen_14_ = lean_ctor_get(v___x_12_, 2);
v_auxDeclNGen_15_ = lean_ctor_get(v___x_12_, 3);
v_traceState_16_ = lean_ctor_get(v___x_12_, 4);
v_recordedDeps_17_ = lean_ctor_get(v___x_12_, 6);
v_messages_18_ = lean_ctor_get(v___x_12_, 7);
v_infoState_19_ = lean_ctor_get(v___x_12_, 8);
v_snapshotTasks_20_ = lean_ctor_get(v___x_12_, 9);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_47_ == 0)
{
lean_object* v_unused_48_; lean_object* v_unused_49_; 
v_unused_48_ = lean_ctor_get(v___x_12_, 5);
lean_dec(v_unused_48_);
v_unused_49_ = lean_ctor_get(v___x_12_, 0);
lean_dec(v_unused_49_);
v___x_22_ = v___x_12_;
v_isShared_23_ = v_isSharedCheck_47_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_snapshotTasks_20_);
lean_inc(v_infoState_19_);
lean_inc(v_messages_18_);
lean_inc(v_recordedDeps_17_);
lean_inc(v_traceState_16_);
lean_inc(v_auxDeclNGen_15_);
lean_inc(v_ngen_14_);
lean_inc(v_nextMacroScope_13_);
lean_dec(v___x_12_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_47_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; lean_object* v___x_26_; 
v___x_24_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 5, v___x_24_);
lean_ctor_set(v___x_22_, 0, v_env_8_);
v___x_26_ = v___x_22_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_env_8_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v_nextMacroScope_13_);
lean_ctor_set(v_reuseFailAlloc_46_, 2, v_ngen_14_);
lean_ctor_set(v_reuseFailAlloc_46_, 3, v_auxDeclNGen_15_);
lean_ctor_set(v_reuseFailAlloc_46_, 4, v_traceState_16_);
lean_ctor_set(v_reuseFailAlloc_46_, 5, v___x_24_);
lean_ctor_set(v_reuseFailAlloc_46_, 6, v_recordedDeps_17_);
lean_ctor_set(v_reuseFailAlloc_46_, 7, v_messages_18_);
lean_ctor_set(v_reuseFailAlloc_46_, 8, v_infoState_19_);
lean_ctor_set(v_reuseFailAlloc_46_, 9, v_snapshotTasks_20_);
v___x_26_ = v_reuseFailAlloc_46_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v_mctx_29_; lean_object* v_zetaDeltaFVarIds_30_; lean_object* v_postponed_31_; lean_object* v_diag_32_; lean_object* v_rewriteFires_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_44_; 
v___x_27_ = lean_st_ref_put(v___y_10_, v___x_26_);
v___x_28_ = lean_st_ref_take(v___y_9_);
v_mctx_29_ = lean_ctor_get(v___x_28_, 0);
v_zetaDeltaFVarIds_30_ = lean_ctor_get(v___x_28_, 2);
v_postponed_31_ = lean_ctor_get(v___x_28_, 3);
v_diag_32_ = lean_ctor_get(v___x_28_, 4);
v_rewriteFires_33_ = lean_ctor_get(v___x_28_, 5);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_44_ == 0)
{
lean_object* v_unused_45_; 
v_unused_45_ = lean_ctor_get(v___x_28_, 1);
lean_dec(v_unused_45_);
v___x_35_ = v___x_28_;
v_isShared_36_ = v_isSharedCheck_44_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_rewriteFires_33_);
lean_inc(v_diag_32_);
lean_inc(v_postponed_31_);
lean_inc(v_zetaDeltaFVarIds_30_);
lean_inc(v_mctx_29_);
lean_dec(v___x_28_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_44_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_37_ = lean_box(0);
v___x_38_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 1, v___x_38_);
v___x_40_ = v___x_35_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_mctx_29_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v___x_38_);
lean_ctor_set(v_reuseFailAlloc_43_, 2, v_zetaDeltaFVarIds_30_);
lean_ctor_set(v_reuseFailAlloc_43_, 3, v_postponed_31_);
lean_ctor_set(v_reuseFailAlloc_43_, 4, v_diag_32_);
lean_ctor_set(v_reuseFailAlloc_43_, 5, v_rewriteFires_33_);
v___x_40_ = v_reuseFailAlloc_43_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_st_ref_put(v___y_9_, v___x_40_);
v___x_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_37_);
return v___x_42_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object* v_env_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_50_, v___y_51_, v___y_52_);
lean_dec(v___y_52_);
lean_dec(v___y_51_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(lean_object* v_env_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_55_, v___y_59_, v___y_61_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object* v_env_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(v_env_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(lean_object* v_k_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v_b_76_, lean_object* v_c_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
lean_inc(v___y_81_);
lean_inc_ref(v___y_80_);
lean_inc(v___y_79_);
lean_inc_ref(v___y_78_);
lean_inc(v___y_75_);
lean_inc_ref(v___y_74_);
v___x_83_ = lean_apply_9(v_k_73_, v_b_76_, v_c_77_, v___y_74_, v___y_75_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, lean_box(0));
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed(lean_object* v_k_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v_b_87_, lean_object* v_c_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(v_k_84_, v___y_85_, v___y_86_, v_b_87_, v_c_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object* v_type_95_, lean_object* v_maxFVars_x3f_96_, lean_object* v_k_97_, uint8_t v_cleanupAnnotations_98_, uint8_t v_whnfType_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v___f_107_; lean_object* v___x_108_; 
lean_inc(v___y_101_);
lean_inc_ref(v___y_100_);
v___f_107_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_107_, 0, v_k_97_);
lean_closure_set(v___f_107_, 1, v___y_100_);
lean_closure_set(v___f_107_, 2, v___y_101_);
v___x_108_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_95_, v_maxFVars_x3f_96_, v___f_107_, v_cleanupAnnotations_98_, v_whnfType_99_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
if (lean_obj_tag(v___x_108_) == 0)
{
return v___x_108_;
}
else
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object* v_type_117_, lean_object* v_maxFVars_x3f_118_, lean_object* v_k_119_, lean_object* v_cleanupAnnotations_120_, lean_object* v_whnfType_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_129_; uint8_t v_whnfType_boxed_130_; lean_object* v_res_131_; 
v_cleanupAnnotations_boxed_129_ = lean_unbox(v_cleanupAnnotations_120_);
v_whnfType_boxed_130_ = lean_unbox(v_whnfType_121_);
v_res_131_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_117_, v_maxFVars_x3f_118_, v_k_119_, v_cleanupAnnotations_boxed_129_, v_whnfType_boxed_130_, v___y_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(lean_object* v_00_u03b1_132_, lean_object* v_type_133_, lean_object* v_maxFVars_x3f_134_, lean_object* v_k_135_, uint8_t v_cleanupAnnotations_136_, uint8_t v_whnfType_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_133_, v_maxFVars_x3f_134_, v_k_135_, v_cleanupAnnotations_136_, v_whnfType_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object* v_00_u03b1_146_, lean_object* v_type_147_, lean_object* v_maxFVars_x3f_148_, lean_object* v_k_149_, lean_object* v_cleanupAnnotations_150_, lean_object* v_whnfType_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_159_; uint8_t v_whnfType_boxed_160_; lean_object* v_res_161_; 
v_cleanupAnnotations_boxed_159_ = lean_unbox(v_cleanupAnnotations_150_);
v_whnfType_boxed_160_ = lean_unbox(v_whnfType_151_);
v_res_161_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(v_00_u03b1_146_, v_type_147_, v_maxFVars_x3f_148_, v_k_149_, v_cleanupAnnotations_boxed_159_, v_whnfType_boxed_160_, v___y_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(lean_object* v_as_162_, size_t v_sz_163_, size_t v_i_164_, lean_object* v_b_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
uint8_t v___x_169_; 
v___x_169_ = lean_usize_dec_lt(v_i_164_, v_sz_163_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; 
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v_b_165_);
return v___x_170_;
}
else
{
lean_object* v___x_171_; lean_object* v_a_172_; lean_object* v___x_173_; 
v___x_171_ = lean_box(0);
v_a_172_ = lean_array_uget_borrowed(v_as_162_, v_i_164_);
v___x_173_ = l_Lean_Elab_addAsAxiom___redArg(v_a_172_, v___y_166_, v___y_167_);
if (lean_obj_tag(v___x_173_) == 0)
{
size_t v___x_174_; size_t v___x_175_; 
lean_dec_ref_known(v___x_173_, 1);
v___x_174_ = ((size_t)1ULL);
v___x_175_ = lean_usize_add(v_i_164_, v___x_174_);
v_i_164_ = v___x_175_;
v_b_165_ = v___x_171_;
goto _start;
}
else
{
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg___boxed(lean_object* v_as_177_, lean_object* v_sz_178_, lean_object* v_i_179_, lean_object* v_b_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
size_t v_sz_boxed_184_; size_t v_i_boxed_185_; lean_object* v_res_186_; 
v_sz_boxed_184_ = lean_unbox_usize(v_sz_178_);
lean_dec(v_sz_178_);
v_i_boxed_185_ = lean_unbox_usize(v_i_179_);
lean_dec(v_i_179_);
v_res_186_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_as_177_, v_sz_boxed_184_, v_i_boxed_185_, v_b_180_, v___y_181_, v___y_182_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
lean_dec_ref(v_as_177_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(lean_object* v_a_187_, size_t v_sz_188_, size_t v_i_189_, lean_object* v_bs_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
uint8_t v___x_196_; 
v___x_196_ = lean_usize_dec_lt(v_i_189_, v_sz_188_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
lean_dec_ref(v_a_187_);
v___x_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_197_, 0, v_bs_190_);
return v___x_197_;
}
else
{
lean_object* v_v_198_; lean_object* v___x_199_; lean_object* v_bs_x27_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_v_198_ = lean_array_uget(v_bs_190_, v_i_189_);
v___x_199_ = lean_unsigned_to_nat(0u);
v_bs_x27_200_ = lean_array_uset(v_bs_190_, v_i_189_, v___x_199_);
v___x_201_ = lean_usize_to_nat(v_i_189_);
lean_inc_ref(v_a_187_);
v___x_202_ = l_Lean_Elab_WF_varyingVarNames(v_a_187_, v___x_201_, v_v_198_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; size_t v___x_204_; size_t v___x_205_; lean_object* v___x_206_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
v___x_204_ = ((size_t)1ULL);
v___x_205_ = lean_usize_add(v_i_189_, v___x_204_);
v___x_206_ = lean_array_uset(v_bs_x27_200_, v_i_189_, v_a_203_);
v_i_189_ = v___x_205_;
v_bs_190_ = v___x_206_;
goto _start;
}
else
{
lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_215_; 
lean_dec_ref(v_bs_x27_200_);
lean_dec_ref(v_a_187_);
v_a_208_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_215_ == 0)
{
v___x_210_ = v___x_202_;
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_202_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_213_; 
if (v_isShared_211_ == 0)
{
v___x_213_ = v___x_210_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_208_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg___boxed(lean_object* v_a_216_, lean_object* v_sz_217_, lean_object* v_i_218_, lean_object* v_bs_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
size_t v_sz_boxed_225_; size_t v_i_boxed_226_; lean_object* v_res_227_; 
v_sz_boxed_225_ = lean_unbox_usize(v_sz_217_);
lean_dec(v_sz_217_);
v_i_boxed_226_ = lean_unbox_usize(v_i_218_);
lean_dec(v_i_218_);
v_res_227_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_a_216_, v_sz_boxed_225_, v_i_boxed_226_, v_bs_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
return v_res_227_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_box(1);
v___x_229_ = l_Lean_MessageData_ofFormat(v___x_228_);
return v___x_229_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2));
v___x_234_ = l_Lean_MessageData_ofFormat(v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(lean_object* v_x_235_, lean_object* v_x_236_){
_start:
{
if (lean_obj_tag(v_x_236_) == 0)
{
return v_x_235_;
}
else
{
lean_object* v_head_237_; lean_object* v_tail_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_260_; 
v_head_237_ = lean_ctor_get(v_x_236_, 0);
v_tail_238_ = lean_ctor_get(v_x_236_, 1);
v_isSharedCheck_260_ = !lean_is_exclusive(v_x_236_);
if (v_isSharedCheck_260_ == 0)
{
v___x_240_ = v_x_236_;
v_isShared_241_ = v_isSharedCheck_260_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_tail_238_);
lean_inc(v_head_237_);
lean_dec(v_x_236_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_260_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v_before_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_258_; 
v_before_242_ = lean_ctor_get(v_head_237_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v_head_237_);
if (v_isSharedCheck_258_ == 0)
{
lean_object* v_unused_259_; 
v_unused_259_ = lean_ctor_get(v_head_237_, 1);
lean_dec(v_unused_259_);
v___x_244_ = v_head_237_;
v_isShared_245_ = v_isSharedCheck_258_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_before_242_);
lean_dec(v_head_237_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_258_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0);
if (v_isShared_245_ == 0)
{
lean_ctor_set_tag(v___x_244_, 7);
lean_ctor_set(v___x_244_, 1, v___x_246_);
lean_ctor_set(v___x_244_, 0, v_x_235_);
v___x_248_ = v___x_244_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_x_235_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v___x_246_);
v___x_248_ = v_reuseFailAlloc_257_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_249_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3);
if (v_isShared_241_ == 0)
{
lean_ctor_set_tag(v___x_240_, 7);
lean_ctor_set(v___x_240_, 1, v___x_249_);
lean_ctor_set(v___x_240_, 0, v___x_248_);
v___x_251_ = v___x_240_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v___x_249_);
v___x_251_ = v_reuseFailAlloc_256_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = l_Lean_MessageData_ofSyntax(v_before_242_);
v___x_253_ = l_Lean_indentD(v___x_252_);
v___x_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_251_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v_x_235_ = v___x_254_;
v_x_236_ = v_tail_238_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(lean_object* v_opts_261_, lean_object* v_opt_262_){
_start:
{
lean_object* v_name_263_; lean_object* v_defValue_264_; lean_object* v_map_265_; lean_object* v___x_266_; 
v_name_263_ = lean_ctor_get(v_opt_262_, 0);
v_defValue_264_ = lean_ctor_get(v_opt_262_, 1);
v_map_265_ = lean_ctor_get(v_opts_261_, 0);
v___x_266_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_265_, v_name_263_);
if (lean_obj_tag(v___x_266_) == 0)
{
uint8_t v___x_267_; 
v___x_267_ = lean_unbox(v_defValue_264_);
return v___x_267_;
}
else
{
lean_object* v_val_268_; 
v_val_268_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_val_268_);
lean_dec_ref_known(v___x_266_, 1);
if (lean_obj_tag(v_val_268_) == 1)
{
uint8_t v_v_269_; 
v_v_269_ = lean_ctor_get_uint8(v_val_268_, 0);
lean_dec_ref_known(v_val_268_, 0);
return v_v_269_;
}
else
{
uint8_t v___x_270_; 
lean_dec(v_val_268_);
v___x_270_ = lean_unbox(v_defValue_264_);
return v___x_270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___boxed(lean_object* v_opts_271_, lean_object* v_opt_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v_opts_271_, v_opt_272_);
lean_dec_ref(v_opt_272_);
lean_dec_ref(v_opts_271_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1));
v___x_279_ = l_Lean_MessageData_ofFormat(v___x_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object* v_msgData_280_, lean_object* v_macroStack_281_, lean_object* v___y_282_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_284_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_282_);
v___x_285_ = l_Lean_Elab_pp_macroStack;
v___x_286_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v___x_284_, v___x_285_);
lean_dec_ref(v___x_284_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; 
lean_dec(v_macroStack_281_);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v_msgData_280_);
return v___x_287_;
}
else
{
if (lean_obj_tag(v_macroStack_281_) == 0)
{
lean_object* v___x_288_; 
v___x_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_288_, 0, v_msgData_280_);
return v___x_288_;
}
else
{
lean_object* v_head_289_; lean_object* v_after_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_305_; 
v_head_289_ = lean_ctor_get(v_macroStack_281_, 0);
lean_inc(v_head_289_);
v_after_290_ = lean_ctor_get(v_head_289_, 1);
v_isSharedCheck_305_ = !lean_is_exclusive(v_head_289_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v_head_289_, 0);
lean_dec(v_unused_306_);
v___x_292_ = v_head_289_;
v_isShared_293_ = v_isSharedCheck_305_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_after_290_);
lean_dec(v_head_289_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_305_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_296_; 
v___x_294_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0);
if (v_isShared_293_ == 0)
{
lean_ctor_set_tag(v___x_292_, 7);
lean_ctor_set(v___x_292_, 1, v___x_294_);
lean_ctor_set(v___x_292_, 0, v_msgData_280_);
v___x_296_ = v___x_292_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_msgData_280_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_294_);
v___x_296_ = v_reuseFailAlloc_304_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v_msgData_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_297_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2);
v___x_298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_296_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = l_Lean_MessageData_ofSyntax(v_after_290_);
v___x_300_ = l_Lean_indentD(v___x_299_);
v_msgData_301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_301_, 0, v___x_298_);
lean_ctor_set(v_msgData_301_, 1, v___x_300_);
v___x_302_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(v_msgData_301_, v_macroStack_281_);
v___x_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
return v___x_303_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_307_, lean_object* v_macroStack_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_307_, v_macroStack_308_, v___y_309_);
lean_dec_ref(v___y_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object* v_msgData_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
lean_object* v___x_318_; lean_object* v_env_319_; uint8_t v___x_320_; lean_object* v_env_321_; lean_object* v___x_322_; lean_object* v_toCold_323_; lean_object* v_mctx_324_; lean_object* v_lctx_325_; lean_object* v_options_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_318_ = lean_st_ref_get(v___y_316_);
v_env_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc_ref(v_env_319_);
lean_dec(v___x_318_);
v___x_320_ = 0;
v_env_321_ = l_Lean_Environment_setRecordingDeps(v_env_319_, v___x_320_);
v___x_322_ = lean_st_ref_get(v___y_314_);
v_toCold_323_ = lean_ctor_get(v___y_315_, 0);
v_mctx_324_ = lean_ctor_get(v___x_322_, 0);
lean_inc_ref(v_mctx_324_);
lean_dec(v___x_322_);
v_lctx_325_ = lean_ctor_get(v___y_313_, 2);
v_options_326_ = lean_ctor_get(v_toCold_323_, 2);
lean_inc_ref(v_options_326_);
lean_inc_ref(v_lctx_325_);
v___x_327_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_327_, 0, v_env_321_);
lean_ctor_set(v___x_327_, 1, v_mctx_324_);
lean_ctor_set(v___x_327_, 2, v_lctx_325_);
lean_ctor_set(v___x_327_, 3, v_options_326_);
v___x_328_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v_msgData_312_);
v___x_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_329_, 0, v___x_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object* v_msgData_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msgData_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object* v_msg_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v_ref_345_; lean_object* v_macroStack_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v_a_349_; lean_object* v___x_350_; lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_359_; 
v_ref_345_ = lean_ctor_get(v___y_342_, 2);
v_macroStack_346_ = lean_ctor_get(v___y_338_, 1);
v___x_347_ = l_Lean_Elab_getBetterRef(v_ref_345_, v_macroStack_346_);
v___x_348_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_337_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
v_a_349_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_a_349_);
lean_dec_ref(v___x_348_);
lean_inc(v_macroStack_346_);
v___x_350_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_a_349_, v_macroStack_346_, v___y_342_);
v_a_351_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_359_ == 0)
{
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_347_);
lean_ctor_set(v___x_355_, 1, v_a_351_);
if (v_isShared_354_ == 0)
{
lean_ctor_set_tag(v___x_353_, 1);
lean_ctor_set(v___x_353_, 0, v___x_355_);
v___x_357_ = v___x_353_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object* v_msg_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
return v_res_368_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1(void){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0));
v___x_371_ = l_Lean_stringToMessageData(v___x_370_);
return v___x_371_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2));
v___x_374_ = l_Lean_stringToMessageData(v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(lean_object* v_as_375_, size_t v_sz_376_, size_t v_i_377_, lean_object* v_b_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_a_387_; uint8_t v___x_391_; 
v___x_391_ = lean_usize_dec_lt(v_i_377_, v_sz_376_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_392_, 0, v_b_378_);
return v___x_392_;
}
else
{
lean_object* v_array_393_; lean_object* v_start_394_; lean_object* v_stop_395_; uint8_t v___x_396_; 
v_array_393_ = lean_ctor_get(v_b_378_, 0);
v_start_394_ = lean_ctor_get(v_b_378_, 1);
v_stop_395_ = lean_ctor_get(v_b_378_, 2);
v___x_396_ = lean_nat_dec_lt(v_start_394_, v_stop_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; 
v___x_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_397_, 0, v_b_378_);
return v___x_397_;
}
else
{
lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_426_; 
lean_inc(v_stop_395_);
lean_inc(v_start_394_);
lean_inc_ref(v_array_393_);
v_isSharedCheck_426_ = !lean_is_exclusive(v_b_378_);
if (v_isSharedCheck_426_ == 0)
{
lean_object* v_unused_427_; lean_object* v_unused_428_; lean_object* v_unused_429_; 
v_unused_427_ = lean_ctor_get(v_b_378_, 2);
lean_dec(v_unused_427_);
v_unused_428_ = lean_ctor_get(v_b_378_, 1);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_b_378_, 0);
lean_dec(v_unused_429_);
v___x_399_ = v_b_378_;
v_isShared_400_ = v_isSharedCheck_426_;
goto v_resetjp_398_;
}
else
{
lean_dec(v_b_378_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_426_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v_a_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_406_; 
v_a_401_ = lean_array_uget_borrowed(v_as_375_, v_i_377_);
v___x_402_ = lean_array_fget(v_array_393_, v_start_394_);
v___x_403_ = lean_unsigned_to_nat(1u);
v___x_404_ = lean_nat_add(v_start_394_, v___x_403_);
lean_dec(v_start_394_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 1, v___x_404_);
v___x_406_ = v___x_399_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_array_393_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_425_, 2, v_stop_395_);
v___x_406_ = v_reuseFailAlloc_425_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_407_ = lean_array_get_size(v_a_401_);
v___x_408_ = lean_unsigned_to_nat(0u);
v___x_409_ = lean_nat_dec_eq(v___x_407_, v___x_408_);
if (v___x_409_ == 0)
{
lean_dec(v___x_402_);
v_a_387_ = v___x_406_;
goto v___jp_386_;
}
else
{
lean_object* v_declName_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v_declName_410_ = lean_ctor_get(v___x_402_, 3);
lean_inc(v_declName_410_);
lean_dec(v___x_402_);
v___x_411_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1);
v___x_412_ = l_Lean_MessageData_ofName(v_declName_410_);
v___x_413_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_411_);
lean_ctor_set(v___x_413_, 1, v___x_412_);
v___x_414_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3);
v___x_415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_415_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_dec_ref_known(v___x_416_, 1);
v_a_387_ = v___x_406_;
goto v___jp_386_;
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec_ref(v___x_406_);
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
}
}
}
v___jp_386_:
{
size_t v___x_388_; size_t v___x_389_; 
v___x_388_ = ((size_t)1ULL);
v___x_389_ = lean_usize_add(v_i_377_, v___x_388_);
v_i_377_ = v___x_389_;
v_b_378_ = v_a_387_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object* v_as_430_, lean_object* v_sz_431_, lean_object* v_i_432_, lean_object* v_b_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
size_t v_sz_boxed_441_; size_t v_i_boxed_442_; lean_object* v_res_443_; 
v_sz_boxed_441_ = lean_unbox_usize(v_sz_431_);
lean_dec(v_sz_431_);
v_i_boxed_442_ = lean_unbox_usize(v_i_432_);
lean_dec(v_i_432_);
v_res_443_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(v_as_430_, v_sz_boxed_441_, v_i_boxed_442_, v_b_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec_ref(v_as_430_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(size_t v_sz_444_, size_t v_i_445_, lean_object* v_bs_446_){
_start:
{
uint8_t v___x_447_; 
v___x_447_ = lean_usize_dec_lt(v_i_445_, v_sz_444_);
if (v___x_447_ == 0)
{
return v_bs_446_;
}
else
{
lean_object* v_v_448_; lean_object* v_declName_449_; lean_object* v___x_450_; lean_object* v_bs_x27_451_; size_t v___x_452_; size_t v___x_453_; lean_object* v___x_454_; 
v_v_448_ = lean_array_uget_borrowed(v_bs_446_, v_i_445_);
v_declName_449_ = lean_ctor_get(v_v_448_, 3);
lean_inc(v_declName_449_);
v___x_450_ = lean_unsigned_to_nat(0u);
v_bs_x27_451_ = lean_array_uset(v_bs_446_, v_i_445_, v___x_450_);
v___x_452_ = ((size_t)1ULL);
v___x_453_ = lean_usize_add(v_i_445_, v___x_452_);
v___x_454_ = lean_array_uset(v_bs_x27_451_, v_i_445_, v_declName_449_);
v_i_445_ = v___x_453_;
v_bs_446_ = v___x_454_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object* v_sz_456_, lean_object* v_i_457_, lean_object* v_bs_458_){
_start:
{
size_t v_sz_boxed_459_; size_t v_i_boxed_460_; lean_object* v_res_461_; 
v_sz_boxed_459_ = lean_unbox_usize(v_sz_456_);
lean_dec(v_sz_456_);
v_i_boxed_460_ = lean_unbox_usize(v_i_457_);
lean_dec(v_i_457_);
v_res_461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_boxed_459_, v_i_boxed_460_, v_bs_458_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(lean_object* v_a_462_, lean_object* v___x_463_, size_t v_sz_464_, size_t v_i_465_, lean_object* v_bs_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
uint8_t v___x_470_; 
v___x_470_ = lean_usize_dec_lt(v_i_465_, v_sz_464_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; 
lean_dec(v___x_463_);
lean_dec_ref(v_a_462_);
v___x_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_471_, 0, v_bs_466_);
return v___x_471_;
}
else
{
lean_object* v_v_472_; lean_object* v_ref_473_; uint8_t v_kind_474_; lean_object* v_levelParams_475_; lean_object* v_modifiers_476_; lean_object* v_declName_477_; lean_object* v_binders_478_; lean_object* v_numSectionVars_479_; lean_object* v_type_480_; lean_object* v_value_481_; lean_object* v_termination_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_508_; 
v_v_472_ = lean_array_uget(v_bs_466_, v_i_465_);
v_ref_473_ = lean_ctor_get(v_v_472_, 0);
v_kind_474_ = lean_ctor_get_uint8(v_v_472_, sizeof(void*)*9);
v_levelParams_475_ = lean_ctor_get(v_v_472_, 1);
v_modifiers_476_ = lean_ctor_get(v_v_472_, 2);
v_declName_477_ = lean_ctor_get(v_v_472_, 3);
v_binders_478_ = lean_ctor_get(v_v_472_, 4);
v_numSectionVars_479_ = lean_ctor_get(v_v_472_, 5);
v_type_480_ = lean_ctor_get(v_v_472_, 6);
v_value_481_ = lean_ctor_get(v_v_472_, 7);
v_termination_482_ = lean_ctor_get(v_v_472_, 8);
v_isSharedCheck_508_ = !lean_is_exclusive(v_v_472_);
if (v_isSharedCheck_508_ == 0)
{
v___x_484_ = v_v_472_;
v_isShared_485_ = v_isSharedCheck_508_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_termination_482_);
lean_inc(v_value_481_);
lean_inc(v_type_480_);
lean_inc(v_numSectionVars_479_);
lean_inc(v_binders_478_);
lean_inc(v_declName_477_);
lean_inc(v_modifiers_476_);
lean_inc(v_levelParams_475_);
lean_inc(v_ref_473_);
lean_dec(v_v_472_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_508_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
size_t v_sz_486_; lean_object* v___x_487_; lean_object* v_bs_x27_488_; size_t v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v_sz_486_ = lean_array_size(v_a_462_);
v___x_487_ = lean_unsigned_to_nat(0u);
v_bs_x27_488_ = lean_array_uset(v_bs_466_, v_i_465_, v___x_487_);
v___x_489_ = ((size_t)0ULL);
lean_inc_ref(v_a_462_);
v___x_490_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_486_, v___x_489_, v_a_462_);
lean_inc(v___x_463_);
v___x_491_ = l_Lean_Meta_unfoldIfArgIsAppOf(v___x_490_, v___x_463_, v_value_481_, v___y_467_, v___y_468_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; lean_object* v___x_494_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_a_492_);
lean_dec_ref_known(v___x_491_, 1);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 7, v_a_492_);
v___x_494_ = v___x_484_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_ref_473_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_levelParams_475_);
lean_ctor_set(v_reuseFailAlloc_499_, 2, v_modifiers_476_);
lean_ctor_set(v_reuseFailAlloc_499_, 3, v_declName_477_);
lean_ctor_set(v_reuseFailAlloc_499_, 4, v_binders_478_);
lean_ctor_set(v_reuseFailAlloc_499_, 5, v_numSectionVars_479_);
lean_ctor_set(v_reuseFailAlloc_499_, 6, v_type_480_);
lean_ctor_set(v_reuseFailAlloc_499_, 7, v_a_492_);
lean_ctor_set(v_reuseFailAlloc_499_, 8, v_termination_482_);
lean_ctor_set_uint8(v_reuseFailAlloc_499_, sizeof(void*)*9, v_kind_474_);
v___x_494_ = v_reuseFailAlloc_499_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
size_t v___x_495_; size_t v___x_496_; lean_object* v___x_497_; 
v___x_495_ = ((size_t)1ULL);
v___x_496_ = lean_usize_add(v_i_465_, v___x_495_);
v___x_497_ = lean_array_uset(v_bs_x27_488_, v_i_465_, v___x_494_);
v_i_465_ = v___x_496_;
v_bs_466_ = v___x_497_;
goto _start;
}
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
lean_dec_ref(v_bs_x27_488_);
lean_del_object(v___x_484_);
lean_dec_ref(v_termination_482_);
lean_dec_ref(v_type_480_);
lean_dec(v_numSectionVars_479_);
lean_dec(v_binders_478_);
lean_dec(v_declName_477_);
lean_dec_ref(v_modifiers_476_);
lean_dec(v_levelParams_475_);
lean_dec(v_ref_473_);
lean_dec(v___x_463_);
lean_dec_ref(v_a_462_);
v_a_500_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_491_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_491_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg___boxed(lean_object* v_a_509_, lean_object* v___x_510_, lean_object* v_sz_511_, lean_object* v_i_512_, lean_object* v_bs_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
size_t v_sz_boxed_517_; size_t v_i_boxed_518_; lean_object* v_res_519_; 
v_sz_boxed_517_ = lean_unbox_usize(v_sz_511_);
lean_dec(v_sz_511_);
v_i_boxed_518_ = lean_unbox_usize(v_i_512_);
lean_dec(v_i_512_);
v_res_519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_a_509_, v___x_510_, v_sz_boxed_517_, v_i_boxed_518_, v_bs_513_, v___y_514_, v___y_515_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object* v_a_520_, size_t v_sz_521_, size_t v___x_522_, lean_object* v___x_523_, lean_object* v___x_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_a_520_, v_sz_521_, v___x_522_, v___x_523_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v___x_533_; 
lean_dec_ref_known(v___x_532_, 1);
lean_inc_ref(v_a_520_);
v___x_533_ = l_Lean_Elab_getFixedParamPerms(v_a_520_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_535_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc_n(v_a_534_, 2);
lean_dec_ref_known(v___x_533_, 1);
lean_inc_ref(v_a_520_);
v___x_535_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_a_534_, v_sz_521_, v___x_522_, v_a_520_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; size_t v_sz_540_; lean_object* v___x_541_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = lean_unsigned_to_nat(0u);
v___x_538_ = lean_array_get_size(v_a_520_);
lean_inc_ref(v_a_520_);
v___x_539_ = l_Array_toSubarray___redArg(v_a_520_, v___x_537_, v___x_538_);
v_sz_540_ = lean_array_size(v_a_536_);
v___x_541_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(v_a_536_, v_sz_540_, v___x_522_, v___x_539_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v___x_542_; lean_object* v_numSectionVars_543_; lean_object* v___x_544_; 
lean_dec_ref_known(v___x_541_, 1);
v___x_542_ = lean_array_get_borrowed(v___x_524_, v_a_520_, v___x_537_);
v_numSectionVars_543_ = lean_ctor_get(v___x_542_, 5);
lean_inc(v_numSectionVars_543_);
lean_inc_ref(v_a_520_);
v___x_544_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_a_520_, v_numSectionVars_543_, v_sz_521_, v___x_522_, v_a_520_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
lean_inc(v_a_536_);
lean_inc(v_a_534_);
v___x_546_ = l_Lean_Elab_WF_packMutual(v_a_534_, v_a_536_, v_a_545_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_556_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_556_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_556_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_556_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_554_; 
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v_a_536_);
lean_ctor_set(v___x_551_, 1, v_a_547_);
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v_a_534_);
lean_ctor_set(v___x_552_, 1, v___x_551_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v___x_552_);
v___x_554_ = v___x_549_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_552_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec(v_a_536_);
lean_dec(v_a_534_);
v_a_557_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_546_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_546_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec(v_a_536_);
lean_dec(v_a_534_);
v_a_565_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_544_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_544_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_dec(v_a_536_);
lean_dec(v_a_534_);
lean_dec_ref(v_a_520_);
v_a_573_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_541_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_541_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
else
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
lean_dec(v_a_534_);
lean_dec_ref(v_a_520_);
v_a_581_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_588_ == 0)
{
v___x_583_ = v___x_535_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_535_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_581_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_dec_ref(v_a_520_);
v_a_589_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_533_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_533_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec_ref(v_a_520_);
v_a_597_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_532_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_532_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object* v_a_605_, lean_object* v_sz_606_, lean_object* v___x_607_, lean_object* v___x_608_, lean_object* v___x_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
size_t v_sz_boxed_617_; size_t v___x_44138__boxed_618_; lean_object* v_res_619_; 
v_sz_boxed_617_ = lean_unbox_usize(v_sz_606_);
lean_dec(v_sz_606_);
v___x_44138__boxed_618_ = lean_unbox_usize(v___x_607_);
lean_dec(v___x_607_);
v_res_619_ = l_Lean_Elab_wfRecursion___lam__0(v_a_605_, v_sz_boxed_617_, v___x_44138__boxed_618_, v___x_608_, v___x_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
lean_dec_ref(v___x_609_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object* v_snd_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_620_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_ref_629_; uint8_t v_kind_630_; lean_object* v_levelParams_631_; lean_object* v_modifiers_632_; lean_object* v_declName_633_; lean_object* v_binders_634_; lean_object* v_numSectionVars_635_; lean_object* v_type_636_; lean_object* v_value_637_; lean_object* v_termination_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_664_; 
lean_dec_ref_known(v___x_628_, 1);
v_ref_629_ = lean_ctor_get(v_snd_620_, 0);
v_kind_630_ = lean_ctor_get_uint8(v_snd_620_, sizeof(void*)*9);
v_levelParams_631_ = lean_ctor_get(v_snd_620_, 1);
v_modifiers_632_ = lean_ctor_get(v_snd_620_, 2);
v_declName_633_ = lean_ctor_get(v_snd_620_, 3);
v_binders_634_ = lean_ctor_get(v_snd_620_, 4);
v_numSectionVars_635_ = lean_ctor_get(v_snd_620_, 5);
v_type_636_ = lean_ctor_get(v_snd_620_, 6);
v_value_637_ = lean_ctor_get(v_snd_620_, 7);
v_termination_638_ = lean_ctor_get(v_snd_620_, 8);
v_isSharedCheck_664_ = !lean_is_exclusive(v_snd_620_);
if (v_isSharedCheck_664_ == 0)
{
v___x_640_ = v_snd_620_;
v_isShared_641_ = v_isSharedCheck_664_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_termination_638_);
lean_inc(v_value_637_);
lean_inc(v_type_636_);
lean_inc(v_numSectionVars_635_);
lean_inc(v_binders_634_);
lean_inc(v_declName_633_);
lean_inc(v_modifiers_632_);
lean_inc(v_levelParams_631_);
lean_inc(v_ref_629_);
lean_dec(v_snd_620_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_664_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; 
v___x_642_ = l_Lean_Elab_WF_preprocess(v_value_637_, v___y_623_, v___y_624_, v___y_625_, v___y_626_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_655_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_655_ == 0)
{
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_655_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_655_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v_expr_647_; lean_object* v___x_649_; 
v_expr_647_ = lean_ctor_get(v_a_643_, 0);
lean_inc_ref(v_expr_647_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 7, v_expr_647_);
v___x_649_ = v___x_640_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_ref_629_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v_levelParams_631_);
lean_ctor_set(v_reuseFailAlloc_654_, 2, v_modifiers_632_);
lean_ctor_set(v_reuseFailAlloc_654_, 3, v_declName_633_);
lean_ctor_set(v_reuseFailAlloc_654_, 4, v_binders_634_);
lean_ctor_set(v_reuseFailAlloc_654_, 5, v_numSectionVars_635_);
lean_ctor_set(v_reuseFailAlloc_654_, 6, v_type_636_);
lean_ctor_set(v_reuseFailAlloc_654_, 7, v_expr_647_);
lean_ctor_set(v_reuseFailAlloc_654_, 8, v_termination_638_);
lean_ctor_set_uint8(v_reuseFailAlloc_654_, sizeof(void*)*9, v_kind_630_);
v___x_649_ = v_reuseFailAlloc_654_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
lean_ctor_set(v___x_650_, 1, v_a_643_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_650_);
v___x_652_ = v___x_645_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_del_object(v___x_640_);
lean_dec_ref(v_termination_638_);
lean_dec_ref(v_type_636_);
lean_dec(v_numSectionVars_635_);
lean_dec(v_binders_634_);
lean_dec(v_declName_633_);
lean_dec_ref(v_modifiers_632_);
lean_dec(v_levelParams_631_);
lean_dec(v_ref_629_);
v_a_656_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_642_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_642_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
lean_dec_ref(v_snd_620_);
v_a_665_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_628_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_628_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object* v_snd_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lean_Elab_wfRecursion___lam__1(v_snd_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object* v___x_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_toCold_693_; lean_object* v_options_694_; uint8_t v_hasTrace_695_; 
v_toCold_693_ = lean_ctor_get(v___y_690_, 0);
v_options_694_ = lean_ctor_get(v_toCold_693_, 2);
v_hasTrace_695_ = lean_ctor_get_uint8(v_options_694_, sizeof(void*)*1);
if (v_hasTrace_695_ == 0)
{
lean_object* v___x_696_; lean_object* v___x_697_; 
lean_dec(v___x_685_);
v___x_696_ = lean_box(v_hasTrace_695_);
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
return v___x_697_;
}
else
{
lean_object* v_inheritedTraceOptions_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_inheritedTraceOptions_698_ = lean_ctor_get(v_toCold_693_, 11);
v___x_699_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__1));
v___x_700_ = l_Lean_Name_append(v___x_699_, v___x_685_);
v___x_701_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_698_, v_options_694_, v___x_700_);
lean_dec(v___x_700_);
v___x_702_ = lean_box(v___x_701_);
v___x_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
return v___x_703_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object* v___x_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_Elab_wfRecursion___lam__2(v___x_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
return v_res_712_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(uint8_t v_suppressElabErrors_720_, lean_object* v_x_721_){
_start:
{
if (lean_obj_tag(v_x_721_) == 1)
{
lean_object* v_pre_722_; 
v_pre_722_ = lean_ctor_get(v_x_721_, 0);
switch(lean_obj_tag(v_pre_722_))
{
case 1:
{
lean_object* v_pre_723_; 
v_pre_723_ = lean_ctor_get(v_pre_722_, 0);
switch(lean_obj_tag(v_pre_723_))
{
case 0:
{
lean_object* v_str_724_; lean_object* v_str_725_; lean_object* v___x_726_; uint8_t v___x_727_; 
v_str_724_ = lean_ctor_get(v_x_721_, 1);
v_str_725_ = lean_ctor_get(v_pre_722_, 1);
v___x_726_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0));
v___x_727_ = lean_string_dec_eq(v_str_725_, v___x_726_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1));
v___x_729_ = lean_string_dec_eq(v_str_725_, v___x_728_);
if (v___x_729_ == 0)
{
return v___x_729_;
}
else
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2));
v___x_731_ = lean_string_dec_eq(v_str_724_, v___x_730_);
if (v___x_731_ == 0)
{
return v___x_731_;
}
else
{
return v_suppressElabErrors_720_;
}
}
}
else
{
lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_732_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3));
v___x_733_ = lean_string_dec_eq(v_str_724_, v___x_732_);
if (v___x_733_ == 0)
{
return v___x_733_;
}
else
{
return v_suppressElabErrors_720_;
}
}
}
case 1:
{
lean_object* v_pre_734_; 
v_pre_734_ = lean_ctor_get(v_pre_723_, 0);
if (lean_obj_tag(v_pre_734_) == 0)
{
lean_object* v_str_735_; lean_object* v_str_736_; lean_object* v_str_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v_str_735_ = lean_ctor_get(v_x_721_, 1);
v_str_736_ = lean_ctor_get(v_pre_722_, 1);
v_str_737_ = lean_ctor_get(v_pre_723_, 1);
v___x_738_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4));
v___x_739_ = lean_string_dec_eq(v_str_737_, v___x_738_);
if (v___x_739_ == 0)
{
return v___x_739_;
}
else
{
lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_740_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5));
v___x_741_ = lean_string_dec_eq(v_str_736_, v___x_740_);
if (v___x_741_ == 0)
{
return v___x_741_;
}
else
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6));
v___x_743_ = lean_string_dec_eq(v_str_735_, v___x_742_);
if (v___x_743_ == 0)
{
return v___x_743_;
}
else
{
return v_suppressElabErrors_720_;
}
}
}
}
else
{
uint8_t v___x_744_; 
v___x_744_ = 0;
return v___x_744_;
}
}
default: 
{
uint8_t v___x_745_; 
v___x_745_ = 0;
return v___x_745_;
}
}
}
case 0:
{
lean_object* v_str_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v_str_746_ = lean_ctor_get(v_x_721_, 1);
v___x_747_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__0));
v___x_748_ = lean_string_dec_eq(v_str_746_, v___x_747_);
if (v___x_748_ == 0)
{
return v___x_748_;
}
else
{
return v_suppressElabErrors_720_;
}
}
default: 
{
uint8_t v___x_749_; 
v___x_749_ = 0;
return v___x_749_;
}
}
}
else
{
uint8_t v___x_750_; 
v___x_750_ = 0;
return v___x_750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_751_, lean_object* v_x_752_){
_start:
{
uint8_t v_suppressElabErrors_boxed_753_; uint8_t v_res_754_; lean_object* v_r_755_; 
v_suppressElabErrors_boxed_753_ = lean_unbox(v_suppressElabErrors_751_);
v_res_754_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(v_suppressElabErrors_boxed_753_, v_x_752_);
lean_dec(v_x_752_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(lean_object* v_ref_757_, lean_object* v_msgData_758_, uint8_t v_severity_759_, uint8_t v_isSilent_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___y_767_; lean_object* v___y_768_; uint8_t v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; uint8_t v___y_772_; lean_object* v___y_773_; lean_object* v_toCold_774_; lean_object* v___y_775_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; uint8_t v___y_807_; lean_object* v___y_808_; uint8_t v___y_809_; uint8_t v___y_810_; lean_object* v___y_811_; lean_object* v___y_831_; uint8_t v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; uint8_t v___y_835_; uint8_t v___y_836_; lean_object* v___y_837_; uint8_t v___y_841_; uint8_t v___y_842_; uint8_t v___x_852_; uint8_t v___y_854_; uint8_t v___x_860_; 
v___x_852_ = 2;
v___x_860_ = l_Lean_instBEqMessageSeverity_beq(v_severity_759_, v___x_852_);
if (v___x_860_ == 0)
{
v___y_854_ = v___x_860_;
goto v___jp_853_;
}
else
{
uint8_t v___x_861_; 
lean_inc_ref(v_msgData_758_);
v___x_861_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_758_);
if (v___x_861_ == 0)
{
v___y_854_ = v___x_861_;
goto v___jp_853_;
}
else
{
lean_object* v___x_862_; lean_object* v___x_863_; 
lean_dec_ref(v_msgData_758_);
v___x_862_ = lean_box(0);
v___x_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
return v___x_863_;
}
}
v___jp_766_:
{
lean_object* v_currNamespace_776_; lean_object* v_openDecls_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v_env_782_; lean_object* v_nextMacroScope_783_; lean_object* v_ngen_784_; lean_object* v_auxDeclNGen_785_; lean_object* v_traceState_786_; lean_object* v_cache_787_; lean_object* v_recordedDeps_788_; lean_object* v_messages_789_; lean_object* v_infoState_790_; lean_object* v_snapshotTasks_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_802_; 
v_currNamespace_776_ = lean_ctor_get(v_toCold_774_, 4);
v_openDecls_777_ = lean_ctor_get(v_toCold_774_, 5);
lean_inc(v_openDecls_777_);
lean_inc(v_currNamespace_776_);
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v_currNamespace_776_);
lean_ctor_set(v___x_778_, 1, v_openDecls_777_);
v___x_779_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
lean_ctor_set(v___x_779_, 1, v___y_771_);
lean_inc_ref(v___y_767_);
lean_inc_ref(v___y_770_);
v___x_780_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_780_, 0, v___y_770_);
lean_ctor_set(v___x_780_, 1, v___y_773_);
lean_ctor_set(v___x_780_, 2, v___y_768_);
lean_ctor_set(v___x_780_, 3, v___y_767_);
lean_ctor_set(v___x_780_, 4, v___x_779_);
lean_ctor_set_uint8(v___x_780_, sizeof(void*)*5, v___y_772_);
lean_ctor_set_uint8(v___x_780_, sizeof(void*)*5 + 1, v___y_769_);
lean_ctor_set_uint8(v___x_780_, sizeof(void*)*5 + 2, v_isSilent_760_);
v___x_781_ = lean_st_ref_take(v___y_775_);
v_env_782_ = lean_ctor_get(v___x_781_, 0);
v_nextMacroScope_783_ = lean_ctor_get(v___x_781_, 1);
v_ngen_784_ = lean_ctor_get(v___x_781_, 2);
v_auxDeclNGen_785_ = lean_ctor_get(v___x_781_, 3);
v_traceState_786_ = lean_ctor_get(v___x_781_, 4);
v_cache_787_ = lean_ctor_get(v___x_781_, 5);
v_recordedDeps_788_ = lean_ctor_get(v___x_781_, 6);
v_messages_789_ = lean_ctor_get(v___x_781_, 7);
v_infoState_790_ = lean_ctor_get(v___x_781_, 8);
v_snapshotTasks_791_ = lean_ctor_get(v___x_781_, 9);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_802_ == 0)
{
v___x_793_ = v___x_781_;
v_isShared_794_ = v_isSharedCheck_802_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_snapshotTasks_791_);
lean_inc(v_infoState_790_);
lean_inc(v_messages_789_);
lean_inc(v_recordedDeps_788_);
lean_inc(v_cache_787_);
lean_inc(v_traceState_786_);
lean_inc(v_auxDeclNGen_785_);
lean_inc(v_ngen_784_);
lean_inc(v_nextMacroScope_783_);
lean_inc(v_env_782_);
lean_dec(v___x_781_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_802_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_795_ = lean_box(0);
v___x_796_ = l_Lean_MessageLog_add(v___x_780_, v_messages_789_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 7, v___x_796_);
v___x_798_ = v___x_793_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_env_782_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v_nextMacroScope_783_);
lean_ctor_set(v_reuseFailAlloc_801_, 2, v_ngen_784_);
lean_ctor_set(v_reuseFailAlloc_801_, 3, v_auxDeclNGen_785_);
lean_ctor_set(v_reuseFailAlloc_801_, 4, v_traceState_786_);
lean_ctor_set(v_reuseFailAlloc_801_, 5, v_cache_787_);
lean_ctor_set(v_reuseFailAlloc_801_, 6, v_recordedDeps_788_);
lean_ctor_set(v_reuseFailAlloc_801_, 7, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_801_, 8, v_infoState_790_);
lean_ctor_set(v_reuseFailAlloc_801_, 9, v_snapshotTasks_791_);
v___x_798_ = v_reuseFailAlloc_801_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lean_st_ref_put(v___y_775_, v___x_798_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_795_);
return v___x_800_;
}
}
}
v___jp_803_:
{
lean_object* v_fileName_812_; lean_object* v_fileMap_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_829_; 
v_fileName_812_ = lean_ctor_get(v___y_806_, 0);
v_fileMap_813_ = lean_ctor_get(v___y_806_, 1);
v___x_814_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_758_);
v___x_815_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v___x_814_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_829_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_829_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_829_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
lean_inc_ref_n(v_fileMap_813_, 2);
v___x_820_ = l_Lean_FileMap_toPosition(v_fileMap_813_, v___y_808_);
lean_dec(v___y_808_);
v___x_821_ = l_Lean_FileMap_toPosition(v_fileMap_813_, v___y_811_);
lean_dec(v___y_811_);
v___x_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_822_, 0, v___x_821_);
v___x_823_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0));
if (v___y_807_ == 0)
{
lean_del_object(v___x_818_);
lean_dec_ref(v___y_805_);
v___y_767_ = v___x_823_;
v___y_768_ = v___x_822_;
v___y_769_ = v___y_809_;
v___y_770_ = v_fileName_812_;
v___y_771_ = v_a_816_;
v___y_772_ = v___y_810_;
v___y_773_ = v___x_820_;
v_toCold_774_ = v___y_804_;
v___y_775_ = v___y_764_;
goto v___jp_766_;
}
else
{
uint8_t v___x_824_; 
lean_inc(v_a_816_);
v___x_824_ = l_Lean_MessageData_hasTag(v___y_805_, v_a_816_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; lean_object* v___x_827_; 
lean_dec_ref_known(v___x_822_, 1);
lean_dec_ref(v___x_820_);
lean_dec(v_a_816_);
v___x_825_ = lean_box(0);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_825_);
v___x_827_ = v___x_818_;
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
else
{
lean_del_object(v___x_818_);
v___y_767_ = v___x_823_;
v___y_768_ = v___x_822_;
v___y_769_ = v___y_809_;
v___y_770_ = v_fileName_812_;
v___y_771_ = v_a_816_;
v___y_772_ = v___y_810_;
v___y_773_ = v___x_820_;
v_toCold_774_ = v___y_804_;
v___y_775_ = v___y_764_;
goto v___jp_766_;
}
}
}
}
v___jp_830_:
{
lean_object* v___x_838_; 
v___x_838_ = l_Lean_Syntax_getTailPos_x3f(v___y_834_, v___y_836_);
lean_dec(v___y_834_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_inc(v___y_837_);
v___y_804_ = v___y_831_;
v___y_805_ = v___y_833_;
v___y_806_ = v___y_831_;
v___y_807_ = v___y_832_;
v___y_808_ = v___y_837_;
v___y_809_ = v___y_835_;
v___y_810_ = v___y_836_;
v___y_811_ = v___y_837_;
goto v___jp_803_;
}
else
{
lean_object* v_val_839_; 
v_val_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc(v_val_839_);
lean_dec_ref_known(v___x_838_, 1);
v___y_804_ = v___y_831_;
v___y_805_ = v___y_833_;
v___y_806_ = v___y_831_;
v___y_807_ = v___y_832_;
v___y_808_ = v___y_837_;
v___y_809_ = v___y_835_;
v___y_810_ = v___y_836_;
v___y_811_ = v_val_839_;
goto v___jp_803_;
}
}
v___jp_840_:
{
lean_object* v_toCold_843_; lean_object* v_ref_844_; uint8_t v_suppressElabErrors_845_; lean_object* v___x_846_; lean_object* v___f_847_; lean_object* v_ref_848_; lean_object* v___x_849_; 
v_toCold_843_ = lean_ctor_get(v___y_763_, 0);
v_ref_844_ = lean_ctor_get(v___y_763_, 2);
v_suppressElabErrors_845_ = lean_ctor_get_uint8(v___y_763_, sizeof(void*)*3 + 2);
v___x_846_ = lean_box(v_suppressElabErrors_845_);
v___f_847_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_847_, 0, v___x_846_);
v_ref_848_ = l_Lean_replaceRef(v_ref_757_, v_ref_844_);
v___x_849_ = l_Lean_Syntax_getPos_x3f(v_ref_848_, v___y_841_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v___x_850_; 
v___x_850_ = lean_unsigned_to_nat(0u);
v___y_831_ = v_toCold_843_;
v___y_832_ = v_suppressElabErrors_845_;
v___y_833_ = v___f_847_;
v___y_834_ = v_ref_848_;
v___y_835_ = v___y_842_;
v___y_836_ = v___y_841_;
v___y_837_ = v___x_850_;
goto v___jp_830_;
}
else
{
lean_object* v_val_851_; 
v_val_851_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_val_851_);
lean_dec_ref_known(v___x_849_, 1);
v___y_831_ = v_toCold_843_;
v___y_832_ = v_suppressElabErrors_845_;
v___y_833_ = v___f_847_;
v___y_834_ = v_ref_848_;
v___y_835_ = v___y_842_;
v___y_836_ = v___y_841_;
v___y_837_ = v_val_851_;
goto v___jp_830_;
}
}
v___jp_853_:
{
uint8_t v___x_855_; uint8_t v___x_856_; 
v___x_855_ = 1;
v___x_856_ = l_Lean_instBEqMessageSeverity_beq(v_severity_759_, v___x_855_);
if (v___x_856_ == 0)
{
v___y_841_ = v___y_854_;
v___y_842_ = v_severity_759_;
goto v___jp_840_;
}
else
{
lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_857_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_763_);
v___x_858_ = l_Lean_warningAsError;
v___x_859_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v___x_857_, v___x_858_);
lean_dec_ref(v___x_857_);
if (v___x_859_ == 0)
{
v___y_841_ = v___y_854_;
v___y_842_ = v_severity_759_;
goto v___jp_840_;
}
else
{
v___y_841_ = v___y_854_;
v___y_842_ = v___x_852_;
goto v___jp_840_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___boxed(lean_object* v_ref_864_, lean_object* v_msgData_865_, lean_object* v_severity_866_, lean_object* v_isSilent_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
uint8_t v_severity_boxed_873_; uint8_t v_isSilent_boxed_874_; lean_object* v_res_875_; 
v_severity_boxed_873_ = lean_unbox(v_severity_866_);
v_isSilent_boxed_874_ = lean_unbox(v_isSilent_867_);
v_res_875_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_864_, v_msgData_865_, v_severity_boxed_873_, v_isSilent_boxed_874_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v_ref_864_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(lean_object* v_ref_876_, lean_object* v_msgData_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
uint8_t v___x_885_; uint8_t v___x_886_; lean_object* v___x_887_; 
v___x_885_ = 1;
v___x_886_ = 0;
v___x_887_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_876_, v_msgData_877_, v___x_885_, v___x_886_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object* v_ref_888_, lean_object* v_msgData_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(v_ref_888_, v_msgData_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec(v_ref_888_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(lean_object* v___x_906_, lean_object* v_as_907_, size_t v_i_908_, size_t v_stop_909_, lean_object* v_b_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
lean_object* v_a_919_; uint8_t v___x_923_; 
v___x_923_ = lean_usize_dec_eq(v_i_908_, v_stop_909_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; lean_object* v_name_925_; lean_object* v_stx_926_; uint8_t v___y_928_; lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_924_ = lean_array_uget_borrowed(v_as_907_, v_i_908_);
v_name_925_ = lean_ctor_get(v___x_924_, 0);
v_stx_926_ = lean_ctor_get(v___x_924_, 1);
v___x_938_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3));
v___x_939_ = lean_name_eq(v_name_925_, v___x_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5));
v___x_941_ = lean_name_eq(v_name_925_, v___x_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; 
v___x_942_ = lean_box(0);
v_a_919_ = v___x_942_;
goto v___jp_918_;
}
else
{
v___y_928_ = v___x_941_;
goto v___jp_927_;
}
}
else
{
lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = lean_unsigned_to_nat(0u);
v___x_944_ = lean_nat_dec_lt(v___x_943_, v___x_906_);
v___y_928_ = v___x_944_;
goto v___jp_927_;
}
v___jp_927_:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_929_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0));
lean_inc(v_name_925_);
v___x_930_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_925_, v___y_928_);
v___x_931_ = lean_string_append(v___x_929_, v___x_930_);
lean_dec_ref(v___x_930_);
v___x_932_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1));
v___x_933_ = lean_string_append(v___x_931_, v___x_932_);
v___x_934_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
v___x_935_ = l_Lean_MessageData_ofFormat(v___x_934_);
v___x_936_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(v_stx_926_, v___x_935_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
lean_inc(v_a_937_);
lean_dec_ref_known(v___x_936_, 1);
v_a_919_ = v_a_937_;
goto v___jp_918_;
}
else
{
return v___x_936_;
}
}
}
else
{
lean_object* v___x_945_; 
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v_b_910_);
return v___x_945_;
}
v___jp_918_:
{
size_t v___x_920_; size_t v___x_921_; 
v___x_920_ = ((size_t)1ULL);
v___x_921_ = lean_usize_add(v_i_908_, v___x_920_);
v_i_908_ = v___x_921_;
v_b_910_ = v_a_919_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object* v___x_946_, lean_object* v_as_947_, lean_object* v_i_948_, lean_object* v_stop_949_, lean_object* v_b_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
size_t v_i_boxed_958_; size_t v_stop_boxed_959_; lean_object* v_res_960_; 
v_i_boxed_958_ = lean_unbox_usize(v_i_948_);
lean_dec(v_i_948_);
v_stop_boxed_959_ = lean_unbox_usize(v_stop_949_);
lean_dec(v_stop_949_);
v_res_960_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v___x_946_, v_as_947_, v_i_boxed_958_, v_stop_boxed_959_, v_b_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
lean_dec(v___y_954_);
lean_dec_ref(v___y_953_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec_ref(v_as_947_);
lean_dec(v___x_946_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(lean_object* v___x_961_, lean_object* v_as_962_, size_t v_i_963_, size_t v_stop_964_, lean_object* v_b_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v_a_974_; uint8_t v___x_978_; 
v___x_978_ = lean_usize_dec_eq(v_i_963_, v_stop_964_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; lean_object* v_modifiers_980_; lean_object* v_attrs_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; 
v___x_979_ = lean_array_uget_borrowed(v_as_962_, v_i_963_);
v_modifiers_980_ = lean_ctor_get(v___x_979_, 2);
v_attrs_981_ = lean_ctor_get(v_modifiers_980_, 2);
v___x_982_ = lean_unsigned_to_nat(0u);
v___x_983_ = lean_array_get_size(v_attrs_981_);
v___x_984_ = lean_box(0);
v___x_985_ = lean_nat_dec_lt(v___x_982_, v___x_983_);
if (v___x_985_ == 0)
{
v_a_974_ = v___x_984_;
goto v___jp_973_;
}
else
{
size_t v___x_986_; size_t v___x_987_; lean_object* v___x_988_; 
v___x_986_ = ((size_t)0ULL);
v___x_987_ = lean_usize_of_nat(v___x_983_);
v___x_988_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v___x_961_, v_attrs_981_, v___x_986_, v___x_987_, v___x_984_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v_a_989_; 
v_a_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_988_, 1);
v_a_974_ = v_a_989_;
goto v___jp_973_;
}
else
{
return v___x_988_;
}
}
}
else
{
lean_object* v___x_990_; 
v___x_990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_990_, 0, v_b_965_);
return v___x_990_;
}
v___jp_973_:
{
size_t v___x_975_; size_t v___x_976_; 
v___x_975_ = ((size_t)1ULL);
v___x_976_ = lean_usize_add(v_i_963_, v___x_975_);
v_i_963_ = v___x_976_;
v_b_965_ = v_a_974_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13___boxed(lean_object* v___x_991_, lean_object* v_as_992_, lean_object* v_i_993_, lean_object* v_stop_994_, lean_object* v_b_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
size_t v_i_boxed_1003_; size_t v_stop_boxed_1004_; lean_object* v_res_1005_; 
v_i_boxed_1003_ = lean_unbox_usize(v_i_993_);
lean_dec(v_i_993_);
v_stop_boxed_1004_ = lean_unbox_usize(v_stop_994_);
lean_dec(v_stop_994_);
v_res_1005_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v___x_991_, v_as_992_, v_i_boxed_1003_, v_stop_boxed_1004_, v_b_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec_ref(v_as_992_);
lean_dec(v___x_991_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(size_t v_sz_1006_, size_t v_i_1007_, lean_object* v_bs_1008_){
_start:
{
uint8_t v___x_1009_; 
v___x_1009_ = lean_usize_dec_lt(v_i_1007_, v_sz_1006_);
if (v___x_1009_ == 0)
{
return v_bs_1008_;
}
else
{
lean_object* v_v_1010_; lean_object* v_termination_1011_; lean_object* v_decreasingBy_x3f_1012_; lean_object* v___x_1013_; lean_object* v_bs_x27_1014_; size_t v___x_1015_; size_t v___x_1016_; lean_object* v___x_1017_; 
v_v_1010_ = lean_array_uget_borrowed(v_bs_1008_, v_i_1007_);
v_termination_1011_ = lean_ctor_get(v_v_1010_, 8);
v_decreasingBy_x3f_1012_ = lean_ctor_get(v_termination_1011_, 4);
lean_inc(v_decreasingBy_x3f_1012_);
v___x_1013_ = lean_unsigned_to_nat(0u);
v_bs_x27_1014_ = lean_array_uset(v_bs_1008_, v_i_1007_, v___x_1013_);
v___x_1015_ = ((size_t)1ULL);
v___x_1016_ = lean_usize_add(v_i_1007_, v___x_1015_);
v___x_1017_ = lean_array_uset(v_bs_x27_1014_, v_i_1007_, v_decreasingBy_x3f_1012_);
v_i_1007_ = v___x_1016_;
v_bs_1008_ = v___x_1017_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object* v_sz_1019_, lean_object* v_i_1020_, lean_object* v_bs_1021_){
_start:
{
size_t v_sz_boxed_1022_; size_t v_i_boxed_1023_; lean_object* v_res_1024_; 
v_sz_boxed_1022_ = lean_unbox_usize(v_sz_1019_);
lean_dec(v_sz_1019_);
v_i_boxed_1023_ = lean_unbox_usize(v_i_1020_);
lean_dec(v_i_1020_);
v_res_1024_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(v_sz_boxed_1022_, v_i_boxed_1023_, v_bs_1021_);
return v_res_1024_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_1025_; double v___x_1026_; 
v___x_1025_ = lean_unsigned_to_nat(0u);
v___x_1026_ = lean_float_of_nat(v___x_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(lean_object* v_cls_1029_, lean_object* v_msg_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_ref_1036_; lean_object* v___x_1037_; lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1083_; 
v_ref_1036_ = lean_ctor_get(v___y_1033_, 2);
v___x_1037_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1040_ = v___x_1037_;
v_isShared_1041_ = v_isSharedCheck_1083_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1037_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1083_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1042_; lean_object* v_traceState_1043_; lean_object* v_env_1044_; lean_object* v_nextMacroScope_1045_; lean_object* v_ngen_1046_; lean_object* v_auxDeclNGen_1047_; lean_object* v_cache_1048_; lean_object* v_recordedDeps_1049_; lean_object* v_messages_1050_; lean_object* v_infoState_1051_; lean_object* v_snapshotTasks_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1082_; 
v___x_1042_ = lean_st_ref_take(v___y_1034_);
v_traceState_1043_ = lean_ctor_get(v___x_1042_, 4);
v_env_1044_ = lean_ctor_get(v___x_1042_, 0);
v_nextMacroScope_1045_ = lean_ctor_get(v___x_1042_, 1);
v_ngen_1046_ = lean_ctor_get(v___x_1042_, 2);
v_auxDeclNGen_1047_ = lean_ctor_get(v___x_1042_, 3);
v_cache_1048_ = lean_ctor_get(v___x_1042_, 5);
v_recordedDeps_1049_ = lean_ctor_get(v___x_1042_, 6);
v_messages_1050_ = lean_ctor_get(v___x_1042_, 7);
v_infoState_1051_ = lean_ctor_get(v___x_1042_, 8);
v_snapshotTasks_1052_ = lean_ctor_get(v___x_1042_, 9);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1054_ = v___x_1042_;
v_isShared_1055_ = v_isSharedCheck_1082_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_snapshotTasks_1052_);
lean_inc(v_infoState_1051_);
lean_inc(v_messages_1050_);
lean_inc(v_recordedDeps_1049_);
lean_inc(v_cache_1048_);
lean_inc(v_traceState_1043_);
lean_inc(v_auxDeclNGen_1047_);
lean_inc(v_ngen_1046_);
lean_inc(v_nextMacroScope_1045_);
lean_inc(v_env_1044_);
lean_dec(v___x_1042_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1082_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
uint64_t v_tid_1056_; lean_object* v_traces_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1081_; 
v_tid_1056_ = lean_ctor_get_uint64(v_traceState_1043_, sizeof(void*)*1);
v_traces_1057_ = lean_ctor_get(v_traceState_1043_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v_traceState_1043_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1059_ = v_traceState_1043_;
v_isShared_1060_ = v_isSharedCheck_1081_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_traces_1057_);
lean_dec(v_traceState_1043_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1081_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; double v___x_1063_; uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1061_ = lean_box(0);
v___x_1062_ = lean_box(0);
v___x_1063_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0);
v___x_1064_ = 0;
v___x_1065_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0));
v___x_1066_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1066_, 0, v_cls_1029_);
lean_ctor_set(v___x_1066_, 1, v___x_1062_);
lean_ctor_set(v___x_1066_, 2, v___x_1065_);
lean_ctor_set_float(v___x_1066_, sizeof(void*)*3, v___x_1063_);
lean_ctor_set_float(v___x_1066_, sizeof(void*)*3 + 8, v___x_1063_);
lean_ctor_set_uint8(v___x_1066_, sizeof(void*)*3 + 16, v___x_1064_);
v___x_1067_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1));
v___x_1068_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1066_);
lean_ctor_set(v___x_1068_, 1, v_a_1038_);
lean_ctor_set(v___x_1068_, 2, v___x_1067_);
lean_inc(v_ref_1036_);
v___x_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1069_, 0, v_ref_1036_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = l_Lean_PersistentArray_push___redArg(v_traces_1057_, v___x_1069_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v___x_1070_);
v___x_1072_ = v___x_1059_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_1070_);
lean_ctor_set_uint64(v_reuseFailAlloc_1080_, sizeof(void*)*1, v_tid_1056_);
v___x_1072_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
lean_object* v___x_1074_; 
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 4, v___x_1072_);
v___x_1074_ = v___x_1054_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_env_1044_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_nextMacroScope_1045_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v_ngen_1046_);
lean_ctor_set(v_reuseFailAlloc_1079_, 3, v_auxDeclNGen_1047_);
lean_ctor_set(v_reuseFailAlloc_1079_, 4, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1079_, 5, v_cache_1048_);
lean_ctor_set(v_reuseFailAlloc_1079_, 6, v_recordedDeps_1049_);
lean_ctor_set(v_reuseFailAlloc_1079_, 7, v_messages_1050_);
lean_ctor_set(v_reuseFailAlloc_1079_, 8, v_infoState_1051_);
lean_ctor_set(v_reuseFailAlloc_1079_, 9, v_snapshotTasks_1052_);
v___x_1074_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1075_ = lean_st_ref_put(v___y_1034_, v___x_1074_);
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 0, v___x_1061_);
v___x_1077_ = v___x_1040_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1061_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___boxed(lean_object* v_cls_1084_, lean_object* v_msg_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v_cls_1084_, v_msg_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
return v_res_1091_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__3___closed__0));
v___x_1094_ = l_Lean_stringToMessageData(v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object* v_snd_1095_, size_t v_sz_1096_, size_t v___x_1097_, lean_object* v_a_1098_, lean_object* v_fst_1099_, lean_object* v_fixedArgs_1100_, lean_object* v_fst_1101_, lean_object* v___x_1102_, lean_object* v___x_1103_, lean_object* v___x_1104_, lean_object* v_wfRel_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; lean_object* v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v_a_1121_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v_toCold_1253_; lean_object* v_options_1254_; uint8_t v_hasTrace_1255_; 
v_toCold_1253_ = lean_ctor_get(v___y_1110_, 0);
v_options_1254_ = lean_ctor_get(v_toCold_1253_, 2);
v_hasTrace_1255_ = lean_ctor_get_uint8(v_options_1254_, sizeof(void*)*1);
if (v_hasTrace_1255_ == 0)
{
lean_dec(v___x_1104_);
v___y_1224_ = v___y_1106_;
v___y_1225_ = v___y_1107_;
v___y_1226_ = v___y_1108_;
v___y_1227_ = v___y_1109_;
v___y_1228_ = v___y_1110_;
v___y_1229_ = v___y_1111_;
goto v___jp_1223_;
}
else
{
lean_object* v_inheritedTraceOptions_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
v_inheritedTraceOptions_1256_ = lean_ctor_get(v_toCold_1253_, 11);
v___x_1257_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__1));
lean_inc(v___x_1104_);
v___x_1258_ = l_Lean_Name_append(v___x_1257_, v___x_1104_);
v___x_1259_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1256_, v_options_1254_, v___x_1258_);
lean_dec(v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec(v___x_1104_);
v___y_1224_ = v___y_1106_;
v___y_1225_ = v___y_1107_;
v___y_1226_ = v___y_1108_;
v___y_1227_ = v___y_1109_;
v___y_1228_ = v___y_1110_;
v___y_1229_ = v___y_1111_;
goto v___jp_1223_;
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1260_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__3___closed__1, &l_Lean_Elab_wfRecursion___lam__3___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__3___closed__1);
lean_inc_ref(v_wfRel_1105_);
v___x_1261_ = l_Lean_MessageData_ofExpr(v_wfRel_1105_);
v___x_1262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1260_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v___x_1263_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1104_, v___x_1262_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_dec_ref_known(v___x_1263_, 1);
v___y_1224_ = v___y_1106_;
v___y_1225_ = v___y_1107_;
v___y_1226_ = v___y_1108_;
v___y_1227_ = v___y_1109_;
v___y_1228_ = v___y_1110_;
v___y_1229_ = v___y_1111_;
goto v___jp_1223_;
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
lean_dec_ref(v_wfRel_1105_);
lean_dec_ref(v___x_1102_);
lean_dec_ref(v_fst_1101_);
lean_dec_ref(v_fixedArgs_1100_);
lean_dec_ref(v_fst_1099_);
lean_dec_ref(v_a_1098_);
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1263_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
v___jp_1113_:
{
lean_object* v___x_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
v___x_1122_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v___y_1117_, v___y_1115_, v___y_1118_);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1129_ == 0)
{
lean_object* v_unused_1130_; 
v_unused_1130_ = lean_ctor_get(v___x_1122_, 0);
lean_dec(v_unused_1130_);
v___x_1124_ = v___x_1122_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_dec(v___x_1122_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
lean_ctor_set_tag(v___x_1124_, 1);
lean_ctor_set(v___x_1124_, 0, v_a_1121_);
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1121_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
v___jp_1131_:
{
lean_object* v___x_1138_; lean_object* v_env_1139_; lean_object* v___x_1140_; 
v___x_1138_ = lean_st_ref_get(v___y_1137_);
v_env_1139_ = lean_ctor_get(v___x_1138_, 0);
lean_inc_ref(v_env_1139_);
lean_dec(v___x_1138_);
v___x_1140_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_1095_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
lean_dec_ref_known(v___x_1140_, 1);
v___x_1141_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(v_sz_1096_, v___x_1097_, v_a_1098_);
lean_inc_ref(v_fst_1099_);
v___x_1142_ = l_Lean_Elab_WF_mkFix(v_fst_1099_, v_fixedArgs_1100_, v_fst_1101_, v_wfRel_1105_, v___x_1102_, v___x_1141_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1144_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1143_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1144_ = l_Lean_Elab_eraseRecAppSyntaxExpr(v_a_1143_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1146_; lean_object* v_env_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = lean_st_ref_get(v___y_1137_);
v_env_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc_ref_n(v_env_1147_, 2);
lean_dec(v___x_1146_);
v___x_1148_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1139_, v___y_1135_, v___y_1137_);
lean_dec_ref(v___x_1148_);
v___x_1149_ = l_Lean_Meta_unfoldDeclsFrom(v_env_1147_, v_a_1145_, v___y_1136_, v___y_1137_);
if (lean_obj_tag(v___x_1149_) == 0)
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1211_; 
v_a_1150_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1152_ = v___x_1149_;
v_isShared_1153_ = v_isSharedCheck_1211_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1149_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1211_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1154_; lean_object* v_env_1155_; lean_object* v_nextMacroScope_1156_; lean_object* v_ngen_1157_; lean_object* v_auxDeclNGen_1158_; lean_object* v_traceState_1159_; lean_object* v_recordedDeps_1160_; lean_object* v_messages_1161_; lean_object* v_infoState_1162_; lean_object* v_snapshotTasks_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1209_; 
v___x_1154_ = lean_st_ref_take(v___y_1137_);
v_env_1155_ = lean_ctor_get(v___x_1154_, 0);
v_nextMacroScope_1156_ = lean_ctor_get(v___x_1154_, 1);
v_ngen_1157_ = lean_ctor_get(v___x_1154_, 2);
v_auxDeclNGen_1158_ = lean_ctor_get(v___x_1154_, 3);
v_traceState_1159_ = lean_ctor_get(v___x_1154_, 4);
v_recordedDeps_1160_ = lean_ctor_get(v___x_1154_, 6);
v_messages_1161_ = lean_ctor_get(v___x_1154_, 7);
v_infoState_1162_ = lean_ctor_get(v___x_1154_, 8);
v_snapshotTasks_1163_ = lean_ctor_get(v___x_1154_, 9);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1209_ == 0)
{
lean_object* v_unused_1210_; 
v_unused_1210_ = lean_ctor_get(v___x_1154_, 5);
lean_dec(v_unused_1210_);
v___x_1165_ = v___x_1154_;
v_isShared_1166_ = v_isSharedCheck_1209_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_snapshotTasks_1163_);
lean_inc(v_infoState_1162_);
lean_inc(v_messages_1161_);
lean_inc(v_recordedDeps_1160_);
lean_inc(v_traceState_1159_);
lean_inc(v_auxDeclNGen_1158_);
lean_inc(v_ngen_1157_);
lean_inc(v_nextMacroScope_1156_);
lean_inc(v_env_1155_);
lean_dec(v___x_1154_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1209_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1167_ = l_Lean_copyExtraModUses(v_env_1147_, v_env_1155_);
v___x_1168_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 5, v___x_1168_);
lean_ctor_set(v___x_1165_, 0, v___x_1167_);
v___x_1170_ = v___x_1165_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_nextMacroScope_1156_);
lean_ctor_set(v_reuseFailAlloc_1208_, 2, v_ngen_1157_);
lean_ctor_set(v_reuseFailAlloc_1208_, 3, v_auxDeclNGen_1158_);
lean_ctor_set(v_reuseFailAlloc_1208_, 4, v_traceState_1159_);
lean_ctor_set(v_reuseFailAlloc_1208_, 5, v___x_1168_);
lean_ctor_set(v_reuseFailAlloc_1208_, 6, v_recordedDeps_1160_);
lean_ctor_set(v_reuseFailAlloc_1208_, 7, v_messages_1161_);
lean_ctor_set(v_reuseFailAlloc_1208_, 8, v_infoState_1162_);
lean_ctor_set(v_reuseFailAlloc_1208_, 9, v_snapshotTasks_1163_);
v___x_1170_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v_mctx_1173_; lean_object* v_zetaDeltaFVarIds_1174_; lean_object* v_postponed_1175_; lean_object* v_diag_1176_; lean_object* v_rewriteFires_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1206_; 
v___x_1171_ = lean_st_ref_put(v___y_1137_, v___x_1170_);
v___x_1172_ = lean_st_ref_take(v___y_1135_);
v_mctx_1173_ = lean_ctor_get(v___x_1172_, 0);
v_zetaDeltaFVarIds_1174_ = lean_ctor_get(v___x_1172_, 2);
v_postponed_1175_ = lean_ctor_get(v___x_1172_, 3);
v_diag_1176_ = lean_ctor_get(v___x_1172_, 4);
v_rewriteFires_1177_ = lean_ctor_get(v___x_1172_, 5);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1206_ == 0)
{
lean_object* v_unused_1207_; 
v_unused_1207_ = lean_ctor_get(v___x_1172_, 1);
lean_dec(v_unused_1207_);
v___x_1179_ = v___x_1172_;
v_isShared_1180_ = v_isSharedCheck_1206_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_rewriteFires_1177_);
lean_inc(v_diag_1176_);
lean_inc(v_postponed_1175_);
lean_inc(v_zetaDeltaFVarIds_1174_);
lean_inc(v_mctx_1173_);
lean_dec(v___x_1172_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1206_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1181_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 1, v___x_1181_);
v___x_1183_ = v___x_1179_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_mctx_1173_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v___x_1181_);
lean_ctor_set(v_reuseFailAlloc_1205_, 2, v_zetaDeltaFVarIds_1174_);
lean_ctor_set(v_reuseFailAlloc_1205_, 3, v_postponed_1175_);
lean_ctor_set(v_reuseFailAlloc_1205_, 4, v_diag_1176_);
lean_ctor_set(v_reuseFailAlloc_1205_, 5, v_rewriteFires_1177_);
v___x_1183_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
lean_object* v___x_1184_; lean_object* v_ref_1185_; uint8_t v_kind_1186_; lean_object* v_levelParams_1187_; lean_object* v_modifiers_1188_; lean_object* v_declName_1189_; lean_object* v_binders_1190_; lean_object* v_numSectionVars_1191_; lean_object* v_type_1192_; lean_object* v_termination_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1203_; 
v___x_1184_ = lean_st_ref_put(v___y_1135_, v___x_1183_);
v_ref_1185_ = lean_ctor_get(v_fst_1099_, 0);
v_kind_1186_ = lean_ctor_get_uint8(v_fst_1099_, sizeof(void*)*9);
v_levelParams_1187_ = lean_ctor_get(v_fst_1099_, 1);
v_modifiers_1188_ = lean_ctor_get(v_fst_1099_, 2);
v_declName_1189_ = lean_ctor_get(v_fst_1099_, 3);
v_binders_1190_ = lean_ctor_get(v_fst_1099_, 4);
v_numSectionVars_1191_ = lean_ctor_get(v_fst_1099_, 5);
v_type_1192_ = lean_ctor_get(v_fst_1099_, 6);
v_termination_1193_ = lean_ctor_get(v_fst_1099_, 8);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_fst_1099_);
if (v_isSharedCheck_1203_ == 0)
{
lean_object* v_unused_1204_; 
v_unused_1204_ = lean_ctor_get(v_fst_1099_, 7);
lean_dec(v_unused_1204_);
v___x_1195_ = v_fst_1099_;
v_isShared_1196_ = v_isSharedCheck_1203_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_termination_1193_);
lean_inc(v_type_1192_);
lean_inc(v_numSectionVars_1191_);
lean_inc(v_binders_1190_);
lean_inc(v_declName_1189_);
lean_inc(v_modifiers_1188_);
lean_inc(v_levelParams_1187_);
lean_inc(v_ref_1185_);
lean_dec(v_fst_1099_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1203_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 7, v_a_1150_);
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_ref_1185_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v_levelParams_1187_);
lean_ctor_set(v_reuseFailAlloc_1202_, 2, v_modifiers_1188_);
lean_ctor_set(v_reuseFailAlloc_1202_, 3, v_declName_1189_);
lean_ctor_set(v_reuseFailAlloc_1202_, 4, v_binders_1190_);
lean_ctor_set(v_reuseFailAlloc_1202_, 5, v_numSectionVars_1191_);
lean_ctor_set(v_reuseFailAlloc_1202_, 6, v_type_1192_);
lean_ctor_set(v_reuseFailAlloc_1202_, 7, v_a_1150_);
lean_ctor_set(v_reuseFailAlloc_1202_, 8, v_termination_1193_);
lean_ctor_set_uint8(v_reuseFailAlloc_1202_, sizeof(void*)*9, v_kind_1186_);
v___x_1198_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1200_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 0, v___x_1198_);
v___x_1200_ = v___x_1152_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
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
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_dec_ref(v_env_1147_);
lean_dec_ref(v_fst_1099_);
v_a_1212_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1149_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1149_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
else
{
lean_object* v_a_1220_; 
lean_dec_ref(v_fst_1099_);
v_a_1220_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1144_, 1);
v___y_1114_ = v___y_1132_;
v___y_1115_ = v___y_1135_;
v___y_1116_ = v___y_1133_;
v___y_1117_ = v_env_1139_;
v___y_1118_ = v___y_1137_;
v___y_1119_ = v___y_1136_;
v___y_1120_ = v___y_1134_;
v_a_1121_ = v_a_1220_;
goto v___jp_1113_;
}
}
else
{
lean_object* v_a_1221_; 
lean_dec_ref(v_fst_1099_);
v_a_1221_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1221_);
lean_dec_ref_known(v___x_1142_, 1);
v___y_1114_ = v___y_1132_;
v___y_1115_ = v___y_1135_;
v___y_1116_ = v___y_1133_;
v___y_1117_ = v_env_1139_;
v___y_1118_ = v___y_1137_;
v___y_1119_ = v___y_1136_;
v___y_1120_ = v___y_1134_;
v_a_1121_ = v_a_1221_;
goto v___jp_1113_;
}
}
else
{
lean_object* v_a_1222_; 
lean_dec_ref(v_wfRel_1105_);
lean_dec_ref(v___x_1102_);
lean_dec_ref(v_fst_1101_);
lean_dec_ref(v_fixedArgs_1100_);
lean_dec_ref(v_fst_1099_);
lean_dec_ref(v_a_1098_);
v_a_1222_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1222_);
lean_dec_ref_known(v___x_1140_, 1);
v___y_1114_ = v___y_1132_;
v___y_1115_ = v___y_1135_;
v___y_1116_ = v___y_1133_;
v___y_1117_ = v_env_1139_;
v___y_1118_ = v___y_1137_;
v___y_1119_ = v___y_1136_;
v___y_1120_ = v___y_1134_;
v_a_1121_ = v_a_1222_;
goto v___jp_1113_;
}
}
v___jp_1223_:
{
lean_object* v___x_1230_; 
lean_inc_ref(v_wfRel_1105_);
v___x_1230_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_1105_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v_a_1231_; 
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_a_1231_);
lean_dec_ref_known(v___x_1230_, 1);
if (lean_obj_tag(v_a_1231_) == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1232_ = lean_unsigned_to_nat(0u);
v___x_1233_ = lean_array_get_size(v_a_1098_);
v___x_1234_ = lean_nat_dec_lt(v___x_1232_, v___x_1233_);
if (v___x_1234_ == 0)
{
v___y_1132_ = v___y_1224_;
v___y_1133_ = v___y_1225_;
v___y_1134_ = v___y_1226_;
v___y_1135_ = v___y_1227_;
v___y_1136_ = v___y_1228_;
v___y_1137_ = v___y_1229_;
goto v___jp_1131_;
}
else
{
size_t v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = lean_usize_of_nat(v___x_1233_);
v___x_1236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v___x_1233_, v_a_1098_, v___x_1097_, v___x_1235_, v___x_1103_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_dec_ref_known(v___x_1236_, 1);
v___y_1132_ = v___y_1224_;
v___y_1133_ = v___y_1225_;
v___y_1134_ = v___y_1226_;
v___y_1135_ = v___y_1227_;
v___y_1136_ = v___y_1228_;
v___y_1137_ = v___y_1229_;
goto v___jp_1131_;
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
lean_dec_ref(v_wfRel_1105_);
lean_dec_ref(v___x_1102_);
lean_dec_ref(v_fst_1101_);
lean_dec_ref(v_fixedArgs_1100_);
lean_dec_ref(v_fst_1099_);
lean_dec_ref(v_a_1098_);
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1236_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1236_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_a_1231_, 1);
v___y_1132_ = v___y_1224_;
v___y_1133_ = v___y_1225_;
v___y_1134_ = v___y_1226_;
v___y_1135_ = v___y_1227_;
v___y_1136_ = v___y_1228_;
v___y_1137_ = v___y_1229_;
goto v___jp_1131_;
}
}
else
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_dec_ref(v_wfRel_1105_);
lean_dec_ref(v___x_1102_);
lean_dec_ref(v_fst_1101_);
lean_dec_ref(v_fixedArgs_1100_);
lean_dec_ref(v_fst_1099_);
lean_dec_ref(v_a_1098_);
v_a_1245_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1230_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1230_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object** _args){
lean_object* v_snd_1272_ = _args[0];
lean_object* v_sz_1273_ = _args[1];
lean_object* v___x_1274_ = _args[2];
lean_object* v_a_1275_ = _args[3];
lean_object* v_fst_1276_ = _args[4];
lean_object* v_fixedArgs_1277_ = _args[5];
lean_object* v_fst_1278_ = _args[6];
lean_object* v___x_1279_ = _args[7];
lean_object* v___x_1280_ = _args[8];
lean_object* v___x_1281_ = _args[9];
lean_object* v_wfRel_1282_ = _args[10];
lean_object* v___y_1283_ = _args[11];
lean_object* v___y_1284_ = _args[12];
lean_object* v___y_1285_ = _args[13];
lean_object* v___y_1286_ = _args[14];
lean_object* v___y_1287_ = _args[15];
lean_object* v___y_1288_ = _args[16];
lean_object* v___y_1289_ = _args[17];
_start:
{
size_t v_sz_boxed_1290_; size_t v___x_45037__boxed_1291_; lean_object* v_res_1292_; 
v_sz_boxed_1290_ = lean_unbox_usize(v_sz_1273_);
lean_dec(v_sz_1273_);
v___x_45037__boxed_1291_ = lean_unbox_usize(v___x_1274_);
lean_dec(v___x_1274_);
v_res_1292_ = l_Lean_Elab_wfRecursion___lam__3(v_snd_1272_, v_sz_boxed_1290_, v___x_45037__boxed_1291_, v_a_1275_, v_fst_1276_, v_fixedArgs_1277_, v_fst_1278_, v___x_1279_, v___x_1280_, v___x_1281_, v_wfRel_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec_ref(v_snd_1272_);
return v_res_1292_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__4___closed__0));
v___x_1295_ = l_Lean_stringToMessageData(v___x_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(size_t v_sz_1296_, size_t v___x_1297_, lean_object* v_a_1298_, lean_object* v_snd_1299_, lean_object* v_fst_1300_, lean_object* v_fst_1301_, lean_object* v___x_1302_, lean_object* v___x_1303_, lean_object* v_declName_1304_, lean_object* v_fst_1305_, lean_object* v_wf_1306_, lean_object* v_fixedArgs_1307_, lean_object* v_type_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = l_Lean_Meta_whnfForall(v_type_1308_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1324_; uint8_t v___x_1331_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1316_, 1);
v___x_1331_ = l_Lean_Expr_isForall(v_a_1317_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
lean_dec_ref(v_fixedArgs_1307_);
lean_dec_ref(v_wf_1306_);
lean_dec_ref(v_fst_1305_);
lean_dec(v_declName_1304_);
lean_dec(v___x_1303_);
lean_dec_ref(v_fst_1301_);
lean_dec_ref(v_fst_1300_);
lean_dec_ref(v_snd_1299_);
lean_dec_ref(v_a_1298_);
v___x_1332_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__4___closed__1, &l_Lean_Elab_wfRecursion___lam__4___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__4___closed__1);
v___x_1333_ = l_Lean_MessageData_ofExpr(v_a_1317_);
v___x_1334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_1334_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1338_ = v___x_1335_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1335_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1336_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
else
{
v___y_1319_ = v___y_1309_;
v___y_1320_ = v___y_1310_;
v___y_1321_ = v___y_1311_;
v___y_1322_ = v___y_1312_;
v___y_1323_ = v___y_1313_;
v___y_1324_ = v___y_1314_;
goto v___jp_1318_;
}
v___jp_1318_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___f_1329_; lean_object* v___x_1330_; 
v___x_1325_ = l_Lean_Expr_bindingDomain_x21(v_a_1317_);
lean_dec(v_a_1317_);
lean_inc_ref(v_a_1298_);
v___x_1326_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_1296_, v___x_1297_, v_a_1298_);
v___x_1327_ = lean_box_usize(v_sz_1296_);
v___x_1328_ = lean_box_usize(v___x_1297_);
lean_inc_ref(v___x_1326_);
lean_inc_ref(v_fst_1301_);
lean_inc_ref(v_fixedArgs_1307_);
v___f_1329_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__3___boxed), 18, 10);
lean_closure_set(v___f_1329_, 0, v_snd_1299_);
lean_closure_set(v___f_1329_, 1, v___x_1327_);
lean_closure_set(v___f_1329_, 2, v___x_1328_);
lean_closure_set(v___f_1329_, 3, v_a_1298_);
lean_closure_set(v___f_1329_, 4, v_fst_1300_);
lean_closure_set(v___f_1329_, 5, v_fixedArgs_1307_);
lean_closure_set(v___f_1329_, 6, v_fst_1301_);
lean_closure_set(v___f_1329_, 7, v___x_1326_);
lean_closure_set(v___f_1329_, 8, v___x_1302_);
lean_closure_set(v___f_1329_, 9, v___x_1303_);
v___x_1330_ = l_Lean_Elab_WF_elabWFRel___redArg(v___x_1326_, v_declName_1304_, v_fst_1305_, v_fixedArgs_1307_, v_fst_1301_, v___x_1325_, v_wf_1306_, v___f_1329_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
return v___x_1330_;
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
lean_dec_ref(v_fixedArgs_1307_);
lean_dec_ref(v_wf_1306_);
lean_dec_ref(v_fst_1305_);
lean_dec(v_declName_1304_);
lean_dec(v___x_1303_);
lean_dec_ref(v_fst_1301_);
lean_dec_ref(v_fst_1300_);
lean_dec_ref(v_snd_1299_);
lean_dec_ref(v_a_1298_);
v_a_1344_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1346_ = v___x_1316_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1316_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1344_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object** _args){
lean_object* v_sz_1352_ = _args[0];
lean_object* v___x_1353_ = _args[1];
lean_object* v_a_1354_ = _args[2];
lean_object* v_snd_1355_ = _args[3];
lean_object* v_fst_1356_ = _args[4];
lean_object* v_fst_1357_ = _args[5];
lean_object* v___x_1358_ = _args[6];
lean_object* v___x_1359_ = _args[7];
lean_object* v_declName_1360_ = _args[8];
lean_object* v_fst_1361_ = _args[9];
lean_object* v_wf_1362_ = _args[10];
lean_object* v_fixedArgs_1363_ = _args[11];
lean_object* v_type_1364_ = _args[12];
lean_object* v___y_1365_ = _args[13];
lean_object* v___y_1366_ = _args[14];
lean_object* v___y_1367_ = _args[15];
lean_object* v___y_1368_ = _args[16];
lean_object* v___y_1369_ = _args[17];
lean_object* v___y_1370_ = _args[18];
lean_object* v___y_1371_ = _args[19];
_start:
{
size_t v_sz_boxed_1372_; size_t v___x_45358__boxed_1373_; lean_object* v_res_1374_; 
v_sz_boxed_1372_ = lean_unbox_usize(v_sz_1352_);
lean_dec(v_sz_1352_);
v___x_45358__boxed_1373_ = lean_unbox_usize(v___x_1353_);
lean_dec(v___x_1353_);
v_res_1374_ = l_Lean_Elab_wfRecursion___lam__4(v_sz_boxed_1372_, v___x_45358__boxed_1373_, v_a_1354_, v_snd_1355_, v_fst_1356_, v_fst_1357_, v___x_1358_, v___x_1359_, v_declName_1360_, v_fst_1361_, v_wf_1362_, v_fixedArgs_1363_, v_type_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(lean_object* v_a_1375_, lean_object* v_fst_1376_, lean_object* v_fst_1377_, lean_object* v_fst_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v___x_1386_; 
v___x_1386_ = l_Lean_Elab_WF_guessLex(v_a_1375_, v_fst_1376_, v_fst_1377_, v_fst_1378_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
return v___x_1386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object* v_a_1387_, lean_object* v_fst_1388_, lean_object* v_fst_1389_, lean_object* v_fst_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_Elab_wfRecursion___lam__5(v_a_1387_, v_fst_1388_, v_fst_1389_, v_fst_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(lean_object* v_env_1399_, lean_object* v_x_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v___x_1408_; lean_object* v_env_1409_; lean_object* v_a_1411_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1408_ = lean_st_ref_get(v___y_1406_);
v_env_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc_ref(v_env_1409_);
lean_dec(v___x_1408_);
v___x_1421_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1399_, v___y_1404_, v___y_1406_);
lean_dec_ref(v___x_1421_);
lean_inc(v___y_1406_);
lean_inc_ref(v___y_1405_);
lean_inc(v___y_1404_);
lean_inc_ref(v___y_1403_);
lean_inc(v___y_1402_);
lean_inc_ref(v___y_1401_);
v___x_1422_ = lean_apply_7(v_x_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, lean_box(0));
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1409_, v___y_1404_, v___y_1406_);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1431_ == 0)
{
lean_object* v_unused_1432_; 
v_unused_1432_ = lean_ctor_get(v___x_1424_, 0);
lean_dec(v_unused_1432_);
v___x_1426_ = v___x_1424_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_dec(v___x_1424_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v_a_1423_);
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_a_1423_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
else
{
lean_object* v_a_1433_; 
v_a_1433_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1433_);
lean_dec_ref_known(v___x_1422_, 1);
v_a_1411_ = v_a_1433_;
goto v___jp_1410_;
}
v___jp_1410_:
{
lean_object* v___x_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
v___x_1412_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1409_, v___y_1404_, v___y_1406_);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1419_ == 0)
{
lean_object* v_unused_1420_; 
v_unused_1420_ = lean_ctor_get(v___x_1412_, 0);
lean_dec(v_unused_1420_);
v___x_1414_ = v___x_1412_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_dec(v___x_1412_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
lean_ctor_set_tag(v___x_1414_, 1);
lean_ctor_set(v___x_1414_, 0, v_a_1411_);
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1411_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg___boxed(lean_object* v_env_1434_, lean_object* v_x_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v_env_1434_, v_x_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(lean_object* v___y_1444_, uint8_t v_isExporting_1445_, lean_object* v___x_1446_, lean_object* v___y_1447_, lean_object* v___x_1448_, lean_object* v_a_x3f_1449_){
_start:
{
lean_object* v___x_1451_; lean_object* v_env_1452_; lean_object* v_nextMacroScope_1453_; lean_object* v_ngen_1454_; lean_object* v_auxDeclNGen_1455_; lean_object* v_traceState_1456_; lean_object* v_recordedDeps_1457_; lean_object* v_messages_1458_; lean_object* v_infoState_1459_; lean_object* v_snapshotTasks_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1486_; 
v___x_1451_ = lean_st_ref_take(v___y_1444_);
v_env_1452_ = lean_ctor_get(v___x_1451_, 0);
v_nextMacroScope_1453_ = lean_ctor_get(v___x_1451_, 1);
v_ngen_1454_ = lean_ctor_get(v___x_1451_, 2);
v_auxDeclNGen_1455_ = lean_ctor_get(v___x_1451_, 3);
v_traceState_1456_ = lean_ctor_get(v___x_1451_, 4);
v_recordedDeps_1457_ = lean_ctor_get(v___x_1451_, 6);
v_messages_1458_ = lean_ctor_get(v___x_1451_, 7);
v_infoState_1459_ = lean_ctor_get(v___x_1451_, 8);
v_snapshotTasks_1460_ = lean_ctor_get(v___x_1451_, 9);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1486_ == 0)
{
lean_object* v_unused_1487_; 
v_unused_1487_ = lean_ctor_get(v___x_1451_, 5);
lean_dec(v_unused_1487_);
v___x_1462_ = v___x_1451_;
v_isShared_1463_ = v_isSharedCheck_1486_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_snapshotTasks_1460_);
lean_inc(v_infoState_1459_);
lean_inc(v_messages_1458_);
lean_inc(v_recordedDeps_1457_);
lean_inc(v_traceState_1456_);
lean_inc(v_auxDeclNGen_1455_);
lean_inc(v_ngen_1454_);
lean_inc(v_nextMacroScope_1453_);
lean_inc(v_env_1452_);
lean_dec(v___x_1451_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1486_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1464_; lean_object* v___x_1466_; 
v___x_1464_ = l_Lean_Environment_setExporting(v_env_1452_, v_isExporting_1445_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 5, v___x_1446_);
lean_ctor_set(v___x_1462_, 0, v___x_1464_);
v___x_1466_ = v___x_1462_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___x_1464_);
lean_ctor_set(v_reuseFailAlloc_1485_, 1, v_nextMacroScope_1453_);
lean_ctor_set(v_reuseFailAlloc_1485_, 2, v_ngen_1454_);
lean_ctor_set(v_reuseFailAlloc_1485_, 3, v_auxDeclNGen_1455_);
lean_ctor_set(v_reuseFailAlloc_1485_, 4, v_traceState_1456_);
lean_ctor_set(v_reuseFailAlloc_1485_, 5, v___x_1446_);
lean_ctor_set(v_reuseFailAlloc_1485_, 6, v_recordedDeps_1457_);
lean_ctor_set(v_reuseFailAlloc_1485_, 7, v_messages_1458_);
lean_ctor_set(v_reuseFailAlloc_1485_, 8, v_infoState_1459_);
lean_ctor_set(v_reuseFailAlloc_1485_, 9, v_snapshotTasks_1460_);
v___x_1466_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v_mctx_1469_; lean_object* v_zetaDeltaFVarIds_1470_; lean_object* v_postponed_1471_; lean_object* v_diag_1472_; lean_object* v_rewriteFires_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1483_; 
v___x_1467_ = lean_st_ref_put(v___y_1444_, v___x_1466_);
v___x_1468_ = lean_st_ref_take(v___y_1447_);
v_mctx_1469_ = lean_ctor_get(v___x_1468_, 0);
v_zetaDeltaFVarIds_1470_ = lean_ctor_get(v___x_1468_, 2);
v_postponed_1471_ = lean_ctor_get(v___x_1468_, 3);
v_diag_1472_ = lean_ctor_get(v___x_1468_, 4);
v_rewriteFires_1473_ = lean_ctor_get(v___x_1468_, 5);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1483_ == 0)
{
lean_object* v_unused_1484_; 
v_unused_1484_ = lean_ctor_get(v___x_1468_, 1);
lean_dec(v_unused_1484_);
v___x_1475_ = v___x_1468_;
v_isShared_1476_ = v_isSharedCheck_1483_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_rewriteFires_1473_);
lean_inc(v_diag_1472_);
lean_inc(v_postponed_1471_);
lean_inc(v_zetaDeltaFVarIds_1470_);
lean_inc(v_mctx_1469_);
lean_dec(v___x_1468_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1483_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v___x_1477_; lean_object* v___x_1479_; 
v___x_1477_ = lean_box(0);
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 1, v___x_1448_);
v___x_1479_ = v___x_1475_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_mctx_1469_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v___x_1448_);
lean_ctor_set(v_reuseFailAlloc_1482_, 2, v_zetaDeltaFVarIds_1470_);
lean_ctor_set(v_reuseFailAlloc_1482_, 3, v_postponed_1471_);
lean_ctor_set(v_reuseFailAlloc_1482_, 4, v_diag_1472_);
lean_ctor_set(v_reuseFailAlloc_1482_, 5, v_rewriteFires_1473_);
v___x_1479_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = lean_st_ref_put(v___y_1447_, v___x_1479_);
v___x_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1477_);
return v___x_1481_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0___boxed(lean_object* v___y_1488_, lean_object* v_isExporting_1489_, lean_object* v___x_1490_, lean_object* v___y_1491_, lean_object* v___x_1492_, lean_object* v_a_x3f_1493_, lean_object* v___y_1494_){
_start:
{
uint8_t v_isExporting_boxed_1495_; lean_object* v_res_1496_; 
v_isExporting_boxed_1495_ = lean_unbox(v_isExporting_1489_);
v_res_1496_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1488_, v_isExporting_boxed_1495_, v___x_1490_, v___y_1491_, v___x_1492_, v_a_x3f_1493_);
lean_dec(v_a_x3f_1493_);
lean_dec(v___y_1491_);
lean_dec(v___y_1488_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(lean_object* v_x_1497_, uint8_t v_isExporting_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v___x_1506_; lean_object* v_env_1507_; lean_object* v___x_1508_; uint8_t v_isModule_1509_; 
v___x_1506_ = lean_st_ref_get(v___y_1504_);
v_env_1507_ = lean_ctor_get(v___x_1506_, 0);
lean_inc_ref(v_env_1507_);
lean_dec(v___x_1506_);
v___x_1508_ = l_Lean_Environment_header(v_env_1507_);
v_isModule_1509_ = lean_ctor_get_uint8(v___x_1508_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1508_);
if (v_isModule_1509_ == 0)
{
lean_object* v___x_1510_; 
lean_dec_ref(v_env_1507_);
lean_inc(v___y_1504_);
lean_inc_ref(v___y_1503_);
lean_inc(v___y_1502_);
lean_inc_ref(v___y_1501_);
lean_inc(v___y_1500_);
lean_inc_ref(v___y_1499_);
v___x_1510_ = lean_apply_7(v_x_1497_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, lean_box(0));
return v___x_1510_;
}
else
{
uint8_t v_isExporting_1511_; 
v_isExporting_1511_ = lean_ctor_get_uint8(v_env_1507_, sizeof(void*)*13);
lean_dec_ref(v_env_1507_);
if (v_isExporting_1498_ == 0)
{
if (v_isExporting_1511_ == 0)
{
lean_object* v___x_1579_; 
lean_inc(v___y_1504_);
lean_inc_ref(v___y_1503_);
lean_inc(v___y_1502_);
lean_inc_ref(v___y_1501_);
lean_inc(v___y_1500_);
lean_inc_ref(v___y_1499_);
v___x_1579_ = lean_apply_7(v_x_1497_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, lean_box(0));
return v___x_1579_;
}
else
{
goto v___jp_1512_;
}
}
else
{
if (v_isExporting_1511_ == 0)
{
goto v___jp_1512_;
}
else
{
lean_object* v___x_1580_; 
lean_inc(v___y_1504_);
lean_inc_ref(v___y_1503_);
lean_inc(v___y_1502_);
lean_inc_ref(v___y_1501_);
lean_inc(v___y_1500_);
lean_inc_ref(v___y_1499_);
v___x_1580_ = lean_apply_7(v_x_1497_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, lean_box(0));
return v___x_1580_;
}
}
v___jp_1512_:
{
lean_object* v___x_1513_; lean_object* v_env_1514_; lean_object* v_nextMacroScope_1515_; lean_object* v_ngen_1516_; lean_object* v_auxDeclNGen_1517_; lean_object* v_traceState_1518_; lean_object* v_recordedDeps_1519_; lean_object* v_messages_1520_; lean_object* v_infoState_1521_; lean_object* v_snapshotTasks_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1577_; 
v___x_1513_ = lean_st_ref_take(v___y_1504_);
v_env_1514_ = lean_ctor_get(v___x_1513_, 0);
v_nextMacroScope_1515_ = lean_ctor_get(v___x_1513_, 1);
v_ngen_1516_ = lean_ctor_get(v___x_1513_, 2);
v_auxDeclNGen_1517_ = lean_ctor_get(v___x_1513_, 3);
v_traceState_1518_ = lean_ctor_get(v___x_1513_, 4);
v_recordedDeps_1519_ = lean_ctor_get(v___x_1513_, 6);
v_messages_1520_ = lean_ctor_get(v___x_1513_, 7);
v_infoState_1521_ = lean_ctor_get(v___x_1513_, 8);
v_snapshotTasks_1522_ = lean_ctor_get(v___x_1513_, 9);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1577_ == 0)
{
lean_object* v_unused_1578_; 
v_unused_1578_ = lean_ctor_get(v___x_1513_, 5);
lean_dec(v_unused_1578_);
v___x_1524_ = v___x_1513_;
v_isShared_1525_ = v_isSharedCheck_1577_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_snapshotTasks_1522_);
lean_inc(v_infoState_1521_);
lean_inc(v_messages_1520_);
lean_inc(v_recordedDeps_1519_);
lean_inc(v_traceState_1518_);
lean_inc(v_auxDeclNGen_1517_);
lean_inc(v_ngen_1516_);
lean_inc(v_nextMacroScope_1515_);
lean_inc(v_env_1514_);
lean_dec(v___x_1513_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1577_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1529_; 
v___x_1526_ = l_Lean_Environment_setExporting(v_env_1514_, v_isExporting_1498_);
v___x_1527_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 5, v___x_1527_);
lean_ctor_set(v___x_1524_, 0, v___x_1526_);
v___x_1529_ = v___x_1524_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1526_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_nextMacroScope_1515_);
lean_ctor_set(v_reuseFailAlloc_1576_, 2, v_ngen_1516_);
lean_ctor_set(v_reuseFailAlloc_1576_, 3, v_auxDeclNGen_1517_);
lean_ctor_set(v_reuseFailAlloc_1576_, 4, v_traceState_1518_);
lean_ctor_set(v_reuseFailAlloc_1576_, 5, v___x_1527_);
lean_ctor_set(v_reuseFailAlloc_1576_, 6, v_recordedDeps_1519_);
lean_ctor_set(v_reuseFailAlloc_1576_, 7, v_messages_1520_);
lean_ctor_set(v_reuseFailAlloc_1576_, 8, v_infoState_1521_);
lean_ctor_set(v_reuseFailAlloc_1576_, 9, v_snapshotTasks_1522_);
v___x_1529_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v_mctx_1532_; lean_object* v_zetaDeltaFVarIds_1533_; lean_object* v_postponed_1534_; lean_object* v_diag_1535_; lean_object* v_rewriteFires_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1574_; 
v___x_1530_ = lean_st_ref_put(v___y_1504_, v___x_1529_);
v___x_1531_ = lean_st_ref_take(v___y_1502_);
v_mctx_1532_ = lean_ctor_get(v___x_1531_, 0);
v_zetaDeltaFVarIds_1533_ = lean_ctor_get(v___x_1531_, 2);
v_postponed_1534_ = lean_ctor_get(v___x_1531_, 3);
v_diag_1535_ = lean_ctor_get(v___x_1531_, 4);
v_rewriteFires_1536_ = lean_ctor_get(v___x_1531_, 5);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1574_ == 0)
{
lean_object* v_unused_1575_; 
v_unused_1575_ = lean_ctor_get(v___x_1531_, 1);
lean_dec(v_unused_1575_);
v___x_1538_ = v___x_1531_;
v_isShared_1539_ = v_isSharedCheck_1574_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_rewriteFires_1536_);
lean_inc(v_diag_1535_);
lean_inc(v_postponed_1534_);
lean_inc(v_zetaDeltaFVarIds_1533_);
lean_inc(v_mctx_1532_);
lean_dec(v___x_1531_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1574_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v___x_1540_; lean_object* v___x_1542_; 
v___x_1540_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 1, v___x_1540_);
v___x_1542_ = v___x_1538_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_mctx_1532_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v___x_1540_);
lean_ctor_set(v_reuseFailAlloc_1573_, 2, v_zetaDeltaFVarIds_1533_);
lean_ctor_set(v_reuseFailAlloc_1573_, 3, v_postponed_1534_);
lean_ctor_set(v_reuseFailAlloc_1573_, 4, v_diag_1535_);
lean_ctor_set(v_reuseFailAlloc_1573_, 5, v_rewriteFires_1536_);
v___x_1542_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1543_; lean_object* v_r_1544_; 
v___x_1543_ = lean_st_ref_put(v___y_1502_, v___x_1542_);
lean_inc(v___y_1504_);
lean_inc_ref(v___y_1503_);
lean_inc(v___y_1502_);
lean_inc_ref(v___y_1501_);
lean_inc(v___y_1500_);
lean_inc_ref(v___y_1499_);
v_r_1544_ = lean_apply_7(v_x_1497_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, lean_box(0));
if (lean_obj_tag(v_r_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1561_; 
v_a_1545_ = lean_ctor_get(v_r_1544_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_r_1544_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1547_ = v_r_1544_;
v_isShared_1548_ = v_isSharedCheck_1561_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v_r_1544_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1561_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
lean_inc(v_a_1545_);
if (v_isShared_1548_ == 0)
{
lean_ctor_set_tag(v___x_1547_, 1);
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
lean_object* v___x_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
v___x_1551_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1504_, v_isExporting_1511_, v___x_1527_, v___y_1502_, v___x_1540_, v___x_1550_);
lean_dec_ref(v___x_1550_);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1558_ == 0)
{
lean_object* v_unused_1559_; 
v_unused_1559_ = lean_ctor_get(v___x_1551_, 0);
lean_dec(v_unused_1559_);
v___x_1553_ = v___x_1551_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_dec(v___x_1551_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1556_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 0, v_a_1545_);
v___x_1556_ = v___x_1553_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_a_1545_);
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
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
v_a_1562_ = lean_ctor_get(v_r_1544_, 0);
lean_inc(v_a_1562_);
lean_dec_ref_known(v_r_1544_, 1);
v___x_1563_ = lean_box(0);
v___x_1564_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1504_, v_isExporting_1511_, v___x_1527_, v___y_1502_, v___x_1540_, v___x_1563_);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1571_ == 0)
{
lean_object* v_unused_1572_; 
v_unused_1572_ = lean_ctor_get(v___x_1564_, 0);
lean_dec(v_unused_1572_);
v___x_1566_ = v___x_1564_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_dec(v___x_1564_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
lean_ctor_set_tag(v___x_1566_, 1);
lean_ctor_set(v___x_1566_, 0, v_a_1562_);
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1562_);
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___boxed(lean_object* v_x_1581_, lean_object* v_isExporting_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
uint8_t v_isExporting_boxed_1590_; lean_object* v_res_1591_; 
v_isExporting_boxed_1590_ = lean_unbox(v_isExporting_1582_);
v_res_1591_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_1581_, v_isExporting_boxed_1590_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(lean_object* v_x_1592_, uint8_t v_when_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
if (v_when_1593_ == 0)
{
lean_object* v___x_1601_; 
lean_inc(v___y_1599_);
lean_inc_ref(v___y_1598_);
lean_inc(v___y_1597_);
lean_inc_ref(v___y_1596_);
lean_inc(v___y_1595_);
lean_inc_ref(v___y_1594_);
v___x_1601_ = lean_apply_7(v_x_1592_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, lean_box(0));
return v___x_1601_;
}
else
{
uint8_t v___x_1602_; lean_object* v___x_1603_; 
v___x_1602_ = 0;
v___x_1603_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_1592_, v___x_1602_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
return v___x_1603_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg___boxed(lean_object* v_x_1604_, lean_object* v_when_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
uint8_t v_when_boxed_1613_; lean_object* v_res_1614_; 
v_when_boxed_1613_ = lean_unbox(v_when_1605_);
v_res_1614_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v_x_1604_, v_when_boxed_1613_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(size_t v_sz_1615_, size_t v_i_1616_, lean_object* v_bs_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
uint8_t v___x_1621_; 
v___x_1621_ = lean_usize_dec_lt(v_i_1616_, v_sz_1615_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1622_, 0, v_bs_1617_);
return v___x_1622_;
}
else
{
lean_object* v_v_1623_; lean_object* v_ref_1624_; uint8_t v_kind_1625_; lean_object* v_levelParams_1626_; lean_object* v_modifiers_1627_; lean_object* v_declName_1628_; lean_object* v_binders_1629_; lean_object* v_numSectionVars_1630_; lean_object* v_type_1631_; lean_object* v_value_1632_; lean_object* v_termination_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1656_; 
v_v_1623_ = lean_array_uget(v_bs_1617_, v_i_1616_);
v_ref_1624_ = lean_ctor_get(v_v_1623_, 0);
v_kind_1625_ = lean_ctor_get_uint8(v_v_1623_, sizeof(void*)*9);
v_levelParams_1626_ = lean_ctor_get(v_v_1623_, 1);
v_modifiers_1627_ = lean_ctor_get(v_v_1623_, 2);
v_declName_1628_ = lean_ctor_get(v_v_1623_, 3);
v_binders_1629_ = lean_ctor_get(v_v_1623_, 4);
v_numSectionVars_1630_ = lean_ctor_get(v_v_1623_, 5);
v_type_1631_ = lean_ctor_get(v_v_1623_, 6);
v_value_1632_ = lean_ctor_get(v_v_1623_, 7);
v_termination_1633_ = lean_ctor_get(v_v_1623_, 8);
v_isSharedCheck_1656_ = !lean_is_exclusive(v_v_1623_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1635_ = v_v_1623_;
v_isShared_1636_ = v_isSharedCheck_1656_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_termination_1633_);
lean_inc(v_value_1632_);
lean_inc(v_type_1631_);
lean_inc(v_numSectionVars_1630_);
lean_inc(v_binders_1629_);
lean_inc(v_declName_1628_);
lean_inc(v_modifiers_1627_);
lean_inc(v_levelParams_1626_);
lean_inc(v_ref_1624_);
lean_dec(v_v_1623_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1656_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; lean_object* v_bs_x27_1638_; lean_object* v___x_1639_; 
v___x_1637_ = lean_unsigned_to_nat(0u);
v_bs_x27_1638_ = lean_array_uset(v_bs_1617_, v_i_1616_, v___x_1637_);
v___x_1639_ = l_Lean_Elab_WF_floatRecApp(v_value_1632_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1642_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1640_);
lean_dec_ref_known(v___x_1639_, 1);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 7, v_a_1640_);
v___x_1642_ = v___x_1635_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_ref_1624_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_levelParams_1626_);
lean_ctor_set(v_reuseFailAlloc_1647_, 2, v_modifiers_1627_);
lean_ctor_set(v_reuseFailAlloc_1647_, 3, v_declName_1628_);
lean_ctor_set(v_reuseFailAlloc_1647_, 4, v_binders_1629_);
lean_ctor_set(v_reuseFailAlloc_1647_, 5, v_numSectionVars_1630_);
lean_ctor_set(v_reuseFailAlloc_1647_, 6, v_type_1631_);
lean_ctor_set(v_reuseFailAlloc_1647_, 7, v_a_1640_);
lean_ctor_set(v_reuseFailAlloc_1647_, 8, v_termination_1633_);
lean_ctor_set_uint8(v_reuseFailAlloc_1647_, sizeof(void*)*9, v_kind_1625_);
v___x_1642_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
size_t v___x_1643_; size_t v___x_1644_; lean_object* v___x_1645_; 
v___x_1643_ = ((size_t)1ULL);
v___x_1644_ = lean_usize_add(v_i_1616_, v___x_1643_);
v___x_1645_ = lean_array_uset(v_bs_x27_1638_, v_i_1616_, v___x_1642_);
v_i_1616_ = v___x_1644_;
v_bs_1617_ = v___x_1645_;
goto _start;
}
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1655_; 
lean_dec_ref(v_bs_x27_1638_);
lean_del_object(v___x_1635_);
lean_dec_ref(v_termination_1633_);
lean_dec_ref(v_type_1631_);
lean_dec(v_numSectionVars_1630_);
lean_dec(v_binders_1629_);
lean_dec(v_declName_1628_);
lean_dec_ref(v_modifiers_1627_);
lean_dec(v_levelParams_1626_);
lean_dec(v_ref_1624_);
v_a_1648_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1650_ = v___x_1639_;
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1639_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1653_; 
if (v_isShared_1651_ == 0)
{
v___x_1653_ = v___x_1650_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg___boxed(lean_object* v_sz_1657_, lean_object* v_i_1658_, lean_object* v_bs_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
size_t v_sz_boxed_1663_; size_t v_i_boxed_1664_; lean_object* v_res_1665_; 
v_sz_boxed_1663_ = lean_unbox_usize(v_sz_1657_);
lean_dec(v_sz_1657_);
v_i_boxed_1664_ = lean_unbox_usize(v_i_1658_);
lean_dec(v_i_1658_);
v_res_1665_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_sz_boxed_1663_, v_i_boxed_1664_, v_bs_1659_, v___y_1660_, v___y_1661_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(size_t v_sz_1666_, size_t v_i_1667_, lean_object* v_bs_1668_){
_start:
{
uint8_t v___x_1669_; 
v___x_1669_ = lean_usize_dec_lt(v_i_1667_, v_sz_1666_);
if (v___x_1669_ == 0)
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1670_, 0, v_bs_1668_);
return v___x_1670_;
}
else
{
lean_object* v_v_1671_; 
v_v_1671_ = lean_array_uget_borrowed(v_bs_1668_, v_i_1667_);
if (lean_obj_tag(v_v_1671_) == 0)
{
lean_object* v___x_1672_; 
lean_dec_ref(v_bs_1668_);
v___x_1672_ = lean_box(0);
return v___x_1672_;
}
else
{
lean_object* v_val_1673_; lean_object* v___x_1674_; lean_object* v_bs_x27_1675_; size_t v___x_1676_; size_t v___x_1677_; lean_object* v___x_1678_; 
v_val_1673_ = lean_ctor_get(v_v_1671_, 0);
lean_inc(v_val_1673_);
v___x_1674_ = lean_unsigned_to_nat(0u);
v_bs_x27_1675_ = lean_array_uset(v_bs_1668_, v_i_1667_, v___x_1674_);
v___x_1676_ = ((size_t)1ULL);
v___x_1677_ = lean_usize_add(v_i_1667_, v___x_1676_);
v___x_1678_ = lean_array_uset(v_bs_x27_1675_, v_i_1667_, v_val_1673_);
v_i_1667_ = v___x_1677_;
v_bs_1668_ = v___x_1678_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object* v_sz_1680_, lean_object* v_i_1681_, lean_object* v_bs_1682_){
_start:
{
size_t v_sz_boxed_1683_; size_t v_i_boxed_1684_; lean_object* v_res_1685_; 
v_sz_boxed_1683_ = lean_unbox_usize(v_sz_1680_);
lean_dec(v_sz_1680_);
v_i_boxed_1684_ = lean_unbox_usize(v_i_1681_);
lean_dec(v_i_1681_);
v_res_1685_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(v_sz_boxed_1683_, v_i_boxed_1684_, v_bs_1682_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(size_t v_sz_1686_, size_t v_i_1687_, lean_object* v_bs_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
uint8_t v___x_1694_; 
v___x_1694_ = lean_usize_dec_lt(v_i_1687_, v_sz_1686_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1695_, 0, v_bs_1688_);
return v___x_1695_;
}
else
{
uint8_t v___x_1696_; lean_object* v_v_1697_; lean_object* v___x_1698_; lean_object* v_bs_x27_1699_; lean_object* v___x_1700_; 
v___x_1696_ = 0;
v_v_1697_ = lean_array_uget(v_bs_1688_, v_i_1687_);
v___x_1698_ = lean_unsigned_to_nat(0u);
v_bs_x27_1699_ = lean_array_uset(v_bs_1688_, v_i_1687_, v___x_1698_);
v___x_1700_ = l_Lean_Elab_Mutual_cleanPreDef(v_v_1697_, v___x_1696_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; size_t v___x_1702_; size_t v___x_1703_; lean_object* v___x_1704_; 
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1700_, 1);
v___x_1702_ = ((size_t)1ULL);
v___x_1703_ = lean_usize_add(v_i_1687_, v___x_1702_);
v___x_1704_ = lean_array_uset(v_bs_x27_1699_, v_i_1687_, v_a_1701_);
v_i_1687_ = v___x_1703_;
v_bs_1688_ = v___x_1704_;
goto _start;
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec_ref(v_bs_x27_1699_);
v_a_1706_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1700_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1700_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object* v_sz_1714_, lean_object* v_i_1715_, lean_object* v_bs_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
size_t v_sz_boxed_1722_; size_t v_i_boxed_1723_; lean_object* v_res_1724_; 
v_sz_boxed_1722_ = lean_unbox_usize(v_sz_1714_);
lean_dec(v_sz_1714_);
v_i_boxed_1723_ = lean_unbox_usize(v_i_1715_);
lean_dec(v_i_1715_);
v_res_1724_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_boxed_1722_, v_i_boxed_1723_, v_bs_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(lean_object* v___x_1725_, lean_object* v_as_1726_, size_t v_sz_1727_, size_t v_i_1728_, lean_object* v_b_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v_a_1736_; uint8_t v___x_1740_; 
v___x_1740_ = lean_usize_dec_lt(v_i_1728_, v_sz_1727_);
if (v___x_1740_ == 0)
{
lean_object* v___x_1741_; 
lean_dec(v___x_1725_);
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v_b_1729_);
return v___x_1741_;
}
else
{
lean_object* v_a_1742_; uint8_t v_kind_1743_; lean_object* v_declName_1744_; lean_object* v_type_1745_; lean_object* v___x_1746_; uint8_t v___x_1747_; 
v_a_1742_ = lean_array_uget_borrowed(v_as_1726_, v_i_1728_);
v_kind_1743_ = lean_ctor_get_uint8(v_a_1742_, sizeof(void*)*9);
v_declName_1744_ = lean_ctor_get(v_a_1742_, 3);
v_type_1745_ = lean_ctor_get(v_a_1742_, 6);
v___x_1746_ = lean_box(0);
v___x_1747_ = lean_name_eq(v_declName_1744_, v___x_1725_);
if (v___x_1747_ == 0)
{
uint8_t v___x_1748_; 
v___x_1748_ = l_Lean_Elab_DefKind_isTheorem(v_kind_1743_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; 
lean_inc_ref(v_type_1745_);
v___x_1749_ = l_Lean_Meta_isProp(v_type_1745_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v_a_1750_; uint8_t v___x_1751_; 
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_a_1750_);
lean_dec_ref_known(v___x_1749_, 1);
v___x_1751_ = lean_unbox(v_a_1750_);
lean_dec(v_a_1750_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; 
lean_inc(v___x_1725_);
lean_inc(v_a_1742_);
v___x_1752_ = l_Lean_Elab_WF_mkBinaryUnfoldEq(v_a_1742_, v___x_1725_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_dec_ref_known(v___x_1752_, 1);
v_a_1736_ = v___x_1746_;
goto v___jp_1735_;
}
else
{
lean_dec(v___x_1725_);
return v___x_1752_;
}
}
else
{
v_a_1736_ = v___x_1746_;
goto v___jp_1735_;
}
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
lean_dec(v___x_1725_);
v_a_1753_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1749_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1749_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
else
{
v_a_1736_ = v___x_1746_;
goto v___jp_1735_;
}
}
else
{
v_a_1736_ = v___x_1746_;
goto v___jp_1735_;
}
}
v___jp_1735_:
{
size_t v___x_1737_; size_t v___x_1738_; 
v___x_1737_ = ((size_t)1ULL);
v___x_1738_ = lean_usize_add(v_i_1728_, v___x_1737_);
v_i_1728_ = v___x_1738_;
v_b_1729_ = v_a_1736_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object* v___x_1761_, lean_object* v_as_1762_, lean_object* v_sz_1763_, lean_object* v_i_1764_, lean_object* v_b_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_){
_start:
{
size_t v_sz_boxed_1771_; size_t v_i_boxed_1772_; lean_object* v_res_1773_; 
v_sz_boxed_1771_ = lean_unbox_usize(v_sz_1763_);
lean_dec(v_sz_1763_);
v_i_boxed_1772_ = lean_unbox_usize(v_i_1764_);
lean_dec(v_i_1764_);
v_res_1773_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___x_1761_, v_as_1762_, v_sz_boxed_1771_, v_i_boxed_1772_, v_b_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
lean_dec_ref(v_as_1762_);
return v_res_1773_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__4(void){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__3));
v___x_1782_ = l_Lean_stringToMessageData(v___x_1781_);
return v___x_1782_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__6(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__5));
v___x_1785_ = l_Lean_stringToMessageData(v___x_1784_);
return v___x_1785_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__8(void){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__7));
v___x_1788_ = l_Lean_stringToMessageData(v___x_1787_);
return v___x_1788_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__10(void){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1790_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__9));
v___x_1791_ = l_Lean_stringToMessageData(v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object* v_docCtx_1794_, lean_object* v_preDefs_1795_, lean_object* v_termMeasure_x3fs_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_){
_start:
{
lean_object* v___x_1804_; size_t v_sz_1805_; size_t v___x_1806_; lean_object* v_termMeasures_x3f_1807_; size_t v_sz_1808_; lean_object* v___x_1809_; 
v___x_1804_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v_sz_1805_ = lean_array_size(v_termMeasure_x3fs_1796_);
v___x_1806_ = ((size_t)0ULL);
v_termMeasures_x3f_1807_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(v_sz_1805_, v___x_1806_, v_termMeasure_x3fs_1796_);
v_sz_1808_ = lean_array_size(v_preDefs_1795_);
v___x_1809_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_sz_1808_, v___x_1806_, v_preDefs_1795_, v_a_1801_, v_a_1802_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v_a_1810_; lean_object* v___x_1811_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; size_t v_sz_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___f_1828_; lean_object* v___x_1829_; lean_object* v_env_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v_a_1810_ = lean_ctor_get(v___x_1809_, 0);
lean_inc_n(v_a_1810_, 2);
lean_dec_ref_known(v___x_1809_, 1);
v___x_1811_ = lean_box(0);
v_sz_1825_ = lean_array_size(v_a_1810_);
v___x_1826_ = lean_box_usize(v_sz_1825_);
v___x_1827_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
v___f_1828_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__0___boxed), 12, 5);
lean_closure_set(v___f_1828_, 0, v_a_1810_);
lean_closure_set(v___f_1828_, 1, v___x_1826_);
lean_closure_set(v___f_1828_, 2, v___x_1827_);
lean_closure_set(v___f_1828_, 3, v___x_1811_);
lean_closure_set(v___f_1828_, 4, v___x_1804_);
v___x_1829_ = lean_st_ref_get(v_a_1802_);
v_env_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc_ref(v_env_1830_);
lean_dec(v___x_1829_);
v___x_1831_ = l_Lean_Environment_unlockAsync(v_env_1830_);
v___x_1832_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v___x_1831_, v___f_1828_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_);
if (lean_obj_tag(v___x_1832_) == 0)
{
lean_object* v_a_1833_; lean_object* v_snd_1834_; lean_object* v_fst_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_2020_; 
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_a_1833_);
lean_dec_ref_known(v___x_1832_, 1);
v_snd_1834_ = lean_ctor_get(v_a_1833_, 1);
v_fst_1835_ = lean_ctor_get(v_a_1833_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v_a_1833_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_1837_ = v_a_1833_;
v_isShared_1838_ = v_isSharedCheck_2020_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_snd_1834_);
lean_inc(v_fst_1835_);
lean_dec(v_a_1833_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_2020_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v_fst_1839_; lean_object* v_snd_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_2019_; 
v_fst_1839_ = lean_ctor_get(v_snd_1834_, 0);
v_snd_1840_ = lean_ctor_get(v_snd_1834_, 1);
v_isSharedCheck_2019_ = !lean_is_exclusive(v_snd_1834_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_1842_ = v_snd_1834_;
v_isShared_1843_ = v_isSharedCheck_2019_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_snd_1840_);
lean_inc(v_fst_1839_);
lean_dec(v_snd_1834_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_2019_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
uint8_t v___y_1845_; lean_object* v___y_1846_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v___y_1849_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___y_1852_; lean_object* v___y_1853_; lean_object* v___f_1903_; lean_object* v___x_1904_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v_wf_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v___y_1914_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1953_; lean_object* v___y_1954_; lean_object* v___y_1955_; lean_object* v___y_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1973_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___x_2010_; lean_object* v_a_2011_; uint8_t v___x_2012_; 
lean_inc(v_snd_1840_);
v___f_1903_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__1___boxed), 8, 1);
lean_closure_set(v___f_1903_, 0, v_snd_1840_);
v___x_1904_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__2));
v___x_2010_ = l_Lean_Elab_wfRecursion___lam__2(v___x_1904_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_);
v_a_2011_ = lean_ctor_get(v___x_2010_, 0);
lean_inc(v_a_2011_);
lean_dec_ref(v___x_2010_);
v___x_2012_ = lean_unbox(v_a_2011_);
lean_dec(v_a_2011_);
if (v___x_2012_ == 0)
{
v___y_1973_ = v_a_1797_;
v___y_1974_ = v_a_1798_;
v___y_1975_ = v_a_1799_;
v___y_1976_ = v_a_1800_;
v___y_1977_ = v_a_1801_;
v___y_1978_ = v_a_1802_;
goto v___jp_1972_;
}
else
{
lean_object* v_value_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v_value_2013_ = lean_ctor_get(v_snd_1840_, 7);
v___x_2014_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__10, &l_Lean_Elab_wfRecursion___closed__10_once, _init_l_Lean_Elab_wfRecursion___closed__10);
lean_inc_ref(v_value_2013_);
v___x_2015_ = l_Lean_MessageData_ofExpr(v_value_2013_);
v___x_2016_ = l_Lean_indentD(v___x_2015_);
v___x_2017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2014_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
v___x_2018_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1904_, v___x_2017_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_dec_ref_known(v___x_2018_, 1);
v___y_1973_ = v_a_1797_;
v___y_1974_ = v_a_1798_;
v___y_1975_ = v_a_1799_;
v___y_1976_ = v_a_1800_;
v___y_1977_ = v_a_1801_;
v___y_1978_ = v_a_1802_;
goto v___jp_1972_;
}
else
{
lean_dec_ref(v___f_1903_);
lean_del_object(v___x_1842_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_del_object(v___x_1837_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
lean_dec(v_termMeasures_x3f_1807_);
lean_dec_ref(v_docCtx_1794_);
return v___x_2018_;
}
}
v___jp_1844_:
{
lean_object* v___x_1854_; 
lean_inc_ref(v___y_1846_);
lean_inc(v_a_1810_);
lean_inc(v_fst_1839_);
lean_inc(v_fst_1835_);
v___x_1854_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec(v_fst_1835_, v_fst_1839_, v_a_1810_, v___y_1846_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1855_; lean_object* v___x_1856_; 
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
lean_inc(v_a_1855_);
lean_dec_ref_known(v___x_1854_, 1);
lean_inc_ref(v___y_1846_);
lean_inc(v_a_1810_);
lean_inc_ref(v_docCtx_1794_);
v___x_1856_ = l_Lean_Elab_Mutual_addPreDefsFromUnary(v_docCtx_1794_, v_a_1810_, v_a_1855_, v___y_1846_, v___y_1845_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
lean_dec(v_a_1855_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v___x_1857_; 
lean_dec_ref_known(v___x_1856_, 1);
lean_inc(v_a_1810_);
v___x_1857_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_1794_, v_a_1810_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v___x_1858_; 
lean_dec_ref_known(v___x_1857_, 1);
v___x_1858_ = l_Lean_Elab_Mutual_cleanPreDef(v_snd_1840_, v___y_1845_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_a_1859_; lean_object* v___x_1860_; 
v_a_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_a_1859_);
lean_dec_ref_known(v___x_1858_, 1);
v___x_1860_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_1825_, v___x_1806_, v_a_1810_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v_declName_1862_; lean_object* v___x_1863_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
lean_inc_n(v_a_1861_, 2);
lean_dec_ref_known(v___x_1860_, 1);
v_declName_1862_ = lean_ctor_get(v___y_1846_, 3);
lean_inc_n(v_declName_1862_, 2);
lean_dec_ref(v___y_1846_);
v___x_1863_ = l_Lean_Elab_WF_registerEqnsInfo(v_a_1861_, v_declName_1862_, v_fst_1835_, v_fst_1839_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_declName_1864_; lean_object* v_type_1865_; lean_object* v___x_1866_; 
lean_dec_ref_known(v___x_1863_, 1);
v_declName_1864_ = lean_ctor_get(v_a_1859_, 3);
v_type_1865_ = lean_ctor_get(v_a_1859_, 6);
lean_inc(v_declName_1864_);
v___x_1866_ = l_Lean_Meta_markAsRecursive___redArg(v_declName_1864_, v___y_1853_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v___x_1867_; 
lean_dec_ref_known(v___x_1866_, 1);
lean_inc_ref(v_type_1865_);
v___x_1867_ = l_Lean_Meta_isProp(v_type_1865_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; uint8_t v___x_1869_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_a_1868_);
lean_dec_ref_known(v___x_1867_, 1);
v___x_1869_ = lean_unbox(v_a_1868_);
lean_dec(v_a_1868_);
if (v___x_1869_ == 0)
{
lean_object* v___x_1870_; 
lean_inc(v_declName_1862_);
v___x_1870_ = l_Lean_Elab_WF_mkUnfoldEq(v_a_1859_, v_declName_1862_, v___y_1847_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1870_) == 0)
{
lean_dec_ref_known(v___x_1870_, 1);
v___y_1813_ = v_a_1861_;
v___y_1814_ = v_declName_1862_;
v___y_1815_ = v___y_1848_;
v___y_1816_ = v___y_1849_;
v___y_1817_ = v___y_1850_;
v___y_1818_ = v___y_1851_;
v___y_1819_ = v___y_1852_;
v___y_1820_ = v___y_1853_;
goto v___jp_1812_;
}
else
{
lean_dec(v_declName_1862_);
lean_dec(v_a_1861_);
return v___x_1870_;
}
}
else
{
lean_dec(v_a_1859_);
lean_dec_ref(v___y_1847_);
v___y_1813_ = v_a_1861_;
v___y_1814_ = v_declName_1862_;
v___y_1815_ = v___y_1848_;
v___y_1816_ = v___y_1849_;
v___y_1817_ = v___y_1850_;
v___y_1818_ = v___y_1851_;
v___y_1819_ = v___y_1852_;
v___y_1820_ = v___y_1853_;
goto v___jp_1812_;
}
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_dec(v_declName_1862_);
lean_dec(v_a_1861_);
lean_dec(v_a_1859_);
lean_dec_ref(v___y_1847_);
v_a_1871_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1867_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1867_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_a_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
else
{
lean_dec(v_declName_1862_);
lean_dec(v_a_1861_);
lean_dec(v_a_1859_);
lean_dec_ref(v___y_1847_);
return v___x_1866_;
}
}
else
{
lean_dec(v_declName_1862_);
lean_dec(v_a_1861_);
lean_dec(v_a_1859_);
lean_dec_ref(v___y_1847_);
return v___x_1863_;
}
}
else
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
lean_dec(v_a_1859_);
lean_dec_ref(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v_fst_1839_);
lean_dec(v_fst_1835_);
v_a_1879_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1881_ = v___x_1860_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1860_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
lean_dec_ref(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v_fst_1839_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
v_a_1887_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1858_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1858_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
else
{
lean_dec_ref(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
return v___x_1857_;
}
}
else
{
lean_dec_ref(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
lean_dec_ref(v_docCtx_1794_);
return v___x_1856_;
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec_ref(v___y_1847_);
lean_dec_ref(v___y_1846_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
lean_dec_ref(v_docCtx_1794_);
v_a_1895_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1854_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1854_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
v___jp_1905_:
{
lean_object* v_declName_1915_; lean_object* v_type_1916_; lean_object* v_numFixed_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___f_1920_; lean_object* v___x_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; 
v_declName_1915_ = lean_ctor_get(v_snd_1840_, 3);
v_type_1916_ = lean_ctor_get(v_snd_1840_, 6);
v_numFixed_1917_ = lean_ctor_get(v_fst_1835_, 0);
v___x_1918_ = lean_box_usize(v_sz_1825_);
v___x_1919_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
lean_inc(v_fst_1835_);
lean_inc(v_declName_1915_);
lean_inc(v_fst_1839_);
lean_inc(v_snd_1840_);
lean_inc(v_a_1810_);
v___f_1920_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__4___boxed), 20, 11);
lean_closure_set(v___f_1920_, 0, v___x_1918_);
lean_closure_set(v___f_1920_, 1, v___x_1919_);
lean_closure_set(v___f_1920_, 2, v_a_1810_);
lean_closure_set(v___f_1920_, 3, v_snd_1840_);
lean_closure_set(v___f_1920_, 4, v___y_1906_);
lean_closure_set(v___f_1920_, 5, v_fst_1839_);
lean_closure_set(v___f_1920_, 6, v___x_1811_);
lean_closure_set(v___f_1920_, 7, v___x_1904_);
lean_closure_set(v___f_1920_, 8, v_declName_1915_);
lean_closure_set(v___f_1920_, 9, v_fst_1835_);
lean_closure_set(v___f_1920_, 10, v_wf_1908_);
lean_inc(v_numFixed_1917_);
v___x_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1921_, 0, v_numFixed_1917_);
v___x_1922_ = 0;
lean_inc_ref(v_type_1916_);
v___x_1923_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_1916_, v___x_1921_, v___f_1920_, v___x_1922_, v___x_1922_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v___x_1925_; lean_object* v_a_1926_; uint8_t v___x_1927_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1923_, 1);
v___x_1925_ = l_Lean_Elab_wfRecursion___lam__2(v___x_1904_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
v_a_1926_ = lean_ctor_get(v___x_1925_, 0);
lean_inc(v_a_1926_);
lean_dec_ref(v___x_1925_);
v___x_1927_ = lean_unbox(v_a_1926_);
lean_dec(v_a_1926_);
if (v___x_1927_ == 0)
{
lean_del_object(v___x_1842_);
lean_del_object(v___x_1837_);
v___y_1845_ = v___x_1922_;
v___y_1846_ = v_a_1924_;
v___y_1847_ = v___y_1907_;
v___y_1848_ = v___y_1909_;
v___y_1849_ = v___y_1910_;
v___y_1850_ = v___y_1911_;
v___y_1851_ = v___y_1912_;
v___y_1852_ = v___y_1913_;
v___y_1853_ = v___y_1914_;
goto v___jp_1844_;
}
else
{
lean_object* v_declName_1928_; lean_object* v_value_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1933_; 
v_declName_1928_ = lean_ctor_get(v_a_1924_, 3);
v_value_1929_ = lean_ctor_get(v_a_1924_, 7);
v___x_1930_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__4, &l_Lean_Elab_wfRecursion___closed__4_once, _init_l_Lean_Elab_wfRecursion___closed__4);
lean_inc(v_declName_1928_);
v___x_1931_ = l_Lean_MessageData_ofName(v_declName_1928_);
if (v_isShared_1843_ == 0)
{
lean_ctor_set_tag(v___x_1842_, 7);
lean_ctor_set(v___x_1842_, 1, v___x_1931_);
lean_ctor_set(v___x_1842_, 0, v___x_1930_);
v___x_1933_ = v___x_1842_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v___x_1931_);
v___x_1933_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
lean_object* v___x_1934_; lean_object* v___x_1936_; 
v___x_1934_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__6, &l_Lean_Elab_wfRecursion___closed__6_once, _init_l_Lean_Elab_wfRecursion___closed__6);
if (v_isShared_1838_ == 0)
{
lean_ctor_set_tag(v___x_1837_, 7);
lean_ctor_set(v___x_1837_, 1, v___x_1934_);
lean_ctor_set(v___x_1837_, 0, v___x_1933_);
v___x_1936_ = v___x_1837_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1933_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v___x_1934_);
v___x_1936_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
lean_inc_ref(v_value_1929_);
v___x_1937_ = l_Lean_MessageData_ofExpr(v_value_1929_);
v___x_1938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1936_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1904_, v___x_1938_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_dec_ref_known(v___x_1939_, 1);
v___y_1845_ = v___x_1922_;
v___y_1846_ = v_a_1924_;
v___y_1847_ = v___y_1907_;
v___y_1848_ = v___y_1909_;
v___y_1849_ = v___y_1910_;
v___y_1850_ = v___y_1911_;
v___y_1851_ = v___y_1912_;
v___y_1852_ = v___y_1913_;
v___y_1853_ = v___y_1914_;
goto v___jp_1844_;
}
else
{
lean_dec(v_a_1924_);
lean_dec_ref(v___y_1907_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
lean_dec_ref(v_docCtx_1794_);
return v___x_1939_;
}
}
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_dec_ref(v___y_1907_);
lean_del_object(v___x_1842_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_del_object(v___x_1837_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
lean_dec_ref(v_docCtx_1794_);
v_a_1942_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1923_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1923_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
v___jp_1950_:
{
if (lean_obj_tag(v_termMeasures_x3f_1807_) == 1)
{
lean_object* v_val_1960_; 
lean_dec_ref(v___y_1953_);
v_val_1960_ = lean_ctor_get(v_termMeasures_x3f_1807_, 0);
lean_inc(v_val_1960_);
lean_dec_ref_known(v_termMeasures_x3f_1807_, 1);
v___y_1906_ = v___y_1951_;
v___y_1907_ = v___y_1952_;
v_wf_1908_ = v_val_1960_;
v___y_1909_ = v___y_1954_;
v___y_1910_ = v___y_1955_;
v___y_1911_ = v___y_1956_;
v___y_1912_ = v___y_1957_;
v___y_1913_ = v___y_1958_;
v___y_1914_ = v___y_1959_;
goto v___jp_1905_;
}
else
{
uint8_t v___x_1961_; lean_object* v___x_1962_; 
lean_dec(v_termMeasures_x3f_1807_);
v___x_1961_ = 1;
v___x_1962_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v___y_1953_, v___x_1961_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v_a_1963_; 
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
lean_inc(v_a_1963_);
lean_dec_ref_known(v___x_1962_, 1);
v___y_1906_ = v___y_1951_;
v___y_1907_ = v___y_1952_;
v_wf_1908_ = v_a_1963_;
v___y_1909_ = v___y_1954_;
v___y_1910_ = v___y_1955_;
v___y_1911_ = v___y_1956_;
v___y_1912_ = v___y_1957_;
v___y_1913_ = v___y_1958_;
v___y_1914_ = v___y_1959_;
goto v___jp_1905_;
}
else
{
lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
lean_dec_ref(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_del_object(v___x_1842_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_del_object(v___x_1837_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
lean_dec_ref(v_docCtx_1794_);
v_a_1964_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1962_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___x_1962_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
}
}
v___jp_1972_:
{
lean_object* v___x_1979_; lean_object* v_env_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1979_ = lean_st_ref_get(v___y_1978_);
v_env_1980_ = lean_ctor_get(v___x_1979_, 0);
lean_inc_ref(v_env_1980_);
lean_dec(v___x_1979_);
v___x_1981_ = l_Lean_Environment_unlockAsync(v_env_1980_);
v___x_1982_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v___x_1981_, v___f_1903_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_1982_) == 0)
{
lean_object* v_a_1983_; lean_object* v_fst_1984_; lean_object* v_snd_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2001_; 
v_a_1983_ = lean_ctor_get(v___x_1982_, 0);
lean_inc(v_a_1983_);
lean_dec_ref_known(v___x_1982_, 1);
v_fst_1984_ = lean_ctor_get(v_a_1983_, 0);
v_snd_1985_ = lean_ctor_get(v_a_1983_, 1);
v_isSharedCheck_2001_ = !lean_is_exclusive(v_a_1983_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1987_ = v_a_1983_;
v_isShared_1988_ = v_isSharedCheck_2001_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_snd_1985_);
lean_inc(v_fst_1984_);
lean_dec(v_a_1983_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2001_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___f_1989_; lean_object* v___x_1990_; lean_object* v_a_1991_; uint8_t v___x_1992_; 
lean_inc(v_fst_1839_);
lean_inc(v_fst_1835_);
lean_inc(v_fst_1984_);
lean_inc(v_a_1810_);
v___f_1989_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__5___boxed), 11, 4);
lean_closure_set(v___f_1989_, 0, v_a_1810_);
lean_closure_set(v___f_1989_, 1, v_fst_1984_);
lean_closure_set(v___f_1989_, 2, v_fst_1835_);
lean_closure_set(v___f_1989_, 3, v_fst_1839_);
v___x_1990_ = l_Lean_Elab_wfRecursion___lam__2(v___x_1904_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
lean_inc(v_a_1991_);
lean_dec_ref(v___x_1990_);
v___x_1992_ = lean_unbox(v_a_1991_);
lean_dec(v_a_1991_);
if (v___x_1992_ == 0)
{
lean_del_object(v___x_1987_);
v___y_1951_ = v_fst_1984_;
v___y_1952_ = v_snd_1985_;
v___y_1953_ = v___f_1989_;
v___y_1954_ = v___y_1973_;
v___y_1955_ = v___y_1974_;
v___y_1956_ = v___y_1975_;
v___y_1957_ = v___y_1976_;
v___y_1958_ = v___y_1977_;
v___y_1959_ = v___y_1978_;
goto v___jp_1950_;
}
else
{
lean_object* v_value_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1998_; 
v_value_1993_ = lean_ctor_get(v_snd_1840_, 7);
v___x_1994_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__8, &l_Lean_Elab_wfRecursion___closed__8_once, _init_l_Lean_Elab_wfRecursion___closed__8);
lean_inc_ref(v_value_1993_);
v___x_1995_ = l_Lean_MessageData_ofExpr(v_value_1993_);
v___x_1996_ = l_Lean_indentD(v___x_1995_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set_tag(v___x_1987_, 7);
lean_ctor_set(v___x_1987_, 1, v___x_1996_);
lean_ctor_set(v___x_1987_, 0, v___x_1994_);
v___x_1998_ = v___x_1987_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1994_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v___x_1996_);
v___x_1998_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
lean_object* v___x_1999_; 
v___x_1999_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1904_, v___x_1998_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_dec_ref_known(v___x_1999_, 1);
v___y_1951_ = v_fst_1984_;
v___y_1952_ = v_snd_1985_;
v___y_1953_ = v___f_1989_;
v___y_1954_ = v___y_1973_;
v___y_1955_ = v___y_1974_;
v___y_1956_ = v___y_1975_;
v___y_1957_ = v___y_1976_;
v___y_1958_ = v___y_1977_;
v___y_1959_ = v___y_1978_;
goto v___jp_1950_;
}
else
{
lean_dec_ref(v___f_1989_);
lean_dec(v_snd_1985_);
lean_dec(v_fst_1984_);
lean_del_object(v___x_1842_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_del_object(v___x_1837_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
lean_dec(v_termMeasures_x3f_1807_);
lean_dec_ref(v_docCtx_1794_);
return v___x_1999_;
}
}
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_del_object(v___x_1842_);
lean_dec(v_snd_1840_);
lean_dec(v_fst_1839_);
lean_del_object(v___x_1837_);
lean_dec(v_fst_1835_);
lean_dec(v_a_1810_);
lean_dec(v_termMeasures_x3f_1807_);
lean_dec_ref(v_docCtx_1794_);
v_a_2002_ = lean_ctor_get(v___x_1982_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1982_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1982_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec(v_a_1810_);
lean_dec(v_termMeasures_x3f_1807_);
lean_dec_ref(v_docCtx_1794_);
v_a_2021_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_1832_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_1832_);
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
v___jp_1812_:
{
size_t v_sz_1821_; lean_object* v___x_1822_; 
v_sz_1821_ = lean_array_size(v___y_1813_);
lean_inc(v___y_1814_);
v___x_1822_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___y_1814_, v___y_1813_, v_sz_1821_, v___x_1806_, v___x_1811_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v___x_1823_; 
lean_dec_ref_known(v___x_1822_, 1);
v___x_1823_ = l_Lean_enableRealizationsForConst(v___y_1814_, v___y_1819_, v___y_1820_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v___x_1824_; 
lean_dec_ref_known(v___x_1823_, 1);
v___x_1824_ = l_Lean_Elab_Mutual_addPreDefAttributes(v___y_1813_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
return v___x_1824_;
}
else
{
lean_dec_ref(v___y_1813_);
return v___x_1823_;
}
}
else
{
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
return v___x_1822_;
}
}
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
lean_dec(v_termMeasures_x3f_1807_);
lean_dec_ref(v_docCtx_1794_);
v_a_2029_ = lean_ctor_get(v___x_1809_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_1809_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_1809_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_1809_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object* v_docCtx_2037_, lean_object* v_preDefs_2038_, lean_object* v_termMeasure_x3fs_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l_Lean_Elab_wfRecursion(v_docCtx_2037_, v_preDefs_2038_, v_termMeasure_x3fs_2039_, v_a_2040_, v_a_2041_, v_a_2042_, v_a_2043_, v_a_2044_, v_a_2045_);
lean_dec(v_a_2045_);
lean_dec_ref(v_a_2044_);
lean_dec(v_a_2043_);
lean_dec_ref(v_a_2042_);
lean_dec(v_a_2041_);
lean_dec_ref(v_a_2040_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object* v_00_u03b1_2048_, lean_object* v_msg_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v___x_2057_; 
v___x_2057_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object* v_00_u03b1_2058_, lean_object* v_msg_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(v_00_u03b1_2058_, v_msg_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v___y_2062_);
lean_dec(v___y_2061_);
lean_dec_ref(v___y_2060_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(size_t v_sz_2068_, size_t v_i_2069_, lean_object* v_bs_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_){
_start:
{
lean_object* v___x_2078_; 
v___x_2078_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_sz_2068_, v_i_2069_, v_bs_2070_, v___y_2075_, v___y_2076_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object* v_sz_2079_, lean_object* v_i_2080_, lean_object* v_bs_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_){
_start:
{
size_t v_sz_boxed_2089_; size_t v_i_boxed_2090_; lean_object* v_res_2091_; 
v_sz_boxed_2089_ = lean_unbox_usize(v_sz_2079_);
lean_dec(v_sz_2079_);
v_i_boxed_2090_ = lean_unbox_usize(v_i_2080_);
lean_dec(v_i_2080_);
v_res_2091_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(v_sz_boxed_2089_, v_i_boxed_2090_, v_bs_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_);
lean_dec(v___y_2087_);
lean_dec_ref(v___y_2086_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(lean_object* v_as_2092_, size_t v_sz_2093_, size_t v_i_2094_, lean_object* v_b_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v___x_2103_; 
v___x_2103_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_as_2092_, v_sz_2093_, v_i_2094_, v_b_2095_, v___y_2100_, v___y_2101_);
return v___x_2103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object* v_as_2104_, lean_object* v_sz_2105_, lean_object* v_i_2106_, lean_object* v_b_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
size_t v_sz_boxed_2115_; size_t v_i_boxed_2116_; lean_object* v_res_2117_; 
v_sz_boxed_2115_ = lean_unbox_usize(v_sz_2105_);
lean_dec(v_sz_2105_);
v_i_boxed_2116_ = lean_unbox_usize(v_i_2106_);
lean_dec(v_i_2106_);
v_res_2117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(v_as_2104_, v_sz_boxed_2115_, v_i_boxed_2116_, v_b_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v_as_2104_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(lean_object* v_a_2118_, lean_object* v_as_2119_, size_t v_sz_2120_, size_t v_i_2121_, lean_object* v_bs_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_a_2118_, v_sz_2120_, v_i_2121_, v_bs_2122_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object* v_a_2131_, lean_object* v_as_2132_, lean_object* v_sz_2133_, lean_object* v_i_2134_, lean_object* v_bs_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_){
_start:
{
size_t v_sz_boxed_2143_; size_t v_i_boxed_2144_; lean_object* v_res_2145_; 
v_sz_boxed_2143_ = lean_unbox_usize(v_sz_2133_);
lean_dec(v_sz_2133_);
v_i_boxed_2144_ = lean_unbox_usize(v_i_2134_);
lean_dec(v_i_2134_);
v_res_2145_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(v_a_2131_, v_as_2132_, v_sz_boxed_2143_, v_i_boxed_2144_, v_bs_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec_ref(v_as_2132_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(lean_object* v_a_2146_, lean_object* v___x_2147_, size_t v_sz_2148_, size_t v_i_2149_, lean_object* v_bs_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v___x_2158_; 
v___x_2158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_a_2146_, v___x_2147_, v_sz_2148_, v_i_2149_, v_bs_2150_, v___y_2155_, v___y_2156_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object* v_a_2159_, lean_object* v___x_2160_, lean_object* v_sz_2161_, lean_object* v_i_2162_, lean_object* v_bs_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
size_t v_sz_boxed_2171_; size_t v_i_boxed_2172_; lean_object* v_res_2173_; 
v_sz_boxed_2171_ = lean_unbox_usize(v_sz_2161_);
lean_dec(v_sz_2161_);
v_i_boxed_2172_ = lean_unbox_usize(v_i_2162_);
lean_dec(v_i_2162_);
v_res_2173_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(v_a_2159_, v___x_2160_, v_sz_boxed_2171_, v_i_boxed_2172_, v_bs_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec(v___y_2165_);
lean_dec_ref(v___y_2164_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(lean_object* v_00_u03b1_2174_, lean_object* v_env_2175_, lean_object* v_x_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_){
_start:
{
lean_object* v___x_2184_; 
v___x_2184_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v_env_2175_, v_x_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object* v_00_u03b1_2185_, lean_object* v_env_2186_, lean_object* v_x_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(v_00_u03b1_2185_, v_env_2186_, v_x_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(lean_object* v_cls_2196_, lean_object* v_msg_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v___x_2205_; 
v___x_2205_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v_cls_2196_, v_msg_2197_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
return v___x_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object* v_cls_2206_, lean_object* v_msg_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_){
_start:
{
lean_object* v_res_2215_; 
v_res_2215_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(v_cls_2206_, v_msg_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_);
lean_dec(v___y_2213_);
lean_dec_ref(v___y_2212_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
return v_res_2215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(size_t v_sz_2216_, size_t v_i_2217_, lean_object* v_bs_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_2216_, v_i_2217_, v_bs_2218_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object* v_sz_2227_, lean_object* v_i_2228_, lean_object* v_bs_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
size_t v_sz_boxed_2237_; size_t v_i_boxed_2238_; lean_object* v_res_2239_; 
v_sz_boxed_2237_ = lean_unbox_usize(v_sz_2227_);
lean_dec(v_sz_2227_);
v_i_boxed_2238_ = lean_unbox_usize(v_i_2228_);
lean_dec(v_i_2228_);
v_res_2239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(v_sz_boxed_2237_, v_i_boxed_2238_, v_bs_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
lean_dec(v___y_2233_);
lean_dec_ref(v___y_2232_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(lean_object* v___x_2240_, lean_object* v_as_2241_, size_t v_sz_2242_, size_t v_i_2243_, lean_object* v_b_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___x_2240_, v_as_2241_, v_sz_2242_, v_i_2243_, v_b_2244_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object* v___x_2253_, lean_object* v_as_2254_, lean_object* v_sz_2255_, lean_object* v_i_2256_, lean_object* v_b_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
size_t v_sz_boxed_2265_; size_t v_i_boxed_2266_; lean_object* v_res_2267_; 
v_sz_boxed_2265_ = lean_unbox_usize(v_sz_2255_);
lean_dec(v_sz_2255_);
v_i_boxed_2266_ = lean_unbox_usize(v_i_2256_);
lean_dec(v_i_2256_);
v_res_2267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(v___x_2253_, v_as_2254_, v_sz_boxed_2265_, v_i_boxed_2266_, v_b_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
lean_dec_ref(v_as_2254_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(lean_object* v_00_u03b1_2268_, lean_object* v_x_2269_, uint8_t v_isExporting_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v___x_2278_; 
v___x_2278_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_2269_, v_isExporting_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___boxed(lean_object* v_00_u03b1_2279_, lean_object* v_x_2280_, lean_object* v_isExporting_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
uint8_t v_isExporting_boxed_2289_; lean_object* v_res_2290_; 
v_isExporting_boxed_2289_ = lean_unbox(v_isExporting_2281_);
v_res_2290_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(v_00_u03b1_2279_, v_x_2280_, v_isExporting_boxed_2289_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(lean_object* v_00_u03b1_2291_, lean_object* v_x_2292_, uint8_t v_when_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v_x_2292_, v_when_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
return v___x_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object* v_00_u03b1_2302_, lean_object* v_x_2303_, lean_object* v_when_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
uint8_t v_when_boxed_2312_; lean_object* v_res_2313_; 
v_when_boxed_2312_ = lean_unbox(v_when_2304_);
v_res_2313_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(v_00_u03b1_2302_, v_x_2303_, v_when_boxed_2312_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object* v_msgData_2314_, lean_object* v_macroStack_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_2314_, v_macroStack_2315_, v___y_2320_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object* v_msgData_2324_, lean_object* v_macroStack_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_){
_start:
{
lean_object* v_res_2333_; 
v_res_2333_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(v_msgData_2324_, v_macroStack_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(lean_object* v_ref_2334_, lean_object* v_msgData_2335_, uint8_t v_severity_2336_, uint8_t v_isSilent_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
lean_object* v___x_2345_; 
v___x_2345_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_2334_, v_msgData_2335_, v_severity_2336_, v_isSilent_2337_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___boxed(lean_object* v_ref_2346_, lean_object* v_msgData_2347_, lean_object* v_severity_2348_, lean_object* v_isSilent_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
uint8_t v_severity_boxed_2357_; uint8_t v_isSilent_boxed_2358_; lean_object* v_res_2359_; 
v_severity_boxed_2357_ = lean_unbox(v_severity_2348_);
v_isSilent_boxed_2358_ = lean_unbox(v_isSilent_2349_);
v_res_2359_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(v_ref_2346_, v_msgData_2347_, v_severity_boxed_2357_, v_isSilent_boxed_2358_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec(v_ref_2346_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2430_; uint8_t v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2430_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__2));
v___x_2431_ = 0;
v___x_2432_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2433_ = l_Lean_registerTraceClass(v___x_2430_, v___x_2431_, v___x_2432_);
return v___x_2433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2____boxed(lean_object* v_a_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
return v_res_2435_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
}
#ifdef __cplusplus
}
#endif

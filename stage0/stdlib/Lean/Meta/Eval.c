// Lean compiler output
// Module: Lean.Meta.Eval
// Imports: public import Lean.AddDecl public import Lean.Meta.Check public import Lean.Util.CollectLevelParams import Lean.Compiler.Options
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
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
extern lean_object* l_Lean_Compiler_compiler_relaxedMetaCheck;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_traceBlock___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_async;
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_collectLevelParams(lean_object*, lean_object*);
lean_object* l_Lean_Environment_importEnv_x3f(lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_isImportedConst(lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "compiler env"};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_tmp"};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(156, 26, 231, 16, 169, 5, 155, 241)}};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8;
static const lean_array_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10;
static const lean_string_object l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "failed to evaluate expression, it contains metavariables"};
static const lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11_value;
static lean_once_cell_t l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unexpected type at evalExpr"};
static const lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_evalExpr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_evalExpr___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_evalExpr___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected type at `evalExpr` "};
static const lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_evalExpr___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_evalExpr___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v_rewriteFires_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_25_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_rewriteFires_16_ = lean_ctor_get(v___x_11_, 5);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_25_ == 0)
{
lean_object* v_unused_26_; 
v_unused_26_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_26_);
v___x_18_ = v___x_11_;
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_rewriteFires_16_);
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_21_; 
if (v_isShared_19_ == 0)
{
lean_ctor_set(v___x_18_, 0, v_snd_10_);
v___x_21_ = v___x_18_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_24_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_24_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_24_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_24_, 4, v_diag_15_);
lean_ctor_set(v_reuseFailAlloc_24_, 5, v_rewriteFires_16_);
v___x_21_ = v_reuseFailAlloc_24_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_st_ref_put(v___y_2_, v___x_21_);
v___x_23_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_23_, 0, v_fst_9_);
return v___x_23_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg___boxed(lean_object* v_e_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_e_27_, v___y_28_);
lean_dec(v___y_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(lean_object* v_e_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_e_31_, v___y_33_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___boxed(lean_object* v_e_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0(v_e_38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
lean_dec(v___y_40_);
lean_dec_ref(v___y_39_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__1(lean_object* v_opts_45_, lean_object* v_opt_46_){
_start:
{
lean_object* v_name_47_; lean_object* v_defValue_48_; lean_object* v_map_49_; lean_object* v___x_50_; 
v_name_47_ = lean_ctor_get(v_opt_46_, 0);
v_defValue_48_ = lean_ctor_get(v_opt_46_, 1);
v_map_49_ = lean_ctor_get(v_opts_45_, 0);
v___x_50_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_49_, v_name_47_);
if (lean_obj_tag(v___x_50_) == 0)
{
lean_inc(v_defValue_48_);
return v_defValue_48_;
}
else
{
lean_object* v_val_51_; 
v_val_51_ = lean_ctor_get(v___x_50_, 0);
lean_inc(v_val_51_);
lean_dec_ref_known(v___x_50_, 1);
if (lean_obj_tag(v_val_51_) == 3)
{
lean_object* v_v_52_; 
v_v_52_ = lean_ctor_get(v_val_51_, 0);
lean_inc(v_v_52_);
lean_dec_ref_known(v_val_51_, 1);
return v_v_52_;
}
else
{
lean_dec(v_val_51_);
lean_inc(v_defValue_48_);
return v_defValue_48_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__1___boxed(lean_object* v_opts_53_, lean_object* v_opt_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__1(v_opts_53_, v_opt_54_);
lean_dec_ref(v_opt_54_);
lean_dec_ref(v_opts_53_);
return v_res_55_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__5(lean_object* v___x_56_, lean_object* v___x_57_, lean_object* v_as_58_, size_t v_i_59_, size_t v_stop_60_){
_start:
{
uint8_t v___x_65_; 
v___x_65_ = lean_usize_dec_eq(v_i_59_, v_stop_60_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = lean_array_uget_borrowed(v_as_58_, v_i_59_);
v___x_67_ = l_Lean_Environment_isImportedConst(v___x_56_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = lean_unsigned_to_nat(0u);
v___x_69_ = lean_nat_dec_lt(v___x_68_, v___x_57_);
if (v___x_69_ == 0)
{
goto v___jp_61_;
}
else
{
return v___x_69_;
}
}
else
{
goto v___jp_61_;
}
}
else
{
uint8_t v___x_70_; 
v___x_70_ = 0;
return v___x_70_;
}
v___jp_61_:
{
size_t v___x_62_; size_t v___x_63_; 
v___x_62_ = ((size_t)1ULL);
v___x_63_ = lean_usize_add(v_i_59_, v___x_62_);
v_i_59_ = v___x_63_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__5___boxed(lean_object* v___x_71_, lean_object* v___x_72_, lean_object* v_as_73_, lean_object* v_i_74_, lean_object* v_stop_75_){
_start:
{
size_t v_i_boxed_76_; size_t v_stop_boxed_77_; uint8_t v_res_78_; lean_object* v_r_79_; 
v_i_boxed_76_ = lean_unbox_usize(v_i_74_);
lean_dec(v_i_74_);
v_stop_boxed_77_ = lean_unbox_usize(v_stop_75_);
lean_dec(v_stop_75_);
v_res_78_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__5(v___x_71_, v___x_72_, v_as_73_, v_i_boxed_76_, v_stop_boxed_77_);
lean_dec_ref(v_as_73_);
lean_dec(v___x_72_);
lean_dec_ref(v___x_71_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_box(0);
v___x_81_ = l_Lean_Elab_abortCommandExceptionId;
v___x_82_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_80_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg(){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg___closed__0);
v___x_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg___boxed(lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg();
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4_spec__7(lean_object* v_msgData_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; lean_object* v_env_95_; uint8_t v___x_96_; lean_object* v_env_97_; lean_object* v___x_98_; lean_object* v_toCold_99_; lean_object* v_mctx_100_; lean_object* v_lctx_101_; lean_object* v_options_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_94_ = lean_st_ref_get(v___y_92_);
v_env_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_env_95_);
lean_dec(v___x_94_);
v___x_96_ = 0;
v_env_97_ = l_Lean_Environment_setRecordingDeps(v_env_95_, v___x_96_);
v___x_98_ = lean_st_ref_get(v___y_90_);
v_toCold_99_ = lean_ctor_get(v___y_91_, 0);
v_mctx_100_ = lean_ctor_get(v___x_98_, 0);
lean_inc_ref(v_mctx_100_);
lean_dec(v___x_98_);
v_lctx_101_ = lean_ctor_get(v___y_89_, 2);
v_options_102_ = lean_ctor_get(v_toCold_99_, 2);
lean_inc_ref(v_options_102_);
lean_inc_ref(v_lctx_101_);
v___x_103_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_103_, 0, v_env_97_);
lean_ctor_set(v___x_103_, 1, v_mctx_100_);
lean_ctor_set(v___x_103_, 2, v_lctx_101_);
lean_ctor_set(v___x_103_, 3, v_options_102_);
v___x_104_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v_msgData_88_);
v___x_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4_spec__7___boxed(lean_object* v_msgData_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4_spec__7(v_msgData_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_);
lean_dec(v___y_110_);
lean_dec_ref(v___y_109_);
lean_dec(v___y_108_);
lean_dec_ref(v___y_107_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg(lean_object* v_msg_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_ref_119_; lean_object* v___x_120_; lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_129_; 
v_ref_119_ = lean_ctor_get(v___y_116_, 2);
v___x_120_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4_spec__7(v_msg_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
v_a_121_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_129_ == 0)
{
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_129_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_129_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_127_; 
lean_inc(v_ref_119_);
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v_ref_119_);
lean_ctor_set(v___x_125_, 1, v_a_121_);
if (v_isShared_124_ == 0)
{
lean_ctor_set_tag(v___x_123_, 1);
lean_ctor_set(v___x_123_, 0, v___x_125_);
v___x_127_ = v___x_123_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg___boxed(lean_object* v_msg_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg(v_msg_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___redArg(lean_object* v_x_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
if (lean_obj_tag(v_x_137_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_a_143_ = lean_ctor_get(v_x_137_, 0);
lean_inc(v_a_143_);
lean_dec_ref_known(v_x_137_, 1);
v___x_144_ = l_Lean_stringToMessageData(v_a_143_);
v___x_145_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg(v___x_144_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
return v___x_145_;
}
else
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
v_a_146_ = lean_ctor_get(v_x_137_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v_x_137_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v_x_137_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
lean_ctor_set_tag(v___x_148_, 0);
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___redArg___boxed(lean_object* v_x_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___redArg(v_x_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec_ref(v___y_157_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___redArg(lean_object* v_constName_161_, uint8_t v_checkMeta_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v___x_168_; lean_object* v_env_169_; uint8_t v___x_170_; 
v___x_168_ = lean_st_ref_get(v___y_166_);
v_env_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc_ref(v_env_169_);
lean_dec(v___x_168_);
lean_inc(v_constName_161_);
v___x_170_ = lean_has_compile_error(v_env_169_, v_constName_161_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v_env_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_171_ = lean_st_ref_get(v___y_166_);
v_env_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc_ref(v_env_172_);
lean_dec(v___x_171_);
v___x_173_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_165_);
v___x_174_ = l_Lean_Environment_evalConst___redArg(v_env_172_, v___x_173_, v_constName_161_, v_checkMeta_162_);
lean_dec(v_constName_161_);
lean_dec_ref(v___x_173_);
lean_dec_ref(v_env_172_);
v___x_175_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___redArg(v___x_174_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
return v___x_175_;
}
else
{
lean_object* v___x_176_; 
v___x_176_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg();
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v___x_177_; lean_object* v_env_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec_ref_known(v___x_176_, 1);
v___x_177_ = lean_st_ref_get(v___y_166_);
v_env_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc_ref(v_env_178_);
lean_dec(v___x_177_);
v___x_179_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_165_);
v___x_180_ = l_Lean_Environment_evalConst___redArg(v_env_178_, v___x_179_, v_constName_161_, v_checkMeta_162_);
lean_dec(v_constName_161_);
lean_dec_ref(v___x_179_);
lean_dec_ref(v_env_178_);
v___x_181_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___redArg(v___x_180_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
return v___x_181_;
}
else
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_189_; 
lean_dec(v_constName_161_);
v_a_182_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_189_ == 0)
{
v___x_184_ = v___x_176_;
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_176_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_a_182_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___redArg___boxed(lean_object* v_constName_190_, lean_object* v_checkMeta_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
uint8_t v_checkMeta_boxed_197_; lean_object* v_res_198_; 
v_checkMeta_boxed_197_ = lean_unbox(v_checkMeta_191_);
v_res_198_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___redArg(v_constName_190_, v_checkMeta_boxed_197_, v___y_192_, v___y_193_, v___y_194_, v___y_195_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5(lean_object* v_o_202_, lean_object* v_k_203_, uint8_t v_v_204_){
_start:
{
lean_object* v_map_205_; uint8_t v_hasTrace_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_220_; 
v_map_205_ = lean_ctor_get(v_o_202_, 0);
v_hasTrace_206_ = lean_ctor_get_uint8(v_o_202_, sizeof(void*)*1);
v_isSharedCheck_220_ = !lean_is_exclusive(v_o_202_);
if (v_isSharedCheck_220_ == 0)
{
v___x_208_ = v_o_202_;
v_isShared_209_ = v_isSharedCheck_220_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_map_205_);
lean_dec(v_o_202_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_220_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_210_, 0, v_v_204_);
lean_inc(v_k_203_);
v___x_211_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_203_, v___x_210_, v_map_205_);
if (v_hasTrace_206_ == 0)
{
lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_215_; 
v___x_212_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___closed__1));
v___x_213_ = l_Lean_Name_isPrefixOf(v___x_212_, v_k_203_);
lean_dec(v_k_203_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_215_ = v___x_208_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_211_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*1, v___x_213_);
return v___x_215_;
}
}
else
{
lean_object* v___x_218_; 
lean_dec(v_k_203_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_211_);
v___x_218_ = v___x_208_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_211_);
lean_ctor_set_uint8(v_reuseFailAlloc_219_, sizeof(void*)*1, v_hasTrace_206_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5___boxed(lean_object* v_o_221_, lean_object* v_k_222_, lean_object* v_v_223_){
_start:
{
uint8_t v_v_boxed_224_; lean_object* v_res_225_; 
v_v_boxed_224_ = lean_unbox(v_v_223_);
v_res_225_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5(v_o_221_, v_k_222_, v_v_boxed_224_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3(lean_object* v_opts_226_, lean_object* v_opt_227_, uint8_t v_val_228_){
_start:
{
lean_object* v_name_229_; lean_object* v___x_230_; 
v_name_229_ = lean_ctor_get(v_opt_227_, 0);
lean_inc(v_name_229_);
lean_dec_ref(v_opt_227_);
v___x_230_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3_spec__5(v_opts_226_, v_name_229_, v_val_228_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3___boxed(lean_object* v_opts_231_, lean_object* v_opt_232_, lean_object* v_val_233_){
_start:
{
uint8_t v_val_boxed_234_; lean_object* v_res_235_; 
v_val_boxed_234_ = lean_unbox(v_val_233_);
v_res_235_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3(v_opts_231_, v_opt_232_, v_val_boxed_234_);
return v_res_235_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__0);
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
return v___x_238_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1);
v___x_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__1);
v___x_242_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
lean_ctor_set(v___x_242_, 2, v___x_241_);
lean_ctor_set(v___x_242_, 3, v___x_241_);
lean_ctor_set(v___x_242_, 4, v___x_241_);
lean_ctor_set(v___x_242_, 5, v___x_241_);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_box(0);
v___x_248_ = lean_unsigned_to_nat(16u);
v___x_249_ = lean_mk_array(v___x_248_, v___x_247_);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_250_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__7);
v___x_251_ = lean_unsigned_to_nat(0u);
v___x_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v___x_250_);
return v___x_252_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = ((lean_object*)(l_Lean_Meta_evalExprCore___redArg___lam__0___closed__9));
v___x_256_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__8);
v___x_257_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
lean_ctor_set(v___x_257_, 2, v___x_255_);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = ((lean_object*)(l_Lean_Meta_evalExprCore___redArg___lam__0___closed__11));
v___x_260_ = l_Lean_stringToMessageData(v___x_259_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0(uint8_t v_checkMeta_261_, lean_object* v_checkType_262_, uint8_t v_safety_263_, lean_object* v_value_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
uint8_t v___y_271_; uint16_t v___y_272_; uint8_t v___y_273_; lean_object* v___y_274_; lean_object* v___y_275_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_280_; lean_object* v___y_281_; uint8_t v___y_325_; uint16_t v___y_326_; lean_object* v___y_327_; lean_object* v___y_328_; uint8_t v___y_329_; lean_object* v___y_330_; lean_object* v___y_331_; uint8_t v___y_332_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_337_; uint8_t v___y_359_; uint16_t v___y_360_; lean_object* v___y_361_; lean_object* v___y_362_; uint8_t v___y_363_; lean_object* v___y_364_; lean_object* v___y_365_; uint8_t v___y_366_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; lean_object* v___y_371_; uint8_t v___y_372_; uint8_t v___y_374_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___y_377_; uint8_t v___y_378_; lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; uint8_t v___y_394_; lean_object* v___y_395_; uint16_t v___y_396_; uint8_t v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; uint8_t v___y_442_; lean_object* v___y_443_; uint8_t v___y_444_; lean_object* v___y_445_; lean_object* v___y_446_; uint8_t v___y_447_; lean_object* v___y_448_; uint16_t v___y_449_; lean_object* v___y_450_; lean_object* v___y_451_; lean_object* v___y_452_; lean_object* v___y_453_; lean_object* v___y_454_; uint8_t v___y_476_; lean_object* v___y_477_; uint8_t v___y_478_; lean_object* v___y_479_; lean_object* v___y_480_; uint8_t v___y_481_; lean_object* v___y_482_; uint16_t v___y_483_; lean_object* v___y_484_; lean_object* v___y_485_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_488_; uint8_t v___y_489_; uint8_t v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; uint8_t v___y_494_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v___y_497_; lean_object* v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; uint8_t v___y_511_; lean_object* v___y_512_; uint8_t v___y_513_; uint16_t v___y_514_; lean_object* v___y_515_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; uint8_t v___y_559_; lean_object* v___y_560_; uint8_t v___y_561_; uint16_t v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_565_; uint8_t v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___y_570_; uint8_t v___y_592_; lean_object* v___y_593_; uint8_t v___y_594_; uint16_t v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; uint8_t v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; uint8_t v___y_604_; uint8_t v___y_606_; lean_object* v___y_607_; uint8_t v___y_608_; lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_612_; lean_object* v___y_613_; lean_object* v___y_614_; lean_object* v___y_615_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v_nextMacroScope_759_; lean_object* v_ngen_760_; lean_object* v_auxDeclNGen_761_; lean_object* v_traceState_762_; lean_object* v_recordedDeps_763_; lean_object* v_messages_764_; lean_object* v_infoState_765_; lean_object* v_snapshotTasks_766_; lean_object* v___y_767_; lean_object* v___x_787_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_787_ = lean_st_ref_get(v___y_268_);
lean_inc_ref(v_value_264_);
v___x_801_ = l_Lean_Expr_getUsedConstants(v_value_264_);
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_array_get_size(v___x_801_);
v___x_804_ = lean_nat_dec_lt(v___x_802_, v___x_803_);
if (v___x_804_ == 0)
{
lean_dec_ref(v___x_801_);
lean_dec(v___x_787_);
goto v___jp_788_;
}
else
{
if (v___x_804_ == 0)
{
lean_dec_ref(v___x_801_);
lean_dec(v___x_787_);
goto v___jp_788_;
}
else
{
lean_object* v_env_805_; size_t v___x_806_; size_t v___x_807_; uint8_t v___x_808_; 
v_env_805_ = lean_ctor_get(v___x_787_, 0);
lean_inc_ref(v_env_805_);
lean_dec(v___x_787_);
v___x_806_ = ((size_t)0ULL);
v___x_807_ = lean_usize_of_nat(v___x_803_);
v___x_808_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_evalExprCore_spec__5(v_env_805_, v___x_803_, v___x_801_, v___x_806_, v___x_807_);
lean_dec_ref(v___x_801_);
lean_dec_ref(v_env_805_);
if (v___x_808_ == 0)
{
goto v___jp_788_;
}
else
{
goto v___jp_716_;
}
}
}
v___jp_270_:
{
lean_object* v_toCold_282_; lean_object* v_currRecDepth_283_; lean_object* v_ref_284_; uint8_t v_suppressElabErrors_285_; uint8_t v_isRecordingDeps_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_323_; 
v_toCold_282_ = lean_ctor_get(v___y_280_, 0);
v_currRecDepth_283_ = lean_ctor_get(v___y_280_, 1);
v_ref_284_ = lean_ctor_get(v___y_280_, 2);
v_suppressElabErrors_285_ = lean_ctor_get_uint8(v___y_280_, sizeof(void*)*3 + 2);
v_isRecordingDeps_286_ = lean_ctor_get_uint8(v___y_280_, sizeof(void*)*3 + 3);
v_isSharedCheck_323_ = !lean_is_exclusive(v___y_280_);
if (v_isSharedCheck_323_ == 0)
{
v___x_288_ = v___y_280_;
v_isShared_289_ = v_isSharedCheck_323_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_ref_284_);
lean_inc(v_currRecDepth_283_);
lean_inc(v_toCold_282_);
lean_dec(v___y_280_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_323_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v_fileName_290_; lean_object* v_fileMap_291_; lean_object* v_currNamespace_292_; lean_object* v_openDecls_293_; lean_object* v_initHeartbeats_294_; lean_object* v_maxHeartbeats_295_; lean_object* v_quotContext_296_; lean_object* v_currMacroScope_297_; lean_object* v_cancelTk_x3f_298_; lean_object* v_inheritedTraceOptions_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_320_; 
v_fileName_290_ = lean_ctor_get(v_toCold_282_, 0);
v_fileMap_291_ = lean_ctor_get(v_toCold_282_, 1);
v_currNamespace_292_ = lean_ctor_get(v_toCold_282_, 4);
v_openDecls_293_ = lean_ctor_get(v_toCold_282_, 5);
v_initHeartbeats_294_ = lean_ctor_get(v_toCold_282_, 6);
v_maxHeartbeats_295_ = lean_ctor_get(v_toCold_282_, 7);
v_quotContext_296_ = lean_ctor_get(v_toCold_282_, 8);
v_currMacroScope_297_ = lean_ctor_get(v_toCold_282_, 9);
v_cancelTk_x3f_298_ = lean_ctor_get(v_toCold_282_, 10);
v_inheritedTraceOptions_299_ = lean_ctor_get(v_toCold_282_, 11);
v_isSharedCheck_320_ = !lean_is_exclusive(v_toCold_282_);
if (v_isSharedCheck_320_ == 0)
{
lean_object* v_unused_321_; lean_object* v_unused_322_; 
v_unused_321_ = lean_ctor_get(v_toCold_282_, 3);
lean_dec(v_unused_321_);
v_unused_322_ = lean_ctor_get(v_toCold_282_, 2);
lean_dec(v_unused_322_);
v___x_301_ = v_toCold_282_;
v_isShared_302_ = v_isSharedCheck_320_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_inheritedTraceOptions_299_);
lean_inc(v_cancelTk_x3f_298_);
lean_inc(v_currMacroScope_297_);
lean_inc(v_quotContext_296_);
lean_inc(v_maxHeartbeats_295_);
lean_inc(v_initHeartbeats_294_);
lean_inc(v_openDecls_293_);
lean_inc(v_currNamespace_292_);
lean_inc(v_fileMap_291_);
lean_inc(v_fileName_290_);
lean_dec(v_toCold_282_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_320_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_303_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__1(v___y_276_, v___y_274_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 3, v___x_303_);
lean_ctor_set(v___x_301_, 2, v___y_276_);
v___x_305_ = v___x_301_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_fileName_290_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_fileMap_291_);
lean_ctor_set(v_reuseFailAlloc_319_, 2, v___y_276_);
lean_ctor_set(v_reuseFailAlloc_319_, 3, v___x_303_);
lean_ctor_set(v_reuseFailAlloc_319_, 4, v_currNamespace_292_);
lean_ctor_set(v_reuseFailAlloc_319_, 5, v_openDecls_293_);
lean_ctor_set(v_reuseFailAlloc_319_, 6, v_initHeartbeats_294_);
lean_ctor_set(v_reuseFailAlloc_319_, 7, v_maxHeartbeats_295_);
lean_ctor_set(v_reuseFailAlloc_319_, 8, v_quotContext_296_);
lean_ctor_set(v_reuseFailAlloc_319_, 9, v_currMacroScope_297_);
lean_ctor_set(v_reuseFailAlloc_319_, 10, v_cancelTk_x3f_298_);
lean_ctor_set(v_reuseFailAlloc_319_, 11, v_inheritedTraceOptions_299_);
v___x_305_ = v_reuseFailAlloc_319_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
lean_object* v___x_307_; 
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v___x_305_);
v___x_307_ = v___x_288_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_305_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v_currRecDepth_283_);
lean_ctor_set(v_reuseFailAlloc_318_, 2, v_ref_284_);
lean_ctor_set_uint8(v_reuseFailAlloc_318_, sizeof(void*)*3 + 2, v_suppressElabErrors_285_);
lean_ctor_set_uint8(v_reuseFailAlloc_318_, sizeof(void*)*3 + 3, v_isRecordingDeps_286_);
v___x_307_ = v_reuseFailAlloc_318_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
lean_object* v___x_308_; 
lean_ctor_set_uint16(v___x_307_, sizeof(void*)*3, v___y_272_);
v___x_308_ = l_Lean_addAndCompile(v___y_277_, v___y_271_, v___y_273_, v___x_307_, v___y_281_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v___x_309_; 
lean_dec_ref_known(v___x_308_, 1);
v___x_309_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___redArg(v___y_275_, v_checkMeta_261_, v___y_278_, v___y_279_, v___x_307_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___x_307_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
return v___x_309_;
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
lean_dec_ref(v___x_307_);
lean_dec(v___y_281_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_275_);
v_a_310_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_308_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_308_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
}
}
}
}
v___jp_324_:
{
lean_object* v___x_338_; lean_object* v_env_339_; lean_object* v_nextMacroScope_340_; lean_object* v_ngen_341_; lean_object* v_auxDeclNGen_342_; lean_object* v_traceState_343_; lean_object* v_recordedDeps_344_; lean_object* v_messages_345_; lean_object* v_infoState_346_; lean_object* v_snapshotTasks_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_356_; 
v___x_338_ = lean_st_ref_take(v___y_328_);
v_env_339_ = lean_ctor_get(v___x_338_, 0);
v_nextMacroScope_340_ = lean_ctor_get(v___x_338_, 1);
v_ngen_341_ = lean_ctor_get(v___x_338_, 2);
v_auxDeclNGen_342_ = lean_ctor_get(v___x_338_, 3);
v_traceState_343_ = lean_ctor_get(v___x_338_, 4);
v_recordedDeps_344_ = lean_ctor_get(v___x_338_, 6);
v_messages_345_ = lean_ctor_get(v___x_338_, 7);
v_infoState_346_ = lean_ctor_get(v___x_338_, 8);
v_snapshotTasks_347_ = lean_ctor_get(v___x_338_, 9);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_356_ == 0)
{
lean_object* v_unused_357_; 
v_unused_357_ = lean_ctor_get(v___x_338_, 5);
lean_dec(v_unused_357_);
v___x_349_ = v___x_338_;
v_isShared_350_ = v_isSharedCheck_356_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_snapshotTasks_347_);
lean_inc(v_infoState_346_);
lean_inc(v_messages_345_);
lean_inc(v_recordedDeps_344_);
lean_inc(v_traceState_343_);
lean_inc(v_auxDeclNGen_342_);
lean_inc(v_ngen_341_);
lean_inc(v_nextMacroScope_340_);
lean_inc(v_env_339_);
lean_dec(v___x_338_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_356_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_353_; 
v___x_351_ = l_Lean_Kernel_enableDiag(v_env_339_, v___y_332_);
lean_inc_ref(v___y_327_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 5, v___y_327_);
lean_ctor_set(v___x_349_, 0, v___x_351_);
v___x_353_ = v___x_349_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v_nextMacroScope_340_);
lean_ctor_set(v_reuseFailAlloc_355_, 2, v_ngen_341_);
lean_ctor_set(v_reuseFailAlloc_355_, 3, v_auxDeclNGen_342_);
lean_ctor_set(v_reuseFailAlloc_355_, 4, v_traceState_343_);
lean_ctor_set(v_reuseFailAlloc_355_, 5, v___y_327_);
lean_ctor_set(v_reuseFailAlloc_355_, 6, v_recordedDeps_344_);
lean_ctor_set(v_reuseFailAlloc_355_, 7, v_messages_345_);
lean_ctor_set(v_reuseFailAlloc_355_, 8, v_infoState_346_);
lean_ctor_set(v_reuseFailAlloc_355_, 9, v_snapshotTasks_347_);
v___x_353_ = v_reuseFailAlloc_355_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_354_; 
v___x_354_ = lean_st_ref_put(v___y_328_, v___x_353_);
v___y_271_ = v___y_325_;
v___y_272_ = v___y_326_;
v___y_273_ = v___y_329_;
v___y_274_ = v___y_330_;
v___y_275_ = v___y_334_;
v___y_276_ = v___y_331_;
v___y_277_ = v___y_335_;
v___y_278_ = v___y_337_;
v___y_279_ = v___y_333_;
v___y_280_ = v___y_336_;
v___y_281_ = v___y_328_;
goto v___jp_270_;
}
}
}
v___jp_358_:
{
if (v___y_372_ == 0)
{
if (v___y_366_ == 0)
{
v___y_271_ = v___y_359_;
v___y_272_ = v___y_360_;
v___y_273_ = v___y_363_;
v___y_274_ = v___y_364_;
v___y_275_ = v___y_368_;
v___y_276_ = v___y_365_;
v___y_277_ = v___y_369_;
v___y_278_ = v___y_371_;
v___y_279_ = v___y_367_;
v___y_280_ = v___y_370_;
v___y_281_ = v___y_362_;
goto v___jp_270_;
}
else
{
v___y_325_ = v___y_359_;
v___y_326_ = v___y_360_;
v___y_327_ = v___y_361_;
v___y_328_ = v___y_362_;
v___y_329_ = v___y_363_;
v___y_330_ = v___y_364_;
v___y_331_ = v___y_365_;
v___y_332_ = v___y_372_;
v___y_333_ = v___y_367_;
v___y_334_ = v___y_368_;
v___y_335_ = v___y_369_;
v___y_336_ = v___y_370_;
v___y_337_ = v___y_371_;
goto v___jp_324_;
}
}
else
{
if (v___y_366_ == 0)
{
v___y_325_ = v___y_359_;
v___y_326_ = v___y_360_;
v___y_327_ = v___y_361_;
v___y_328_ = v___y_362_;
v___y_329_ = v___y_363_;
v___y_330_ = v___y_364_;
v___y_331_ = v___y_365_;
v___y_332_ = v___y_372_;
v___y_333_ = v___y_367_;
v___y_334_ = v___y_368_;
v___y_335_ = v___y_369_;
v___y_336_ = v___y_370_;
v___y_337_ = v___y_371_;
goto v___jp_324_;
}
else
{
v___y_271_ = v___y_359_;
v___y_272_ = v___y_360_;
v___y_273_ = v___y_363_;
v___y_274_ = v___y_364_;
v___y_275_ = v___y_368_;
v___y_276_ = v___y_365_;
v___y_277_ = v___y_369_;
v___y_278_ = v___y_371_;
v___y_279_ = v___y_367_;
v___y_280_ = v___y_370_;
v___y_281_ = v___y_362_;
goto v___jp_270_;
}
}
}
v___jp_373_:
{
uint16_t v___x_385_; lean_object* v___x_386_; lean_object* v_env_387_; uint8_t v___x_388_; uint16_t v___x_389_; uint16_t v___x_390_; uint16_t v___x_391_; uint8_t v___x_392_; 
v___x_385_ = l_Lean_OptionFlags_ofOptions(v___y_384_);
v___x_386_ = lean_st_ref_get(v___y_376_);
v_env_387_ = lean_ctor_get(v___x_386_, 0);
lean_inc_ref(v_env_387_);
lean_dec(v___x_386_);
v___x_388_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_387_);
lean_dec_ref(v_env_387_);
v___x_389_ = 512;
v___x_390_ = lean_uint16_land(v___x_385_, v___x_389_);
v___x_391_ = 0;
v___x_392_ = lean_uint16_dec_eq(v___x_390_, v___x_391_);
if (v___x_392_ == 0)
{
v___y_359_ = v___y_374_;
v___y_360_ = v___x_385_;
v___y_361_ = v___y_375_;
v___y_362_ = v___y_376_;
v___y_363_ = v___y_378_;
v___y_364_ = v___y_377_;
v___y_365_ = v___y_384_;
v___y_366_ = v___x_388_;
v___y_367_ = v___y_383_;
v___y_368_ = v___y_379_;
v___y_369_ = v___y_380_;
v___y_370_ = v___y_381_;
v___y_371_ = v___y_382_;
v___y_372_ = v___y_374_;
goto v___jp_358_;
}
else
{
v___y_359_ = v___y_374_;
v___y_360_ = v___x_385_;
v___y_361_ = v___y_375_;
v___y_362_ = v___y_376_;
v___y_363_ = v___y_378_;
v___y_364_ = v___y_377_;
v___y_365_ = v___y_384_;
v___y_366_ = v___x_388_;
v___y_367_ = v___y_383_;
v___y_368_ = v___y_379_;
v___y_369_ = v___y_380_;
v___y_370_ = v___y_381_;
v___y_371_ = v___y_382_;
v___y_372_ = v___y_378_;
goto v___jp_358_;
}
}
v___jp_393_:
{
lean_object* v_toCold_406_; lean_object* v_currRecDepth_407_; lean_object* v_ref_408_; uint8_t v_suppressElabErrors_409_; uint8_t v_isRecordingDeps_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_440_; 
v_toCold_406_ = lean_ctor_get(v___y_404_, 0);
v_currRecDepth_407_ = lean_ctor_get(v___y_404_, 1);
v_ref_408_ = lean_ctor_get(v___y_404_, 2);
v_suppressElabErrors_409_ = lean_ctor_get_uint8(v___y_404_, sizeof(void*)*3 + 2);
v_isRecordingDeps_410_ = lean_ctor_get_uint8(v___y_404_, sizeof(void*)*3 + 3);
v_isSharedCheck_440_ = !lean_is_exclusive(v___y_404_);
if (v_isSharedCheck_440_ == 0)
{
v___x_412_ = v___y_404_;
v_isShared_413_ = v_isSharedCheck_440_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_ref_408_);
lean_inc(v_currRecDepth_407_);
lean_inc(v_toCold_406_);
lean_dec(v___y_404_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_440_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v_fileName_414_; lean_object* v_fileMap_415_; lean_object* v_currNamespace_416_; lean_object* v_openDecls_417_; lean_object* v_initHeartbeats_418_; lean_object* v_maxHeartbeats_419_; lean_object* v_quotContext_420_; lean_object* v_currMacroScope_421_; lean_object* v_cancelTk_x3f_422_; lean_object* v_inheritedTraceOptions_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_437_; 
v_fileName_414_ = lean_ctor_get(v_toCold_406_, 0);
v_fileMap_415_ = lean_ctor_get(v_toCold_406_, 1);
v_currNamespace_416_ = lean_ctor_get(v_toCold_406_, 4);
v_openDecls_417_ = lean_ctor_get(v_toCold_406_, 5);
v_initHeartbeats_418_ = lean_ctor_get(v_toCold_406_, 6);
v_maxHeartbeats_419_ = lean_ctor_get(v_toCold_406_, 7);
v_quotContext_420_ = lean_ctor_get(v_toCold_406_, 8);
v_currMacroScope_421_ = lean_ctor_get(v_toCold_406_, 9);
v_cancelTk_x3f_422_ = lean_ctor_get(v_toCold_406_, 10);
v_inheritedTraceOptions_423_ = lean_ctor_get(v_toCold_406_, 11);
v_isSharedCheck_437_ = !lean_is_exclusive(v_toCold_406_);
if (v_isSharedCheck_437_ == 0)
{
lean_object* v_unused_438_; lean_object* v_unused_439_; 
v_unused_438_ = lean_ctor_get(v_toCold_406_, 3);
lean_dec(v_unused_438_);
v_unused_439_ = lean_ctor_get(v_toCold_406_, 2);
lean_dec(v_unused_439_);
v___x_425_ = v_toCold_406_;
v_isShared_426_ = v_isSharedCheck_437_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_inheritedTraceOptions_423_);
lean_inc(v_cancelTk_x3f_422_);
lean_inc(v_currMacroScope_421_);
lean_inc(v_quotContext_420_);
lean_inc(v_maxHeartbeats_419_);
lean_inc(v_initHeartbeats_418_);
lean_inc(v_openDecls_417_);
lean_inc(v_currNamespace_416_);
lean_inc(v_fileMap_415_);
lean_inc(v_fileName_414_);
lean_dec(v_toCold_406_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_437_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__1(v___y_403_, v___y_398_);
lean_inc_ref(v___y_403_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 3, v___x_427_);
lean_ctor_set(v___x_425_, 2, v___y_403_);
v___x_429_ = v___x_425_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_fileName_414_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v_fileMap_415_);
lean_ctor_set(v_reuseFailAlloc_436_, 2, v___y_403_);
lean_ctor_set(v_reuseFailAlloc_436_, 3, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_436_, 4, v_currNamespace_416_);
lean_ctor_set(v_reuseFailAlloc_436_, 5, v_openDecls_417_);
lean_ctor_set(v_reuseFailAlloc_436_, 6, v_initHeartbeats_418_);
lean_ctor_set(v_reuseFailAlloc_436_, 7, v_maxHeartbeats_419_);
lean_ctor_set(v_reuseFailAlloc_436_, 8, v_quotContext_420_);
lean_ctor_set(v_reuseFailAlloc_436_, 9, v_currMacroScope_421_);
lean_ctor_set(v_reuseFailAlloc_436_, 10, v_cancelTk_x3f_422_);
lean_ctor_set(v_reuseFailAlloc_436_, 11, v_inheritedTraceOptions_423_);
v___x_429_ = v_reuseFailAlloc_436_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_431_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_429_);
v___x_431_ = v___x_412_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v___x_429_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_currRecDepth_407_);
lean_ctor_set(v_reuseFailAlloc_435_, 2, v_ref_408_);
lean_ctor_set_uint8(v_reuseFailAlloc_435_, sizeof(void*)*3 + 2, v_suppressElabErrors_409_);
lean_ctor_set_uint8(v_reuseFailAlloc_435_, sizeof(void*)*3 + 3, v_isRecordingDeps_410_);
v___x_431_ = v_reuseFailAlloc_435_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
lean_ctor_set_uint16(v___x_431_, sizeof(void*)*3, v___y_396_);
if (v_isRecordingDeps_410_ == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = l_Lean_Compiler_compiler_relaxedMetaCheck;
v___x_433_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3(v___y_403_, v___x_432_, v___y_394_);
v___y_374_ = v___y_394_;
v___y_375_ = v___y_395_;
v___y_376_ = v___y_405_;
v___y_377_ = v___y_398_;
v___y_378_ = v___y_397_;
v___y_379_ = v___y_399_;
v___y_380_ = v___y_400_;
v___y_381_ = v___x_431_;
v___y_382_ = v___y_401_;
v___y_383_ = v___y_402_;
v___y_384_ = v___x_433_;
goto v___jp_373_;
}
else
{
lean_object* v___x_434_; 
v___x_434_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v___y_403_);
v___y_374_ = v___y_394_;
v___y_375_ = v___y_395_;
v___y_376_ = v___y_405_;
v___y_377_ = v___y_398_;
v___y_378_ = v___y_397_;
v___y_379_ = v___y_399_;
v___y_380_ = v___y_400_;
v___y_381_ = v___x_431_;
v___y_382_ = v___y_401_;
v___y_383_ = v___y_402_;
v___y_384_ = v___x_434_;
goto v___jp_373_;
}
}
}
}
}
}
v___jp_441_:
{
lean_object* v___x_455_; lean_object* v_env_456_; lean_object* v_nextMacroScope_457_; lean_object* v_ngen_458_; lean_object* v_auxDeclNGen_459_; lean_object* v_traceState_460_; lean_object* v_recordedDeps_461_; lean_object* v_messages_462_; lean_object* v_infoState_463_; lean_object* v_snapshotTasks_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_473_; 
v___x_455_ = lean_st_ref_take(v___y_446_);
v_env_456_ = lean_ctor_get(v___x_455_, 0);
v_nextMacroScope_457_ = lean_ctor_get(v___x_455_, 1);
v_ngen_458_ = lean_ctor_get(v___x_455_, 2);
v_auxDeclNGen_459_ = lean_ctor_get(v___x_455_, 3);
v_traceState_460_ = lean_ctor_get(v___x_455_, 4);
v_recordedDeps_461_ = lean_ctor_get(v___x_455_, 6);
v_messages_462_ = lean_ctor_get(v___x_455_, 7);
v_infoState_463_ = lean_ctor_get(v___x_455_, 8);
v_snapshotTasks_464_ = lean_ctor_get(v___x_455_, 9);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_473_ == 0)
{
lean_object* v_unused_474_; 
v_unused_474_ = lean_ctor_get(v___x_455_, 5);
lean_dec(v_unused_474_);
v___x_466_ = v___x_455_;
v_isShared_467_ = v_isSharedCheck_473_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_snapshotTasks_464_);
lean_inc(v_infoState_463_);
lean_inc(v_messages_462_);
lean_inc(v_recordedDeps_461_);
lean_inc(v_traceState_460_);
lean_inc(v_auxDeclNGen_459_);
lean_inc(v_ngen_458_);
lean_inc(v_nextMacroScope_457_);
lean_inc(v_env_456_);
lean_dec(v___x_455_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_473_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_468_ = l_Lean_Kernel_enableDiag(v_env_456_, v___y_447_);
lean_inc_ref(v___y_443_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 5, v___y_443_);
lean_ctor_set(v___x_466_, 0, v___x_468_);
v___x_470_ = v___x_466_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_nextMacroScope_457_);
lean_ctor_set(v_reuseFailAlloc_472_, 2, v_ngen_458_);
lean_ctor_set(v_reuseFailAlloc_472_, 3, v_auxDeclNGen_459_);
lean_ctor_set(v_reuseFailAlloc_472_, 4, v_traceState_460_);
lean_ctor_set(v_reuseFailAlloc_472_, 5, v___y_443_);
lean_ctor_set(v_reuseFailAlloc_472_, 6, v_recordedDeps_461_);
lean_ctor_set(v_reuseFailAlloc_472_, 7, v_messages_462_);
lean_ctor_set(v_reuseFailAlloc_472_, 8, v_infoState_463_);
lean_ctor_set(v_reuseFailAlloc_472_, 9, v_snapshotTasks_464_);
v___x_470_ = v_reuseFailAlloc_472_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
lean_object* v___x_471_; 
v___x_471_ = lean_st_ref_put(v___y_446_, v___x_470_);
v___y_394_ = v___y_442_;
v___y_395_ = v___y_443_;
v___y_396_ = v___y_449_;
v___y_397_ = v___y_444_;
v___y_398_ = v___y_445_;
v___y_399_ = v___y_451_;
v___y_400_ = v___y_452_;
v___y_401_ = v___y_453_;
v___y_402_ = v___y_448_;
v___y_403_ = v___y_454_;
v___y_404_ = v___y_450_;
v___y_405_ = v___y_446_;
goto v___jp_393_;
}
}
}
v___jp_475_:
{
if (v___y_489_ == 0)
{
if (v___y_481_ == 0)
{
v___y_394_ = v___y_476_;
v___y_395_ = v___y_477_;
v___y_396_ = v___y_483_;
v___y_397_ = v___y_478_;
v___y_398_ = v___y_479_;
v___y_399_ = v___y_485_;
v___y_400_ = v___y_486_;
v___y_401_ = v___y_487_;
v___y_402_ = v___y_482_;
v___y_403_ = v___y_488_;
v___y_404_ = v___y_484_;
v___y_405_ = v___y_480_;
goto v___jp_393_;
}
else
{
v___y_442_ = v___y_476_;
v___y_443_ = v___y_477_;
v___y_444_ = v___y_478_;
v___y_445_ = v___y_479_;
v___y_446_ = v___y_480_;
v___y_447_ = v___y_489_;
v___y_448_ = v___y_482_;
v___y_449_ = v___y_483_;
v___y_450_ = v___y_484_;
v___y_451_ = v___y_485_;
v___y_452_ = v___y_486_;
v___y_453_ = v___y_487_;
v___y_454_ = v___y_488_;
goto v___jp_441_;
}
}
else
{
if (v___y_481_ == 0)
{
v___y_442_ = v___y_476_;
v___y_443_ = v___y_477_;
v___y_444_ = v___y_478_;
v___y_445_ = v___y_479_;
v___y_446_ = v___y_480_;
v___y_447_ = v___y_489_;
v___y_448_ = v___y_482_;
v___y_449_ = v___y_483_;
v___y_450_ = v___y_484_;
v___y_451_ = v___y_485_;
v___y_452_ = v___y_486_;
v___y_453_ = v___y_487_;
v___y_454_ = v___y_488_;
goto v___jp_441_;
}
else
{
v___y_394_ = v___y_476_;
v___y_395_ = v___y_477_;
v___y_396_ = v___y_483_;
v___y_397_ = v___y_478_;
v___y_398_ = v___y_479_;
v___y_399_ = v___y_485_;
v___y_400_ = v___y_486_;
v___y_401_ = v___y_487_;
v___y_402_ = v___y_482_;
v___y_403_ = v___y_488_;
v___y_404_ = v___y_484_;
v___y_405_ = v___y_480_;
goto v___jp_393_;
}
}
}
v___jp_490_:
{
uint16_t v___x_502_; lean_object* v___x_503_; lean_object* v_env_504_; uint8_t v___x_505_; uint16_t v___x_506_; uint16_t v___x_507_; uint16_t v___x_508_; uint8_t v___x_509_; 
v___x_502_ = l_Lean_OptionFlags_ofOptions(v___y_501_);
v___x_503_ = lean_st_ref_get(v___y_495_);
v_env_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc_ref(v_env_504_);
lean_dec(v___x_503_);
v___x_505_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_504_);
lean_dec_ref(v_env_504_);
v___x_506_ = 512;
v___x_507_ = lean_uint16_land(v___x_502_, v___x_506_);
v___x_508_ = 0;
v___x_509_ = lean_uint16_dec_eq(v___x_507_, v___x_508_);
if (v___x_509_ == 0)
{
v___y_476_ = v___y_491_;
v___y_477_ = v___y_492_;
v___y_478_ = v___y_494_;
v___y_479_ = v___y_493_;
v___y_480_ = v___y_495_;
v___y_481_ = v___x_505_;
v___y_482_ = v___y_500_;
v___y_483_ = v___x_502_;
v___y_484_ = v___y_496_;
v___y_485_ = v___y_497_;
v___y_486_ = v___y_498_;
v___y_487_ = v___y_499_;
v___y_488_ = v___y_501_;
v___y_489_ = v___y_491_;
goto v___jp_475_;
}
else
{
v___y_476_ = v___y_491_;
v___y_477_ = v___y_492_;
v___y_478_ = v___y_494_;
v___y_479_ = v___y_493_;
v___y_480_ = v___y_495_;
v___y_481_ = v___x_505_;
v___y_482_ = v___y_500_;
v___y_483_ = v___x_502_;
v___y_484_ = v___y_496_;
v___y_485_ = v___y_497_;
v___y_486_ = v___y_498_;
v___y_487_ = v___y_499_;
v___y_488_ = v___y_501_;
v___y_489_ = v___y_494_;
goto v___jp_475_;
}
}
v___jp_510_:
{
lean_object* v_toCold_522_; lean_object* v_currRecDepth_523_; lean_object* v_ref_524_; uint8_t v_suppressElabErrors_525_; uint8_t v_isRecordingDeps_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_557_; 
v_toCold_522_ = lean_ctor_get(v___y_520_, 0);
v_currRecDepth_523_ = lean_ctor_get(v___y_520_, 1);
v_ref_524_ = lean_ctor_get(v___y_520_, 2);
v_suppressElabErrors_525_ = lean_ctor_get_uint8(v___y_520_, sizeof(void*)*3 + 2);
v_isRecordingDeps_526_ = lean_ctor_get_uint8(v___y_520_, sizeof(void*)*3 + 3);
v_isSharedCheck_557_ = !lean_is_exclusive(v___y_520_);
if (v_isSharedCheck_557_ == 0)
{
v___x_528_ = v___y_520_;
v_isShared_529_ = v_isSharedCheck_557_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_ref_524_);
lean_inc(v_currRecDepth_523_);
lean_inc(v_toCold_522_);
lean_dec(v___y_520_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_557_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v_fileName_530_; lean_object* v_fileMap_531_; lean_object* v_currNamespace_532_; lean_object* v_openDecls_533_; lean_object* v_initHeartbeats_534_; lean_object* v_maxHeartbeats_535_; lean_object* v_quotContext_536_; lean_object* v_currMacroScope_537_; lean_object* v_cancelTk_x3f_538_; lean_object* v_inheritedTraceOptions_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_554_; 
v_fileName_530_ = lean_ctor_get(v_toCold_522_, 0);
v_fileMap_531_ = lean_ctor_get(v_toCold_522_, 1);
v_currNamespace_532_ = lean_ctor_get(v_toCold_522_, 4);
v_openDecls_533_ = lean_ctor_get(v_toCold_522_, 5);
v_initHeartbeats_534_ = lean_ctor_get(v_toCold_522_, 6);
v_maxHeartbeats_535_ = lean_ctor_get(v_toCold_522_, 7);
v_quotContext_536_ = lean_ctor_get(v_toCold_522_, 8);
v_currMacroScope_537_ = lean_ctor_get(v_toCold_522_, 9);
v_cancelTk_x3f_538_ = lean_ctor_get(v_toCold_522_, 10);
v_inheritedTraceOptions_539_ = lean_ctor_get(v_toCold_522_, 11);
v_isSharedCheck_554_ = !lean_is_exclusive(v_toCold_522_);
if (v_isSharedCheck_554_ == 0)
{
lean_object* v_unused_555_; lean_object* v_unused_556_; 
v_unused_555_ = lean_ctor_get(v_toCold_522_, 3);
lean_dec(v_unused_555_);
v_unused_556_ = lean_ctor_get(v_toCold_522_, 2);
lean_dec(v_unused_556_);
v___x_541_ = v_toCold_522_;
v_isShared_542_ = v_isSharedCheck_554_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_inheritedTraceOptions_539_);
lean_inc(v_cancelTk_x3f_538_);
lean_inc(v_currMacroScope_537_);
lean_inc(v_quotContext_536_);
lean_inc(v_maxHeartbeats_535_);
lean_inc(v_initHeartbeats_534_);
lean_inc(v_openDecls_533_);
lean_inc(v_currNamespace_532_);
lean_inc(v_fileMap_531_);
lean_inc(v_fileName_530_);
lean_dec(v_toCold_522_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_554_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_543_ = l_Lean_maxRecDepth;
v___x_544_ = l_Lean_Option_get___at___00Lean_Meta_evalExprCore_spec__1(v___y_517_, v___x_543_);
lean_inc_ref(v___y_517_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 3, v___x_544_);
lean_ctor_set(v___x_541_, 2, v___y_517_);
v___x_546_ = v___x_541_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_fileName_530_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_fileMap_531_);
lean_ctor_set(v_reuseFailAlloc_553_, 2, v___y_517_);
lean_ctor_set(v_reuseFailAlloc_553_, 3, v___x_544_);
lean_ctor_set(v_reuseFailAlloc_553_, 4, v_currNamespace_532_);
lean_ctor_set(v_reuseFailAlloc_553_, 5, v_openDecls_533_);
lean_ctor_set(v_reuseFailAlloc_553_, 6, v_initHeartbeats_534_);
lean_ctor_set(v_reuseFailAlloc_553_, 7, v_maxHeartbeats_535_);
lean_ctor_set(v_reuseFailAlloc_553_, 8, v_quotContext_536_);
lean_ctor_set(v_reuseFailAlloc_553_, 9, v_currMacroScope_537_);
lean_ctor_set(v_reuseFailAlloc_553_, 10, v_cancelTk_x3f_538_);
lean_ctor_set(v_reuseFailAlloc_553_, 11, v_inheritedTraceOptions_539_);
v___x_546_ = v_reuseFailAlloc_553_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
lean_object* v___x_548_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_546_);
v___x_548_ = v___x_528_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_546_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v_currRecDepth_523_);
lean_ctor_set(v_reuseFailAlloc_552_, 2, v_ref_524_);
lean_ctor_set_uint8(v_reuseFailAlloc_552_, sizeof(void*)*3 + 2, v_suppressElabErrors_525_);
lean_ctor_set_uint8(v_reuseFailAlloc_552_, sizeof(void*)*3 + 3, v_isRecordingDeps_526_);
v___x_548_ = v_reuseFailAlloc_552_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
lean_ctor_set_uint16(v___x_548_, sizeof(void*)*3, v___y_514_);
if (v_isRecordingDeps_526_ == 0)
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_550_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3(v___y_517_, v___x_549_, v_isRecordingDeps_526_);
v___y_491_ = v___y_511_;
v___y_492_ = v___y_512_;
v___y_493_ = v___x_543_;
v___y_494_ = v___y_513_;
v___y_495_ = v___y_521_;
v___y_496_ = v___x_548_;
v___y_497_ = v___y_515_;
v___y_498_ = v___y_516_;
v___y_499_ = v___y_518_;
v___y_500_ = v___y_519_;
v___y_501_ = v___x_550_;
goto v___jp_490_;
}
else
{
lean_object* v___x_551_; 
v___x_551_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v___y_517_);
v___y_491_ = v___y_511_;
v___y_492_ = v___y_512_;
v___y_493_ = v___x_543_;
v___y_494_ = v___y_513_;
v___y_495_ = v___y_521_;
v___y_496_ = v___x_548_;
v___y_497_ = v___y_515_;
v___y_498_ = v___y_516_;
v___y_499_ = v___y_518_;
v___y_500_ = v___y_519_;
v___y_501_ = v___x_551_;
goto v___jp_490_;
}
}
}
}
}
}
v___jp_558_:
{
lean_object* v___x_571_; lean_object* v_env_572_; lean_object* v_nextMacroScope_573_; lean_object* v_ngen_574_; lean_object* v_auxDeclNGen_575_; lean_object* v_traceState_576_; lean_object* v_recordedDeps_577_; lean_object* v_messages_578_; lean_object* v_infoState_579_; lean_object* v_snapshotTasks_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_589_; 
v___x_571_ = lean_st_ref_take(v___y_568_);
v_env_572_ = lean_ctor_get(v___x_571_, 0);
v_nextMacroScope_573_ = lean_ctor_get(v___x_571_, 1);
v_ngen_574_ = lean_ctor_get(v___x_571_, 2);
v_auxDeclNGen_575_ = lean_ctor_get(v___x_571_, 3);
v_traceState_576_ = lean_ctor_get(v___x_571_, 4);
v_recordedDeps_577_ = lean_ctor_get(v___x_571_, 6);
v_messages_578_ = lean_ctor_get(v___x_571_, 7);
v_infoState_579_ = lean_ctor_get(v___x_571_, 8);
v_snapshotTasks_580_ = lean_ctor_get(v___x_571_, 9);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_589_ == 0)
{
lean_object* v_unused_590_; 
v_unused_590_ = lean_ctor_get(v___x_571_, 5);
lean_dec(v_unused_590_);
v___x_582_ = v___x_571_;
v_isShared_583_ = v_isSharedCheck_589_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_snapshotTasks_580_);
lean_inc(v_infoState_579_);
lean_inc(v_messages_578_);
lean_inc(v_recordedDeps_577_);
lean_inc(v_traceState_576_);
lean_inc(v_auxDeclNGen_575_);
lean_inc(v_ngen_574_);
lean_inc(v_nextMacroScope_573_);
lean_inc(v_env_572_);
lean_dec(v___x_571_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_589_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_584_ = l_Lean_Kernel_enableDiag(v_env_572_, v___y_566_);
lean_inc_ref(v___y_560_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 5, v___y_560_);
lean_ctor_set(v___x_582_, 0, v___x_584_);
v___x_586_ = v___x_582_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_584_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_nextMacroScope_573_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_ngen_574_);
lean_ctor_set(v_reuseFailAlloc_588_, 3, v_auxDeclNGen_575_);
lean_ctor_set(v_reuseFailAlloc_588_, 4, v_traceState_576_);
lean_ctor_set(v_reuseFailAlloc_588_, 5, v___y_560_);
lean_ctor_set(v_reuseFailAlloc_588_, 6, v_recordedDeps_577_);
lean_ctor_set(v_reuseFailAlloc_588_, 7, v_messages_578_);
lean_ctor_set(v_reuseFailAlloc_588_, 8, v_infoState_579_);
lean_ctor_set(v_reuseFailAlloc_588_, 9, v_snapshotTasks_580_);
v___x_586_ = v_reuseFailAlloc_588_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
lean_object* v___x_587_; 
v___x_587_ = lean_st_ref_put(v___y_568_, v___x_586_);
v___y_511_ = v___y_559_;
v___y_512_ = v___y_560_;
v___y_513_ = v___y_561_;
v___y_514_ = v___y_562_;
v___y_515_ = v___y_567_;
v___y_516_ = v___y_569_;
v___y_517_ = v___y_563_;
v___y_518_ = v___y_570_;
v___y_519_ = v___y_565_;
v___y_520_ = v___y_564_;
v___y_521_ = v___y_568_;
goto v___jp_510_;
}
}
}
v___jp_591_:
{
if (v___y_604_ == 0)
{
if (v___y_599_ == 0)
{
v___y_511_ = v___y_592_;
v___y_512_ = v___y_593_;
v___y_513_ = v___y_594_;
v___y_514_ = v___y_595_;
v___y_515_ = v___y_600_;
v___y_516_ = v___y_602_;
v___y_517_ = v___y_596_;
v___y_518_ = v___y_603_;
v___y_519_ = v___y_598_;
v___y_520_ = v___y_597_;
v___y_521_ = v___y_601_;
goto v___jp_510_;
}
else
{
v___y_559_ = v___y_592_;
v___y_560_ = v___y_593_;
v___y_561_ = v___y_594_;
v___y_562_ = v___y_595_;
v___y_563_ = v___y_596_;
v___y_564_ = v___y_597_;
v___y_565_ = v___y_598_;
v___y_566_ = v___y_604_;
v___y_567_ = v___y_600_;
v___y_568_ = v___y_601_;
v___y_569_ = v___y_602_;
v___y_570_ = v___y_603_;
goto v___jp_558_;
}
}
else
{
if (v___y_599_ == 0)
{
v___y_559_ = v___y_592_;
v___y_560_ = v___y_593_;
v___y_561_ = v___y_594_;
v___y_562_ = v___y_595_;
v___y_563_ = v___y_596_;
v___y_564_ = v___y_597_;
v___y_565_ = v___y_598_;
v___y_566_ = v___y_604_;
v___y_567_ = v___y_600_;
v___y_568_ = v___y_601_;
v___y_569_ = v___y_602_;
v___y_570_ = v___y_603_;
goto v___jp_558_;
}
else
{
v___y_511_ = v___y_592_;
v___y_512_ = v___y_593_;
v___y_513_ = v___y_594_;
v___y_514_ = v___y_595_;
v___y_515_ = v___y_600_;
v___y_516_ = v___y_602_;
v___y_517_ = v___y_596_;
v___y_518_ = v___y_603_;
v___y_519_ = v___y_598_;
v___y_520_ = v___y_597_;
v___y_521_ = v___y_601_;
goto v___jp_510_;
}
}
}
v___jp_605_:
{
uint16_t v___x_616_; lean_object* v___x_617_; lean_object* v_env_618_; uint8_t v___x_619_; uint16_t v___x_620_; uint16_t v___x_621_; uint16_t v___x_622_; uint8_t v___x_623_; 
v___x_616_ = l_Lean_OptionFlags_ofOptions(v___y_615_);
v___x_617_ = lean_st_ref_get(v___y_610_);
v_env_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc_ref(v_env_618_);
lean_dec(v___x_617_);
v___x_619_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_618_);
lean_dec_ref(v_env_618_);
v___x_620_ = 512;
v___x_621_ = lean_uint16_land(v___x_616_, v___x_620_);
v___x_622_ = 0;
v___x_623_ = lean_uint16_dec_eq(v___x_621_, v___x_622_);
if (v___x_623_ == 0)
{
v___y_592_ = v___y_606_;
v___y_593_ = v___y_607_;
v___y_594_ = v___y_608_;
v___y_595_ = v___x_616_;
v___y_596_ = v___y_615_;
v___y_597_ = v___y_613_;
v___y_598_ = v___y_614_;
v___y_599_ = v___x_619_;
v___y_600_ = v___y_609_;
v___y_601_ = v___y_610_;
v___y_602_ = v___y_611_;
v___y_603_ = v___y_612_;
v___y_604_ = v___y_606_;
goto v___jp_591_;
}
else
{
v___y_592_ = v___y_606_;
v___y_593_ = v___y_607_;
v___y_594_ = v___y_608_;
v___y_595_ = v___x_616_;
v___y_596_ = v___y_615_;
v___y_597_ = v___y_613_;
v___y_598_ = v___y_614_;
v___y_599_ = v___x_619_;
v___y_600_ = v___y_609_;
v___y_601_ = v___y_610_;
v___y_602_ = v___y_611_;
v___y_603_ = v___y_612_;
v___y_604_ = v___y_608_;
goto v___jp_591_;
}
}
v___jp_624_:
{
lean_object* v___x_633_; 
lean_inc(v___y_632_);
lean_inc_ref(v___y_631_);
lean_inc(v___y_630_);
lean_inc_ref(v___y_629_);
lean_inc_ref(v___y_628_);
v___x_633_ = lean_infer_type(v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_635_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc_n(v_a_634_, 2);
lean_dec_ref_known(v___x_633_, 1);
lean_inc(v___y_632_);
lean_inc_ref(v___y_631_);
lean_inc(v___y_630_);
lean_inc_ref(v___y_629_);
v___x_635_ = lean_apply_6(v_checkType_262_, v_a_634_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, lean_box(0));
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v_env_643_; lean_object* v_nextMacroScope_644_; lean_object* v_ngen_645_; lean_object* v_auxDeclNGen_646_; lean_object* v_traceState_647_; lean_object* v_recordedDeps_648_; lean_object* v_messages_649_; lean_object* v_infoState_650_; lean_object* v_snapshotTasks_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_698_; 
lean_dec_ref_known(v___x_635_, 1);
v___x_636_ = lean_array_to_list(v___y_626_);
lean_inc_n(v___y_627_, 2);
v___x_637_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_637_, 0, v___y_627_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
lean_ctor_set(v___x_637_, 2, v_a_634_);
v___x_638_ = lean_box(0);
lean_inc(v___y_625_);
v___x_639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_639_, 0, v___y_627_);
lean_ctor_set(v___x_639_, 1, v___y_625_);
v___x_640_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_640_, 0, v___x_637_);
lean_ctor_set(v___x_640_, 1, v___y_628_);
lean_ctor_set(v___x_640_, 2, v___x_638_);
lean_ctor_set(v___x_640_, 3, v___x_639_);
lean_ctor_set_uint8(v___x_640_, sizeof(void*)*4, v_safety_263_);
v___x_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
v___x_642_ = lean_st_ref_take(v___y_632_);
v_env_643_ = lean_ctor_get(v___x_642_, 0);
v_nextMacroScope_644_ = lean_ctor_get(v___x_642_, 1);
v_ngen_645_ = lean_ctor_get(v___x_642_, 2);
v_auxDeclNGen_646_ = lean_ctor_get(v___x_642_, 3);
v_traceState_647_ = lean_ctor_get(v___x_642_, 4);
v_recordedDeps_648_ = lean_ctor_get(v___x_642_, 6);
v_messages_649_ = lean_ctor_get(v___x_642_, 7);
v_infoState_650_ = lean_ctor_get(v___x_642_, 8);
v_snapshotTasks_651_ = lean_ctor_get(v___x_642_, 9);
v_isSharedCheck_698_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_698_ == 0)
{
lean_object* v_unused_699_; 
v_unused_699_ = lean_ctor_get(v___x_642_, 5);
lean_dec(v_unused_699_);
v___x_653_ = v___x_642_;
v_isShared_654_ = v_isSharedCheck_698_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_snapshotTasks_651_);
lean_inc(v_infoState_650_);
lean_inc(v_messages_649_);
lean_inc(v_recordedDeps_648_);
lean_inc(v_traceState_647_);
lean_inc(v_auxDeclNGen_646_);
lean_inc(v_ngen_645_);
lean_inc(v_nextMacroScope_644_);
lean_inc(v_env_643_);
lean_dec(v___x_642_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_698_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_658_; 
lean_inc(v___y_627_);
v___x_655_ = l_Lean_markMeta(v_env_643_, v___y_627_);
v___x_656_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 5, v___x_656_);
lean_ctor_set(v___x_653_, 0, v___x_655_);
v___x_658_ = v___x_653_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_655_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v_nextMacroScope_644_);
lean_ctor_set(v_reuseFailAlloc_697_, 2, v_ngen_645_);
lean_ctor_set(v_reuseFailAlloc_697_, 3, v_auxDeclNGen_646_);
lean_ctor_set(v_reuseFailAlloc_697_, 4, v_traceState_647_);
lean_ctor_set(v_reuseFailAlloc_697_, 5, v___x_656_);
lean_ctor_set(v_reuseFailAlloc_697_, 6, v_recordedDeps_648_);
lean_ctor_set(v_reuseFailAlloc_697_, 7, v_messages_649_);
lean_ctor_set(v_reuseFailAlloc_697_, 8, v_infoState_650_);
lean_ctor_set(v_reuseFailAlloc_697_, 9, v_snapshotTasks_651_);
v___x_658_ = v_reuseFailAlloc_697_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v_mctx_661_; lean_object* v_zetaDeltaFVarIds_662_; lean_object* v_postponed_663_; lean_object* v_diag_664_; lean_object* v_rewriteFires_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_695_; 
v___x_659_ = lean_st_ref_put(v___y_632_, v___x_658_);
v___x_660_ = lean_st_ref_take(v___y_630_);
v_mctx_661_ = lean_ctor_get(v___x_660_, 0);
v_zetaDeltaFVarIds_662_ = lean_ctor_get(v___x_660_, 2);
v_postponed_663_ = lean_ctor_get(v___x_660_, 3);
v_diag_664_ = lean_ctor_get(v___x_660_, 4);
v_rewriteFires_665_ = lean_ctor_get(v___x_660_, 5);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_695_ == 0)
{
lean_object* v_unused_696_; 
v_unused_696_ = lean_ctor_get(v___x_660_, 1);
lean_dec(v_unused_696_);
v___x_667_ = v___x_660_;
v_isShared_668_ = v_isSharedCheck_695_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_rewriteFires_665_);
lean_inc(v_diag_664_);
lean_inc(v_postponed_663_);
lean_inc(v_zetaDeltaFVarIds_662_);
lean_inc(v_mctx_661_);
lean_dec(v___x_660_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_695_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_669_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 1, v___x_669_);
v___x_671_ = v___x_667_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_mctx_661_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_669_);
lean_ctor_set(v_reuseFailAlloc_694_, 2, v_zetaDeltaFVarIds_662_);
lean_ctor_set(v_reuseFailAlloc_694_, 3, v_postponed_663_);
lean_ctor_set(v_reuseFailAlloc_694_, 4, v_diag_664_);
lean_ctor_set(v_reuseFailAlloc_694_, 5, v_rewriteFires_665_);
v___x_671_ = v_reuseFailAlloc_694_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v_env_674_; lean_object* v_checked_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_672_ = lean_st_ref_put(v___y_630_, v___x_671_);
v___x_673_ = lean_st_ref_get(v___y_632_);
v_env_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc_ref(v_env_674_);
lean_dec(v___x_673_);
v_checked_675_ = lean_ctor_get(v_env_674_, 2);
lean_inc_ref(v_checked_675_);
lean_dec_ref(v_env_674_);
v___x_676_ = ((lean_object*)(l_Lean_Meta_evalExprCore___redArg___lam__0___closed__4));
v___x_677_ = l_Lean_traceBlock___redArg(v___x_676_, v_checked_675_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v_toCold_678_; uint8_t v_isRecordingDeps_679_; lean_object* v_options_680_; uint8_t v___x_681_; uint8_t v___x_682_; 
lean_dec_ref_known(v___x_677_, 1);
v_toCold_678_ = lean_ctor_get(v___y_631_, 0);
v_isRecordingDeps_679_ = lean_ctor_get_uint8(v___y_631_, sizeof(void*)*3 + 3);
v_options_680_ = lean_ctor_get(v_toCold_678_, 2);
v___x_681_ = 1;
v___x_682_ = 0;
if (v_isRecordingDeps_679_ == 0)
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = l_Lean_Elab_async;
lean_inc_ref(v_options_680_);
v___x_684_ = l_Lean_Option_set___at___00Lean_Meta_evalExprCore_spec__3(v_options_680_, v___x_683_, v_isRecordingDeps_679_);
v___y_606_ = v___x_681_;
v___y_607_ = v___x_656_;
v___y_608_ = v___x_682_;
v___y_609_ = v___y_627_;
v___y_610_ = v___y_632_;
v___y_611_ = v___x_641_;
v___y_612_ = v___y_629_;
v___y_613_ = v___y_631_;
v___y_614_ = v___y_630_;
v___y_615_ = v___x_684_;
goto v___jp_605_;
}
else
{
lean_object* v___x_685_; 
lean_inc_ref(v_options_680_);
v___x_685_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_680_);
v___y_606_ = v___x_681_;
v___y_607_ = v___x_656_;
v___y_608_ = v___x_682_;
v___y_609_ = v___y_627_;
v___y_610_ = v___y_632_;
v___y_611_ = v___x_641_;
v___y_612_ = v___y_629_;
v___y_613_ = v___y_631_;
v___y_614_ = v___y_630_;
v___y_615_ = v___x_685_;
goto v___jp_605_;
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref_known(v___x_641_, 1);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_627_);
v_a_686_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_677_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_677_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
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
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
lean_dec(v_a_634_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
v_a_700_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_635_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_635_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec_ref(v_checkType_262_);
v_a_708_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_633_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_633_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
v___jp_716_:
{
lean_object* v___x_717_; lean_object* v_env_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_717_ = lean_st_ref_get(v___y_268_);
v_env_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc_ref(v_env_718_);
lean_dec(v___x_717_);
v___x_719_ = ((lean_object*)(l_Lean_Meta_evalExprCore___redArg___lam__0___closed__6));
v___x_720_ = l_Lean_Core_mkFreshUserName(v___x_719_, v___y_267_, v___y_268_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_a_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_a_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_a_721_);
lean_dec_ref_known(v___x_720_, 1);
v___x_722_ = l_Lean_mkPrivateName(v_env_718_, v_a_721_);
lean_dec_ref(v_env_718_);
v___x_723_ = l_Lean_instantiateMVars___at___00Lean_Meta_evalExprCore_spec__0___redArg(v_value_264_, v___y_266_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v_params_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc_n(v_a_724_, 2);
lean_dec_ref_known(v___x_723_, 1);
v___x_725_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__10);
v___x_726_ = l_Lean_collectLevelParams(v___x_725_, v_a_724_);
v_params_727_ = lean_ctor_get(v___x_726_, 2);
lean_inc_ref(v_params_727_);
lean_dec_ref(v___x_726_);
v___x_728_ = lean_box(0);
v___x_729_ = l_Lean_Expr_hasMVar(v_a_724_);
if (v___x_729_ == 0)
{
v___y_625_ = v___x_728_;
v___y_626_ = v_params_727_;
v___y_627_ = v___x_722_;
v___y_628_ = v_a_724_;
v___y_629_ = v___y_265_;
v___y_630_ = v___y_266_;
v___y_631_ = v___y_267_;
v___y_632_ = v___y_268_;
goto v___jp_624_;
}
else
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_730_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__12);
lean_inc(v_a_724_);
v___x_731_ = l_Lean_indentExpr(v_a_724_);
v___x_732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg(v___x_732_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_dec_ref_known(v___x_733_, 1);
v___y_625_ = v___x_728_;
v___y_626_ = v_params_727_;
v___y_627_ = v___x_722_;
v___y_628_ = v_a_724_;
v___y_629_ = v___y_265_;
v___y_630_ = v___y_266_;
v___y_631_ = v___y_267_;
v___y_632_ = v___y_268_;
goto v___jp_624_;
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_741_; 
lean_dec_ref(v_params_727_);
lean_dec(v_a_724_);
lean_dec(v___x_722_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec_ref(v_checkType_262_);
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_741_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_739_; 
if (v_isShared_737_ == 0)
{
v___x_739_ = v___x_736_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_a_734_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_dec(v___x_722_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec_ref(v_checkType_262_);
v_a_742_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_723_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_723_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec_ref(v_env_718_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec_ref(v_value_264_);
lean_dec_ref(v_checkType_262_);
v_a_750_ = lean_ctor_get(v___x_720_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_720_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_720_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
v___jp_758_:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v_mctx_772_; lean_object* v_zetaDeltaFVarIds_773_; lean_object* v_postponed_774_; lean_object* v_diag_775_; lean_object* v_rewriteFires_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_785_; 
v___x_768_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
v___x_769_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_769_, 0, v___y_767_);
lean_ctor_set(v___x_769_, 1, v_nextMacroScope_759_);
lean_ctor_set(v___x_769_, 2, v_ngen_760_);
lean_ctor_set(v___x_769_, 3, v_auxDeclNGen_761_);
lean_ctor_set(v___x_769_, 4, v_traceState_762_);
lean_ctor_set(v___x_769_, 5, v___x_768_);
lean_ctor_set(v___x_769_, 6, v_recordedDeps_763_);
lean_ctor_set(v___x_769_, 7, v_messages_764_);
lean_ctor_set(v___x_769_, 8, v_infoState_765_);
lean_ctor_set(v___x_769_, 9, v_snapshotTasks_766_);
v___x_770_ = lean_st_ref_put(v___y_268_, v___x_769_);
v___x_771_ = lean_st_ref_take(v___y_266_);
v_mctx_772_ = lean_ctor_get(v___x_771_, 0);
v_zetaDeltaFVarIds_773_ = lean_ctor_get(v___x_771_, 2);
v_postponed_774_ = lean_ctor_get(v___x_771_, 3);
v_diag_775_ = lean_ctor_get(v___x_771_, 4);
v_rewriteFires_776_ = lean_ctor_get(v___x_771_, 5);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_785_ == 0)
{
lean_object* v_unused_786_; 
v_unused_786_ = lean_ctor_get(v___x_771_, 1);
lean_dec(v_unused_786_);
v___x_778_ = v___x_771_;
v_isShared_779_ = v_isSharedCheck_785_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_rewriteFires_776_);
lean_inc(v_diag_775_);
lean_inc(v_postponed_774_);
lean_inc(v_zetaDeltaFVarIds_773_);
lean_inc(v_mctx_772_);
lean_dec(v___x_771_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_785_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_780_; lean_object* v___x_782_; 
v___x_780_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 1, v___x_780_);
v___x_782_ = v___x_778_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_mctx_772_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_784_, 2, v_zetaDeltaFVarIds_773_);
lean_ctor_set(v_reuseFailAlloc_784_, 3, v_postponed_774_);
lean_ctor_set(v_reuseFailAlloc_784_, 4, v_diag_775_);
lean_ctor_set(v_reuseFailAlloc_784_, 5, v_rewriteFires_776_);
v___x_782_ = v_reuseFailAlloc_784_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
lean_object* v___x_783_; 
v___x_783_ = lean_st_ref_put(v___y_266_, v___x_782_);
goto v___jp_716_;
}
}
}
v___jp_788_:
{
lean_object* v___x_789_; lean_object* v_env_790_; lean_object* v_nextMacroScope_791_; lean_object* v_ngen_792_; lean_object* v_auxDeclNGen_793_; lean_object* v_traceState_794_; lean_object* v_recordedDeps_795_; lean_object* v_messages_796_; lean_object* v_infoState_797_; lean_object* v_snapshotTasks_798_; lean_object* v___x_799_; 
v___x_789_ = lean_st_ref_take(v___y_268_);
v_env_790_ = lean_ctor_get(v___x_789_, 0);
lean_inc_ref_n(v_env_790_, 2);
v_nextMacroScope_791_ = lean_ctor_get(v___x_789_, 1);
lean_inc(v_nextMacroScope_791_);
v_ngen_792_ = lean_ctor_get(v___x_789_, 2);
lean_inc_ref(v_ngen_792_);
v_auxDeclNGen_793_ = lean_ctor_get(v___x_789_, 3);
lean_inc_ref(v_auxDeclNGen_793_);
v_traceState_794_ = lean_ctor_get(v___x_789_, 4);
lean_inc_ref(v_traceState_794_);
v_recordedDeps_795_ = lean_ctor_get(v___x_789_, 6);
lean_inc_ref(v_recordedDeps_795_);
v_messages_796_ = lean_ctor_get(v___x_789_, 7);
lean_inc_ref(v_messages_796_);
v_infoState_797_ = lean_ctor_get(v___x_789_, 8);
lean_inc_ref(v_infoState_797_);
v_snapshotTasks_798_ = lean_ctor_get(v___x_789_, 9);
lean_inc_ref(v_snapshotTasks_798_);
lean_dec(v___x_789_);
v___x_799_ = l_Lean_Environment_importEnv_x3f(v_env_790_);
if (lean_obj_tag(v___x_799_) == 0)
{
v_nextMacroScope_759_ = v_nextMacroScope_791_;
v_ngen_760_ = v_ngen_792_;
v_auxDeclNGen_761_ = v_auxDeclNGen_793_;
v_traceState_762_ = v_traceState_794_;
v_recordedDeps_763_ = v_recordedDeps_795_;
v_messages_764_ = v_messages_796_;
v_infoState_765_ = v_infoState_797_;
v_snapshotTasks_766_ = v_snapshotTasks_798_;
v___y_767_ = v_env_790_;
goto v___jp_758_;
}
else
{
lean_object* v_val_800_; 
lean_dec_ref(v_env_790_);
v_val_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_val_800_);
lean_dec_ref_known(v___x_799_, 1);
v_nextMacroScope_759_ = v_nextMacroScope_791_;
v_ngen_760_ = v_ngen_792_;
v_auxDeclNGen_761_ = v_auxDeclNGen_793_;
v_traceState_762_ = v_traceState_794_;
v_recordedDeps_763_ = v_recordedDeps_795_;
v_messages_764_ = v_messages_796_;
v_infoState_765_ = v_infoState_797_;
v_snapshotTasks_766_ = v_snapshotTasks_798_;
v___y_767_ = v_val_800_;
goto v___jp_758_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___lam__0___boxed(lean_object* v_checkMeta_809_, lean_object* v_checkType_810_, lean_object* v_safety_811_, lean_object* v_value_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
uint8_t v_checkMeta_boxed_818_; uint8_t v_safety_boxed_819_; lean_object* v_res_820_; 
v_checkMeta_boxed_818_ = lean_unbox(v_checkMeta_809_);
v_safety_boxed_819_ = lean_unbox(v_safety_811_);
v_res_820_ = l_Lean_Meta_evalExprCore___redArg___lam__0(v_checkMeta_boxed_818_, v_checkType_810_, v_safety_boxed_819_, v_value_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg(lean_object* v_env_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v___x_825_; lean_object* v_nextMacroScope_826_; lean_object* v_ngen_827_; lean_object* v_auxDeclNGen_828_; lean_object* v_traceState_829_; lean_object* v_recordedDeps_830_; lean_object* v_messages_831_; lean_object* v_infoState_832_; lean_object* v_snapshotTasks_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_860_; 
v___x_825_ = lean_st_ref_take(v___y_823_);
v_nextMacroScope_826_ = lean_ctor_get(v___x_825_, 1);
v_ngen_827_ = lean_ctor_get(v___x_825_, 2);
v_auxDeclNGen_828_ = lean_ctor_get(v___x_825_, 3);
v_traceState_829_ = lean_ctor_get(v___x_825_, 4);
v_recordedDeps_830_ = lean_ctor_get(v___x_825_, 6);
v_messages_831_ = lean_ctor_get(v___x_825_, 7);
v_infoState_832_ = lean_ctor_get(v___x_825_, 8);
v_snapshotTasks_833_ = lean_ctor_get(v___x_825_, 9);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_860_ == 0)
{
lean_object* v_unused_861_; lean_object* v_unused_862_; 
v_unused_861_ = lean_ctor_get(v___x_825_, 5);
lean_dec(v_unused_861_);
v_unused_862_ = lean_ctor_get(v___x_825_, 0);
lean_dec(v_unused_862_);
v___x_835_ = v___x_825_;
v_isShared_836_ = v_isSharedCheck_860_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_snapshotTasks_833_);
lean_inc(v_infoState_832_);
lean_inc(v_messages_831_);
lean_inc(v_recordedDeps_830_);
lean_inc(v_traceState_829_);
lean_inc(v_auxDeclNGen_828_);
lean_inc(v_ngen_827_);
lean_inc(v_nextMacroScope_826_);
lean_dec(v___x_825_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_860_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_837_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__2);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 5, v___x_837_);
lean_ctor_set(v___x_835_, 0, v_env_821_);
v___x_839_ = v___x_835_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_env_821_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v_nextMacroScope_826_);
lean_ctor_set(v_reuseFailAlloc_859_, 2, v_ngen_827_);
lean_ctor_set(v_reuseFailAlloc_859_, 3, v_auxDeclNGen_828_);
lean_ctor_set(v_reuseFailAlloc_859_, 4, v_traceState_829_);
lean_ctor_set(v_reuseFailAlloc_859_, 5, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_859_, 6, v_recordedDeps_830_);
lean_ctor_set(v_reuseFailAlloc_859_, 7, v_messages_831_);
lean_ctor_set(v_reuseFailAlloc_859_, 8, v_infoState_832_);
lean_ctor_set(v_reuseFailAlloc_859_, 9, v_snapshotTasks_833_);
v___x_839_ = v_reuseFailAlloc_859_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v_mctx_842_; lean_object* v_zetaDeltaFVarIds_843_; lean_object* v_postponed_844_; lean_object* v_diag_845_; lean_object* v_rewriteFires_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_857_; 
v___x_840_ = lean_st_ref_put(v___y_823_, v___x_839_);
v___x_841_ = lean_st_ref_take(v___y_822_);
v_mctx_842_ = lean_ctor_get(v___x_841_, 0);
v_zetaDeltaFVarIds_843_ = lean_ctor_get(v___x_841_, 2);
v_postponed_844_ = lean_ctor_get(v___x_841_, 3);
v_diag_845_ = lean_ctor_get(v___x_841_, 4);
v_rewriteFires_846_ = lean_ctor_get(v___x_841_, 5);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_857_ == 0)
{
lean_object* v_unused_858_; 
v_unused_858_ = lean_ctor_get(v___x_841_, 1);
lean_dec(v_unused_858_);
v___x_848_ = v___x_841_;
v_isShared_849_ = v_isSharedCheck_857_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_rewriteFires_846_);
lean_inc(v_diag_845_);
lean_inc(v_postponed_844_);
lean_inc(v_zetaDeltaFVarIds_843_);
lean_inc(v_mctx_842_);
lean_dec(v___x_841_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_857_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_853_; 
v___x_850_ = lean_box(0);
v___x_851_ = lean_obj_once(&l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3, &l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3_once, _init_l_Lean_Meta_evalExprCore___redArg___lam__0___closed__3);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v___x_851_);
v___x_853_ = v___x_848_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_mctx_842_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v___x_851_);
lean_ctor_set(v_reuseFailAlloc_856_, 2, v_zetaDeltaFVarIds_843_);
lean_ctor_set(v_reuseFailAlloc_856_, 3, v_postponed_844_);
lean_ctor_set(v_reuseFailAlloc_856_, 4, v_diag_845_);
lean_ctor_set(v_reuseFailAlloc_856_, 5, v_rewriteFires_846_);
v___x_853_ = v_reuseFailAlloc_856_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_st_ref_put(v___y_822_, v___x_853_);
v___x_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_850_);
return v___x_855_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg___boxed(lean_object* v_env_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg(v_env_863_, v___y_864_, v___y_865_);
lean_dec(v___y_865_);
lean_dec(v___y_864_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___redArg(lean_object* v_env_868_, lean_object* v_x_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_){
_start:
{
lean_object* v___x_875_; lean_object* v_env_876_; lean_object* v_a_878_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_875_ = lean_st_ref_get(v___y_873_);
v_env_876_ = lean_ctor_get(v___x_875_, 0);
lean_inc_ref(v_env_876_);
lean_dec(v___x_875_);
v___x_888_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg(v_env_868_, v___y_871_, v___y_873_);
lean_dec_ref(v___x_888_);
lean_inc(v___y_873_);
lean_inc_ref(v___y_872_);
lean_inc(v___y_871_);
lean_inc_ref(v___y_870_);
v___x_889_ = lean_apply_5(v_x_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, lean_box(0));
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_889_, 1);
v___x_891_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg(v_env_876_, v___y_871_, v___y_873_);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_898_ == 0)
{
lean_object* v_unused_899_; 
v_unused_899_ = lean_ctor_get(v___x_891_, 0);
lean_dec(v_unused_899_);
v___x_893_ = v___x_891_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_dec(v___x_891_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v_a_890_);
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_890_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
else
{
lean_object* v_a_900_; 
v_a_900_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_889_, 1);
v_a_878_ = v_a_900_;
goto v___jp_877_;
}
v___jp_877_:
{
lean_object* v___x_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
v___x_879_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg(v_env_876_, v___y_871_, v___y_873_);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; 
v_unused_887_ = lean_ctor_get(v___x_879_, 0);
lean_dec(v_unused_887_);
v___x_881_ = v___x_879_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_dec(v___x_879_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
lean_ctor_set_tag(v___x_881_, 1);
lean_ctor_set(v___x_881_, 0, v_a_878_);
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_878_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___redArg___boxed(lean_object* v_env_901_, lean_object* v_x_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___redArg(v_env_901_, v_x_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg(lean_object* v_value_909_, lean_object* v_checkType_910_, uint8_t v_safety_911_, uint8_t v_checkMeta_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___f_920_; lean_object* v___x_921_; lean_object* v_env_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_918_ = lean_box(v_checkMeta_912_);
v___x_919_ = lean_box(v_safety_911_);
v___f_920_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExprCore___redArg___lam__0___boxed), 9, 4);
lean_closure_set(v___f_920_, 0, v___x_918_);
lean_closure_set(v___f_920_, 1, v_checkType_910_);
lean_closure_set(v___f_920_, 2, v___x_919_);
lean_closure_set(v___f_920_, 3, v_value_909_);
v___x_921_ = lean_st_ref_get(v_a_916_);
v_env_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc_ref(v_env_922_);
lean_dec(v___x_921_);
v___x_923_ = l_Lean_Environment_unlockAsync(v_env_922_);
v___x_924_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___redArg(v___x_923_, v___f_920_, v_a_913_, v_a_914_, v_a_915_, v_a_916_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___redArg___boxed(lean_object* v_value_925_, lean_object* v_checkType_926_, lean_object* v_safety_927_, lean_object* v_checkMeta_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
uint8_t v_safety_boxed_934_; uint8_t v_checkMeta_boxed_935_; lean_object* v_res_936_; 
v_safety_boxed_934_ = lean_unbox(v_safety_927_);
v_checkMeta_boxed_935_ = lean_unbox(v_checkMeta_928_);
v_res_936_ = l_Lean_Meta_evalExprCore___redArg(v_value_925_, v_checkType_926_, v_safety_boxed_934_, v_checkMeta_boxed_935_, v_a_929_, v_a_930_, v_a_931_, v_a_932_);
lean_dec(v_a_932_);
lean_dec_ref(v_a_931_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore(lean_object* v_00_u03b1_937_, lean_object* v_value_938_, lean_object* v_checkType_939_, uint8_t v_safety_940_, uint8_t v_checkMeta_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = l_Lean_Meta_evalExprCore___redArg(v_value_938_, v_checkType_939_, v_safety_940_, v_checkMeta_941_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExprCore___boxed(lean_object* v_00_u03b1_948_, lean_object* v_value_949_, lean_object* v_checkType_950_, lean_object* v_safety_951_, lean_object* v_checkMeta_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_){
_start:
{
uint8_t v_safety_boxed_958_; uint8_t v_checkMeta_boxed_959_; lean_object* v_res_960_; 
v_safety_boxed_958_ = lean_unbox(v_safety_951_);
v_checkMeta_boxed_959_ = lean_unbox(v_checkMeta_952_);
v_res_960_ = l_Lean_Meta_evalExprCore(v_00_u03b1_948_, v_value_949_, v_checkType_950_, v_safety_boxed_958_, v_checkMeta_boxed_959_, v_a_953_, v_a_954_, v_a_955_, v_a_956_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3(lean_object* v_00_u03b1_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___redArg();
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3___boxed(lean_object* v_00_u03b1_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__3(v_00_u03b1_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2(lean_object* v_00_u03b1_975_, lean_object* v_constName_976_, uint8_t v_checkMeta_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___redArg(v_constName_976_, v_checkMeta_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2___boxed(lean_object* v_00_u03b1_984_, lean_object* v_constName_985_, lean_object* v_checkMeta_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
uint8_t v_checkMeta_boxed_992_; lean_object* v_res_993_; 
v_checkMeta_boxed_992_ = lean_unbox(v_checkMeta_986_);
v_res_993_ = l_Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2(v_00_u03b1_984_, v_constName_985_, v_checkMeta_boxed_992_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4(lean_object* v_00_u03b1_994_, lean_object* v_msg_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg(v_msg_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___boxed(lean_object* v_00_u03b1_1002_, lean_object* v_msg_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4(v_00_u03b1_1002_, v_msg_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10(lean_object* v_env_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
lean_object* v___x_1016_; 
v___x_1016_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___redArg(v_env_1010_, v___y_1012_, v___y_1014_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10___boxed(lean_object* v_env_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6_spec__10(v_env_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_);
lean_dec(v___y_1021_);
lean_dec_ref(v___y_1020_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6(lean_object* v_00_u03b1_1024_, lean_object* v_env_1025_, lean_object* v_x_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___redArg(v_env_1025_, v_x_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6___boxed(lean_object* v_00_u03b1_1033_, lean_object* v_env_1034_, lean_object* v_x_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_withEnv___at___00Lean_Meta_evalExprCore_spec__6(v_00_u03b1_1033_, v_env_1034_, v_x_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2(lean_object* v_00_u03b1_1042_, lean_object* v_x_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___redArg(v_x_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2___boxed(lean_object* v_00_u03b1_1050_, lean_object* v_x_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_evalExprCore_spec__2_spec__2(v_00_u03b1_1050_, v_x_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
return v_res_1057_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = ((lean_object*)(l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__0));
v___x_1060_ = l_Lean_stringToMessageData(v___x_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0(lean_object* v_typeName_1061_, lean_object* v_type_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_Meta_whnfD(v_type_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1082_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1071_ = v___x_1068_;
v_isShared_1072_ = v_isSharedCheck_1082_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1068_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1082_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
uint8_t v___x_1073_; 
v___x_1073_ = l_Lean_Expr_isConstOf(v_a_1069_, v_typeName_1061_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
lean_del_object(v___x_1071_);
v___x_1074_ = lean_obj_once(&l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1, &l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_evalExpr_x27___redArg___lam__0___closed__1);
v___x_1075_ = l_Lean_indentExpr(v_a_1069_);
v___x_1076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg(v___x_1076_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
return v___x_1077_;
}
else
{
lean_object* v___x_1078_; lean_object* v___x_1080_; 
lean_dec(v_a_1069_);
v___x_1078_ = lean_box(0);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 0, v___x_1078_);
v___x_1080_ = v___x_1071_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v___x_1078_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
v_a_1083_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1068_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1068_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed(lean_object* v_typeName_1091_, lean_object* v_type_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_Meta_evalExpr_x27___redArg___lam__0(v_typeName_1091_, v_type_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec(v_typeName_1091_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg(lean_object* v_typeName_1099_, lean_object* v_value_1100_, uint8_t v_safety_1101_, uint8_t v_checkMeta_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v___f_1108_; lean_object* v___x_1109_; 
v___f_1108_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExpr_x27___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1108_, 0, v_typeName_1099_);
v___x_1109_ = l_Lean_Meta_evalExprCore___redArg(v_value_1100_, v___f_1108_, v_safety_1101_, v_checkMeta_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___redArg___boxed(lean_object* v_typeName_1110_, lean_object* v_value_1111_, lean_object* v_safety_1112_, lean_object* v_checkMeta_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
uint8_t v_safety_boxed_1119_; uint8_t v_checkMeta_boxed_1120_; lean_object* v_res_1121_; 
v_safety_boxed_1119_ = lean_unbox(v_safety_1112_);
v_checkMeta_boxed_1120_ = lean_unbox(v_checkMeta_1113_);
v_res_1121_ = l_Lean_Meta_evalExpr_x27___redArg(v_typeName_1110_, v_value_1111_, v_safety_boxed_1119_, v_checkMeta_boxed_1120_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1116_);
lean_dec(v_a_1115_);
lean_dec_ref(v_a_1114_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27(lean_object* v_00_u03b1_1122_, lean_object* v_typeName_1123_, lean_object* v_value_1124_, uint8_t v_safety_1125_, uint8_t v_checkMeta_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_Meta_evalExpr_x27___redArg(v_typeName_1123_, v_value_1124_, v_safety_1125_, v_checkMeta_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr_x27___boxed(lean_object* v_00_u03b1_1133_, lean_object* v_typeName_1134_, lean_object* v_value_1135_, lean_object* v_safety_1136_, lean_object* v_checkMeta_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_){
_start:
{
uint8_t v_safety_boxed_1143_; uint8_t v_checkMeta_boxed_1144_; lean_object* v_res_1145_; 
v_safety_boxed_1143_ = lean_unbox(v_safety_1136_);
v_checkMeta_boxed_1144_ = lean_unbox(v_checkMeta_1137_);
v_res_1145_ = l_Lean_Meta_evalExpr_x27(v_00_u03b1_1133_, v_typeName_1134_, v_value_1135_, v_safety_boxed_1143_, v_checkMeta_boxed_1144_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
return v_res_1145_;
}
}
static lean_object* _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = ((lean_object*)(l_Lean_Meta_evalExpr___redArg___lam__0___closed__1));
v___x_1150_ = l_Lean_stringToMessageData(v___x_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0(lean_object* v_expectedType_1151_, lean_object* v_type_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v___x_1158_; 
lean_inc_ref(v_expectedType_1151_);
lean_inc_ref(v_type_1152_);
v___x_1158_ = l_Lean_Meta_isExprDefEq(v_type_1152_, v_expectedType_1151_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1183_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1161_ = v___x_1158_;
v_isShared_1162_ = v_isSharedCheck_1183_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1158_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1183_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
uint8_t v___x_1163_; 
v___x_1163_ = lean_unbox(v_a_1159_);
lean_dec(v_a_1159_);
if (v___x_1163_ == 0)
{
lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
lean_del_object(v___x_1161_);
v___x_1164_ = lean_box(0);
v___x_1165_ = ((lean_object*)(l_Lean_Meta_evalExpr___redArg___lam__0___closed__0));
v___x_1166_ = l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(v_type_1152_, v_expectedType_1151_, v___x_1164_, v___x_1165_, v___y_1153_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref_known(v___x_1166_, 1);
v___x_1168_ = lean_obj_once(&l_Lean_Meta_evalExpr___redArg___lam__0___closed__2, &l_Lean_Meta_evalExpr___redArg___lam__0___closed__2_once, _init_l_Lean_Meta_evalExpr___redArg___lam__0___closed__2);
v___x_1169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
lean_ctor_set(v___x_1169_, 1, v_a_1167_);
v___x_1170_ = l_Lean_throwError___at___00Lean_Meta_evalExprCore_spec__4___redArg(v___x_1169_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
return v___x_1170_;
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
v_a_1171_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1166_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1166_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1181_; 
lean_dec_ref(v_type_1152_);
lean_dec_ref(v_expectedType_1151_);
v___x_1179_ = lean_box(0);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1179_);
v___x_1181_ = v___x_1161_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
lean_dec_ref(v_type_1152_);
lean_dec_ref(v_expectedType_1151_);
v_a_1184_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1158_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1158_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___lam__0___boxed(lean_object* v_expectedType_1192_, lean_object* v_type_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_Meta_evalExpr___redArg___lam__0(v_expectedType_1192_, v_type_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg(lean_object* v_expectedType_1200_, lean_object* v_value_1201_, uint8_t v_safety_1202_, uint8_t v_checkMeta_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v___f_1209_; lean_object* v___x_1210_; 
v___f_1209_ = lean_alloc_closure((void*)(l_Lean_Meta_evalExpr___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1209_, 0, v_expectedType_1200_);
v___x_1210_ = l_Lean_Meta_evalExprCore___redArg(v_value_1201_, v___f_1209_, v_safety_1202_, v_checkMeta_1203_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___redArg___boxed(lean_object* v_expectedType_1211_, lean_object* v_value_1212_, lean_object* v_safety_1213_, lean_object* v_checkMeta_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_){
_start:
{
uint8_t v_safety_boxed_1220_; uint8_t v_checkMeta_boxed_1221_; lean_object* v_res_1222_; 
v_safety_boxed_1220_ = lean_unbox(v_safety_1213_);
v_checkMeta_boxed_1221_ = lean_unbox(v_checkMeta_1214_);
v_res_1222_ = l_Lean_Meta_evalExpr___redArg(v_expectedType_1211_, v_value_1212_, v_safety_boxed_1220_, v_checkMeta_boxed_1221_, v_a_1215_, v_a_1216_, v_a_1217_, v_a_1218_);
lean_dec(v_a_1218_);
lean_dec_ref(v_a_1217_);
lean_dec(v_a_1216_);
lean_dec_ref(v_a_1215_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr(lean_object* v_00_u03b1_1223_, lean_object* v_expectedType_1224_, lean_object* v_value_1225_, uint8_t v_safety_1226_, uint8_t v_checkMeta_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_){
_start:
{
lean_object* v___x_1233_; 
v___x_1233_ = l_Lean_Meta_evalExpr___redArg(v_expectedType_1224_, v_value_1225_, v_safety_1226_, v_checkMeta_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_evalExpr___boxed(lean_object* v_00_u03b1_1234_, lean_object* v_expectedType_1235_, lean_object* v_value_1236_, lean_object* v_safety_1237_, lean_object* v_checkMeta_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_){
_start:
{
uint8_t v_safety_boxed_1244_; uint8_t v_checkMeta_boxed_1245_; lean_object* v_res_1246_; 
v_safety_boxed_1244_ = lean_unbox(v_safety_1237_);
v_checkMeta_boxed_1245_ = lean_unbox(v_checkMeta_1238_);
v_res_1246_ = l_Lean_Meta_evalExpr(v_00_u03b1_1234_, v_expectedType_1235_, v_value_1236_, v_safety_boxed_1244_, v_checkMeta_boxed_1245_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
lean_dec(v_a_1242_);
lean_dec_ref(v_a_1241_);
lean_dec(v_a_1240_);
lean_dec_ref(v_a_1239_);
return v_res_1246_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Eval(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Eval(builtin);
}
#ifdef __cplusplus
}
#endif

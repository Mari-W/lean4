// Lean compiler output
// Module: Lean.AddDecl
// Imports: public import Lean.Meta.Sorry public import Lean.Util.CollectAxioms public import Lean.OriginalConstKind public import Lean.AutoDecl public import Lean.RewriteRules import Lean.Linter.Init import Lean.Compiler.MetaAttr import Lean.Util.RecDepth import all Lean.OriginalConstKind
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
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getSorry_x3f(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Declaration_getTopLevelNames(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Declaration_getNames(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_debug_skipKernelTC;
lean_object* l_Lean_Environment_addDeclCore(lean_object*, size_t, size_t, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Expr_isSyntheticSorry(lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
uint8_t l_Lean_Declaration_hasSorry(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_getExplicitRewriteRules(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Environment_registerNamespace(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
uint8_t l_Lean_instBEqDefinitionSafety_beq(uint8_t, uint8_t);
extern lean_object* l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_AddConstAsyncResult_commitConst(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_async;
lean_object* l_IO_CancelToken_new();
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Core_wrapAsyncAsSnapshot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_addConstAsync(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t);
uint8_t l_Lean_ConstantKind_ofConstantInfo(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Declaration_rewriteConsts(lean_object*);
lean_object* l_Lean_Environment_closeRewriteSet(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_recordRewriteSet(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasRewriteRules(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic;
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* lean_elab_environment_to_kernel_env(lean_object*);
lean_object* lean_add_decl(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_add_decl_without_checking(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_envLinterOptionsRef;
lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_envLinterSnapshotExt;
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_recordRewriteSets_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_recordRewriteSets(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__0;
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__1;
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__2;
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_AddDecl_0__Lean_isNamespaceName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_isNamespaceName___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(187, 250, 156, 61, 219, 107, 141, 135)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 28, 133, 152, 90, 118, 109, 25)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "warn about uses of `sorry` in declarations added to the environment"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(218, 70, 28, 226, 178, 151, 16, 11)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(239, 41, 235, 79, 240, 234, 67, 166)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_warn_sorry;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0 = (const lean_object*)&l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_warnIfUsesSorry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_warnIfUsesSorry___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_warnIfUsesSorry___closed__0 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__0_value;
static const lean_array_object l_Lean_warnIfUsesSorry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__1 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__1_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__2;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__3;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__4;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__5;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__6;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__7;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hasSorry"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__8 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__8_value;
static const lean_ctor_object l_Lean_warnIfUsesSorry___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_warnIfUsesSorry___closed__8_value),LEAN_SCALAR_PTR_LITERAL(111, 250, 94, 52, 248, 92, 138, 251)}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__9 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__9_value;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "declaration uses `"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__10 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__10_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__11;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__12 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__12_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__13;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "declaration uses `sorry`"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__14 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__14_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__15;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__16;
static const lean_ctor_object l_Lean_warnIfUsesSorry___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__17 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "addDecl"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 231, 4, 60, 254, 77, 195, 237)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "AddDecl"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(15, 97, 208, 69, 128, 127, 228, 3)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(162, 171, 242, 31, 173, 26, 83, 224)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(131, 0, 147, 169, 205, 191, 49, 101)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(226, 50, 5, 71, 0, 154, 50, 2)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 66, 231, 246, 189, 183, 24, 140)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(86, 225, 3, 95, 219, 217, 43, 37)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 165, 226, 64, 111, 214, 252, 38)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)(((size_t)(337188874) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(137, 24, 7, 166, 250, 194, 253, 69)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 77, 113, 4, 170, 120, 135, 144)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(102, 231, 39, 100, 49, 121, 171, 214)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(167, 65, 246, 223, 87, 31, 234, 242)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordOriginalConstKind(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordOriginalConstKind___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sorryAx"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 190, 164, 146, 38, 179, 69, 72)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12;
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__15 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "typechecking declarations "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "type checking"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0_value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Kernel"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(213, 59, 86, 63, 192, 192, 9, 44)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "adding declarations "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "no matching async adding rules, adding synchronously"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___boxed(lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "addDeclCore"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0_value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 15, 132, 113, 234, 47, 152, 164)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "no matching exporting rules, exporting as is"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "not exporting private declaration at all"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "private decl under `privateInPublic`, exporting as is"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "exporting definition "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " as axiom"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "exporting theorem "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "exporting opaque "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAndCompile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref_known(v_val_8_, 0);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(lean_object* v_opts_15_, lean_object* v_opt_16_){
_start:
{
lean_object* v_name_17_; lean_object* v_defValue_18_; lean_object* v_map_19_; lean_object* v___x_20_; 
v_name_17_ = lean_ctor_get(v_opt_16_, 0);
v_defValue_18_ = lean_ctor_get(v_opt_16_, 1);
v_map_19_ = lean_ctor_get(v_opts_15_, 0);
v___x_20_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_19_, v_name_17_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
else
{
lean_object* v_val_21_; 
v_val_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_val_21_);
lean_dec_ref_known(v___x_20_, 1);
if (lean_obj_tag(v_val_21_) == 3)
{
lean_object* v_v_22_; 
v_v_22_ = lean_ctor_get(v_val_21_, 0);
lean_inc(v_v_22_);
lean_dec_ref_known(v_val_21_, 1);
return v_v_22_;
}
else
{
lean_dec(v_val_21_);
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1___boxed(lean_object* v_opts_23_, lean_object* v_opt_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_23_, v_opt_24_);
lean_dec_ref(v_opt_24_);
lean_dec_ref(v_opts_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl(lean_object* v_env_26_, lean_object* v_opts_27_, lean_object* v_decl_28_, lean_object* v_cancelTk_x3f_29_, lean_object* v_rules_30_){
_start:
{
lean_object* v___x_31_; uint8_t v___x_32_; 
v___x_31_ = l_Lean_debug_skipKernelTC;
v___x_32_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_27_, v___x_31_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; size_t v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; size_t v___x_37_; lean_object* v___x_38_; 
v___x_33_ = l_Lean_Core_getMaxHeartbeats(v_opts_27_);
v___x_34_ = lean_usize_of_nat(v___x_33_);
lean_dec(v___x_33_);
v___x_35_ = l_Lean_maxRecDepth;
v___x_36_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_27_, v___x_35_);
v___x_37_ = lean_usize_of_nat(v___x_36_);
lean_dec(v___x_36_);
v___x_38_ = lean_add_decl(v_env_26_, v___x_34_, v___x_37_, v_decl_28_, v_cancelTk_x3f_29_, v_rules_30_);
return v___x_38_;
}
else
{
lean_object* v___x_39_; 
v___x_39_ = lean_add_decl_without_checking(v_env_26_, v_decl_28_, v_rules_30_);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl___boxed(lean_object* v_env_40_, lean_object* v_opts_41_, lean_object* v_decl_42_, lean_object* v_cancelTk_x3f_43_, lean_object* v_rules_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_Kernel_Environment_addDecl(v_env_40_, v_opts_41_, v_decl_42_, v_cancelTk_x3f_43_, v_rules_44_);
lean_dec(v_cancelTk_x3f_43_);
lean_dec(v_decl_42_);
lean_dec_ref(v_opts_41_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(lean_object* v_env_46_, lean_object* v_opts_47_, lean_object* v_decl_48_, lean_object* v_cancelTk_x3f_49_, lean_object* v_rules_50_){
_start:
{
lean_object* v___x_51_; size_t v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; size_t v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_51_ = l_Lean_Core_getMaxHeartbeats(v_opts_47_);
v___x_52_ = lean_usize_of_nat(v___x_51_);
lean_dec(v___x_51_);
v___x_53_ = l_Lean_maxRecDepth;
v___x_54_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_47_, v___x_53_);
v___x_55_ = lean_usize_of_nat(v___x_54_);
lean_dec(v___x_54_);
v___x_56_ = l_Lean_debug_skipKernelTC;
v___x_57_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_47_, v___x_56_);
if (v___x_57_ == 0)
{
uint8_t v___x_58_; lean_object* v___x_59_; 
v___x_58_ = 1;
v___x_59_ = l_Lean_Environment_addDeclCore(v_env_46_, v___x_52_, v___x_55_, v_decl_48_, v_cancelTk_x3f_49_, v___x_58_, v_rules_50_);
return v___x_59_;
}
else
{
uint8_t v___x_60_; lean_object* v___x_61_; 
v___x_60_ = 0;
v___x_61_ = l_Lean_Environment_addDeclCore(v_env_46_, v___x_52_, v___x_55_, v_decl_48_, v_cancelTk_x3f_49_, v___x_60_, v_rules_50_);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux___boxed(lean_object* v_env_62_, lean_object* v_opts_63_, lean_object* v_decl_64_, lean_object* v_cancelTk_x3f_65_, lean_object* v_rules_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_62_, v_opts_63_, v_decl_64_, v_cancelTk_x3f_65_, v_rules_66_);
lean_dec_ref(v_rules_66_);
lean_dec(v_cancelTk_x3f_65_);
lean_dec(v_decl_64_);
lean_dec_ref(v_opts_63_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_recordRewriteSets_spec__0(lean_object* v_set_68_, lean_object* v_x_69_, lean_object* v_x_70_){
_start:
{
if (lean_obj_tag(v_x_70_) == 0)
{
lean_dec_ref(v_set_68_);
return v_x_69_;
}
else
{
lean_object* v_head_71_; lean_object* v_tail_72_; lean_object* v___x_73_; 
v_head_71_ = lean_ctor_get(v_x_70_, 0);
lean_inc(v_head_71_);
v_tail_72_ = lean_ctor_get(v_x_70_, 1);
lean_inc(v_tail_72_);
lean_dec_ref_known(v_x_70_, 2);
lean_inc_ref(v_set_68_);
v___x_73_ = l_Lean_Environment_recordRewriteSet(v_x_69_, v_head_71_, v_set_68_);
v_x_69_ = v___x_73_;
v_x_70_ = v_tail_72_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_recordRewriteSets(lean_object* v_decl_75_, lean_object* v_rules_76_, lean_object* v_env_77_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_83_ = lean_array_get_size(v_rules_76_);
v___x_84_ = lean_unsigned_to_nat(0u);
v___x_85_ = lean_nat_dec_eq(v___x_83_, v___x_84_);
if (v___x_85_ == 0)
{
goto v___jp_78_;
}
else
{
uint8_t v___x_86_; 
lean_inc_ref(v_env_77_);
v___x_86_ = l_Lean_Environment_hasRewriteRules(v_env_77_);
if (v___x_86_ == 0)
{
lean_dec_ref(v_rules_76_);
lean_dec(v_decl_75_);
return v_env_77_;
}
else
{
goto v___jp_78_;
}
}
v___jp_78_:
{
lean_object* v___x_79_; lean_object* v_set_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
lean_inc(v_decl_75_);
v___x_79_ = l_Lean_Declaration_rewriteConsts(v_decl_75_);
lean_inc_ref(v_env_77_);
v_set_80_ = l_Lean_Environment_closeRewriteSet(v_env_77_, v_rules_76_, v___x_79_);
v___x_81_ = l_Lean_Declaration_getNames(v_decl_75_);
v___x_82_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_recordRewriteSets_spec__0(v_set_80_, v_env_77_, v___x_81_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(lean_object* v_a_87_, lean_object* v_as_88_, size_t v_sz_89_, size_t v_i_90_, lean_object* v_b_91_){
_start:
{
uint8_t v___x_93_; 
v___x_93_ = lean_usize_dec_lt(v_i_90_, v_sz_89_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; 
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v_b_91_);
return v___x_94_;
}
else
{
lean_object* v_a_95_; lean_object* v_name_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; size_t v___x_100_; size_t v___x_101_; 
v_a_95_ = lean_array_uget_borrowed(v_as_88_, v_i_90_);
v_name_96_ = lean_ctor_get(v_a_95_, 0);
v___x_97_ = l_Lean_Linter_getLinterValue(v_a_95_, v_a_87_);
v___x_98_ = lean_box(v___x_97_);
lean_inc(v_name_96_);
v___x_99_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_96_, v___x_98_, v_b_91_);
v___x_100_ = ((size_t)1ULL);
v___x_101_ = lean_usize_add(v_i_90_, v___x_100_);
v_i_90_ = v___x_101_;
v_b_91_ = v___x_99_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg___boxed(lean_object* v_a_103_, lean_object* v_as_104_, lean_object* v_sz_105_, lean_object* v_i_106_, lean_object* v_b_107_, lean_object* v___y_108_){
_start:
{
size_t v_sz_boxed_109_; size_t v_i_boxed_110_; lean_object* v_res_111_; 
v_sz_boxed_109_ = lean_unbox_usize(v_sz_105_);
lean_dec(v_sz_105_);
v_i_boxed_110_ = lean_unbox_usize(v_i_106_);
lean_dec(v_i_106_);
v_res_111_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_103_, v_as_104_, v_sz_boxed_109_, v_i_boxed_110_, v_b_107_);
lean_dec_ref(v_as_104_);
lean_dec_ref(v_a_103_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(lean_object* v_o_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v_env_117_; lean_object* v___x_118_; lean_object* v_toEnvExtension_119_; lean_object* v_asyncMode_120_; lean_object* v___x_121_; uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v_merged_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_132_; 
v___x_115_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_116_ = lean_st_ref_get(v___y_113_);
v_env_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc_ref(v_env_117_);
lean_dec(v___x_116_);
v___x_118_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_119_ = lean_ctor_get(v___x_118_, 0);
v_asyncMode_120_ = lean_ctor_get(v_toEnvExtension_119_, 2);
v___x_121_ = lean_box(0);
v___x_122_ = 0;
v___x_123_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_115_, v___x_118_, v_env_117_, v_asyncMode_120_, v___x_121_, v___x_122_);
v_merged_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_132_ == 0)
{
lean_object* v_unused_133_; 
v_unused_133_ = lean_ctor_get(v___x_123_, 1);
lean_dec(v_unused_133_);
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_132_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_merged_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_132_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 1, v_merged_124_);
lean_ctor_set(v___x_126_, 0, v_o_112_);
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_o_112_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v_merged_124_);
v___x_129_ = v_reuseFailAlloc_131_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_130_; 
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___boxed(lean_object* v_o_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v_o_134_, v___y_135_);
lean_dec(v___y_135_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_138_);
v___x_142_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v___x_141_, v___y_139_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0___boxed(lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
return v_res_146_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__0(void){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_147_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__1(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__2(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__1, &l_Lean_snapshotEnvLinterOptions___closed__1_once, _init_l_Lean_snapshotEnvLinterOptions___closed__1);
v___x_151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v___x_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions(lean_object* v_declName_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_156_ = l_Lean_Linter_envLinterOptionsRef;
v___x_157_ = lean_st_ref_get(v___x_156_);
v___x_158_ = lean_array_get_size(v___x_157_);
v___x_159_ = lean_unsigned_to_nat(0u);
v___x_160_ = lean_nat_dec_eq(v___x_158_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v_a_162_; lean_object* v___x_163_; 
v___x_161_ = l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(v_a_153_, v_a_154_);
v_a_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_a_162_);
lean_dec_ref(v___x_161_);
lean_inc(v_declName_152_);
v___x_163_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_declName_152_, v_a_154_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_217_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_217_ == 0)
{
v___x_166_ = v___x_163_;
v_isShared_167_ = v_isSharedCheck_217_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_163_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_217_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
uint8_t v___x_168_; 
v___x_168_ = lean_unbox(v_a_164_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; size_t v_sz_170_; size_t v___x_171_; lean_object* v___x_172_; 
lean_del_object(v___x_166_);
v___x_169_ = lean_box(1);
v_sz_170_ = lean_array_size(v___x_157_);
v___x_171_ = ((size_t)0ULL);
v___x_172_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_162_, v___x_157_, v_sz_170_, v___x_171_, v___x_169_);
lean_dec(v___x_157_);
lean_dec(v_a_162_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_204_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_204_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_204_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_204_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v_env_178_; lean_object* v_nextMacroScope_179_; lean_object* v_ngen_180_; lean_object* v_auxDeclNGen_181_; lean_object* v_traceState_182_; lean_object* v_recordedDeps_183_; lean_object* v_messages_184_; lean_object* v_infoState_185_; lean_object* v_snapshotTasks_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_202_; 
v___x_177_ = lean_st_ref_take(v_a_154_);
v_env_178_ = lean_ctor_get(v___x_177_, 0);
v_nextMacroScope_179_ = lean_ctor_get(v___x_177_, 1);
v_ngen_180_ = lean_ctor_get(v___x_177_, 2);
v_auxDeclNGen_181_ = lean_ctor_get(v___x_177_, 3);
v_traceState_182_ = lean_ctor_get(v___x_177_, 4);
v_recordedDeps_183_ = lean_ctor_get(v___x_177_, 6);
v_messages_184_ = lean_ctor_get(v___x_177_, 7);
v_infoState_185_ = lean_ctor_get(v___x_177_, 8);
v_snapshotTasks_186_ = lean_ctor_get(v___x_177_, 9);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_202_ == 0)
{
lean_object* v_unused_203_; 
v_unused_203_ = lean_ctor_get(v___x_177_, 5);
lean_dec(v_unused_203_);
v___x_188_ = v___x_177_;
v_isShared_189_ = v_isSharedCheck_202_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_snapshotTasks_186_);
lean_inc(v_infoState_185_);
lean_inc(v_messages_184_);
lean_inc(v_recordedDeps_183_);
lean_inc(v_traceState_182_);
lean_inc(v_auxDeclNGen_181_);
lean_inc(v_ngen_180_);
lean_inc(v_nextMacroScope_179_);
lean_inc(v_env_178_);
lean_dec(v___x_177_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_202_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_196_; 
v___x_190_ = lean_box(0);
v___x_191_ = l_Lean_Linter_envLinterSnapshotExt;
v___x_192_ = lean_unbox(v_a_164_);
lean_dec(v_a_164_);
v___x_193_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_191_, v_env_178_, v_declName_152_, v_a_173_, v___x_192_);
v___x_194_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 5, v___x_194_);
lean_ctor_set(v___x_188_, 0, v___x_193_);
v___x_196_ = v___x_188_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_201_, 1, v_nextMacroScope_179_);
lean_ctor_set(v_reuseFailAlloc_201_, 2, v_ngen_180_);
lean_ctor_set(v_reuseFailAlloc_201_, 3, v_auxDeclNGen_181_);
lean_ctor_set(v_reuseFailAlloc_201_, 4, v_traceState_182_);
lean_ctor_set(v_reuseFailAlloc_201_, 5, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_201_, 6, v_recordedDeps_183_);
lean_ctor_set(v_reuseFailAlloc_201_, 7, v_messages_184_);
lean_ctor_set(v_reuseFailAlloc_201_, 8, v_infoState_185_);
lean_ctor_set(v_reuseFailAlloc_201_, 9, v_snapshotTasks_186_);
v___x_196_ = v_reuseFailAlloc_201_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_object* v___x_197_; lean_object* v___x_199_; 
v___x_197_ = lean_st_ref_put(v_a_154_, v___x_196_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_190_);
v___x_199_ = v___x_175_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_190_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
lean_dec(v_a_164_);
lean_dec(v_declName_152_);
v_a_205_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_172_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_172_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
else
{
lean_object* v___x_213_; lean_object* v___x_215_; 
lean_dec(v_a_164_);
lean_dec(v_a_162_);
lean_dec(v___x_157_);
lean_dec(v_declName_152_);
v___x_213_ = lean_box(0);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 0, v___x_213_);
v___x_215_ = v___x_166_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_213_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
else
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
lean_dec(v_a_162_);
lean_dec(v___x_157_);
lean_dec(v_declName_152_);
v_a_218_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_163_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_163_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
}
else
{
lean_object* v___x_226_; lean_object* v___x_227_; 
lean_dec(v___x_157_);
lean_dec(v_declName_152_);
v___x_226_ = lean_box(0);
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions___boxed(lean_object* v_declName_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_snapshotEnvLinterOptions(v_declName_228_, v_a_229_, v_a_230_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(lean_object* v_o_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v_o_233_, v___y_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___boxed(lean_object* v_o_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(v_o_238_, v___y_239_, v___y_240_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(lean_object* v_a_243_, lean_object* v_as_244_, size_t v_sz_245_, size_t v_i_246_, lean_object* v_b_247_, lean_object* v___y_248_, lean_object* v___y_249_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_243_, v_as_244_, v_sz_245_, v_i_246_, v_b_247_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___boxed(lean_object* v_a_252_, lean_object* v_as_253_, lean_object* v_sz_254_, lean_object* v_i_255_, lean_object* v_b_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
size_t v_sz_boxed_260_; size_t v_i_boxed_261_; lean_object* v_res_262_; 
v_sz_boxed_260_ = lean_unbox_usize(v_sz_254_);
lean_dec(v_sz_254_);
v_i_boxed_261_ = lean_unbox_usize(v_i_255_);
lean_dec(v_i_255_);
v_res_262_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(v_a_252_, v_as_253_, v_sz_boxed_260_, v_i_boxed_261_, v_b_256_, v___y_257_, v___y_258_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec_ref(v_as_253_);
lean_dec_ref(v_a_252_);
return v_res_262_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_AddDecl_0__Lean_isNamespaceName(lean_object* v_x_263_){
_start:
{
if (lean_obj_tag(v_x_263_) == 1)
{
lean_object* v_pre_264_; 
v_pre_264_ = lean_ctor_get(v_x_263_, 0);
if (lean_obj_tag(v_pre_264_) == 0)
{
uint8_t v___x_265_; 
v___x_265_ = 1;
return v___x_265_;
}
else
{
v_x_263_ = v_pre_264_;
goto _start;
}
}
else
{
uint8_t v___x_267_; 
v___x_267_ = 0;
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_isNamespaceName___boxed(lean_object* v_x_268_){
_start:
{
uint8_t v_res_269_; lean_object* v_r_270_; 
v_res_269_ = l___private_Lean_AddDecl_0__Lean_isNamespaceName(v_x_268_);
lean_dec(v_x_268_);
v_r_270_ = lean_box(v_res_269_);
return v_r_270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(lean_object* v_env_271_, lean_object* v_x_272_){
_start:
{
if (lean_obj_tag(v_x_272_) == 1)
{
lean_object* v_pre_273_; uint8_t v___x_274_; 
v_pre_273_ = lean_ctor_get(v_x_272_, 0);
lean_inc(v_pre_273_);
lean_dec_ref_known(v_x_272_, 2);
v___x_274_ = l___private_Lean_AddDecl_0__Lean_isNamespaceName(v_pre_273_);
if (v___x_274_ == 0)
{
lean_dec(v_pre_273_);
return v_env_271_;
}
else
{
lean_object* v___x_275_; 
lean_inc(v_pre_273_);
v___x_275_ = l_Lean_Environment_registerNamespace(v_env_271_, v_pre_273_);
v_env_271_ = v___x_275_;
v_x_272_ = v_pre_273_;
goto _start;
}
}
else
{
lean_dec(v_x_272_);
return v_env_271_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(lean_object* v_env_277_, lean_object* v_name_278_){
_start:
{
lean_object* v_name_279_; uint32_t v___y_281_; 
v_name_279_ = l_Lean_privateToUserName(v_name_278_);
if (lean_obj_tag(v_name_279_) == 1)
{
lean_object* v_str_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v_str_285_ = lean_ctor_get(v_name_279_, 1);
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = lean_string_utf8_byte_size(v_str_285_);
lean_inc_ref(v_str_285_);
v___x_288_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_288_, 0, v_str_285_);
lean_ctor_set(v___x_288_, 1, v___x_286_);
lean_ctor_set(v___x_288_, 2, v___x_287_);
v___x_289_ = l_String_Slice_Pos_get_x3f(v___x_288_, v___x_286_);
lean_dec_ref_known(v___x_288_, 3);
if (lean_obj_tag(v___x_289_) == 0)
{
uint32_t v___x_290_; 
v___x_290_ = 65;
v___y_281_ = v___x_290_;
goto v___jp_280_;
}
else
{
lean_object* v_val_291_; uint32_t v___x_292_; 
v_val_291_ = lean_ctor_get(v___x_289_, 0);
lean_inc(v_val_291_);
lean_dec_ref_known(v___x_289_, 1);
v___x_292_ = lean_unbox_uint32(v_val_291_);
lean_dec(v_val_291_);
v___y_281_ = v___x_292_;
goto v___jp_280_;
}
}
else
{
lean_dec(v_name_279_);
return v_env_277_;
}
v___jp_280_:
{
uint32_t v___x_282_; uint8_t v___x_283_; 
v___x_282_ = 95;
v___x_283_ = lean_uint32_dec_eq(v___y_281_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; 
v___x_284_ = l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(v_env_277_, v_name_279_);
return v___x_284_;
}
else
{
lean_dec(v_name_279_);
return v_env_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(lean_object* v_name_293_, lean_object* v_decl_294_, lean_object* v_ref_295_){
_start:
{
lean_object* v_defValue_297_; lean_object* v_descr_298_; lean_object* v_deprecation_x3f_299_; lean_object* v___x_300_; uint8_t v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v_defValue_297_ = lean_ctor_get(v_decl_294_, 0);
v_descr_298_ = lean_ctor_get(v_decl_294_, 1);
v_deprecation_x3f_299_ = lean_ctor_get(v_decl_294_, 2);
v___x_300_ = lean_alloc_ctor(1, 0, 1);
v___x_301_ = lean_unbox(v_defValue_297_);
lean_ctor_set_uint8(v___x_300_, 0, v___x_301_);
lean_inc(v_deprecation_x3f_299_);
lean_inc_ref(v_descr_298_);
lean_inc_n(v_name_293_, 2);
v___x_302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_302_, 0, v_name_293_);
lean_ctor_set(v___x_302_, 1, v_ref_295_);
lean_ctor_set(v___x_302_, 2, v___x_300_);
lean_ctor_set(v___x_302_, 3, v_descr_298_);
lean_ctor_set(v___x_302_, 4, v_deprecation_x3f_299_);
v___x_303_ = lean_register_option(v_name_293_, v___x_302_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_311_; 
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; 
v_unused_312_ = lean_ctor_get(v___x_303_, 0);
lean_dec(v_unused_312_);
v___x_305_ = v___x_303_;
v_isShared_306_ = v_isSharedCheck_311_;
goto v_resetjp_304_;
}
else
{
lean_dec(v___x_303_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_311_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v___x_309_; 
lean_inc(v_defValue_297_);
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v_name_293_);
lean_ctor_set(v___x_307_, 1, v_defValue_297_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_307_);
v___x_309_ = v___x_305_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v_name_293_);
v_a_313_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_303_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_303_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_321_, lean_object* v_decl_322_, lean_object* v_ref_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(v_name_321_, v_decl_322_, v_ref_323_);
lean_dec_ref(v_decl_322_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_343_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_344_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_345_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_346_ = l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(v___x_343_, v___x_344_, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4____boxed(lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(lean_object* v_msgData_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v___x_355_; lean_object* v_env_356_; uint8_t v___x_357_; lean_object* v_env_358_; lean_object* v___x_359_; lean_object* v_toCold_360_; lean_object* v_mctx_361_; lean_object* v_lctx_362_; lean_object* v_options_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_355_ = lean_st_ref_get(v___y_353_);
v_env_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_env_356_);
lean_dec(v___x_355_);
v___x_357_ = 0;
v_env_358_ = l_Lean_Environment_setRecordingDeps(v_env_356_, v___x_357_);
v___x_359_ = lean_st_ref_get(v___y_351_);
v_toCold_360_ = lean_ctor_get(v___y_352_, 0);
v_mctx_361_ = lean_ctor_get(v___x_359_, 0);
lean_inc_ref(v_mctx_361_);
lean_dec(v___x_359_);
v_lctx_362_ = lean_ctor_get(v___y_350_, 2);
v_options_363_ = lean_ctor_get(v_toCold_360_, 2);
lean_inc_ref(v_options_363_);
lean_inc_ref(v_lctx_362_);
v___x_364_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_364_, 0, v_env_358_);
lean_ctor_set(v___x_364_, 1, v_mctx_361_);
lean_ctor_set(v___x_364_, 2, v_lctx_362_);
lean_ctor_set(v___x_364_, 3, v_options_363_);
v___x_365_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v_msgData_349_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0___boxed(lean_object* v_msgData_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(v_msgData_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0(lean_object* v_s_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_397_; 
lean_inc_ref(v_s_374_);
v___x_381_ = l_Lean_MessageData_ofExpr(v_s_374_);
v___x_382_ = l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(v___x_381_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
v_a_383_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_397_ == 0)
{
v___x_385_ = v___x_382_;
v_isShared_386_ = v_isSharedCheck_397_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_382_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_397_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_387_ = lean_st_ref_take(v___y_375_);
v___x_388_ = lean_box(0);
v___x_389_ = l_Lean_Expr_isSyntheticSorry(v_s_374_);
lean_dec_ref(v_s_374_);
v___x_390_ = lean_box(v___x_389_);
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
lean_ctor_set(v___x_391_, 1, v_a_383_);
v___x_392_ = lean_array_push(v___x_387_, v___x_391_);
v___x_393_ = lean_st_ref_put(v___y_375_, v___x_392_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 0, v___x_388_);
v___x_395_ = v___x_385_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v___x_388_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0___boxed(lean_object* v_s_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_warnIfUsesSorry___lam__0(v_s_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
lean_dec(v___y_399_);
return v_res_405_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(uint8_t v_suppressElabErrors_414_, lean_object* v_x_415_){
_start:
{
if (lean_obj_tag(v_x_415_) == 1)
{
lean_object* v_pre_416_; 
v_pre_416_ = lean_ctor_get(v_x_415_, 0);
switch(lean_obj_tag(v_pre_416_))
{
case 1:
{
lean_object* v_pre_417_; 
v_pre_417_ = lean_ctor_get(v_pre_416_, 0);
switch(lean_obj_tag(v_pre_417_))
{
case 0:
{
lean_object* v_str_418_; lean_object* v_str_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v_str_418_ = lean_ctor_get(v_x_415_, 1);
v_str_419_ = lean_ctor_get(v_pre_416_, 1);
v___x_420_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0));
v___x_421_ = lean_string_dec_eq(v_str_419_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1));
v___x_423_ = lean_string_dec_eq(v_str_419_, v___x_422_);
if (v___x_423_ == 0)
{
return v___x_423_;
}
else
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2));
v___x_425_ = lean_string_dec_eq(v_str_418_, v___x_424_);
if (v___x_425_ == 0)
{
return v___x_425_;
}
else
{
return v_suppressElabErrors_414_;
}
}
}
else
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3));
v___x_427_ = lean_string_dec_eq(v_str_418_, v___x_426_);
if (v___x_427_ == 0)
{
return v___x_427_;
}
else
{
return v_suppressElabErrors_414_;
}
}
}
case 1:
{
lean_object* v_pre_428_; 
v_pre_428_ = lean_ctor_get(v_pre_417_, 0);
if (lean_obj_tag(v_pre_428_) == 0)
{
lean_object* v_str_429_; lean_object* v_str_430_; lean_object* v_str_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v_str_429_ = lean_ctor_get(v_x_415_, 1);
v_str_430_ = lean_ctor_get(v_pre_416_, 1);
v_str_431_ = lean_ctor_get(v_pre_417_, 1);
v___x_432_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4));
v___x_433_ = lean_string_dec_eq(v_str_431_, v___x_432_);
if (v___x_433_ == 0)
{
return v___x_433_;
}
else
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5));
v___x_435_ = lean_string_dec_eq(v_str_430_, v___x_434_);
if (v___x_435_ == 0)
{
return v___x_435_;
}
else
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6));
v___x_437_ = lean_string_dec_eq(v_str_429_, v___x_436_);
if (v___x_437_ == 0)
{
return v___x_437_;
}
else
{
return v_suppressElabErrors_414_;
}
}
}
}
else
{
uint8_t v___x_438_; 
v___x_438_ = 0;
return v___x_438_;
}
}
default: 
{
uint8_t v___x_439_; 
v___x_439_ = 0;
return v___x_439_;
}
}
}
case 0:
{
lean_object* v_str_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v_str_440_ = lean_ctor_get(v_x_415_, 1);
v___x_441_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7));
v___x_442_ = lean_string_dec_eq(v_str_440_, v___x_441_);
if (v___x_442_ == 0)
{
return v___x_442_;
}
else
{
return v_suppressElabErrors_414_;
}
}
default: 
{
uint8_t v___x_443_; 
v___x_443_ = 0;
return v___x_443_;
}
}
}
else
{
uint8_t v___x_444_; 
v___x_444_ = 0;
return v___x_444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed(lean_object* v_suppressElabErrors_445_, lean_object* v_x_446_){
_start:
{
uint8_t v_suppressElabErrors_boxed_447_; uint8_t v_res_448_; lean_object* v_r_449_; 
v_suppressElabErrors_boxed_447_ = lean_unbox(v_suppressElabErrors_445_);
v_res_448_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(v_suppressElabErrors_boxed_447_, v_x_446_);
lean_dec(v_x_446_);
v_r_449_ = lean_box(v_res_448_);
return v_r_449_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_452_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_453_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0);
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
lean_ctor_set(v___x_455_, 2, v___x_454_);
lean_ctor_set(v___x_455_, 3, v___x_454_);
lean_ctor_set(v___x_455_, 4, v___x_453_);
lean_ctor_set(v___x_455_, 5, v___x_453_);
lean_ctor_set(v___x_455_, 6, v___x_453_);
lean_ctor_set(v___x_455_, 7, v___x_453_);
lean_ctor_set(v___x_455_, 8, v___x_453_);
lean_ctor_set(v___x_455_, 9, v___x_453_);
lean_ctor_set(v___x_455_, 10, v___x_453_);
lean_ctor_set(v___x_455_, 11, v___x_452_);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_unsigned_to_nat(32u);
v___x_457_ = lean_mk_empty_array_with_capacity(v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3(void){
_start:
{
size_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_459_ = ((size_t)5ULL);
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_461_ = lean_unsigned_to_nat(32u);
v___x_462_ = lean_mk_empty_array_with_capacity(v___x_461_);
v___x_463_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2);
v___x_464_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_464_, 0, v___x_463_);
lean_ctor_set(v___x_464_, 1, v___x_462_);
lean_ctor_set(v___x_464_, 2, v___x_460_);
lean_ctor_set(v___x_464_, 3, v___x_460_);
lean_ctor_set_usize(v___x_464_, 4, v___x_459_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_465_ = lean_box(1);
v___x_466_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_467_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0);
v___x_468_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v___x_466_);
lean_ctor_set(v___x_468_, 2, v___x_465_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(lean_object* v_msgData_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v___x_473_; lean_object* v_toCold_474_; lean_object* v_env_475_; lean_object* v_options_476_; uint8_t v___x_477_; lean_object* v_env_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_473_ = lean_st_ref_get(v___y_471_);
v_toCold_474_ = lean_ctor_get(v___y_470_, 0);
v_env_475_ = lean_ctor_get(v___x_473_, 0);
lean_inc_ref(v_env_475_);
lean_dec(v___x_473_);
v_options_476_ = lean_ctor_get(v_toCold_474_, 2);
v___x_477_ = 0;
v_env_478_ = l_Lean_Environment_setRecordingDeps(v_env_475_, v___x_477_);
v___x_479_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1);
v___x_480_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4);
lean_inc_ref(v_options_476_);
v___x_481_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_481_, 0, v_env_478_);
lean_ctor_set(v___x_481_, 1, v___x_479_);
lean_ctor_set(v___x_481_, 2, v___x_480_);
lean_ctor_set(v___x_481_, 3, v_options_476_);
v___x_482_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v_msgData_469_);
v___x_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___boxed(lean_object* v_msgData_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msgData_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(lean_object* v_ref_490_, lean_object* v_msgData_491_, uint8_t v_severity_492_, uint8_t v_isSilent_493_, lean_object* v___y_494_, lean_object* v___y_495_){
_start:
{
lean_object* v___y_498_; uint8_t v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; uint8_t v___y_503_; lean_object* v___y_504_; lean_object* v_toCold_505_; lean_object* v___y_506_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; uint8_t v___y_539_; uint8_t v___y_540_; uint8_t v___y_541_; lean_object* v___y_542_; lean_object* v___y_562_; lean_object* v___y_563_; uint8_t v___y_564_; lean_object* v___y_565_; uint8_t v___y_566_; uint8_t v___y_567_; lean_object* v___y_568_; uint8_t v___y_572_; uint8_t v___y_573_; uint8_t v___x_583_; uint8_t v___y_585_; uint8_t v___x_591_; 
v___x_583_ = 2;
v___x_591_ = l_Lean_instBEqMessageSeverity_beq(v_severity_492_, v___x_583_);
if (v___x_591_ == 0)
{
v___y_585_ = v___x_591_;
goto v___jp_584_;
}
else
{
uint8_t v___x_592_; 
lean_inc_ref(v_msgData_491_);
v___x_592_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_491_);
if (v___x_592_ == 0)
{
v___y_585_ = v___x_592_;
goto v___jp_584_;
}
else
{
lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec_ref(v_msgData_491_);
v___x_593_ = lean_box(0);
v___x_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
return v___x_594_;
}
}
v___jp_497_:
{
lean_object* v_currNamespace_507_; lean_object* v_openDecls_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v_env_513_; lean_object* v_nextMacroScope_514_; lean_object* v_ngen_515_; lean_object* v_auxDeclNGen_516_; lean_object* v_traceState_517_; lean_object* v_cache_518_; lean_object* v_recordedDeps_519_; lean_object* v_messages_520_; lean_object* v_infoState_521_; lean_object* v_snapshotTasks_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_533_; 
v_currNamespace_507_ = lean_ctor_get(v_toCold_505_, 4);
v_openDecls_508_ = lean_ctor_get(v_toCold_505_, 5);
lean_inc(v_openDecls_508_);
lean_inc(v_currNamespace_507_);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v_currNamespace_507_);
lean_ctor_set(v___x_509_, 1, v_openDecls_508_);
v___x_510_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
lean_ctor_set(v___x_510_, 1, v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc_ref(v___y_504_);
v___x_511_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_511_, 0, v___y_504_);
lean_ctor_set(v___x_511_, 1, v___y_498_);
lean_ctor_set(v___x_511_, 2, v___y_500_);
lean_ctor_set(v___x_511_, 3, v___y_501_);
lean_ctor_set(v___x_511_, 4, v___x_510_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*5, v___y_503_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*5 + 1, v___y_499_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*5 + 2, v_isSilent_493_);
v___x_512_ = lean_st_ref_take(v___y_506_);
v_env_513_ = lean_ctor_get(v___x_512_, 0);
v_nextMacroScope_514_ = lean_ctor_get(v___x_512_, 1);
v_ngen_515_ = lean_ctor_get(v___x_512_, 2);
v_auxDeclNGen_516_ = lean_ctor_get(v___x_512_, 3);
v_traceState_517_ = lean_ctor_get(v___x_512_, 4);
v_cache_518_ = lean_ctor_get(v___x_512_, 5);
v_recordedDeps_519_ = lean_ctor_get(v___x_512_, 6);
v_messages_520_ = lean_ctor_get(v___x_512_, 7);
v_infoState_521_ = lean_ctor_get(v___x_512_, 8);
v_snapshotTasks_522_ = lean_ctor_get(v___x_512_, 9);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_533_ == 0)
{
v___x_524_ = v___x_512_;
v_isShared_525_ = v_isSharedCheck_533_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_snapshotTasks_522_);
lean_inc(v_infoState_521_);
lean_inc(v_messages_520_);
lean_inc(v_recordedDeps_519_);
lean_inc(v_cache_518_);
lean_inc(v_traceState_517_);
lean_inc(v_auxDeclNGen_516_);
lean_inc(v_ngen_515_);
lean_inc(v_nextMacroScope_514_);
lean_inc(v_env_513_);
lean_dec(v___x_512_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_533_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_526_ = lean_box(0);
v___x_527_ = l_Lean_MessageLog_add(v___x_511_, v_messages_520_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 7, v___x_527_);
v___x_529_ = v___x_524_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_env_513_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_nextMacroScope_514_);
lean_ctor_set(v_reuseFailAlloc_532_, 2, v_ngen_515_);
lean_ctor_set(v_reuseFailAlloc_532_, 3, v_auxDeclNGen_516_);
lean_ctor_set(v_reuseFailAlloc_532_, 4, v_traceState_517_);
lean_ctor_set(v_reuseFailAlloc_532_, 5, v_cache_518_);
lean_ctor_set(v_reuseFailAlloc_532_, 6, v_recordedDeps_519_);
lean_ctor_set(v_reuseFailAlloc_532_, 7, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_532_, 8, v_infoState_521_);
lean_ctor_set(v_reuseFailAlloc_532_, 9, v_snapshotTasks_522_);
v___x_529_ = v_reuseFailAlloc_532_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = lean_st_ref_put(v___y_506_, v___x_529_);
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_526_);
return v___x_531_;
}
}
}
v___jp_534_:
{
lean_object* v_fileName_543_; lean_object* v_fileMap_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_560_; 
v_fileName_543_ = lean_ctor_get(v___y_538_, 0);
v_fileMap_544_ = lean_ctor_get(v___y_538_, 1);
v___x_545_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_491_);
v___x_546_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v___x_545_, v___y_494_, v___y_495_);
v_a_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_560_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_560_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_560_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
lean_inc_ref_n(v_fileMap_544_, 2);
v___x_551_ = l_Lean_FileMap_toPosition(v_fileMap_544_, v___y_537_);
lean_dec(v___y_537_);
v___x_552_ = l_Lean_FileMap_toPosition(v_fileMap_544_, v___y_542_);
lean_dec(v___y_542_);
v___x_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
v___x_554_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
if (v___y_539_ == 0)
{
lean_del_object(v___x_549_);
lean_dec_ref(v___y_535_);
v___y_498_ = v___x_551_;
v___y_499_ = v___y_540_;
v___y_500_ = v___x_553_;
v___y_501_ = v___x_554_;
v___y_502_ = v_a_547_;
v___y_503_ = v___y_541_;
v___y_504_ = v_fileName_543_;
v_toCold_505_ = v___y_536_;
v___y_506_ = v___y_495_;
goto v___jp_497_;
}
else
{
uint8_t v___x_555_; 
lean_inc(v_a_547_);
v___x_555_ = l_Lean_MessageData_hasTag(v___y_535_, v_a_547_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; lean_object* v___x_558_; 
lean_dec_ref_known(v___x_553_, 1);
lean_dec_ref(v___x_551_);
lean_dec(v_a_547_);
v___x_556_ = lean_box(0);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v___x_556_);
v___x_558_ = v___x_549_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
else
{
lean_del_object(v___x_549_);
v___y_498_ = v___x_551_;
v___y_499_ = v___y_540_;
v___y_500_ = v___x_553_;
v___y_501_ = v___x_554_;
v___y_502_ = v_a_547_;
v___y_503_ = v___y_541_;
v___y_504_ = v_fileName_543_;
v_toCold_505_ = v___y_536_;
v___y_506_ = v___y_495_;
goto v___jp_497_;
}
}
}
}
v___jp_561_:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lean_Syntax_getTailPos_x3f(v___y_565_, v___y_567_);
lean_dec(v___y_565_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_inc(v___y_568_);
v___y_535_ = v___y_562_;
v___y_536_ = v___y_563_;
v___y_537_ = v___y_568_;
v___y_538_ = v___y_563_;
v___y_539_ = v___y_564_;
v___y_540_ = v___y_566_;
v___y_541_ = v___y_567_;
v___y_542_ = v___y_568_;
goto v___jp_534_;
}
else
{
lean_object* v_val_570_; 
v_val_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_570_);
lean_dec_ref_known(v___x_569_, 1);
v___y_535_ = v___y_562_;
v___y_536_ = v___y_563_;
v___y_537_ = v___y_568_;
v___y_538_ = v___y_563_;
v___y_539_ = v___y_564_;
v___y_540_ = v___y_566_;
v___y_541_ = v___y_567_;
v___y_542_ = v_val_570_;
goto v___jp_534_;
}
}
v___jp_571_:
{
lean_object* v_toCold_574_; lean_object* v_ref_575_; uint8_t v_suppressElabErrors_576_; lean_object* v___x_577_; lean_object* v___f_578_; lean_object* v_ref_579_; lean_object* v___x_580_; 
v_toCold_574_ = lean_ctor_get(v___y_494_, 0);
v_ref_575_ = lean_ctor_get(v___y_494_, 2);
v_suppressElabErrors_576_ = lean_ctor_get_uint8(v___y_494_, sizeof(void*)*3 + 2);
v___x_577_ = lean_box(v_suppressElabErrors_576_);
v___f_578_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed), 2, 1);
lean_closure_set(v___f_578_, 0, v___x_577_);
v_ref_579_ = l_Lean_replaceRef(v_ref_490_, v_ref_575_);
v___x_580_ = l_Lean_Syntax_getPos_x3f(v_ref_579_, v___y_572_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v___x_581_; 
v___x_581_ = lean_unsigned_to_nat(0u);
v___y_562_ = v___f_578_;
v___y_563_ = v_toCold_574_;
v___y_564_ = v_suppressElabErrors_576_;
v___y_565_ = v_ref_579_;
v___y_566_ = v___y_573_;
v___y_567_ = v___y_572_;
v___y_568_ = v___x_581_;
goto v___jp_561_;
}
else
{
lean_object* v_val_582_; 
v_val_582_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_val_582_);
lean_dec_ref_known(v___x_580_, 1);
v___y_562_ = v___f_578_;
v___y_563_ = v_toCold_574_;
v___y_564_ = v_suppressElabErrors_576_;
v___y_565_ = v_ref_579_;
v___y_566_ = v___y_573_;
v___y_567_ = v___y_572_;
v___y_568_ = v_val_582_;
goto v___jp_561_;
}
}
v___jp_584_:
{
uint8_t v___x_586_; uint8_t v___x_587_; 
v___x_586_ = 1;
v___x_587_ = l_Lean_instBEqMessageSeverity_beq(v_severity_492_, v___x_586_);
if (v___x_587_ == 0)
{
v___y_572_ = v___y_585_;
v___y_573_ = v_severity_492_;
goto v___jp_571_;
}
else
{
lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_588_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_494_);
v___x_589_ = l_Lean_warningAsError;
v___x_590_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_588_, v___x_589_);
lean_dec_ref(v___x_588_);
if (v___x_590_ == 0)
{
v___y_572_ = v___y_585_;
v___y_573_ = v_severity_492_;
goto v___jp_571_;
}
else
{
v___y_572_ = v___y_585_;
v___y_573_ = v___x_583_;
goto v___jp_571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___boxed(lean_object* v_ref_595_, lean_object* v_msgData_596_, lean_object* v_severity_597_, lean_object* v_isSilent_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
uint8_t v_severity_boxed_602_; uint8_t v_isSilent_boxed_603_; lean_object* v_res_604_; 
v_severity_boxed_602_ = lean_unbox(v_severity_597_);
v_isSilent_boxed_603_ = lean_unbox(v_isSilent_598_);
v_res_604_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(v_ref_595_, v_msgData_596_, v_severity_boxed_602_, v_isSilent_boxed_603_, v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v_ref_595_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(lean_object* v_msgData_605_, uint8_t v_severity_606_, uint8_t v_isSilent_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_ref_611_; lean_object* v___x_612_; 
v_ref_611_ = lean_ctor_get(v___y_608_, 2);
v___x_612_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(v_ref_611_, v_msgData_605_, v_severity_606_, v_isSilent_607_, v___y_608_, v___y_609_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4___boxed(lean_object* v_msgData_613_, lean_object* v_severity_614_, lean_object* v_isSilent_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
uint8_t v_severity_boxed_619_; uint8_t v_isSilent_boxed_620_; lean_object* v_res_621_; 
v_severity_boxed_619_ = lean_unbox(v_severity_614_);
v_isSilent_boxed_620_ = lean_unbox(v_isSilent_615_);
v_res_621_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(v_msgData_613_, v_severity_boxed_619_, v_isSilent_boxed_620_, v___y_616_, v___y_617_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(lean_object* v_msgData_622_, lean_object* v___y_623_, lean_object* v___y_624_){
_start:
{
uint8_t v___x_626_; uint8_t v___x_627_; lean_object* v___x_628_; 
v___x_626_ = 1;
v___x_627_ = 0;
v___x_628_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(v_msgData_622_, v___x_626_, v___x_627_, v___y_623_, v___y_624_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2___boxed(lean_object* v_msgData_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v_msgData_629_, v___y_630_, v___y_631_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(lean_object* v_as_637_, size_t v_sz_638_, size_t v_i_639_, lean_object* v_b_640_){
_start:
{
uint8_t v___x_641_; 
v___x_641_ = lean_usize_dec_lt(v_i_639_, v_sz_638_);
if (v___x_641_ == 0)
{
lean_inc_ref(v_b_640_);
return v_b_640_;
}
else
{
lean_object* v_a_642_; lean_object* v_fst_643_; lean_object* v___x_644_; uint8_t v___x_645_; 
v_a_642_ = lean_array_uget_borrowed(v_as_637_, v_i_639_);
v_fst_643_ = lean_ctor_get(v_a_642_, 0);
v___x_644_ = lean_box(0);
v___x_645_ = lean_unbox(v_fst_643_);
if (v___x_645_ == 0)
{
lean_object* v___x_646_; size_t v___x_647_; size_t v___x_648_; 
v___x_646_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0));
v___x_647_ = ((size_t)1ULL);
v___x_648_ = lean_usize_add(v_i_639_, v___x_647_);
v_i_639_ = v___x_648_;
v_b_640_ = v___x_646_;
goto _start;
}
else
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
lean_inc(v_a_642_);
v___x_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_650_, 0, v_a_642_);
v___x_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
v___x_652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
lean_ctor_set(v___x_652_, 1, v___x_644_);
return v___x_652_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___boxed(lean_object* v_as_653_, lean_object* v_sz_654_, lean_object* v_i_655_, lean_object* v_b_656_){
_start:
{
size_t v_sz_boxed_657_; size_t v_i_boxed_658_; lean_object* v_res_659_; 
v_sz_boxed_657_ = lean_unbox_usize(v_sz_654_);
lean_dec(v_sz_654_);
v_i_boxed_658_ = lean_unbox_usize(v_i_655_);
lean_dec(v_i_655_);
v_res_659_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(v_as_653_, v_sz_boxed_657_, v_i_boxed_658_, v_b_656_);
lean_dec_ref(v_b_656_);
lean_dec_ref(v_as_653_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(lean_object* v_fn_660_, lean_object* v_e_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_Lean_Expr_getSorry_x3f(v_e_661_);
if (lean_obj_tag(v___x_668_) == 1)
{
lean_object* v_val_669_; lean_object* v___x_670_; 
v_val_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_val_669_);
lean_dec_ref_known(v___x_668_, 1);
lean_inc(v___y_666_);
lean_inc_ref(v___y_665_);
lean_inc(v___y_664_);
lean_inc_ref(v___y_663_);
lean_inc(v___y_662_);
v___x_670_ = lean_apply_7(v_fn_660_, v_val_669_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, lean_box(0));
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_679_; 
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_679_ == 0)
{
lean_object* v_unused_680_; 
v_unused_680_ = lean_ctor_get(v___x_670_, 0);
lean_dec(v_unused_680_);
v___x_672_ = v___x_670_;
v_isShared_673_ = v_isSharedCheck_679_;
goto v_resetjp_671_;
}
else
{
lean_dec(v___x_670_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_679_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
uint8_t v___x_674_; lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_674_ = 0;
v___x_675_ = lean_box(v___x_674_);
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 0, v___x_675_);
v___x_677_ = v___x_672_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
v_a_681_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_670_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_670_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
else
{
uint8_t v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec(v___x_668_);
lean_dec_ref(v_fn_660_);
v___x_689_ = 1;
v___x_690_ = lean_box(v___x_689_);
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed(lean_object* v_fn_692_, lean_object* v_e_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(v_fn_692_, v_e_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
lean_dec(v___y_694_);
lean_dec_ref(v_e_693_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_object* v_00_u03b1_701_, lean_object* v_x_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = lean_apply_1(v_x_702_, lean_box(0));
v___x_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0___boxed(lean_object* v_00_u03b1_711_, lean_object* v_x_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(v_00_u03b1_711_, v_x_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(lean_object* v_k_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v_b_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___x_729_; 
lean_inc(v___y_727_);
lean_inc_ref(v___y_726_);
lean_inc(v___y_725_);
lean_inc_ref(v___y_724_);
lean_inc(v___y_722_);
lean_inc(v___y_721_);
v___x_729_ = lean_apply_8(v_k_720_, v_b_723_, v___y_721_, v___y_722_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, lean_box(0));
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed(lean_object* v_k_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v_b_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(v_k_730_, v___y_731_, v___y_732_, v_b_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_732_);
lean_dec(v___y_731_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(lean_object* v_name_740_, lean_object* v_type_741_, lean_object* v_val_742_, lean_object* v_k_743_, uint8_t v_nondep_744_, uint8_t v_kind_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___f_753_; lean_object* v___x_754_; 
lean_inc(v___y_747_);
lean_inc(v___y_746_);
v___f_753_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_753_, 0, v_k_743_);
lean_closure_set(v___f_753_, 1, v___y_746_);
lean_closure_set(v___f_753_, 2, v___y_747_);
v___x_754_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_740_, v_type_741_, v_val_742_, v___f_753_, v_nondep_744_, v_kind_745_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
if (lean_obj_tag(v___x_754_) == 0)
{
return v___x_754_;
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
v_a_755_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_754_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_754_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg___boxed(lean_object* v_name_763_, lean_object* v_type_764_, lean_object* v_val_765_, lean_object* v_k_766_, lean_object* v_nondep_767_, lean_object* v_kind_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
uint8_t v_nondep_boxed_776_; uint8_t v_kind_boxed_777_; lean_object* v_res_778_; 
v_nondep_boxed_776_ = lean_unbox(v_nondep_767_);
v_kind_boxed_777_ = lean_unbox(v_kind_768_);
v_res_778_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_name_763_, v_type_764_, v_val_765_, v_k_766_, v_nondep_boxed_776_, v_kind_boxed_777_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec(v___y_769_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed(lean_object* v_fvars_779_, lean_object* v_f_780_, lean_object* v_body_781_, lean_object* v_x_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(v_fvars_779_, v_f_780_, v_body_781_, v_x_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec(v___y_783_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(lean_object* v_f_791_, lean_object* v_fvars_792_, lean_object* v_a_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
if (lean_obj_tag(v_a_793_) == 8)
{
lean_object* v_declName_801_; lean_object* v_type_802_; lean_object* v_value_803_; lean_object* v_body_804_; lean_object* v___f_805_; lean_object* v_d_806_; lean_object* v_v_807_; lean_object* v___x_808_; 
v_declName_801_ = lean_ctor_get(v_a_793_, 0);
lean_inc(v_declName_801_);
v_type_802_ = lean_ctor_get(v_a_793_, 1);
lean_inc_ref(v_type_802_);
v_value_803_ = lean_ctor_get(v_a_793_, 2);
lean_inc_ref(v_value_803_);
v_body_804_ = lean_ctor_get(v_a_793_, 3);
lean_inc_ref(v_body_804_);
lean_dec_ref_known(v_a_793_, 4);
lean_inc_ref_n(v_f_791_, 2);
lean_inc_ref(v_fvars_792_);
v___f_805_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed), 11, 3);
lean_closure_set(v___f_805_, 0, v_fvars_792_);
lean_closure_set(v___f_805_, 1, v_f_791_);
lean_closure_set(v___f_805_, 2, v_body_804_);
v_d_806_ = lean_expr_instantiate_rev(v_type_802_, v_fvars_792_);
lean_dec_ref(v_type_802_);
v_v_807_ = lean_expr_instantiate_rev(v_value_803_, v_fvars_792_);
lean_dec_ref(v_fvars_792_);
lean_dec_ref(v_value_803_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
lean_inc(v___y_797_);
lean_inc_ref(v___y_796_);
lean_inc(v___y_795_);
lean_inc(v___y_794_);
lean_inc_ref(v_d_806_);
v___x_808_ = lean_apply_8(v_f_791_, v_d_806_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, lean_box(0));
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v___x_809_; 
lean_dec_ref_known(v___x_808_, 1);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
lean_inc(v___y_797_);
lean_inc_ref(v___y_796_);
lean_inc(v___y_795_);
lean_inc(v___y_794_);
lean_inc_ref(v_v_807_);
v___x_809_ = lean_apply_8(v_f_791_, v_v_807_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, lean_box(0));
if (lean_obj_tag(v___x_809_) == 0)
{
uint8_t v___x_810_; uint8_t v___x_811_; lean_object* v___x_812_; 
lean_dec_ref_known(v___x_809_, 1);
v___x_810_ = 0;
v___x_811_ = 0;
v___x_812_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_declName_801_, v_d_806_, v_v_807_, v___f_805_, v___x_810_, v___x_811_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
return v___x_812_;
}
else
{
lean_dec_ref(v_v_807_);
lean_dec_ref(v_d_806_);
lean_dec_ref(v___f_805_);
lean_dec(v_declName_801_);
return v___x_809_;
}
}
else
{
lean_dec_ref(v_v_807_);
lean_dec_ref(v_d_806_);
lean_dec_ref(v___f_805_);
lean_dec(v_declName_801_);
lean_dec_ref(v_f_791_);
return v___x_808_;
}
}
else
{
lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_813_ = lean_expr_instantiate_rev(v_a_793_, v_fvars_792_);
lean_dec_ref(v_fvars_792_);
lean_dec_ref(v_a_793_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
lean_inc(v___y_797_);
lean_inc_ref(v___y_796_);
lean_inc(v___y_795_);
lean_inc(v___y_794_);
v___x_814_ = lean_apply_8(v_f_791_, v___x_813_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, lean_box(0));
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(lean_object* v_fvars_815_, lean_object* v_f_816_, lean_object* v_body_817_, lean_object* v_x_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_array_push(v_fvars_815_, v_x_818_);
v___x_827_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_816_, v___x_826_, v_body_817_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___boxed(lean_object* v_f_828_, lean_object* v_fvars_829_, lean_object* v_a_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_828_, v_fvars_829_, v_a_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec(v___y_831_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(lean_object* v_f_841_, lean_object* v_e_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_851_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_841_, v___x_850_, v_e_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___boxed(lean_object* v_f_852_, lean_object* v_e_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(v_f_852_, v_e_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec(v___y_854_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(lean_object* v_name_862_, uint8_t v_bi_863_, lean_object* v_type_864_, lean_object* v_k_865_, uint8_t v_kind_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v___f_874_; lean_object* v___x_875_; 
lean_inc(v___y_868_);
lean_inc(v___y_867_);
v___f_874_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_874_, 0, v_k_865_);
lean_closure_set(v___f_874_, 1, v___y_867_);
lean_closure_set(v___f_874_, 2, v___y_868_);
v___x_875_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_862_, v_bi_863_, v_type_864_, v___f_874_, v_kind_866_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
if (lean_obj_tag(v___x_875_) == 0)
{
return v___x_875_;
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_875_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___boxed(lean_object* v_name_884_, lean_object* v_bi_885_, lean_object* v_type_886_, lean_object* v_k_887_, lean_object* v_kind_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
uint8_t v_bi_boxed_896_; uint8_t v_kind_boxed_897_; lean_object* v_res_898_; 
v_bi_boxed_896_ = lean_unbox(v_bi_885_);
v_kind_boxed_897_ = lean_unbox(v_kind_888_);
v_res_898_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_name_884_, v_bi_boxed_896_, v_type_886_, v_k_887_, v_kind_boxed_897_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
lean_dec(v___y_890_);
lean_dec(v___y_889_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed(lean_object* v_fvars_899_, lean_object* v_f_900_, lean_object* v_body_901_, lean_object* v_x_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(v_fvars_899_, v_f_900_, v_body_901_, v_x_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec(v___y_904_);
lean_dec(v___y_903_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(lean_object* v_f_911_, lean_object* v_fvars_912_, lean_object* v_a_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
if (lean_obj_tag(v_a_913_) == 7)
{
lean_object* v_binderName_921_; lean_object* v_binderType_922_; lean_object* v_body_923_; uint8_t v_binderInfo_924_; lean_object* v___f_925_; lean_object* v_d_926_; lean_object* v___x_927_; 
v_binderName_921_ = lean_ctor_get(v_a_913_, 0);
lean_inc(v_binderName_921_);
v_binderType_922_ = lean_ctor_get(v_a_913_, 1);
lean_inc_ref(v_binderType_922_);
v_body_923_ = lean_ctor_get(v_a_913_, 2);
lean_inc_ref(v_body_923_);
v_binderInfo_924_ = lean_ctor_get_uint8(v_a_913_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_913_, 3);
lean_inc_ref(v_f_911_);
lean_inc_ref(v_fvars_912_);
v___f_925_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed), 11, 3);
lean_closure_set(v___f_925_, 0, v_fvars_912_);
lean_closure_set(v___f_925_, 1, v_f_911_);
lean_closure_set(v___f_925_, 2, v_body_923_);
v_d_926_ = lean_expr_instantiate_rev(v_binderType_922_, v_fvars_912_);
lean_dec_ref(v_fvars_912_);
lean_dec_ref(v_binderType_922_);
lean_inc(v___y_919_);
lean_inc_ref(v___y_918_);
lean_inc(v___y_917_);
lean_inc_ref(v___y_916_);
lean_inc(v___y_915_);
lean_inc(v___y_914_);
lean_inc_ref(v_d_926_);
v___x_927_ = lean_apply_8(v_f_911_, v_d_926_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, lean_box(0));
if (lean_obj_tag(v___x_927_) == 0)
{
uint8_t v___x_928_; lean_object* v___x_929_; 
lean_dec_ref_known(v___x_927_, 1);
v___x_928_ = 0;
v___x_929_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_binderName_921_, v_binderInfo_924_, v_d_926_, v___f_925_, v___x_928_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
return v___x_929_;
}
else
{
lean_dec_ref(v_d_926_);
lean_dec_ref(v___f_925_);
lean_dec(v_binderName_921_);
return v___x_927_;
}
}
else
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = lean_expr_instantiate_rev(v_a_913_, v_fvars_912_);
lean_dec_ref(v_fvars_912_);
lean_dec_ref(v_a_913_);
lean_inc(v___y_919_);
lean_inc_ref(v___y_918_);
lean_inc(v___y_917_);
lean_inc_ref(v___y_916_);
lean_inc(v___y_915_);
lean_inc(v___y_914_);
v___x_931_ = lean_apply_8(v_f_911_, v___x_930_, v___y_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, lean_box(0));
return v___x_931_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(lean_object* v_fvars_932_, lean_object* v_f_933_, lean_object* v_body_934_, lean_object* v_x_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = lean_array_push(v_fvars_932_, v_x_935_);
v___x_944_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_933_, v___x_943_, v_body_934_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___boxed(lean_object* v_f_945_, lean_object* v_fvars_946_, lean_object* v_a_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_945_, v_fvars_946_, v_a_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec(v___y_948_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(lean_object* v_f_956_, lean_object* v_e_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_966_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_956_, v___x_965_, v_e_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10___boxed(lean_object* v_f_967_, lean_object* v_e_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(v_f_967_, v_e_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec(v___y_969_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed(lean_object* v_fvars_977_, lean_object* v_f_978_, lean_object* v_body_979_, lean_object* v_x_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(v_fvars_977_, v_f_978_, v_body_979_, v_x_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec(v___y_981_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(lean_object* v_f_989_, lean_object* v_fvars_990_, lean_object* v_a_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
if (lean_obj_tag(v_a_991_) == 6)
{
lean_object* v_binderName_999_; lean_object* v_binderType_1000_; lean_object* v_body_1001_; uint8_t v_binderInfo_1002_; lean_object* v___f_1003_; lean_object* v_d_1004_; lean_object* v___x_1005_; 
v_binderName_999_ = lean_ctor_get(v_a_991_, 0);
lean_inc(v_binderName_999_);
v_binderType_1000_ = lean_ctor_get(v_a_991_, 1);
lean_inc_ref(v_binderType_1000_);
v_body_1001_ = lean_ctor_get(v_a_991_, 2);
lean_inc_ref(v_body_1001_);
v_binderInfo_1002_ = lean_ctor_get_uint8(v_a_991_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_991_, 3);
lean_inc_ref(v_f_989_);
lean_inc_ref(v_fvars_990_);
v___f_1003_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed), 11, 3);
lean_closure_set(v___f_1003_, 0, v_fvars_990_);
lean_closure_set(v___f_1003_, 1, v_f_989_);
lean_closure_set(v___f_1003_, 2, v_body_1001_);
v_d_1004_ = lean_expr_instantiate_rev(v_binderType_1000_, v_fvars_990_);
lean_dec_ref(v_fvars_990_);
lean_dec_ref(v_binderType_1000_);
lean_inc(v___y_997_);
lean_inc_ref(v___y_996_);
lean_inc(v___y_995_);
lean_inc_ref(v___y_994_);
lean_inc(v___y_993_);
lean_inc(v___y_992_);
lean_inc_ref(v_d_1004_);
v___x_1005_ = lean_apply_8(v_f_989_, v_d_1004_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, lean_box(0));
if (lean_obj_tag(v___x_1005_) == 0)
{
uint8_t v___x_1006_; lean_object* v___x_1007_; 
lean_dec_ref_known(v___x_1005_, 1);
v___x_1006_ = 0;
v___x_1007_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_binderName_999_, v_binderInfo_1002_, v_d_1004_, v___f_1003_, v___x_1006_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
return v___x_1007_;
}
else
{
lean_dec_ref(v_d_1004_);
lean_dec_ref(v___f_1003_);
lean_dec(v_binderName_999_);
return v___x_1005_;
}
}
else
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lean_expr_instantiate_rev(v_a_991_, v_fvars_990_);
lean_dec_ref(v_fvars_990_);
lean_dec_ref(v_a_991_);
lean_inc(v___y_997_);
lean_inc_ref(v___y_996_);
lean_inc(v___y_995_);
lean_inc_ref(v___y_994_);
lean_inc(v___y_993_);
lean_inc(v___y_992_);
v___x_1009_ = lean_apply_8(v_f_989_, v___x_1008_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, lean_box(0));
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(lean_object* v_fvars_1010_, lean_object* v_f_1011_, lean_object* v_body_1012_, lean_object* v_x_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = lean_array_push(v_fvars_1010_, v_x_1013_);
v___x_1022_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_1011_, v___x_1021_, v_body_1012_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___boxed(lean_object* v_f_1023_, lean_object* v_fvars_1024_, lean_object* v_a_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_1023_, v_fvars_1024_, v_a_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec(v___y_1026_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(lean_object* v_f_1034_, lean_object* v_e_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_1044_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_1034_, v___x_1043_, v_e_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11___boxed(lean_object* v_f_1045_, lean_object* v_e_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(v_f_1045_, v_e_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec(v___y_1047_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(lean_object* v_a_1055_, lean_object* v_x_1056_){
_start:
{
if (lean_obj_tag(v_x_1056_) == 0)
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_box(0);
return v___x_1057_;
}
else
{
lean_object* v_key_1058_; lean_object* v_value_1059_; lean_object* v_tail_1060_; uint8_t v___x_1061_; 
v_key_1058_ = lean_ctor_get(v_x_1056_, 0);
v_value_1059_ = lean_ctor_get(v_x_1056_, 1);
v_tail_1060_ = lean_ctor_get(v_x_1056_, 2);
v___x_1061_ = lean_expr_eqv(v_key_1058_, v_a_1055_);
if (v___x_1061_ == 0)
{
v_x_1056_ = v_tail_1060_;
goto _start;
}
else
{
lean_object* v___x_1063_; 
lean_inc(v_value_1059_);
v___x_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1063_, 0, v_value_1059_);
return v___x_1063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg___boxed(lean_object* v_a_1064_, lean_object* v_x_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1064_, v_x_1065_);
lean_dec(v_x_1065_);
lean_dec_ref(v_a_1064_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_m_1067_, lean_object* v_a_1068_){
_start:
{
lean_object* v_buckets_1069_; lean_object* v___x_1070_; uint64_t v___x_1071_; uint64_t v___x_1072_; uint64_t v___x_1073_; uint64_t v_fold_1074_; uint64_t v___x_1075_; uint64_t v___x_1076_; uint64_t v___x_1077_; size_t v___x_1078_; size_t v___x_1079_; size_t v___x_1080_; size_t v___x_1081_; size_t v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v_buckets_1069_ = lean_ctor_get(v_m_1067_, 1);
v___x_1070_ = lean_array_get_size(v_buckets_1069_);
v___x_1071_ = l_Lean_Expr_hash(v_a_1068_);
v___x_1072_ = 32ULL;
v___x_1073_ = lean_uint64_shift_right(v___x_1071_, v___x_1072_);
v_fold_1074_ = lean_uint64_xor(v___x_1071_, v___x_1073_);
v___x_1075_ = 16ULL;
v___x_1076_ = lean_uint64_shift_right(v_fold_1074_, v___x_1075_);
v___x_1077_ = lean_uint64_xor(v_fold_1074_, v___x_1076_);
v___x_1078_ = lean_uint64_to_usize(v___x_1077_);
v___x_1079_ = lean_usize_of_nat(v___x_1070_);
v___x_1080_ = ((size_t)1ULL);
v___x_1081_ = lean_usize_sub(v___x_1079_, v___x_1080_);
v___x_1082_ = lean_usize_land(v___x_1078_, v___x_1081_);
v___x_1083_ = lean_array_uget_borrowed(v_buckets_1069_, v___x_1082_);
v___x_1084_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1068_, v___x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_m_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_m_1085_, v_a_1086_);
lean_dec_ref(v_a_1086_);
lean_dec_ref(v_m_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_object* v_00_u03b1_1088_, lean_object* v_x_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = lean_apply_1(v_x_1089_, lean_box(0));
v___x_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0___boxed(lean_object* v_00_u03b1_1098_, lean_object* v_x_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(v_00_u03b1_1098_, v_x_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec(v___y_1104_);
lean_dec_ref(v___y_1103_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(lean_object* v_x_1107_, lean_object* v_x_1108_){
_start:
{
if (lean_obj_tag(v_x_1108_) == 0)
{
return v_x_1107_;
}
else
{
lean_object* v_key_1109_; lean_object* v_value_1110_; lean_object* v_tail_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1134_; 
v_key_1109_ = lean_ctor_get(v_x_1108_, 0);
v_value_1110_ = lean_ctor_get(v_x_1108_, 1);
v_tail_1111_ = lean_ctor_get(v_x_1108_, 2);
v_isSharedCheck_1134_ = !lean_is_exclusive(v_x_1108_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1113_ = v_x_1108_;
v_isShared_1114_ = v_isSharedCheck_1134_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_tail_1111_);
lean_inc(v_value_1110_);
lean_inc(v_key_1109_);
lean_dec(v_x_1108_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1134_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; uint64_t v___x_1116_; uint64_t v___x_1117_; uint64_t v___x_1118_; uint64_t v_fold_1119_; uint64_t v___x_1120_; uint64_t v___x_1121_; uint64_t v___x_1122_; size_t v___x_1123_; size_t v___x_1124_; size_t v___x_1125_; size_t v___x_1126_; size_t v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1115_ = lean_array_get_size(v_x_1107_);
v___x_1116_ = l_Lean_Expr_hash(v_key_1109_);
v___x_1117_ = 32ULL;
v___x_1118_ = lean_uint64_shift_right(v___x_1116_, v___x_1117_);
v_fold_1119_ = lean_uint64_xor(v___x_1116_, v___x_1118_);
v___x_1120_ = 16ULL;
v___x_1121_ = lean_uint64_shift_right(v_fold_1119_, v___x_1120_);
v___x_1122_ = lean_uint64_xor(v_fold_1119_, v___x_1121_);
v___x_1123_ = lean_uint64_to_usize(v___x_1122_);
v___x_1124_ = lean_usize_of_nat(v___x_1115_);
v___x_1125_ = ((size_t)1ULL);
v___x_1126_ = lean_usize_sub(v___x_1124_, v___x_1125_);
v___x_1127_ = lean_usize_land(v___x_1123_, v___x_1126_);
v___x_1128_ = lean_array_uget_borrowed(v_x_1107_, v___x_1127_);
lean_inc(v___x_1128_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 2, v___x_1128_);
v___x_1130_ = v___x_1113_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_key_1109_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_value_1110_);
lean_ctor_set(v_reuseFailAlloc_1133_, 2, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_array_uset(v_x_1107_, v___x_1127_, v___x_1130_);
v_x_1107_ = v___x_1131_;
v_x_1108_ = v_tail_1111_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(lean_object* v_i_1135_, lean_object* v_source_1136_, lean_object* v_target_1137_){
_start:
{
lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1138_ = lean_array_get_size(v_source_1136_);
v___x_1139_ = lean_nat_dec_lt(v_i_1135_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_dec_ref(v_source_1136_);
lean_dec(v_i_1135_);
return v_target_1137_;
}
else
{
lean_object* v_es_1140_; lean_object* v___x_1141_; lean_object* v_source_1142_; lean_object* v_target_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v_es_1140_ = lean_array_fget(v_source_1136_, v_i_1135_);
v___x_1141_ = lean_box(0);
v_source_1142_ = lean_array_fset(v_source_1136_, v_i_1135_, v___x_1141_);
v_target_1143_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(v_target_1137_, v_es_1140_);
v___x_1144_ = lean_unsigned_to_nat(1u);
v___x_1145_ = lean_nat_add(v_i_1135_, v___x_1144_);
lean_dec(v_i_1135_);
v_i_1135_ = v___x_1145_;
v_source_1136_ = v_source_1142_;
v_target_1137_ = v_target_1143_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(lean_object* v_data_1147_){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v_nbuckets_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1148_ = lean_array_get_size(v_data_1147_);
v___x_1149_ = lean_unsigned_to_nat(2u);
v_nbuckets_1150_ = lean_nat_mul(v___x_1148_, v___x_1149_);
v___x_1151_ = lean_unsigned_to_nat(0u);
v___x_1152_ = lean_box(0);
v___x_1153_ = lean_mk_array(v_nbuckets_1150_, v___x_1152_);
v___x_1154_ = lean_array_propagate_mark(v_data_1147_, v___x_1153_);
v___x_1155_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(v___x_1151_, v_data_1147_, v___x_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(lean_object* v_a_1156_, lean_object* v_b_1157_, lean_object* v_x_1158_){
_start:
{
if (lean_obj_tag(v_x_1158_) == 0)
{
lean_dec(v_b_1157_);
lean_dec_ref(v_a_1156_);
return v_x_1158_;
}
else
{
lean_object* v_key_1159_; lean_object* v_value_1160_; lean_object* v_tail_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1173_; 
v_key_1159_ = lean_ctor_get(v_x_1158_, 0);
v_value_1160_ = lean_ctor_get(v_x_1158_, 1);
v_tail_1161_ = lean_ctor_get(v_x_1158_, 2);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_x_1158_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1163_ = v_x_1158_;
v_isShared_1164_ = v_isSharedCheck_1173_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_tail_1161_);
lean_inc(v_value_1160_);
lean_inc(v_key_1159_);
lean_dec(v_x_1158_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1173_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
uint8_t v___x_1165_; 
v___x_1165_ = lean_expr_eqv(v_key_1159_, v_a_1156_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1166_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1156_, v_b_1157_, v_tail_1161_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 2, v___x_1166_);
v___x_1168_ = v___x_1163_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_key_1159_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_value_1160_);
lean_ctor_set(v_reuseFailAlloc_1169_, 2, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
else
{
lean_object* v___x_1171_; 
lean_dec(v_value_1160_);
lean_dec(v_key_1159_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v_b_1157_);
lean_ctor_set(v___x_1163_, 0, v_a_1156_);
v___x_1171_ = v___x_1163_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1156_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_b_1157_);
lean_ctor_set(v_reuseFailAlloc_1172_, 2, v_tail_1161_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(lean_object* v_a_1174_, lean_object* v_x_1175_){
_start:
{
if (lean_obj_tag(v_x_1175_) == 0)
{
uint8_t v___x_1176_; 
v___x_1176_ = 0;
return v___x_1176_;
}
else
{
lean_object* v_key_1177_; lean_object* v_tail_1178_; uint8_t v___x_1179_; 
v_key_1177_ = lean_ctor_get(v_x_1175_, 0);
v_tail_1178_ = lean_ctor_get(v_x_1175_, 2);
v___x_1179_ = lean_expr_eqv(v_key_1177_, v_a_1174_);
if (v___x_1179_ == 0)
{
v_x_1175_ = v_tail_1178_;
goto _start;
}
else
{
return v___x_1179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg___boxed(lean_object* v_a_1181_, lean_object* v_x_1182_){
_start:
{
uint8_t v_res_1183_; lean_object* v_r_1184_; 
v_res_1183_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1181_, v_x_1182_);
lean_dec(v_x_1182_);
lean_dec_ref(v_a_1181_);
v_r_1184_ = lean_box(v_res_1183_);
return v_r_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(lean_object* v_m_1185_, lean_object* v_a_1186_, lean_object* v_b_1187_){
_start:
{
lean_object* v_size_1188_; lean_object* v_buckets_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1232_; 
v_size_1188_ = lean_ctor_get(v_m_1185_, 0);
v_buckets_1189_ = lean_ctor_get(v_m_1185_, 1);
v_isSharedCheck_1232_ = !lean_is_exclusive(v_m_1185_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1191_ = v_m_1185_;
v_isShared_1192_ = v_isSharedCheck_1232_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_buckets_1189_);
lean_inc(v_size_1188_);
lean_dec(v_m_1185_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1232_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1193_; uint64_t v___x_1194_; uint64_t v___x_1195_; uint64_t v___x_1196_; uint64_t v_fold_1197_; uint64_t v___x_1198_; uint64_t v___x_1199_; uint64_t v___x_1200_; size_t v___x_1201_; size_t v___x_1202_; size_t v___x_1203_; size_t v___x_1204_; size_t v___x_1205_; lean_object* v_bkt_1206_; uint8_t v___x_1207_; 
v___x_1193_ = lean_array_get_size(v_buckets_1189_);
v___x_1194_ = l_Lean_Expr_hash(v_a_1186_);
v___x_1195_ = 32ULL;
v___x_1196_ = lean_uint64_shift_right(v___x_1194_, v___x_1195_);
v_fold_1197_ = lean_uint64_xor(v___x_1194_, v___x_1196_);
v___x_1198_ = 16ULL;
v___x_1199_ = lean_uint64_shift_right(v_fold_1197_, v___x_1198_);
v___x_1200_ = lean_uint64_xor(v_fold_1197_, v___x_1199_);
v___x_1201_ = lean_uint64_to_usize(v___x_1200_);
v___x_1202_ = lean_usize_of_nat(v___x_1193_);
v___x_1203_ = ((size_t)1ULL);
v___x_1204_ = lean_usize_sub(v___x_1202_, v___x_1203_);
v___x_1205_ = lean_usize_land(v___x_1201_, v___x_1204_);
v_bkt_1206_ = lean_array_uget_borrowed(v_buckets_1189_, v___x_1205_);
v___x_1207_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1186_, v_bkt_1206_);
if (v___x_1207_ == 0)
{
lean_object* v___x_1208_; lean_object* v_size_x27_1209_; lean_object* v___x_1210_; lean_object* v_buckets_x27_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; 
v___x_1208_ = lean_unsigned_to_nat(1u);
v_size_x27_1209_ = lean_nat_add(v_size_1188_, v___x_1208_);
lean_dec(v_size_1188_);
lean_inc(v_bkt_1206_);
v___x_1210_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1210_, 0, v_a_1186_);
lean_ctor_set(v___x_1210_, 1, v_b_1187_);
lean_ctor_set(v___x_1210_, 2, v_bkt_1206_);
v_buckets_x27_1211_ = lean_array_uset(v_buckets_1189_, v___x_1205_, v___x_1210_);
v___x_1212_ = lean_unsigned_to_nat(4u);
v___x_1213_ = lean_nat_mul(v_size_x27_1209_, v___x_1212_);
v___x_1214_ = lean_unsigned_to_nat(3u);
v___x_1215_ = lean_nat_div(v___x_1213_, v___x_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lean_array_get_size(v_buckets_x27_1211_);
v___x_1217_ = lean_nat_dec_le(v___x_1215_, v___x_1216_);
lean_dec(v___x_1215_);
if (v___x_1217_ == 0)
{
lean_object* v_val_1218_; lean_object* v___x_1220_; 
v_val_1218_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(v_buckets_x27_1211_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v_val_1218_);
lean_ctor_set(v___x_1191_, 0, v_size_x27_1209_);
v___x_1220_ = v___x_1191_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_size_x27_1209_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_val_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
else
{
lean_object* v___x_1223_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v_buckets_x27_1211_);
lean_ctor_set(v___x_1191_, 0, v_size_x27_1209_);
v___x_1223_ = v___x_1191_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_size_x27_1209_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_buckets_x27_1211_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
else
{
lean_object* v___x_1225_; lean_object* v_buckets_x27_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1230_; 
lean_inc(v_bkt_1206_);
v___x_1225_ = lean_box(0);
v_buckets_x27_1226_ = lean_array_uset(v_buckets_1189_, v___x_1205_, v___x_1225_);
v___x_1227_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1186_, v_b_1187_, v_bkt_1206_);
v___x_1228_ = lean_array_uset(v_buckets_x27_1226_, v___x_1205_, v___x_1227_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1228_);
v___x_1230_ = v___x_1191_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_size_1188_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v___x_1228_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(lean_object* v_a_1233_, lean_object* v_e_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1237_ = lean_st_ref_take(v_a_1233_);
v___x_1238_ = lean_box(0);
v___x_1239_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v___x_1237_, v_e_1234_, v_a_1235_);
v___x_1240_ = lean_st_ref_put(v_a_1233_, v___x_1239_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed(lean_object* v_a_1241_, lean_object* v_e_1242_, lean_object* v_a_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(v_a_1241_, v_e_1242_, v_a_1243_);
lean_dec(v_a_1241_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_fn_1246_, lean_object* v_e_1247_, lean_object* v_a_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1246_, v_e_1247_, v_a_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1249_);
lean_dec(v_a_1248_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(lean_object* v_fn_1256_, lean_object* v_e_1257_, lean_object* v_a_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v_a_1266_; lean_object* v___y_1278_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
lean_inc(v_a_1258_);
v___x_1280_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1280_, 0, lean_box(0));
lean_closure_set(v___x_1280_, 1, lean_box(0));
lean_closure_set(v___x_1280_, 2, v_a_1258_);
v___x_1281_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_box(0), v___x_1280_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1318_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1284_ = v___x_1281_;
v_isShared_1285_ = v_isSharedCheck_1318_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1281_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1318_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1286_; 
v___x_1286_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_a_1282_, v_e_1257_);
lean_dec(v_a_1282_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v___x_1287_; 
lean_del_object(v___x_1284_);
lean_inc_ref(v_fn_1256_);
lean_inc(v___y_1263_);
lean_inc_ref(v___y_1262_);
lean_inc(v___y_1261_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc_ref(v_e_1257_);
v___x_1287_ = lean_apply_7(v_fn_1256_, v_e_1257_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, lean_box(0));
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v_a_1288_; uint8_t v___x_1289_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1287_, 1);
v___x_1289_ = lean_unbox(v_a_1288_);
lean_dec(v_a_1288_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; 
lean_dec_ref(v_fn_1256_);
v___x_1290_ = lean_box(0);
v_a_1266_ = v___x_1290_;
goto v___jp_1265_;
}
else
{
switch(lean_obj_tag(v_e_1257_))
{
case 7:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1291_, 0, v_fn_1256_);
lean_inc_ref(v_e_1257_);
v___x_1292_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(v___x_1291_, v_e_1257_, v_a_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
v___y_1278_ = v___x_1292_;
goto v___jp_1277_;
}
case 6:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1293_, 0, v_fn_1256_);
lean_inc_ref(v_e_1257_);
v___x_1294_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(v___x_1293_, v_e_1257_, v_a_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
v___y_1278_ = v___x_1294_;
goto v___jp_1277_;
}
case 8:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1295_, 0, v_fn_1256_);
lean_inc_ref(v_e_1257_);
v___x_1296_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(v___x_1295_, v_e_1257_, v_a_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
v___y_1278_ = v___x_1296_;
goto v___jp_1277_;
}
case 5:
{
lean_object* v_fn_1297_; lean_object* v_arg_1298_; lean_object* v___x_1299_; 
v_fn_1297_ = lean_ctor_get(v_e_1257_, 0);
v_arg_1298_ = lean_ctor_get(v_e_1257_, 1);
lean_inc_ref(v_fn_1297_);
lean_inc_ref(v_fn_1256_);
v___x_1299_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1256_, v_fn_1297_, v_a_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v___x_1300_; 
lean_dec_ref_known(v___x_1299_, 1);
lean_inc_ref(v_arg_1298_);
v___x_1300_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1256_, v_arg_1298_, v_a_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
v___y_1278_ = v___x_1300_;
goto v___jp_1277_;
}
else
{
lean_dec_ref_known(v_e_1257_, 2);
lean_dec_ref(v_fn_1256_);
return v___x_1299_;
}
}
case 10:
{
lean_object* v_expr_1301_; lean_object* v___x_1302_; 
v_expr_1301_ = lean_ctor_get(v_e_1257_, 1);
lean_inc_ref(v_expr_1301_);
v___x_1302_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1256_, v_expr_1301_, v_a_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
v___y_1278_ = v___x_1302_;
goto v___jp_1277_;
}
case 11:
{
lean_object* v_struct_1303_; lean_object* v___x_1304_; 
v_struct_1303_ = lean_ctor_get(v_e_1257_, 2);
lean_inc_ref(v_struct_1303_);
v___x_1304_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1256_, v_struct_1303_, v_a_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
v___y_1278_ = v___x_1304_;
goto v___jp_1277_;
}
default: 
{
lean_object* v___x_1305_; 
lean_dec_ref(v_fn_1256_);
v___x_1305_ = lean_box(0);
v_a_1266_ = v___x_1305_;
goto v___jp_1265_;
}
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1313_; 
lean_dec_ref(v_e_1257_);
lean_dec_ref(v_fn_1256_);
v_a_1306_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1308_ = v___x_1287_;
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1287_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1313_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
else
{
lean_object* v_val_1314_; lean_object* v___x_1316_; 
lean_dec_ref(v_e_1257_);
lean_dec_ref(v_fn_1256_);
v_val_1314_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_val_1314_);
lean_dec_ref_known(v___x_1286_, 1);
if (v_isShared_1285_ == 0)
{
lean_ctor_set(v___x_1284_, 0, v_val_1314_);
v___x_1316_ = v___x_1284_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_val_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
lean_dec_ref(v_e_1257_);
lean_dec_ref(v_fn_1256_);
v_a_1319_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1281_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1281_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_a_1319_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
v___jp_1265_:
{
lean_object* v___f_1267_; lean_object* v___x_1268_; 
lean_inc(v_a_1258_);
v___f_1267_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1267_, 0, v_a_1258_);
lean_closure_set(v___f_1267_, 1, v_e_1257_);
lean_closure_set(v___f_1267_, 2, v_a_1266_);
v___x_1268_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_box(0), v___f_1267_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1275_ == 0)
{
lean_object* v_unused_1276_; 
v_unused_1276_ = lean_ctor_get(v___x_1268_, 0);
lean_dec(v_unused_1276_);
v___x_1270_ = v___x_1268_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_dec(v___x_1268_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 0, v_a_1266_);
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1266_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
else
{
return v___x_1268_;
}
}
v___jp_1277_:
{
if (lean_obj_tag(v___y_1278_) == 0)
{
lean_object* v_a_1279_; 
v_a_1279_ = lean_ctor_get(v___y_1278_, 0);
lean_inc(v_a_1279_);
lean_dec_ref_known(v___y_1278_, 1);
v_a_1266_ = v_a_1279_;
goto v___jp_1265_;
}
else
{
lean_dec_ref(v_e_1257_);
return v___y_1278_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_unsigned_to_nat(16u);
v___x_1329_ = lean_mk_array(v___x_1328_, v___x_1327_);
return v___x_1329_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0);
v___x_1331_ = lean_unsigned_to_nat(0u);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
lean_ctor_set(v___x_1332_, 1, v___x_1330_);
return v___x_1332_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1);
v___x_1334_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1334_, 0, lean_box(0));
lean_closure_set(v___x_1334_, 1, lean_box(0));
lean_closure_set(v___x_1334_, 2, v___x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(lean_object* v_input_1335_, lean_object* v_fn_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v_a_1345_; lean_object* v___x_1346_; 
v___x_1343_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2);
v___x_1344_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_box(0), v___x_1343_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref(v___x_1344_);
v___x_1346_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1336_, v_input_1335_, v_a_1345_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1347_);
lean_dec_ref_known(v___x_1346_, 1);
v___x_1348_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1348_, 0, lean_box(0));
lean_closure_set(v___x_1348_, 1, lean_box(0));
lean_closure_set(v___x_1348_, 2, v_a_1345_);
v___x_1349_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_box(0), v___x_1348_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1356_ == 0)
{
lean_object* v_unused_1357_; 
v_unused_1357_ = lean_ctor_get(v___x_1349_, 0);
lean_dec(v_unused_1357_);
v___x_1351_ = v___x_1349_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_dec(v___x_1349_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 0, v_a_1347_);
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_a_1347_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
else
{
lean_dec(v_a_1345_);
return v___x_1346_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___boxed(lean_object* v_input_1358_, lean_object* v_fn_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(v_input_1358_, v_fn_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(lean_object* v_input_1367_, lean_object* v_fn_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v___f_1375_; lean_object* v___x_1376_; 
v___f_1375_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1375_, 0, v_fn_1368_);
v___x_1376_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(v_input_1367_, v___f_1375_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___boxed(lean_object* v_input_1377_, lean_object* v_fn_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_input_1377_, v_fn_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(lean_object* v_fn_1386_, lean_object* v_x_1387_, lean_object* v_x_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
if (lean_obj_tag(v_x_1388_) == 0)
{
lean_object* v___x_1395_; 
lean_dec_ref(v_fn_1386_);
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v_x_1387_);
return v___x_1395_;
}
else
{
lean_object* v_head_1396_; lean_object* v_tail_1397_; lean_object* v_type_1398_; lean_object* v___x_1399_; 
v_head_1396_ = lean_ctor_get(v_x_1388_, 0);
lean_inc(v_head_1396_);
v_tail_1397_ = lean_ctor_get(v_x_1388_, 1);
lean_inc(v_tail_1397_);
lean_dec_ref_known(v_x_1388_, 2);
v_type_1398_ = lean_ctor_get(v_head_1396_, 1);
lean_inc_ref(v_type_1398_);
lean_dec(v_head_1396_);
lean_inc_ref(v_fn_1386_);
v___x_1399_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1398_, v_fn_1386_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_a_1400_);
lean_dec_ref_known(v___x_1399_, 1);
v_x_1387_ = v_a_1400_;
v_x_1388_ = v_tail_1397_;
goto _start;
}
else
{
lean_dec(v_tail_1397_);
lean_dec_ref(v_fn_1386_);
return v___x_1399_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4___boxed(lean_object* v_fn_1402_, lean_object* v_x_1403_, lean_object* v_x_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(v_fn_1402_, v_x_1403_, v_x_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(lean_object* v_fn_1412_, lean_object* v_x_1413_, lean_object* v_x_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
if (lean_obj_tag(v_x_1414_) == 0)
{
lean_object* v___x_1421_; 
lean_dec_ref(v_fn_1412_);
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v_x_1413_);
return v___x_1421_;
}
else
{
lean_object* v_head_1422_; lean_object* v_tail_1423_; lean_object* v_type_1424_; lean_object* v_ctors_1425_; lean_object* v___x_1426_; 
v_head_1422_ = lean_ctor_get(v_x_1414_, 0);
lean_inc(v_head_1422_);
v_tail_1423_ = lean_ctor_get(v_x_1414_, 1);
lean_inc(v_tail_1423_);
lean_dec_ref_known(v_x_1414_, 2);
v_type_1424_ = lean_ctor_get(v_head_1422_, 1);
lean_inc_ref(v_type_1424_);
v_ctors_1425_ = lean_ctor_get(v_head_1422_, 2);
lean_inc(v_ctors_1425_);
lean_dec(v_head_1422_);
lean_inc_ref(v_fn_1412_);
v___x_1426_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1424_, v_fn_1412_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1428_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1426_, 1);
lean_inc_ref(v_fn_1412_);
v___x_1428_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(v_fn_1412_, v_a_1427_, v_ctors_1425_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref_known(v___x_1428_, 1);
v_x_1413_ = v_a_1429_;
v_x_1414_ = v_tail_1423_;
goto _start;
}
else
{
lean_dec(v_tail_1423_);
lean_dec_ref(v_fn_1412_);
return v___x_1428_;
}
}
else
{
lean_dec(v_ctors_1425_);
lean_dec(v_tail_1423_);
lean_dec_ref(v_fn_1412_);
return v___x_1426_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6___boxed(lean_object* v_fn_1431_, lean_object* v_x_1432_, lean_object* v_x_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_){
_start:
{
lean_object* v_res_1440_; 
v_res_1440_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(v_fn_1431_, v_x_1432_, v_x_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(lean_object* v_fn_1441_, lean_object* v_x_1442_, lean_object* v_x_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
if (lean_obj_tag(v_x_1443_) == 0)
{
lean_object* v___x_1450_; 
lean_dec_ref(v_fn_1441_);
v___x_1450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1450_, 0, v_x_1442_);
return v___x_1450_;
}
else
{
lean_object* v_head_1451_; lean_object* v_toConstantVal_1452_; lean_object* v_tail_1453_; lean_object* v_value_1454_; lean_object* v_type_1455_; lean_object* v___x_1456_; 
v_head_1451_ = lean_ctor_get(v_x_1443_, 0);
lean_inc(v_head_1451_);
v_toConstantVal_1452_ = lean_ctor_get(v_head_1451_, 0);
lean_inc_ref(v_toConstantVal_1452_);
v_tail_1453_ = lean_ctor_get(v_x_1443_, 1);
lean_inc(v_tail_1453_);
lean_dec_ref_known(v_x_1443_, 2);
v_value_1454_ = lean_ctor_get(v_head_1451_, 1);
lean_inc_ref(v_value_1454_);
lean_dec(v_head_1451_);
v_type_1455_ = lean_ctor_get(v_toConstantVal_1452_, 2);
lean_inc_ref(v_type_1455_);
lean_dec_ref(v_toConstantVal_1452_);
lean_inc_ref(v_fn_1441_);
v___x_1456_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1455_, v_fn_1441_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v___x_1457_; 
lean_dec_ref_known(v___x_1456_, 1);
lean_inc_ref(v_fn_1441_);
v___x_1457_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_value_1454_, v_fn_1441_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v_x_1442_ = v_a_1458_;
v_x_1443_ = v_tail_1453_;
goto _start;
}
else
{
lean_dec(v_tail_1453_);
lean_dec_ref(v_fn_1441_);
return v___x_1457_;
}
}
else
{
lean_dec_ref(v_value_1454_);
lean_dec(v_tail_1453_);
lean_dec_ref(v_fn_1441_);
return v___x_1456_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5___boxed(lean_object* v_fn_1460_, lean_object* v_x_1461_, lean_object* v_x_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(v_fn_1460_, v_x_1461_, v_x_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(lean_object* v_fn_1470_, lean_object* v_d_1471_, lean_object* v_a_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
switch(lean_obj_tag(v_d_1471_))
{
case 0:
{
lean_object* v_val_1479_; lean_object* v_toConstantVal_1480_; lean_object* v_type_1481_; lean_object* v___x_1482_; 
v_val_1479_ = lean_ctor_get(v_d_1471_, 0);
lean_inc_ref(v_val_1479_);
lean_dec_ref_known(v_d_1471_, 1);
v_toConstantVal_1480_ = lean_ctor_get(v_val_1479_, 0);
lean_inc_ref(v_toConstantVal_1480_);
lean_dec_ref(v_val_1479_);
v_type_1481_ = lean_ctor_get(v_toConstantVal_1480_, 2);
lean_inc_ref(v_type_1481_);
lean_dec_ref(v_toConstantVal_1480_);
v___x_1482_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1481_, v_fn_1470_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
return v___x_1482_;
}
case 4:
{
lean_object* v___x_1483_; 
lean_dec_ref(v_fn_1470_);
v___x_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1483_, 0, v_a_1472_);
return v___x_1483_;
}
case 5:
{
lean_object* v_defns_1484_; lean_object* v___x_1485_; 
v_defns_1484_ = lean_ctor_get(v_d_1471_, 0);
lean_inc(v_defns_1484_);
lean_dec_ref_known(v_d_1471_, 1);
v___x_1485_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(v_fn_1470_, v_a_1472_, v_defns_1484_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
return v___x_1485_;
}
case 6:
{
lean_object* v_types_1486_; lean_object* v___x_1487_; 
v_types_1486_ = lean_ctor_get(v_d_1471_, 2);
lean_inc(v_types_1486_);
lean_dec_ref_known(v_d_1471_, 3);
v___x_1487_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(v_fn_1470_, v_a_1472_, v_types_1486_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
return v___x_1487_;
}
default: 
{
lean_object* v_val_1488_; lean_object* v_toConstantVal_1489_; lean_object* v_value_1490_; lean_object* v_type_1491_; lean_object* v___x_1492_; 
v_val_1488_ = lean_ctor_get(v_d_1471_, 0);
lean_inc_ref(v_val_1488_);
lean_dec(v_d_1471_);
v_toConstantVal_1489_ = lean_ctor_get(v_val_1488_, 0);
lean_inc_ref(v_toConstantVal_1489_);
v_value_1490_ = lean_ctor_get(v_val_1488_, 1);
lean_inc_ref(v_value_1490_);
lean_dec_ref(v_val_1488_);
v_type_1491_ = lean_ctor_get(v_toConstantVal_1489_, 2);
lean_inc_ref(v_type_1491_);
lean_dec_ref(v_toConstantVal_1489_);
lean_inc_ref(v_fn_1470_);
v___x_1492_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1491_, v_fn_1470_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v___x_1493_; 
lean_dec_ref_known(v___x_1492_, 1);
v___x_1493_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_value_1490_, v_fn_1470_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
return v___x_1493_;
}
else
{
lean_dec_ref(v_value_1490_);
lean_dec_ref(v_fn_1470_);
return v___x_1492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2___boxed(lean_object* v_fn_1494_, lean_object* v_d_1495_, lean_object* v_a_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v_res_1503_; 
v_res_1503_ = l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(v_fn_1494_, v_d_1495_, v_a_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(lean_object* v_decl_1504_, lean_object* v_fn_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_box(0);
v___x_1513_ = l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(v_fn_1505_, v_decl_1504_, v___x_1512_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1___boxed(lean_object* v_decl_1514_, lean_object* v_fn_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(v_decl_1514_, v_fn_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
return v_res_1522_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__2(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1526_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
return v___x_1527_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__3(void){
_start:
{
lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1528_ = lean_box(1);
v___x_1529_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_1530_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1531_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
lean_ctor_set(v___x_1531_, 1, v___x_1529_);
lean_ctor_set(v___x_1531_, 2, v___x_1528_);
return v___x_1531_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__4(void){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1532_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_1533_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1534_ = lean_unsigned_to_nat(0u);
v___x_1535_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1534_);
lean_ctor_set(v___x_1535_, 1, v___x_1534_);
lean_ctor_set(v___x_1535_, 2, v___x_1534_);
lean_ctor_set(v___x_1535_, 3, v___x_1534_);
lean_ctor_set(v___x_1535_, 4, v___x_1533_);
lean_ctor_set(v___x_1535_, 5, v___x_1533_);
lean_ctor_set(v___x_1535_, 6, v___x_1533_);
lean_ctor_set(v___x_1535_, 7, v___x_1533_);
lean_ctor_set(v___x_1535_, 8, v___x_1533_);
lean_ctor_set(v___x_1535_, 9, v___x_1533_);
lean_ctor_set(v___x_1535_, 10, v___x_1533_);
lean_ctor_set(v___x_1535_, 11, v___x_1532_);
return v___x_1535_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__5(void){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1537_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1536_);
lean_ctor_set(v___x_1537_, 1, v___x_1536_);
lean_ctor_set(v___x_1537_, 2, v___x_1536_);
lean_ctor_set(v___x_1537_, 3, v___x_1536_);
lean_ctor_set(v___x_1537_, 4, v___x_1536_);
lean_ctor_set(v___x_1537_, 5, v___x_1536_);
return v___x_1537_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__6(void){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
lean_ctor_set(v___x_1539_, 1, v___x_1538_);
lean_ctor_set(v___x_1539_, 2, v___x_1538_);
lean_ctor_set(v___x_1539_, 3, v___x_1538_);
lean_ctor_set(v___x_1539_, 4, v___x_1538_);
return v___x_1539_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__7(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1540_ = lean_unsigned_to_nat(0u);
v___x_1541_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__6, &l_Lean_warnIfUsesSorry___closed__6_once, _init_l_Lean_warnIfUsesSorry___closed__6);
v___x_1542_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_1543_ = lean_box(1);
v___x_1544_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__5, &l_Lean_warnIfUsesSorry___closed__5_once, _init_l_Lean_warnIfUsesSorry___closed__5);
v___x_1545_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__4, &l_Lean_warnIfUsesSorry___closed__4_once, _init_l_Lean_warnIfUsesSorry___closed__4);
v___x_1546_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1545_);
lean_ctor_set(v___x_1546_, 1, v___x_1544_);
lean_ctor_set(v___x_1546_, 2, v___x_1543_);
lean_ctor_set(v___x_1546_, 3, v___x_1542_);
lean_ctor_set(v___x_1546_, 4, v___x_1541_);
lean_ctor_set(v___x_1546_, 5, v___x_1540_);
return v___x_1546_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__11(void){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1551_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__10));
v___x_1552_ = l_Lean_stringToMessageData(v___x_1551_);
return v___x_1552_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__13(void){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__12));
v___x_1555_ = l_Lean_stringToMessageData(v___x_1554_);
return v___x_1555_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__15(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1557_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__14));
v___x_1558_ = l_Lean_stringToMessageData(v___x_1557_);
return v___x_1558_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__16(void){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1559_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__15, &l_Lean_warnIfUsesSorry___closed__15_once, _init_l_Lean_warnIfUsesSorry___closed__15);
v___x_1560_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__9));
v___x_1561_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
lean_ctor_set(v___x_1561_, 1, v___x_1559_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry(lean_object* v_decl_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1569_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_1566_);
v___x_1570_ = l_Lean_warn_sorry;
v___x_1571_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_1569_, v___x_1570_);
lean_dec_ref(v___x_1569_);
if (v___x_1571_ == 0)
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec(v_decl_1565_);
v___x_1572_ = lean_box(0);
v___x_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
return v___x_1573_;
}
else
{
lean_object* v___f_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v_messages_1580_; uint8_t v___x_1581_; 
v___f_1574_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__0));
v___x_1575_ = lean_box(1);
v___x_1576_ = lean_st_ref_get(v_a_1567_);
v_messages_1580_ = lean_ctor_get(v___x_1576_, 7);
lean_inc_ref(v_messages_1580_);
lean_dec(v___x_1576_);
v___x_1581_ = l_Lean_MessageLog_hasErrors(v_messages_1580_);
lean_dec_ref(v_messages_1580_);
if (v___x_1581_ == 0)
{
uint8_t v___x_1582_; 
v___x_1582_ = l_Lean_Declaration_hasSorry(v_decl_1565_);
if (v___x_1582_ == 0)
{
lean_dec(v_decl_1565_);
goto v___jp_1577_;
}
else
{
lean_object* v___x_1583_; lean_object* v___x_1584_; uint8_t v___x_1585_; uint8_t v___x_1586_; uint8_t v___x_1587_; lean_object* v___x_1588_; uint64_t v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1583_ = lean_unsigned_to_nat(0u);
v___x_1584_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__1));
v___x_1585_ = 1;
v___x_1586_ = 0;
v___x_1587_ = 2;
v___x_1588_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_1588_, 0, v___x_1581_);
lean_ctor_set_uint8(v___x_1588_, 1, v___x_1581_);
lean_ctor_set_uint8(v___x_1588_, 2, v___x_1581_);
lean_ctor_set_uint8(v___x_1588_, 3, v___x_1581_);
lean_ctor_set_uint8(v___x_1588_, 4, v___x_1581_);
lean_ctor_set_uint8(v___x_1588_, 5, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 6, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 7, v___x_1581_);
lean_ctor_set_uint8(v___x_1588_, 8, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 9, v___x_1585_);
lean_ctor_set_uint8(v___x_1588_, 10, v___x_1586_);
lean_ctor_set_uint8(v___x_1588_, 11, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 12, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 13, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 14, v___x_1587_);
lean_ctor_set_uint8(v___x_1588_, 15, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 16, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 17, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 18, v___x_1582_);
lean_ctor_set_uint8(v___x_1588_, 19, v___x_1581_);
v___x_1589_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1588_);
v___x_1590_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1590_, 0, v___x_1588_);
lean_ctor_set_uint64(v___x_1590_, sizeof(void*)*1, v___x_1589_);
v___x_1591_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__3, &l_Lean_warnIfUsesSorry___closed__3_once, _init_l_Lean_warnIfUsesSorry___closed__3);
v___x_1592_ = lean_box(0);
v___x_1593_ = lean_alloc_ctor(0, 8, 5);
lean_ctor_set(v___x_1593_, 0, v___x_1590_);
lean_ctor_set(v___x_1593_, 1, v___x_1575_);
lean_ctor_set(v___x_1593_, 2, v___x_1591_);
lean_ctor_set(v___x_1593_, 3, v___x_1584_);
lean_ctor_set(v___x_1593_, 4, v___x_1592_);
lean_ctor_set(v___x_1593_, 5, v___x_1583_);
lean_ctor_set(v___x_1593_, 6, v___x_1592_);
lean_ctor_set(v___x_1593_, 7, v___x_1592_);
lean_ctor_set_uint8(v___x_1593_, sizeof(void*)*8, v___x_1581_);
lean_ctor_set_uint8(v___x_1593_, sizeof(void*)*8 + 1, v___x_1581_);
lean_ctor_set_uint8(v___x_1593_, sizeof(void*)*8 + 2, v___x_1581_);
lean_ctor_set_uint8(v___x_1593_, sizeof(void*)*8 + 3, v___x_1571_);
lean_ctor_set_uint8(v___x_1593_, sizeof(void*)*8 + 4, v___x_1581_);
v___x_1594_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__7, &l_Lean_warnIfUsesSorry___closed__7_once, _init_l_Lean_warnIfUsesSorry___closed__7);
v___x_1595_ = lean_st_mk_ref(v___x_1594_);
v___x_1596_ = lean_st_mk_ref(v___x_1584_);
v___x_1597_ = l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(v_decl_1565_, v___f_1574_, v___x_1596_, v___x_1593_, v___x_1595_, v_a_1566_, v_a_1567_);
lean_dec_ref_known(v___x_1593_, 8);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v_val_1601_; lean_object* v___x_1623_; size_t v_sz_1624_; size_t v___x_1625_; lean_object* v___x_1626_; lean_object* v_fst_1627_; 
lean_dec_ref_known(v___x_1597_, 1);
v___x_1598_ = lean_st_ref_get(v___x_1596_);
lean_dec(v___x_1596_);
v___x_1599_ = lean_st_ref_get(v___x_1595_);
lean_dec(v___x_1595_);
lean_dec(v___x_1599_);
v___x_1623_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__17));
v_sz_1624_ = lean_array_size(v___x_1598_);
v___x_1625_ = ((size_t)0ULL);
v___x_1626_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(v___x_1598_, v_sz_1624_, v___x_1625_, v___x_1623_);
v_fst_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_fst_1627_);
lean_dec_ref(v___x_1626_);
if (lean_obj_tag(v_fst_1627_) == 0)
{
goto v___jp_1617_;
}
else
{
lean_object* v_val_1628_; 
v_val_1628_ = lean_ctor_get(v_fst_1627_, 0);
lean_inc(v_val_1628_);
lean_dec_ref_known(v_fst_1627_, 1);
if (lean_obj_tag(v_val_1628_) == 0)
{
goto v___jp_1617_;
}
else
{
lean_object* v_val_1629_; 
lean_dec(v___x_1598_);
v_val_1629_ = lean_ctor_get(v_val_1628_, 0);
lean_inc(v_val_1629_);
lean_dec_ref_known(v_val_1628_, 1);
v_val_1601_ = v_val_1629_;
goto v___jp_1600_;
}
}
v___jp_1600_:
{
lean_object* v_snd_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1615_; 
v_snd_1602_ = lean_ctor_get(v_val_1601_, 1);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_val_1601_);
if (v_isSharedCheck_1615_ == 0)
{
lean_object* v_unused_1616_; 
v_unused_1616_ = lean_ctor_get(v_val_1601_, 0);
lean_dec(v_unused_1616_);
v___x_1604_ = v_val_1601_;
v_isShared_1605_ = v_isSharedCheck_1615_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_snd_1602_);
lean_dec(v_val_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1615_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1609_; 
v___x_1606_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__9));
v___x_1607_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__11, &l_Lean_warnIfUsesSorry___closed__11_once, _init_l_Lean_warnIfUsesSorry___closed__11);
if (v_isShared_1605_ == 0)
{
lean_ctor_set_tag(v___x_1604_, 7);
lean_ctor_set(v___x_1604_, 0, v___x_1607_);
v___x_1609_ = v___x_1604_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1607_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_snd_1602_);
v___x_1609_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1610_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__13, &l_Lean_warnIfUsesSorry___closed__13_once, _init_l_Lean_warnIfUsesSorry___closed__13);
v___x_1611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1609_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
v___x_1612_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1606_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v___x_1612_, v_a_1566_, v_a_1567_);
return v___x_1613_;
}
}
}
v___jp_1617_:
{
lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1618_ = lean_array_get_size(v___x_1598_);
v___x_1619_ = lean_nat_dec_lt(v___x_1583_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_dec(v___x_1598_);
v___x_1620_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__16, &l_Lean_warnIfUsesSorry___closed__16_once, _init_l_Lean_warnIfUsesSorry___closed__16);
v___x_1621_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v___x_1620_, v_a_1566_, v_a_1567_);
return v___x_1621_;
}
else
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_array_fget(v___x_1598_, v___x_1583_);
lean_dec(v___x_1598_);
v_val_1601_ = v___x_1622_;
goto v___jp_1600_;
}
}
}
else
{
lean_dec(v___x_1596_);
lean_dec(v___x_1595_);
return v___x_1597_;
}
}
}
else
{
lean_dec(v_decl_1565_);
goto v___jp_1577_;
}
v___jp_1577_:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1578_ = lean_box(0);
v___x_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
return v___x_1579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___boxed(lean_object* v_decl_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lean_warnIfUsesSorry(v_decl_1630_, v_a_1631_, v_a_1632_);
lean_dec(v_a_1632_);
lean_dec_ref(v_a_1631_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_1635_, lean_object* v_m_1636_, lean_object* v_a_1637_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_m_1636_, v_a_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1639_, lean_object* v_m_1640_, lean_object* v_a_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(v_00_u03b2_1639_, v_m_1640_, v_a_1641_);
lean_dec_ref(v_a_1641_);
lean_dec_ref(v_m_1640_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9(lean_object* v_00_u03b2_1643_, lean_object* v_m_1644_, lean_object* v_a_1645_, lean_object* v_b_1646_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v_m_1644_, v_a_1645_, v_b_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(lean_object* v_00_u03b2_1648_, lean_object* v_a_1649_, lean_object* v_x_1650_){
_start:
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1649_, v_x_1650_);
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___boxed(lean_object* v_00_u03b2_1652_, lean_object* v_a_1653_, lean_object* v_x_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(v_00_u03b2_1652_, v_a_1653_, v_x_1654_);
lean_dec(v_x_1654_);
lean_dec_ref(v_a_1653_);
return v_res_1655_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(lean_object* v_00_u03b2_1656_, lean_object* v_a_1657_, lean_object* v_x_1658_){
_start:
{
uint8_t v___x_1659_; 
v___x_1659_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1657_, v_x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___boxed(lean_object* v_00_u03b2_1660_, lean_object* v_a_1661_, lean_object* v_x_1662_){
_start:
{
uint8_t v_res_1663_; lean_object* v_r_1664_; 
v_res_1663_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(v_00_u03b2_1660_, v_a_1661_, v_x_1662_);
lean_dec(v_x_1662_);
lean_dec_ref(v_a_1661_);
v_r_1664_ = lean_box(v_res_1663_);
return v_r_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17(lean_object* v_00_u03b2_1665_, lean_object* v_data_1666_){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(v_data_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18(lean_object* v_00_u03b2_1668_, lean_object* v_a_1669_, lean_object* v_b_1670_, lean_object* v_x_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1669_, v_b_1670_, v_x_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(lean_object* v_00_u03b1_1673_, lean_object* v_name_1674_, uint8_t v_bi_1675_, lean_object* v_type_1676_, lean_object* v_k_1677_, uint8_t v_kind_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v___x_1686_; 
v___x_1686_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_name_1674_, v_bi_1675_, v_type_1676_, v_k_1677_, v_kind_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___boxed(lean_object* v_00_u03b1_1687_, lean_object* v_name_1688_, lean_object* v_bi_1689_, lean_object* v_type_1690_, lean_object* v_k_1691_, lean_object* v_kind_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
uint8_t v_bi_boxed_1700_; uint8_t v_kind_boxed_1701_; lean_object* v_res_1702_; 
v_bi_boxed_1700_ = lean_unbox(v_bi_1689_);
v_kind_boxed_1701_ = lean_unbox(v_kind_1692_);
v_res_1702_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(v_00_u03b1_1687_, v_name_1688_, v_bi_boxed_1700_, v_type_1690_, v_k_1691_, v_kind_boxed_1701_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec(v___y_1693_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(lean_object* v_00_u03b1_1703_, lean_object* v_name_1704_, lean_object* v_type_1705_, lean_object* v_val_1706_, lean_object* v_k_1707_, uint8_t v_nondep_1708_, uint8_t v_kind_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_name_1704_, v_type_1705_, v_val_1706_, v_k_1707_, v_nondep_1708_, v_kind_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___boxed(lean_object* v_00_u03b1_1718_, lean_object* v_name_1719_, lean_object* v_type_1720_, lean_object* v_val_1721_, lean_object* v_k_1722_, lean_object* v_nondep_1723_, lean_object* v_kind_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
uint8_t v_nondep_boxed_1732_; uint8_t v_kind_boxed_1733_; lean_object* v_res_1734_; 
v_nondep_boxed_1732_ = lean_unbox(v_nondep_1723_);
v_kind_boxed_1733_ = lean_unbox(v_kind_1724_);
v_res_1734_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(v_00_u03b1_1718_, v_name_1719_, v_type_1720_, v_val_1721_, v_k_1722_, v_nondep_boxed_1732_, v_kind_boxed_1733_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec(v___y_1725_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18(lean_object* v_00_u03b2_1735_, lean_object* v_i_1736_, lean_object* v_source_1737_, lean_object* v_target_1738_){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(v_i_1736_, v_source_1737_, v_target_1738_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22(lean_object* v_00_u03b2_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(v_x_1741_, v_x_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1793_; uint8_t v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1793_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1794_ = 0;
v___x_1795_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1796_ = l_Lean_registerTraceClass(v___x_1793_, v___x_1794_, v___x_1795_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2____boxed(lean_object* v_a_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordOriginalConstKind(lean_object* v_env_1799_, lean_object* v_declName_1800_, uint8_t v_kind_1801_){
_start:
{
lean_object* v___x_1802_; uint8_t v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1802_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_1803_ = 0;
v___x_1804_ = lean_box(v_kind_1801_);
v___x_1805_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1802_, v_env_1799_, v_declName_1800_, v___x_1804_, v___x_1803_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordOriginalConstKind___boxed(lean_object* v_env_1806_, lean_object* v_declName_1807_, lean_object* v_kind_1808_){
_start:
{
uint8_t v_kind_boxed_1809_; lean_object* v_res_1810_; 
v_kind_boxed_1809_ = lean_unbox(v_kind_1808_);
v_res_1810_ = l_Lean_recordOriginalConstKind(v_env_1806_, v_declName_1807_, v_kind_boxed_1809_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(lean_object* v_env_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v___x_1814_; lean_object* v_nextMacroScope_1815_; lean_object* v_ngen_1816_; lean_object* v_auxDeclNGen_1817_; lean_object* v_traceState_1818_; lean_object* v_recordedDeps_1819_; lean_object* v_messages_1820_; lean_object* v_infoState_1821_; lean_object* v_snapshotTasks_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1833_; 
v___x_1814_ = lean_st_ref_take(v___y_1812_);
v_nextMacroScope_1815_ = lean_ctor_get(v___x_1814_, 1);
v_ngen_1816_ = lean_ctor_get(v___x_1814_, 2);
v_auxDeclNGen_1817_ = lean_ctor_get(v___x_1814_, 3);
v_traceState_1818_ = lean_ctor_get(v___x_1814_, 4);
v_recordedDeps_1819_ = lean_ctor_get(v___x_1814_, 6);
v_messages_1820_ = lean_ctor_get(v___x_1814_, 7);
v_infoState_1821_ = lean_ctor_get(v___x_1814_, 8);
v_snapshotTasks_1822_ = lean_ctor_get(v___x_1814_, 9);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1833_ == 0)
{
lean_object* v_unused_1834_; lean_object* v_unused_1835_; 
v_unused_1834_ = lean_ctor_get(v___x_1814_, 5);
lean_dec(v_unused_1834_);
v_unused_1835_ = lean_ctor_get(v___x_1814_, 0);
lean_dec(v_unused_1835_);
v___x_1824_ = v___x_1814_;
v_isShared_1825_ = v_isSharedCheck_1833_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_snapshotTasks_1822_);
lean_inc(v_infoState_1821_);
lean_inc(v_messages_1820_);
lean_inc(v_recordedDeps_1819_);
lean_inc(v_traceState_1818_);
lean_inc(v_auxDeclNGen_1817_);
lean_inc(v_ngen_1816_);
lean_inc(v_nextMacroScope_1815_);
lean_dec(v___x_1814_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1833_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1829_; 
v___x_1826_ = lean_box(0);
v___x_1827_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 5, v___x_1827_);
lean_ctor_set(v___x_1824_, 0, v_env_1811_);
v___x_1829_ = v___x_1824_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_env_1811_);
lean_ctor_set(v_reuseFailAlloc_1832_, 1, v_nextMacroScope_1815_);
lean_ctor_set(v_reuseFailAlloc_1832_, 2, v_ngen_1816_);
lean_ctor_set(v_reuseFailAlloc_1832_, 3, v_auxDeclNGen_1817_);
lean_ctor_set(v_reuseFailAlloc_1832_, 4, v_traceState_1818_);
lean_ctor_set(v_reuseFailAlloc_1832_, 5, v___x_1827_);
lean_ctor_set(v_reuseFailAlloc_1832_, 6, v_recordedDeps_1819_);
lean_ctor_set(v_reuseFailAlloc_1832_, 7, v_messages_1820_);
lean_ctor_set(v_reuseFailAlloc_1832_, 8, v_infoState_1821_);
lean_ctor_set(v_reuseFailAlloc_1832_, 9, v_snapshotTasks_1822_);
v___x_1829_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = lean_st_ref_put(v___y_1812_, v___x_1829_);
v___x_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1826_);
return v___x_1831_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg___boxed(lean_object* v_env_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_env_1836_, v___y_1837_);
lean_dec(v___y_1837_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(lean_object* v_env_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_env_1840_, v___y_1842_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___boxed(lean_object* v_env_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_){
_start:
{
lean_object* v_res_1849_; 
v_res_1849_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(v_env_1845_, v___y_1846_, v___y_1847_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
return v_res_1849_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1850_ = lean_box(0);
v___x_1851_ = l_Lean_interruptExceptionId;
v___x_1852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
lean_ctor_set(v___x_1852_, 1, v___x_1850_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg(){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1854_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(lean_object* v_msg_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_){
_start:
{
lean_object* v_ref_1862_; lean_object* v___x_1863_; lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1872_; 
v_ref_1862_ = lean_ctor_get(v___y_1859_, 2);
v___x_1863_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_1858_, v___y_1859_, v___y_1860_);
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1866_ = v___x_1863_;
v_isShared_1867_ = v_isSharedCheck_1872_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1863_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1872_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1868_; lean_object* v___x_1870_; 
lean_inc(v_ref_1862_);
v___x_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1868_, 0, v_ref_1862_);
lean_ctor_set(v___x_1868_, 1, v_a_1864_);
if (v_isShared_1867_ == 0)
{
lean_ctor_set_tag(v___x_1866_, 1);
lean_ctor_set(v___x_1866_, 0, v___x_1868_);
v___x_1870_ = v___x_1866_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v___x_1868_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_msg_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v_msg_1873_, v___y_1874_, v___y_1875_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(lean_object* v_ex_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v___y_1883_; lean_object* v___y_1884_; 
if (lean_obj_tag(v_ex_1878_) == 16)
{
lean_object* v___x_1888_; lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1896_; 
v___x_1888_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1891_ = v___x_1888_;
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1888_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1894_; 
if (v_isShared_1892_ == 0)
{
v___x_1894_ = v___x_1891_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_a_1889_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
else
{
v___y_1883_ = v___y_1879_;
v___y_1884_ = v___y_1880_;
goto v___jp_1882_;
}
v___jp_1882_:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1885_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1883_);
v___x_1886_ = l_Lean_Kernel_Exception_toMessageData(v_ex_1878_, v___x_1885_);
v___x_1887_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v___x_1886_, v___y_1883_, v___y_1884_);
return v___x_1887_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg___boxed(lean_object* v_ex_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_ex_1897_, v___y_1898_, v___y_1899_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(lean_object* v_x_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
if (lean_obj_tag(v_x_1902_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1907_; 
v_a_1906_ = lean_ctor_get(v_x_1902_, 0);
lean_inc(v_a_1906_);
lean_dec_ref_known(v_x_1902_, 1);
v___x_1907_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_a_1906_, v___y_1903_, v___y_1904_);
return v___x_1907_;
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
v_a_1908_ = lean_ctor_get(v_x_1902_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_x_1902_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v_x_1902_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v_x_1902_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
lean_ctor_set_tag(v___x_1910_, 0);
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg___boxed(lean_object* v_x_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v_x_1916_, v___y_1917_, v___y_1918_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
return v_res_1920_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1927_ = lean_unsigned_to_nat(1u);
v___x_1928_ = l_Lean_Level_ofNat(v___x_1927_);
return v___x_1928_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1929_ = lean_box(0);
v___x_1930_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3);
v___x_1931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
lean_ctor_set(v___x_1931_, 1, v___x_1929_);
return v___x_1931_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1932_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4);
v___x_1933_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2));
v___x_1934_ = l_Lean_mkConst(v___x_1933_, v___x_1932_);
return v___x_1934_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1935_ = lean_unsigned_to_nat(0u);
v___x_1936_ = l_Lean_Level_ofNat(v___x_1935_);
return v___x_1936_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1937_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6);
v___x_1938_ = l_Lean_mkSort(v___x_1937_);
return v___x_1938_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11(void){
_start:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1944_ = lean_box(0);
v___x_1945_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10));
v___x_1946_ = l_Lean_mkConst(v___x_1945_, v___x_1944_);
return v___x_1946_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12(void){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1947_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11);
v___x_1948_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7);
v___x_1949_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5);
v___x_1950_ = l_Lean_mkAppB(v___x_1949_, v___x_1948_, v___x_1947_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(lean_object* v_as_x27_1958_, lean_object* v_b_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
if (lean_obj_tag(v_as_x27_1958_) == 0)
{
lean_object* v___x_1963_; 
v___x_1963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1963_, 0, v_b_1959_);
return v___x_1963_;
}
else
{
lean_object* v_head_1964_; lean_object* v_tail_1965_; lean_object* v___x_1966_; lean_object* v_a_1968_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v_toCold_1981_; lean_object* v_env_1982_; lean_object* v_cancelTk_x3f_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
lean_dec_ref(v_b_1959_);
v_head_1964_ = lean_ctor_get(v_as_x27_1958_, 0);
v_tail_1965_ = lean_ctor_get(v_as_x27_1958_, 1);
v___x_1966_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0));
v___x_1974_ = lean_box(0);
v___x_1975_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12);
lean_inc(v_head_1964_);
v___x_1976_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1976_, 0, v_head_1964_);
lean_ctor_set(v___x_1976_, 1, v___x_1974_);
lean_ctor_set(v___x_1976_, 2, v___x_1975_);
v___x_1977_ = 0;
v___x_1978_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1978_, 0, v___x_1976_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*1, v___x_1977_);
v___x_1979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1978_);
v___x_1980_ = lean_st_ref_get(v___y_1961_);
v_toCold_1981_ = lean_ctor_get(v___y_1960_, 0);
v_env_1982_ = lean_ctor_get(v___x_1980_, 0);
lean_inc_ref(v_env_1982_);
lean_dec(v___x_1980_);
v_cancelTk_x3f_1983_ = lean_ctor_get(v_toCold_1981_, 10);
v___x_1984_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1960_);
v___x_1985_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13));
v___x_1986_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_1982_, v___x_1984_, v___x_1979_, v_cancelTk_x3f_1983_, v___x_1985_);
lean_dec_ref_known(v___x_1979_, 1);
lean_dec_ref(v___x_1984_);
v___x_1987_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_1986_, v___y_1960_, v___y_1961_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v_a_1988_; lean_object* v___x_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1997_; 
v_a_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v___x_1987_, 1);
v___x_1989_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_1988_, v___y_1961_);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_1997_ == 0)
{
lean_object* v_unused_1998_; 
v_unused_1998_ = lean_ctor_get(v___x_1989_, 0);
lean_dec(v_unused_1998_);
v___x_1991_ = v___x_1989_;
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
else
{
lean_dec(v___x_1989_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1993_; lean_object* v___x_1995_; 
v___x_1993_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__15));
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 0, v___x_1993_);
v___x_1995_ = v___x_1991_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v___x_1993_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
else
{
lean_object* v_a_1999_; 
v_a_1999_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1987_, 1);
v_a_1968_ = v_a_1999_;
goto v___jp_1967_;
}
v___jp_1967_:
{
uint8_t v___x_1969_; 
v___x_1969_ = l_Lean_Exception_isInterrupt(v_a_1968_);
if (v___x_1969_ == 0)
{
uint8_t v___x_1970_; 
lean_inc_ref(v_a_1968_);
v___x_1970_ = l_Lean_Exception_isRuntime(v_a_1968_);
if (v___x_1970_ == 0)
{
lean_dec_ref(v_a_1968_);
v_as_x27_1958_ = v_tail_1965_;
v_b_1959_ = v___x_1966_;
goto _start;
}
else
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1972_, 0, v_a_1968_);
return v___x_1972_;
}
}
else
{
lean_object* v___x_1973_; 
v___x_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1973_, 0, v_a_1968_);
return v___x_1973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___boxed(lean_object* v_as_x27_2000_, lean_object* v_b_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v_as_x27_2000_, v_b_2001_, v___y_2002_, v___y_2003_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
lean_dec(v_as_x27_2000_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(lean_object* v_decl_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_){
_start:
{
lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v_a_2039_; lean_object* v_a_2045_; 
switch(lean_obj_tag(v_decl_2006_))
{
case 1:
{
lean_object* v_val_2050_; lean_object* v_toConstantVal_2051_; uint8_t v___x_2052_; lean_object* v___x_2053_; lean_object* v_fallbackDecl_2054_; lean_object* v___x_2055_; lean_object* v_toCold_2056_; lean_object* v_env_2057_; lean_object* v_cancelTk_x3f_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v_val_2050_ = lean_ctor_get(v_decl_2006_, 0);
v_toConstantVal_2051_ = lean_ctor_get(v_val_2050_, 0);
v___x_2052_ = 0;
lean_inc_ref(v_toConstantVal_2051_);
v___x_2053_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2053_, 0, v_toConstantVal_2051_);
lean_ctor_set_uint8(v___x_2053_, sizeof(void*)*1, v___x_2052_);
v_fallbackDecl_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_fallbackDecl_2054_, 0, v___x_2053_);
v___x_2055_ = lean_st_ref_get(v_a_2008_);
v_toCold_2056_ = lean_ctor_get(v_a_2007_, 0);
v_env_2057_ = lean_ctor_get(v___x_2055_, 0);
lean_inc_ref(v_env_2057_);
lean_dec(v___x_2055_);
v_cancelTk_x3f_2058_ = lean_ctor_get(v_toCold_2056_, 10);
v___x_2059_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2007_);
v___x_2060_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13));
v___x_2061_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2057_, v___x_2059_, v_fallbackDecl_2054_, v_cancelTk_x3f_2058_, v___x_2060_);
lean_dec_ref_known(v_fallbackDecl_2054_, 1);
lean_dec_ref(v___x_2059_);
v___x_2062_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2061_, v_a_2007_, v_a_2008_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2072_; 
lean_dec_ref_known(v_decl_2006_, 1);
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v___x_2064_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2063_, v_a_2008_);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2072_ == 0)
{
lean_object* v_unused_2073_; 
v_unused_2073_ = lean_ctor_get(v___x_2064_, 0);
lean_dec(v_unused_2073_);
v___x_2066_ = v___x_2064_;
v_isShared_2067_ = v_isSharedCheck_2072_;
goto v_resetjp_2065_;
}
else
{
lean_dec(v___x_2064_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2072_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2068_; lean_object* v___x_2070_; 
v___x_2068_ = lean_box(0);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 0, v___x_2068_);
v___x_2070_ = v___x_2066_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2068_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
else
{
lean_object* v_a_2074_; 
v_a_2074_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2074_);
lean_dec_ref_known(v___x_2062_, 1);
v_a_2039_ = v_a_2074_;
goto v___jp_2038_;
}
}
case 2:
{
lean_object* v_val_2075_; lean_object* v_toConstantVal_2076_; uint8_t v___x_2077_; lean_object* v___x_2078_; lean_object* v_fallbackDecl_2079_; lean_object* v___x_2080_; lean_object* v_toCold_2081_; lean_object* v_env_2082_; lean_object* v_cancelTk_x3f_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v_val_2075_ = lean_ctor_get(v_decl_2006_, 0);
v_toConstantVal_2076_ = lean_ctor_get(v_val_2075_, 0);
v___x_2077_ = 0;
lean_inc_ref(v_toConstantVal_2076_);
v___x_2078_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2078_, 0, v_toConstantVal_2076_);
lean_ctor_set_uint8(v___x_2078_, sizeof(void*)*1, v___x_2077_);
v_fallbackDecl_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_fallbackDecl_2079_, 0, v___x_2078_);
v___x_2080_ = lean_st_ref_get(v_a_2008_);
v_toCold_2081_ = lean_ctor_get(v_a_2007_, 0);
v_env_2082_ = lean_ctor_get(v___x_2080_, 0);
lean_inc_ref(v_env_2082_);
lean_dec(v___x_2080_);
v_cancelTk_x3f_2083_ = lean_ctor_get(v_toCold_2081_, 10);
v___x_2084_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2007_);
v___x_2085_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13));
v___x_2086_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2082_, v___x_2084_, v_fallbackDecl_2079_, v_cancelTk_x3f_2083_, v___x_2085_);
lean_dec_ref_known(v_fallbackDecl_2079_, 1);
lean_dec_ref(v___x_2084_);
v___x_2087_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2086_, v_a_2007_, v_a_2008_);
if (lean_obj_tag(v___x_2087_) == 0)
{
lean_object* v_a_2088_; lean_object* v___x_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2097_; 
lean_dec_ref_known(v_decl_2006_, 1);
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2088_);
lean_dec_ref_known(v___x_2087_, 1);
v___x_2089_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2088_, v_a_2008_);
v_isSharedCheck_2097_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2097_ == 0)
{
lean_object* v_unused_2098_; 
v_unused_2098_ = lean_ctor_get(v___x_2089_, 0);
lean_dec(v_unused_2098_);
v___x_2091_ = v___x_2089_;
v_isShared_2092_ = v_isSharedCheck_2097_;
goto v_resetjp_2090_;
}
else
{
lean_dec(v___x_2089_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2097_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2093_; lean_object* v___x_2095_; 
v___x_2093_ = lean_box(0);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 0, v___x_2093_);
v___x_2095_ = v___x_2091_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v___x_2093_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
else
{
lean_object* v_a_2099_; 
v_a_2099_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2099_);
lean_dec_ref_known(v___x_2087_, 1);
v_a_2045_ = v_a_2099_;
goto v___jp_2044_;
}
}
default: 
{
v___y_2011_ = v_a_2007_;
v___y_2012_ = v_a_2008_;
goto v___jp_2010_;
}
}
v___jp_2010_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2013_ = l_Lean_Declaration_getNames(v_decl_2006_);
v___x_2014_ = lean_box(0);
v___x_2015_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0));
v___x_2016_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v___x_2013_, v___x_2015_, v___y_2011_, v___y_2012_);
lean_dec(v___x_2013_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2029_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2029_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2029_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v_fst_2021_; 
v_fst_2021_ = lean_ctor_get(v_a_2017_, 0);
lean_inc(v_fst_2021_);
lean_dec(v_a_2017_);
if (lean_obj_tag(v_fst_2021_) == 0)
{
lean_object* v___x_2023_; 
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2014_);
v___x_2023_ = v___x_2019_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2014_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
else
{
lean_object* v_val_2025_; lean_object* v___x_2027_; 
v_val_2025_ = lean_ctor_get(v_fst_2021_, 0);
lean_inc(v_val_2025_);
lean_dec_ref_known(v_fst_2021_, 1);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v_val_2025_);
v___x_2027_ = v___x_2019_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_val_2025_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
else
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2037_; 
v_a_2030_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2032_ = v___x_2016_;
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2016_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2037_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
}
}
v___jp_2038_:
{
uint8_t v___x_2040_; 
v___x_2040_ = l_Lean_Exception_isInterrupt(v_a_2039_);
if (v___x_2040_ == 0)
{
uint8_t v___x_2041_; 
lean_inc_ref(v_a_2039_);
v___x_2041_ = l_Lean_Exception_isRuntime(v_a_2039_);
if (v___x_2041_ == 0)
{
lean_dec_ref(v_a_2039_);
v___y_2011_ = v_a_2007_;
v___y_2012_ = v_a_2008_;
goto v___jp_2010_;
}
else
{
lean_object* v___x_2042_; 
lean_dec(v_decl_2006_);
v___x_2042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2042_, 0, v_a_2039_);
return v___x_2042_;
}
}
else
{
lean_object* v___x_2043_; 
lean_dec(v_decl_2006_);
v___x_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2043_, 0, v_a_2039_);
return v___x_2043_;
}
}
v___jp_2044_:
{
uint8_t v___x_2046_; 
v___x_2046_ = l_Lean_Exception_isInterrupt(v_a_2045_);
if (v___x_2046_ == 0)
{
uint8_t v___x_2047_; 
lean_inc_ref(v_a_2045_);
v___x_2047_ = l_Lean_Exception_isRuntime(v_a_2045_);
if (v___x_2047_ == 0)
{
lean_dec_ref(v_a_2045_);
v___y_2011_ = v_a_2007_;
v___y_2012_ = v_a_2008_;
goto v___jp_2010_;
}
else
{
lean_object* v___x_2048_; 
lean_dec(v_decl_2006_);
v___x_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2048_, 0, v_a_2045_);
return v___x_2048_;
}
}
else
{
lean_object* v___x_2049_; 
lean_dec(v_decl_2006_);
v___x_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2049_, 0, v_a_2045_);
return v___x_2049_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom___boxed(lean_object* v_decl_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2100_, v_a_2101_, v_a_2102_);
lean_dec(v_a_2102_);
lean_dec_ref(v_a_2101_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(lean_object* v_00_u03b1_2105_, lean_object* v_x_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v___x_2110_; 
v___x_2110_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v_x_2106_, v___y_2107_, v___y_2108_);
return v___x_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___boxed(lean_object* v_00_u03b1_2111_, lean_object* v_x_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(v_00_u03b1_2111_, v_x_2112_, v___y_2113_, v___y_2114_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(lean_object* v_as_2117_, lean_object* v_as_x27_2118_, lean_object* v_b_2119_, lean_object* v_a_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v_as_x27_2118_, v_b_2119_, v___y_2121_, v___y_2122_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___boxed(lean_object* v_as_2125_, lean_object* v_as_x27_2126_, lean_object* v_b_2127_, lean_object* v_a_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(v_as_2125_, v_as_x27_2126_, v_b_2127_, v_a_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v_as_x27_2126_);
lean_dec(v_as_2125_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(v_00_u03b1_2138_, v___y_2139_, v___y_2140_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(lean_object* v_00_u03b1_2143_, lean_object* v_ex_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v___x_2148_; 
v___x_2148_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_ex_2144_, v___y_2145_, v___y_2146_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2149_, lean_object* v_ex_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(v_00_u03b1_2149_, v_ex_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_2155_, lean_object* v_msg_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v_msg_2156_, v___y_2157_, v___y_2158_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2161_, lean_object* v_msg_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(v_00_u03b1_2161_, v_msg_2162_, v___y_2163_, v___y_2164_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
return v_res_2166_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2167_ = lean_unsigned_to_nat(32u);
v___x_2168_ = lean_mk_empty_array_with_capacity(v___x_2167_);
v___x_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2168_);
return v___x_2169_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2170_ = ((size_t)5ULL);
v___x_2171_ = lean_unsigned_to_nat(0u);
v___x_2172_ = lean_unsigned_to_nat(32u);
v___x_2173_ = lean_mk_empty_array_with_capacity(v___x_2172_);
v___x_2174_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0);
v___x_2175_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2175_, 0, v___x_2174_);
lean_ctor_set(v___x_2175_, 1, v___x_2173_);
lean_ctor_set(v___x_2175_, 2, v___x_2171_);
lean_ctor_set(v___x_2175_, 3, v___x_2171_);
lean_ctor_set_usize(v___x_2175_, 4, v___x_2170_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(lean_object* v___y_2176_){
_start:
{
lean_object* v___x_2178_; lean_object* v_traceState_2179_; lean_object* v_traces_2180_; lean_object* v___x_2181_; lean_object* v_traceState_2182_; lean_object* v_env_2183_; lean_object* v_nextMacroScope_2184_; lean_object* v_ngen_2185_; lean_object* v_auxDeclNGen_2186_; lean_object* v_cache_2187_; lean_object* v_recordedDeps_2188_; lean_object* v_messages_2189_; lean_object* v_infoState_2190_; lean_object* v_snapshotTasks_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2210_; 
v___x_2178_ = lean_st_ref_get(v___y_2176_);
v_traceState_2179_ = lean_ctor_get(v___x_2178_, 4);
lean_inc_ref(v_traceState_2179_);
lean_dec(v___x_2178_);
v_traces_2180_ = lean_ctor_get(v_traceState_2179_, 0);
lean_inc_ref(v_traces_2180_);
lean_dec_ref(v_traceState_2179_);
v___x_2181_ = lean_st_ref_take(v___y_2176_);
v_traceState_2182_ = lean_ctor_get(v___x_2181_, 4);
v_env_2183_ = lean_ctor_get(v___x_2181_, 0);
v_nextMacroScope_2184_ = lean_ctor_get(v___x_2181_, 1);
v_ngen_2185_ = lean_ctor_get(v___x_2181_, 2);
v_auxDeclNGen_2186_ = lean_ctor_get(v___x_2181_, 3);
v_cache_2187_ = lean_ctor_get(v___x_2181_, 5);
v_recordedDeps_2188_ = lean_ctor_get(v___x_2181_, 6);
v_messages_2189_ = lean_ctor_get(v___x_2181_, 7);
v_infoState_2190_ = lean_ctor_get(v___x_2181_, 8);
v_snapshotTasks_2191_ = lean_ctor_get(v___x_2181_, 9);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2193_ = v___x_2181_;
v_isShared_2194_ = v_isSharedCheck_2210_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_snapshotTasks_2191_);
lean_inc(v_infoState_2190_);
lean_inc(v_messages_2189_);
lean_inc(v_recordedDeps_2188_);
lean_inc(v_cache_2187_);
lean_inc(v_traceState_2182_);
lean_inc(v_auxDeclNGen_2186_);
lean_inc(v_ngen_2185_);
lean_inc(v_nextMacroScope_2184_);
lean_inc(v_env_2183_);
lean_dec(v___x_2181_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2210_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
uint64_t v_tid_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2208_; 
v_tid_2195_ = lean_ctor_get_uint64(v_traceState_2182_, sizeof(void*)*1);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_traceState_2182_);
if (v_isSharedCheck_2208_ == 0)
{
lean_object* v_unused_2209_; 
v_unused_2209_ = lean_ctor_get(v_traceState_2182_, 0);
lean_dec(v_unused_2209_);
v___x_2197_ = v_traceState_2182_;
v_isShared_2198_ = v_isSharedCheck_2208_;
goto v_resetjp_2196_;
}
else
{
lean_dec(v_traceState_2182_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2208_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2199_; lean_object* v___x_2201_; 
v___x_2199_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v___x_2199_);
v___x_2201_ = v___x_2197_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v___x_2199_);
lean_ctor_set_uint64(v_reuseFailAlloc_2207_, sizeof(void*)*1, v_tid_2195_);
v___x_2201_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
lean_object* v___x_2203_; 
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 4, v___x_2201_);
v___x_2203_ = v___x_2193_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_env_2183_);
lean_ctor_set(v_reuseFailAlloc_2206_, 1, v_nextMacroScope_2184_);
lean_ctor_set(v_reuseFailAlloc_2206_, 2, v_ngen_2185_);
lean_ctor_set(v_reuseFailAlloc_2206_, 3, v_auxDeclNGen_2186_);
lean_ctor_set(v_reuseFailAlloc_2206_, 4, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2206_, 5, v_cache_2187_);
lean_ctor_set(v_reuseFailAlloc_2206_, 6, v_recordedDeps_2188_);
lean_ctor_set(v_reuseFailAlloc_2206_, 7, v_messages_2189_);
lean_ctor_set(v_reuseFailAlloc_2206_, 8, v_infoState_2190_);
lean_ctor_set(v_reuseFailAlloc_2206_, 9, v_snapshotTasks_2191_);
v___x_2203_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = lean_st_ref_put(v___y_2176_, v___x_2203_);
v___x_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2205_, 0, v_traces_2180_);
return v___x_2205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___boxed(lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_2211_);
lean_dec(v___y_2211_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_2215_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___boxed(lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(v___y_2218_, v___y_2219_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(lean_object* v_category_2222_, lean_object* v_opts_2223_, lean_object* v_act_2224_, lean_object* v_decl_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; 
lean_inc(v___y_2227_);
lean_inc_ref(v___y_2226_);
v___x_2229_ = lean_apply_2(v_act_2224_, v___y_2226_, v___y_2227_);
v___x_2230_ = l_Lean_profileitIOUnsafe___redArg(v_category_2222_, v_opts_2223_, v___x_2229_, v_decl_2225_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg___boxed(lean_object* v_category_2231_, lean_object* v_opts_2232_, lean_object* v_act_2233_, lean_object* v_decl_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v_category_2231_, v_opts_2232_, v_act_2233_, v_decl_2234_, v___y_2235_, v___y_2236_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec_ref(v_opts_2232_);
lean_dec_ref(v_category_2231_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(lean_object* v_00_u03b1_2239_, lean_object* v_category_2240_, lean_object* v_opts_2241_, lean_object* v_act_2242_, lean_object* v_decl_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v_category_2240_, v_opts_2241_, v_act_2242_, v_decl_2243_, v___y_2244_, v___y_2245_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___boxed(lean_object* v_00_u03b1_2248_, lean_object* v_category_2249_, lean_object* v_opts_2250_, lean_object* v_act_2251_, lean_object* v_decl_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(v_00_u03b1_2248_, v_category_2249_, v_opts_2250_, v_act_2251_, v_decl_2252_, v___y_2253_, v___y_2254_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec_ref(v_opts_2250_);
lean_dec_ref(v_category_2249_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(lean_object* v_a_2257_, lean_object* v_a_2258_){
_start:
{
if (lean_obj_tag(v_a_2257_) == 0)
{
lean_object* v___x_2259_; 
v___x_2259_ = l_List_reverse___redArg(v_a_2258_);
return v___x_2259_;
}
else
{
lean_object* v_head_2260_; lean_object* v_tail_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2270_; 
v_head_2260_ = lean_ctor_get(v_a_2257_, 0);
v_tail_2261_ = lean_ctor_get(v_a_2257_, 1);
v_isSharedCheck_2270_ = !lean_is_exclusive(v_a_2257_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2263_ = v_a_2257_;
v_isShared_2264_ = v_isSharedCheck_2270_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_tail_2261_);
lean_inc(v_head_2260_);
lean_dec(v_a_2257_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2270_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2265_; lean_object* v___x_2267_; 
v___x_2265_ = l_Lean_MessageData_ofName(v_head_2260_);
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 1, v_a_2258_);
lean_ctor_set(v___x_2263_, 0, v___x_2265_);
v___x_2267_ = v___x_2263_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v___x_2265_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v_a_2258_);
v___x_2267_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
v_a_2257_ = v_tail_2261_;
v_a_2258_ = v___x_2267_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0));
v___x_2273_ = l_Lean_stringToMessageData(v___x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(lean_object* v_decl_2274_, lean_object* v_x_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2279_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1);
v___x_2280_ = l_Lean_Declaration_getTopLevelNames(v_decl_2274_);
v___x_2281_ = lean_box(0);
v___x_2282_ = l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(v___x_2280_, v___x_2281_);
v___x_2283_ = l_Lean_MessageData_ofList(v___x_2282_);
v___x_2284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2279_);
lean_ctor_set(v___x_2284_, 1, v___x_2283_);
v___x_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed(lean_object* v_decl_2286_, lean_object* v_x_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(v_decl_2286_, v_x_2287_, v___y_2288_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec_ref(v_x_2287_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(size_t v_sz_2292_, size_t v_i_2293_, lean_object* v_bs_2294_){
_start:
{
uint8_t v___x_2295_; 
v___x_2295_ = lean_usize_dec_lt(v_i_2293_, v_sz_2292_);
if (v___x_2295_ == 0)
{
return v_bs_2294_;
}
else
{
lean_object* v_v_2296_; lean_object* v_msg_2297_; lean_object* v___x_2298_; lean_object* v_bs_x27_2299_; size_t v___x_2300_; size_t v___x_2301_; lean_object* v___x_2302_; 
v_v_2296_ = lean_array_uget_borrowed(v_bs_2294_, v_i_2293_);
v_msg_2297_ = lean_ctor_get(v_v_2296_, 1);
lean_inc_ref(v_msg_2297_);
v___x_2298_ = lean_unsigned_to_nat(0u);
v_bs_x27_2299_ = lean_array_uset(v_bs_2294_, v_i_2293_, v___x_2298_);
v___x_2300_ = ((size_t)1ULL);
v___x_2301_ = lean_usize_add(v_i_2293_, v___x_2300_);
v___x_2302_ = lean_array_uset(v_bs_x27_2299_, v_i_2293_, v_msg_2297_);
v_i_2293_ = v___x_2301_;
v_bs_2294_ = v___x_2302_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4___boxed(lean_object* v_sz_2304_, lean_object* v_i_2305_, lean_object* v_bs_2306_){
_start:
{
size_t v_sz_boxed_2307_; size_t v_i_boxed_2308_; lean_object* v_res_2309_; 
v_sz_boxed_2307_ = lean_unbox_usize(v_sz_2304_);
lean_dec(v_sz_2304_);
v_i_boxed_2308_ = lean_unbox_usize(v_i_2305_);
lean_dec(v_i_2305_);
v_res_2309_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(v_sz_boxed_2307_, v_i_boxed_2308_, v_bs_2306_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(lean_object* v_oldTraces_2310_, lean_object* v_data_2311_, lean_object* v_ref_2312_, lean_object* v_msg_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
lean_object* v_toCold_2317_; lean_object* v_currRecDepth_2318_; lean_object* v_ref_2319_; uint16_t v_optionFlags_2320_; uint8_t v_suppressElabErrors_2321_; uint8_t v_isRecordingDeps_2322_; lean_object* v_ref_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v_traceState_2326_; lean_object* v_traces_2327_; lean_object* v___x_2328_; size_t v_sz_2329_; size_t v___x_2330_; lean_object* v___x_2331_; lean_object* v_msg_2332_; lean_object* v___x_2333_; lean_object* v_a_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2372_; 
v_toCold_2317_ = lean_ctor_get(v___y_2314_, 0);
v_currRecDepth_2318_ = lean_ctor_get(v___y_2314_, 1);
v_ref_2319_ = lean_ctor_get(v___y_2314_, 2);
v_optionFlags_2320_ = lean_ctor_get_uint16(v___y_2314_, sizeof(void*)*3);
v_suppressElabErrors_2321_ = lean_ctor_get_uint8(v___y_2314_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2322_ = lean_ctor_get_uint8(v___y_2314_, sizeof(void*)*3 + 3);
v_ref_2323_ = l_Lean_replaceRef(v_ref_2312_, v_ref_2319_);
lean_inc(v_currRecDepth_2318_);
lean_inc_ref(v_toCold_2317_);
v___x_2324_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_2324_, 0, v_toCold_2317_);
lean_ctor_set(v___x_2324_, 1, v_currRecDepth_2318_);
lean_ctor_set(v___x_2324_, 2, v_ref_2323_);
lean_ctor_set_uint16(v___x_2324_, sizeof(void*)*3, v_optionFlags_2320_);
lean_ctor_set_uint8(v___x_2324_, sizeof(void*)*3 + 2, v_suppressElabErrors_2321_);
lean_ctor_set_uint8(v___x_2324_, sizeof(void*)*3 + 3, v_isRecordingDeps_2322_);
v___x_2325_ = lean_st_ref_get(v___y_2315_);
v_traceState_2326_ = lean_ctor_get(v___x_2325_, 4);
lean_inc_ref(v_traceState_2326_);
lean_dec(v___x_2325_);
v_traces_2327_ = lean_ctor_get(v_traceState_2326_, 0);
lean_inc_ref(v_traces_2327_);
lean_dec_ref(v_traceState_2326_);
v___x_2328_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2327_);
lean_dec_ref(v_traces_2327_);
v_sz_2329_ = lean_array_size(v___x_2328_);
v___x_2330_ = ((size_t)0ULL);
v___x_2331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(v_sz_2329_, v___x_2330_, v___x_2328_);
v_msg_2332_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2332_, 0, v_data_2311_);
lean_ctor_set(v_msg_2332_, 1, v_msg_2313_);
lean_ctor_set(v_msg_2332_, 2, v___x_2331_);
v___x_2333_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_2332_, v___x_2324_, v___y_2315_);
lean_dec_ref_known(v___x_2324_, 3);
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2336_ = v___x_2333_;
v_isShared_2337_ = v_isSharedCheck_2372_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_a_2334_);
lean_dec(v___x_2333_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2372_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2338_; lean_object* v_traceState_2339_; lean_object* v_env_2340_; lean_object* v_nextMacroScope_2341_; lean_object* v_ngen_2342_; lean_object* v_auxDeclNGen_2343_; lean_object* v_cache_2344_; lean_object* v_recordedDeps_2345_; lean_object* v_messages_2346_; lean_object* v_infoState_2347_; lean_object* v_snapshotTasks_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2371_; 
v___x_2338_ = lean_st_ref_take(v___y_2315_);
v_traceState_2339_ = lean_ctor_get(v___x_2338_, 4);
v_env_2340_ = lean_ctor_get(v___x_2338_, 0);
v_nextMacroScope_2341_ = lean_ctor_get(v___x_2338_, 1);
v_ngen_2342_ = lean_ctor_get(v___x_2338_, 2);
v_auxDeclNGen_2343_ = lean_ctor_get(v___x_2338_, 3);
v_cache_2344_ = lean_ctor_get(v___x_2338_, 5);
v_recordedDeps_2345_ = lean_ctor_get(v___x_2338_, 6);
v_messages_2346_ = lean_ctor_get(v___x_2338_, 7);
v_infoState_2347_ = lean_ctor_get(v___x_2338_, 8);
v_snapshotTasks_2348_ = lean_ctor_get(v___x_2338_, 9);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2350_ = v___x_2338_;
v_isShared_2351_ = v_isSharedCheck_2371_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_snapshotTasks_2348_);
lean_inc(v_infoState_2347_);
lean_inc(v_messages_2346_);
lean_inc(v_recordedDeps_2345_);
lean_inc(v_cache_2344_);
lean_inc(v_traceState_2339_);
lean_inc(v_auxDeclNGen_2343_);
lean_inc(v_ngen_2342_);
lean_inc(v_nextMacroScope_2341_);
lean_inc(v_env_2340_);
lean_dec(v___x_2338_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2371_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
uint64_t v_tid_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2369_; 
v_tid_2352_ = lean_ctor_get_uint64(v_traceState_2339_, sizeof(void*)*1);
v_isSharedCheck_2369_ = !lean_is_exclusive(v_traceState_2339_);
if (v_isSharedCheck_2369_ == 0)
{
lean_object* v_unused_2370_; 
v_unused_2370_ = lean_ctor_get(v_traceState_2339_, 0);
lean_dec(v_unused_2370_);
v___x_2354_ = v_traceState_2339_;
v_isShared_2355_ = v_isSharedCheck_2369_;
goto v_resetjp_2353_;
}
else
{
lean_dec(v_traceState_2339_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2369_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2360_; 
v___x_2356_ = lean_box(0);
v___x_2357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2357_, 0, v_ref_2312_);
lean_ctor_set(v___x_2357_, 1, v_a_2334_);
v___x_2358_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2310_, v___x_2357_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2358_);
v___x_2360_ = v___x_2354_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2358_);
lean_ctor_set_uint64(v_reuseFailAlloc_2368_, sizeof(void*)*1, v_tid_2352_);
v___x_2360_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
lean_object* v___x_2362_; 
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 4, v___x_2360_);
v___x_2362_ = v___x_2350_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_env_2340_);
lean_ctor_set(v_reuseFailAlloc_2367_, 1, v_nextMacroScope_2341_);
lean_ctor_set(v_reuseFailAlloc_2367_, 2, v_ngen_2342_);
lean_ctor_set(v_reuseFailAlloc_2367_, 3, v_auxDeclNGen_2343_);
lean_ctor_set(v_reuseFailAlloc_2367_, 4, v___x_2360_);
lean_ctor_set(v_reuseFailAlloc_2367_, 5, v_cache_2344_);
lean_ctor_set(v_reuseFailAlloc_2367_, 6, v_recordedDeps_2345_);
lean_ctor_set(v_reuseFailAlloc_2367_, 7, v_messages_2346_);
lean_ctor_set(v_reuseFailAlloc_2367_, 8, v_infoState_2347_);
lean_ctor_set(v_reuseFailAlloc_2367_, 9, v_snapshotTasks_2348_);
v___x_2362_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
lean_object* v___x_2363_; lean_object* v___x_2365_; 
v___x_2363_ = lean_st_ref_put(v___y_2315_, v___x_2362_);
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 0, v___x_2356_);
v___x_2365_ = v___x_2336_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v___x_2356_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2___boxed(lean_object* v_oldTraces_2373_, lean_object* v_data_2374_, lean_object* v_ref_2375_, lean_object* v_msg_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(v_oldTraces_2373_, v_data_2374_, v_ref_2375_, v_msg_2376_, v___y_2377_, v___y_2378_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(lean_object* v_x_2381_){
_start:
{
if (lean_obj_tag(v_x_2381_) == 0)
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
v_a_2383_ = lean_ctor_get(v_x_2381_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v_x_2381_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v_x_2381_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v_x_2381_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
lean_ctor_set_tag(v___x_2385_, 1);
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
else
{
lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2398_; 
v_a_2391_ = lean_ctor_get(v_x_2381_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v_x_2381_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2393_ = v_x_2381_;
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v_x_2381_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2396_; 
if (v_isShared_2394_ == 0)
{
lean_ctor_set_tag(v___x_2393_, 0);
v___x_2396_ = v___x_2393_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2391_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg___boxed(lean_object* v_x_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_x_2399_);
return v_res_2401_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(lean_object* v_e_2402_){
_start:
{
if (lean_obj_tag(v_e_2402_) == 0)
{
uint8_t v___x_2403_; 
v___x_2403_ = 2;
return v___x_2403_;
}
else
{
uint8_t v___x_2404_; 
v___x_2404_ = 0;
return v___x_2404_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4___boxed(lean_object* v_e_2405_){
_start:
{
uint8_t v_res_2406_; lean_object* v_r_2407_; 
v_res_2406_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(v_e_2405_);
lean_dec_ref(v_e_2405_);
v_r_2407_ = lean_box(v_res_2406_);
return v_r_2407_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2408_; double v___x_2409_; 
v___x_2408_ = lean_unsigned_to_nat(0u);
v___x_2409_ = lean_float_of_nat(v___x_2408_);
return v___x_2409_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2(void){
_start:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1));
v___x_2412_ = l_Lean_stringToMessageData(v___x_2411_);
return v___x_2412_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2413_; double v___x_2414_; 
v___x_2413_ = lean_unsigned_to_nat(1000u);
v___x_2414_ = lean_float_of_nat(v___x_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(lean_object* v_cls_2415_, uint8_t v_collapsed_2416_, lean_object* v_tag_2417_, lean_object* v_opts_2418_, uint8_t v_clsEnabled_2419_, lean_object* v_oldTraces_2420_, lean_object* v_msg_2421_, lean_object* v_resStartStop_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v_fst_2426_; lean_object* v_snd_2427_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v_data_2431_; lean_object* v_fst_2434_; lean_object* v_snd_2435_; lean_object* v___x_2436_; uint8_t v___x_2437_; lean_object* v___y_2439_; lean_object* v_a_2440_; uint8_t v___y_2455_; double v___y_2487_; 
v_fst_2426_ = lean_ctor_get(v_resStartStop_2422_, 0);
lean_inc(v_fst_2426_);
v_snd_2427_ = lean_ctor_get(v_resStartStop_2422_, 1);
lean_inc(v_snd_2427_);
lean_dec_ref(v_resStartStop_2422_);
v_fst_2434_ = lean_ctor_get(v_snd_2427_, 0);
lean_inc(v_fst_2434_);
v_snd_2435_ = lean_ctor_get(v_snd_2427_, 1);
lean_inc(v_snd_2435_);
lean_dec(v_snd_2427_);
v___x_2436_ = l_Lean_trace_profiler;
v___x_2437_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_2418_, v___x_2436_);
if (v___x_2437_ == 0)
{
v___y_2455_ = v___x_2437_;
goto v___jp_2454_;
}
else
{
lean_object* v___x_2492_; uint8_t v___x_2493_; 
v___x_2492_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2493_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_2418_, v___x_2492_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; double v___x_2496_; double v___x_2497_; double v___x_2498_; 
v___x_2494_ = l_Lean_trace_profiler_threshold;
v___x_2495_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_2418_, v___x_2494_);
v___x_2496_ = lean_float_of_nat(v___x_2495_);
v___x_2497_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3);
v___x_2498_ = lean_float_div(v___x_2496_, v___x_2497_);
v___y_2487_ = v___x_2498_;
goto v___jp_2486_;
}
else
{
lean_object* v___x_2499_; lean_object* v___x_2500_; double v___x_2501_; 
v___x_2499_ = l_Lean_trace_profiler_threshold;
v___x_2500_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_2418_, v___x_2499_);
v___x_2501_ = lean_float_of_nat(v___x_2500_);
v___y_2487_ = v___x_2501_;
goto v___jp_2486_;
}
}
v___jp_2428_:
{
lean_object* v___x_2432_; 
lean_inc(v___y_2429_);
v___x_2432_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(v_oldTraces_2420_, v_data_2431_, v___y_2429_, v___y_2430_, v___y_2423_, v___y_2424_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v___x_2433_; 
lean_dec_ref_known(v___x_2432_, 1);
v___x_2433_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_fst_2426_);
return v___x_2433_;
}
else
{
lean_dec(v_fst_2426_);
return v___x_2432_;
}
}
v___jp_2438_:
{
uint8_t v_result_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; double v___x_2444_; lean_object* v_data_2445_; 
v_result_2441_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(v_fst_2426_);
v___x_2442_ = lean_box(v_result_2441_);
v___x_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2442_);
v___x_2444_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0);
lean_inc_ref(v_tag_2417_);
lean_inc_ref(v___x_2443_);
lean_inc(v_cls_2415_);
v_data_2445_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2445_, 0, v_cls_2415_);
lean_ctor_set(v_data_2445_, 1, v___x_2443_);
lean_ctor_set(v_data_2445_, 2, v_tag_2417_);
lean_ctor_set_float(v_data_2445_, sizeof(void*)*3, v___x_2444_);
lean_ctor_set_float(v_data_2445_, sizeof(void*)*3 + 8, v___x_2444_);
lean_ctor_set_uint8(v_data_2445_, sizeof(void*)*3 + 16, v_collapsed_2416_);
if (v___x_2437_ == 0)
{
lean_dec_ref_known(v___x_2443_, 1);
lean_dec(v_snd_2435_);
lean_dec(v_fst_2434_);
lean_dec_ref(v_tag_2417_);
lean_dec(v_cls_2415_);
v___y_2429_ = v___y_2439_;
v___y_2430_ = v_a_2440_;
v_data_2431_ = v_data_2445_;
goto v___jp_2428_;
}
else
{
lean_object* v_data_2446_; double v___x_2447_; double v___x_2448_; 
lean_dec_ref_known(v_data_2445_, 3);
v_data_2446_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2446_, 0, v_cls_2415_);
lean_ctor_set(v_data_2446_, 1, v___x_2443_);
lean_ctor_set(v_data_2446_, 2, v_tag_2417_);
v___x_2447_ = lean_unbox_float(v_fst_2434_);
lean_dec(v_fst_2434_);
lean_ctor_set_float(v_data_2446_, sizeof(void*)*3, v___x_2447_);
v___x_2448_ = lean_unbox_float(v_snd_2435_);
lean_dec(v_snd_2435_);
lean_ctor_set_float(v_data_2446_, sizeof(void*)*3 + 8, v___x_2448_);
lean_ctor_set_uint8(v_data_2446_, sizeof(void*)*3 + 16, v_collapsed_2416_);
v___y_2429_ = v___y_2439_;
v___y_2430_ = v_a_2440_;
v_data_2431_ = v_data_2446_;
goto v___jp_2428_;
}
}
v___jp_2449_:
{
lean_object* v_ref_2450_; lean_object* v___x_2451_; 
v_ref_2450_ = lean_ctor_get(v___y_2423_, 2);
lean_inc(v___y_2424_);
lean_inc_ref(v___y_2423_);
lean_inc(v_fst_2426_);
v___x_2451_ = lean_apply_4(v_msg_2421_, v_fst_2426_, v___y_2423_, v___y_2424_, lean_box(0));
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_a_2452_);
lean_dec_ref_known(v___x_2451_, 1);
v___y_2439_ = v_ref_2450_;
v_a_2440_ = v_a_2452_;
goto v___jp_2438_;
}
else
{
lean_object* v___x_2453_; 
lean_dec_ref_known(v___x_2451_, 1);
v___x_2453_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2);
v___y_2439_ = v_ref_2450_;
v_a_2440_ = v___x_2453_;
goto v___jp_2438_;
}
}
v___jp_2454_:
{
if (v_clsEnabled_2419_ == 0)
{
if (v___y_2455_ == 0)
{
lean_object* v___x_2456_; lean_object* v_traceState_2457_; lean_object* v_env_2458_; lean_object* v_nextMacroScope_2459_; lean_object* v_ngen_2460_; lean_object* v_auxDeclNGen_2461_; lean_object* v_cache_2462_; lean_object* v_recordedDeps_2463_; lean_object* v_messages_2464_; lean_object* v_infoState_2465_; lean_object* v_snapshotTasks_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2485_; 
lean_dec(v_snd_2435_);
lean_dec(v_fst_2434_);
lean_dec_ref(v_msg_2421_);
lean_dec_ref(v_tag_2417_);
lean_dec(v_cls_2415_);
v___x_2456_ = lean_st_ref_take(v___y_2424_);
v_traceState_2457_ = lean_ctor_get(v___x_2456_, 4);
v_env_2458_ = lean_ctor_get(v___x_2456_, 0);
v_nextMacroScope_2459_ = lean_ctor_get(v___x_2456_, 1);
v_ngen_2460_ = lean_ctor_get(v___x_2456_, 2);
v_auxDeclNGen_2461_ = lean_ctor_get(v___x_2456_, 3);
v_cache_2462_ = lean_ctor_get(v___x_2456_, 5);
v_recordedDeps_2463_ = lean_ctor_get(v___x_2456_, 6);
v_messages_2464_ = lean_ctor_get(v___x_2456_, 7);
v_infoState_2465_ = lean_ctor_get(v___x_2456_, 8);
v_snapshotTasks_2466_ = lean_ctor_get(v___x_2456_, 9);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2468_ = v___x_2456_;
v_isShared_2469_ = v_isSharedCheck_2485_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_snapshotTasks_2466_);
lean_inc(v_infoState_2465_);
lean_inc(v_messages_2464_);
lean_inc(v_recordedDeps_2463_);
lean_inc(v_cache_2462_);
lean_inc(v_traceState_2457_);
lean_inc(v_auxDeclNGen_2461_);
lean_inc(v_ngen_2460_);
lean_inc(v_nextMacroScope_2459_);
lean_inc(v_env_2458_);
lean_dec(v___x_2456_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2485_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
uint64_t v_tid_2470_; lean_object* v_traces_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2484_; 
v_tid_2470_ = lean_ctor_get_uint64(v_traceState_2457_, sizeof(void*)*1);
v_traces_2471_ = lean_ctor_get(v_traceState_2457_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v_traceState_2457_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2473_ = v_traceState_2457_;
v_isShared_2474_ = v_isSharedCheck_2484_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_traces_2471_);
lean_dec(v_traceState_2457_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2484_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2475_; lean_object* v___x_2477_; 
v___x_2475_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2420_, v_traces_2471_);
lean_dec_ref(v_traces_2471_);
if (v_isShared_2474_ == 0)
{
lean_ctor_set(v___x_2473_, 0, v___x_2475_);
v___x_2477_ = v___x_2473_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v___x_2475_);
lean_ctor_set_uint64(v_reuseFailAlloc_2483_, sizeof(void*)*1, v_tid_2470_);
v___x_2477_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
lean_object* v___x_2479_; 
if (v_isShared_2469_ == 0)
{
lean_ctor_set(v___x_2468_, 4, v___x_2477_);
v___x_2479_ = v___x_2468_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_env_2458_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v_nextMacroScope_2459_);
lean_ctor_set(v_reuseFailAlloc_2482_, 2, v_ngen_2460_);
lean_ctor_set(v_reuseFailAlloc_2482_, 3, v_auxDeclNGen_2461_);
lean_ctor_set(v_reuseFailAlloc_2482_, 4, v___x_2477_);
lean_ctor_set(v_reuseFailAlloc_2482_, 5, v_cache_2462_);
lean_ctor_set(v_reuseFailAlloc_2482_, 6, v_recordedDeps_2463_);
lean_ctor_set(v_reuseFailAlloc_2482_, 7, v_messages_2464_);
lean_ctor_set(v_reuseFailAlloc_2482_, 8, v_infoState_2465_);
lean_ctor_set(v_reuseFailAlloc_2482_, 9, v_snapshotTasks_2466_);
v___x_2479_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = lean_st_ref_put(v___y_2424_, v___x_2479_);
v___x_2481_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_fst_2426_);
return v___x_2481_;
}
}
}
}
}
else
{
goto v___jp_2449_;
}
}
else
{
goto v___jp_2449_;
}
}
v___jp_2486_:
{
double v___x_2488_; double v___x_2489_; double v___x_2490_; uint8_t v___x_2491_; 
v___x_2488_ = lean_unbox_float(v_snd_2435_);
v___x_2489_ = lean_unbox_float(v_fst_2434_);
v___x_2490_ = lean_float_sub(v___x_2488_, v___x_2489_);
v___x_2491_ = lean_float_decLt(v___y_2487_, v___x_2490_);
v___y_2455_ = v___x_2491_;
goto v___jp_2454_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___boxed(lean_object* v_cls_2502_, lean_object* v_collapsed_2503_, lean_object* v_tag_2504_, lean_object* v_opts_2505_, lean_object* v_clsEnabled_2506_, lean_object* v_oldTraces_2507_, lean_object* v_msg_2508_, lean_object* v_resStartStop_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
uint8_t v_collapsed_boxed_2513_; uint8_t v_clsEnabled_boxed_2514_; lean_object* v_res_2515_; 
v_collapsed_boxed_2513_ = lean_unbox(v_collapsed_2503_);
v_clsEnabled_boxed_2514_ = lean_unbox(v_clsEnabled_2506_);
v_res_2515_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_2502_, v_collapsed_boxed_2513_, v_tag_2504_, v_opts_2505_, v_clsEnabled_boxed_2514_, v_oldTraces_2507_, v_msg_2508_, v_resStartStop_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec_ref(v_opts_2505_);
return v_res_2515_;
}
}
static double _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2518_; double v___x_2519_; 
v___x_2518_ = lean_unsigned_to_nat(1000000000u);
v___x_2519_ = lean_float_of_nat(v___x_2518_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(lean_object* v_decl_2520_, lean_object* v___x_2521_, uint8_t v___x_2522_, lean_object* v___x_2523_, lean_object* v___f_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v___y_2529_; lean_object* v_a_2530_; lean_object* v___y_2543_; lean_object* v_a_2544_; lean_object* v_toCold_2556_; lean_object* v_options_2557_; uint8_t v_hasTrace_2558_; 
v_toCold_2556_ = lean_ctor_get(v___y_2525_, 0);
v_options_2557_ = lean_ctor_get(v_toCold_2556_, 2);
v_hasTrace_2558_ = lean_ctor_get_uint8(v_options_2557_, sizeof(void*)*1);
if (v_hasTrace_2558_ == 0)
{
lean_object* v_cancelTk_x3f_2559_; lean_object* v___x_2560_; 
lean_dec_ref(v___f_2524_);
lean_dec_ref(v___x_2523_);
lean_dec(v___x_2521_);
v_cancelTk_x3f_2559_ = lean_ctor_get(v_toCold_2556_, 10);
lean_inc(v_decl_2520_);
v___x_2560_ = l_Lean_warnIfUsesSorry(v_decl_2520_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v___x_2561_; lean_object* v_env_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v_env_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; 
lean_dec_ref_known(v___x_2560_, 1);
v___x_2561_ = lean_st_ref_get(v___y_2526_);
v_env_2562_ = lean_ctor_get(v___x_2561_, 0);
lean_inc_ref(v_env_2562_);
lean_dec(v___x_2561_);
v___x_2563_ = l_Lean_getExplicitRewriteRules(v_env_2562_);
v___x_2564_ = lean_st_ref_get(v___y_2526_);
v_env_2565_ = lean_ctor_get(v___x_2564_, 0);
lean_inc_ref(v_env_2565_);
lean_dec(v___x_2564_);
v___x_2566_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2525_);
v___x_2567_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2565_, v___x_2566_, v_decl_2520_, v_cancelTk_x3f_2559_, v___x_2563_);
lean_dec_ref(v___x_2563_);
lean_dec_ref(v___x_2566_);
v___x_2568_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2567_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; lean_object* v___x_2570_; 
lean_dec(v_decl_2520_);
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2568_, 1);
v___x_2570_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2569_, v___y_2526_);
return v___x_2570_;
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2578_; 
v_a_2571_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2573_ = v___x_2568_;
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v___x_2568_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2576_; 
lean_inc(v_a_2571_);
if (v_isShared_2574_ == 0)
{
v___x_2576_ = v___x_2573_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2571_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
v___y_2543_ = v___x_2576_;
v_a_2544_ = v_a_2571_;
goto v___jp_2542_;
}
}
}
}
else
{
lean_dec(v_decl_2520_);
return v___x_2560_;
}
}
else
{
lean_object* v_cancelTk_x3f_2579_; lean_object* v_inheritedTraceOptions_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; uint8_t v___x_2583_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v_a_2587_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v_a_2602_; lean_object* v___y_2605_; lean_object* v___y_2606_; lean_object* v_a_2607_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v_a_2615_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v_a_2627_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v_a_2632_; 
v_cancelTk_x3f_2579_ = lean_ctor_get(v_toCold_2556_, 10);
v_inheritedTraceOptions_2580_ = lean_ctor_get(v_toCold_2556_, 11);
v___x_2581_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v___x_2521_);
v___x_2582_ = l_Lean_Name_append(v___x_2581_, v___x_2521_);
v___x_2583_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2580_, v_options_2557_, v___x_2582_);
lean_dec(v___x_2582_);
if (v___x_2583_ == 0)
{
lean_object* v___x_2686_; uint8_t v___x_2687_; 
v___x_2686_ = l_Lean_trace_profiler;
v___x_2687_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_2557_, v___x_2686_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; 
lean_dec_ref(v___f_2524_);
lean_dec_ref(v___x_2523_);
lean_dec(v___x_2521_);
lean_inc(v_decl_2520_);
v___x_2688_ = l_Lean_warnIfUsesSorry(v_decl_2520_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v___x_2689_; lean_object* v_env_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v_env_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; 
lean_dec_ref_known(v___x_2688_, 1);
v___x_2689_ = lean_st_ref_get(v___y_2526_);
v_env_2690_ = lean_ctor_get(v___x_2689_, 0);
lean_inc_ref(v_env_2690_);
lean_dec(v___x_2689_);
v___x_2691_ = l_Lean_getExplicitRewriteRules(v_env_2690_);
v___x_2692_ = lean_st_ref_get(v___y_2526_);
v_env_2693_ = lean_ctor_get(v___x_2692_, 0);
lean_inc_ref(v_env_2693_);
lean_dec(v___x_2692_);
v___x_2694_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2525_);
v___x_2695_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2693_, v___x_2694_, v_decl_2520_, v_cancelTk_x3f_2579_, v___x_2691_);
lean_dec_ref(v___x_2691_);
lean_dec_ref(v___x_2694_);
v___x_2696_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2695_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v_a_2697_; lean_object* v___x_2698_; 
lean_dec(v_decl_2520_);
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___x_2696_, 1);
v___x_2698_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2697_, v___y_2526_);
return v___x_2698_;
}
else
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
v_a_2699_ = lean_ctor_get(v___x_2696_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2701_ = v___x_2696_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2696_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
lean_inc(v_a_2699_);
if (v_isShared_2702_ == 0)
{
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2699_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
v___y_2529_ = v___x_2704_;
v_a_2530_ = v_a_2699_;
goto v___jp_2528_;
}
}
}
}
else
{
lean_dec(v_decl_2520_);
return v___x_2688_;
}
}
else
{
goto v___jp_2637_;
}
}
else
{
goto v___jp_2637_;
}
v___jp_2584_:
{
lean_object* v___x_2588_; double v___x_2589_; double v___x_2590_; double v___x_2591_; double v___x_2592_; double v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2588_ = lean_io_mono_nanos_now();
v___x_2589_ = lean_float_of_nat(v___y_2585_);
v___x_2590_ = lean_float_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1);
v___x_2591_ = lean_float_div(v___x_2589_, v___x_2590_);
v___x_2592_ = lean_float_of_nat(v___x_2588_);
v___x_2593_ = lean_float_div(v___x_2592_, v___x_2590_);
v___x_2594_ = lean_box_float(v___x_2591_);
v___x_2595_ = lean_box_float(v___x_2593_);
v___x_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2594_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2597_, 0, v_a_2587_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
v___x_2598_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v___x_2521_, v___x_2522_, v___x_2523_, v_options_2557_, v___x_2583_, v___y_2586_, v___f_2524_, v___x_2597_, v___y_2525_, v___y_2526_);
return v___x_2598_;
}
v___jp_2599_:
{
lean_object* v___x_2603_; 
v___x_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2603_, 0, v_a_2602_);
v___y_2585_ = v___y_2600_;
v___y_2586_ = v___y_2601_;
v_a_2587_ = v___x_2603_;
goto v___jp_2584_;
}
v___jp_2604_:
{
uint8_t v___x_2608_; 
v___x_2608_ = l_Lean_Exception_isInterrupt(v_a_2607_);
if (v___x_2608_ == 0)
{
uint8_t v___x_2609_; 
lean_inc_ref(v_a_2607_);
v___x_2609_ = l_Lean_Exception_isRuntime(v_a_2607_);
if (v___x_2609_ == 0)
{
lean_object* v___x_2610_; 
v___x_2610_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2520_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_dec_ref_known(v___x_2610_, 1);
v___y_2600_ = v___y_2605_;
v___y_2601_ = v___y_2606_;
v_a_2602_ = v_a_2607_;
goto v___jp_2599_;
}
else
{
lean_object* v_a_2611_; 
lean_dec_ref(v_a_2607_);
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
v___y_2600_ = v___y_2605_;
v___y_2601_ = v___y_2606_;
v_a_2602_ = v_a_2611_;
goto v___jp_2599_;
}
}
else
{
lean_dec(v_decl_2520_);
v___y_2600_ = v___y_2605_;
v___y_2601_ = v___y_2606_;
v_a_2602_ = v_a_2607_;
goto v___jp_2599_;
}
}
else
{
lean_dec(v_decl_2520_);
v___y_2600_ = v___y_2605_;
v___y_2601_ = v___y_2606_;
v_a_2602_ = v_a_2607_;
goto v___jp_2599_;
}
}
v___jp_2612_:
{
lean_object* v___x_2616_; double v___x_2617_; double v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2616_ = lean_io_get_num_heartbeats();
v___x_2617_ = lean_float_of_nat(v___y_2614_);
v___x_2618_ = lean_float_of_nat(v___x_2616_);
v___x_2619_ = lean_box_float(v___x_2617_);
v___x_2620_ = lean_box_float(v___x_2618_);
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2619_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2622_, 0, v_a_2615_);
lean_ctor_set(v___x_2622_, 1, v___x_2621_);
v___x_2623_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v___x_2521_, v___x_2522_, v___x_2523_, v_options_2557_, v___x_2583_, v___y_2613_, v___f_2524_, v___x_2622_, v___y_2525_, v___y_2526_);
return v___x_2623_;
}
v___jp_2624_:
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v_a_2627_);
v___y_2613_ = v___y_2625_;
v___y_2614_ = v___y_2626_;
v_a_2615_ = v___x_2628_;
goto v___jp_2612_;
}
v___jp_2629_:
{
uint8_t v___x_2633_; 
v___x_2633_ = l_Lean_Exception_isInterrupt(v_a_2632_);
if (v___x_2633_ == 0)
{
uint8_t v___x_2634_; 
lean_inc_ref(v_a_2632_);
v___x_2634_ = l_Lean_Exception_isRuntime(v_a_2632_);
if (v___x_2634_ == 0)
{
lean_object* v___x_2635_; 
v___x_2635_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2520_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_dec_ref_known(v___x_2635_, 1);
v___y_2625_ = v___y_2630_;
v___y_2626_ = v___y_2631_;
v_a_2627_ = v_a_2632_;
goto v___jp_2624_;
}
else
{
lean_object* v_a_2636_; 
lean_dec_ref(v_a_2632_);
v_a_2636_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_a_2636_);
lean_dec_ref_known(v___x_2635_, 1);
v___y_2625_ = v___y_2630_;
v___y_2626_ = v___y_2631_;
v_a_2627_ = v_a_2636_;
goto v___jp_2624_;
}
}
else
{
lean_dec(v_decl_2520_);
v___y_2625_ = v___y_2630_;
v___y_2626_ = v___y_2631_;
v_a_2627_ = v_a_2632_;
goto v___jp_2624_;
}
}
else
{
lean_dec(v_decl_2520_);
v___y_2625_ = v___y_2630_;
v___y_2626_ = v___y_2631_;
v_a_2627_ = v_a_2632_;
goto v___jp_2624_;
}
}
v___jp_2637_:
{
lean_object* v___x_2638_; lean_object* v_a_2639_; lean_object* v___x_2640_; uint8_t v___x_2641_; 
v___x_2638_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_2526_);
v_a_2639_ = lean_ctor_get(v___x_2638_, 0);
lean_inc(v_a_2639_);
lean_dec_ref(v___x_2638_);
v___x_2640_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2641_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_2557_, v___x_2640_);
if (v___x_2641_ == 0)
{
lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2642_ = lean_io_mono_nanos_now();
lean_inc(v_decl_2520_);
v___x_2643_ = l_Lean_warnIfUsesSorry(v_decl_2520_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2643_) == 0)
{
lean_object* v___x_2644_; lean_object* v_env_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v_env_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
lean_dec_ref_known(v___x_2643_, 1);
v___x_2644_ = lean_st_ref_get(v___y_2526_);
v_env_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc_ref(v_env_2645_);
lean_dec(v___x_2644_);
v___x_2646_ = l_Lean_getExplicitRewriteRules(v_env_2645_);
v___x_2647_ = lean_st_ref_get(v___y_2526_);
v_env_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc_ref(v_env_2648_);
lean_dec(v___x_2647_);
v___x_2649_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2525_);
v___x_2650_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2648_, v___x_2649_, v_decl_2520_, v_cancelTk_x3f_2579_, v___x_2646_);
lean_dec_ref(v___x_2646_);
lean_dec_ref(v___x_2649_);
v___x_2651_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2650_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v_a_2652_; lean_object* v___x_2653_; lean_object* v_a_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2661_; 
lean_dec(v_decl_2520_);
v_a_2652_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_a_2652_);
lean_dec_ref_known(v___x_2651_, 1);
v___x_2653_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2652_, v___y_2526_);
v_a_2654_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2656_ = v___x_2653_;
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_a_2654_);
lean_dec(v___x_2653_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2659_; 
if (v_isShared_2657_ == 0)
{
lean_ctor_set_tag(v___x_2656_, 1);
v___x_2659_ = v___x_2656_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v_a_2654_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
v___y_2585_ = v___x_2642_;
v___y_2586_ = v_a_2639_;
v_a_2587_ = v___x_2659_;
goto v___jp_2584_;
}
}
}
else
{
lean_object* v_a_2662_; 
v_a_2662_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_a_2662_);
lean_dec_ref_known(v___x_2651_, 1);
v___y_2605_ = v___x_2642_;
v___y_2606_ = v_a_2639_;
v_a_2607_ = v_a_2662_;
goto v___jp_2604_;
}
}
else
{
lean_object* v_a_2663_; 
lean_dec(v_decl_2520_);
v_a_2663_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2663_);
lean_dec_ref_known(v___x_2643_, 1);
v___y_2600_ = v___x_2642_;
v___y_2601_ = v_a_2639_;
v_a_2602_ = v_a_2663_;
goto v___jp_2599_;
}
}
else
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2664_ = lean_io_get_num_heartbeats();
lean_inc(v_decl_2520_);
v___x_2665_ = l_Lean_warnIfUsesSorry(v_decl_2520_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v___x_2666_; lean_object* v_env_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v_env_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
lean_dec_ref_known(v___x_2665_, 1);
v___x_2666_ = lean_st_ref_get(v___y_2526_);
v_env_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc_ref(v_env_2667_);
lean_dec(v___x_2666_);
v___x_2668_ = l_Lean_getExplicitRewriteRules(v_env_2667_);
v___x_2669_ = lean_st_ref_get(v___y_2526_);
v_env_2670_ = lean_ctor_get(v___x_2669_, 0);
lean_inc_ref(v_env_2670_);
lean_dec(v___x_2669_);
v___x_2671_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2525_);
v___x_2672_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2670_, v___x_2671_, v_decl_2520_, v_cancelTk_x3f_2579_, v___x_2668_);
lean_dec_ref(v___x_2668_);
lean_dec_ref(v___x_2671_);
v___x_2673_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2672_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2675_; lean_object* v_a_2676_; lean_object* v___x_2678_; uint8_t v_isShared_2679_; uint8_t v_isSharedCheck_2683_; 
lean_dec(v_decl_2520_);
v_a_2674_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2674_);
lean_dec_ref_known(v___x_2673_, 1);
v___x_2675_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2674_, v___y_2526_);
v_a_2676_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2678_ = v___x_2675_;
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
else
{
lean_inc(v_a_2676_);
lean_dec(v___x_2675_);
v___x_2678_ = lean_box(0);
v_isShared_2679_ = v_isSharedCheck_2683_;
goto v_resetjp_2677_;
}
v_resetjp_2677_:
{
lean_object* v___x_2681_; 
if (v_isShared_2679_ == 0)
{
lean_ctor_set_tag(v___x_2678_, 1);
v___x_2681_ = v___x_2678_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v_a_2676_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
v___y_2613_ = v_a_2639_;
v___y_2614_ = v___x_2664_;
v_a_2615_ = v___x_2681_;
goto v___jp_2612_;
}
}
}
else
{
lean_object* v_a_2684_; 
v_a_2684_ = lean_ctor_get(v___x_2673_, 0);
lean_inc(v_a_2684_);
lean_dec_ref_known(v___x_2673_, 1);
v___y_2630_ = v_a_2639_;
v___y_2631_ = v___x_2664_;
v_a_2632_ = v_a_2684_;
goto v___jp_2629_;
}
}
else
{
lean_object* v_a_2685_; 
lean_dec(v_decl_2520_);
v_a_2685_ = lean_ctor_get(v___x_2665_, 0);
lean_inc(v_a_2685_);
lean_dec_ref_known(v___x_2665_, 1);
v___y_2625_ = v_a_2639_;
v___y_2626_ = v___x_2664_;
v_a_2627_ = v_a_2685_;
goto v___jp_2624_;
}
}
}
}
v___jp_2528_:
{
uint8_t v___x_2531_; 
v___x_2531_ = l_Lean_Exception_isInterrupt(v_a_2530_);
if (v___x_2531_ == 0)
{
uint8_t v___x_2532_; 
lean_inc_ref(v_a_2530_);
v___x_2532_ = l_Lean_Exception_isRuntime(v_a_2530_);
if (v___x_2532_ == 0)
{
lean_object* v___x_2533_; 
lean_dec_ref(v___y_2529_);
v___x_2533_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2520_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v___x_2533_, 0);
lean_dec(v_unused_2541_);
v___x_2535_ = v___x_2533_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_dec(v___x_2533_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set_tag(v___x_2535_, 1);
lean_ctor_set(v___x_2535_, 0, v_a_2530_);
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2530_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
else
{
lean_dec_ref(v_a_2530_);
return v___x_2533_;
}
}
else
{
lean_dec_ref(v_a_2530_);
lean_dec(v_decl_2520_);
return v___y_2529_;
}
}
else
{
lean_dec_ref(v_a_2530_);
lean_dec(v_decl_2520_);
return v___y_2529_;
}
}
v___jp_2542_:
{
uint8_t v___x_2545_; 
v___x_2545_ = l_Lean_Exception_isInterrupt(v_a_2544_);
if (v___x_2545_ == 0)
{
uint8_t v___x_2546_; 
lean_inc_ref(v_a_2544_);
v___x_2546_ = l_Lean_Exception_isRuntime(v_a_2544_);
if (v___x_2546_ == 0)
{
lean_object* v___x_2547_; 
lean_dec_ref(v___y_2543_);
v___x_2547_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2520_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2554_; 
v_isSharedCheck_2554_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2554_ == 0)
{
lean_object* v_unused_2555_; 
v_unused_2555_ = lean_ctor_get(v___x_2547_, 0);
lean_dec(v_unused_2555_);
v___x_2549_ = v___x_2547_;
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
else
{
lean_dec(v___x_2547_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2554_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2552_; 
if (v_isShared_2550_ == 0)
{
lean_ctor_set_tag(v___x_2549_, 1);
lean_ctor_set(v___x_2549_, 0, v_a_2544_);
v___x_2552_ = v___x_2549_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_a_2544_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
}
else
{
lean_dec_ref(v_a_2544_);
return v___x_2547_;
}
}
else
{
lean_dec_ref(v_a_2544_);
lean_dec(v_decl_2520_);
return v___y_2543_;
}
}
else
{
lean_dec_ref(v_a_2544_);
lean_dec(v_decl_2520_);
return v___y_2543_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed(lean_object* v_decl_2707_, lean_object* v___x_2708_, lean_object* v___x_2709_, lean_object* v___x_2710_, lean_object* v___f_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
uint8_t v___x_8066__boxed_2715_; lean_object* v_res_2716_; 
v___x_8066__boxed_2715_ = lean_unbox(v___x_2709_);
v_res_2716_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(v_decl_2707_, v___x_2708_, v___x_8066__boxed_2715_, v___x_2710_, v___f_2711_, v___y_2712_, v___y_2713_);
lean_dec(v___y_2713_);
lean_dec_ref(v___y_2712_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(lean_object* v_decl_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_){
_start:
{
lean_object* v___f_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; uint8_t v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___f_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
lean_inc(v_decl_2721_);
v___f_2725_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed), 5, 1);
lean_closure_set(v___f_2725_, 0, v_decl_2721_);
v___x_2726_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2722_);
v___x_2727_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0));
v___x_2728_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2));
v___x_2729_ = 1;
v___x_2730_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_2731_ = lean_box(v___x_2729_);
v___f_2732_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed), 8, 5);
lean_closure_set(v___f_2732_, 0, v_decl_2721_);
lean_closure_set(v___f_2732_, 1, v___x_2728_);
lean_closure_set(v___f_2732_, 2, v___x_2731_);
lean_closure_set(v___f_2732_, 3, v___x_2730_);
lean_closure_set(v___f_2732_, 4, v___f_2725_);
v___x_2733_ = lean_box(0);
v___x_2734_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v___x_2727_, v___x_2726_, v___f_2732_, v___x_2733_, v_a_2722_, v_a_2723_);
lean_dec_ref(v___x_2726_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___boxed(lean_object* v_decl_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2735_, v_a_2736_, v_a_2737_);
lean_dec(v_a_2737_);
lean_dec_ref(v_a_2736_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(lean_object* v_00_u03b1_2740_, lean_object* v_x_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_){
_start:
{
lean_object* v___x_2745_; 
v___x_2745_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_x_2741_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2746_, lean_object* v_x_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(v_00_u03b1_2746_, v_x_2747_, v___y_2748_, v___y_2749_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(lean_object* v___y_2752_, lean_object* v_a_2753_, lean_object* v_ref_2754_, lean_object* v_a_x3f_2755_){
_start:
{
lean_object* v___x_2757_; lean_object* v_env_2758_; lean_object* v___x_2759_; 
v___x_2757_ = lean_st_ref_get(v___y_2752_);
v_env_2758_ = lean_ctor_get(v___x_2757_, 0);
lean_inc_ref(v_env_2758_);
lean_dec(v___x_2757_);
v___x_2759_ = l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(v_a_2753_, v_env_2758_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v_a_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2767_; 
lean_dec(v_ref_2754_);
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2767_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2762_ = v___x_2759_;
v_isShared_2763_ = v_isSharedCheck_2767_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_a_2760_);
lean_dec(v___x_2759_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2767_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2765_; 
if (v_isShared_2763_ == 0)
{
v___x_2765_ = v___x_2762_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_a_2760_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
}
else
{
lean_object* v_a_2768_; lean_object* v___x_2770_; uint8_t v_isShared_2771_; uint8_t v_isSharedCheck_2779_; 
v_a_2768_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2770_ = v___x_2759_;
v_isShared_2771_ = v_isSharedCheck_2779_;
goto v_resetjp_2769_;
}
else
{
lean_inc(v_a_2768_);
lean_dec(v___x_2759_);
v___x_2770_ = lean_box(0);
v_isShared_2771_ = v_isSharedCheck_2779_;
goto v_resetjp_2769_;
}
v_resetjp_2769_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2777_; 
v___x_2772_ = lean_io_error_to_string(v_a_2768_);
v___x_2773_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2772_);
v___x_2774_ = l_Lean_MessageData_ofFormat(v___x_2773_);
v___x_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2775_, 0, v_ref_2754_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
if (v_isShared_2771_ == 0)
{
lean_ctor_set(v___x_2770_, 0, v___x_2775_);
v___x_2777_ = v___x_2770_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v___x_2775_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed(lean_object* v___y_2780_, lean_object* v_a_2781_, lean_object* v_ref_2782_, lean_object* v_a_x3f_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(v___y_2780_, v_a_2781_, v_ref_2782_, v_a_x3f_2783_);
lean_dec(v_a_x3f_2783_);
lean_dec(v___y_2780_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v_a_2788_, lean_object* v_a_x3f_2789_){
_start:
{
lean_object* v___x_2791_; lean_object* v_env_2792_; lean_object* v_ref_2793_; lean_object* v___x_2794_; 
v___x_2791_ = lean_st_ref_get(v___y_2786_);
v_env_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc_ref(v_env_2792_);
lean_dec(v___x_2791_);
v_ref_2793_ = lean_ctor_get(v___y_2787_, 2);
v___x_2794_ = l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(v_a_2788_, v_env_2792_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2794_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
else
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2814_; 
v_a_2803_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2805_ = v___x_2794_;
v_isShared_2806_ = v_isSharedCheck_2814_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2794_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2814_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2812_; 
v___x_2807_ = lean_io_error_to_string(v_a_2803_);
v___x_2808_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
v___x_2809_ = l_Lean_MessageData_ofFormat(v___x_2808_);
lean_inc(v_ref_2793_);
v___x_2810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2810_, 0, v_ref_2793_);
lean_ctor_set(v___x_2810_, 1, v___x_2809_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v___x_2810_);
v___x_2812_ = v___x_2805_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v___x_2810_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1___boxed(lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v_a_2817_, lean_object* v_a_x3f_2818_, lean_object* v___y_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_2815_, v___y_2816_, v_a_2817_, v_a_x3f_2818_);
lean_dec(v_a_x3f_2818_);
lean_dec_ref(v___y_2816_);
lean_dec(v___y_2815_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(lean_object* v_a_2821_, lean_object* v_asyncEnv_2822_, lean_object* v_decl_2823_, lean_object* v_x_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_){
_start:
{
lean_object* v___x_2828_; lean_object* v_r_2829_; 
v___x_2828_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_asyncEnv_2822_, v___y_2826_);
lean_dec_ref(v___x_2828_);
v_r_2829_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2823_, v___y_2825_, v___y_2826_);
if (lean_obj_tag(v_r_2829_) == 0)
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2846_; 
v_a_2830_ = lean_ctor_get(v_r_2829_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v_r_2829_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2832_ = v_r_2829_;
v_isShared_2833_ = v_isSharedCheck_2846_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v_r_2829_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2846_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
lean_inc(v_a_2830_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set_tag(v___x_2832_, 1);
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v_a_2830_);
v___x_2835_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
lean_object* v___x_2836_; 
v___x_2836_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_2826_, v___y_2825_, v_a_2821_, v___x_2835_);
lean_dec_ref(v___x_2835_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2843_ == 0)
{
lean_object* v_unused_2844_; 
v_unused_2844_ = lean_ctor_get(v___x_2836_, 0);
lean_dec(v_unused_2844_);
v___x_2838_ = v___x_2836_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_dec(v___x_2836_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v_a_2830_);
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_a_2830_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
else
{
lean_dec(v_a_2830_);
return v___x_2836_;
}
}
}
}
else
{
lean_object* v_a_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_a_2847_ = lean_ctor_get(v_r_2829_, 0);
lean_inc(v_a_2847_);
lean_dec_ref_known(v_r_2829_, 1);
v___x_2848_ = lean_box(0);
v___x_2849_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_2826_, v___y_2825_, v_a_2821_, v___x_2848_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2856_ == 0)
{
lean_object* v_unused_2857_; 
v_unused_2857_ = lean_ctor_get(v___x_2849_, 0);
lean_dec(v_unused_2857_);
v___x_2851_ = v___x_2849_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_dec(v___x_2849_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
lean_ctor_set_tag(v___x_2851_, 1);
lean_ctor_set(v___x_2851_, 0, v_a_2847_);
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2847_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
else
{
lean_dec(v_a_2847_);
return v___x_2849_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed(lean_object* v_a_2858_, lean_object* v_asyncEnv_2859_, lean_object* v_decl_2860_, lean_object* v_x_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(v_a_2858_, v_asyncEnv_2859_, v_decl_2860_, v_x_2861_, v___y_2862_, v___y_2863_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec_ref(v_x_2861_);
return v_res_2865_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2867_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0));
v___x_2868_ = l_Lean_stringToMessageData(v___x_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(lean_object* v_decl_2869_, lean_object* v_x_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2874_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1);
v___x_2875_ = l_Lean_Declaration_getNames(v_decl_2869_);
v___x_2876_ = lean_box(0);
v___x_2877_ = l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(v___x_2875_, v___x_2876_);
v___x_2878_ = l_Lean_MessageData_ofList(v___x_2877_);
v___x_2879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2874_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2879_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed(lean_object* v_decl_2881_, lean_object* v_x_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(v_decl_2881_, v_x_2882_, v___y_2883_, v___y_2884_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec_ref(v_x_2882_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(lean_object* v_cls_2889_, lean_object* v_msg_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v_ref_2894_; lean_object* v___x_2895_; lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2941_; 
v_ref_2894_ = lean_ctor_get(v___y_2891_, 2);
v___x_2895_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_2890_, v___y_2891_, v___y_2892_);
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2895_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2898_ = v___x_2895_;
v_isShared_2899_ = v_isSharedCheck_2941_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2895_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2941_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2900_; lean_object* v_traceState_2901_; lean_object* v_env_2902_; lean_object* v_nextMacroScope_2903_; lean_object* v_ngen_2904_; lean_object* v_auxDeclNGen_2905_; lean_object* v_cache_2906_; lean_object* v_recordedDeps_2907_; lean_object* v_messages_2908_; lean_object* v_infoState_2909_; lean_object* v_snapshotTasks_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2940_; 
v___x_2900_ = lean_st_ref_take(v___y_2892_);
v_traceState_2901_ = lean_ctor_get(v___x_2900_, 4);
v_env_2902_ = lean_ctor_get(v___x_2900_, 0);
v_nextMacroScope_2903_ = lean_ctor_get(v___x_2900_, 1);
v_ngen_2904_ = lean_ctor_get(v___x_2900_, 2);
v_auxDeclNGen_2905_ = lean_ctor_get(v___x_2900_, 3);
v_cache_2906_ = lean_ctor_get(v___x_2900_, 5);
v_recordedDeps_2907_ = lean_ctor_get(v___x_2900_, 6);
v_messages_2908_ = lean_ctor_get(v___x_2900_, 7);
v_infoState_2909_ = lean_ctor_get(v___x_2900_, 8);
v_snapshotTasks_2910_ = lean_ctor_get(v___x_2900_, 9);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2912_ = v___x_2900_;
v_isShared_2913_ = v_isSharedCheck_2940_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_snapshotTasks_2910_);
lean_inc(v_infoState_2909_);
lean_inc(v_messages_2908_);
lean_inc(v_recordedDeps_2907_);
lean_inc(v_cache_2906_);
lean_inc(v_traceState_2901_);
lean_inc(v_auxDeclNGen_2905_);
lean_inc(v_ngen_2904_);
lean_inc(v_nextMacroScope_2903_);
lean_inc(v_env_2902_);
lean_dec(v___x_2900_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2940_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
uint64_t v_tid_2914_; lean_object* v_traces_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2939_; 
v_tid_2914_ = lean_ctor_get_uint64(v_traceState_2901_, sizeof(void*)*1);
v_traces_2915_ = lean_ctor_get(v_traceState_2901_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v_traceState_2901_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2917_ = v_traceState_2901_;
v_isShared_2918_ = v_isSharedCheck_2939_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_traces_2915_);
lean_dec(v_traceState_2901_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2939_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; double v___x_2921_; uint8_t v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2930_; 
v___x_2919_ = lean_box(0);
v___x_2920_ = lean_box(0);
v___x_2921_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0);
v___x_2922_ = 0;
v___x_2923_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_2924_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2924_, 0, v_cls_2889_);
lean_ctor_set(v___x_2924_, 1, v___x_2920_);
lean_ctor_set(v___x_2924_, 2, v___x_2923_);
lean_ctor_set_float(v___x_2924_, sizeof(void*)*3, v___x_2921_);
lean_ctor_set_float(v___x_2924_, sizeof(void*)*3 + 8, v___x_2921_);
lean_ctor_set_uint8(v___x_2924_, sizeof(void*)*3 + 16, v___x_2922_);
v___x_2925_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0));
v___x_2926_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2924_);
lean_ctor_set(v___x_2926_, 1, v_a_2896_);
lean_ctor_set(v___x_2926_, 2, v___x_2925_);
lean_inc(v_ref_2894_);
v___x_2927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2927_, 0, v_ref_2894_);
lean_ctor_set(v___x_2927_, 1, v___x_2926_);
v___x_2928_ = l_Lean_PersistentArray_push___redArg(v_traces_2915_, v___x_2927_);
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 0, v___x_2928_);
v___x_2930_ = v___x_2917_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v___x_2928_);
lean_ctor_set_uint64(v_reuseFailAlloc_2938_, sizeof(void*)*1, v_tid_2914_);
v___x_2930_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2932_; 
if (v_isShared_2913_ == 0)
{
lean_ctor_set(v___x_2912_, 4, v___x_2930_);
v___x_2932_ = v___x_2912_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_env_2902_);
lean_ctor_set(v_reuseFailAlloc_2937_, 1, v_nextMacroScope_2903_);
lean_ctor_set(v_reuseFailAlloc_2937_, 2, v_ngen_2904_);
lean_ctor_set(v_reuseFailAlloc_2937_, 3, v_auxDeclNGen_2905_);
lean_ctor_set(v_reuseFailAlloc_2937_, 4, v___x_2930_);
lean_ctor_set(v_reuseFailAlloc_2937_, 5, v_cache_2906_);
lean_ctor_set(v_reuseFailAlloc_2937_, 6, v_recordedDeps_2907_);
lean_ctor_set(v_reuseFailAlloc_2937_, 7, v_messages_2908_);
lean_ctor_set(v_reuseFailAlloc_2937_, 8, v_infoState_2909_);
lean_ctor_set(v_reuseFailAlloc_2937_, 9, v_snapshotTasks_2910_);
v___x_2932_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
lean_object* v___x_2933_; lean_object* v___x_2935_; 
v___x_2933_ = lean_st_ref_put(v___y_2892_, v___x_2932_);
if (v_isShared_2899_ == 0)
{
lean_ctor_set(v___x_2898_, 0, v___x_2919_);
v___x_2935_ = v___x_2898_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v___x_2919_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___boxed(lean_object* v_cls_2942_, lean_object* v_msg_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_2942_, v_msg_2943_, v___y_2944_, v___y_2945_);
lean_dec(v___y_2945_);
lean_dec_ref(v___y_2944_);
return v_res_2947_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1(void){
_start:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2949_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0));
v___x_2950_ = l_Lean_stringToMessageData(v___x_2949_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(lean_object* v_decl_2951_, lean_object* v_cls_2952_, lean_object* v_x_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_){
_start:
{
lean_object* v_toCold_2957_; lean_object* v_options_2958_; uint8_t v_hasTrace_2959_; 
v_toCold_2957_ = lean_ctor_get(v___y_2954_, 0);
v_options_2958_ = lean_ctor_get(v_toCold_2957_, 2);
v_hasTrace_2959_ = lean_ctor_get_uint8(v_options_2958_, sizeof(void*)*1);
if (v_hasTrace_2959_ == 0)
{
lean_object* v___x_2960_; 
lean_dec(v_cls_2952_);
v___x_2960_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2951_, v___y_2954_, v___y_2955_);
return v___x_2960_;
}
else
{
lean_object* v_inheritedTraceOptions_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v_inheritedTraceOptions_2961_ = lean_ctor_get(v_toCold_2957_, 11);
v___x_2962_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_2952_);
v___x_2963_ = l_Lean_Name_append(v___x_2962_, v_cls_2952_);
v___x_2964_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2961_, v_options_2958_, v___x_2963_);
lean_dec(v___x_2963_);
if (v___x_2964_ == 0)
{
lean_object* v___x_2965_; 
lean_dec(v_cls_2952_);
v___x_2965_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2951_, v___y_2954_, v___y_2955_);
return v___x_2965_;
}
else
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1);
v___x_2967_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_2952_, v___x_2966_, v___y_2954_, v___y_2955_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v___x_2968_; 
lean_dec_ref_known(v___x_2967_, 1);
v___x_2968_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2951_, v___y_2954_, v___y_2955_);
return v___x_2968_;
}
else
{
lean_dec(v_decl_2951_);
return v___x_2967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___boxed(lean_object* v_decl_2969_, lean_object* v_cls_2970_, lean_object* v_x_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_2969_, v_cls_2970_, v_x_2971_, v___y_2972_, v___y_2973_);
lean_dec(v___y_2973_);
lean_dec_ref(v___y_2972_);
lean_dec(v_x_2971_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(lean_object* v_opt_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v___x_2979_; uint8_t v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2979_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2977_);
v___x_2980_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_2979_, v_opt_2976_);
lean_dec_ref(v___x_2979_);
v___x_2981_ = lean_box(v___x_2980_);
v___x_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg___boxed(lean_object* v_opt_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v_opt_2983_, v___y_2984_);
lean_dec_ref(v___y_2984_);
lean_dec_ref(v_opt_2983_);
return v_res_2986_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(lean_object* v_x_2987_){
_start:
{
if (lean_obj_tag(v_x_2987_) == 0)
{
uint8_t v___x_2988_; 
v___x_2988_ = 1;
return v___x_2988_;
}
else
{
lean_object* v_head_2989_; lean_object* v_tail_2990_; uint8_t v___x_2991_; 
v_head_2989_ = lean_ctor_get(v_x_2987_, 0);
v_tail_2990_ = lean_ctor_get(v_x_2987_, 1);
v___x_2991_ = l_Lean_isPrivateName(v_head_2989_);
if (v___x_2991_ == 0)
{
return v___x_2991_;
}
else
{
v_x_2987_ = v_tail_2990_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___boxed(lean_object* v_x_2993_){
_start:
{
uint8_t v_res_2994_; lean_object* v_r_2995_; 
v_res_2994_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v_x_2993_);
lean_dec(v_x_2993_);
v_r_2995_ = lean_box(v_res_2994_);
return v_r_2995_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3(void){
_start:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3001_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2));
v___x_3002_ = l_Lean_stringToMessageData(v___x_3001_);
return v___x_3002_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5(void){
_start:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3004_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4));
v___x_3005_ = l_Lean_stringToMessageData(v___x_3004_);
return v___x_3005_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7(void){
_start:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; 
v___x_3007_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6));
v___x_3008_ = l_Lean_stringToMessageData(v___x_3007_);
return v___x_3008_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(lean_object* v_decl_3009_, uint8_t v_hasTrace_3010_, uint8_t v___x_3011_, lean_object* v_cls_3012_, uint8_t v___x_3013_, lean_object* v___x_3014_, lean_object* v___x_3015_, lean_object* v_____x_3016_, lean_object* v_exportedInfo_x3f_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_){
_start:
{
lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v_a_3024_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v_snd_3116_; lean_object* v_fst_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3249_; 
v_snd_3116_ = lean_ctor_get(v_____x_3016_, 1);
v_fst_3117_ = lean_ctor_get(v_____x_3016_, 0);
v_isSharedCheck_3249_ = !lean_is_exclusive(v_____x_3016_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3119_ = v_____x_3016_;
v_isShared_3120_ = v_isSharedCheck_3249_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_snd_3116_);
lean_inc(v_fst_3117_);
lean_dec(v_____x_3016_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3249_;
goto v_resetjp_3118_;
}
v___jp_3021_:
{
lean_object* v___x_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
v___x_3025_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3023_, v___y_3022_);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3032_ == 0)
{
lean_object* v_unused_3033_; 
v_unused_3033_ = lean_ctor_get(v___x_3025_, 0);
lean_dec(v_unused_3033_);
v___x_3027_ = v___x_3025_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_dec(v___x_3025_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
lean_ctor_set_tag(v___x_3027_, 1);
lean_ctor_set(v___x_3027_, 0, v_a_3024_);
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3024_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
v___jp_3034_:
{
lean_object* v___x_3046_; 
lean_inc_ref(v___y_3043_);
v___x_3046_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_3036_, v___y_3043_, v___y_3037_, v___y_3045_);
if (lean_obj_tag(v___x_3046_) == 0)
{
lean_object* v___x_3047_; lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3102_; 
lean_dec_ref_known(v___x_3046_, 1);
lean_dec(v___y_3044_);
lean_inc_ref(v___y_3042_);
v___x_3047_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3042_, v___y_3041_);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3102_ == 0)
{
lean_object* v_unused_3103_; 
v_unused_3103_ = lean_ctor_get(v___x_3047_, 0);
lean_dec(v_unused_3103_);
v___x_3049_ = v___x_3047_;
v_isShared_3050_ = v_isSharedCheck_3102_;
goto v_resetjp_3048_;
}
else
{
lean_dec(v___x_3047_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3102_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; uint8_t v___x_3053_; 
v___x_3051_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3035_);
v___x_3052_ = l_Lean_Elab_async;
v___x_3053_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_3051_, v___x_3052_);
lean_dec_ref(v___x_3051_);
if (v___x_3053_ == 0)
{
lean_object* v___x_3054_; lean_object* v_r_3055_; 
lean_del_object(v___x_3049_);
lean_dec_ref(v___y_3039_);
lean_dec_ref(v___y_3038_);
v___x_3054_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3043_, v___y_3041_);
lean_dec_ref(v___x_3054_);
v_r_3055_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3009_, v___y_3035_, v___y_3041_);
if (lean_obj_tag(v_r_3055_) == 0)
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3074_; 
v_a_3056_ = lean_ctor_get(v_r_3055_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v_r_3055_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3058_ = v_r_3055_;
v_isShared_3059_ = v_isSharedCheck_3074_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v_r_3055_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3074_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
lean_inc(v_a_3056_);
if (v_isShared_3059_ == 0)
{
lean_ctor_set_tag(v___x_3058_, 1);
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
lean_object* v___x_3062_; 
v___x_3062_ = lean_apply_2(v___y_3040_, v___x_3061_, lean_box(0));
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v___x_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3070_; 
lean_dec_ref_known(v___x_3062_, 1);
v___x_3063_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3042_, v___y_3041_);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3063_);
if (v_isSharedCheck_3070_ == 0)
{
lean_object* v_unused_3071_; 
v_unused_3071_ = lean_ctor_get(v___x_3063_, 0);
lean_dec(v_unused_3071_);
v___x_3065_ = v___x_3063_;
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
else
{
lean_dec(v___x_3063_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
if (v_isShared_3066_ == 0)
{
lean_ctor_set(v___x_3065_, 0, v_a_3056_);
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_a_3056_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
else
{
lean_object* v_a_3072_; 
lean_dec(v_a_3056_);
v_a_3072_ = lean_ctor_get(v___x_3062_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3062_, 1);
v___y_3022_ = v___y_3041_;
v___y_3023_ = v___y_3042_;
v_a_3024_ = v_a_3072_;
goto v___jp_3021_;
}
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v_a_3075_ = lean_ctor_get(v_r_3055_, 0);
lean_inc(v_a_3075_);
lean_dec_ref_known(v_r_3055_, 1);
v___x_3076_ = lean_box(0);
v___x_3077_ = lean_apply_2(v___y_3040_, v___x_3076_, lean_box(0));
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_dec_ref_known(v___x_3077_, 1);
v___y_3022_ = v___y_3041_;
v___y_3023_ = v___y_3042_;
v_a_3024_ = v_a_3075_;
goto v___jp_3021_;
}
else
{
lean_object* v_a_3078_; 
lean_dec(v_a_3075_);
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
lean_inc(v_a_3078_);
lean_dec_ref_known(v___x_3077_, 1);
v___y_3022_ = v___y_3041_;
v___y_3023_ = v___y_3042_;
v_a_3024_ = v_a_3078_;
goto v___jp_3021_;
}
}
}
else
{
lean_object* v___x_3079_; lean_object* v___x_3081_; 
lean_dec_ref(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec_ref(v___y_3040_);
lean_dec(v_decl_3009_);
v___x_3079_ = l_IO_CancelToken_new();
if (v_isShared_3050_ == 0)
{
lean_ctor_set_tag(v___x_3049_, 1);
lean_ctor_set(v___x_3049_, 0, v___x_3079_);
v___x_3081_ = v___x_3049_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v___x_3079_);
v___x_3081_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3082_ = lean_unsigned_to_nat(0u);
v___x_3083_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1));
v___x_3084_ = l_Lean_Name_toString(v___x_3083_, v_hasTrace_3010_);
lean_inc_ref(v___x_3081_);
v___x_3085_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_3038_, v___x_3081_, v___x_3084_, v___y_3035_, v___y_3041_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; lean_object* v_checked_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_a_3086_);
lean_dec_ref_known(v___x_3085_, 1);
v_checked_3087_ = lean_ctor_get(v___y_3039_, 2);
lean_inc_ref(v_checked_3087_);
lean_dec_ref(v___y_3039_);
v___x_3088_ = lean_io_map_task(v_a_3086_, v_checked_3087_, v___x_3082_, v___x_3011_);
v___x_3089_ = lean_box(0);
v___x_3090_ = lean_box(2);
v___x_3091_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
lean_ctor_set(v___x_3091_, 2, v___x_3081_);
lean_ctor_set(v___x_3091_, 3, v___x_3088_);
v___x_3092_ = l_Lean_Core_logSnapshotTask___redArg(v___x_3091_, v___y_3041_);
return v___x_3092_;
}
else
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
lean_dec_ref(v___x_3081_);
lean_dec_ref(v___y_3039_);
v_a_3093_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v___x_3085_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_3085_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3115_; 
lean_dec_ref(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec_ref(v___y_3040_);
lean_dec_ref(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec(v_decl_3009_);
v_a_3104_ = lean_ctor_get(v___x_3046_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3046_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3106_ = v___x_3046_;
v_isShared_3107_ = v_isSharedCheck_3115_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_3046_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3115_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3113_; 
v___x_3108_ = lean_io_error_to_string(v_a_3104_);
v___x_3109_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
v___x_3110_ = l_Lean_MessageData_ofFormat(v___x_3109_);
v___x_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___y_3044_);
lean_ctor_set(v___x_3111_, 1, v___x_3110_);
if (v_isShared_3107_ == 0)
{
lean_ctor_set(v___x_3106_, 0, v___x_3111_);
v___x_3113_ = v___x_3106_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v___x_3111_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
v_resetjp_3118_:
{
lean_object* v_fst_3121_; lean_object* v_snd_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3248_; 
v_fst_3121_ = lean_ctor_get(v_snd_3116_, 0);
v_snd_3122_ = lean_ctor_get(v_snd_3116_, 1);
v_isSharedCheck_3248_ = !lean_is_exclusive(v_snd_3116_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_3124_ = v_snd_3116_;
v_isShared_3125_ = v_isSharedCheck_3248_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_snd_3122_);
lean_inc(v_fst_3121_);
lean_dec(v_snd_3116_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3248_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v_exportedInfo_x3f_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3176_; lean_object* v___y_3177_; lean_object* v___x_3238_; lean_object* v_env_3239_; uint8_t v___x_3240_; 
v___x_3238_ = lean_st_ref_get(v___y_3019_);
v_env_3239_ = lean_ctor_get(v___x_3238_, 0);
lean_inc_ref(v_env_3239_);
lean_dec(v___x_3238_);
v___x_3240_ = l_Lean_Environment_containsOnBranch(v_env_3239_, v_fst_3117_);
lean_dec_ref(v_env_3239_);
if (v___x_3240_ == 0)
{
lean_del_object(v___x_3119_);
v___y_3176_ = v___y_3018_;
v___y_3177_ = v___y_3019_;
goto v___jp_3175_;
}
else
{
lean_object* v___x_3241_; lean_object* v_env_3242_; lean_object* v___x_3243_; lean_object* v___x_3245_; 
lean_del_object(v___x_3124_);
lean_dec(v_snd_3122_);
lean_dec(v_fst_3121_);
lean_dec(v_exportedInfo_x3f_3017_);
lean_dec(v___x_3015_);
lean_dec_ref(v___x_3014_);
lean_dec(v_cls_3012_);
lean_dec(v_decl_3009_);
v___x_3241_ = lean_st_ref_get(v___y_3019_);
v_env_3242_ = lean_ctor_get(v___x_3241_, 0);
lean_inc_ref(v_env_3242_);
lean_dec(v___x_3241_);
v___x_3243_ = lean_elab_environment_to_kernel_env(v_env_3242_);
if (v_isShared_3120_ == 0)
{
lean_ctor_set_tag(v___x_3119_, 1);
lean_ctor_set(v___x_3119_, 1, v_fst_3117_);
lean_ctor_set(v___x_3119_, 0, v___x_3243_);
v___x_3245_ = v___x_3119_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v___x_3243_);
lean_ctor_set(v_reuseFailAlloc_3247_, 1, v_fst_3117_);
v___x_3245_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
lean_object* v___x_3246_; 
v___x_3246_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_3245_, v___y_3018_, v___y_3019_);
return v___x_3246_;
}
}
v___jp_3126_:
{
lean_object* v_ref_3132_; uint8_t v___x_3133_; lean_object* v___x_3134_; 
v_ref_3132_ = lean_ctor_get(v___y_3129_, 2);
v___x_3133_ = lean_unbox(v_snd_3122_);
lean_dec(v_snd_3122_);
lean_inc_ref(v___y_3130_);
v___x_3134_ = l_Lean_Environment_addConstAsync(v___y_3130_, v_fst_3117_, v___x_3133_, v___y_3131_, v___x_3011_, v_hasTrace_3010_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v_mainEnv_3136_; lean_object* v_asyncEnv_3137_; lean_object* v___f_3138_; lean_object* v___f_3139_; lean_object* v___x_3140_; 
lean_del_object(v___x_3124_);
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc_n(v_a_3135_, 3);
lean_dec_ref_known(v___x_3134_, 1);
v_mainEnv_3136_ = lean_ctor_get(v_a_3135_, 0);
lean_inc_ref(v_mainEnv_3136_);
v_asyncEnv_3137_ = lean_ctor_get(v_a_3135_, 1);
lean_inc_ref_n(v_asyncEnv_3137_, 2);
lean_inc(v_ref_3132_);
lean_inc(v___y_3128_);
v___f_3138_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3138_, 0, v___y_3128_);
lean_closure_set(v___f_3138_, 1, v_a_3135_);
lean_closure_set(v___f_3138_, 2, v_ref_3132_);
lean_inc(v_decl_3009_);
v___f_3139_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 7, 3);
lean_closure_set(v___f_3139_, 0, v_a_3135_);
lean_closure_set(v___f_3139_, 1, v_asyncEnv_3137_);
lean_closure_set(v___f_3139_, 2, v_decl_3009_);
v___x_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3140_, 0, v_fst_3121_);
if (lean_obj_tag(v___y_3127_) == 0)
{
lean_inc(v_ref_3132_);
lean_inc_ref(v___x_3140_);
v___y_3035_ = v___y_3129_;
v___y_3036_ = v_a_3135_;
v___y_3037_ = v___x_3140_;
v___y_3038_ = v___f_3139_;
v___y_3039_ = v___y_3130_;
v___y_3040_ = v___f_3138_;
v___y_3041_ = v___y_3128_;
v___y_3042_ = v_mainEnv_3136_;
v___y_3043_ = v_asyncEnv_3137_;
v___y_3044_ = v_ref_3132_;
v___y_3045_ = v___x_3140_;
goto v___jp_3034_;
}
else
{
lean_inc(v_ref_3132_);
v___y_3035_ = v___y_3129_;
v___y_3036_ = v_a_3135_;
v___y_3037_ = v___x_3140_;
v___y_3038_ = v___f_3139_;
v___y_3039_ = v___y_3130_;
v___y_3040_ = v___f_3138_;
v___y_3041_ = v___y_3128_;
v___y_3042_ = v_mainEnv_3136_;
v___y_3043_ = v_asyncEnv_3137_;
v___y_3044_ = v_ref_3132_;
v___y_3045_ = v___y_3127_;
goto v___jp_3034_;
}
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3154_; 
lean_dec_ref(v___y_3130_);
lean_dec(v___y_3127_);
lean_dec(v_fst_3121_);
lean_dec(v_decl_3009_);
v_a_3141_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3143_ = v___x_3134_;
v_isShared_3144_ = v_isSharedCheck_3154_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3134_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3154_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3149_; 
v___x_3145_ = lean_io_error_to_string(v_a_3141_);
v___x_3146_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
v___x_3147_ = l_Lean_MessageData_ofFormat(v___x_3146_);
lean_inc(v_ref_3132_);
if (v_isShared_3125_ == 0)
{
lean_ctor_set(v___x_3124_, 1, v___x_3147_);
lean_ctor_set(v___x_3124_, 0, v_ref_3132_);
v___x_3149_ = v___x_3124_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_ref_3132_);
lean_ctor_set(v_reuseFailAlloc_3153_, 1, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
lean_object* v___x_3151_; 
if (v_isShared_3144_ == 0)
{
lean_ctor_set(v___x_3143_, 0, v___x_3149_);
v___x_3151_ = v___x_3143_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v___x_3149_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
}
v___jp_3155_:
{
lean_object* v___x_3159_; 
v___x_3159_ = lean_st_ref_get(v___y_3158_);
if (lean_obj_tag(v_exportedInfo_x3f_3156_) == 0)
{
lean_object* v_env_3160_; lean_object* v___x_3161_; 
v_env_3160_ = lean_ctor_get(v___x_3159_, 0);
lean_inc_ref(v_env_3160_);
lean_dec(v___x_3159_);
v___x_3161_ = lean_box(0);
v___y_3127_ = v_exportedInfo_x3f_3156_;
v___y_3128_ = v___y_3158_;
v___y_3129_ = v___y_3157_;
v___y_3130_ = v_env_3160_;
v___y_3131_ = v___x_3161_;
goto v___jp_3126_;
}
else
{
lean_object* v_env_3162_; lean_object* v_val_3163_; uint8_t v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
v_env_3162_ = lean_ctor_get(v___x_3159_, 0);
lean_inc_ref(v_env_3162_);
lean_dec(v___x_3159_);
v_val_3163_ = lean_ctor_get(v_exportedInfo_x3f_3156_, 0);
v___x_3164_ = l_Lean_ConstantKind_ofConstantInfo(v_val_3163_);
v___x_3165_ = lean_box(v___x_3164_);
v___x_3166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3165_);
v___y_3127_ = v_exportedInfo_x3f_3156_;
v___y_3128_ = v___y_3158_;
v___y_3129_ = v___y_3157_;
v___y_3130_ = v_env_3162_;
v___y_3131_ = v___x_3166_;
goto v___jp_3126_;
}
}
v___jp_3167_:
{
lean_object* v___x_3170_; 
lean_inc(v_fst_3121_);
v___x_3170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3170_, 0, v_fst_3121_);
v_exportedInfo_x3f_3156_ = v___x_3170_;
v___y_3157_ = v___y_3168_;
v___y_3158_ = v___y_3169_;
goto v___jp_3155_;
}
v___jp_3171_:
{
lean_object* v___x_3174_; 
lean_inc(v_fst_3121_);
v___x_3174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3174_, 0, v_fst_3121_);
v_exportedInfo_x3f_3156_ = v___x_3174_;
v___y_3157_ = v___y_3172_;
v___y_3158_ = v___y_3173_;
goto v___jp_3155_;
}
v___jp_3175_:
{
lean_object* v___x_3178_; uint8_t v___x_3179_; 
lean_inc(v_decl_3009_);
v___x_3178_ = l_Lean_Declaration_getTopLevelNames(v_decl_3009_);
v___x_3179_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v___x_3178_);
lean_dec(v___x_3178_);
if (v___x_3179_ == 0)
{
lean_dec(v___x_3015_);
if (lean_obj_tag(v_exportedInfo_x3f_3017_) == 0)
{
lean_object* v_toCold_3180_; lean_object* v_options_3181_; uint8_t v_hasTrace_3182_; 
lean_dec_ref(v___x_3014_);
v_toCold_3180_ = lean_ctor_get(v___y_3176_, 0);
v_options_3181_ = lean_ctor_get(v_toCold_3180_, 2);
v_hasTrace_3182_ = lean_ctor_get_uint8(v_options_3181_, sizeof(void*)*1);
if (v_hasTrace_3182_ == 0)
{
lean_dec(v_cls_3012_);
v___y_3168_ = v___y_3176_;
v___y_3169_ = v___y_3177_;
goto v___jp_3167_;
}
else
{
lean_object* v_inheritedTraceOptions_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; uint8_t v___x_3186_; 
v_inheritedTraceOptions_3183_ = lean_ctor_get(v_toCold_3180_, 11);
v___x_3184_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3012_);
v___x_3185_ = l_Lean_Name_append(v___x_3184_, v_cls_3012_);
v___x_3186_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3183_, v_options_3181_, v___x_3185_);
lean_dec(v___x_3185_);
if (v___x_3186_ == 0)
{
lean_dec(v_cls_3012_);
v___y_3168_ = v___y_3176_;
v___y_3169_ = v___y_3177_;
goto v___jp_3167_;
}
else
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
v___x_3187_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_3188_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3012_, v___x_3187_, v___y_3176_, v___y_3177_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_dec_ref_known(v___x_3188_, 1);
v___y_3168_ = v___y_3176_;
v___y_3169_ = v___y_3177_;
goto v___jp_3167_;
}
else
{
lean_del_object(v___x_3124_);
lean_dec(v_snd_3122_);
lean_dec(v_fst_3121_);
lean_dec(v_fst_3117_);
lean_dec(v_decl_3009_);
return v___x_3188_;
}
}
}
}
else
{
lean_object* v___x_3189_; lean_object* v_env_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; uint8_t v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
lean_dec(v_cls_3012_);
v___x_3189_ = lean_st_ref_get(v___y_3177_);
v_env_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc_ref(v_env_3190_);
lean_dec(v___x_3189_);
v___x_3191_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_3192_ = lean_box(1);
v___x_3193_ = 0;
v___x_3194_ = lean_box(v___x_3013_);
lean_inc(v_fst_3117_);
v___x_3195_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_3194_, v___x_3191_, v_env_3190_, v_fst_3117_, v___x_3192_, v___x_3193_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v___x_3196_; lean_object* v_env_3197_; lean_object* v_nextMacroScope_3198_; lean_object* v_ngen_3199_; lean_object* v_auxDeclNGen_3200_; lean_object* v_traceState_3201_; lean_object* v_recordedDeps_3202_; lean_object* v_messages_3203_; lean_object* v_infoState_3204_; lean_object* v_snapshotTasks_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3214_; 
v___x_3196_ = lean_st_ref_take(v___y_3177_);
v_env_3197_ = lean_ctor_get(v___x_3196_, 0);
v_nextMacroScope_3198_ = lean_ctor_get(v___x_3196_, 1);
v_ngen_3199_ = lean_ctor_get(v___x_3196_, 2);
v_auxDeclNGen_3200_ = lean_ctor_get(v___x_3196_, 3);
v_traceState_3201_ = lean_ctor_get(v___x_3196_, 4);
v_recordedDeps_3202_ = lean_ctor_get(v___x_3196_, 6);
v_messages_3203_ = lean_ctor_get(v___x_3196_, 7);
v_infoState_3204_ = lean_ctor_get(v___x_3196_, 8);
v_snapshotTasks_3205_ = lean_ctor_get(v___x_3196_, 9);
v_isSharedCheck_3214_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3214_ == 0)
{
lean_object* v_unused_3215_; 
v_unused_3215_ = lean_ctor_get(v___x_3196_, 5);
lean_dec(v_unused_3215_);
v___x_3207_ = v___x_3196_;
v_isShared_3208_ = v_isSharedCheck_3214_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_snapshotTasks_3205_);
lean_inc(v_infoState_3204_);
lean_inc(v_messages_3203_);
lean_inc(v_recordedDeps_3202_);
lean_inc(v_traceState_3201_);
lean_inc(v_auxDeclNGen_3200_);
lean_inc(v_ngen_3199_);
lean_inc(v_nextMacroScope_3198_);
lean_inc(v_env_3197_);
lean_dec(v___x_3196_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3214_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
lean_object* v___x_3209_; lean_object* v___x_3211_; 
lean_inc(v_snd_3122_);
lean_inc(v_fst_3117_);
v___x_3209_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3191_, v_env_3197_, v_fst_3117_, v_snd_3122_, v___x_3179_);
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 5, v___x_3014_);
lean_ctor_set(v___x_3207_, 0, v___x_3209_);
v___x_3211_ = v___x_3207_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v___x_3209_);
lean_ctor_set(v_reuseFailAlloc_3213_, 1, v_nextMacroScope_3198_);
lean_ctor_set(v_reuseFailAlloc_3213_, 2, v_ngen_3199_);
lean_ctor_set(v_reuseFailAlloc_3213_, 3, v_auxDeclNGen_3200_);
lean_ctor_set(v_reuseFailAlloc_3213_, 4, v_traceState_3201_);
lean_ctor_set(v_reuseFailAlloc_3213_, 5, v___x_3014_);
lean_ctor_set(v_reuseFailAlloc_3213_, 6, v_recordedDeps_3202_);
lean_ctor_set(v_reuseFailAlloc_3213_, 7, v_messages_3203_);
lean_ctor_set(v_reuseFailAlloc_3213_, 8, v_infoState_3204_);
lean_ctor_set(v_reuseFailAlloc_3213_, 9, v_snapshotTasks_3205_);
v___x_3211_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
lean_object* v___x_3212_; 
v___x_3212_ = lean_st_ref_put(v___y_3177_, v___x_3211_);
v_exportedInfo_x3f_3156_ = v_exportedInfo_x3f_3017_;
v___y_3157_ = v___y_3176_;
v___y_3158_ = v___y_3177_;
goto v___jp_3155_;
}
}
}
else
{
lean_dec_ref_known(v___x_3195_, 1);
lean_dec_ref(v___x_3014_);
v_exportedInfo_x3f_3156_ = v_exportedInfo_x3f_3017_;
v___y_3157_ = v___y_3176_;
v___y_3158_ = v___y_3177_;
goto v___jp_3155_;
}
}
}
else
{
lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v_a_3218_; uint8_t v___x_3219_; 
lean_dec(v_exportedInfo_x3f_3017_);
lean_dec_ref(v___x_3014_);
v___x_3216_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_3217_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v___x_3216_, v___y_3176_);
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref(v___x_3217_);
v___x_3219_ = lean_unbox(v_a_3218_);
lean_dec(v_a_3218_);
if (v___x_3219_ == 0)
{
lean_object* v_toCold_3220_; lean_object* v_options_3221_; uint8_t v_hasTrace_3222_; 
v_toCold_3220_ = lean_ctor_get(v___y_3176_, 0);
v_options_3221_ = lean_ctor_get(v_toCold_3220_, 2);
v_hasTrace_3222_ = lean_ctor_get_uint8(v_options_3221_, sizeof(void*)*1);
if (v_hasTrace_3222_ == 0)
{
lean_dec(v_cls_3012_);
v_exportedInfo_x3f_3156_ = v___x_3015_;
v___y_3157_ = v___y_3176_;
v___y_3158_ = v___y_3177_;
goto v___jp_3155_;
}
else
{
lean_object* v_inheritedTraceOptions_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; uint8_t v___x_3226_; 
v_inheritedTraceOptions_3223_ = lean_ctor_get(v_toCold_3220_, 11);
v___x_3224_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3012_);
v___x_3225_ = l_Lean_Name_append(v___x_3224_, v_cls_3012_);
v___x_3226_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3223_, v_options_3221_, v___x_3225_);
lean_dec(v___x_3225_);
if (v___x_3226_ == 0)
{
lean_dec(v_cls_3012_);
v_exportedInfo_x3f_3156_ = v___x_3015_;
v___y_3157_ = v___y_3176_;
v___y_3158_ = v___y_3177_;
goto v___jp_3155_;
}
else
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3227_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_3228_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3012_, v___x_3227_, v___y_3176_, v___y_3177_);
if (lean_obj_tag(v___x_3228_) == 0)
{
lean_dec_ref_known(v___x_3228_, 1);
v_exportedInfo_x3f_3156_ = v___x_3015_;
v___y_3157_ = v___y_3176_;
v___y_3158_ = v___y_3177_;
goto v___jp_3155_;
}
else
{
lean_del_object(v___x_3124_);
lean_dec(v_snd_3122_);
lean_dec(v_fst_3121_);
lean_dec(v_fst_3117_);
lean_dec(v___x_3015_);
lean_dec(v_decl_3009_);
return v___x_3228_;
}
}
}
}
else
{
lean_object* v_toCold_3229_; lean_object* v_options_3230_; uint8_t v_hasTrace_3231_; 
lean_dec(v___x_3015_);
v_toCold_3229_ = lean_ctor_get(v___y_3176_, 0);
v_options_3230_ = lean_ctor_get(v_toCold_3229_, 2);
v_hasTrace_3231_ = lean_ctor_get_uint8(v_options_3230_, sizeof(void*)*1);
if (v_hasTrace_3231_ == 0)
{
lean_dec(v_cls_3012_);
v___y_3172_ = v___y_3176_;
v___y_3173_ = v___y_3177_;
goto v___jp_3171_;
}
else
{
lean_object* v_inheritedTraceOptions_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; uint8_t v___x_3235_; 
v_inheritedTraceOptions_3232_ = lean_ctor_get(v_toCold_3229_, 11);
v___x_3233_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3012_);
v___x_3234_ = l_Lean_Name_append(v___x_3233_, v_cls_3012_);
v___x_3235_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3232_, v_options_3230_, v___x_3234_);
lean_dec(v___x_3234_);
if (v___x_3235_ == 0)
{
lean_dec(v_cls_3012_);
v___y_3172_ = v___y_3176_;
v___y_3173_ = v___y_3177_;
goto v___jp_3171_;
}
else
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3236_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_3237_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3012_, v___x_3236_, v___y_3176_, v___y_3177_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_dec_ref_known(v___x_3237_, 1);
v___y_3172_ = v___y_3176_;
v___y_3173_ = v___y_3177_;
goto v___jp_3171_;
}
else
{
lean_del_object(v___x_3124_);
lean_dec(v_snd_3122_);
lean_dec(v_fst_3121_);
lean_dec(v_fst_3117_);
lean_dec(v_decl_3009_);
return v___x_3237_;
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
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed(lean_object* v_decl_3250_, lean_object* v_hasTrace_3251_, lean_object* v___x_3252_, lean_object* v_cls_3253_, lean_object* v___x_3254_, lean_object* v___x_3255_, lean_object* v___x_3256_, lean_object* v_____x_3257_, lean_object* v_exportedInfo_x3f_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
uint8_t v_hasTrace_boxed_3262_; uint8_t v___x_58808__boxed_3263_; uint8_t v___x_58810__boxed_3264_; lean_object* v_res_3265_; 
v_hasTrace_boxed_3262_ = lean_unbox(v_hasTrace_3251_);
v___x_58808__boxed_3263_ = lean_unbox(v___x_3252_);
v___x_58810__boxed_3264_ = lean_unbox(v___x_3254_);
v_res_3265_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(v_decl_3250_, v_hasTrace_boxed_3262_, v___x_58808__boxed_3263_, v_cls_3253_, v___x_58810__boxed_3264_, v___x_3255_, v___x_3256_, v_____x_3257_, v_exportedInfo_x3f_3258_, v___y_3259_, v___y_3260_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
return v_res_3265_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1(void){
_start:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3267_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0));
v___x_3268_ = l_Lean_stringToMessageData(v___x_3267_);
return v___x_3268_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3(void){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3270_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2));
v___x_3271_ = l_Lean_stringToMessageData(v___x_3270_);
return v___x_3271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(lean_object* v___f_3272_, uint8_t v___x_3273_, uint8_t v_forceExpose_3274_, lean_object* v___x_3275_, lean_object* v_cls_3276_, lean_object* v_defn_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_){
_start:
{
lean_object* v_exportedInfo_x3f_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; uint8_t v___y_3297_; uint8_t v___y_3302_; lean_object* v___x_3307_; lean_object* v_env_3308_; lean_object* v___x_3309_; 
v___x_3307_ = lean_st_ref_get(v___y_3279_);
v_env_3308_ = lean_ctor_get(v___x_3307_, 0);
lean_inc_ref(v_env_3308_);
lean_dec(v___x_3307_);
v___x_3309_ = lean_st_ref_get(v___y_3279_);
if (v_forceExpose_3274_ == 0)
{
lean_object* v_env_3310_; lean_object* v___x_3311_; uint8_t v_isModule_3312_; 
v_env_3310_ = lean_ctor_get(v___x_3309_, 0);
lean_inc_ref(v_env_3310_);
lean_dec(v___x_3309_);
v___x_3311_ = l_Lean_Environment_header(v_env_3308_);
lean_dec_ref(v_env_3308_);
v_isModule_3312_ = lean_ctor_get_uint8(v___x_3311_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_3311_);
if (v_isModule_3312_ == 0)
{
lean_dec_ref(v_env_3310_);
lean_dec(v_cls_3276_);
v_exportedInfo_x3f_3282_ = v___x_3275_;
v___y_3283_ = v___y_3278_;
v___y_3284_ = v___y_3279_;
goto v___jp_3281_;
}
else
{
uint8_t v_isExporting_3313_; 
v_isExporting_3313_ = lean_ctor_get_uint8(v_env_3310_, sizeof(void*)*13);
lean_dec_ref(v_env_3310_);
if (v_isExporting_3313_ == 0)
{
lean_object* v_toCold_3314_; lean_object* v_options_3315_; uint8_t v_hasTrace_3316_; 
lean_dec(v___x_3275_);
v_toCold_3314_ = lean_ctor_get(v___y_3278_, 0);
v_options_3315_ = lean_ctor_get(v_toCold_3314_, 2);
v_hasTrace_3316_ = lean_ctor_get_uint8(v_options_3315_, sizeof(void*)*1);
if (v_hasTrace_3316_ == 0)
{
lean_dec(v_cls_3276_);
v___y_3302_ = v_isModule_3312_;
goto v___jp_3301_;
}
else
{
lean_object* v_inheritedTraceOptions_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; uint8_t v___x_3320_; 
v_inheritedTraceOptions_3317_ = lean_ctor_get(v_toCold_3314_, 11);
v___x_3318_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3276_);
v___x_3319_ = l_Lean_Name_append(v___x_3318_, v_cls_3276_);
v___x_3320_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3317_, v_options_3315_, v___x_3319_);
lean_dec(v___x_3319_);
if (v___x_3320_ == 0)
{
lean_dec(v_cls_3276_);
v___y_3302_ = v_isModule_3312_;
goto v___jp_3301_;
}
else
{
lean_object* v_toConstantVal_3321_; lean_object* v_name_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v_toConstantVal_3321_ = lean_ctor_get(v_defn_3277_, 0);
v_name_3322_ = lean_ctor_get(v_toConstantVal_3321_, 0);
v___x_3323_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_3322_);
v___x_3324_ = l_Lean_MessageData_ofName(v_name_3322_);
v___x_3325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3325_, 0, v___x_3323_);
lean_ctor_set(v___x_3325_, 1, v___x_3324_);
v___x_3326_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_3327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3325_);
lean_ctor_set(v___x_3327_, 1, v___x_3326_);
v___x_3328_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3276_, v___x_3327_, v___y_3278_, v___y_3279_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_dec_ref_known(v___x_3328_, 1);
v___y_3302_ = v_isModule_3312_;
goto v___jp_3301_;
}
else
{
lean_dec_ref(v_defn_3277_);
lean_dec_ref(v___f_3272_);
return v___x_3328_;
}
}
}
}
else
{
lean_dec(v_cls_3276_);
v_exportedInfo_x3f_3282_ = v___x_3275_;
v___y_3283_ = v___y_3278_;
v___y_3284_ = v___y_3279_;
goto v___jp_3281_;
}
}
}
else
{
lean_dec(v___x_3309_);
lean_dec_ref(v_env_3308_);
lean_dec(v_cls_3276_);
v_exportedInfo_x3f_3282_ = v___x_3275_;
v___y_3283_ = v___y_3278_;
v___y_3284_ = v___y_3279_;
goto v___jp_3281_;
}
v___jp_3281_:
{
lean_object* v_toConstantVal_3285_; lean_object* v_name_3286_; lean_object* v___x_3287_; uint8_t v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v_toConstantVal_3285_ = lean_ctor_get(v_defn_3277_, 0);
v_name_3286_ = lean_ctor_get(v_toConstantVal_3285_, 0);
lean_inc(v_name_3286_);
v___x_3287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3287_, 0, v_defn_3277_);
v___x_3288_ = 0;
v___x_3289_ = lean_box(v___x_3288_);
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3287_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3291_, 0, v_name_3286_);
lean_ctor_set(v___x_3291_, 1, v___x_3290_);
lean_inc(v___y_3284_);
lean_inc_ref(v___y_3283_);
v___x_3292_ = lean_apply_5(v___f_3272_, v___x_3291_, v_exportedInfo_x3f_3282_, v___y_3283_, v___y_3284_, lean_box(0));
return v___x_3292_;
}
v___jp_3293_:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3298_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3298_, 0, v___y_3296_);
lean_ctor_set_uint8(v___x_3298_, sizeof(void*)*1, v___y_3297_);
v___x_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3298_);
v___x_3300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
v_exportedInfo_x3f_3282_ = v___x_3300_;
v___y_3283_ = v___y_3295_;
v___y_3284_ = v___y_3294_;
goto v___jp_3281_;
}
v___jp_3301_:
{
lean_object* v_toConstantVal_3303_; uint8_t v_safety_3304_; uint8_t v___x_3305_; uint8_t v___x_3306_; 
v_toConstantVal_3303_ = lean_ctor_get(v_defn_3277_, 0);
v_safety_3304_ = lean_ctor_get_uint8(v_defn_3277_, sizeof(void*)*4);
v___x_3305_ = 1;
v___x_3306_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_3304_, v___x_3305_);
if (v___x_3306_ == 0)
{
lean_inc_ref(v_toConstantVal_3303_);
v___y_3294_ = v___y_3279_;
v___y_3295_ = v___y_3278_;
v___y_3296_ = v_toConstantVal_3303_;
v___y_3297_ = v___y_3302_;
goto v___jp_3293_;
}
else
{
lean_inc_ref(v_toConstantVal_3303_);
v___y_3294_ = v___y_3279_;
v___y_3295_ = v___y_3278_;
v___y_3296_ = v_toConstantVal_3303_;
v___y_3297_ = v___x_3273_;
goto v___jp_3293_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___boxed(lean_object* v___f_3329_, lean_object* v___x_3330_, lean_object* v_forceExpose_3331_, lean_object* v___x_3332_, lean_object* v_cls_3333_, lean_object* v_defn_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_){
_start:
{
uint8_t v___x_59281__boxed_3338_; uint8_t v_forceExpose_boxed_3339_; lean_object* v_res_3340_; 
v___x_59281__boxed_3338_ = lean_unbox(v___x_3330_);
v_forceExpose_boxed_3339_ = lean_unbox(v_forceExpose_3331_);
v_res_3340_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_3329_, v___x_59281__boxed_3338_, v_forceExpose_boxed_3339_, v___x_3332_, v_cls_3333_, v_defn_3334_, v___y_3335_, v___y_3336_);
lean_dec(v___y_3336_);
lean_dec_ref(v___y_3335_);
return v_res_3340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(lean_object* v_val_3341_, lean_object* v___f_3342_, lean_object* v_____r_3343_, lean_object* v_exportedInfo_x3f_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v_toConstantVal_3348_; lean_object* v_name_3349_; lean_object* v___x_3350_; uint8_t v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v_toConstantVal_3348_ = lean_ctor_get(v_val_3341_, 0);
v_name_3349_ = lean_ctor_get(v_toConstantVal_3348_, 0);
lean_inc(v_name_3349_);
v___x_3350_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3350_, 0, v_val_3341_);
v___x_3351_ = 1;
v___x_3352_ = lean_box(v___x_3351_);
v___x_3353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3350_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
v___x_3354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3354_, 0, v_name_3349_);
lean_ctor_set(v___x_3354_, 1, v___x_3353_);
lean_inc(v___y_3346_);
lean_inc_ref(v___y_3345_);
v___x_3355_ = lean_apply_5(v___f_3342_, v___x_3354_, v_exportedInfo_x3f_3344_, v___y_3345_, v___y_3346_, lean_box(0));
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed(lean_object* v_val_3356_, lean_object* v___f_3357_, lean_object* v_____r_3358_, lean_object* v_exportedInfo_x3f_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_){
_start:
{
lean_object* v_res_3363_; 
v_res_3363_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(v_val_3356_, v___f_3357_, v_____r_3358_, v_exportedInfo_x3f_3359_, v___y_3360_, v___y_3361_);
lean_dec(v___y_3361_);
lean_dec_ref(v___y_3360_);
return v_res_3363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(lean_object* v_val_3364_, uint8_t v___x_3365_, lean_object* v___f_3366_, lean_object* v_____r_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v_toConstantVal_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v_toConstantVal_3371_ = lean_ctor_get(v_val_3364_, 0);
lean_inc_ref(v_toConstantVal_3371_);
v___x_3372_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3372_, 0, v_toConstantVal_3371_);
lean_ctor_set_uint8(v___x_3372_, sizeof(void*)*1, v___x_3365_);
v___x_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3372_);
v___x_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3373_);
v___x_3375_ = lean_box(0);
lean_inc(v___y_3369_);
lean_inc_ref(v___y_3368_);
v___x_3376_ = lean_apply_5(v___f_3366_, v___x_3375_, v___x_3374_, v___y_3368_, v___y_3369_, lean_box(0));
return v___x_3376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7___boxed(lean_object* v_val_3377_, lean_object* v___x_3378_, lean_object* v___f_3379_, lean_object* v_____r_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
uint8_t v___x_59406__boxed_3384_; lean_object* v_res_3385_; 
v___x_59406__boxed_3384_ = lean_unbox(v___x_3378_);
v_res_3385_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(v_val_3377_, v___x_59406__boxed_3384_, v___f_3379_, v_____r_3380_, v___y_3381_, v___y_3382_);
lean_dec(v___y_3382_);
lean_dec_ref(v___y_3381_);
lean_dec_ref(v_val_3377_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(lean_object* v_val_3386_, lean_object* v___f_3387_, lean_object* v_____r_3388_, lean_object* v_exportedInfo_x3f_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_){
_start:
{
lean_object* v_toConstantVal_3393_; lean_object* v_name_3394_; lean_object* v___x_3395_; uint8_t v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v_toConstantVal_3393_ = lean_ctor_get(v_val_3386_, 0);
v_name_3394_ = lean_ctor_get(v_toConstantVal_3393_, 0);
lean_inc(v_name_3394_);
v___x_3395_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3395_, 0, v_val_3386_);
v___x_3396_ = 3;
v___x_3397_ = lean_box(v___x_3396_);
v___x_3398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3395_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
v___x_3399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3399_, 0, v_name_3394_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
lean_inc(v___y_3391_);
lean_inc_ref(v___y_3390_);
v___x_3400_ = lean_apply_5(v___f_3387_, v___x_3399_, v_exportedInfo_x3f_3389_, v___y_3390_, v___y_3391_, lean_box(0));
return v___x_3400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed(lean_object* v_val_3401_, lean_object* v___f_3402_, lean_object* v_____r_3403_, lean_object* v_exportedInfo_x3f_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_){
_start:
{
lean_object* v_res_3408_; 
v_res_3408_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(v_val_3401_, v___f_3402_, v_____r_3403_, v_exportedInfo_x3f_3404_, v___y_3405_, v___y_3406_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
return v_res_3408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(lean_object* v_val_3409_, lean_object* v___f_3410_, lean_object* v_____r_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v_toConstantVal_3415_; uint8_t v_isUnsafe_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; 
v_toConstantVal_3415_ = lean_ctor_get(v_val_3409_, 0);
v_isUnsafe_3416_ = lean_ctor_get_uint8(v_val_3409_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_3415_);
v___x_3417_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3417_, 0, v_toConstantVal_3415_);
lean_ctor_set_uint8(v___x_3417_, sizeof(void*)*1, v_isUnsafe_3416_);
v___x_3418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
v___x_3419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3418_);
v___x_3420_ = lean_box(0);
lean_inc(v___y_3413_);
lean_inc_ref(v___y_3412_);
v___x_3421_ = lean_apply_5(v___f_3410_, v___x_3420_, v___x_3419_, v___y_3412_, v___y_3413_, lean_box(0));
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10___boxed(lean_object* v_val_3422_, lean_object* v___f_3423_, lean_object* v_____r_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_){
_start:
{
lean_object* v_res_3428_; 
v_res_3428_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_3422_, v___f_3423_, v_____r_3424_, v___y_3425_, v___y_3426_);
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3425_);
lean_dec_ref(v_val_3422_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(lean_object* v_decl_3429_, uint8_t v___x_3430_, lean_object* v_cls_3431_, uint8_t v___x_3432_, lean_object* v___x_3433_, lean_object* v___x_3434_, lean_object* v_____x_3435_, lean_object* v_exportedInfo_x3f_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_){
_start:
{
lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v_a_3443_; lean_object* v___y_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; lean_object* v___y_3459_; lean_object* v___y_3460_; lean_object* v___y_3461_; lean_object* v___y_3462_; lean_object* v___y_3463_; uint8_t v___y_3464_; lean_object* v___y_3465_; lean_object* v_snd_3536_; lean_object* v_fst_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3670_; 
v_snd_3536_ = lean_ctor_get(v_____x_3435_, 1);
v_fst_3537_ = lean_ctor_get(v_____x_3435_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v_____x_3435_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3539_ = v_____x_3435_;
v_isShared_3540_ = v_isSharedCheck_3670_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_snd_3536_);
lean_inc(v_fst_3537_);
lean_dec(v_____x_3435_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3670_;
goto v_resetjp_3538_;
}
v___jp_3440_:
{
lean_object* v___x_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3451_; 
v___x_3444_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3442_, v___y_3441_);
v_isSharedCheck_3451_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3451_ == 0)
{
lean_object* v_unused_3452_; 
v_unused_3452_ = lean_ctor_get(v___x_3444_, 0);
lean_dec(v_unused_3452_);
v___x_3446_ = v___x_3444_;
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
else
{
lean_dec(v___x_3444_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3449_; 
if (v_isShared_3447_ == 0)
{
lean_ctor_set_tag(v___x_3446_, 1);
lean_ctor_set(v___x_3446_, 0, v_a_3443_);
v___x_3449_ = v___x_3446_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_a_3443_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
v___jp_3453_:
{
lean_object* v___x_3466_; 
lean_inc_ref(v___y_3460_);
v___x_3466_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_3457_, v___y_3460_, v___y_3463_, v___y_3465_);
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v___x_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3522_; 
lean_dec_ref_known(v___x_3466_, 1);
lean_dec(v___y_3458_);
lean_inc_ref(v___y_3462_);
v___x_3467_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3462_, v___y_3455_);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3467_);
if (v_isSharedCheck_3522_ == 0)
{
lean_object* v_unused_3523_; 
v_unused_3523_ = lean_ctor_get(v___x_3467_, 0);
lean_dec(v_unused_3523_);
v___x_3469_ = v___x_3467_;
v_isShared_3470_ = v_isSharedCheck_3522_;
goto v_resetjp_3468_;
}
else
{
lean_dec(v___x_3467_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3522_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; uint8_t v___x_3473_; 
v___x_3471_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3459_);
v___x_3472_ = l_Lean_Elab_async;
v___x_3473_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_3471_, v___x_3472_);
lean_dec_ref(v___x_3471_);
if (v___x_3473_ == 0)
{
lean_object* v___x_3474_; lean_object* v_r_3475_; 
lean_del_object(v___x_3469_);
lean_dec_ref(v___y_3461_);
lean_dec_ref(v___y_3454_);
v___x_3474_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3460_, v___y_3455_);
lean_dec_ref(v___x_3474_);
v_r_3475_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3429_, v___y_3459_, v___y_3455_);
if (lean_obj_tag(v_r_3475_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3494_; 
v_a_3476_ = lean_ctor_get(v_r_3475_, 0);
v_isSharedCheck_3494_ = !lean_is_exclusive(v_r_3475_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3478_ = v_r_3475_;
v_isShared_3479_ = v_isSharedCheck_3494_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_a_3476_);
lean_dec(v_r_3475_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3494_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3481_; 
lean_inc(v_a_3476_);
if (v_isShared_3479_ == 0)
{
lean_ctor_set_tag(v___x_3478_, 1);
v___x_3481_ = v___x_3478_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v_a_3476_);
v___x_3481_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
lean_object* v___x_3482_; 
v___x_3482_ = lean_apply_2(v___y_3456_, v___x_3481_, lean_box(0));
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_object* v___x_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
lean_dec_ref_known(v___x_3482_, 1);
v___x_3483_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3462_, v___y_3455_);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3483_);
if (v_isSharedCheck_3490_ == 0)
{
lean_object* v_unused_3491_; 
v_unused_3491_ = lean_ctor_get(v___x_3483_, 0);
lean_dec(v_unused_3491_);
v___x_3485_ = v___x_3483_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_dec(v___x_3483_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
lean_ctor_set(v___x_3485_, 0, v_a_3476_);
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_a_3476_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
else
{
lean_object* v_a_3492_; 
lean_dec(v_a_3476_);
v_a_3492_ = lean_ctor_get(v___x_3482_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3482_, 1);
v___y_3441_ = v___y_3455_;
v___y_3442_ = v___y_3462_;
v_a_3443_ = v_a_3492_;
goto v___jp_3440_;
}
}
}
}
else
{
lean_object* v_a_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v_a_3495_ = lean_ctor_get(v_r_3475_, 0);
lean_inc(v_a_3495_);
lean_dec_ref_known(v_r_3475_, 1);
v___x_3496_ = lean_box(0);
v___x_3497_ = lean_apply_2(v___y_3456_, v___x_3496_, lean_box(0));
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_dec_ref_known(v___x_3497_, 1);
v___y_3441_ = v___y_3455_;
v___y_3442_ = v___y_3462_;
v_a_3443_ = v_a_3495_;
goto v___jp_3440_;
}
else
{
lean_object* v_a_3498_; 
lean_dec(v_a_3495_);
v_a_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___x_3497_, 1);
v___y_3441_ = v___y_3455_;
v___y_3442_ = v___y_3462_;
v_a_3443_ = v_a_3498_;
goto v___jp_3440_;
}
}
}
else
{
lean_object* v___x_3499_; lean_object* v___x_3501_; 
lean_dec_ref(v___y_3462_);
lean_dec_ref(v___y_3460_);
lean_dec_ref(v___y_3456_);
lean_dec(v_decl_3429_);
v___x_3499_ = l_IO_CancelToken_new();
if (v_isShared_3470_ == 0)
{
lean_ctor_set_tag(v___x_3469_, 1);
lean_ctor_set(v___x_3469_, 0, v___x_3499_);
v___x_3501_ = v___x_3469_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v___x_3499_);
v___x_3501_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3502_ = lean_unsigned_to_nat(0u);
v___x_3503_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1));
v___x_3504_ = l_Lean_Name_toString(v___x_3503_, v___x_3430_);
lean_inc_ref(v___x_3501_);
v___x_3505_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_3454_, v___x_3501_, v___x_3504_, v___y_3459_, v___y_3455_);
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_object* v_a_3506_; lean_object* v_checked_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3505_, 1);
v_checked_3507_ = lean_ctor_get(v___y_3461_, 2);
lean_inc_ref(v_checked_3507_);
lean_dec_ref(v___y_3461_);
v___x_3508_ = lean_io_map_task(v_a_3506_, v_checked_3507_, v___x_3502_, v___y_3464_);
v___x_3509_ = lean_box(0);
v___x_3510_ = lean_box(2);
v___x_3511_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3509_);
lean_ctor_set(v___x_3511_, 1, v___x_3510_);
lean_ctor_set(v___x_3511_, 2, v___x_3501_);
lean_ctor_set(v___x_3511_, 3, v___x_3508_);
v___x_3512_ = l_Lean_Core_logSnapshotTask___redArg(v___x_3511_, v___y_3455_);
return v___x_3512_;
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
lean_dec_ref(v___x_3501_);
lean_dec_ref(v___y_3461_);
v_a_3513_ = lean_ctor_get(v___x_3505_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3505_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3505_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3535_; 
lean_dec_ref(v___y_3462_);
lean_dec_ref(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec_ref(v___y_3456_);
lean_dec_ref(v___y_3454_);
lean_dec(v_decl_3429_);
v_a_3524_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3526_ = v___x_3466_;
v_isShared_3527_ = v_isSharedCheck_3535_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3466_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3535_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3533_; 
v___x_3528_ = lean_io_error_to_string(v_a_3524_);
v___x_3529_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3528_);
v___x_3530_ = l_Lean_MessageData_ofFormat(v___x_3529_);
v___x_3531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___y_3458_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 0, v___x_3531_);
v___x_3533_ = v___x_3526_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
v_resetjp_3538_:
{
lean_object* v_fst_3541_; lean_object* v_snd_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3669_; 
v_fst_3541_ = lean_ctor_get(v_snd_3536_, 0);
v_snd_3542_ = lean_ctor_get(v_snd_3536_, 1);
v_isSharedCheck_3669_ = !lean_is_exclusive(v_snd_3536_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3544_ = v_snd_3536_;
v_isShared_3545_ = v_isSharedCheck_3669_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_snd_3542_);
lean_inc(v_fst_3541_);
lean_dec(v_snd_3536_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3669_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___y_3547_; lean_object* v___y_3548_; lean_object* v___y_3549_; lean_object* v___y_3550_; lean_object* v___y_3551_; lean_object* v_exportedInfo_x3f_3577_; lean_object* v___y_3578_; lean_object* v___y_3579_; lean_object* v___y_3589_; lean_object* v___y_3590_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3597_; lean_object* v___y_3598_; lean_object* v___x_3659_; lean_object* v_env_3660_; uint8_t v___x_3661_; 
v___x_3659_ = lean_st_ref_get(v___y_3438_);
v_env_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc_ref(v_env_3660_);
lean_dec(v___x_3659_);
v___x_3661_ = l_Lean_Environment_containsOnBranch(v_env_3660_, v_fst_3537_);
lean_dec_ref(v_env_3660_);
if (v___x_3661_ == 0)
{
lean_del_object(v___x_3539_);
v___y_3597_ = v___y_3437_;
v___y_3598_ = v___y_3438_;
goto v___jp_3596_;
}
else
{
lean_object* v___x_3662_; lean_object* v_env_3663_; lean_object* v___x_3664_; lean_object* v___x_3666_; 
lean_del_object(v___x_3544_);
lean_dec(v_snd_3542_);
lean_dec(v_fst_3541_);
lean_dec(v_exportedInfo_x3f_3436_);
lean_dec(v___x_3434_);
lean_dec_ref(v___x_3433_);
lean_dec(v_cls_3431_);
lean_dec(v_decl_3429_);
v___x_3662_ = lean_st_ref_get(v___y_3438_);
v_env_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc_ref(v_env_3663_);
lean_dec(v___x_3662_);
v___x_3664_ = lean_elab_environment_to_kernel_env(v_env_3663_);
if (v_isShared_3540_ == 0)
{
lean_ctor_set_tag(v___x_3539_, 1);
lean_ctor_set(v___x_3539_, 1, v_fst_3537_);
lean_ctor_set(v___x_3539_, 0, v___x_3664_);
v___x_3666_ = v___x_3539_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v___x_3664_);
lean_ctor_set(v_reuseFailAlloc_3668_, 1, v_fst_3537_);
v___x_3666_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
lean_object* v___x_3667_; 
v___x_3667_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_3666_, v___y_3437_, v___y_3438_);
return v___x_3667_;
}
}
v___jp_3546_:
{
lean_object* v_ref_3552_; uint8_t v___x_3553_; uint8_t v___x_3554_; lean_object* v___x_3555_; 
v_ref_3552_ = lean_ctor_get(v___y_3549_, 2);
v___x_3553_ = 0;
v___x_3554_ = lean_unbox(v_snd_3542_);
lean_dec(v_snd_3542_);
lean_inc_ref(v___y_3550_);
v___x_3555_ = l_Lean_Environment_addConstAsync(v___y_3550_, v_fst_3537_, v___x_3554_, v___y_3551_, v___x_3553_, v___x_3430_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v_a_3556_; lean_object* v_mainEnv_3557_; lean_object* v_asyncEnv_3558_; lean_object* v___f_3559_; lean_object* v___f_3560_; lean_object* v___x_3561_; 
lean_del_object(v___x_3544_);
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
lean_inc_n(v_a_3556_, 3);
lean_dec_ref_known(v___x_3555_, 1);
v_mainEnv_3557_ = lean_ctor_get(v_a_3556_, 0);
lean_inc_ref(v_mainEnv_3557_);
v_asyncEnv_3558_ = lean_ctor_get(v_a_3556_, 1);
lean_inc_ref_n(v_asyncEnv_3558_, 2);
lean_inc(v_ref_3552_);
lean_inc(v___y_3547_);
v___f_3559_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3559_, 0, v___y_3547_);
lean_closure_set(v___f_3559_, 1, v_a_3556_);
lean_closure_set(v___f_3559_, 2, v_ref_3552_);
lean_inc(v_decl_3429_);
v___f_3560_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 7, 3);
lean_closure_set(v___f_3560_, 0, v_a_3556_);
lean_closure_set(v___f_3560_, 1, v_asyncEnv_3558_);
lean_closure_set(v___f_3560_, 2, v_decl_3429_);
v___x_3561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3561_, 0, v_fst_3541_);
if (lean_obj_tag(v___y_3548_) == 0)
{
lean_inc_ref(v___x_3561_);
lean_inc(v_ref_3552_);
v___y_3454_ = v___f_3560_;
v___y_3455_ = v___y_3547_;
v___y_3456_ = v___f_3559_;
v___y_3457_ = v_a_3556_;
v___y_3458_ = v_ref_3552_;
v___y_3459_ = v___y_3549_;
v___y_3460_ = v_asyncEnv_3558_;
v___y_3461_ = v___y_3550_;
v___y_3462_ = v_mainEnv_3557_;
v___y_3463_ = v___x_3561_;
v___y_3464_ = v___x_3553_;
v___y_3465_ = v___x_3561_;
goto v___jp_3453_;
}
else
{
lean_inc(v_ref_3552_);
v___y_3454_ = v___f_3560_;
v___y_3455_ = v___y_3547_;
v___y_3456_ = v___f_3559_;
v___y_3457_ = v_a_3556_;
v___y_3458_ = v_ref_3552_;
v___y_3459_ = v___y_3549_;
v___y_3460_ = v_asyncEnv_3558_;
v___y_3461_ = v___y_3550_;
v___y_3462_ = v_mainEnv_3557_;
v___y_3463_ = v___x_3561_;
v___y_3464_ = v___x_3553_;
v___y_3465_ = v___y_3548_;
goto v___jp_3453_;
}
}
else
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3575_; 
lean_dec_ref(v___y_3550_);
lean_dec(v___y_3548_);
lean_dec(v_fst_3541_);
lean_dec(v_decl_3429_);
v_a_3562_ = lean_ctor_get(v___x_3555_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3564_ = v___x_3555_;
v_isShared_3565_ = v_isSharedCheck_3575_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3555_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3575_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3570_; 
v___x_3566_ = lean_io_error_to_string(v_a_3562_);
v___x_3567_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
v___x_3568_ = l_Lean_MessageData_ofFormat(v___x_3567_);
lean_inc(v_ref_3552_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 1, v___x_3568_);
lean_ctor_set(v___x_3544_, 0, v_ref_3552_);
v___x_3570_ = v___x_3544_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_ref_3552_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v___x_3568_);
v___x_3570_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
lean_object* v___x_3572_; 
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 0, v___x_3570_);
v___x_3572_ = v___x_3564_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v___x_3570_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
}
v___jp_3576_:
{
lean_object* v___x_3580_; 
v___x_3580_ = lean_st_ref_get(v___y_3579_);
if (lean_obj_tag(v_exportedInfo_x3f_3577_) == 0)
{
lean_object* v_env_3581_; lean_object* v___x_3582_; 
v_env_3581_ = lean_ctor_get(v___x_3580_, 0);
lean_inc_ref(v_env_3581_);
lean_dec(v___x_3580_);
v___x_3582_ = lean_box(0);
v___y_3547_ = v___y_3579_;
v___y_3548_ = v_exportedInfo_x3f_3577_;
v___y_3549_ = v___y_3578_;
v___y_3550_ = v_env_3581_;
v___y_3551_ = v___x_3582_;
goto v___jp_3546_;
}
else
{
lean_object* v_env_3583_; lean_object* v_val_3584_; uint8_t v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v_env_3583_ = lean_ctor_get(v___x_3580_, 0);
lean_inc_ref(v_env_3583_);
lean_dec(v___x_3580_);
v_val_3584_ = lean_ctor_get(v_exportedInfo_x3f_3577_, 0);
v___x_3585_ = l_Lean_ConstantKind_ofConstantInfo(v_val_3584_);
v___x_3586_ = lean_box(v___x_3585_);
v___x_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3586_);
v___y_3547_ = v___y_3579_;
v___y_3548_ = v_exportedInfo_x3f_3577_;
v___y_3549_ = v___y_3578_;
v___y_3550_ = v_env_3583_;
v___y_3551_ = v___x_3587_;
goto v___jp_3546_;
}
}
v___jp_3588_:
{
lean_object* v___x_3591_; 
lean_inc(v_fst_3541_);
v___x_3591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3591_, 0, v_fst_3541_);
v_exportedInfo_x3f_3577_ = v___x_3591_;
v___y_3578_ = v___y_3589_;
v___y_3579_ = v___y_3590_;
goto v___jp_3576_;
}
v___jp_3592_:
{
lean_object* v___x_3595_; 
lean_inc(v_fst_3541_);
v___x_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3595_, 0, v_fst_3541_);
v_exportedInfo_x3f_3577_ = v___x_3595_;
v___y_3578_ = v___y_3593_;
v___y_3579_ = v___y_3594_;
goto v___jp_3576_;
}
v___jp_3596_:
{
lean_object* v___x_3599_; uint8_t v___x_3600_; 
lean_inc(v_decl_3429_);
v___x_3599_ = l_Lean_Declaration_getTopLevelNames(v_decl_3429_);
v___x_3600_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v___x_3599_);
lean_dec(v___x_3599_);
if (v___x_3600_ == 0)
{
lean_dec(v___x_3434_);
if (lean_obj_tag(v_exportedInfo_x3f_3436_) == 0)
{
lean_object* v_toCold_3601_; lean_object* v_options_3602_; uint8_t v_hasTrace_3603_; 
lean_dec_ref(v___x_3433_);
v_toCold_3601_ = lean_ctor_get(v___y_3597_, 0);
v_options_3602_ = lean_ctor_get(v_toCold_3601_, 2);
v_hasTrace_3603_ = lean_ctor_get_uint8(v_options_3602_, sizeof(void*)*1);
if (v_hasTrace_3603_ == 0)
{
lean_dec(v_cls_3431_);
v___y_3589_ = v___y_3597_;
v___y_3590_ = v___y_3598_;
goto v___jp_3588_;
}
else
{
lean_object* v_inheritedTraceOptions_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; uint8_t v___x_3607_; 
v_inheritedTraceOptions_3604_ = lean_ctor_get(v_toCold_3601_, 11);
v___x_3605_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3431_);
v___x_3606_ = l_Lean_Name_append(v___x_3605_, v_cls_3431_);
v___x_3607_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3604_, v_options_3602_, v___x_3606_);
lean_dec(v___x_3606_);
if (v___x_3607_ == 0)
{
lean_dec(v_cls_3431_);
v___y_3589_ = v___y_3597_;
v___y_3590_ = v___y_3598_;
goto v___jp_3588_;
}
else
{
lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3608_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_3609_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3431_, v___x_3608_, v___y_3597_, v___y_3598_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_dec_ref_known(v___x_3609_, 1);
v___y_3589_ = v___y_3597_;
v___y_3590_ = v___y_3598_;
goto v___jp_3588_;
}
else
{
lean_del_object(v___x_3544_);
lean_dec(v_snd_3542_);
lean_dec(v_fst_3541_);
lean_dec(v_fst_3537_);
lean_dec(v_decl_3429_);
return v___x_3609_;
}
}
}
}
else
{
lean_object* v___x_3610_; lean_object* v_env_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; uint8_t v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
lean_dec(v_cls_3431_);
v___x_3610_ = lean_st_ref_get(v___y_3598_);
v_env_3611_ = lean_ctor_get(v___x_3610_, 0);
lean_inc_ref(v_env_3611_);
lean_dec(v___x_3610_);
v___x_3612_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_3613_ = lean_box(1);
v___x_3614_ = 0;
v___x_3615_ = lean_box(v___x_3432_);
lean_inc(v_fst_3537_);
v___x_3616_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_3615_, v___x_3612_, v_env_3611_, v_fst_3537_, v___x_3613_, v___x_3614_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v___x_3617_; lean_object* v_env_3618_; lean_object* v_nextMacroScope_3619_; lean_object* v_ngen_3620_; lean_object* v_auxDeclNGen_3621_; lean_object* v_traceState_3622_; lean_object* v_recordedDeps_3623_; lean_object* v_messages_3624_; lean_object* v_infoState_3625_; lean_object* v_snapshotTasks_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3635_; 
v___x_3617_ = lean_st_ref_take(v___y_3598_);
v_env_3618_ = lean_ctor_get(v___x_3617_, 0);
v_nextMacroScope_3619_ = lean_ctor_get(v___x_3617_, 1);
v_ngen_3620_ = lean_ctor_get(v___x_3617_, 2);
v_auxDeclNGen_3621_ = lean_ctor_get(v___x_3617_, 3);
v_traceState_3622_ = lean_ctor_get(v___x_3617_, 4);
v_recordedDeps_3623_ = lean_ctor_get(v___x_3617_, 6);
v_messages_3624_ = lean_ctor_get(v___x_3617_, 7);
v_infoState_3625_ = lean_ctor_get(v___x_3617_, 8);
v_snapshotTasks_3626_ = lean_ctor_get(v___x_3617_, 9);
v_isSharedCheck_3635_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3635_ == 0)
{
lean_object* v_unused_3636_; 
v_unused_3636_ = lean_ctor_get(v___x_3617_, 5);
lean_dec(v_unused_3636_);
v___x_3628_ = v___x_3617_;
v_isShared_3629_ = v_isSharedCheck_3635_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_snapshotTasks_3626_);
lean_inc(v_infoState_3625_);
lean_inc(v_messages_3624_);
lean_inc(v_recordedDeps_3623_);
lean_inc(v_traceState_3622_);
lean_inc(v_auxDeclNGen_3621_);
lean_inc(v_ngen_3620_);
lean_inc(v_nextMacroScope_3619_);
lean_inc(v_env_3618_);
lean_dec(v___x_3617_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3635_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3630_; lean_object* v___x_3632_; 
lean_inc(v_snd_3542_);
lean_inc(v_fst_3537_);
v___x_3630_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3612_, v_env_3618_, v_fst_3537_, v_snd_3542_, v___x_3600_);
if (v_isShared_3629_ == 0)
{
lean_ctor_set(v___x_3628_, 5, v___x_3433_);
lean_ctor_set(v___x_3628_, 0, v___x_3630_);
v___x_3632_ = v___x_3628_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v___x_3630_);
lean_ctor_set(v_reuseFailAlloc_3634_, 1, v_nextMacroScope_3619_);
lean_ctor_set(v_reuseFailAlloc_3634_, 2, v_ngen_3620_);
lean_ctor_set(v_reuseFailAlloc_3634_, 3, v_auxDeclNGen_3621_);
lean_ctor_set(v_reuseFailAlloc_3634_, 4, v_traceState_3622_);
lean_ctor_set(v_reuseFailAlloc_3634_, 5, v___x_3433_);
lean_ctor_set(v_reuseFailAlloc_3634_, 6, v_recordedDeps_3623_);
lean_ctor_set(v_reuseFailAlloc_3634_, 7, v_messages_3624_);
lean_ctor_set(v_reuseFailAlloc_3634_, 8, v_infoState_3625_);
lean_ctor_set(v_reuseFailAlloc_3634_, 9, v_snapshotTasks_3626_);
v___x_3632_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
lean_object* v___x_3633_; 
v___x_3633_ = lean_st_ref_put(v___y_3598_, v___x_3632_);
v_exportedInfo_x3f_3577_ = v_exportedInfo_x3f_3436_;
v___y_3578_ = v___y_3597_;
v___y_3579_ = v___y_3598_;
goto v___jp_3576_;
}
}
}
else
{
lean_dec_ref_known(v___x_3616_, 1);
lean_dec_ref(v___x_3433_);
v_exportedInfo_x3f_3577_ = v_exportedInfo_x3f_3436_;
v___y_3578_ = v___y_3597_;
v___y_3579_ = v___y_3598_;
goto v___jp_3576_;
}
}
}
else
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v_a_3639_; uint8_t v___x_3640_; 
lean_dec(v_exportedInfo_x3f_3436_);
lean_dec_ref(v___x_3433_);
v___x_3637_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_3638_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v___x_3637_, v___y_3597_);
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
lean_inc(v_a_3639_);
lean_dec_ref(v___x_3638_);
v___x_3640_ = lean_unbox(v_a_3639_);
lean_dec(v_a_3639_);
if (v___x_3640_ == 0)
{
lean_object* v_toCold_3641_; lean_object* v_options_3642_; uint8_t v_hasTrace_3643_; 
v_toCold_3641_ = lean_ctor_get(v___y_3597_, 0);
v_options_3642_ = lean_ctor_get(v_toCold_3641_, 2);
v_hasTrace_3643_ = lean_ctor_get_uint8(v_options_3642_, sizeof(void*)*1);
if (v_hasTrace_3643_ == 0)
{
lean_dec(v_cls_3431_);
v_exportedInfo_x3f_3577_ = v___x_3434_;
v___y_3578_ = v___y_3597_;
v___y_3579_ = v___y_3598_;
goto v___jp_3576_;
}
else
{
lean_object* v_inheritedTraceOptions_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; uint8_t v___x_3647_; 
v_inheritedTraceOptions_3644_ = lean_ctor_get(v_toCold_3641_, 11);
v___x_3645_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3431_);
v___x_3646_ = l_Lean_Name_append(v___x_3645_, v_cls_3431_);
v___x_3647_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3644_, v_options_3642_, v___x_3646_);
lean_dec(v___x_3646_);
if (v___x_3647_ == 0)
{
lean_dec(v_cls_3431_);
v_exportedInfo_x3f_3577_ = v___x_3434_;
v___y_3578_ = v___y_3597_;
v___y_3579_ = v___y_3598_;
goto v___jp_3576_;
}
else
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_3649_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3431_, v___x_3648_, v___y_3597_, v___y_3598_);
if (lean_obj_tag(v___x_3649_) == 0)
{
lean_dec_ref_known(v___x_3649_, 1);
v_exportedInfo_x3f_3577_ = v___x_3434_;
v___y_3578_ = v___y_3597_;
v___y_3579_ = v___y_3598_;
goto v___jp_3576_;
}
else
{
lean_del_object(v___x_3544_);
lean_dec(v_snd_3542_);
lean_dec(v_fst_3541_);
lean_dec(v_fst_3537_);
lean_dec(v___x_3434_);
lean_dec(v_decl_3429_);
return v___x_3649_;
}
}
}
}
else
{
lean_object* v_toCold_3650_; lean_object* v_options_3651_; uint8_t v_hasTrace_3652_; 
lean_dec(v___x_3434_);
v_toCold_3650_ = lean_ctor_get(v___y_3597_, 0);
v_options_3651_ = lean_ctor_get(v_toCold_3650_, 2);
v_hasTrace_3652_ = lean_ctor_get_uint8(v_options_3651_, sizeof(void*)*1);
if (v_hasTrace_3652_ == 0)
{
lean_dec(v_cls_3431_);
v___y_3593_ = v___y_3597_;
v___y_3594_ = v___y_3598_;
goto v___jp_3592_;
}
else
{
lean_object* v_inheritedTraceOptions_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; uint8_t v___x_3656_; 
v_inheritedTraceOptions_3653_ = lean_ctor_get(v_toCold_3650_, 11);
v___x_3654_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3431_);
v___x_3655_ = l_Lean_Name_append(v___x_3654_, v_cls_3431_);
v___x_3656_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3653_, v_options_3651_, v___x_3655_);
lean_dec(v___x_3655_);
if (v___x_3656_ == 0)
{
lean_dec(v_cls_3431_);
v___y_3593_ = v___y_3597_;
v___y_3594_ = v___y_3598_;
goto v___jp_3592_;
}
else
{
lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3657_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_3658_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3431_, v___x_3657_, v___y_3597_, v___y_3598_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_dec_ref_known(v___x_3658_, 1);
v___y_3593_ = v___y_3597_;
v___y_3594_ = v___y_3598_;
goto v___jp_3592_;
}
else
{
lean_del_object(v___x_3544_);
lean_dec(v_snd_3542_);
lean_dec(v_fst_3541_);
lean_dec(v_fst_3537_);
lean_dec(v_decl_3429_);
return v___x_3658_;
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
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed(lean_object* v_decl_3671_, lean_object* v___x_3672_, lean_object* v_cls_3673_, lean_object* v___x_3674_, lean_object* v___x_3675_, lean_object* v___x_3676_, lean_object* v_____x_3677_, lean_object* v_exportedInfo_x3f_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_){
_start:
{
uint8_t v___x_59537__boxed_3682_; uint8_t v___x_59539__boxed_3683_; lean_object* v_res_3684_; 
v___x_59537__boxed_3682_ = lean_unbox(v___x_3672_);
v___x_59539__boxed_3683_ = lean_unbox(v___x_3674_);
v_res_3684_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(v_decl_3671_, v___x_59537__boxed_3682_, v_cls_3673_, v___x_59539__boxed_3683_, v___x_3675_, v___x_3676_, v_____x_3677_, v_exportedInfo_x3f_3678_, v___y_3679_, v___y_3680_);
lean_dec(v___y_3680_);
lean_dec_ref(v___y_3679_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(lean_object* v___f_3685_, uint8_t v_forceExpose_3686_, lean_object* v___x_3687_, lean_object* v_cls_3688_, lean_object* v_defn_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_){
_start:
{
lean_object* v_exportedInfo_x3f_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3706_; lean_object* v___y_3707_; lean_object* v___y_3708_; uint8_t v___y_3709_; lean_object* v___x_3713_; lean_object* v_env_3714_; lean_object* v___x_3715_; 
v___x_3713_ = lean_st_ref_get(v___y_3691_);
v_env_3714_ = lean_ctor_get(v___x_3713_, 0);
lean_inc_ref(v_env_3714_);
lean_dec(v___x_3713_);
v___x_3715_ = lean_st_ref_get(v___y_3691_);
if (v_forceExpose_3686_ == 0)
{
lean_object* v_env_3716_; lean_object* v___x_3717_; uint8_t v_isModule_3718_; 
v_env_3716_ = lean_ctor_get(v___x_3715_, 0);
lean_inc_ref(v_env_3716_);
lean_dec(v___x_3715_);
v___x_3717_ = l_Lean_Environment_header(v_env_3714_);
lean_dec_ref(v_env_3714_);
v_isModule_3718_ = lean_ctor_get_uint8(v___x_3717_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_3717_);
if (v_isModule_3718_ == 0)
{
lean_dec_ref(v_env_3716_);
lean_dec(v_cls_3688_);
v_exportedInfo_x3f_3694_ = v___x_3687_;
v___y_3695_ = v___y_3690_;
v___y_3696_ = v___y_3691_;
goto v___jp_3693_;
}
else
{
uint8_t v_isExporting_3719_; lean_object* v___y_3721_; lean_object* v___y_3722_; 
v_isExporting_3719_ = lean_ctor_get_uint8(v_env_3716_, sizeof(void*)*13);
lean_dec_ref(v_env_3716_);
if (v_isExporting_3719_ == 0)
{
lean_object* v_toCold_3727_; lean_object* v_options_3728_; uint8_t v_hasTrace_3729_; 
lean_dec(v___x_3687_);
v_toCold_3727_ = lean_ctor_get(v___y_3690_, 0);
v_options_3728_ = lean_ctor_get(v_toCold_3727_, 2);
v_hasTrace_3729_ = lean_ctor_get_uint8(v_options_3728_, sizeof(void*)*1);
if (v_hasTrace_3729_ == 0)
{
lean_dec(v_cls_3688_);
v___y_3721_ = v___y_3690_;
v___y_3722_ = v___y_3691_;
goto v___jp_3720_;
}
else
{
lean_object* v_inheritedTraceOptions_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; uint8_t v___x_3733_; 
v_inheritedTraceOptions_3730_ = lean_ctor_get(v_toCold_3727_, 11);
v___x_3731_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3688_);
v___x_3732_ = l_Lean_Name_append(v___x_3731_, v_cls_3688_);
v___x_3733_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3730_, v_options_3728_, v___x_3732_);
lean_dec(v___x_3732_);
if (v___x_3733_ == 0)
{
lean_dec(v_cls_3688_);
v___y_3721_ = v___y_3690_;
v___y_3722_ = v___y_3691_;
goto v___jp_3720_;
}
else
{
lean_object* v_toConstantVal_3734_; lean_object* v_name_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
v_toConstantVal_3734_ = lean_ctor_get(v_defn_3689_, 0);
v_name_3735_ = lean_ctor_get(v_toConstantVal_3734_, 0);
v___x_3736_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_3735_);
v___x_3737_ = l_Lean_MessageData_ofName(v_name_3735_);
v___x_3738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3736_);
lean_ctor_set(v___x_3738_, 1, v___x_3737_);
v___x_3739_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_3740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3738_);
lean_ctor_set(v___x_3740_, 1, v___x_3739_);
v___x_3741_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3688_, v___x_3740_, v___y_3690_, v___y_3691_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_dec_ref_known(v___x_3741_, 1);
v___y_3721_ = v___y_3690_;
v___y_3722_ = v___y_3691_;
goto v___jp_3720_;
}
else
{
lean_dec_ref(v_defn_3689_);
lean_dec_ref(v___f_3685_);
return v___x_3741_;
}
}
}
}
else
{
lean_dec(v_cls_3688_);
v_exportedInfo_x3f_3694_ = v___x_3687_;
v___y_3695_ = v___y_3690_;
v___y_3696_ = v___y_3691_;
goto v___jp_3693_;
}
v___jp_3720_:
{
lean_object* v_toConstantVal_3723_; uint8_t v_safety_3724_; uint8_t v___x_3725_; uint8_t v___x_3726_; 
v_toConstantVal_3723_ = lean_ctor_get(v_defn_3689_, 0);
v_safety_3724_ = lean_ctor_get_uint8(v_defn_3689_, sizeof(void*)*4);
v___x_3725_ = 1;
v___x_3726_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_3724_, v___x_3725_);
if (v___x_3726_ == 0)
{
lean_inc_ref(v_toConstantVal_3723_);
v___y_3706_ = v_toConstantVal_3723_;
v___y_3707_ = v___y_3722_;
v___y_3708_ = v___y_3721_;
v___y_3709_ = v_isModule_3718_;
goto v___jp_3705_;
}
else
{
lean_inc_ref(v_toConstantVal_3723_);
v___y_3706_ = v_toConstantVal_3723_;
v___y_3707_ = v___y_3722_;
v___y_3708_ = v___y_3721_;
v___y_3709_ = v_isExporting_3719_;
goto v___jp_3705_;
}
}
}
}
else
{
lean_dec(v___x_3715_);
lean_dec_ref(v_env_3714_);
lean_dec(v_cls_3688_);
v_exportedInfo_x3f_3694_ = v___x_3687_;
v___y_3695_ = v___y_3690_;
v___y_3696_ = v___y_3691_;
goto v___jp_3693_;
}
v___jp_3693_:
{
lean_object* v_toConstantVal_3697_; lean_object* v_name_3698_; lean_object* v___x_3699_; uint8_t v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v_toConstantVal_3697_ = lean_ctor_get(v_defn_3689_, 0);
v_name_3698_ = lean_ctor_get(v_toConstantVal_3697_, 0);
lean_inc(v_name_3698_);
v___x_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3699_, 0, v_defn_3689_);
v___x_3700_ = 0;
v___x_3701_ = lean_box(v___x_3700_);
v___x_3702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3699_);
lean_ctor_set(v___x_3702_, 1, v___x_3701_);
v___x_3703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3703_, 0, v_name_3698_);
lean_ctor_set(v___x_3703_, 1, v___x_3702_);
lean_inc(v___y_3696_);
lean_inc_ref(v___y_3695_);
v___x_3704_ = lean_apply_5(v___f_3685_, v___x_3703_, v_exportedInfo_x3f_3694_, v___y_3695_, v___y_3696_, lean_box(0));
return v___x_3704_;
}
v___jp_3705_:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3710_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3710_, 0, v___y_3706_);
lean_ctor_set_uint8(v___x_3710_, sizeof(void*)*1, v___y_3709_);
v___x_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3711_, 0, v___x_3710_);
v___x_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
v_exportedInfo_x3f_3694_ = v___x_3712_;
v___y_3695_ = v___y_3708_;
v___y_3696_ = v___y_3707_;
goto v___jp_3693_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11___boxed(lean_object* v___f_3742_, lean_object* v_forceExpose_3743_, lean_object* v___x_3744_, lean_object* v_cls_3745_, lean_object* v_defn_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_){
_start:
{
uint8_t v_forceExpose_boxed_3750_; lean_object* v_res_3751_; 
v_forceExpose_boxed_3750_ = lean_unbox(v_forceExpose_3743_);
v_res_3751_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_3742_, v_forceExpose_boxed_3750_, v___x_3744_, v_cls_3745_, v_defn_3746_, v___y_3747_, v___y_3748_);
lean_dec(v___y_3748_);
lean_dec_ref(v___y_3747_);
return v_res_3751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(lean_object* v_val_3752_, lean_object* v___f_3753_, lean_object* v_____r_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_){
_start:
{
lean_object* v_toConstantVal_3758_; uint8_t v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v_toConstantVal_3758_ = lean_ctor_get(v_val_3752_, 0);
v___x_3759_ = 0;
lean_inc_ref(v_toConstantVal_3758_);
v___x_3760_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3760_, 0, v_toConstantVal_3758_);
lean_ctor_set_uint8(v___x_3760_, sizeof(void*)*1, v___x_3759_);
v___x_3761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3760_);
v___x_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
v___x_3763_ = lean_box(0);
lean_inc(v___y_3756_);
lean_inc_ref(v___y_3755_);
v___x_3764_ = lean_apply_5(v___f_3753_, v___x_3763_, v___x_3762_, v___y_3755_, v___y_3756_, lean_box(0));
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13___boxed(lean_object* v_val_3765_, lean_object* v___f_3766_, lean_object* v_____r_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_){
_start:
{
lean_object* v_res_3771_; 
v_res_3771_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_3765_, v___f_3766_, v_____r_3767_, v___y_3768_, v___y_3769_);
lean_dec(v___y_3769_);
lean_dec_ref(v___y_3768_);
lean_dec_ref(v_val_3765_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(lean_object* v_x_3772_, lean_object* v_x_3773_){
_start:
{
if (lean_obj_tag(v_x_3773_) == 0)
{
return v_x_3772_;
}
else
{
lean_object* v_head_3774_; lean_object* v_tail_3775_; lean_object* v___x_3776_; 
v_head_3774_ = lean_ctor_get(v_x_3773_, 0);
lean_inc(v_head_3774_);
v_tail_3775_ = lean_ctor_get(v_x_3773_, 1);
lean_inc(v_tail_3775_);
lean_dec_ref_known(v_x_3773_, 2);
v___x_3776_ = l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(v_x_3772_, v_head_3774_);
v_x_3772_ = v___x_3776_;
v_x_3773_ = v_tail_3775_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0(void){
_start:
{
lean_object* v_cls_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; 
v_cls_3778_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_3779_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
v___x_3780_ = l_Lean_Name_append(v___x_3779_, v_cls_3778_);
return v___x_3780_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2(void){
_start:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; 
v___x_3782_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1));
v___x_3783_ = l_Lean_stringToMessageData(v___x_3782_);
return v___x_3783_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4(void){
_start:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; 
v___x_3785_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3));
v___x_3786_ = l_Lean_stringToMessageData(v___x_3785_);
return v___x_3786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore(lean_object* v_decl_3787_, uint8_t v_forceExpose_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_){
_start:
{
lean_object* v___y_3793_; lean_object* v___y_3794_; lean_object* v_a_3795_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v_a_3808_; lean_object* v_toCold_3818_; lean_object* v_options_3819_; lean_object* v_inheritedTraceOptions_3820_; uint8_t v_hasTrace_3821_; uint8_t v___y_3823_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v___y_3826_; lean_object* v___y_3827_; lean_object* v___y_3828_; lean_object* v___y_3829_; lean_object* v___y_3830_; lean_object* v___y_3831_; lean_object* v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3906_; lean_object* v___y_3907_; uint8_t v___y_3908_; lean_object* v___y_3909_; lean_object* v___y_3910_; lean_object* v___y_3911_; lean_object* v___y_3912_; lean_object* v___y_3913_; lean_object* v___y_3936_; lean_object* v___y_3937_; uint8_t v___y_3938_; lean_object* v_exportedInfo_x3f_3939_; lean_object* v___y_3940_; lean_object* v___y_3941_; lean_object* v___y_3951_; lean_object* v___y_3952_; uint8_t v___y_3953_; lean_object* v___y_3954_; lean_object* v___y_3955_; lean_object* v___y_3958_; lean_object* v___y_3959_; uint8_t v___y_3960_; lean_object* v___y_3961_; lean_object* v___y_3962_; uint8_t v___x_3964_; lean_object* v_cls_3965_; lean_object* v___y_3967_; lean_object* v_options_3968_; lean_object* v_inheritedTraceOptions_3969_; lean_object* v___y_3970_; 
v_toCold_3818_ = lean_ctor_get(v_a_3789_, 0);
v_options_3819_ = lean_ctor_get(v_toCold_3818_, 2);
v_inheritedTraceOptions_3820_ = lean_ctor_get(v_toCold_3818_, 11);
v_hasTrace_3821_ = lean_ctor_get_uint8(v_options_3819_, sizeof(void*)*1);
v___x_3964_ = 0;
v_cls_3965_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
if (v_hasTrace_3821_ == 0)
{
lean_object* v___x_3977_; lean_object* v_env_3978_; lean_object* v_nextMacroScope_3979_; lean_object* v_ngen_3980_; lean_object* v_auxDeclNGen_3981_; lean_object* v_traceState_3982_; lean_object* v_recordedDeps_3983_; lean_object* v_messages_3984_; lean_object* v_infoState_3985_; lean_object* v_snapshotTasks_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_4210_; 
v___x_3977_ = lean_st_ref_take(v_a_3790_);
v_env_3978_ = lean_ctor_get(v___x_3977_, 0);
v_nextMacroScope_3979_ = lean_ctor_get(v___x_3977_, 1);
v_ngen_3980_ = lean_ctor_get(v___x_3977_, 2);
v_auxDeclNGen_3981_ = lean_ctor_get(v___x_3977_, 3);
v_traceState_3982_ = lean_ctor_get(v___x_3977_, 4);
v_recordedDeps_3983_ = lean_ctor_get(v___x_3977_, 6);
v_messages_3984_ = lean_ctor_get(v___x_3977_, 7);
v_infoState_3985_ = lean_ctor_get(v___x_3977_, 8);
v_snapshotTasks_3986_ = lean_ctor_get(v___x_3977_, 9);
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_3977_);
if (v_isSharedCheck_4210_ == 0)
{
lean_object* v_unused_4211_; 
v_unused_4211_ = lean_ctor_get(v___x_3977_, 5);
lean_dec(v_unused_4211_);
v___x_3988_ = v___x_3977_;
v_isShared_3989_ = v_isSharedCheck_4210_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_snapshotTasks_3986_);
lean_inc(v_infoState_3985_);
lean_inc(v_messages_3984_);
lean_inc(v_recordedDeps_3983_);
lean_inc(v_traceState_3982_);
lean_inc(v_auxDeclNGen_3981_);
lean_inc(v_ngen_3980_);
lean_inc(v_nextMacroScope_3979_);
lean_inc(v_env_3978_);
lean_dec(v___x_3977_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_4210_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3994_; 
lean_inc(v_decl_3787_);
v___x_3990_ = l_Lean_Declaration_getNames(v_decl_3787_);
v___x_3991_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_3978_, v___x_3990_);
v___x_3992_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_3989_ == 0)
{
lean_ctor_set(v___x_3988_, 5, v___x_3992_);
lean_ctor_set(v___x_3988_, 0, v___x_3991_);
v___x_3994_ = v___x_3988_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v___x_3991_);
lean_ctor_set(v_reuseFailAlloc_4209_, 1, v_nextMacroScope_3979_);
lean_ctor_set(v_reuseFailAlloc_4209_, 2, v_ngen_3980_);
lean_ctor_set(v_reuseFailAlloc_4209_, 3, v_auxDeclNGen_3981_);
lean_ctor_set(v_reuseFailAlloc_4209_, 4, v_traceState_3982_);
lean_ctor_set(v_reuseFailAlloc_4209_, 5, v___x_3992_);
lean_ctor_set(v_reuseFailAlloc_4209_, 6, v_recordedDeps_3983_);
lean_ctor_set(v_reuseFailAlloc_4209_, 7, v_messages_3984_);
lean_ctor_set(v_reuseFailAlloc_4209_, 8, v_infoState_3985_);
lean_ctor_set(v_reuseFailAlloc_4209_, 9, v_snapshotTasks_3986_);
v___x_3994_ = v_reuseFailAlloc_4209_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v_env_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v_env_4000_; lean_object* v_nextMacroScope_4001_; lean_object* v_ngen_4002_; lean_object* v_auxDeclNGen_4003_; lean_object* v_traceState_4004_; lean_object* v_recordedDeps_4005_; lean_object* v_messages_4006_; lean_object* v_infoState_4007_; lean_object* v_snapshotTasks_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4207_; 
v___x_3995_ = lean_st_ref_put(v_a_3790_, v___x_3994_);
v___x_3996_ = lean_st_ref_get(v_a_3790_);
v_env_3997_ = lean_ctor_get(v___x_3996_, 0);
lean_inc_ref(v_env_3997_);
lean_dec(v___x_3996_);
v___x_3998_ = l_Lean_getExplicitRewriteRules(v_env_3997_);
v___x_3999_ = lean_st_ref_take(v_a_3790_);
v_env_4000_ = lean_ctor_get(v___x_3999_, 0);
v_nextMacroScope_4001_ = lean_ctor_get(v___x_3999_, 1);
v_ngen_4002_ = lean_ctor_get(v___x_3999_, 2);
v_auxDeclNGen_4003_ = lean_ctor_get(v___x_3999_, 3);
v_traceState_4004_ = lean_ctor_get(v___x_3999_, 4);
v_recordedDeps_4005_ = lean_ctor_get(v___x_3999_, 6);
v_messages_4006_ = lean_ctor_get(v___x_3999_, 7);
v_infoState_4007_ = lean_ctor_get(v___x_3999_, 8);
v_snapshotTasks_4008_ = lean_ctor_get(v___x_3999_, 9);
v_isSharedCheck_4207_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4207_ == 0)
{
lean_object* v_unused_4208_; 
v_unused_4208_ = lean_ctor_get(v___x_3999_, 5);
lean_dec(v_unused_4208_);
v___x_4010_ = v___x_3999_;
v_isShared_4011_ = v_isSharedCheck_4207_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_snapshotTasks_4008_);
lean_inc(v_infoState_4007_);
lean_inc(v_messages_4006_);
lean_inc(v_recordedDeps_4005_);
lean_inc(v_traceState_4004_);
lean_inc(v_auxDeclNGen_4003_);
lean_inc(v_ngen_4002_);
lean_inc(v_nextMacroScope_4001_);
lean_inc(v_env_4000_);
lean_dec(v___x_3999_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4207_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v___x_4012_; lean_object* v___x_4014_; 
lean_inc(v_decl_3787_);
v___x_4012_ = l___private_Lean_AddDecl_0__Lean_recordRewriteSets(v_decl_3787_, v___x_3998_, v_env_4000_);
if (v_isShared_4011_ == 0)
{
lean_ctor_set(v___x_4010_, 5, v___x_3992_);
lean_ctor_set(v___x_4010_, 0, v___x_4012_);
v___x_4014_ = v___x_4010_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4206_; 
v_reuseFailAlloc_4206_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4206_, 0, v___x_4012_);
lean_ctor_set(v_reuseFailAlloc_4206_, 1, v_nextMacroScope_4001_);
lean_ctor_set(v_reuseFailAlloc_4206_, 2, v_ngen_4002_);
lean_ctor_set(v_reuseFailAlloc_4206_, 3, v_auxDeclNGen_4003_);
lean_ctor_set(v_reuseFailAlloc_4206_, 4, v_traceState_4004_);
lean_ctor_set(v_reuseFailAlloc_4206_, 5, v___x_3992_);
lean_ctor_set(v_reuseFailAlloc_4206_, 6, v_recordedDeps_4005_);
lean_ctor_set(v_reuseFailAlloc_4206_, 7, v_messages_4006_);
lean_ctor_set(v_reuseFailAlloc_4206_, 8, v_infoState_4007_);
lean_ctor_set(v_reuseFailAlloc_4206_, 9, v_snapshotTasks_4008_);
v___x_4014_ = v_reuseFailAlloc_4206_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___y_4018_; lean_object* v___y_4019_; uint8_t v___y_4020_; lean_object* v___y_4021_; lean_object* v___y_4022_; lean_object* v___y_4023_; lean_object* v_fst_4083_; lean_object* v_fst_4084_; uint8_t v_snd_4085_; lean_object* v_exportedInfo_x3f_4086_; lean_object* v___y_4087_; lean_object* v___y_4088_; lean_object* v___y_4098_; lean_object* v_exportedInfo_x3f_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; lean_object* v___y_4109_; uint8_t v___y_4110_; lean_object* v___y_4115_; lean_object* v_toConstantVal_4116_; uint8_t v_safety_4117_; uint8_t v___y_4118_; lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v___y_4124_; uint8_t v___y_4125_; lean_object* v___y_4126_; lean_object* v___y_4127_; lean_object* v_defn_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; 
v___x_4015_ = lean_st_ref_put(v_a_3790_, v___x_4014_);
v___x_4016_ = lean_box(0);
switch(lean_obj_tag(v_decl_3787_))
{
case 2:
{
lean_object* v_val_4156_; lean_object* v_exportedInfo_x3f_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___x_4165_; 
v_val_4156_ = lean_ctor_get(v_decl_3787_, 0);
v___x_4165_ = lean_st_ref_get(v_a_3790_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4166_; lean_object* v___x_4167_; uint8_t v_isModule_4168_; 
v_env_4166_ = lean_ctor_get(v___x_4165_, 0);
lean_inc_ref(v_env_4166_);
lean_dec(v___x_4165_);
v___x_4167_ = l_Lean_Environment_header(v_env_4166_);
lean_dec_ref(v_env_4166_);
v_isModule_4168_ = lean_ctor_get_uint8(v___x_4167_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4167_);
if (v_isModule_4168_ == 0)
{
v_exportedInfo_x3f_4158_ = v___x_4016_;
v___y_4159_ = v_a_3789_;
v___y_4160_ = v_a_3790_;
goto v___jp_4157_;
}
else
{
lean_object* v_toConstantVal_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; 
v_toConstantVal_4169_ = lean_ctor_get(v_val_4156_, 0);
lean_inc_ref(v_toConstantVal_4169_);
v___x_4170_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4170_, 0, v_toConstantVal_4169_);
lean_ctor_set_uint8(v___x_4170_, sizeof(void*)*1, v_hasTrace_3821_);
v___x_4171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4170_);
v___x_4172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4172_, 0, v___x_4171_);
v_exportedInfo_x3f_4158_ = v___x_4172_;
v___y_4159_ = v_a_3789_;
v___y_4160_ = v_a_3790_;
goto v___jp_4157_;
}
}
else
{
lean_dec(v___x_4165_);
v_exportedInfo_x3f_4158_ = v___x_4016_;
v___y_4159_ = v_a_3789_;
v___y_4160_ = v_a_3790_;
goto v___jp_4157_;
}
v___jp_4157_:
{
lean_object* v_toConstantVal_4161_; lean_object* v_name_4162_; lean_object* v___x_4163_; uint8_t v___x_4164_; 
v_toConstantVal_4161_ = lean_ctor_get(v_val_4156_, 0);
v_name_4162_ = lean_ctor_get(v_toConstantVal_4161_, 0);
lean_inc_ref(v_val_4156_);
v___x_4163_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4163_, 0, v_val_4156_);
v___x_4164_ = 1;
lean_inc(v_name_4162_);
v_fst_4083_ = v_name_4162_;
v_fst_4084_ = v___x_4163_;
v_snd_4085_ = v___x_4164_;
v_exportedInfo_x3f_4086_ = v_exportedInfo_x3f_4158_;
v___y_4087_ = v___y_4159_;
v___y_4088_ = v___y_4160_;
goto v___jp_4082_;
}
}
case 1:
{
lean_object* v_val_4173_; 
v_val_4173_ = lean_ctor_get(v_decl_3787_, 0);
lean_inc_ref(v_val_4173_);
v_defn_4131_ = v_val_4173_;
v___y_4132_ = v_a_3789_;
v___y_4133_ = v_a_3790_;
goto v___jp_4130_;
}
case 5:
{
lean_object* v_defns_4174_; 
v_defns_4174_ = lean_ctor_get(v_decl_3787_, 0);
if (lean_obj_tag(v_defns_4174_) == 1)
{
lean_object* v_tail_4175_; 
v_tail_4175_ = lean_ctor_get(v_defns_4174_, 1);
if (lean_obj_tag(v_tail_4175_) == 0)
{
lean_object* v_head_4176_; 
v_head_4176_ = lean_ctor_get(v_defns_4174_, 0);
lean_inc(v_head_4176_);
v_defn_4131_ = v_head_4176_;
v___y_4132_ = v_a_3789_;
v___y_4133_ = v_a_3790_;
goto v___jp_4130_;
}
else
{
lean_object* v___x_4177_; 
v___x_4177_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3787_, v_a_3789_, v_a_3790_);
return v___x_4177_;
}
}
else
{
lean_object* v___x_4178_; 
v___x_4178_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3787_, v_a_3789_, v_a_3790_);
return v___x_4178_;
}
}
case 3:
{
lean_object* v_val_4179_; lean_object* v_exportedInfo_x3f_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___x_4188_; lean_object* v_env_4189_; lean_object* v___x_4190_; 
v_val_4179_ = lean_ctor_get(v_decl_3787_, 0);
v___x_4188_ = lean_st_ref_get(v_a_3790_);
v_env_4189_ = lean_ctor_get(v___x_4188_, 0);
lean_inc_ref(v_env_4189_);
lean_dec(v___x_4188_);
v___x_4190_ = lean_st_ref_get(v_a_3790_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4191_; lean_object* v___x_4192_; uint8_t v_isModule_4193_; 
v_env_4191_ = lean_ctor_get(v___x_4190_, 0);
lean_inc_ref(v_env_4191_);
lean_dec(v___x_4190_);
v___x_4192_ = l_Lean_Environment_header(v_env_4189_);
lean_dec_ref(v_env_4189_);
v_isModule_4193_ = lean_ctor_get_uint8(v___x_4192_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4192_);
if (v_isModule_4193_ == 0)
{
lean_dec_ref(v_env_4191_);
v_exportedInfo_x3f_4181_ = v___x_4016_;
v___y_4182_ = v_a_3789_;
v___y_4183_ = v_a_3790_;
goto v___jp_4180_;
}
else
{
uint8_t v_isExporting_4194_; 
v_isExporting_4194_ = lean_ctor_get_uint8(v_env_4191_, sizeof(void*)*13);
lean_dec_ref(v_env_4191_);
if (v_isExporting_4194_ == 0)
{
lean_object* v_toConstantVal_4195_; uint8_t v_isUnsafe_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; 
v_toConstantVal_4195_ = lean_ctor_get(v_val_4179_, 0);
v_isUnsafe_4196_ = lean_ctor_get_uint8(v_val_4179_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_4195_);
v___x_4197_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4197_, 0, v_toConstantVal_4195_);
lean_ctor_set_uint8(v___x_4197_, sizeof(void*)*1, v_isUnsafe_4196_);
v___x_4198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4198_, 0, v___x_4197_);
v___x_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4199_, 0, v___x_4198_);
v_exportedInfo_x3f_4181_ = v___x_4199_;
v___y_4182_ = v_a_3789_;
v___y_4183_ = v_a_3790_;
goto v___jp_4180_;
}
else
{
v_exportedInfo_x3f_4181_ = v___x_4016_;
v___y_4182_ = v_a_3789_;
v___y_4183_ = v_a_3790_;
goto v___jp_4180_;
}
}
}
else
{
lean_dec(v___x_4190_);
lean_dec_ref(v_env_4189_);
v_exportedInfo_x3f_4181_ = v___x_4016_;
v___y_4182_ = v_a_3789_;
v___y_4183_ = v_a_3790_;
goto v___jp_4180_;
}
v___jp_4180_:
{
lean_object* v_toConstantVal_4184_; lean_object* v_name_4185_; lean_object* v___x_4186_; uint8_t v___x_4187_; 
v_toConstantVal_4184_ = lean_ctor_get(v_val_4179_, 0);
v_name_4185_ = lean_ctor_get(v_toConstantVal_4184_, 0);
lean_inc_ref(v_val_4179_);
v___x_4186_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4186_, 0, v_val_4179_);
v___x_4187_ = 3;
lean_inc(v_name_4185_);
v_fst_4083_ = v_name_4185_;
v_fst_4084_ = v___x_4186_;
v_snd_4085_ = v___x_4187_;
v_exportedInfo_x3f_4086_ = v_exportedInfo_x3f_4181_;
v___y_4087_ = v___y_4182_;
v___y_4088_ = v___y_4183_;
goto v___jp_4082_;
}
}
case 0:
{
lean_object* v_val_4200_; lean_object* v_toConstantVal_4201_; lean_object* v_name_4202_; lean_object* v___x_4203_; uint8_t v___x_4204_; 
v_val_4200_ = lean_ctor_get(v_decl_3787_, 0);
v_toConstantVal_4201_ = lean_ctor_get(v_val_4200_, 0);
v_name_4202_ = lean_ctor_get(v_toConstantVal_4201_, 0);
lean_inc_ref(v_val_4200_);
v___x_4203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4203_, 0, v_val_4200_);
v___x_4204_ = 2;
lean_inc(v_name_4202_);
v_fst_4083_ = v_name_4202_;
v_fst_4084_ = v___x_4203_;
v_snd_4085_ = v___x_4204_;
v_exportedInfo_x3f_4086_ = v___x_4016_;
v___y_4087_ = v_a_3789_;
v___y_4088_ = v_a_3790_;
goto v___jp_4082_;
}
default: 
{
lean_object* v___x_4205_; 
v___x_4205_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3787_, v_a_3789_, v_a_3790_);
return v___x_4205_;
}
}
v___jp_4017_:
{
lean_object* v___x_4024_; uint8_t v___x_4025_; 
lean_inc(v_decl_3787_);
v___x_4024_ = l_Lean_Declaration_getTopLevelNames(v_decl_3787_);
v___x_4025_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v___x_4024_);
lean_dec(v___x_4024_);
if (v___x_4025_ == 0)
{
if (lean_obj_tag(v___y_4021_) == 0)
{
lean_object* v_toCold_4026_; lean_object* v_options_4027_; uint8_t v_hasTrace_4028_; 
v_toCold_4026_ = lean_ctor_get(v___y_4022_, 0);
v_options_4027_ = lean_ctor_get(v_toCold_4026_, 2);
v_hasTrace_4028_ = lean_ctor_get_uint8(v_options_4027_, sizeof(void*)*1);
if (v_hasTrace_4028_ == 0)
{
v___y_3958_ = v___y_4018_;
v___y_3959_ = v___y_4019_;
v___y_3960_ = v___y_4020_;
v___y_3961_ = v___y_4022_;
v___y_3962_ = v___y_4023_;
goto v___jp_3957_;
}
else
{
lean_object* v_inheritedTraceOptions_4029_; lean_object* v___x_4030_; uint8_t v___x_4031_; 
v_inheritedTraceOptions_4029_ = lean_ctor_get(v_toCold_4026_, 11);
v___x_4030_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4031_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4029_, v_options_4027_, v___x_4030_);
if (v___x_4031_ == 0)
{
v___y_3958_ = v___y_4018_;
v___y_3959_ = v___y_4019_;
v___y_3960_ = v___y_4020_;
v___y_3961_ = v___y_4022_;
v___y_3962_ = v___y_4023_;
goto v___jp_3957_;
}
else
{
lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4032_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_4033_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4032_, v___y_4022_, v___y_4023_);
if (lean_obj_tag(v___x_4033_) == 0)
{
lean_dec_ref_known(v___x_4033_, 1);
v___y_3958_ = v___y_4018_;
v___y_3959_ = v___y_4019_;
v___y_3960_ = v___y_4020_;
v___y_3961_ = v___y_4022_;
v___y_3962_ = v___y_4023_;
goto v___jp_3957_;
}
else
{
lean_dec_ref(v___y_4019_);
lean_dec(v___y_4018_);
lean_dec(v_decl_3787_);
return v___x_4033_;
}
}
}
}
else
{
lean_object* v___x_4034_; lean_object* v_env_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; uint8_t v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4034_ = lean_st_ref_get(v___y_4023_);
v_env_4035_ = lean_ctor_get(v___x_4034_, 0);
lean_inc_ref(v_env_4035_);
lean_dec(v___x_4034_);
v___x_4036_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_4037_ = lean_box(1);
v___x_4038_ = 0;
v___x_4039_ = lean_box(v___x_3964_);
lean_inc(v___y_4018_);
v___x_4040_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_4039_, v___x_4036_, v_env_4035_, v___y_4018_, v___x_4037_, v___x_4038_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v___x_4041_; lean_object* v_env_4042_; lean_object* v_nextMacroScope_4043_; lean_object* v_ngen_4044_; lean_object* v_auxDeclNGen_4045_; lean_object* v_traceState_4046_; lean_object* v_recordedDeps_4047_; lean_object* v_messages_4048_; lean_object* v_infoState_4049_; lean_object* v_snapshotTasks_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4060_; 
v___x_4041_ = lean_st_ref_take(v___y_4023_);
v_env_4042_ = lean_ctor_get(v___x_4041_, 0);
v_nextMacroScope_4043_ = lean_ctor_get(v___x_4041_, 1);
v_ngen_4044_ = lean_ctor_get(v___x_4041_, 2);
v_auxDeclNGen_4045_ = lean_ctor_get(v___x_4041_, 3);
v_traceState_4046_ = lean_ctor_get(v___x_4041_, 4);
v_recordedDeps_4047_ = lean_ctor_get(v___x_4041_, 6);
v_messages_4048_ = lean_ctor_get(v___x_4041_, 7);
v_infoState_4049_ = lean_ctor_get(v___x_4041_, 8);
v_snapshotTasks_4050_ = lean_ctor_get(v___x_4041_, 9);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4041_);
if (v_isSharedCheck_4060_ == 0)
{
lean_object* v_unused_4061_; 
v_unused_4061_ = lean_ctor_get(v___x_4041_, 5);
lean_dec(v_unused_4061_);
v___x_4052_ = v___x_4041_;
v_isShared_4053_ = v_isSharedCheck_4060_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_snapshotTasks_4050_);
lean_inc(v_infoState_4049_);
lean_inc(v_messages_4048_);
lean_inc(v_recordedDeps_4047_);
lean_inc(v_traceState_4046_);
lean_inc(v_auxDeclNGen_4045_);
lean_inc(v_ngen_4044_);
lean_inc(v_nextMacroScope_4043_);
lean_inc(v_env_4042_);
lean_dec(v___x_4041_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4060_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4057_; 
v___x_4054_ = lean_box(v___y_4020_);
lean_inc(v___y_4018_);
v___x_4055_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_4036_, v_env_4042_, v___y_4018_, v___x_4054_, v___x_4025_);
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 5, v___x_3992_);
lean_ctor_set(v___x_4052_, 0, v___x_4055_);
v___x_4057_ = v___x_4052_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v___x_4055_);
lean_ctor_set(v_reuseFailAlloc_4059_, 1, v_nextMacroScope_4043_);
lean_ctor_set(v_reuseFailAlloc_4059_, 2, v_ngen_4044_);
lean_ctor_set(v_reuseFailAlloc_4059_, 3, v_auxDeclNGen_4045_);
lean_ctor_set(v_reuseFailAlloc_4059_, 4, v_traceState_4046_);
lean_ctor_set(v_reuseFailAlloc_4059_, 5, v___x_3992_);
lean_ctor_set(v_reuseFailAlloc_4059_, 6, v_recordedDeps_4047_);
lean_ctor_set(v_reuseFailAlloc_4059_, 7, v_messages_4048_);
lean_ctor_set(v_reuseFailAlloc_4059_, 8, v_infoState_4049_);
lean_ctor_set(v_reuseFailAlloc_4059_, 9, v_snapshotTasks_4050_);
v___x_4057_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
lean_object* v___x_4058_; 
v___x_4058_ = lean_st_ref_put(v___y_4023_, v___x_4057_);
v___y_3936_ = v___y_4018_;
v___y_3937_ = v___y_4019_;
v___y_3938_ = v___y_4020_;
v_exportedInfo_x3f_3939_ = v___y_4021_;
v___y_3940_ = v___y_4022_;
v___y_3941_ = v___y_4023_;
goto v___jp_3935_;
}
}
}
else
{
lean_dec_ref_known(v___x_4040_, 1);
v___y_3936_ = v___y_4018_;
v___y_3937_ = v___y_4019_;
v___y_3938_ = v___y_4020_;
v_exportedInfo_x3f_3939_ = v___y_4021_;
v___y_3940_ = v___y_4022_;
v___y_3941_ = v___y_4023_;
goto v___jp_3935_;
}
}
}
else
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v_a_4064_; uint8_t v___x_4065_; 
lean_dec(v___y_4021_);
v___x_4062_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_4063_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v___x_4062_, v___y_4022_);
v_a_4064_ = lean_ctor_get(v___x_4063_, 0);
lean_inc(v_a_4064_);
lean_dec_ref(v___x_4063_);
v___x_4065_ = lean_unbox(v_a_4064_);
lean_dec(v_a_4064_);
if (v___x_4065_ == 0)
{
lean_object* v_toCold_4066_; lean_object* v_options_4067_; uint8_t v_hasTrace_4068_; 
v_toCold_4066_ = lean_ctor_get(v___y_4022_, 0);
v_options_4067_ = lean_ctor_get(v_toCold_4066_, 2);
v_hasTrace_4068_ = lean_ctor_get_uint8(v_options_4067_, sizeof(void*)*1);
if (v_hasTrace_4068_ == 0)
{
v___y_3936_ = v___y_4018_;
v___y_3937_ = v___y_4019_;
v___y_3938_ = v___y_4020_;
v_exportedInfo_x3f_3939_ = v___x_4016_;
v___y_3940_ = v___y_4022_;
v___y_3941_ = v___y_4023_;
goto v___jp_3935_;
}
else
{
lean_object* v_inheritedTraceOptions_4069_; lean_object* v___x_4070_; uint8_t v___x_4071_; 
v_inheritedTraceOptions_4069_ = lean_ctor_get(v_toCold_4066_, 11);
v___x_4070_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4071_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4069_, v_options_4067_, v___x_4070_);
if (v___x_4071_ == 0)
{
v___y_3936_ = v___y_4018_;
v___y_3937_ = v___y_4019_;
v___y_3938_ = v___y_4020_;
v_exportedInfo_x3f_3939_ = v___x_4016_;
v___y_3940_ = v___y_4022_;
v___y_3941_ = v___y_4023_;
goto v___jp_3935_;
}
else
{
lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4072_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_4073_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4072_, v___y_4022_, v___y_4023_);
if (lean_obj_tag(v___x_4073_) == 0)
{
lean_dec_ref_known(v___x_4073_, 1);
v___y_3936_ = v___y_4018_;
v___y_3937_ = v___y_4019_;
v___y_3938_ = v___y_4020_;
v_exportedInfo_x3f_3939_ = v___x_4016_;
v___y_3940_ = v___y_4022_;
v___y_3941_ = v___y_4023_;
goto v___jp_3935_;
}
else
{
lean_dec_ref(v___y_4019_);
lean_dec(v___y_4018_);
lean_dec(v_decl_3787_);
return v___x_4073_;
}
}
}
}
else
{
lean_object* v_toCold_4074_; lean_object* v_options_4075_; uint8_t v_hasTrace_4076_; 
v_toCold_4074_ = lean_ctor_get(v___y_4022_, 0);
v_options_4075_ = lean_ctor_get(v_toCold_4074_, 2);
v_hasTrace_4076_ = lean_ctor_get_uint8(v_options_4075_, sizeof(void*)*1);
if (v_hasTrace_4076_ == 0)
{
v___y_3951_ = v___y_4018_;
v___y_3952_ = v___y_4019_;
v___y_3953_ = v___y_4020_;
v___y_3954_ = v___y_4022_;
v___y_3955_ = v___y_4023_;
goto v___jp_3950_;
}
else
{
lean_object* v_inheritedTraceOptions_4077_; lean_object* v___x_4078_; uint8_t v___x_4079_; 
v_inheritedTraceOptions_4077_ = lean_ctor_get(v_toCold_4074_, 11);
v___x_4078_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4079_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4077_, v_options_4075_, v___x_4078_);
if (v___x_4079_ == 0)
{
v___y_3951_ = v___y_4018_;
v___y_3952_ = v___y_4019_;
v___y_3953_ = v___y_4020_;
v___y_3954_ = v___y_4022_;
v___y_3955_ = v___y_4023_;
goto v___jp_3950_;
}
else
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_4081_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4080_, v___y_4022_, v___y_4023_);
if (lean_obj_tag(v___x_4081_) == 0)
{
lean_dec_ref_known(v___x_4081_, 1);
v___y_3951_ = v___y_4018_;
v___y_3952_ = v___y_4019_;
v___y_3953_ = v___y_4020_;
v___y_3954_ = v___y_4022_;
v___y_3955_ = v___y_4023_;
goto v___jp_3950_;
}
else
{
lean_dec_ref(v___y_4019_);
lean_dec(v___y_4018_);
lean_dec(v_decl_3787_);
return v___x_4081_;
}
}
}
}
}
}
v___jp_4082_:
{
lean_object* v___x_4089_; lean_object* v_env_4090_; uint8_t v___x_4091_; 
v___x_4089_ = lean_st_ref_get(v___y_4088_);
v_env_4090_ = lean_ctor_get(v___x_4089_, 0);
lean_inc_ref(v_env_4090_);
lean_dec(v___x_4089_);
v___x_4091_ = l_Lean_Environment_containsOnBranch(v_env_4090_, v_fst_4083_);
lean_dec_ref(v_env_4090_);
if (v___x_4091_ == 0)
{
v___y_4018_ = v_fst_4083_;
v___y_4019_ = v_fst_4084_;
v___y_4020_ = v_snd_4085_;
v___y_4021_ = v_exportedInfo_x3f_4086_;
v___y_4022_ = v___y_4087_;
v___y_4023_ = v___y_4088_;
goto v___jp_4017_;
}
else
{
lean_object* v___x_4092_; lean_object* v_env_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; 
lean_dec(v_exportedInfo_x3f_4086_);
lean_dec_ref(v_fst_4084_);
lean_dec(v_decl_3787_);
v___x_4092_ = lean_st_ref_get(v___y_4088_);
v_env_4093_ = lean_ctor_get(v___x_4092_, 0);
lean_inc_ref(v_env_4093_);
lean_dec(v___x_4092_);
v___x_4094_ = lean_elab_environment_to_kernel_env(v_env_4093_);
v___x_4095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4095_, 0, v___x_4094_);
lean_ctor_set(v___x_4095_, 1, v_fst_4083_);
v___x_4096_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_4095_, v___y_4087_, v___y_4088_);
return v___x_4096_;
}
}
v___jp_4097_:
{
lean_object* v_toConstantVal_4102_; lean_object* v_name_4103_; lean_object* v___x_4104_; 
v_toConstantVal_4102_ = lean_ctor_get(v___y_4098_, 0);
v_name_4103_ = lean_ctor_get(v_toConstantVal_4102_, 0);
lean_inc(v_name_4103_);
v___x_4104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4104_, 0, v___y_4098_);
v_fst_4083_ = v_name_4103_;
v_fst_4084_ = v___x_4104_;
v_snd_4085_ = v___x_3964_;
v_exportedInfo_x3f_4086_ = v_exportedInfo_x3f_4099_;
v___y_4087_ = v___y_4100_;
v___y_4088_ = v___y_4101_;
goto v___jp_4082_;
}
v___jp_4105_:
{
lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4111_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4111_, 0, v___y_4109_);
lean_ctor_set_uint8(v___x_4111_, sizeof(void*)*1, v___y_4110_);
v___x_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4111_);
v___x_4113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4113_, 0, v___x_4112_);
v___y_4098_ = v___y_4107_;
v_exportedInfo_x3f_4099_ = v___x_4113_;
v___y_4100_ = v___y_4106_;
v___y_4101_ = v___y_4108_;
goto v___jp_4097_;
}
v___jp_4114_:
{
uint8_t v___x_4121_; uint8_t v___x_4122_; 
v___x_4121_ = 1;
v___x_4122_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_4117_, v___x_4121_);
if (v___x_4122_ == 0)
{
v___y_4106_ = v___y_4119_;
v___y_4107_ = v___y_4115_;
v___y_4108_ = v___y_4120_;
v___y_4109_ = v_toConstantVal_4116_;
v___y_4110_ = v___y_4118_;
goto v___jp_4105_;
}
else
{
v___y_4106_ = v___y_4119_;
v___y_4107_ = v___y_4115_;
v___y_4108_ = v___y_4120_;
v___y_4109_ = v_toConstantVal_4116_;
v___y_4110_ = v_hasTrace_3821_;
goto v___jp_4105_;
}
}
v___jp_4123_:
{
lean_object* v_toConstantVal_4128_; uint8_t v_safety_4129_; 
v_toConstantVal_4128_ = lean_ctor_get(v___y_4124_, 0);
lean_inc_ref(v_toConstantVal_4128_);
v_safety_4129_ = lean_ctor_get_uint8(v___y_4124_, sizeof(void*)*4);
v___y_4115_ = v___y_4124_;
v_toConstantVal_4116_ = v_toConstantVal_4128_;
v_safety_4117_ = v_safety_4129_;
v___y_4118_ = v___y_4125_;
v___y_4119_ = v___y_4126_;
v___y_4120_ = v___y_4127_;
goto v___jp_4114_;
}
v___jp_4130_:
{
lean_object* v___x_4134_; lean_object* v_env_4135_; lean_object* v___x_4136_; 
v___x_4134_ = lean_st_ref_get(v___y_4133_);
v_env_4135_ = lean_ctor_get(v___x_4134_, 0);
lean_inc_ref(v_env_4135_);
lean_dec(v___x_4134_);
v___x_4136_ = lean_st_ref_get(v___y_4133_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4137_; lean_object* v___x_4138_; uint8_t v_isModule_4139_; 
v_env_4137_ = lean_ctor_get(v___x_4136_, 0);
lean_inc_ref(v_env_4137_);
lean_dec(v___x_4136_);
v___x_4138_ = l_Lean_Environment_header(v_env_4135_);
lean_dec_ref(v_env_4135_);
v_isModule_4139_ = lean_ctor_get_uint8(v___x_4138_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4138_);
if (v_isModule_4139_ == 0)
{
lean_dec_ref(v_env_4137_);
v___y_4098_ = v_defn_4131_;
v_exportedInfo_x3f_4099_ = v___x_4016_;
v___y_4100_ = v___y_4132_;
v___y_4101_ = v___y_4133_;
goto v___jp_4097_;
}
else
{
uint8_t v_isExporting_4140_; 
v_isExporting_4140_ = lean_ctor_get_uint8(v_env_4137_, sizeof(void*)*13);
lean_dec_ref(v_env_4137_);
if (v_isExporting_4140_ == 0)
{
lean_object* v_toCold_4141_; lean_object* v_options_4142_; uint8_t v_hasTrace_4143_; 
v_toCold_4141_ = lean_ctor_get(v___y_4132_, 0);
v_options_4142_ = lean_ctor_get(v_toCold_4141_, 2);
v_hasTrace_4143_ = lean_ctor_get_uint8(v_options_4142_, sizeof(void*)*1);
if (v_hasTrace_4143_ == 0)
{
v___y_4124_ = v_defn_4131_;
v___y_4125_ = v_isModule_4139_;
v___y_4126_ = v___y_4132_;
v___y_4127_ = v___y_4133_;
goto v___jp_4123_;
}
else
{
lean_object* v_inheritedTraceOptions_4144_; lean_object* v___x_4145_; uint8_t v___x_4146_; 
v_inheritedTraceOptions_4144_ = lean_ctor_get(v_toCold_4141_, 11);
v___x_4145_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4146_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4144_, v_options_4142_, v___x_4145_);
if (v___x_4146_ == 0)
{
v___y_4124_ = v_defn_4131_;
v___y_4125_ = v_isModule_4139_;
v___y_4126_ = v___y_4132_;
v___y_4127_ = v___y_4133_;
goto v___jp_4123_;
}
else
{
lean_object* v_toConstantVal_4147_; uint8_t v_safety_4148_; lean_object* v_name_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; 
v_toConstantVal_4147_ = lean_ctor_get(v_defn_4131_, 0);
lean_inc_ref(v_toConstantVal_4147_);
v_safety_4148_ = lean_ctor_get_uint8(v_defn_4131_, sizeof(void*)*4);
v_name_4149_ = lean_ctor_get(v_toConstantVal_4147_, 0);
v___x_4150_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_4149_);
v___x_4151_ = l_Lean_MessageData_ofName(v_name_4149_);
v___x_4152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4152_, 0, v___x_4150_);
lean_ctor_set(v___x_4152_, 1, v___x_4151_);
v___x_4153_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4152_);
lean_ctor_set(v___x_4154_, 1, v___x_4153_);
v___x_4155_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4154_, v___y_4132_, v___y_4133_);
if (lean_obj_tag(v___x_4155_) == 0)
{
lean_dec_ref_known(v___x_4155_, 1);
v___y_4115_ = v_defn_4131_;
v_toConstantVal_4116_ = v_toConstantVal_4147_;
v_safety_4117_ = v_safety_4148_;
v___y_4118_ = v_isModule_4139_;
v___y_4119_ = v___y_4132_;
v___y_4120_ = v___y_4133_;
goto v___jp_4114_;
}
else
{
lean_dec_ref(v_toConstantVal_4147_);
lean_dec_ref(v_defn_4131_);
lean_dec(v_decl_3787_);
return v___x_4155_;
}
}
}
}
else
{
v___y_4098_ = v_defn_4131_;
v_exportedInfo_x3f_4099_ = v___x_4016_;
v___y_4100_ = v___y_4132_;
v___y_4101_ = v___y_4133_;
goto v___jp_4097_;
}
}
}
else
{
lean_dec(v___x_4136_);
lean_dec_ref(v_env_4135_);
v___y_4098_ = v_defn_4131_;
v_exportedInfo_x3f_4099_ = v___x_4016_;
v___y_4100_ = v___y_4132_;
v___y_4101_ = v___y_4133_;
goto v___jp_4097_;
}
}
}
}
}
}
}
else
{
lean_object* v___f_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; uint8_t v___x_4215_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v_a_4219_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v_a_4234_; lean_object* v___y_4237_; lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4264_; lean_object* v___y_4265_; lean_object* v_a_4266_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v_a_4278_; lean_object* v___y_4281_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4294_; lean_object* v___y_4295_; lean_object* v___y_4296_; lean_object* v___y_4297_; lean_object* v___y_4301_; lean_object* v___y_4302_; lean_object* v___y_4303_; lean_object* v___y_4304_; 
lean_inc(v_decl_3787_);
v___f_4212_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed), 5, 1);
lean_closure_set(v___f_4212_, 0, v_decl_3787_);
v___x_4213_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_4214_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4215_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3820_, v_options_3819_, v___x_4214_);
if (v___x_4215_ == 0)
{
lean_object* v___x_4539_; uint8_t v___x_4540_; lean_object* v___y_4542_; lean_object* v___y_4543_; lean_object* v___y_4544_; lean_object* v___y_4545_; lean_object* v___y_4546_; lean_object* v___y_4547_; lean_object* v___y_4548_; lean_object* v___y_4549_; lean_object* v___y_4550_; lean_object* v___y_4551_; lean_object* v___y_4552_; lean_object* v___y_4624_; lean_object* v___y_4625_; lean_object* v___y_4626_; lean_object* v___y_4627_; lean_object* v___y_4628_; uint8_t v___y_4629_; lean_object* v___y_4630_; lean_object* v___y_4631_; lean_object* v___y_4653_; uint8_t v___y_4654_; lean_object* v___y_4655_; lean_object* v_exportedInfo_x3f_4656_; lean_object* v___y_4657_; lean_object* v___y_4658_; lean_object* v___y_4668_; uint8_t v___y_4669_; lean_object* v___y_4670_; lean_object* v___y_4671_; lean_object* v___y_4672_; lean_object* v___y_4675_; uint8_t v___y_4676_; lean_object* v___y_4677_; lean_object* v___y_4678_; lean_object* v___y_4679_; 
v___x_4539_ = l_Lean_trace_profiler;
v___x_4540_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3819_, v___x_4539_);
if (v___x_4540_ == 0)
{
lean_object* v___x_4681_; lean_object* v_env_4682_; lean_object* v_nextMacroScope_4683_; lean_object* v_ngen_4684_; lean_object* v_auxDeclNGen_4685_; lean_object* v_traceState_4686_; lean_object* v_recordedDeps_4687_; lean_object* v_messages_4688_; lean_object* v_infoState_4689_; lean_object* v_snapshotTasks_4690_; lean_object* v___x_4692_; uint8_t v_isShared_4693_; uint8_t v_isSharedCheck_4929_; 
lean_dec_ref(v___f_4212_);
v___x_4681_ = lean_st_ref_take(v_a_3790_);
v_env_4682_ = lean_ctor_get(v___x_4681_, 0);
v_nextMacroScope_4683_ = lean_ctor_get(v___x_4681_, 1);
v_ngen_4684_ = lean_ctor_get(v___x_4681_, 2);
v_auxDeclNGen_4685_ = lean_ctor_get(v___x_4681_, 3);
v_traceState_4686_ = lean_ctor_get(v___x_4681_, 4);
v_recordedDeps_4687_ = lean_ctor_get(v___x_4681_, 6);
v_messages_4688_ = lean_ctor_get(v___x_4681_, 7);
v_infoState_4689_ = lean_ctor_get(v___x_4681_, 8);
v_snapshotTasks_4690_ = lean_ctor_get(v___x_4681_, 9);
v_isSharedCheck_4929_ = !lean_is_exclusive(v___x_4681_);
if (v_isSharedCheck_4929_ == 0)
{
lean_object* v_unused_4930_; 
v_unused_4930_ = lean_ctor_get(v___x_4681_, 5);
lean_dec(v_unused_4930_);
v___x_4692_ = v___x_4681_;
v_isShared_4693_ = v_isSharedCheck_4929_;
goto v_resetjp_4691_;
}
else
{
lean_inc(v_snapshotTasks_4690_);
lean_inc(v_infoState_4689_);
lean_inc(v_messages_4688_);
lean_inc(v_recordedDeps_4687_);
lean_inc(v_traceState_4686_);
lean_inc(v_auxDeclNGen_4685_);
lean_inc(v_ngen_4684_);
lean_inc(v_nextMacroScope_4683_);
lean_inc(v_env_4682_);
lean_dec(v___x_4681_);
v___x_4692_ = lean_box(0);
v_isShared_4693_ = v_isSharedCheck_4929_;
goto v_resetjp_4691_;
}
v_resetjp_4691_:
{
lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4698_; 
lean_inc(v_decl_3787_);
v___x_4694_ = l_Lean_Declaration_getNames(v_decl_3787_);
v___x_4695_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_4682_, v___x_4694_);
v___x_4696_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_4693_ == 0)
{
lean_ctor_set(v___x_4692_, 5, v___x_4696_);
lean_ctor_set(v___x_4692_, 0, v___x_4695_);
v___x_4698_ = v___x_4692_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v___x_4695_);
lean_ctor_set(v_reuseFailAlloc_4928_, 1, v_nextMacroScope_4683_);
lean_ctor_set(v_reuseFailAlloc_4928_, 2, v_ngen_4684_);
lean_ctor_set(v_reuseFailAlloc_4928_, 3, v_auxDeclNGen_4685_);
lean_ctor_set(v_reuseFailAlloc_4928_, 4, v_traceState_4686_);
lean_ctor_set(v_reuseFailAlloc_4928_, 5, v___x_4696_);
lean_ctor_set(v_reuseFailAlloc_4928_, 6, v_recordedDeps_4687_);
lean_ctor_set(v_reuseFailAlloc_4928_, 7, v_messages_4688_);
lean_ctor_set(v_reuseFailAlloc_4928_, 8, v_infoState_4689_);
lean_ctor_set(v_reuseFailAlloc_4928_, 9, v_snapshotTasks_4690_);
v___x_4698_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v_env_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v_env_4704_; lean_object* v_nextMacroScope_4705_; lean_object* v_ngen_4706_; lean_object* v_auxDeclNGen_4707_; lean_object* v_traceState_4708_; lean_object* v_recordedDeps_4709_; lean_object* v_messages_4710_; lean_object* v_infoState_4711_; lean_object* v_snapshotTasks_4712_; lean_object* v___x_4714_; uint8_t v_isShared_4715_; uint8_t v_isSharedCheck_4926_; 
v___x_4699_ = lean_st_ref_put(v_a_3790_, v___x_4698_);
v___x_4700_ = lean_st_ref_get(v_a_3790_);
v_env_4701_ = lean_ctor_get(v___x_4700_, 0);
lean_inc_ref(v_env_4701_);
lean_dec(v___x_4700_);
v___x_4702_ = l_Lean_getExplicitRewriteRules(v_env_4701_);
v___x_4703_ = lean_st_ref_take(v_a_3790_);
v_env_4704_ = lean_ctor_get(v___x_4703_, 0);
v_nextMacroScope_4705_ = lean_ctor_get(v___x_4703_, 1);
v_ngen_4706_ = lean_ctor_get(v___x_4703_, 2);
v_auxDeclNGen_4707_ = lean_ctor_get(v___x_4703_, 3);
v_traceState_4708_ = lean_ctor_get(v___x_4703_, 4);
v_recordedDeps_4709_ = lean_ctor_get(v___x_4703_, 6);
v_messages_4710_ = lean_ctor_get(v___x_4703_, 7);
v_infoState_4711_ = lean_ctor_get(v___x_4703_, 8);
v_snapshotTasks_4712_ = lean_ctor_get(v___x_4703_, 9);
v_isSharedCheck_4926_ = !lean_is_exclusive(v___x_4703_);
if (v_isSharedCheck_4926_ == 0)
{
lean_object* v_unused_4927_; 
v_unused_4927_ = lean_ctor_get(v___x_4703_, 5);
lean_dec(v_unused_4927_);
v___x_4714_ = v___x_4703_;
v_isShared_4715_ = v_isSharedCheck_4926_;
goto v_resetjp_4713_;
}
else
{
lean_inc(v_snapshotTasks_4712_);
lean_inc(v_infoState_4711_);
lean_inc(v_messages_4710_);
lean_inc(v_recordedDeps_4709_);
lean_inc(v_traceState_4708_);
lean_inc(v_auxDeclNGen_4707_);
lean_inc(v_ngen_4706_);
lean_inc(v_nextMacroScope_4705_);
lean_inc(v_env_4704_);
lean_dec(v___x_4703_);
v___x_4714_ = lean_box(0);
v_isShared_4715_ = v_isSharedCheck_4926_;
goto v_resetjp_4713_;
}
v_resetjp_4713_:
{
lean_object* v___x_4716_; lean_object* v___x_4718_; 
lean_inc(v_decl_3787_);
v___x_4716_ = l___private_Lean_AddDecl_0__Lean_recordRewriteSets(v_decl_3787_, v___x_4702_, v_env_4704_);
if (v_isShared_4715_ == 0)
{
lean_ctor_set(v___x_4714_, 5, v___x_4696_);
lean_ctor_set(v___x_4714_, 0, v___x_4716_);
v___x_4718_ = v___x_4714_;
goto v_reusejp_4717_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v___x_4716_);
lean_ctor_set(v_reuseFailAlloc_4925_, 1, v_nextMacroScope_4705_);
lean_ctor_set(v_reuseFailAlloc_4925_, 2, v_ngen_4706_);
lean_ctor_set(v_reuseFailAlloc_4925_, 3, v_auxDeclNGen_4707_);
lean_ctor_set(v_reuseFailAlloc_4925_, 4, v_traceState_4708_);
lean_ctor_set(v_reuseFailAlloc_4925_, 5, v___x_4696_);
lean_ctor_set(v_reuseFailAlloc_4925_, 6, v_recordedDeps_4709_);
lean_ctor_set(v_reuseFailAlloc_4925_, 7, v_messages_4710_);
lean_ctor_set(v_reuseFailAlloc_4925_, 8, v_infoState_4711_);
lean_ctor_set(v_reuseFailAlloc_4925_, 9, v_snapshotTasks_4712_);
v___x_4718_ = v_reuseFailAlloc_4925_;
goto v_reusejp_4717_;
}
v_reusejp_4717_:
{
lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___y_4722_; uint8_t v___y_4723_; lean_object* v___y_4724_; lean_object* v___y_4725_; lean_object* v___y_4726_; lean_object* v___y_4727_; lean_object* v_fst_4784_; lean_object* v_fst_4785_; uint8_t v_snd_4786_; lean_object* v_exportedInfo_x3f_4787_; lean_object* v___y_4788_; lean_object* v___y_4789_; lean_object* v___y_4799_; lean_object* v_exportedInfo_x3f_4800_; lean_object* v___y_4801_; lean_object* v___y_4802_; lean_object* v___y_4807_; lean_object* v___y_4808_; lean_object* v___y_4809_; lean_object* v___y_4810_; uint8_t v___y_4811_; uint8_t v___y_4816_; lean_object* v___y_4817_; lean_object* v_toConstantVal_4818_; uint8_t v_safety_4819_; lean_object* v___y_4820_; lean_object* v___y_4821_; uint8_t v___y_4825_; lean_object* v___y_4826_; lean_object* v___y_4827_; lean_object* v___y_4828_; lean_object* v_defn_4832_; lean_object* v___y_4833_; lean_object* v___y_4834_; 
v___x_4719_ = lean_st_ref_put(v_a_3790_, v___x_4718_);
v___x_4720_ = lean_box(0);
switch(lean_obj_tag(v_decl_3787_))
{
case 2:
{
lean_object* v_val_4856_; lean_object* v_exportedInfo_x3f_4858_; lean_object* v___y_4859_; lean_object* v___y_4860_; lean_object* v___y_4866_; lean_object* v___y_4867_; lean_object* v___x_4872_; 
v_val_4856_ = lean_ctor_get(v_decl_3787_, 0);
v___x_4872_ = lean_st_ref_get(v_a_3790_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4873_; lean_object* v___x_4874_; uint8_t v_isModule_4875_; 
v_env_4873_ = lean_ctor_get(v___x_4872_, 0);
lean_inc_ref(v_env_4873_);
lean_dec(v___x_4872_);
v___x_4874_ = l_Lean_Environment_header(v_env_4873_);
lean_dec_ref(v_env_4873_);
v_isModule_4875_ = lean_ctor_get_uint8(v___x_4874_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4874_);
if (v_isModule_4875_ == 0)
{
v_exportedInfo_x3f_4858_ = v___x_4720_;
v___y_4859_ = v_a_3789_;
v___y_4860_ = v_a_3790_;
goto v___jp_4857_;
}
else
{
if (v___x_4215_ == 0)
{
v___y_4866_ = v_a_3789_;
v___y_4867_ = v_a_3790_;
goto v___jp_4865_;
}
else
{
lean_object* v_toConstantVal_4876_; lean_object* v_name_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; 
v_toConstantVal_4876_ = lean_ctor_get(v_val_4856_, 0);
v_name_4877_ = lean_ctor_get(v_toConstantVal_4876_, 0);
v___x_4878_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
lean_inc(v_name_4877_);
v___x_4879_ = l_Lean_MessageData_ofName(v_name_4877_);
v___x_4880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4880_, 0, v___x_4878_);
lean_ctor_set(v___x_4880_, 1, v___x_4879_);
v___x_4881_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4882_, 0, v___x_4880_);
lean_ctor_set(v___x_4882_, 1, v___x_4881_);
v___x_4883_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4882_, v_a_3789_, v_a_3790_);
if (lean_obj_tag(v___x_4883_) == 0)
{
lean_dec_ref_known(v___x_4883_, 1);
v___y_4866_ = v_a_3789_;
v___y_4867_ = v_a_3790_;
goto v___jp_4865_;
}
else
{
lean_dec_ref_known(v_decl_3787_, 1);
return v___x_4883_;
}
}
}
}
else
{
lean_dec(v___x_4872_);
v_exportedInfo_x3f_4858_ = v___x_4720_;
v___y_4859_ = v_a_3789_;
v___y_4860_ = v_a_3790_;
goto v___jp_4857_;
}
v___jp_4857_:
{
lean_object* v_toConstantVal_4861_; lean_object* v_name_4862_; lean_object* v___x_4863_; uint8_t v___x_4864_; 
v_toConstantVal_4861_ = lean_ctor_get(v_val_4856_, 0);
v_name_4862_ = lean_ctor_get(v_toConstantVal_4861_, 0);
lean_inc_ref(v_val_4856_);
v___x_4863_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4863_, 0, v_val_4856_);
v___x_4864_ = 1;
lean_inc(v_name_4862_);
v_fst_4784_ = v_name_4862_;
v_fst_4785_ = v___x_4863_;
v_snd_4786_ = v___x_4864_;
v_exportedInfo_x3f_4787_ = v_exportedInfo_x3f_4858_;
v___y_4788_ = v___y_4859_;
v___y_4789_ = v___y_4860_;
goto v___jp_4783_;
}
v___jp_4865_:
{
lean_object* v_toConstantVal_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; 
v_toConstantVal_4868_ = lean_ctor_get(v_val_4856_, 0);
lean_inc_ref(v_toConstantVal_4868_);
v___x_4869_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4869_, 0, v_toConstantVal_4868_);
lean_ctor_set_uint8(v___x_4869_, sizeof(void*)*1, v___x_4540_);
v___x_4870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4870_, 0, v___x_4869_);
v___x_4871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4871_, 0, v___x_4870_);
v_exportedInfo_x3f_4858_ = v___x_4871_;
v___y_4859_ = v___y_4866_;
v___y_4860_ = v___y_4867_;
goto v___jp_4857_;
}
}
case 1:
{
lean_object* v_val_4884_; 
v_val_4884_ = lean_ctor_get(v_decl_3787_, 0);
lean_inc_ref(v_val_4884_);
v_defn_4832_ = v_val_4884_;
v___y_4833_ = v_a_3789_;
v___y_4834_ = v_a_3790_;
goto v___jp_4831_;
}
case 5:
{
lean_object* v_defns_4885_; 
v_defns_4885_ = lean_ctor_get(v_decl_3787_, 0);
if (lean_obj_tag(v_defns_4885_) == 1)
{
lean_object* v_tail_4886_; 
v_tail_4886_ = lean_ctor_get(v_defns_4885_, 1);
if (lean_obj_tag(v_tail_4886_) == 0)
{
lean_object* v_head_4887_; 
v_head_4887_ = lean_ctor_get(v_defns_4885_, 0);
lean_inc(v_head_4887_);
v_defn_4832_ = v_head_4887_;
v___y_4833_ = v_a_3789_;
v___y_4834_ = v_a_3790_;
goto v___jp_4831_;
}
else
{
v___y_3967_ = v_a_3789_;
v_options_3968_ = v_options_3819_;
v_inheritedTraceOptions_3969_ = v_inheritedTraceOptions_3820_;
v___y_3970_ = v_a_3790_;
goto v___jp_3966_;
}
}
else
{
v___y_3967_ = v_a_3789_;
v_options_3968_ = v_options_3819_;
v_inheritedTraceOptions_3969_ = v_inheritedTraceOptions_3820_;
v___y_3970_ = v_a_3790_;
goto v___jp_3966_;
}
}
case 3:
{
lean_object* v_val_4888_; lean_object* v_exportedInfo_x3f_4890_; lean_object* v___y_4891_; lean_object* v___y_4892_; lean_object* v___y_4898_; lean_object* v___y_4899_; lean_object* v___x_4905_; lean_object* v_env_4906_; lean_object* v___x_4907_; 
v_val_4888_ = lean_ctor_get(v_decl_3787_, 0);
v___x_4905_ = lean_st_ref_get(v_a_3790_);
v_env_4906_ = lean_ctor_get(v___x_4905_, 0);
lean_inc_ref(v_env_4906_);
lean_dec(v___x_4905_);
v___x_4907_ = lean_st_ref_get(v_a_3790_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4908_; lean_object* v___x_4909_; uint8_t v_isModule_4910_; 
v_env_4908_ = lean_ctor_get(v___x_4907_, 0);
lean_inc_ref(v_env_4908_);
lean_dec(v___x_4907_);
v___x_4909_ = l_Lean_Environment_header(v_env_4906_);
lean_dec_ref(v_env_4906_);
v_isModule_4910_ = lean_ctor_get_uint8(v___x_4909_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4909_);
if (v_isModule_4910_ == 0)
{
lean_dec_ref(v_env_4908_);
v_exportedInfo_x3f_4890_ = v___x_4720_;
v___y_4891_ = v_a_3789_;
v___y_4892_ = v_a_3790_;
goto v___jp_4889_;
}
else
{
uint8_t v_isExporting_4911_; 
v_isExporting_4911_ = lean_ctor_get_uint8(v_env_4908_, sizeof(void*)*13);
lean_dec_ref(v_env_4908_);
if (v_isExporting_4911_ == 0)
{
if (v___x_4215_ == 0)
{
v___y_4898_ = v_a_3789_;
v___y_4899_ = v_a_3790_;
goto v___jp_4897_;
}
else
{
lean_object* v_toConstantVal_4912_; lean_object* v_name_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; 
v_toConstantVal_4912_ = lean_ctor_get(v_val_4888_, 0);
v_name_4913_ = lean_ctor_get(v_toConstantVal_4912_, 0);
v___x_4914_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
lean_inc(v_name_4913_);
v___x_4915_ = l_Lean_MessageData_ofName(v_name_4913_);
v___x_4916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4916_, 0, v___x_4914_);
lean_ctor_set(v___x_4916_, 1, v___x_4915_);
v___x_4917_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4918_, 0, v___x_4916_);
lean_ctor_set(v___x_4918_, 1, v___x_4917_);
v___x_4919_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4918_, v_a_3789_, v_a_3790_);
if (lean_obj_tag(v___x_4919_) == 0)
{
lean_dec_ref_known(v___x_4919_, 1);
v___y_4898_ = v_a_3789_;
v___y_4899_ = v_a_3790_;
goto v___jp_4897_;
}
else
{
lean_dec_ref_known(v_decl_3787_, 1);
return v___x_4919_;
}
}
}
else
{
v_exportedInfo_x3f_4890_ = v___x_4720_;
v___y_4891_ = v_a_3789_;
v___y_4892_ = v_a_3790_;
goto v___jp_4889_;
}
}
}
else
{
lean_dec(v___x_4907_);
lean_dec_ref(v_env_4906_);
v_exportedInfo_x3f_4890_ = v___x_4720_;
v___y_4891_ = v_a_3789_;
v___y_4892_ = v_a_3790_;
goto v___jp_4889_;
}
v___jp_4889_:
{
lean_object* v_toConstantVal_4893_; lean_object* v_name_4894_; lean_object* v___x_4895_; uint8_t v___x_4896_; 
v_toConstantVal_4893_ = lean_ctor_get(v_val_4888_, 0);
v_name_4894_ = lean_ctor_get(v_toConstantVal_4893_, 0);
lean_inc_ref(v_val_4888_);
v___x_4895_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4895_, 0, v_val_4888_);
v___x_4896_ = 3;
lean_inc(v_name_4894_);
v_fst_4784_ = v_name_4894_;
v_fst_4785_ = v___x_4895_;
v_snd_4786_ = v___x_4896_;
v_exportedInfo_x3f_4787_ = v_exportedInfo_x3f_4890_;
v___y_4788_ = v___y_4891_;
v___y_4789_ = v___y_4892_;
goto v___jp_4783_;
}
v___jp_4897_:
{
lean_object* v_toConstantVal_4900_; uint8_t v_isUnsafe_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; 
v_toConstantVal_4900_ = lean_ctor_get(v_val_4888_, 0);
v_isUnsafe_4901_ = lean_ctor_get_uint8(v_val_4888_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_4900_);
v___x_4902_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4902_, 0, v_toConstantVal_4900_);
lean_ctor_set_uint8(v___x_4902_, sizeof(void*)*1, v_isUnsafe_4901_);
v___x_4903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4903_, 0, v___x_4902_);
v___x_4904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4904_, 0, v___x_4903_);
v_exportedInfo_x3f_4890_ = v___x_4904_;
v___y_4891_ = v___y_4898_;
v___y_4892_ = v___y_4899_;
goto v___jp_4889_;
}
}
case 0:
{
lean_object* v_val_4920_; lean_object* v_toConstantVal_4921_; lean_object* v_name_4922_; lean_object* v___x_4923_; uint8_t v___x_4924_; 
v_val_4920_ = lean_ctor_get(v_decl_3787_, 0);
v_toConstantVal_4921_ = lean_ctor_get(v_val_4920_, 0);
v_name_4922_ = lean_ctor_get(v_toConstantVal_4921_, 0);
lean_inc_ref(v_val_4920_);
v___x_4923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4923_, 0, v_val_4920_);
v___x_4924_ = 2;
lean_inc(v_name_4922_);
v_fst_4784_ = v_name_4922_;
v_fst_4785_ = v___x_4923_;
v_snd_4786_ = v___x_4924_;
v_exportedInfo_x3f_4787_ = v___x_4720_;
v___y_4788_ = v_a_3789_;
v___y_4789_ = v_a_3790_;
goto v___jp_4783_;
}
default: 
{
v___y_3967_ = v_a_3789_;
v_options_3968_ = v_options_3819_;
v_inheritedTraceOptions_3969_ = v_inheritedTraceOptions_3820_;
v___y_3970_ = v_a_3790_;
goto v___jp_3966_;
}
}
v___jp_4721_:
{
lean_object* v___x_4728_; uint8_t v___x_4729_; 
lean_inc(v_decl_3787_);
v___x_4728_ = l_Lean_Declaration_getTopLevelNames(v_decl_3787_);
v___x_4729_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v___x_4728_);
lean_dec(v___x_4728_);
if (v___x_4729_ == 0)
{
if (lean_obj_tag(v___y_4725_) == 0)
{
lean_object* v_toCold_4730_; lean_object* v_options_4731_; uint8_t v_hasTrace_4732_; 
v_toCold_4730_ = lean_ctor_get(v___y_4726_, 0);
v_options_4731_ = lean_ctor_get(v_toCold_4730_, 2);
v_hasTrace_4732_ = lean_ctor_get_uint8(v_options_4731_, sizeof(void*)*1);
if (v_hasTrace_4732_ == 0)
{
v___y_4675_ = v___y_4722_;
v___y_4676_ = v___y_4723_;
v___y_4677_ = v___y_4724_;
v___y_4678_ = v___y_4726_;
v___y_4679_ = v___y_4727_;
goto v___jp_4674_;
}
else
{
lean_object* v_inheritedTraceOptions_4733_; uint8_t v___x_4734_; 
v_inheritedTraceOptions_4733_ = lean_ctor_get(v_toCold_4730_, 11);
v___x_4734_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4733_, v_options_4731_, v___x_4214_);
if (v___x_4734_ == 0)
{
v___y_4675_ = v___y_4722_;
v___y_4676_ = v___y_4723_;
v___y_4677_ = v___y_4724_;
v___y_4678_ = v___y_4726_;
v___y_4679_ = v___y_4727_;
goto v___jp_4674_;
}
else
{
lean_object* v___x_4735_; lean_object* v___x_4736_; 
v___x_4735_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_4736_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4735_, v___y_4726_, v___y_4727_);
if (lean_obj_tag(v___x_4736_) == 0)
{
lean_dec_ref_known(v___x_4736_, 1);
v___y_4675_ = v___y_4722_;
v___y_4676_ = v___y_4723_;
v___y_4677_ = v___y_4724_;
v___y_4678_ = v___y_4726_;
v___y_4679_ = v___y_4727_;
goto v___jp_4674_;
}
else
{
lean_dec(v___y_4724_);
lean_dec_ref(v___y_4722_);
lean_dec(v_decl_3787_);
return v___x_4736_;
}
}
}
}
else
{
lean_object* v___x_4737_; lean_object* v_env_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; uint8_t v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; 
v___x_4737_ = lean_st_ref_get(v___y_4727_);
v_env_4738_ = lean_ctor_get(v___x_4737_, 0);
lean_inc_ref(v_env_4738_);
lean_dec(v___x_4737_);
v___x_4739_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_4740_ = lean_box(1);
v___x_4741_ = 0;
v___x_4742_ = lean_box(v___x_3964_);
lean_inc(v___y_4724_);
v___x_4743_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_4742_, v___x_4739_, v_env_4738_, v___y_4724_, v___x_4740_, v___x_4741_);
if (lean_obj_tag(v___x_4743_) == 0)
{
lean_object* v___x_4744_; lean_object* v_env_4745_; lean_object* v_nextMacroScope_4746_; lean_object* v_ngen_4747_; lean_object* v_auxDeclNGen_4748_; lean_object* v_traceState_4749_; lean_object* v_recordedDeps_4750_; lean_object* v_messages_4751_; lean_object* v_infoState_4752_; lean_object* v_snapshotTasks_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4763_; 
v___x_4744_ = lean_st_ref_take(v___y_4727_);
v_env_4745_ = lean_ctor_get(v___x_4744_, 0);
v_nextMacroScope_4746_ = lean_ctor_get(v___x_4744_, 1);
v_ngen_4747_ = lean_ctor_get(v___x_4744_, 2);
v_auxDeclNGen_4748_ = lean_ctor_get(v___x_4744_, 3);
v_traceState_4749_ = lean_ctor_get(v___x_4744_, 4);
v_recordedDeps_4750_ = lean_ctor_get(v___x_4744_, 6);
v_messages_4751_ = lean_ctor_get(v___x_4744_, 7);
v_infoState_4752_ = lean_ctor_get(v___x_4744_, 8);
v_snapshotTasks_4753_ = lean_ctor_get(v___x_4744_, 9);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4744_);
if (v_isSharedCheck_4763_ == 0)
{
lean_object* v_unused_4764_; 
v_unused_4764_ = lean_ctor_get(v___x_4744_, 5);
lean_dec(v_unused_4764_);
v___x_4755_ = v___x_4744_;
v_isShared_4756_ = v_isSharedCheck_4763_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_snapshotTasks_4753_);
lean_inc(v_infoState_4752_);
lean_inc(v_messages_4751_);
lean_inc(v_recordedDeps_4750_);
lean_inc(v_traceState_4749_);
lean_inc(v_auxDeclNGen_4748_);
lean_inc(v_ngen_4747_);
lean_inc(v_nextMacroScope_4746_);
lean_inc(v_env_4745_);
lean_dec(v___x_4744_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4763_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4760_; 
v___x_4757_ = lean_box(v___y_4723_);
lean_inc(v___y_4724_);
v___x_4758_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_4739_, v_env_4745_, v___y_4724_, v___x_4757_, v___x_4729_);
if (v_isShared_4756_ == 0)
{
lean_ctor_set(v___x_4755_, 5, v___x_4696_);
lean_ctor_set(v___x_4755_, 0, v___x_4758_);
v___x_4760_ = v___x_4755_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4762_; 
v_reuseFailAlloc_4762_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4762_, 0, v___x_4758_);
lean_ctor_set(v_reuseFailAlloc_4762_, 1, v_nextMacroScope_4746_);
lean_ctor_set(v_reuseFailAlloc_4762_, 2, v_ngen_4747_);
lean_ctor_set(v_reuseFailAlloc_4762_, 3, v_auxDeclNGen_4748_);
lean_ctor_set(v_reuseFailAlloc_4762_, 4, v_traceState_4749_);
lean_ctor_set(v_reuseFailAlloc_4762_, 5, v___x_4696_);
lean_ctor_set(v_reuseFailAlloc_4762_, 6, v_recordedDeps_4750_);
lean_ctor_set(v_reuseFailAlloc_4762_, 7, v_messages_4751_);
lean_ctor_set(v_reuseFailAlloc_4762_, 8, v_infoState_4752_);
lean_ctor_set(v_reuseFailAlloc_4762_, 9, v_snapshotTasks_4753_);
v___x_4760_ = v_reuseFailAlloc_4762_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
lean_object* v___x_4761_; 
v___x_4761_ = lean_st_ref_put(v___y_4727_, v___x_4760_);
v___y_4653_ = v___y_4722_;
v___y_4654_ = v___y_4723_;
v___y_4655_ = v___y_4724_;
v_exportedInfo_x3f_4656_ = v___y_4725_;
v___y_4657_ = v___y_4726_;
v___y_4658_ = v___y_4727_;
goto v___jp_4652_;
}
}
}
else
{
lean_dec_ref_known(v___x_4743_, 1);
v___y_4653_ = v___y_4722_;
v___y_4654_ = v___y_4723_;
v___y_4655_ = v___y_4724_;
v_exportedInfo_x3f_4656_ = v___y_4725_;
v___y_4657_ = v___y_4726_;
v___y_4658_ = v___y_4727_;
goto v___jp_4652_;
}
}
}
else
{
lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v_a_4767_; uint8_t v___x_4768_; 
lean_dec(v___y_4725_);
v___x_4765_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_4766_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v___x_4765_, v___y_4726_);
v_a_4767_ = lean_ctor_get(v___x_4766_, 0);
lean_inc(v_a_4767_);
lean_dec_ref(v___x_4766_);
v___x_4768_ = lean_unbox(v_a_4767_);
lean_dec(v_a_4767_);
if (v___x_4768_ == 0)
{
lean_object* v_toCold_4769_; lean_object* v_options_4770_; uint8_t v_hasTrace_4771_; 
v_toCold_4769_ = lean_ctor_get(v___y_4726_, 0);
v_options_4770_ = lean_ctor_get(v_toCold_4769_, 2);
v_hasTrace_4771_ = lean_ctor_get_uint8(v_options_4770_, sizeof(void*)*1);
if (v_hasTrace_4771_ == 0)
{
v___y_4653_ = v___y_4722_;
v___y_4654_ = v___y_4723_;
v___y_4655_ = v___y_4724_;
v_exportedInfo_x3f_4656_ = v___x_4720_;
v___y_4657_ = v___y_4726_;
v___y_4658_ = v___y_4727_;
goto v___jp_4652_;
}
else
{
lean_object* v_inheritedTraceOptions_4772_; uint8_t v___x_4773_; 
v_inheritedTraceOptions_4772_ = lean_ctor_get(v_toCold_4769_, 11);
v___x_4773_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4772_, v_options_4770_, v___x_4214_);
if (v___x_4773_ == 0)
{
v___y_4653_ = v___y_4722_;
v___y_4654_ = v___y_4723_;
v___y_4655_ = v___y_4724_;
v_exportedInfo_x3f_4656_ = v___x_4720_;
v___y_4657_ = v___y_4726_;
v___y_4658_ = v___y_4727_;
goto v___jp_4652_;
}
else
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4774_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_4775_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4774_, v___y_4726_, v___y_4727_);
if (lean_obj_tag(v___x_4775_) == 0)
{
lean_dec_ref_known(v___x_4775_, 1);
v___y_4653_ = v___y_4722_;
v___y_4654_ = v___y_4723_;
v___y_4655_ = v___y_4724_;
v_exportedInfo_x3f_4656_ = v___x_4720_;
v___y_4657_ = v___y_4726_;
v___y_4658_ = v___y_4727_;
goto v___jp_4652_;
}
else
{
lean_dec(v___y_4724_);
lean_dec_ref(v___y_4722_);
lean_dec(v_decl_3787_);
return v___x_4775_;
}
}
}
}
else
{
lean_object* v_toCold_4776_; lean_object* v_options_4777_; uint8_t v_hasTrace_4778_; 
v_toCold_4776_ = lean_ctor_get(v___y_4726_, 0);
v_options_4777_ = lean_ctor_get(v_toCold_4776_, 2);
v_hasTrace_4778_ = lean_ctor_get_uint8(v_options_4777_, sizeof(void*)*1);
if (v_hasTrace_4778_ == 0)
{
v___y_4668_ = v___y_4722_;
v___y_4669_ = v___y_4723_;
v___y_4670_ = v___y_4724_;
v___y_4671_ = v___y_4726_;
v___y_4672_ = v___y_4727_;
goto v___jp_4667_;
}
else
{
lean_object* v_inheritedTraceOptions_4779_; uint8_t v___x_4780_; 
v_inheritedTraceOptions_4779_ = lean_ctor_get(v_toCold_4776_, 11);
v___x_4780_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4779_, v_options_4777_, v___x_4214_);
if (v___x_4780_ == 0)
{
v___y_4668_ = v___y_4722_;
v___y_4669_ = v___y_4723_;
v___y_4670_ = v___y_4724_;
v___y_4671_ = v___y_4726_;
v___y_4672_ = v___y_4727_;
goto v___jp_4667_;
}
else
{
lean_object* v___x_4781_; lean_object* v___x_4782_; 
v___x_4781_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_4782_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4781_, v___y_4726_, v___y_4727_);
if (lean_obj_tag(v___x_4782_) == 0)
{
lean_dec_ref_known(v___x_4782_, 1);
v___y_4668_ = v___y_4722_;
v___y_4669_ = v___y_4723_;
v___y_4670_ = v___y_4724_;
v___y_4671_ = v___y_4726_;
v___y_4672_ = v___y_4727_;
goto v___jp_4667_;
}
else
{
lean_dec(v___y_4724_);
lean_dec_ref(v___y_4722_);
lean_dec(v_decl_3787_);
return v___x_4782_;
}
}
}
}
}
}
v___jp_4783_:
{
lean_object* v___x_4790_; lean_object* v_env_4791_; uint8_t v___x_4792_; 
v___x_4790_ = lean_st_ref_get(v___y_4789_);
v_env_4791_ = lean_ctor_get(v___x_4790_, 0);
lean_inc_ref(v_env_4791_);
lean_dec(v___x_4790_);
v___x_4792_ = l_Lean_Environment_containsOnBranch(v_env_4791_, v_fst_4784_);
lean_dec_ref(v_env_4791_);
if (v___x_4792_ == 0)
{
v___y_4722_ = v_fst_4785_;
v___y_4723_ = v_snd_4786_;
v___y_4724_ = v_fst_4784_;
v___y_4725_ = v_exportedInfo_x3f_4787_;
v___y_4726_ = v___y_4788_;
v___y_4727_ = v___y_4789_;
goto v___jp_4721_;
}
else
{
lean_object* v___x_4793_; lean_object* v_env_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; 
lean_dec(v_exportedInfo_x3f_4787_);
lean_dec_ref(v_fst_4785_);
lean_dec(v_decl_3787_);
v___x_4793_ = lean_st_ref_get(v___y_4789_);
v_env_4794_ = lean_ctor_get(v___x_4793_, 0);
lean_inc_ref(v_env_4794_);
lean_dec(v___x_4793_);
v___x_4795_ = lean_elab_environment_to_kernel_env(v_env_4794_);
v___x_4796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4796_, 0, v___x_4795_);
lean_ctor_set(v___x_4796_, 1, v_fst_4784_);
v___x_4797_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_4796_, v___y_4788_, v___y_4789_);
return v___x_4797_;
}
}
v___jp_4798_:
{
lean_object* v_toConstantVal_4803_; lean_object* v_name_4804_; lean_object* v___x_4805_; 
v_toConstantVal_4803_ = lean_ctor_get(v___y_4799_, 0);
v_name_4804_ = lean_ctor_get(v_toConstantVal_4803_, 0);
lean_inc(v_name_4804_);
v___x_4805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4805_, 0, v___y_4799_);
v_fst_4784_ = v_name_4804_;
v_fst_4785_ = v___x_4805_;
v_snd_4786_ = v___x_3964_;
v_exportedInfo_x3f_4787_ = v_exportedInfo_x3f_4800_;
v___y_4788_ = v___y_4801_;
v___y_4789_ = v___y_4802_;
goto v___jp_4783_;
}
v___jp_4806_:
{
lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; 
v___x_4812_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4812_, 0, v___y_4807_);
lean_ctor_set_uint8(v___x_4812_, sizeof(void*)*1, v___y_4811_);
v___x_4813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4813_, 0, v___x_4812_);
v___x_4814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4814_, 0, v___x_4813_);
v___y_4799_ = v___y_4808_;
v_exportedInfo_x3f_4800_ = v___x_4814_;
v___y_4801_ = v___y_4809_;
v___y_4802_ = v___y_4810_;
goto v___jp_4798_;
}
v___jp_4815_:
{
uint8_t v___x_4822_; uint8_t v___x_4823_; 
v___x_4822_ = 1;
v___x_4823_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_4819_, v___x_4822_);
if (v___x_4823_ == 0)
{
v___y_4807_ = v_toConstantVal_4818_;
v___y_4808_ = v___y_4817_;
v___y_4809_ = v___y_4820_;
v___y_4810_ = v___y_4821_;
v___y_4811_ = v___y_4816_;
goto v___jp_4806_;
}
else
{
v___y_4807_ = v_toConstantVal_4818_;
v___y_4808_ = v___y_4817_;
v___y_4809_ = v___y_4820_;
v___y_4810_ = v___y_4821_;
v___y_4811_ = v___x_4540_;
goto v___jp_4806_;
}
}
v___jp_4824_:
{
lean_object* v_toConstantVal_4829_; uint8_t v_safety_4830_; 
v_toConstantVal_4829_ = lean_ctor_get(v___y_4826_, 0);
lean_inc_ref(v_toConstantVal_4829_);
v_safety_4830_ = lean_ctor_get_uint8(v___y_4826_, sizeof(void*)*4);
v___y_4816_ = v___y_4825_;
v___y_4817_ = v___y_4826_;
v_toConstantVal_4818_ = v_toConstantVal_4829_;
v_safety_4819_ = v_safety_4830_;
v___y_4820_ = v___y_4827_;
v___y_4821_ = v___y_4828_;
goto v___jp_4815_;
}
v___jp_4831_:
{
lean_object* v___x_4835_; lean_object* v_env_4836_; lean_object* v___x_4837_; 
v___x_4835_ = lean_st_ref_get(v___y_4834_);
v_env_4836_ = lean_ctor_get(v___x_4835_, 0);
lean_inc_ref(v_env_4836_);
lean_dec(v___x_4835_);
v___x_4837_ = lean_st_ref_get(v___y_4834_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4838_; lean_object* v___x_4839_; uint8_t v_isModule_4840_; 
v_env_4838_ = lean_ctor_get(v___x_4837_, 0);
lean_inc_ref(v_env_4838_);
lean_dec(v___x_4837_);
v___x_4839_ = l_Lean_Environment_header(v_env_4836_);
lean_dec_ref(v_env_4836_);
v_isModule_4840_ = lean_ctor_get_uint8(v___x_4839_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4839_);
if (v_isModule_4840_ == 0)
{
lean_dec_ref(v_env_4838_);
v___y_4799_ = v_defn_4832_;
v_exportedInfo_x3f_4800_ = v___x_4720_;
v___y_4801_ = v___y_4833_;
v___y_4802_ = v___y_4834_;
goto v___jp_4798_;
}
else
{
uint8_t v_isExporting_4841_; 
v_isExporting_4841_ = lean_ctor_get_uint8(v_env_4838_, sizeof(void*)*13);
lean_dec_ref(v_env_4838_);
if (v_isExporting_4841_ == 0)
{
lean_object* v_toCold_4842_; lean_object* v_options_4843_; uint8_t v_hasTrace_4844_; 
v_toCold_4842_ = lean_ctor_get(v___y_4833_, 0);
v_options_4843_ = lean_ctor_get(v_toCold_4842_, 2);
v_hasTrace_4844_ = lean_ctor_get_uint8(v_options_4843_, sizeof(void*)*1);
if (v_hasTrace_4844_ == 0)
{
v___y_4825_ = v_isModule_4840_;
v___y_4826_ = v_defn_4832_;
v___y_4827_ = v___y_4833_;
v___y_4828_ = v___y_4834_;
goto v___jp_4824_;
}
else
{
lean_object* v_inheritedTraceOptions_4845_; uint8_t v___x_4846_; 
v_inheritedTraceOptions_4845_ = lean_ctor_get(v_toCold_4842_, 11);
v___x_4846_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4845_, v_options_4843_, v___x_4214_);
if (v___x_4846_ == 0)
{
v___y_4825_ = v_isModule_4840_;
v___y_4826_ = v_defn_4832_;
v___y_4827_ = v___y_4833_;
v___y_4828_ = v___y_4834_;
goto v___jp_4824_;
}
else
{
lean_object* v_toConstantVal_4847_; uint8_t v_safety_4848_; lean_object* v_name_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; 
v_toConstantVal_4847_ = lean_ctor_get(v_defn_4832_, 0);
lean_inc_ref(v_toConstantVal_4847_);
v_safety_4848_ = lean_ctor_get_uint8(v_defn_4832_, sizeof(void*)*4);
v_name_4849_ = lean_ctor_get(v_toConstantVal_4847_, 0);
v___x_4850_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_4849_);
v___x_4851_ = l_Lean_MessageData_ofName(v_name_4849_);
v___x_4852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4852_, 0, v___x_4850_);
lean_ctor_set(v___x_4852_, 1, v___x_4851_);
v___x_4853_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4854_, 0, v___x_4852_);
lean_ctor_set(v___x_4854_, 1, v___x_4853_);
v___x_4855_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4854_, v___y_4833_, v___y_4834_);
if (lean_obj_tag(v___x_4855_) == 0)
{
lean_dec_ref_known(v___x_4855_, 1);
v___y_4816_ = v_isModule_4840_;
v___y_4817_ = v_defn_4832_;
v_toConstantVal_4818_ = v_toConstantVal_4847_;
v_safety_4819_ = v_safety_4848_;
v___y_4820_ = v___y_4833_;
v___y_4821_ = v___y_4834_;
goto v___jp_4815_;
}
else
{
lean_dec_ref(v_toConstantVal_4847_);
lean_dec_ref(v_defn_4832_);
lean_dec(v_decl_3787_);
return v___x_4855_;
}
}
}
}
else
{
v___y_4799_ = v_defn_4832_;
v_exportedInfo_x3f_4800_ = v___x_4720_;
v___y_4801_ = v___y_4833_;
v___y_4802_ = v___y_4834_;
goto v___jp_4798_;
}
}
}
else
{
lean_dec(v___x_4837_);
lean_dec_ref(v_env_4836_);
v___y_4799_ = v_defn_4832_;
v_exportedInfo_x3f_4800_ = v___x_4720_;
v___y_4801_ = v___y_4833_;
v___y_4802_ = v___y_4834_;
goto v___jp_4798_;
}
}
}
}
}
}
}
else
{
goto v___jp_4307_;
}
v___jp_4541_:
{
lean_object* v___x_4553_; 
lean_inc_ref(v___y_4549_);
v___x_4553_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_4542_, v___y_4549_, v___y_4550_, v___y_4552_);
if (lean_obj_tag(v___x_4553_) == 0)
{
lean_object* v___x_4554_; lean_object* v___x_4556_; uint8_t v_isShared_4557_; uint8_t v_isSharedCheck_4609_; 
lean_dec_ref_known(v___x_4553_, 1);
lean_dec(v___y_4543_);
lean_inc_ref(v___y_4548_);
v___x_4554_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4548_, v___y_4545_);
v_isSharedCheck_4609_ = !lean_is_exclusive(v___x_4554_);
if (v_isSharedCheck_4609_ == 0)
{
lean_object* v_unused_4610_; 
v_unused_4610_ = lean_ctor_get(v___x_4554_, 0);
lean_dec(v_unused_4610_);
v___x_4556_ = v___x_4554_;
v_isShared_4557_ = v_isSharedCheck_4609_;
goto v_resetjp_4555_;
}
else
{
lean_dec(v___x_4554_);
v___x_4556_ = lean_box(0);
v_isShared_4557_ = v_isSharedCheck_4609_;
goto v_resetjp_4555_;
}
v_resetjp_4555_:
{
lean_object* v___x_4558_; lean_object* v___x_4559_; uint8_t v___x_4560_; 
v___x_4558_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4544_);
v___x_4559_ = l_Lean_Elab_async;
v___x_4560_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_4558_, v___x_4559_);
lean_dec_ref(v___x_4558_);
if (v___x_4560_ == 0)
{
lean_object* v___x_4561_; lean_object* v_r_4562_; 
lean_del_object(v___x_4556_);
lean_dec_ref(v___y_4551_);
lean_dec_ref(v___y_4546_);
v___x_4561_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4549_, v___y_4545_);
lean_dec_ref(v___x_4561_);
v_r_4562_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3787_, v___y_4544_, v___y_4545_);
if (lean_obj_tag(v_r_4562_) == 0)
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4581_; 
v_a_4563_ = lean_ctor_get(v_r_4562_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v_r_4562_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4565_ = v_r_4562_;
v_isShared_4566_ = v_isSharedCheck_4581_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v_r_4562_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4581_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4568_; 
lean_inc(v_a_4563_);
if (v_isShared_4566_ == 0)
{
lean_ctor_set_tag(v___x_4565_, 1);
v___x_4568_ = v___x_4565_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v_a_4563_);
v___x_4568_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
lean_object* v___x_4569_; 
v___x_4569_ = lean_apply_2(v___y_4547_, v___x_4568_, lean_box(0));
if (lean_obj_tag(v___x_4569_) == 0)
{
lean_object* v___x_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4577_; 
lean_dec_ref_known(v___x_4569_, 1);
v___x_4570_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4548_, v___y_4545_);
v_isSharedCheck_4577_ = !lean_is_exclusive(v___x_4570_);
if (v_isSharedCheck_4577_ == 0)
{
lean_object* v_unused_4578_; 
v_unused_4578_ = lean_ctor_get(v___x_4570_, 0);
lean_dec(v_unused_4578_);
v___x_4572_ = v___x_4570_;
v_isShared_4573_ = v_isSharedCheck_4577_;
goto v_resetjp_4571_;
}
else
{
lean_dec(v___x_4570_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4577_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v___x_4575_; 
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v_a_4563_);
v___x_4575_ = v___x_4572_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_a_4563_);
v___x_4575_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
return v___x_4575_;
}
}
}
else
{
lean_object* v_a_4579_; 
lean_dec(v_a_4563_);
v_a_4579_ = lean_ctor_get(v___x_4569_, 0);
lean_inc(v_a_4579_);
lean_dec_ref_known(v___x_4569_, 1);
v___y_3793_ = v___y_4545_;
v___y_3794_ = v___y_4548_;
v_a_3795_ = v_a_4579_;
goto v___jp_3792_;
}
}
}
}
else
{
lean_object* v_a_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
v_a_4582_ = lean_ctor_get(v_r_4562_, 0);
lean_inc(v_a_4582_);
lean_dec_ref_known(v_r_4562_, 1);
v___x_4583_ = lean_box(0);
v___x_4584_ = lean_apply_2(v___y_4547_, v___x_4583_, lean_box(0));
if (lean_obj_tag(v___x_4584_) == 0)
{
lean_dec_ref_known(v___x_4584_, 1);
v___y_3793_ = v___y_4545_;
v___y_3794_ = v___y_4548_;
v_a_3795_ = v_a_4582_;
goto v___jp_3792_;
}
else
{
lean_object* v_a_4585_; 
lean_dec(v_a_4582_);
v_a_4585_ = lean_ctor_get(v___x_4584_, 0);
lean_inc(v_a_4585_);
lean_dec_ref_known(v___x_4584_, 1);
v___y_3793_ = v___y_4545_;
v___y_3794_ = v___y_4548_;
v_a_3795_ = v_a_4585_;
goto v___jp_3792_;
}
}
}
else
{
lean_object* v___x_4586_; lean_object* v___x_4588_; 
lean_dec_ref(v___y_4549_);
lean_dec_ref(v___y_4548_);
lean_dec_ref(v___y_4547_);
lean_dec(v_decl_3787_);
v___x_4586_ = l_IO_CancelToken_new();
if (v_isShared_4557_ == 0)
{
lean_ctor_set_tag(v___x_4556_, 1);
lean_ctor_set(v___x_4556_, 0, v___x_4586_);
v___x_4588_ = v___x_4556_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4608_; 
v_reuseFailAlloc_4608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4608_, 0, v___x_4586_);
v___x_4588_ = v_reuseFailAlloc_4608_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; 
v___x_4589_ = lean_unsigned_to_nat(0u);
v___x_4590_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1));
v___x_4591_ = l_Lean_Name_toString(v___x_4590_, v_hasTrace_3821_);
lean_inc_ref(v___x_4588_);
v___x_4592_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_4551_, v___x_4588_, v___x_4591_, v___y_4544_, v___y_4545_);
if (lean_obj_tag(v___x_4592_) == 0)
{
lean_object* v_a_4593_; lean_object* v_checked_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; 
v_a_4593_ = lean_ctor_get(v___x_4592_, 0);
lean_inc(v_a_4593_);
lean_dec_ref_known(v___x_4592_, 1);
v_checked_4594_ = lean_ctor_get(v___y_4546_, 2);
lean_inc_ref(v_checked_4594_);
lean_dec_ref(v___y_4546_);
v___x_4595_ = lean_io_map_task(v_a_4593_, v_checked_4594_, v___x_4589_, v___x_4540_);
v___x_4596_ = lean_box(0);
v___x_4597_ = lean_box(2);
v___x_4598_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4598_, 0, v___x_4596_);
lean_ctor_set(v___x_4598_, 1, v___x_4597_);
lean_ctor_set(v___x_4598_, 2, v___x_4588_);
lean_ctor_set(v___x_4598_, 3, v___x_4595_);
v___x_4599_ = l_Lean_Core_logSnapshotTask___redArg(v___x_4598_, v___y_4545_);
return v___x_4599_;
}
else
{
lean_object* v_a_4600_; lean_object* v___x_4602_; uint8_t v_isShared_4603_; uint8_t v_isSharedCheck_4607_; 
lean_dec_ref(v___x_4588_);
lean_dec_ref(v___y_4546_);
v_a_4600_ = lean_ctor_get(v___x_4592_, 0);
v_isSharedCheck_4607_ = !lean_is_exclusive(v___x_4592_);
if (v_isSharedCheck_4607_ == 0)
{
v___x_4602_ = v___x_4592_;
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
else
{
lean_inc(v_a_4600_);
lean_dec(v___x_4592_);
v___x_4602_ = lean_box(0);
v_isShared_4603_ = v_isSharedCheck_4607_;
goto v_resetjp_4601_;
}
v_resetjp_4601_:
{
lean_object* v___x_4605_; 
if (v_isShared_4603_ == 0)
{
v___x_4605_ = v___x_4602_;
goto v_reusejp_4604_;
}
else
{
lean_object* v_reuseFailAlloc_4606_; 
v_reuseFailAlloc_4606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4606_, 0, v_a_4600_);
v___x_4605_ = v_reuseFailAlloc_4606_;
goto v_reusejp_4604_;
}
v_reusejp_4604_:
{
return v___x_4605_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4622_; 
lean_dec_ref(v___y_4551_);
lean_dec_ref(v___y_4549_);
lean_dec_ref(v___y_4548_);
lean_dec_ref(v___y_4547_);
lean_dec_ref(v___y_4546_);
lean_dec(v_decl_3787_);
v_a_4611_ = lean_ctor_get(v___x_4553_, 0);
v_isSharedCheck_4622_ = !lean_is_exclusive(v___x_4553_);
if (v_isSharedCheck_4622_ == 0)
{
v___x_4613_ = v___x_4553_;
v_isShared_4614_ = v_isSharedCheck_4622_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_a_4611_);
lean_dec(v___x_4553_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4622_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4620_; 
v___x_4615_ = lean_io_error_to_string(v_a_4611_);
v___x_4616_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4616_, 0, v___x_4615_);
v___x_4617_ = l_Lean_MessageData_ofFormat(v___x_4616_);
v___x_4618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4618_, 0, v___y_4543_);
lean_ctor_set(v___x_4618_, 1, v___x_4617_);
if (v_isShared_4614_ == 0)
{
lean_ctor_set(v___x_4613_, 0, v___x_4618_);
v___x_4620_ = v___x_4613_;
goto v_reusejp_4619_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v___x_4618_);
v___x_4620_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4619_;
}
v_reusejp_4619_:
{
return v___x_4620_;
}
}
}
}
v___jp_4623_:
{
lean_object* v_ref_4632_; lean_object* v___x_4633_; 
v_ref_4632_ = lean_ctor_get(v___y_4627_, 2);
lean_inc_ref(v___y_4630_);
v___x_4633_ = l_Lean_Environment_addConstAsync(v___y_4630_, v___y_4628_, v___y_4629_, v___y_4631_, v___x_4540_, v_hasTrace_3821_);
if (lean_obj_tag(v___x_4633_) == 0)
{
lean_object* v_a_4634_; lean_object* v_mainEnv_4635_; lean_object* v_asyncEnv_4636_; lean_object* v___f_4637_; lean_object* v___f_4638_; lean_object* v___x_4639_; 
v_a_4634_ = lean_ctor_get(v___x_4633_, 0);
lean_inc_n(v_a_4634_, 3);
lean_dec_ref_known(v___x_4633_, 1);
v_mainEnv_4635_ = lean_ctor_get(v_a_4634_, 0);
lean_inc_ref(v_mainEnv_4635_);
v_asyncEnv_4636_ = lean_ctor_get(v_a_4634_, 1);
lean_inc_ref_n(v_asyncEnv_4636_, 2);
lean_inc(v_ref_4632_);
lean_inc(v___y_4626_);
v___f_4637_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4637_, 0, v___y_4626_);
lean_closure_set(v___f_4637_, 1, v_a_4634_);
lean_closure_set(v___f_4637_, 2, v_ref_4632_);
lean_inc(v_decl_3787_);
v___f_4638_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 7, 3);
lean_closure_set(v___f_4638_, 0, v_a_4634_);
lean_closure_set(v___f_4638_, 1, v_asyncEnv_4636_);
lean_closure_set(v___f_4638_, 2, v_decl_3787_);
v___x_4639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4639_, 0, v___y_4625_);
if (lean_obj_tag(v___y_4624_) == 0)
{
lean_inc_ref(v___x_4639_);
lean_inc(v_ref_4632_);
v___y_4542_ = v_a_4634_;
v___y_4543_ = v_ref_4632_;
v___y_4544_ = v___y_4627_;
v___y_4545_ = v___y_4626_;
v___y_4546_ = v___y_4630_;
v___y_4547_ = v___f_4637_;
v___y_4548_ = v_mainEnv_4635_;
v___y_4549_ = v_asyncEnv_4636_;
v___y_4550_ = v___x_4639_;
v___y_4551_ = v___f_4638_;
v___y_4552_ = v___x_4639_;
goto v___jp_4541_;
}
else
{
lean_inc(v_ref_4632_);
v___y_4542_ = v_a_4634_;
v___y_4543_ = v_ref_4632_;
v___y_4544_ = v___y_4627_;
v___y_4545_ = v___y_4626_;
v___y_4546_ = v___y_4630_;
v___y_4547_ = v___f_4637_;
v___y_4548_ = v_mainEnv_4635_;
v___y_4549_ = v_asyncEnv_4636_;
v___y_4550_ = v___x_4639_;
v___y_4551_ = v___f_4638_;
v___y_4552_ = v___y_4624_;
goto v___jp_4541_;
}
}
else
{
lean_object* v_a_4640_; lean_object* v___x_4642_; uint8_t v_isShared_4643_; uint8_t v_isSharedCheck_4651_; 
lean_dec_ref(v___y_4630_);
lean_dec_ref(v___y_4625_);
lean_dec(v___y_4624_);
lean_dec(v_decl_3787_);
v_a_4640_ = lean_ctor_get(v___x_4633_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v___x_4633_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4642_ = v___x_4633_;
v_isShared_4643_ = v_isSharedCheck_4651_;
goto v_resetjp_4641_;
}
else
{
lean_inc(v_a_4640_);
lean_dec(v___x_4633_);
v___x_4642_ = lean_box(0);
v_isShared_4643_ = v_isSharedCheck_4651_;
goto v_resetjp_4641_;
}
v_resetjp_4641_:
{
lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4649_; 
v___x_4644_ = lean_io_error_to_string(v_a_4640_);
v___x_4645_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4645_, 0, v___x_4644_);
v___x_4646_ = l_Lean_MessageData_ofFormat(v___x_4645_);
lean_inc(v_ref_4632_);
v___x_4647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4647_, 0, v_ref_4632_);
lean_ctor_set(v___x_4647_, 1, v___x_4646_);
if (v_isShared_4643_ == 0)
{
lean_ctor_set(v___x_4642_, 0, v___x_4647_);
v___x_4649_ = v___x_4642_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v___x_4647_);
v___x_4649_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
return v___x_4649_;
}
}
}
}
v___jp_4652_:
{
lean_object* v___x_4659_; 
v___x_4659_ = lean_st_ref_get(v___y_4658_);
if (lean_obj_tag(v_exportedInfo_x3f_4656_) == 0)
{
lean_object* v_env_4660_; lean_object* v___x_4661_; 
v_env_4660_ = lean_ctor_get(v___x_4659_, 0);
lean_inc_ref(v_env_4660_);
lean_dec(v___x_4659_);
v___x_4661_ = lean_box(0);
v___y_4624_ = v_exportedInfo_x3f_4656_;
v___y_4625_ = v___y_4653_;
v___y_4626_ = v___y_4658_;
v___y_4627_ = v___y_4657_;
v___y_4628_ = v___y_4655_;
v___y_4629_ = v___y_4654_;
v___y_4630_ = v_env_4660_;
v___y_4631_ = v___x_4661_;
goto v___jp_4623_;
}
else
{
lean_object* v_env_4662_; lean_object* v_val_4663_; uint8_t v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; 
v_env_4662_ = lean_ctor_get(v___x_4659_, 0);
lean_inc_ref(v_env_4662_);
lean_dec(v___x_4659_);
v_val_4663_ = lean_ctor_get(v_exportedInfo_x3f_4656_, 0);
v___x_4664_ = l_Lean_ConstantKind_ofConstantInfo(v_val_4663_);
v___x_4665_ = lean_box(v___x_4664_);
v___x_4666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4666_, 0, v___x_4665_);
v___y_4624_ = v_exportedInfo_x3f_4656_;
v___y_4625_ = v___y_4653_;
v___y_4626_ = v___y_4658_;
v___y_4627_ = v___y_4657_;
v___y_4628_ = v___y_4655_;
v___y_4629_ = v___y_4654_;
v___y_4630_ = v_env_4662_;
v___y_4631_ = v___x_4666_;
goto v___jp_4623_;
}
}
v___jp_4667_:
{
lean_object* v___x_4673_; 
lean_inc_ref(v___y_4668_);
v___x_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4673_, 0, v___y_4668_);
v___y_4653_ = v___y_4668_;
v___y_4654_ = v___y_4669_;
v___y_4655_ = v___y_4670_;
v_exportedInfo_x3f_4656_ = v___x_4673_;
v___y_4657_ = v___y_4671_;
v___y_4658_ = v___y_4672_;
goto v___jp_4652_;
}
v___jp_4674_:
{
lean_object* v___x_4680_; 
lean_inc_ref(v___y_4675_);
v___x_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4680_, 0, v___y_4675_);
v___y_4653_ = v___y_4675_;
v___y_4654_ = v___y_4676_;
v___y_4655_ = v___y_4677_;
v_exportedInfo_x3f_4656_ = v___x_4680_;
v___y_4657_ = v___y_4678_;
v___y_4658_ = v___y_4679_;
goto v___jp_4652_;
}
}
else
{
goto v___jp_4307_;
}
v___jp_4216_:
{
lean_object* v___x_4220_; double v___x_4221_; double v___x_4222_; double v___x_4223_; double v___x_4224_; double v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; 
v___x_4220_ = lean_io_mono_nanos_now();
v___x_4221_ = lean_float_of_nat(v___y_4217_);
v___x_4222_ = lean_float_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1);
v___x_4223_ = lean_float_div(v___x_4221_, v___x_4222_);
v___x_4224_ = lean_float_of_nat(v___x_4220_);
v___x_4225_ = lean_float_div(v___x_4224_, v___x_4222_);
v___x_4226_ = lean_box_float(v___x_4223_);
v___x_4227_ = lean_box_float(v___x_4225_);
v___x_4228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4228_, 0, v___x_4226_);
lean_ctor_set(v___x_4228_, 1, v___x_4227_);
v___x_4229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4229_, 0, v_a_4219_);
lean_ctor_set(v___x_4229_, 1, v___x_4228_);
v___x_4230_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_3965_, v_hasTrace_3821_, v___x_4213_, v_options_3819_, v___x_4215_, v___y_4218_, v___f_4212_, v___x_4229_, v_a_3789_, v_a_3790_);
return v___x_4230_;
}
v___jp_4231_:
{
lean_object* v___x_4235_; 
v___x_4235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4235_, 0, v_a_4234_);
v___y_4217_ = v___y_4232_;
v___y_4218_ = v___y_4233_;
v_a_4219_ = v___x_4235_;
goto v___jp_4216_;
}
v___jp_4236_:
{
if (lean_obj_tag(v___y_4239_) == 0)
{
lean_object* v_a_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4247_; 
v_a_4240_ = lean_ctor_get(v___y_4239_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___y_4239_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4242_ = v___y_4239_;
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_a_4240_);
lean_dec(v___y_4239_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4245_; 
if (v_isShared_4243_ == 0)
{
lean_ctor_set_tag(v___x_4242_, 1);
v___x_4245_ = v___x_4242_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_a_4240_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
v___y_4217_ = v___y_4237_;
v___y_4218_ = v___y_4238_;
v_a_4219_ = v___x_4245_;
goto v___jp_4216_;
}
}
}
else
{
lean_object* v_a_4248_; 
v_a_4248_ = lean_ctor_get(v___y_4239_, 0);
lean_inc(v_a_4248_);
lean_dec_ref_known(v___y_4239_, 1);
v___y_4232_ = v___y_4237_;
v___y_4233_ = v___y_4238_;
v_a_4234_ = v_a_4248_;
goto v___jp_4231_;
}
}
v___jp_4249_:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; 
v___x_4254_ = lean_box(0);
lean_inc(v_a_3790_);
lean_inc_ref(v_a_3789_);
v___x_4255_ = lean_apply_5(v___y_4252_, v___x_4254_, v___y_4250_, v_a_3789_, v_a_3790_, lean_box(0));
v___y_4237_ = v___y_4251_;
v___y_4238_ = v___y_4253_;
v___y_4239_ = v___x_4255_;
goto v___jp_4236_;
}
v___jp_4256_:
{
lean_object* v___x_4261_; lean_object* v___x_4262_; 
v___x_4261_ = lean_box(0);
lean_inc(v_a_3790_);
lean_inc_ref(v_a_3789_);
v___x_4262_ = lean_apply_5(v___y_4260_, v___x_4261_, v___y_4257_, v_a_3789_, v_a_3790_, lean_box(0));
v___y_4237_ = v___y_4258_;
v___y_4238_ = v___y_4259_;
v___y_4239_ = v___x_4262_;
goto v___jp_4236_;
}
v___jp_4263_:
{
lean_object* v___x_4267_; double v___x_4268_; double v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4267_ = lean_io_get_num_heartbeats();
v___x_4268_ = lean_float_of_nat(v___y_4264_);
v___x_4269_ = lean_float_of_nat(v___x_4267_);
v___x_4270_ = lean_box_float(v___x_4268_);
v___x_4271_ = lean_box_float(v___x_4269_);
v___x_4272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4272_, 0, v___x_4270_);
lean_ctor_set(v___x_4272_, 1, v___x_4271_);
v___x_4273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4273_, 0, v_a_4266_);
lean_ctor_set(v___x_4273_, 1, v___x_4272_);
v___x_4274_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_3965_, v_hasTrace_3821_, v___x_4213_, v_options_3819_, v___x_4215_, v___y_4265_, v___f_4212_, v___x_4273_, v_a_3789_, v_a_3790_);
return v___x_4274_;
}
v___jp_4275_:
{
lean_object* v___x_4279_; 
v___x_4279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4279_, 0, v_a_4278_);
v___y_4264_ = v___y_4276_;
v___y_4265_ = v___y_4277_;
v_a_4266_ = v___x_4279_;
goto v___jp_4263_;
}
v___jp_4280_:
{
if (lean_obj_tag(v___y_4283_) == 0)
{
lean_object* v_a_4284_; lean_object* v___x_4286_; uint8_t v_isShared_4287_; uint8_t v_isSharedCheck_4291_; 
v_a_4284_ = lean_ctor_get(v___y_4283_, 0);
v_isSharedCheck_4291_ = !lean_is_exclusive(v___y_4283_);
if (v_isSharedCheck_4291_ == 0)
{
v___x_4286_ = v___y_4283_;
v_isShared_4287_ = v_isSharedCheck_4291_;
goto v_resetjp_4285_;
}
else
{
lean_inc(v_a_4284_);
lean_dec(v___y_4283_);
v___x_4286_ = lean_box(0);
v_isShared_4287_ = v_isSharedCheck_4291_;
goto v_resetjp_4285_;
}
v_resetjp_4285_:
{
lean_object* v___x_4289_; 
if (v_isShared_4287_ == 0)
{
lean_ctor_set_tag(v___x_4286_, 1);
v___x_4289_ = v___x_4286_;
goto v_reusejp_4288_;
}
else
{
lean_object* v_reuseFailAlloc_4290_; 
v_reuseFailAlloc_4290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4290_, 0, v_a_4284_);
v___x_4289_ = v_reuseFailAlloc_4290_;
goto v_reusejp_4288_;
}
v_reusejp_4288_:
{
v___y_4264_ = v___y_4281_;
v___y_4265_ = v___y_4282_;
v_a_4266_ = v___x_4289_;
goto v___jp_4263_;
}
}
}
else
{
lean_object* v_a_4292_; 
v_a_4292_ = lean_ctor_get(v___y_4283_, 0);
lean_inc(v_a_4292_);
lean_dec_ref_known(v___y_4283_, 1);
v___y_4276_ = v___y_4281_;
v___y_4277_ = v___y_4282_;
v_a_4278_ = v_a_4292_;
goto v___jp_4275_;
}
}
v___jp_4293_:
{
lean_object* v___x_4298_; lean_object* v___x_4299_; 
v___x_4298_ = lean_box(0);
lean_inc(v_a_3790_);
lean_inc_ref(v_a_3789_);
v___x_4299_ = lean_apply_5(v___y_4296_, v___x_4298_, v___y_4295_, v_a_3789_, v_a_3790_, lean_box(0));
v___y_4281_ = v___y_4294_;
v___y_4282_ = v___y_4297_;
v___y_4283_ = v___x_4299_;
goto v___jp_4280_;
}
v___jp_4300_:
{
lean_object* v___x_4305_; lean_object* v___x_4306_; 
v___x_4305_ = lean_box(0);
lean_inc(v_a_3790_);
lean_inc_ref(v_a_3789_);
v___x_4306_ = lean_apply_5(v___y_4304_, v___x_4305_, v___y_4302_, v_a_3789_, v_a_3790_, lean_box(0));
v___y_4281_ = v___y_4301_;
v___y_4282_ = v___y_4303_;
v___y_4283_ = v___x_4306_;
goto v___jp_4280_;
}
v___jp_4307_:
{
lean_object* v___x_4308_; lean_object* v_a_4309_; lean_object* v___x_4311_; uint8_t v_isShared_4312_; uint8_t v_isSharedCheck_4538_; 
v___x_4308_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v_a_3790_);
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
v_isSharedCheck_4538_ = !lean_is_exclusive(v___x_4308_);
if (v_isSharedCheck_4538_ == 0)
{
v___x_4311_ = v___x_4308_;
v_isShared_4312_ = v_isSharedCheck_4538_;
goto v_resetjp_4310_;
}
else
{
lean_inc(v_a_4309_);
lean_dec(v___x_4308_);
v___x_4311_ = lean_box(0);
v_isShared_4312_ = v_isSharedCheck_4538_;
goto v_resetjp_4310_;
}
v_resetjp_4310_:
{
lean_object* v___x_4313_; uint8_t v___x_4314_; 
v___x_4313_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4314_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3819_, v___x_4313_);
if (v___x_4314_ == 0)
{
lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v_env_4317_; lean_object* v_nextMacroScope_4318_; lean_object* v_ngen_4319_; lean_object* v_auxDeclNGen_4320_; lean_object* v_traceState_4321_; lean_object* v_recordedDeps_4322_; lean_object* v_messages_4323_; lean_object* v_infoState_4324_; lean_object* v_snapshotTasks_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4425_; 
v___x_4315_ = lean_io_mono_nanos_now();
v___x_4316_ = lean_st_ref_take(v_a_3790_);
v_env_4317_ = lean_ctor_get(v___x_4316_, 0);
v_nextMacroScope_4318_ = lean_ctor_get(v___x_4316_, 1);
v_ngen_4319_ = lean_ctor_get(v___x_4316_, 2);
v_auxDeclNGen_4320_ = lean_ctor_get(v___x_4316_, 3);
v_traceState_4321_ = lean_ctor_get(v___x_4316_, 4);
v_recordedDeps_4322_ = lean_ctor_get(v___x_4316_, 6);
v_messages_4323_ = lean_ctor_get(v___x_4316_, 7);
v_infoState_4324_ = lean_ctor_get(v___x_4316_, 8);
v_snapshotTasks_4325_ = lean_ctor_get(v___x_4316_, 9);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4425_ == 0)
{
lean_object* v_unused_4426_; 
v_unused_4426_ = lean_ctor_get(v___x_4316_, 5);
lean_dec(v_unused_4426_);
v___x_4327_ = v___x_4316_;
v_isShared_4328_ = v_isSharedCheck_4425_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_snapshotTasks_4325_);
lean_inc(v_infoState_4324_);
lean_inc(v_messages_4323_);
lean_inc(v_recordedDeps_4322_);
lean_inc(v_traceState_4321_);
lean_inc(v_auxDeclNGen_4320_);
lean_inc(v_ngen_4319_);
lean_inc(v_nextMacroScope_4318_);
lean_inc(v_env_4317_);
lean_dec(v___x_4316_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4425_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4333_; 
lean_inc(v_decl_3787_);
v___x_4329_ = l_Lean_Declaration_getNames(v_decl_3787_);
v___x_4330_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_4317_, v___x_4329_);
v___x_4331_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_4328_ == 0)
{
lean_ctor_set(v___x_4327_, 5, v___x_4331_);
lean_ctor_set(v___x_4327_, 0, v___x_4330_);
v___x_4333_ = v___x_4327_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v___x_4330_);
lean_ctor_set(v_reuseFailAlloc_4424_, 1, v_nextMacroScope_4318_);
lean_ctor_set(v_reuseFailAlloc_4424_, 2, v_ngen_4319_);
lean_ctor_set(v_reuseFailAlloc_4424_, 3, v_auxDeclNGen_4320_);
lean_ctor_set(v_reuseFailAlloc_4424_, 4, v_traceState_4321_);
lean_ctor_set(v_reuseFailAlloc_4424_, 5, v___x_4331_);
lean_ctor_set(v_reuseFailAlloc_4424_, 6, v_recordedDeps_4322_);
lean_ctor_set(v_reuseFailAlloc_4424_, 7, v_messages_4323_);
lean_ctor_set(v_reuseFailAlloc_4424_, 8, v_infoState_4324_);
lean_ctor_set(v_reuseFailAlloc_4424_, 9, v_snapshotTasks_4325_);
v___x_4333_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v_env_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v_env_4339_; lean_object* v_nextMacroScope_4340_; lean_object* v_ngen_4341_; lean_object* v_auxDeclNGen_4342_; lean_object* v_traceState_4343_; lean_object* v_recordedDeps_4344_; lean_object* v_messages_4345_; lean_object* v_infoState_4346_; lean_object* v_snapshotTasks_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4422_; 
v___x_4334_ = lean_st_ref_put(v_a_3790_, v___x_4333_);
v___x_4335_ = lean_st_ref_get(v_a_3790_);
v_env_4336_ = lean_ctor_get(v___x_4335_, 0);
lean_inc_ref(v_env_4336_);
lean_dec(v___x_4335_);
v___x_4337_ = l_Lean_getExplicitRewriteRules(v_env_4336_);
v___x_4338_ = lean_st_ref_take(v_a_3790_);
v_env_4339_ = lean_ctor_get(v___x_4338_, 0);
v_nextMacroScope_4340_ = lean_ctor_get(v___x_4338_, 1);
v_ngen_4341_ = lean_ctor_get(v___x_4338_, 2);
v_auxDeclNGen_4342_ = lean_ctor_get(v___x_4338_, 3);
v_traceState_4343_ = lean_ctor_get(v___x_4338_, 4);
v_recordedDeps_4344_ = lean_ctor_get(v___x_4338_, 6);
v_messages_4345_ = lean_ctor_get(v___x_4338_, 7);
v_infoState_4346_ = lean_ctor_get(v___x_4338_, 8);
v_snapshotTasks_4347_ = lean_ctor_get(v___x_4338_, 9);
v_isSharedCheck_4422_ = !lean_is_exclusive(v___x_4338_);
if (v_isSharedCheck_4422_ == 0)
{
lean_object* v_unused_4423_; 
v_unused_4423_ = lean_ctor_get(v___x_4338_, 5);
lean_dec(v_unused_4423_);
v___x_4349_ = v___x_4338_;
v_isShared_4350_ = v_isSharedCheck_4422_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_snapshotTasks_4347_);
lean_inc(v_infoState_4346_);
lean_inc(v_messages_4345_);
lean_inc(v_recordedDeps_4344_);
lean_inc(v_traceState_4343_);
lean_inc(v_auxDeclNGen_4342_);
lean_inc(v_ngen_4341_);
lean_inc(v_nextMacroScope_4340_);
lean_inc(v_env_4339_);
lean_dec(v___x_4338_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4422_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4351_; lean_object* v___x_4353_; 
lean_inc(v_decl_3787_);
v___x_4351_ = l___private_Lean_AddDecl_0__Lean_recordRewriteSets(v_decl_3787_, v___x_4337_, v_env_4339_);
if (v_isShared_4350_ == 0)
{
lean_ctor_set(v___x_4349_, 5, v___x_4331_);
lean_ctor_set(v___x_4349_, 0, v___x_4351_);
v___x_4353_ = v___x_4349_;
goto v_reusejp_4352_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v___x_4351_);
lean_ctor_set(v_reuseFailAlloc_4421_, 1, v_nextMacroScope_4340_);
lean_ctor_set(v_reuseFailAlloc_4421_, 2, v_ngen_4341_);
lean_ctor_set(v_reuseFailAlloc_4421_, 3, v_auxDeclNGen_4342_);
lean_ctor_set(v_reuseFailAlloc_4421_, 4, v_traceState_4343_);
lean_ctor_set(v_reuseFailAlloc_4421_, 5, v___x_4331_);
lean_ctor_set(v_reuseFailAlloc_4421_, 6, v_recordedDeps_4344_);
lean_ctor_set(v_reuseFailAlloc_4421_, 7, v_messages_4345_);
lean_ctor_set(v_reuseFailAlloc_4421_, 8, v_infoState_4346_);
lean_ctor_set(v_reuseFailAlloc_4421_, 9, v_snapshotTasks_4347_);
v___x_4353_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4352_;
}
v_reusejp_4352_:
{
lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___f_4359_; 
v___x_4354_ = lean_st_ref_put(v_a_3790_, v___x_4353_);
v___x_4355_ = lean_box(0);
v___x_4356_ = lean_box(v_hasTrace_3821_);
v___x_4357_ = lean_box(v___x_4314_);
v___x_4358_ = lean_box(v___x_3964_);
lean_inc(v_decl_3787_);
v___f_4359_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed), 12, 7);
lean_closure_set(v___f_4359_, 0, v_decl_3787_);
lean_closure_set(v___f_4359_, 1, v___x_4356_);
lean_closure_set(v___f_4359_, 2, v___x_4357_);
lean_closure_set(v___f_4359_, 3, v_cls_3965_);
lean_closure_set(v___f_4359_, 4, v___x_4358_);
lean_closure_set(v___f_4359_, 5, v___x_4331_);
lean_closure_set(v___f_4359_, 6, v___x_4355_);
switch(lean_obj_tag(v_decl_3787_))
{
case 2:
{
lean_object* v_val_4360_; lean_object* v___f_4361_; lean_object* v___x_4362_; 
lean_del_object(v___x_4311_);
v_val_4360_ = lean_ctor_get(v_decl_3787_, 0);
lean_inc_ref_n(v_val_4360_, 2);
lean_dec_ref_known(v_decl_3787_, 1);
v___f_4361_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed), 7, 2);
lean_closure_set(v___f_4361_, 0, v_val_4360_);
lean_closure_set(v___f_4361_, 1, v___f_4359_);
v___x_4362_ = lean_st_ref_get(v_a_3790_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4363_; lean_object* v___x_4364_; uint8_t v_isModule_4365_; 
v_env_4363_ = lean_ctor_get(v___x_4362_, 0);
lean_inc_ref(v_env_4363_);
lean_dec(v___x_4362_);
v___x_4364_ = l_Lean_Environment_header(v_env_4363_);
lean_dec_ref(v_env_4363_);
v_isModule_4365_ = lean_ctor_get_uint8(v___x_4364_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4364_);
if (v_isModule_4365_ == 0)
{
lean_dec_ref(v_val_4360_);
v___y_4250_ = v___x_4355_;
v___y_4251_ = v___x_4315_;
v___y_4252_ = v___f_4361_;
v___y_4253_ = v_a_4309_;
goto v___jp_4249_;
}
else
{
if (v___x_4215_ == 0)
{
lean_object* v___x_4366_; lean_object* v___x_4367_; 
v___x_4366_ = lean_box(0);
v___x_4367_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(v_val_4360_, v___x_4314_, v___f_4361_, v___x_4366_, v_a_3789_, v_a_3790_);
lean_dec_ref(v_val_4360_);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4367_;
goto v___jp_4236_;
}
else
{
lean_object* v_toConstantVal_4368_; lean_object* v_name_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; 
v_toConstantVal_4368_ = lean_ctor_get(v_val_4360_, 0);
v_name_4369_ = lean_ctor_get(v_toConstantVal_4368_, 0);
v___x_4370_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
lean_inc(v_name_4369_);
v___x_4371_ = l_Lean_MessageData_ofName(v_name_4369_);
v___x_4372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4372_, 0, v___x_4370_);
lean_ctor_set(v___x_4372_, 1, v___x_4371_);
v___x_4373_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4372_);
lean_ctor_set(v___x_4374_, 1, v___x_4373_);
v___x_4375_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4374_, v_a_3789_, v_a_3790_);
if (lean_obj_tag(v___x_4375_) == 0)
{
lean_object* v_a_4376_; lean_object* v___x_4377_; 
v_a_4376_ = lean_ctor_get(v___x_4375_, 0);
lean_inc(v_a_4376_);
lean_dec_ref_known(v___x_4375_, 1);
v___x_4377_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(v_val_4360_, v___x_4314_, v___f_4361_, v_a_4376_, v_a_3789_, v_a_3790_);
lean_dec_ref(v_val_4360_);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4377_;
goto v___jp_4236_;
}
else
{
lean_object* v_a_4378_; 
lean_dec_ref(v___f_4361_);
lean_dec_ref(v_val_4360_);
v_a_4378_ = lean_ctor_get(v___x_4375_, 0);
lean_inc(v_a_4378_);
lean_dec_ref_known(v___x_4375_, 1);
v___y_4232_ = v___x_4315_;
v___y_4233_ = v_a_4309_;
v_a_4234_ = v_a_4378_;
goto v___jp_4231_;
}
}
}
}
else
{
lean_dec(v___x_4362_);
lean_dec_ref(v_val_4360_);
v___y_4250_ = v___x_4355_;
v___y_4251_ = v___x_4315_;
v___y_4252_ = v___f_4361_;
v___y_4253_ = v_a_4309_;
goto v___jp_4249_;
}
}
case 1:
{
lean_object* v_val_4379_; lean_object* v___x_4380_; 
lean_del_object(v___x_4311_);
v_val_4379_ = lean_ctor_get(v_decl_3787_, 0);
lean_inc_ref(v_val_4379_);
lean_dec_ref_known(v_decl_3787_, 1);
v___x_4380_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_4359_, v___x_4314_, v_forceExpose_3788_, v___x_4355_, v_cls_3965_, v_val_4379_, v_a_3789_, v_a_3790_);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4380_;
goto v___jp_4236_;
}
case 5:
{
lean_object* v_defns_4381_; 
lean_del_object(v___x_4311_);
v_defns_4381_ = lean_ctor_get(v_decl_3787_, 0);
if (lean_obj_tag(v_defns_4381_) == 1)
{
lean_object* v_tail_4382_; 
v_tail_4382_ = lean_ctor_get(v_defns_4381_, 1);
if (lean_obj_tag(v_tail_4382_) == 0)
{
lean_object* v_head_4383_; lean_object* v___x_4384_; 
lean_inc_ref(v_defns_4381_);
lean_dec_ref_known(v_decl_3787_, 1);
v_head_4383_ = lean_ctor_get(v_defns_4381_, 0);
lean_inc(v_head_4383_);
lean_dec_ref_known(v_defns_4381_, 2);
v___x_4384_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_4359_, v___x_4314_, v_forceExpose_3788_, v___x_4355_, v_cls_3965_, v_head_4383_, v_a_3789_, v_a_3790_);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4384_;
goto v___jp_4236_;
}
else
{
lean_object* v___x_4385_; 
lean_dec_ref(v___f_4359_);
lean_inc_ref(v_decl_3787_);
v___x_4385_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3787_, v_cls_3965_, v_decl_3787_, v_a_3789_, v_a_3790_);
lean_dec_ref_known(v_decl_3787_, 1);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4385_;
goto v___jp_4236_;
}
}
else
{
lean_object* v___x_4386_; 
lean_dec_ref(v___f_4359_);
lean_inc_ref(v_decl_3787_);
v___x_4386_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3787_, v_cls_3965_, v_decl_3787_, v_a_3789_, v_a_3790_);
lean_dec_ref_known(v_decl_3787_, 1);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4386_;
goto v___jp_4236_;
}
}
case 3:
{
lean_object* v_val_4387_; lean_object* v___f_4388_; lean_object* v___x_4389_; lean_object* v_env_4390_; lean_object* v___x_4391_; 
lean_del_object(v___x_4311_);
v_val_4387_ = lean_ctor_get(v_decl_3787_, 0);
lean_inc_ref_n(v_val_4387_, 2);
lean_dec_ref_known(v_decl_3787_, 1);
v___f_4388_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed), 7, 2);
lean_closure_set(v___f_4388_, 0, v_val_4387_);
lean_closure_set(v___f_4388_, 1, v___f_4359_);
v___x_4389_ = lean_st_ref_get(v_a_3790_);
v_env_4390_ = lean_ctor_get(v___x_4389_, 0);
lean_inc_ref(v_env_4390_);
lean_dec(v___x_4389_);
v___x_4391_ = lean_st_ref_get(v_a_3790_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4392_; lean_object* v___x_4393_; uint8_t v_isModule_4394_; 
v_env_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc_ref(v_env_4392_);
lean_dec(v___x_4391_);
v___x_4393_ = l_Lean_Environment_header(v_env_4390_);
lean_dec_ref(v_env_4390_);
v_isModule_4394_ = lean_ctor_get_uint8(v___x_4393_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4393_);
if (v_isModule_4394_ == 0)
{
lean_dec_ref(v_env_4392_);
lean_dec_ref(v_val_4387_);
v___y_4257_ = v___x_4355_;
v___y_4258_ = v___x_4315_;
v___y_4259_ = v_a_4309_;
v___y_4260_ = v___f_4388_;
goto v___jp_4256_;
}
else
{
uint8_t v_isExporting_4395_; 
v_isExporting_4395_ = lean_ctor_get_uint8(v_env_4392_, sizeof(void*)*13);
lean_dec_ref(v_env_4392_);
if (v_isExporting_4395_ == 0)
{
if (v___x_4215_ == 0)
{
lean_object* v___x_4396_; lean_object* v___x_4397_; 
v___x_4396_ = lean_box(0);
v___x_4397_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_4387_, v___f_4388_, v___x_4396_, v_a_3789_, v_a_3790_);
lean_dec_ref(v_val_4387_);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4397_;
goto v___jp_4236_;
}
else
{
lean_object* v_toConstantVal_4398_; lean_object* v_name_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; 
v_toConstantVal_4398_ = lean_ctor_get(v_val_4387_, 0);
v_name_4399_ = lean_ctor_get(v_toConstantVal_4398_, 0);
v___x_4400_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
lean_inc(v_name_4399_);
v___x_4401_ = l_Lean_MessageData_ofName(v_name_4399_);
v___x_4402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4402_, 0, v___x_4400_);
lean_ctor_set(v___x_4402_, 1, v___x_4401_);
v___x_4403_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4404_, 0, v___x_4402_);
lean_ctor_set(v___x_4404_, 1, v___x_4403_);
v___x_4405_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4404_, v_a_3789_, v_a_3790_);
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_object* v_a_4406_; lean_object* v___x_4407_; 
v_a_4406_ = lean_ctor_get(v___x_4405_, 0);
lean_inc(v_a_4406_);
lean_dec_ref_known(v___x_4405_, 1);
v___x_4407_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_4387_, v___f_4388_, v_a_4406_, v_a_3789_, v_a_3790_);
lean_dec_ref(v_val_4387_);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4407_;
goto v___jp_4236_;
}
else
{
lean_object* v_a_4408_; 
lean_dec_ref(v___f_4388_);
lean_dec_ref(v_val_4387_);
v_a_4408_ = lean_ctor_get(v___x_4405_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v___x_4405_, 1);
v___y_4232_ = v___x_4315_;
v___y_4233_ = v_a_4309_;
v_a_4234_ = v_a_4408_;
goto v___jp_4231_;
}
}
}
else
{
lean_dec_ref(v_val_4387_);
v___y_4257_ = v___x_4355_;
v___y_4258_ = v___x_4315_;
v___y_4259_ = v_a_4309_;
v___y_4260_ = v___f_4388_;
goto v___jp_4256_;
}
}
}
else
{
lean_dec(v___x_4391_);
lean_dec_ref(v_env_4390_);
lean_dec_ref(v_val_4387_);
v___y_4257_ = v___x_4355_;
v___y_4258_ = v___x_4315_;
v___y_4259_ = v_a_4309_;
v___y_4260_ = v___f_4388_;
goto v___jp_4256_;
}
}
case 0:
{
lean_object* v_val_4409_; lean_object* v_toConstantVal_4410_; lean_object* v_name_4411_; lean_object* v___x_4413_; 
lean_dec_ref(v___f_4359_);
v_val_4409_ = lean_ctor_get(v_decl_3787_, 0);
v_toConstantVal_4410_ = lean_ctor_get(v_val_4409_, 0);
v_name_4411_ = lean_ctor_get(v_toConstantVal_4410_, 0);
lean_inc_ref(v_val_4409_);
if (v_isShared_4312_ == 0)
{
lean_ctor_set(v___x_4311_, 0, v_val_4409_);
v___x_4413_ = v___x_4311_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4419_; 
v_reuseFailAlloc_4419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4419_, 0, v_val_4409_);
v___x_4413_ = v_reuseFailAlloc_4419_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
uint8_t v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; 
v___x_4414_ = 2;
v___x_4415_ = lean_box(v___x_4414_);
v___x_4416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4416_, 0, v___x_4413_);
lean_ctor_set(v___x_4416_, 1, v___x_4415_);
lean_inc(v_name_4411_);
v___x_4417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4417_, 0, v_name_4411_);
lean_ctor_set(v___x_4417_, 1, v___x_4416_);
v___x_4418_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(v_decl_3787_, v_hasTrace_3821_, v___x_4314_, v_cls_3965_, v___x_3964_, v___x_4331_, v___x_4355_, v___x_4417_, v___x_4355_, v_a_3789_, v_a_3790_);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4418_;
goto v___jp_4236_;
}
}
default: 
{
lean_object* v___x_4420_; 
lean_dec_ref(v___f_4359_);
lean_del_object(v___x_4311_);
lean_inc(v_decl_3787_);
v___x_4420_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3787_, v_cls_3965_, v_decl_3787_, v_a_3789_, v_a_3790_);
lean_dec(v_decl_3787_);
v___y_4237_ = v___x_4315_;
v___y_4238_ = v_a_4309_;
v___y_4239_ = v___x_4420_;
goto v___jp_4236_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v_env_4429_; lean_object* v_nextMacroScope_4430_; lean_object* v_ngen_4431_; lean_object* v_auxDeclNGen_4432_; lean_object* v_traceState_4433_; lean_object* v_recordedDeps_4434_; lean_object* v_messages_4435_; lean_object* v_infoState_4436_; lean_object* v_snapshotTasks_4437_; lean_object* v___x_4439_; uint8_t v_isShared_4440_; uint8_t v_isSharedCheck_4536_; 
v___x_4427_ = lean_io_get_num_heartbeats();
v___x_4428_ = lean_st_ref_take(v_a_3790_);
v_env_4429_ = lean_ctor_get(v___x_4428_, 0);
v_nextMacroScope_4430_ = lean_ctor_get(v___x_4428_, 1);
v_ngen_4431_ = lean_ctor_get(v___x_4428_, 2);
v_auxDeclNGen_4432_ = lean_ctor_get(v___x_4428_, 3);
v_traceState_4433_ = lean_ctor_get(v___x_4428_, 4);
v_recordedDeps_4434_ = lean_ctor_get(v___x_4428_, 6);
v_messages_4435_ = lean_ctor_get(v___x_4428_, 7);
v_infoState_4436_ = lean_ctor_get(v___x_4428_, 8);
v_snapshotTasks_4437_ = lean_ctor_get(v___x_4428_, 9);
v_isSharedCheck_4536_ = !lean_is_exclusive(v___x_4428_);
if (v_isSharedCheck_4536_ == 0)
{
lean_object* v_unused_4537_; 
v_unused_4537_ = lean_ctor_get(v___x_4428_, 5);
lean_dec(v_unused_4537_);
v___x_4439_ = v___x_4428_;
v_isShared_4440_ = v_isSharedCheck_4536_;
goto v_resetjp_4438_;
}
else
{
lean_inc(v_snapshotTasks_4437_);
lean_inc(v_infoState_4436_);
lean_inc(v_messages_4435_);
lean_inc(v_recordedDeps_4434_);
lean_inc(v_traceState_4433_);
lean_inc(v_auxDeclNGen_4432_);
lean_inc(v_ngen_4431_);
lean_inc(v_nextMacroScope_4430_);
lean_inc(v_env_4429_);
lean_dec(v___x_4428_);
v___x_4439_ = lean_box(0);
v_isShared_4440_ = v_isSharedCheck_4536_;
goto v_resetjp_4438_;
}
v_resetjp_4438_:
{
lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4445_; 
lean_inc(v_decl_3787_);
v___x_4441_ = l_Lean_Declaration_getNames(v_decl_3787_);
v___x_4442_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_4429_, v___x_4441_);
v___x_4443_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_4440_ == 0)
{
lean_ctor_set(v___x_4439_, 5, v___x_4443_);
lean_ctor_set(v___x_4439_, 0, v___x_4442_);
v___x_4445_ = v___x_4439_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v___x_4442_);
lean_ctor_set(v_reuseFailAlloc_4535_, 1, v_nextMacroScope_4430_);
lean_ctor_set(v_reuseFailAlloc_4535_, 2, v_ngen_4431_);
lean_ctor_set(v_reuseFailAlloc_4535_, 3, v_auxDeclNGen_4432_);
lean_ctor_set(v_reuseFailAlloc_4535_, 4, v_traceState_4433_);
lean_ctor_set(v_reuseFailAlloc_4535_, 5, v___x_4443_);
lean_ctor_set(v_reuseFailAlloc_4535_, 6, v_recordedDeps_4434_);
lean_ctor_set(v_reuseFailAlloc_4535_, 7, v_messages_4435_);
lean_ctor_set(v_reuseFailAlloc_4535_, 8, v_infoState_4436_);
lean_ctor_set(v_reuseFailAlloc_4535_, 9, v_snapshotTasks_4437_);
v___x_4445_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v_env_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v_env_4451_; lean_object* v_nextMacroScope_4452_; lean_object* v_ngen_4453_; lean_object* v_auxDeclNGen_4454_; lean_object* v_traceState_4455_; lean_object* v_recordedDeps_4456_; lean_object* v_messages_4457_; lean_object* v_infoState_4458_; lean_object* v_snapshotTasks_4459_; lean_object* v___x_4461_; uint8_t v_isShared_4462_; uint8_t v_isSharedCheck_4533_; 
v___x_4446_ = lean_st_ref_put(v_a_3790_, v___x_4445_);
v___x_4447_ = lean_st_ref_get(v_a_3790_);
v_env_4448_ = lean_ctor_get(v___x_4447_, 0);
lean_inc_ref(v_env_4448_);
lean_dec(v___x_4447_);
v___x_4449_ = l_Lean_getExplicitRewriteRules(v_env_4448_);
v___x_4450_ = lean_st_ref_take(v_a_3790_);
v_env_4451_ = lean_ctor_get(v___x_4450_, 0);
v_nextMacroScope_4452_ = lean_ctor_get(v___x_4450_, 1);
v_ngen_4453_ = lean_ctor_get(v___x_4450_, 2);
v_auxDeclNGen_4454_ = lean_ctor_get(v___x_4450_, 3);
v_traceState_4455_ = lean_ctor_get(v___x_4450_, 4);
v_recordedDeps_4456_ = lean_ctor_get(v___x_4450_, 6);
v_messages_4457_ = lean_ctor_get(v___x_4450_, 7);
v_infoState_4458_ = lean_ctor_get(v___x_4450_, 8);
v_snapshotTasks_4459_ = lean_ctor_get(v___x_4450_, 9);
v_isSharedCheck_4533_ = !lean_is_exclusive(v___x_4450_);
if (v_isSharedCheck_4533_ == 0)
{
lean_object* v_unused_4534_; 
v_unused_4534_ = lean_ctor_get(v___x_4450_, 5);
lean_dec(v_unused_4534_);
v___x_4461_ = v___x_4450_;
v_isShared_4462_ = v_isSharedCheck_4533_;
goto v_resetjp_4460_;
}
else
{
lean_inc(v_snapshotTasks_4459_);
lean_inc(v_infoState_4458_);
lean_inc(v_messages_4457_);
lean_inc(v_recordedDeps_4456_);
lean_inc(v_traceState_4455_);
lean_inc(v_auxDeclNGen_4454_);
lean_inc(v_ngen_4453_);
lean_inc(v_nextMacroScope_4452_);
lean_inc(v_env_4451_);
lean_dec(v___x_4450_);
v___x_4461_ = lean_box(0);
v_isShared_4462_ = v_isSharedCheck_4533_;
goto v_resetjp_4460_;
}
v_resetjp_4460_:
{
lean_object* v___x_4463_; lean_object* v___x_4465_; 
lean_inc(v_decl_3787_);
v___x_4463_ = l___private_Lean_AddDecl_0__Lean_recordRewriteSets(v_decl_3787_, v___x_4449_, v_env_4451_);
if (v_isShared_4462_ == 0)
{
lean_ctor_set(v___x_4461_, 5, v___x_4443_);
lean_ctor_set(v___x_4461_, 0, v___x_4463_);
v___x_4465_ = v___x_4461_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4532_; 
v_reuseFailAlloc_4532_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4532_, 0, v___x_4463_);
lean_ctor_set(v_reuseFailAlloc_4532_, 1, v_nextMacroScope_4452_);
lean_ctor_set(v_reuseFailAlloc_4532_, 2, v_ngen_4453_);
lean_ctor_set(v_reuseFailAlloc_4532_, 3, v_auxDeclNGen_4454_);
lean_ctor_set(v_reuseFailAlloc_4532_, 4, v_traceState_4455_);
lean_ctor_set(v_reuseFailAlloc_4532_, 5, v___x_4443_);
lean_ctor_set(v_reuseFailAlloc_4532_, 6, v_recordedDeps_4456_);
lean_ctor_set(v_reuseFailAlloc_4532_, 7, v_messages_4457_);
lean_ctor_set(v_reuseFailAlloc_4532_, 8, v_infoState_4458_);
lean_ctor_set(v_reuseFailAlloc_4532_, 9, v_snapshotTasks_4459_);
v___x_4465_ = v_reuseFailAlloc_4532_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___f_4470_; 
v___x_4466_ = lean_st_ref_put(v_a_3790_, v___x_4465_);
v___x_4467_ = lean_box(0);
v___x_4468_ = lean_box(v___x_4314_);
v___x_4469_ = lean_box(v___x_3964_);
lean_inc(v_decl_3787_);
v___f_4470_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed), 11, 6);
lean_closure_set(v___f_4470_, 0, v_decl_3787_);
lean_closure_set(v___f_4470_, 1, v___x_4468_);
lean_closure_set(v___f_4470_, 2, v_cls_3965_);
lean_closure_set(v___f_4470_, 3, v___x_4469_);
lean_closure_set(v___f_4470_, 4, v___x_4443_);
lean_closure_set(v___f_4470_, 5, v___x_4467_);
switch(lean_obj_tag(v_decl_3787_))
{
case 2:
{
lean_object* v_val_4471_; lean_object* v___f_4472_; lean_object* v___x_4473_; 
lean_del_object(v___x_4311_);
v_val_4471_ = lean_ctor_get(v_decl_3787_, 0);
lean_inc_ref_n(v_val_4471_, 2);
lean_dec_ref_known(v_decl_3787_, 1);
v___f_4472_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed), 7, 2);
lean_closure_set(v___f_4472_, 0, v_val_4471_);
lean_closure_set(v___f_4472_, 1, v___f_4470_);
v___x_4473_ = lean_st_ref_get(v_a_3790_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4474_; lean_object* v___x_4475_; uint8_t v_isModule_4476_; 
v_env_4474_ = lean_ctor_get(v___x_4473_, 0);
lean_inc_ref(v_env_4474_);
lean_dec(v___x_4473_);
v___x_4475_ = l_Lean_Environment_header(v_env_4474_);
lean_dec_ref(v_env_4474_);
v_isModule_4476_ = lean_ctor_get_uint8(v___x_4475_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4475_);
if (v_isModule_4476_ == 0)
{
lean_dec_ref(v_val_4471_);
v___y_4301_ = v___x_4427_;
v___y_4302_ = v___x_4467_;
v___y_4303_ = v_a_4309_;
v___y_4304_ = v___f_4472_;
goto v___jp_4300_;
}
else
{
if (v___x_4215_ == 0)
{
lean_object* v___x_4477_; lean_object* v___x_4478_; 
v___x_4477_ = lean_box(0);
v___x_4478_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_4471_, v___f_4472_, v___x_4477_, v_a_3789_, v_a_3790_);
lean_dec_ref(v_val_4471_);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4478_;
goto v___jp_4280_;
}
else
{
lean_object* v_toConstantVal_4479_; lean_object* v_name_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v_toConstantVal_4479_ = lean_ctor_get(v_val_4471_, 0);
v_name_4480_ = lean_ctor_get(v_toConstantVal_4479_, 0);
v___x_4481_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
lean_inc(v_name_4480_);
v___x_4482_ = l_Lean_MessageData_ofName(v_name_4480_);
v___x_4483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4483_, 0, v___x_4481_);
lean_ctor_set(v___x_4483_, 1, v___x_4482_);
v___x_4484_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4485_, 0, v___x_4483_);
lean_ctor_set(v___x_4485_, 1, v___x_4484_);
v___x_4486_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4485_, v_a_3789_, v_a_3790_);
if (lean_obj_tag(v___x_4486_) == 0)
{
lean_object* v_a_4487_; lean_object* v___x_4488_; 
v_a_4487_ = lean_ctor_get(v___x_4486_, 0);
lean_inc(v_a_4487_);
lean_dec_ref_known(v___x_4486_, 1);
v___x_4488_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_4471_, v___f_4472_, v_a_4487_, v_a_3789_, v_a_3790_);
lean_dec_ref(v_val_4471_);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4488_;
goto v___jp_4280_;
}
else
{
lean_object* v_a_4489_; 
lean_dec_ref(v___f_4472_);
lean_dec_ref(v_val_4471_);
v_a_4489_ = lean_ctor_get(v___x_4486_, 0);
lean_inc(v_a_4489_);
lean_dec_ref_known(v___x_4486_, 1);
v___y_4276_ = v___x_4427_;
v___y_4277_ = v_a_4309_;
v_a_4278_ = v_a_4489_;
goto v___jp_4275_;
}
}
}
}
else
{
lean_dec(v___x_4473_);
lean_dec_ref(v_val_4471_);
v___y_4301_ = v___x_4427_;
v___y_4302_ = v___x_4467_;
v___y_4303_ = v_a_4309_;
v___y_4304_ = v___f_4472_;
goto v___jp_4300_;
}
}
case 1:
{
lean_object* v_val_4490_; lean_object* v___x_4491_; 
lean_del_object(v___x_4311_);
v_val_4490_ = lean_ctor_get(v_decl_3787_, 0);
lean_inc_ref(v_val_4490_);
lean_dec_ref_known(v_decl_3787_, 1);
v___x_4491_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_4470_, v_forceExpose_3788_, v___x_4467_, v_cls_3965_, v_val_4490_, v_a_3789_, v_a_3790_);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4491_;
goto v___jp_4280_;
}
case 5:
{
lean_object* v_defns_4492_; 
lean_del_object(v___x_4311_);
v_defns_4492_ = lean_ctor_get(v_decl_3787_, 0);
if (lean_obj_tag(v_defns_4492_) == 1)
{
lean_object* v_tail_4493_; 
v_tail_4493_ = lean_ctor_get(v_defns_4492_, 1);
if (lean_obj_tag(v_tail_4493_) == 0)
{
lean_object* v_head_4494_; lean_object* v___x_4495_; 
lean_inc_ref(v_defns_4492_);
lean_dec_ref_known(v_decl_3787_, 1);
v_head_4494_ = lean_ctor_get(v_defns_4492_, 0);
lean_inc(v_head_4494_);
lean_dec_ref_known(v_defns_4492_, 2);
v___x_4495_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_4470_, v_forceExpose_3788_, v___x_4467_, v_cls_3965_, v_head_4494_, v_a_3789_, v_a_3790_);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4495_;
goto v___jp_4280_;
}
else
{
lean_object* v___x_4496_; 
lean_dec_ref(v___f_4470_);
lean_inc_ref(v_decl_3787_);
v___x_4496_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3787_, v_cls_3965_, v_decl_3787_, v_a_3789_, v_a_3790_);
lean_dec_ref_known(v_decl_3787_, 1);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4496_;
goto v___jp_4280_;
}
}
else
{
lean_object* v___x_4497_; 
lean_dec_ref(v___f_4470_);
lean_inc_ref(v_decl_3787_);
v___x_4497_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3787_, v_cls_3965_, v_decl_3787_, v_a_3789_, v_a_3790_);
lean_dec_ref_known(v_decl_3787_, 1);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4497_;
goto v___jp_4280_;
}
}
case 3:
{
lean_object* v_val_4498_; lean_object* v___f_4499_; lean_object* v___x_4500_; lean_object* v_env_4501_; lean_object* v___x_4502_; 
lean_del_object(v___x_4311_);
v_val_4498_ = lean_ctor_get(v_decl_3787_, 0);
lean_inc_ref_n(v_val_4498_, 2);
lean_dec_ref_known(v_decl_3787_, 1);
v___f_4499_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed), 7, 2);
lean_closure_set(v___f_4499_, 0, v_val_4498_);
lean_closure_set(v___f_4499_, 1, v___f_4470_);
v___x_4500_ = lean_st_ref_get(v_a_3790_);
v_env_4501_ = lean_ctor_get(v___x_4500_, 0);
lean_inc_ref(v_env_4501_);
lean_dec(v___x_4500_);
v___x_4502_ = lean_st_ref_get(v_a_3790_);
if (v_forceExpose_3788_ == 0)
{
lean_object* v_env_4503_; lean_object* v___x_4504_; uint8_t v_isModule_4505_; 
v_env_4503_ = lean_ctor_get(v___x_4502_, 0);
lean_inc_ref(v_env_4503_);
lean_dec(v___x_4502_);
v___x_4504_ = l_Lean_Environment_header(v_env_4501_);
lean_dec_ref(v_env_4501_);
v_isModule_4505_ = lean_ctor_get_uint8(v___x_4504_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_4504_);
if (v_isModule_4505_ == 0)
{
lean_dec_ref(v_env_4503_);
lean_dec_ref(v_val_4498_);
v___y_4294_ = v___x_4427_;
v___y_4295_ = v___x_4467_;
v___y_4296_ = v___f_4499_;
v___y_4297_ = v_a_4309_;
goto v___jp_4293_;
}
else
{
uint8_t v_isExporting_4506_; 
v_isExporting_4506_ = lean_ctor_get_uint8(v_env_4503_, sizeof(void*)*13);
lean_dec_ref(v_env_4503_);
if (v_isExporting_4506_ == 0)
{
if (v___x_4215_ == 0)
{
lean_object* v___x_4507_; lean_object* v___x_4508_; 
v___x_4507_ = lean_box(0);
v___x_4508_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_4498_, v___f_4499_, v___x_4507_, v_a_3789_, v_a_3790_);
lean_dec_ref(v_val_4498_);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4508_;
goto v___jp_4280_;
}
else
{
lean_object* v_toConstantVal_4509_; lean_object* v_name_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; 
v_toConstantVal_4509_ = lean_ctor_get(v_val_4498_, 0);
v_name_4510_ = lean_ctor_get(v_toConstantVal_4509_, 0);
v___x_4511_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
lean_inc(v_name_4510_);
v___x_4512_ = l_Lean_MessageData_ofName(v_name_4510_);
v___x_4513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4511_);
lean_ctor_set(v___x_4513_, 1, v___x_4512_);
v___x_4514_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4513_);
lean_ctor_set(v___x_4515_, 1, v___x_4514_);
v___x_4516_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_4515_, v_a_3789_, v_a_3790_);
if (lean_obj_tag(v___x_4516_) == 0)
{
lean_object* v_a_4517_; lean_object* v___x_4518_; 
v_a_4517_ = lean_ctor_get(v___x_4516_, 0);
lean_inc(v_a_4517_);
lean_dec_ref_known(v___x_4516_, 1);
v___x_4518_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_4498_, v___f_4499_, v_a_4517_, v_a_3789_, v_a_3790_);
lean_dec_ref(v_val_4498_);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4518_;
goto v___jp_4280_;
}
else
{
lean_object* v_a_4519_; 
lean_dec_ref(v___f_4499_);
lean_dec_ref(v_val_4498_);
v_a_4519_ = lean_ctor_get(v___x_4516_, 0);
lean_inc(v_a_4519_);
lean_dec_ref_known(v___x_4516_, 1);
v___y_4276_ = v___x_4427_;
v___y_4277_ = v_a_4309_;
v_a_4278_ = v_a_4519_;
goto v___jp_4275_;
}
}
}
else
{
lean_dec_ref(v_val_4498_);
v___y_4294_ = v___x_4427_;
v___y_4295_ = v___x_4467_;
v___y_4296_ = v___f_4499_;
v___y_4297_ = v_a_4309_;
goto v___jp_4293_;
}
}
}
else
{
lean_dec(v___x_4502_);
lean_dec_ref(v_env_4501_);
lean_dec_ref(v_val_4498_);
v___y_4294_ = v___x_4427_;
v___y_4295_ = v___x_4467_;
v___y_4296_ = v___f_4499_;
v___y_4297_ = v_a_4309_;
goto v___jp_4293_;
}
}
case 0:
{
lean_object* v_val_4520_; lean_object* v_toConstantVal_4521_; lean_object* v_name_4522_; lean_object* v___x_4524_; 
lean_dec_ref(v___f_4470_);
v_val_4520_ = lean_ctor_get(v_decl_3787_, 0);
v_toConstantVal_4521_ = lean_ctor_get(v_val_4520_, 0);
v_name_4522_ = lean_ctor_get(v_toConstantVal_4521_, 0);
lean_inc_ref(v_val_4520_);
if (v_isShared_4312_ == 0)
{
lean_ctor_set(v___x_4311_, 0, v_val_4520_);
v___x_4524_ = v___x_4311_;
goto v_reusejp_4523_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v_val_4520_);
v___x_4524_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4523_;
}
v_reusejp_4523_:
{
uint8_t v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4525_ = 2;
v___x_4526_ = lean_box(v___x_4525_);
v___x_4527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4524_);
lean_ctor_set(v___x_4527_, 1, v___x_4526_);
lean_inc(v_name_4522_);
v___x_4528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4528_, 0, v_name_4522_);
lean_ctor_set(v___x_4528_, 1, v___x_4527_);
v___x_4529_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(v_decl_3787_, v___x_4314_, v_cls_3965_, v___x_3964_, v___x_4443_, v___x_4467_, v___x_4528_, v___x_4467_, v_a_3789_, v_a_3790_);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4529_;
goto v___jp_4280_;
}
}
default: 
{
lean_object* v___x_4531_; 
lean_dec_ref(v___f_4470_);
lean_del_object(v___x_4311_);
lean_inc(v_decl_3787_);
v___x_4531_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3787_, v_cls_3965_, v_decl_3787_, v_a_3789_, v_a_3790_);
lean_dec(v_decl_3787_);
v___y_4281_ = v___x_4427_;
v___y_4282_ = v_a_4309_;
v___y_4283_ = v___x_4531_;
goto v___jp_4280_;
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
v___jp_3792_:
{
lean_object* v___x_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
v___x_3796_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3794_, v___y_3793_);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3796_);
if (v_isSharedCheck_3803_ == 0)
{
lean_object* v_unused_3804_; 
v_unused_3804_ = lean_ctor_get(v___x_3796_, 0);
lean_dec(v_unused_3804_);
v___x_3798_ = v___x_3796_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_dec(v___x_3796_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
lean_ctor_set_tag(v___x_3798_, 1);
lean_ctor_set(v___x_3798_, 0, v_a_3795_);
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3795_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
v___jp_3805_:
{
lean_object* v___x_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3816_; 
v___x_3809_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3807_, v___y_3806_);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3809_);
if (v_isSharedCheck_3816_ == 0)
{
lean_object* v_unused_3817_; 
v_unused_3817_ = lean_ctor_get(v___x_3809_, 0);
lean_dec(v_unused_3817_);
v___x_3811_ = v___x_3809_;
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
else
{
lean_dec(v___x_3809_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3814_; 
if (v_isShared_3812_ == 0)
{
lean_ctor_set_tag(v___x_3811_, 1);
lean_ctor_set(v___x_3811_, 0, v_a_3808_);
v___x_3814_ = v___x_3811_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_a_3808_);
v___x_3814_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
return v___x_3814_;
}
}
}
v___jp_3822_:
{
lean_object* v___x_3835_; 
lean_inc_ref(v___y_3825_);
v___x_3835_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_3833_, v___y_3825_, v___y_3829_, v___y_3834_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v___x_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3891_; 
lean_dec_ref_known(v___x_3835_, 1);
lean_dec(v___y_3830_);
lean_inc_ref(v___y_3826_);
v___x_3836_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3826_, v___y_3824_);
v_isSharedCheck_3891_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3891_ == 0)
{
lean_object* v_unused_3892_; 
v_unused_3892_ = lean_ctor_get(v___x_3836_, 0);
lean_dec(v_unused_3892_);
v___x_3838_ = v___x_3836_;
v_isShared_3839_ = v_isSharedCheck_3891_;
goto v_resetjp_3837_;
}
else
{
lean_dec(v___x_3836_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3891_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3840_; lean_object* v___x_3841_; uint8_t v___x_3842_; 
v___x_3840_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3831_);
v___x_3841_ = l_Lean_Elab_async;
v___x_3842_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v___x_3840_, v___x_3841_);
lean_dec_ref(v___x_3840_);
if (v___x_3842_ == 0)
{
lean_object* v___x_3843_; lean_object* v_r_3844_; 
lean_del_object(v___x_3838_);
lean_dec_ref(v___y_3832_);
lean_dec_ref(v___y_3827_);
v___x_3843_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3825_, v___y_3824_);
lean_dec_ref(v___x_3843_);
v_r_3844_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3787_, v___y_3831_, v___y_3824_);
if (lean_obj_tag(v_r_3844_) == 0)
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3863_; 
v_a_3845_ = lean_ctor_get(v_r_3844_, 0);
v_isSharedCheck_3863_ = !lean_is_exclusive(v_r_3844_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3847_ = v_r_3844_;
v_isShared_3848_ = v_isSharedCheck_3863_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v_r_3844_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3863_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
lean_inc(v_a_3845_);
if (v_isShared_3848_ == 0)
{
lean_ctor_set_tag(v___x_3847_, 1);
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
lean_object* v___x_3851_; 
v___x_3851_ = lean_apply_2(v___y_3828_, v___x_3850_, lean_box(0));
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v___x_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
lean_dec_ref_known(v___x_3851_, 1);
v___x_3852_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3826_, v___y_3824_);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3859_ == 0)
{
lean_object* v_unused_3860_; 
v_unused_3860_ = lean_ctor_get(v___x_3852_, 0);
lean_dec(v_unused_3860_);
v___x_3854_ = v___x_3852_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_dec(v___x_3852_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
lean_ctor_set(v___x_3854_, 0, v_a_3845_);
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3845_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
else
{
lean_object* v_a_3861_; 
lean_dec(v_a_3845_);
v_a_3861_ = lean_ctor_get(v___x_3851_, 0);
lean_inc(v_a_3861_);
lean_dec_ref_known(v___x_3851_, 1);
v___y_3806_ = v___y_3824_;
v___y_3807_ = v___y_3826_;
v_a_3808_ = v_a_3861_;
goto v___jp_3805_;
}
}
}
}
else
{
lean_object* v_a_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v_a_3864_ = lean_ctor_get(v_r_3844_, 0);
lean_inc(v_a_3864_);
lean_dec_ref_known(v_r_3844_, 1);
v___x_3865_ = lean_box(0);
v___x_3866_ = lean_apply_2(v___y_3828_, v___x_3865_, lean_box(0));
if (lean_obj_tag(v___x_3866_) == 0)
{
lean_dec_ref_known(v___x_3866_, 1);
v___y_3806_ = v___y_3824_;
v___y_3807_ = v___y_3826_;
v_a_3808_ = v_a_3864_;
goto v___jp_3805_;
}
else
{
lean_object* v_a_3867_; 
lean_dec(v_a_3864_);
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
lean_inc(v_a_3867_);
lean_dec_ref_known(v___x_3866_, 1);
v___y_3806_ = v___y_3824_;
v___y_3807_ = v___y_3826_;
v_a_3808_ = v_a_3867_;
goto v___jp_3805_;
}
}
}
else
{
lean_object* v___x_3868_; lean_object* v___x_3870_; 
lean_dec_ref(v___y_3828_);
lean_dec_ref(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec(v_decl_3787_);
v___x_3868_ = l_IO_CancelToken_new();
if (v_isShared_3839_ == 0)
{
lean_ctor_set_tag(v___x_3838_, 1);
lean_ctor_set(v___x_3838_, 0, v___x_3868_);
v___x_3870_ = v___x_3838_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v___x_3868_);
v___x_3870_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3871_ = lean_unsigned_to_nat(0u);
v___x_3872_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1));
v___x_3873_ = l_Lean_Name_toString(v___x_3872_, v___y_3823_);
lean_inc_ref(v___x_3870_);
v___x_3874_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_3832_, v___x_3870_, v___x_3873_, v___y_3831_, v___y_3824_);
if (lean_obj_tag(v___x_3874_) == 0)
{
lean_object* v_a_3875_; lean_object* v_checked_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; 
v_a_3875_ = lean_ctor_get(v___x_3874_, 0);
lean_inc(v_a_3875_);
lean_dec_ref_known(v___x_3874_, 1);
v_checked_3876_ = lean_ctor_get(v___y_3827_, 2);
lean_inc_ref(v_checked_3876_);
lean_dec_ref(v___y_3827_);
v___x_3877_ = lean_io_map_task(v_a_3875_, v_checked_3876_, v___x_3871_, v_hasTrace_3821_);
v___x_3878_ = lean_box(0);
v___x_3879_ = lean_box(2);
v___x_3880_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3878_);
lean_ctor_set(v___x_3880_, 1, v___x_3879_);
lean_ctor_set(v___x_3880_, 2, v___x_3870_);
lean_ctor_set(v___x_3880_, 3, v___x_3877_);
v___x_3881_ = l_Lean_Core_logSnapshotTask___redArg(v___x_3880_, v___y_3824_);
return v___x_3881_;
}
else
{
lean_object* v_a_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3889_; 
lean_dec_ref(v___x_3870_);
lean_dec_ref(v___y_3827_);
v_a_3882_ = lean_ctor_get(v___x_3874_, 0);
v_isSharedCheck_3889_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3889_ == 0)
{
v___x_3884_ = v___x_3874_;
v_isShared_3885_ = v_isSharedCheck_3889_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_a_3882_);
lean_dec(v___x_3874_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3889_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3887_; 
if (v_isShared_3885_ == 0)
{
v___x_3887_ = v___x_3884_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v_a_3882_);
v___x_3887_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
return v___x_3887_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3904_; 
lean_dec_ref(v___y_3832_);
lean_dec_ref(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec_ref(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec(v_decl_3787_);
v_a_3893_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3895_ = v___x_3835_;
v_isShared_3896_ = v_isSharedCheck_3904_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v___x_3835_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3904_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3897_ = lean_io_error_to_string(v_a_3893_);
v___x_3898_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3897_);
v___x_3899_ = l_Lean_MessageData_ofFormat(v___x_3898_);
v___x_3900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3900_, 0, v___y_3830_);
lean_ctor_set(v___x_3900_, 1, v___x_3899_);
if (v_isShared_3896_ == 0)
{
lean_ctor_set(v___x_3895_, 0, v___x_3900_);
v___x_3902_ = v___x_3895_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v___x_3900_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
}
v___jp_3905_:
{
lean_object* v_ref_3914_; uint8_t v___x_3915_; lean_object* v___x_3916_; 
v_ref_3914_ = lean_ctor_get(v___y_3910_, 2);
v___x_3915_ = 1;
lean_inc_ref(v___y_3912_);
v___x_3916_ = l_Lean_Environment_addConstAsync(v___y_3912_, v___y_3909_, v___y_3908_, v___y_3913_, v_hasTrace_3821_, v___x_3915_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_object* v_a_3917_; lean_object* v_mainEnv_3918_; lean_object* v_asyncEnv_3919_; lean_object* v___f_3920_; lean_object* v___f_3921_; lean_object* v___x_3922_; 
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
lean_inc_n(v_a_3917_, 3);
lean_dec_ref_known(v___x_3916_, 1);
v_mainEnv_3918_ = lean_ctor_get(v_a_3917_, 0);
lean_inc_ref(v_mainEnv_3918_);
v_asyncEnv_3919_ = lean_ctor_get(v_a_3917_, 1);
lean_inc_ref_n(v_asyncEnv_3919_, 2);
lean_inc(v_ref_3914_);
lean_inc(v___y_3906_);
v___f_3920_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3920_, 0, v___y_3906_);
lean_closure_set(v___f_3920_, 1, v_a_3917_);
lean_closure_set(v___f_3920_, 2, v_ref_3914_);
lean_inc(v_decl_3787_);
v___f_3921_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 7, 3);
lean_closure_set(v___f_3921_, 0, v_a_3917_);
lean_closure_set(v___f_3921_, 1, v_asyncEnv_3919_);
lean_closure_set(v___f_3921_, 2, v_decl_3787_);
v___x_3922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3922_, 0, v___y_3911_);
if (lean_obj_tag(v___y_3907_) == 0)
{
lean_inc(v_ref_3914_);
lean_inc_ref(v___x_3922_);
v___y_3823_ = v___x_3915_;
v___y_3824_ = v___y_3906_;
v___y_3825_ = v_asyncEnv_3919_;
v___y_3826_ = v_mainEnv_3918_;
v___y_3827_ = v___y_3912_;
v___y_3828_ = v___f_3920_;
v___y_3829_ = v___x_3922_;
v___y_3830_ = v_ref_3914_;
v___y_3831_ = v___y_3910_;
v___y_3832_ = v___f_3921_;
v___y_3833_ = v_a_3917_;
v___y_3834_ = v___x_3922_;
goto v___jp_3822_;
}
else
{
lean_inc(v_ref_3914_);
v___y_3823_ = v___x_3915_;
v___y_3824_ = v___y_3906_;
v___y_3825_ = v_asyncEnv_3919_;
v___y_3826_ = v_mainEnv_3918_;
v___y_3827_ = v___y_3912_;
v___y_3828_ = v___f_3920_;
v___y_3829_ = v___x_3922_;
v___y_3830_ = v_ref_3914_;
v___y_3831_ = v___y_3910_;
v___y_3832_ = v___f_3921_;
v___y_3833_ = v_a_3917_;
v___y_3834_ = v___y_3907_;
goto v___jp_3822_;
}
}
else
{
lean_object* v_a_3923_; lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3934_; 
lean_dec_ref(v___y_3912_);
lean_dec_ref(v___y_3911_);
lean_dec(v___y_3907_);
lean_dec(v_decl_3787_);
v_a_3923_ = lean_ctor_get(v___x_3916_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3916_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3925_ = v___x_3916_;
v_isShared_3926_ = v_isSharedCheck_3934_;
goto v_resetjp_3924_;
}
else
{
lean_inc(v_a_3923_);
lean_dec(v___x_3916_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3934_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3932_; 
v___x_3927_ = lean_io_error_to_string(v_a_3923_);
v___x_3928_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3927_);
v___x_3929_ = l_Lean_MessageData_ofFormat(v___x_3928_);
lean_inc(v_ref_3914_);
v___x_3930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3930_, 0, v_ref_3914_);
lean_ctor_set(v___x_3930_, 1, v___x_3929_);
if (v_isShared_3926_ == 0)
{
lean_ctor_set(v___x_3925_, 0, v___x_3930_);
v___x_3932_ = v___x_3925_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v___x_3930_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
}
v___jp_3935_:
{
lean_object* v___x_3942_; 
v___x_3942_ = lean_st_ref_get(v___y_3941_);
if (lean_obj_tag(v_exportedInfo_x3f_3939_) == 0)
{
lean_object* v_env_3943_; lean_object* v___x_3944_; 
v_env_3943_ = lean_ctor_get(v___x_3942_, 0);
lean_inc_ref(v_env_3943_);
lean_dec(v___x_3942_);
v___x_3944_ = lean_box(0);
v___y_3906_ = v___y_3941_;
v___y_3907_ = v_exportedInfo_x3f_3939_;
v___y_3908_ = v___y_3938_;
v___y_3909_ = v___y_3936_;
v___y_3910_ = v___y_3940_;
v___y_3911_ = v___y_3937_;
v___y_3912_ = v_env_3943_;
v___y_3913_ = v___x_3944_;
goto v___jp_3905_;
}
else
{
lean_object* v_env_3945_; lean_object* v_val_3946_; uint8_t v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v_env_3945_ = lean_ctor_get(v___x_3942_, 0);
lean_inc_ref(v_env_3945_);
lean_dec(v___x_3942_);
v_val_3946_ = lean_ctor_get(v_exportedInfo_x3f_3939_, 0);
v___x_3947_ = l_Lean_ConstantKind_ofConstantInfo(v_val_3946_);
v___x_3948_ = lean_box(v___x_3947_);
v___x_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
v___y_3906_ = v___y_3941_;
v___y_3907_ = v_exportedInfo_x3f_3939_;
v___y_3908_ = v___y_3938_;
v___y_3909_ = v___y_3936_;
v___y_3910_ = v___y_3940_;
v___y_3911_ = v___y_3937_;
v___y_3912_ = v_env_3945_;
v___y_3913_ = v___x_3949_;
goto v___jp_3905_;
}
}
v___jp_3950_:
{
lean_object* v___x_3956_; 
lean_inc_ref(v___y_3952_);
v___x_3956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3956_, 0, v___y_3952_);
v___y_3936_ = v___y_3951_;
v___y_3937_ = v___y_3952_;
v___y_3938_ = v___y_3953_;
v_exportedInfo_x3f_3939_ = v___x_3956_;
v___y_3940_ = v___y_3954_;
v___y_3941_ = v___y_3955_;
goto v___jp_3935_;
}
v___jp_3957_:
{
lean_object* v___x_3963_; 
lean_inc_ref(v___y_3959_);
v___x_3963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3963_, 0, v___y_3959_);
v___y_3936_ = v___y_3958_;
v___y_3937_ = v___y_3959_;
v___y_3938_ = v___y_3960_;
v_exportedInfo_x3f_3939_ = v___x_3963_;
v___y_3940_ = v___y_3961_;
v___y_3941_ = v___y_3962_;
goto v___jp_3935_;
}
v___jp_3966_:
{
lean_object* v___x_3971_; uint8_t v___x_3972_; 
v___x_3971_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_3972_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3969_, v_options_3968_, v___x_3971_);
if (v___x_3972_ == 0)
{
lean_object* v___x_3973_; 
v___x_3973_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3787_, v___y_3967_, v___y_3970_);
return v___x_3973_;
}
else
{
lean_object* v___x_3974_; lean_object* v___x_3975_; 
v___x_3974_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1);
v___x_3975_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3965_, v___x_3974_, v___y_3967_, v___y_3970_);
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v___x_3976_; 
lean_dec_ref_known(v___x_3975_, 1);
v___x_3976_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3787_, v___y_3967_, v___y_3970_);
return v___x_3976_;
}
else
{
lean_dec(v_decl_3787_);
return v___x_3975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___boxed(lean_object* v_decl_4931_, lean_object* v_forceExpose_4932_, lean_object* v_a_4933_, lean_object* v_a_4934_, lean_object* v_a_4935_){
_start:
{
uint8_t v_forceExpose_boxed_4936_; lean_object* v_res_4937_; 
v_forceExpose_boxed_4936_ = lean_unbox(v_forceExpose_4932_);
v_res_4937_ = l___private_Lean_AddDecl_0__Lean_addDeclCore(v_decl_4931_, v_forceExpose_boxed_4936_, v_a_4933_, v_a_4934_);
lean_dec(v_a_4934_);
lean_dec_ref(v_a_4933_);
return v_res_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3(lean_object* v_opt_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_){
_start:
{
lean_object* v___x_4942_; 
v___x_4942_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v_opt_4938_, v___y_4939_);
return v___x_4942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___boxed(lean_object* v_opt_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_, lean_object* v___y_4946_){
_start:
{
lean_object* v_res_4947_; 
v_res_4947_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3(v_opt_4943_, v___y_4944_, v___y_4945_);
lean_dec(v___y_4945_);
lean_dec_ref(v___y_4944_);
lean_dec_ref(v_opt_4943_);
return v_res_4947_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0(lean_object* v_x_4948_, lean_object* v_x_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_){
_start:
{
if (lean_obj_tag(v_x_4948_) == 0)
{
lean_object* v___x_4953_; lean_object* v___x_4954_; 
v___x_4953_ = l_List_reverse___redArg(v_x_4949_);
v___x_4954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4954_, 0, v___x_4953_);
return v___x_4954_;
}
else
{
lean_object* v_head_4955_; lean_object* v_tail_4956_; lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_4974_; 
v_head_4955_ = lean_ctor_get(v_x_4948_, 0);
v_tail_4956_ = lean_ctor_get(v_x_4948_, 1);
v_isSharedCheck_4974_ = !lean_is_exclusive(v_x_4948_);
if (v_isSharedCheck_4974_ == 0)
{
v___x_4958_ = v_x_4948_;
v_isShared_4959_ = v_isSharedCheck_4974_;
goto v_resetjp_4957_;
}
else
{
lean_inc(v_tail_4956_);
lean_inc(v_head_4955_);
lean_dec(v_x_4948_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_4974_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v___x_4960_; 
v___x_4960_ = l_Lean_snapshotEnvLinterOptions(v_head_4955_, v___y_4950_, v___y_4951_);
if (lean_obj_tag(v___x_4960_) == 0)
{
lean_object* v_a_4961_; lean_object* v___x_4963_; 
v_a_4961_ = lean_ctor_get(v___x_4960_, 0);
lean_inc(v_a_4961_);
lean_dec_ref_known(v___x_4960_, 1);
if (v_isShared_4959_ == 0)
{
lean_ctor_set(v___x_4958_, 1, v_x_4949_);
lean_ctor_set(v___x_4958_, 0, v_a_4961_);
v___x_4963_ = v___x_4958_;
goto v_reusejp_4962_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v_a_4961_);
lean_ctor_set(v_reuseFailAlloc_4965_, 1, v_x_4949_);
v___x_4963_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4962_;
}
v_reusejp_4962_:
{
v_x_4948_ = v_tail_4956_;
v_x_4949_ = v___x_4963_;
goto _start;
}
}
else
{
lean_object* v_a_4966_; lean_object* v___x_4968_; uint8_t v_isShared_4969_; uint8_t v_isSharedCheck_4973_; 
lean_del_object(v___x_4958_);
lean_dec(v_tail_4956_);
lean_dec(v_x_4949_);
v_a_4966_ = lean_ctor_get(v___x_4960_, 0);
v_isSharedCheck_4973_ = !lean_is_exclusive(v___x_4960_);
if (v_isSharedCheck_4973_ == 0)
{
v___x_4968_ = v___x_4960_;
v_isShared_4969_ = v_isSharedCheck_4973_;
goto v_resetjp_4967_;
}
else
{
lean_inc(v_a_4966_);
lean_dec(v___x_4960_);
v___x_4968_ = lean_box(0);
v_isShared_4969_ = v_isSharedCheck_4973_;
goto v_resetjp_4967_;
}
v_resetjp_4967_:
{
lean_object* v___x_4971_; 
if (v_isShared_4969_ == 0)
{
v___x_4971_ = v___x_4968_;
goto v_reusejp_4970_;
}
else
{
lean_object* v_reuseFailAlloc_4972_; 
v_reuseFailAlloc_4972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4972_, 0, v_a_4966_);
v___x_4971_ = v_reuseFailAlloc_4972_;
goto v_reusejp_4970_;
}
v_reusejp_4970_:
{
return v___x_4971_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0___boxed(lean_object* v_x_4975_, lean_object* v_x_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_){
_start:
{
lean_object* v_res_4980_; 
v_res_4980_ = l_List_mapM_loop___at___00Lean_addDecl_spec__0(v_x_4975_, v_x_4976_, v___y_4977_, v___y_4978_);
lean_dec(v___y_4978_);
lean_dec_ref(v___y_4977_);
return v_res_4980_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDecl(lean_object* v_decl_4981_, uint8_t v_forceExpose_4982_, lean_object* v_a_4983_, lean_object* v_a_4984_){
_start:
{
lean_object* v___x_4986_; 
lean_inc(v_decl_4981_);
v___x_4986_ = l___private_Lean_AddDecl_0__Lean_addDeclCore(v_decl_4981_, v_forceExpose_4982_, v_a_4983_, v_a_4984_);
if (lean_obj_tag(v___x_4986_) == 0)
{
lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; 
lean_dec_ref_known(v___x_4986_, 1);
v___x_4987_ = l_Lean_Declaration_getTopLevelNames(v_decl_4981_);
v___x_4988_ = lean_box(0);
v___x_4989_ = lean_box(0);
v___x_4990_ = l_List_mapM_loop___at___00Lean_addDecl_spec__0(v___x_4987_, v___x_4988_, v_a_4983_, v_a_4984_);
if (lean_obj_tag(v___x_4990_) == 0)
{
lean_object* v___x_4992_; uint8_t v_isShared_4993_; uint8_t v_isSharedCheck_4997_; 
v_isSharedCheck_4997_ = !lean_is_exclusive(v___x_4990_);
if (v_isSharedCheck_4997_ == 0)
{
lean_object* v_unused_4998_; 
v_unused_4998_ = lean_ctor_get(v___x_4990_, 0);
lean_dec(v_unused_4998_);
v___x_4992_ = v___x_4990_;
v_isShared_4993_ = v_isSharedCheck_4997_;
goto v_resetjp_4991_;
}
else
{
lean_dec(v___x_4990_);
v___x_4992_ = lean_box(0);
v_isShared_4993_ = v_isSharedCheck_4997_;
goto v_resetjp_4991_;
}
v_resetjp_4991_:
{
lean_object* v___x_4995_; 
if (v_isShared_4993_ == 0)
{
lean_ctor_set(v___x_4992_, 0, v___x_4989_);
v___x_4995_ = v___x_4992_;
goto v_reusejp_4994_;
}
else
{
lean_object* v_reuseFailAlloc_4996_; 
v_reuseFailAlloc_4996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4996_, 0, v___x_4989_);
v___x_4995_ = v_reuseFailAlloc_4996_;
goto v_reusejp_4994_;
}
v_reusejp_4994_:
{
return v___x_4995_;
}
}
}
else
{
lean_object* v_a_4999_; lean_object* v___x_5001_; uint8_t v_isShared_5002_; uint8_t v_isSharedCheck_5006_; 
v_a_4999_ = lean_ctor_get(v___x_4990_, 0);
v_isSharedCheck_5006_ = !lean_is_exclusive(v___x_4990_);
if (v_isSharedCheck_5006_ == 0)
{
v___x_5001_ = v___x_4990_;
v_isShared_5002_ = v_isSharedCheck_5006_;
goto v_resetjp_5000_;
}
else
{
lean_inc(v_a_4999_);
lean_dec(v___x_4990_);
v___x_5001_ = lean_box(0);
v_isShared_5002_ = v_isSharedCheck_5006_;
goto v_resetjp_5000_;
}
v_resetjp_5000_:
{
lean_object* v___x_5004_; 
if (v_isShared_5002_ == 0)
{
v___x_5004_ = v___x_5001_;
goto v_reusejp_5003_;
}
else
{
lean_object* v_reuseFailAlloc_5005_; 
v_reuseFailAlloc_5005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5005_, 0, v_a_4999_);
v___x_5004_ = v_reuseFailAlloc_5005_;
goto v_reusejp_5003_;
}
v_reusejp_5003_:
{
return v___x_5004_;
}
}
}
}
else
{
lean_dec(v_decl_4981_);
return v___x_4986_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDecl___boxed(lean_object* v_decl_5007_, lean_object* v_forceExpose_5008_, lean_object* v_a_5009_, lean_object* v_a_5010_, lean_object* v_a_5011_){
_start:
{
uint8_t v_forceExpose_boxed_5012_; lean_object* v_res_5013_; 
v_forceExpose_boxed_5012_ = lean_unbox(v_forceExpose_5008_);
v_res_5013_ = l_Lean_addDecl(v_decl_5007_, v_forceExpose_boxed_5012_, v_a_5009_, v_a_5010_);
lean_dec(v_a_5010_);
lean_dec_ref(v_a_5009_);
return v_res_5013_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(lean_object* v_as_x27_5014_, lean_object* v_b_5015_, lean_object* v___y_5016_){
_start:
{
if (lean_obj_tag(v_as_x27_5014_) == 0)
{
lean_object* v___x_5018_; 
v___x_5018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5018_, 0, v_b_5015_);
return v___x_5018_;
}
else
{
lean_object* v_head_5019_; lean_object* v_tail_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v_env_5023_; lean_object* v_nextMacroScope_5024_; lean_object* v_ngen_5025_; lean_object* v_auxDeclNGen_5026_; lean_object* v_traceState_5027_; lean_object* v_recordedDeps_5028_; lean_object* v_messages_5029_; lean_object* v_infoState_5030_; lean_object* v_snapshotTasks_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5042_; 
v_head_5019_ = lean_ctor_get(v_as_x27_5014_, 0);
v_tail_5020_ = lean_ctor_get(v_as_x27_5014_, 1);
v___x_5021_ = lean_box(0);
v___x_5022_ = lean_st_ref_take(v___y_5016_);
v_env_5023_ = lean_ctor_get(v___x_5022_, 0);
v_nextMacroScope_5024_ = lean_ctor_get(v___x_5022_, 1);
v_ngen_5025_ = lean_ctor_get(v___x_5022_, 2);
v_auxDeclNGen_5026_ = lean_ctor_get(v___x_5022_, 3);
v_traceState_5027_ = lean_ctor_get(v___x_5022_, 4);
v_recordedDeps_5028_ = lean_ctor_get(v___x_5022_, 6);
v_messages_5029_ = lean_ctor_get(v___x_5022_, 7);
v_infoState_5030_ = lean_ctor_get(v___x_5022_, 8);
v_snapshotTasks_5031_ = lean_ctor_get(v___x_5022_, 9);
v_isSharedCheck_5042_ = !lean_is_exclusive(v___x_5022_);
if (v_isSharedCheck_5042_ == 0)
{
lean_object* v_unused_5043_; 
v_unused_5043_ = lean_ctor_get(v___x_5022_, 5);
lean_dec(v_unused_5043_);
v___x_5033_ = v___x_5022_;
v_isShared_5034_ = v_isSharedCheck_5042_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_snapshotTasks_5031_);
lean_inc(v_infoState_5030_);
lean_inc(v_messages_5029_);
lean_inc(v_recordedDeps_5028_);
lean_inc(v_traceState_5027_);
lean_inc(v_auxDeclNGen_5026_);
lean_inc(v_ngen_5025_);
lean_inc(v_nextMacroScope_5024_);
lean_inc(v_env_5023_);
lean_dec(v___x_5022_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5042_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5038_; 
lean_inc(v_head_5019_);
v___x_5035_ = l_Lean_markMeta(v_env_5023_, v_head_5019_);
v___x_5036_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_5034_ == 0)
{
lean_ctor_set(v___x_5033_, 5, v___x_5036_);
lean_ctor_set(v___x_5033_, 0, v___x_5035_);
v___x_5038_ = v___x_5033_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v___x_5035_);
lean_ctor_set(v_reuseFailAlloc_5041_, 1, v_nextMacroScope_5024_);
lean_ctor_set(v_reuseFailAlloc_5041_, 2, v_ngen_5025_);
lean_ctor_set(v_reuseFailAlloc_5041_, 3, v_auxDeclNGen_5026_);
lean_ctor_set(v_reuseFailAlloc_5041_, 4, v_traceState_5027_);
lean_ctor_set(v_reuseFailAlloc_5041_, 5, v___x_5036_);
lean_ctor_set(v_reuseFailAlloc_5041_, 6, v_recordedDeps_5028_);
lean_ctor_set(v_reuseFailAlloc_5041_, 7, v_messages_5029_);
lean_ctor_set(v_reuseFailAlloc_5041_, 8, v_infoState_5030_);
lean_ctor_set(v_reuseFailAlloc_5041_, 9, v_snapshotTasks_5031_);
v___x_5038_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
lean_object* v___x_5039_; 
v___x_5039_ = lean_st_ref_put(v___y_5016_, v___x_5038_);
v_as_x27_5014_ = v_tail_5020_;
v_b_5015_ = v___x_5021_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg___boxed(lean_object* v_as_x27_5044_, lean_object* v_b_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_){
_start:
{
lean_object* v_res_5048_; 
v_res_5048_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v_as_x27_5044_, v_b_5045_, v___y_5046_);
lean_dec(v___y_5046_);
lean_dec(v_as_x27_5044_);
return v_res_5048_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAndCompile(lean_object* v_decl_5049_, uint8_t v_logCompileErrors_5050_, uint8_t v_markMeta_5051_, lean_object* v_a_5052_, lean_object* v_a_5053_){
_start:
{
uint8_t v___x_5055_; lean_object* v___x_5056_; 
v___x_5055_ = 0;
lean_inc(v_decl_5049_);
v___x_5056_ = l_Lean_addDecl(v_decl_5049_, v___x_5055_, v_a_5052_, v_a_5053_);
if (lean_obj_tag(v___x_5056_) == 0)
{
lean_dec_ref_known(v___x_5056_, 1);
if (v_markMeta_5051_ == 0)
{
lean_object* v___x_5057_; 
v___x_5057_ = l_Lean_compileDecl(v_decl_5049_, v_logCompileErrors_5050_, v_a_5052_, v_a_5053_);
return v___x_5057_;
}
else
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
lean_inc(v_decl_5049_);
v___x_5058_ = l_Lean_Declaration_getNames(v_decl_5049_);
v___x_5059_ = lean_box(0);
v___x_5060_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v___x_5058_, v___x_5059_, v_a_5053_);
lean_dec(v___x_5058_);
lean_dec_ref(v___x_5060_);
v___x_5061_ = l_Lean_compileDecl(v_decl_5049_, v_logCompileErrors_5050_, v_a_5052_, v_a_5053_);
return v___x_5061_;
}
}
else
{
lean_dec(v_decl_5049_);
return v___x_5056_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addAndCompile___boxed(lean_object* v_decl_5062_, lean_object* v_logCompileErrors_5063_, lean_object* v_markMeta_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_, lean_object* v_a_5067_){
_start:
{
uint8_t v_logCompileErrors_boxed_5068_; uint8_t v_markMeta_boxed_5069_; lean_object* v_res_5070_; 
v_logCompileErrors_boxed_5068_ = lean_unbox(v_logCompileErrors_5063_);
v_markMeta_boxed_5069_ = lean_unbox(v_markMeta_5064_);
v_res_5070_ = l_Lean_addAndCompile(v_decl_5062_, v_logCompileErrors_boxed_5068_, v_markMeta_boxed_5069_, v_a_5065_, v_a_5066_);
lean_dec(v_a_5066_);
lean_dec_ref(v_a_5065_);
return v_res_5070_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(lean_object* v_as_5071_, lean_object* v_as_x27_5072_, lean_object* v_b_5073_, lean_object* v_a_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_){
_start:
{
lean_object* v___x_5078_; 
v___x_5078_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v_as_x27_5072_, v_b_5073_, v___y_5076_);
return v___x_5078_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___boxed(lean_object* v_as_5079_, lean_object* v_as_x27_5080_, lean_object* v_b_5081_, lean_object* v_a_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_){
_start:
{
lean_object* v_res_5086_; 
v_res_5086_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(v_as_5079_, v_as_x27_5080_, v_b_5081_, v_a_5082_, v___y_5083_, v___y_5084_);
lean_dec(v___y_5084_);
lean_dec_ref(v___y_5083_);
lean_dec(v_as_x27_5080_);
lean_dec(v_as_5079_);
return v_res_5086_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sorry(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectAxioms(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* runtime_initialize_Lean_AutoDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_RewriteRules(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_RecDepth(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_RewriteRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_RecDepth(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_warn_sorry = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_warn_sorry);
lean_dec_ref(res);
res = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sorry(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectAxioms(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* initialize_Lean_AutoDecl(uint8_t builtin);
lean_object* initialize_Lean_RewriteRules(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* initialize_Lean_Util_RecDepth(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_RewriteRules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_RecDepth(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_AddDecl(builtin);
}
#ifdef __cplusplus
}
#endif

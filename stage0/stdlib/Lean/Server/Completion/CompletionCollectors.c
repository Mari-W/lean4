// Lean compiler output
// Module: Lean.Server.Completion.CompletionCollectors
// Imports: public import Lean.Data.FuzzyMatching public import Lean.Elab.Tactic.Doc public import Lean.Server.Completion.CompletionResolution public import Lean.Server.Completion.EligibleHeaderDecls public import Lean.Server.RequestCancellation
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_String_charactersIn(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Server_Completion_allowCompletion(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Server_Completion_getCompletionKindForDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionTagsForDecl___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_isPrivatePrefix(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Server_RequestCancellation_requestCancelled;
uint8_t l_Lean_Name_isInternal(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_Zipper_prependNode___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
extern lean_object* l_Lean_errorExplanationExt;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object*, uint8_t, uint8_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_DataValue_str(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Server_Completion_getDotCompletionTypeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_TreeSet_ofArray___redArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCoreUnfoldingAnnotations(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_getAliasState(lean_object*);
uint8_t l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionKindForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionTagsForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getEligibleHeaderDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Data_Trie_findPrefix___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getNamespaces(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_ErrorExplanation_summaryWithSeverity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getDotIdCompletionTypeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_takeWhile___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_forEligibleDeclsM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "keyword"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Server.Completion.CompletionCollectors"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "_private.Lean.Server.Completion.CompletionCollectors.0.Lean.Server.Completion.truncate.go"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1_value;
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "field"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_fieldIdCompletion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Server_Completion_fieldIdCompletion___closed__0 = (const lean_object*)&l_Lean_Server_Completion_fieldIdCompletion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__0_value;
static const lean_string_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "), "};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__1 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__2 = (const lean_object*)&l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__0;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__1;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__2;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__3;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__4;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "error name"};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1_value;
static const lean_array_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3 = (const lean_object*)&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0 = (const lean_object*)&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_Completion_endSectionCompletion___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_Completion_endSectionCompletion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_Completion_endSectionCompletion___closed__0 = (const lean_object*)&l_Lean_Server_Completion_endSectionCompletion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(lean_object* v_item_3_, lean_object* v_id_x3f_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v_uri_8_; lean_object* v_pos_9_; lean_object* v_completionInfoPos_10_; lean_object* v_label_11_; lean_object* v_detail_x3f_12_; lean_object* v_documentation_x3f_13_; lean_object* v_kind_x3f_14_; lean_object* v_textEdit_x3f_15_; lean_object* v_sortText_x3f_16_; lean_object* v_tags_x3f_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_32_; 
v_uri_8_ = lean_ctor_get(v_a_5_, 0);
v_pos_9_ = lean_ctor_get(v_a_5_, 1);
v_completionInfoPos_10_ = lean_ctor_get(v_a_5_, 2);
v_label_11_ = lean_ctor_get(v_item_3_, 0);
v_detail_x3f_12_ = lean_ctor_get(v_item_3_, 1);
v_documentation_x3f_13_ = lean_ctor_get(v_item_3_, 2);
v_kind_x3f_14_ = lean_ctor_get(v_item_3_, 3);
v_textEdit_x3f_15_ = lean_ctor_get(v_item_3_, 4);
v_sortText_x3f_16_ = lean_ctor_get(v_item_3_, 5);
v_tags_x3f_17_ = lean_ctor_get(v_item_3_, 7);
v_isSharedCheck_32_ = !lean_is_exclusive(v_item_3_);
if (v_isSharedCheck_32_ == 0)
{
lean_object* v_unused_33_; 
v_unused_33_ = lean_ctor_get(v_item_3_, 6);
lean_dec(v_unused_33_);
v___x_19_ = v_item_3_;
v_isShared_20_ = v_isSharedCheck_32_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_tags_x3f_17_);
lean_inc(v_sortText_x3f_16_);
lean_inc(v_textEdit_x3f_15_);
lean_inc(v_kind_x3f_14_);
lean_inc(v_documentation_x3f_13_);
lean_inc(v_detail_x3f_12_);
lean_inc(v_label_11_);
lean_dec(v_item_3_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_32_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_25_; 
lean_inc(v_completionInfoPos_10_);
v___x_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_21_, 0, v_completionInfoPos_10_);
lean_inc_ref(v_pos_9_);
lean_inc_ref(v_uri_8_);
v___x_22_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_22_, 0, v_uri_8_);
lean_ctor_set(v___x_22_, 1, v_pos_9_);
lean_ctor_set(v___x_22_, 2, v___x_21_);
lean_ctor_set(v___x_22_, 3, v_id_x3f_4_);
v___x_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
if (v_isShared_20_ == 0)
{
lean_ctor_set(v___x_19_, 6, v___x_23_);
v___x_25_ = v___x_19_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v_label_11_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v_detail_x3f_12_);
lean_ctor_set(v_reuseFailAlloc_31_, 2, v_documentation_x3f_13_);
lean_ctor_set(v_reuseFailAlloc_31_, 3, v_kind_x3f_14_);
lean_ctor_set(v_reuseFailAlloc_31_, 4, v_textEdit_x3f_15_);
lean_ctor_set(v_reuseFailAlloc_31_, 5, v_sortText_x3f_16_);
lean_ctor_set(v_reuseFailAlloc_31_, 6, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_31_, 7, v_tags_x3f_17_);
v___x_25_ = v_reuseFailAlloc_31_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_26_ = lean_st_ref_take(v_a_6_);
v___x_27_ = lean_array_push(v___x_26_, v___x_25_);
v___x_28_ = lean_st_ref_put(v_a_6_, v___x_27_);
v___x_29_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_30_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___boxed(lean_object* v_item_34_, lean_object* v_id_x3f_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_34_, v_id_x3f_35_, v_a_36_, v_a_37_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(lean_object* v_item_40_, lean_object* v_id_x3f_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_40_, v_id_x3f_41_, v_a_42_, v_a_43_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___boxed(lean_object* v_item_51_, lean_object* v_id_x3f_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(v_item_51_, v_id_x3f_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
lean_dec(v_a_59_);
lean_dec_ref(v_a_58_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(lean_object* v_label_62_, lean_object* v_id_63_, uint8_t v_kind_64_, lean_object* v_tags_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v_item_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_69_ = 1;
v___x_70_ = l_Lean_Name_toString(v_label_62_, v___x_69_);
v___x_71_ = lean_box(0);
v___x_72_ = lean_box(v_kind_64_);
v___x_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
v___x_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_74_, 0, v_tags_65_);
v_item_75_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_75_, 0, v___x_70_);
lean_ctor_set(v_item_75_, 1, v___x_71_);
lean_ctor_set(v_item_75_, 2, v___x_71_);
lean_ctor_set(v_item_75_, 3, v___x_73_);
lean_ctor_set(v_item_75_, 4, v___x_71_);
lean_ctor_set(v_item_75_, 5, v___x_71_);
lean_ctor_set(v_item_75_, 6, v___x_71_);
lean_ctor_set(v_item_75_, 7, v___x_74_);
v___x_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_76_, 0, v_id_63_);
v___x_77_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_75_, v___x_76_, v_a_66_, v_a_67_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg___boxed(lean_object* v_label_78_, lean_object* v_id_79_, lean_object* v_kind_80_, lean_object* v_tags_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
uint8_t v_kind_boxed_85_; lean_object* v_res_86_; 
v_kind_boxed_85_ = lean_unbox(v_kind_80_);
v_res_86_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_78_, v_id_79_, v_kind_boxed_85_, v_tags_81_, v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(lean_object* v_label_87_, lean_object* v_id_88_, uint8_t v_kind_89_, lean_object* v_tags_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_87_, v_id_88_, v_kind_89_, v_tags_90_, v_a_91_, v_a_92_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___boxed(lean_object* v_label_100_, lean_object* v_id_101_, lean_object* v_kind_102_, lean_object* v_tags_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_kind_boxed_112_; lean_object* v_res_113_; 
v_kind_boxed_112_ = lean_unbox(v_kind_102_);
v_res_113_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(v_label_100_, v_id_101_, v_kind_boxed_112_, v_tags_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(lean_object* v_label_114_, lean_object* v_declName_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; lean_object* v_env_124_; uint8_t v___x_125_; lean_object* v___x_126_; 
v___x_123_ = lean_st_ref_get(v_a_121_);
v_env_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc_ref(v_env_124_);
lean_dec(v___x_123_);
v___x_125_ = 0;
lean_inc(v_declName_115_);
v___x_126_ = l_Lean_Environment_find_x3f(v_env_124_, v_declName_115_, v___x_125_);
if (lean_obj_tag(v___x_126_) == 1)
{
lean_object* v_val_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_156_; 
v_val_127_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_156_ == 0)
{
v___x_129_ = v___x_126_;
v_isShared_130_ = v_isSharedCheck_156_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_val_127_);
lean_dec(v___x_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_156_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_Server_Completion_getCompletionKindForDecl(v_val_127_, v_a_118_, v_a_119_, v_a_120_, v_a_121_);
lean_dec(v_val_127_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_133_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_131_, 1);
lean_inc(v_declName_115_);
v___x_133_ = l_Lean_Server_Completion_getCompletionTagsForDecl___redArg(v_declName_115_, v_a_121_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc(v_a_134_);
lean_dec_ref_known(v___x_133_, 1);
if (v_isShared_130_ == 0)
{
lean_ctor_set_tag(v___x_129_, 0);
lean_ctor_set(v___x_129_, 0, v_declName_115_);
v___x_136_ = v___x_129_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_declName_115_);
v___x_136_ = v_reuseFailAlloc_139_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
uint8_t v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_unbox(v_a_132_);
lean_dec(v_a_132_);
v___x_138_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_114_, v___x_136_, v___x_137_, v_a_134_, v_a_116_, v_a_117_);
return v___x_138_;
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_a_132_);
lean_del_object(v___x_129_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v_a_140_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_133_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_133_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_del_object(v___x_129_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v_a_148_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_131_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_131_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; 
lean_dec(v___x_126_);
lean_dec(v_declName_115_);
lean_dec(v_label_114_);
v___x_157_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg___boxed(lean_object* v_label_159_, lean_object* v_declName_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v_label_159_, v_declName_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec_ref(v_a_161_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(lean_object* v_label_169_, lean_object* v_declName_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v_label_169_, v_declName_170_, v_a_171_, v_a_172_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___boxed(lean_object* v_label_180_, lean_object* v_declName_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(v_label_180_, v_declName_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(lean_object* v_keyword_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_item_204_; lean_object* v___x_205_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1));
v___x_202_ = lean_box(0);
v___x_203_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2));
v_item_204_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_204_, 0, v_keyword_197_);
lean_ctor_set(v_item_204_, 1, v___x_201_);
lean_ctor_set(v_item_204_, 2, v___x_202_);
lean_ctor_set(v_item_204_, 3, v___x_203_);
lean_ctor_set(v_item_204_, 4, v___x_202_);
lean_ctor_set(v_item_204_, 5, v___x_202_);
lean_ctor_set(v_item_204_, 6, v___x_202_);
lean_ctor_set(v_item_204_, 7, v___x_202_);
v___x_205_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_204_, v___x_202_, v_a_198_, v_a_199_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___boxed(lean_object* v_keyword_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_keyword_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(lean_object* v_keyword_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_keyword_211_, v_a_212_, v_a_213_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___boxed(lean_object* v_keyword_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(v_keyword_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_);
lean_dec(v_a_228_);
lean_dec_ref(v_a_227_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec_ref(v_a_224_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(lean_object* v_ns_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v_item_246_; lean_object* v___x_247_; 
v___x_241_ = 1;
v___x_242_ = l_Lean_Name_toString(v_ns_237_, v___x_241_);
v___x_243_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1));
v___x_244_ = lean_box(0);
v___x_245_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2));
v_item_246_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_246_, 0, v___x_242_);
lean_ctor_set(v_item_246_, 1, v___x_243_);
lean_ctor_set(v_item_246_, 2, v___x_244_);
lean_ctor_set(v_item_246_, 3, v___x_245_);
lean_ctor_set(v_item_246_, 4, v___x_244_);
lean_ctor_set(v_item_246_, 5, v___x_244_);
lean_ctor_set(v_item_246_, 6, v___x_244_);
lean_ctor_set(v_item_246_, 7, v___x_244_);
v___x_247_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_246_, v___x_244_, v_a_238_, v_a_239_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___boxed(lean_object* v_ns_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_ns_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(lean_object* v_ns_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_ns_253_, v_a_254_, v_a_255_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___boxed(lean_object* v_ns_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(v_ns_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
lean_dec(v_a_268_);
lean_dec_ref(v_a_267_);
lean_dec_ref(v_a_266_);
lean_dec(v_a_265_);
lean_dec_ref(v_a_264_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(lean_object* v___x_273_, lean_object* v_x_274_, lean_object* v___x_275_, lean_object* v_a_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_282_ = lean_st_mk_ref(v___x_273_);
lean_inc_ref(v_a_276_);
lean_inc(v___x_282_);
v___x_283_ = lean_apply_8(v_x_274_, v___x_275_, v___x_282_, v_a_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, lean_box(0));
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_312_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_312_ == 0)
{
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_312_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_312_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
if (lean_obj_tag(v_a_284_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_298_; 
lean_dec(v___x_282_);
v_a_288_ = lean_ctor_get(v_a_284_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v_a_284_);
if (v_isSharedCheck_298_ == 0)
{
v___x_290_ = v_a_284_;
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v_a_284_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_297_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_295_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_293_);
v___x_295_ = v___x_286_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_311_; 
v_a_299_ = lean_ctor_get(v_a_284_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v_a_284_);
if (v_isSharedCheck_311_ == 0)
{
v___x_301_ = v_a_284_;
v_isShared_302_ = v_isSharedCheck_311_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v_a_284_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_311_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
v___x_303_ = lean_st_ref_get(v___x_282_);
lean_dec(v___x_282_);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v_a_299_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_304_);
v___x_306_ = v___x_301_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_304_);
v___x_306_ = v_reuseFailAlloc_310_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
lean_object* v___x_308_; 
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_306_);
v___x_308_ = v___x_286_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_306_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec(v___x_282_);
v_a_313_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_283_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_283_);
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
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed(lean_object* v___x_321_, lean_object* v_x_322_, lean_object* v___x_323_, lean_object* v_a_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(v___x_321_, v_x_322_, v___x_323_, v_a_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_);
lean_dec_ref(v_a_324_);
return v_res_330_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = l_Lean_Server_RequestCancellation_requestCancelled;
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(lean_object* v_uri_335_, lean_object* v_pos_336_, lean_object* v_completionInfoPos_337_, lean_object* v_ctx_338_, lean_object* v_lctx_339_, lean_object* v_x_340_, lean_object* v_a_341_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___f_345_; lean_object* v___x_346_; 
v___x_343_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_343_, 0, v_uri_335_);
lean_ctor_set(v___x_343_, 1, v_pos_336_);
lean_ctor_set(v___x_343_, 2, v_completionInfoPos_337_);
v___x_344_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
lean_inc_ref(v_a_341_);
v___f_345_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed), 9, 4);
lean_closure_set(v___f_345_, 0, v___x_344_);
lean_closure_set(v___f_345_, 1, v_x_340_);
lean_closure_set(v___f_345_, 2, v___x_343_);
lean_closure_set(v___f_345_, 3, v_a_341_);
v___x_346_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_338_, v_lctx_339_, v___f_345_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_367_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_367_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_367_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_367_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
if (lean_obj_tag(v_a_347_) == 0)
{
lean_object* v___x_351_; lean_object* v___x_353_; 
lean_dec_ref_known(v_a_347_, 1);
v___x_351_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_351_);
v___x_353_ = v___x_349_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_366_; 
v_a_355_ = lean_ctor_get(v_a_347_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v_a_347_);
if (v_isSharedCheck_366_ == 0)
{
v___x_357_ = v_a_347_;
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v_a_347_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v_snd_359_; lean_object* v___x_361_; 
v_snd_359_ = lean_ctor_get(v_a_355_, 1);
lean_inc(v_snd_359_);
lean_dec(v_a_355_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v_snd_359_);
v___x_361_ = v___x_357_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_snd_359_);
v___x_361_ = v_reuseFailAlloc_365_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_363_; 
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_361_);
v___x_363_ = v___x_349_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_361_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
v_a_368_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_346_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_346_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___boxed(lean_object* v_uri_376_, lean_object* v_pos_377_, lean_object* v_completionInfoPos_378_, lean_object* v_ctx_379_, lean_object* v_lctx_380_, lean_object* v_x_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_376_, v_pos_377_, v_completionInfoPos_378_, v_ctx_379_, v_lctx_380_, v_x_381_, v_a_382_);
lean_dec_ref(v_a_382_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(lean_object* v_declName_385_, lean_object* v_a_386_){
_start:
{
lean_object* v___x_388_; 
lean_inc(v_declName_385_);
v___x_388_ = l_Lean_privateToUserName_x3f(v_declName_385_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_389_, 0, v_declName_385_);
v___x_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
return v___x_390_;
}
else
{
lean_object* v_val_391_; lean_object* v___x_392_; lean_object* v_env_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v_val_391_ = lean_ctor_get(v___x_388_, 0);
v___x_392_ = lean_st_ref_get(v_a_386_);
v_env_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc_ref(v_env_393_);
lean_dec(v___x_392_);
lean_inc(v_val_391_);
v___x_394_ = l_Lean_mkPrivateName(v_env_393_, v_val_391_);
lean_dec_ref(v_env_393_);
v___x_395_ = lean_name_eq(v___x_394_, v_declName_385_);
lean_dec(v_declName_385_);
lean_dec(v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_403_; 
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_403_ == 0)
{
lean_object* v_unused_404_; 
v_unused_404_ = lean_ctor_get(v___x_388_, 0);
lean_dec(v_unused_404_);
v___x_397_ = v___x_388_;
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
else
{
lean_dec(v___x_388_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_403_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_399_ = lean_box(0);
if (v_isShared_398_ == 0)
{
lean_ctor_set_tag(v___x_397_, 0);
lean_ctor_set(v___x_397_, 0, v___x_399_);
v___x_401_ = v___x_397_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
else
{
lean_object* v___x_405_; 
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_388_);
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg___boxed(lean_object* v_declName_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_406_, v_a_407_);
lean_dec(v_a_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(lean_object* v_declName_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_410_, v_a_414_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___boxed(lean_object* v_declName_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(v_declName_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(lean_object* v_ns_424_, lean_object* v_id_425_, uint8_t v_danglingDot_426_, lean_object* v_declName_427_, lean_object* v_a_428_){
_start:
{
lean_object* v___x_433_; lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_493_; 
v___x_433_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_427_, v_a_428_);
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_493_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_493_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_493_;
goto v_resetjp_435_;
}
v___jp_430_:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lean_box(0);
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
v_resetjp_435_:
{
if (lean_obj_tag(v_a_434_) == 1)
{
lean_object* v_val_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_488_; 
v_val_438_ = lean_ctor_get(v_a_434_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v_a_434_);
if (v_isSharedCheck_488_ == 0)
{
v___x_440_ = v_a_434_;
v_isShared_441_ = v_isSharedCheck_488_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_val_438_);
lean_dec(v_a_434_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_488_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
uint8_t v___x_442_; 
v___x_442_ = l_Lean_Name_isPrefixOf(v_ns_424_, v_val_438_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_445_; 
lean_del_object(v___x_440_);
lean_dec(v_val_438_);
v___x_443_ = lean_box(0);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_443_);
v___x_445_ = v___x_436_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_443_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
else
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = lean_box(0);
v___x_448_ = l_Lean_Name_replacePrefix(v_val_438_, v_ns_424_, v___x_447_);
if (v_danglingDot_426_ == 0)
{
if (lean_obj_tag(v_id_425_) == 1)
{
if (lean_obj_tag(v___x_448_) == 1)
{
lean_object* v_pre_449_; lean_object* v_str_450_; lean_object* v_pre_451_; lean_object* v_str_452_; uint8_t v___x_453_; 
v_pre_449_ = lean_ctor_get(v_id_425_, 0);
v_str_450_ = lean_ctor_get(v_id_425_, 1);
v_pre_451_ = lean_ctor_get(v___x_448_, 0);
v_str_452_ = lean_ctor_get(v___x_448_, 1);
v___x_453_ = lean_name_eq(v_pre_449_, v_pre_451_);
if (v___x_453_ == 0)
{
uint8_t v___x_454_; 
v___x_454_ = l_Lean_Name_isAnonymous(v_pre_449_);
if (v___x_454_ == 0)
{
lean_dec_ref_known(v___x_448_, 2);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
uint8_t v___x_455_; 
v___x_455_ = l_Lean_String_charactersIn(v_str_450_, v_str_452_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_458_; 
lean_dec_ref_known(v___x_448_, 2);
lean_del_object(v___x_440_);
v___x_456_ = lean_box(0);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_456_);
v___x_458_ = v___x_436_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_456_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
else
{
lean_object* v___x_461_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_448_);
v___x_461_ = v___x_440_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_448_);
v___x_461_ = v_reuseFailAlloc_465_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v___x_463_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_461_);
v___x_463_ = v___x_436_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
else
{
uint8_t v___x_466_; 
lean_inc_ref(v_str_452_);
lean_dec_ref_known(v___x_448_, 2);
v___x_466_ = l_Lean_String_charactersIn(v_str_450_, v_str_452_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; lean_object* v___x_469_; 
lean_dec_ref(v_str_452_);
lean_del_object(v___x_440_);
v___x_467_ = lean_box(0);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_467_);
v___x_469_ = v___x_436_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
else
{
lean_object* v___x_471_; lean_object* v___x_473_; 
v___x_471_ = l_Lean_Name_str___override(v___x_447_, v_str_452_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_471_);
v___x_473_ = v___x_440_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_471_);
v___x_473_ = v_reuseFailAlloc_477_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
lean_object* v___x_475_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_473_);
v___x_475_ = v___x_436_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
else
{
lean_dec(v___x_448_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
}
else
{
lean_dec(v___x_448_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
}
else
{
uint8_t v___x_478_; 
v___x_478_ = l_Lean_Name_isPrefixOf(v_id_425_, v___x_448_);
if (v___x_478_ == 0)
{
lean_dec(v___x_448_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = l_Lean_Name_replacePrefix(v___x_448_, v_id_425_, v___x_447_);
v___x_480_ = l_Lean_Name_isAtomic(v___x_479_);
if (v___x_480_ == 0)
{
lean_dec(v___x_479_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
else
{
uint8_t v___x_481_; 
v___x_481_ = l_Lean_Name_isAnonymous(v___x_479_);
if (v___x_481_ == 0)
{
lean_object* v___x_483_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v___x_479_);
v___x_483_ = v___x_440_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_479_);
v___x_483_ = v_reuseFailAlloc_487_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
lean_object* v___x_485_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_483_);
v___x_485_ = v___x_436_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
else
{
lean_dec(v___x_479_);
lean_del_object(v___x_440_);
lean_del_object(v___x_436_);
goto v___jp_430_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_489_; lean_object* v___x_491_; 
lean_dec(v_a_434_);
v___x_489_ = lean_box(0);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_489_);
v___x_491_ = v___x_436_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___x_489_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___boxed(lean_object* v_ns_494_, lean_object* v_id_495_, lean_object* v_danglingDot_496_, lean_object* v_declName_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
uint8_t v_danglingDot_boxed_500_; lean_object* v_res_501_; 
v_danglingDot_boxed_500_ = lean_unbox(v_danglingDot_496_);
v_res_501_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_494_, v_id_495_, v_danglingDot_boxed_500_, v_declName_497_, v_a_498_);
lean_dec(v_a_498_);
lean_dec(v_id_495_);
lean_dec(v_ns_494_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(lean_object* v_ns_502_, lean_object* v_id_503_, uint8_t v_danglingDot_504_, lean_object* v_declName_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_502_, v_id_503_, v_danglingDot_504_, v_declName_505_, v_a_509_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___boxed(lean_object* v_ns_512_, lean_object* v_id_513_, lean_object* v_danglingDot_514_, lean_object* v_declName_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
uint8_t v_danglingDot_boxed_521_; lean_object* v_res_522_; 
v_danglingDot_boxed_521_ = lean_unbox(v_danglingDot_514_);
v_res_522_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(v_ns_512_, v_id_513_, v_danglingDot_boxed_521_, v_declName_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_a_517_);
lean_dec_ref(v_a_516_);
lean_dec(v_id_513_);
lean_dec(v_ns_512_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0(lean_object* v___y_523_, lean_object* v_toPure_524_, lean_object* v_a_525_){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v_a_525_);
lean_ctor_set(v___x_526_, 1, v___y_523_);
v___x_527_ = lean_apply_2(v_toPure_524_, lean_box(0), v___x_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1(lean_object* v_f_528_, lean_object* v_decl_529_, lean_object* v_ci_530_, lean_object* v_toPure_531_, lean_object* v_toBind_532_, lean_object* v_____r_533_, lean_object* v___y_534_){
_start:
{
lean_object* v___x_535_; lean_object* v___f_536_; lean_object* v___x_537_; 
v___x_535_ = lean_apply_2(v_f_528_, v_decl_529_, v_ci_530_);
v___f_536_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_536_, 0, v___y_534_);
lean_closure_set(v___f_536_, 1, v_toPure_531_);
v___x_537_ = lean_apply_4(v_toBind_532_, lean_box(0), lean_box(0), v___x_535_, v___f_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2(lean_object* v___f_538_, lean_object* v_____x_539_){
_start:
{
lean_object* v_fst_540_; lean_object* v_snd_541_; lean_object* v___x_542_; 
v_fst_540_ = lean_ctor_get(v_____x_539_, 0);
lean_inc(v_fst_540_);
v_snd_541_ = lean_ctor_get(v_____x_539_, 1);
lean_inc(v_snd_541_);
lean_dec_ref(v_____x_539_);
v___x_542_ = lean_apply_2(v___f_538_, v_fst_540_, v_snd_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(lean_object* v_toPure_546_, lean_object* v_toBind_547_, lean_object* v___f_548_, lean_object* v_____x_549_){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_550_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0));
v___x_551_ = lean_apply_2(v_toPure_546_, lean_box(0), v___x_550_);
v___x_552_ = lean_apply_4(v_toBind_547_, lean_box(0), lean_box(0), v___x_551_, v___f_548_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed(lean_object* v_toPure_553_, lean_object* v_toBind_554_, lean_object* v___f_555_, lean_object* v_____x_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(v_toPure_553_, v_toBind_554_, v___f_555_, v_____x_556_);
lean_dec_ref(v_____x_556_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4(lean_object* v_snd_558_, lean_object* v_toPure_559_, lean_object* v_a_560_){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v_a_560_);
lean_ctor_set(v___x_561_, 1, v_snd_558_);
v___x_562_ = lean_apply_2(v_toPure_559_, lean_box(0), v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5(lean_object* v___f_563_, lean_object* v_toPure_564_, lean_object* v_toBind_565_, lean_object* v_inst_566_, lean_object* v___f_567_, lean_object* v_____x_568_){
_start:
{
lean_object* v_fst_569_; lean_object* v_snd_570_; lean_object* v___x_571_; uint8_t v___x_572_; 
v_fst_569_ = lean_ctor_get(v_____x_568_, 0);
lean_inc(v_fst_569_);
v_snd_570_ = lean_ctor_get(v_____x_568_, 1);
lean_inc(v_snd_570_);
lean_dec_ref(v_____x_568_);
v___x_571_ = lean_unsigned_to_nat(10000u);
v___x_572_ = lean_nat_dec_le(v___x_571_, v_fst_569_);
lean_dec(v_fst_569_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; 
lean_dec(v___f_567_);
lean_dec(v_inst_566_);
lean_dec(v_toBind_565_);
lean_dec(v_toPure_564_);
v___x_573_ = lean_box(0);
v___x_574_ = lean_apply_2(v___f_563_, v___x_573_, v_snd_570_);
return v___x_574_;
}
else
{
lean_object* v___f_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec(v___f_563_);
v___f_575_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4), 3, 2);
lean_closure_set(v___f_575_, 0, v_snd_570_);
lean_closure_set(v___f_575_, 1, v_toPure_564_);
lean_inc(v_toBind_565_);
v___x_576_ = lean_apply_4(v_toBind_565_, lean_box(0), lean_box(0), v_inst_566_, v___f_575_);
v___x_577_ = lean_apply_4(v_toBind_565_, lean_box(0), lean_box(0), v___x_576_, v___f_567_);
return v___x_577_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6(lean_object* v_toPure_578_, lean_object* v_toBind_579_, lean_object* v___f_580_, lean_object* v_____x_581_){
_start:
{
lean_object* v_snd_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_591_; 
v_snd_582_ = lean_ctor_get(v_____x_581_, 1);
v_isSharedCheck_591_ = !lean_is_exclusive(v_____x_581_);
if (v_isSharedCheck_591_ == 0)
{
lean_object* v_unused_592_; 
v_unused_592_ = lean_ctor_get(v_____x_581_, 0);
lean_dec(v_unused_592_);
v___x_584_ = v_____x_581_;
v_isShared_585_ = v_isSharedCheck_591_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_snd_582_);
lean_dec(v_____x_581_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_591_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
lean_inc(v_snd_582_);
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 0, v_snd_582_);
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_snd_582_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_snd_582_);
v___x_587_ = v_reuseFailAlloc_590_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = lean_apply_2(v_toPure_578_, lean_box(0), v___x_587_);
v___x_589_ = lean_apply_4(v_toBind_579_, lean_box(0), lean_box(0), v___x_588_, v___f_580_);
return v___x_589_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(lean_object* v_f_593_, lean_object* v_toPure_594_, lean_object* v_toBind_595_, lean_object* v_inst_596_, lean_object* v_decl_597_, lean_object* v_ci_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___f_600_; lean_object* v___f_601_; lean_object* v___f_602_; lean_object* v___f_603_; lean_object* v___f_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
lean_inc_n(v_toBind_595_, 4);
lean_inc_n(v_toPure_594_, 4);
v___f_600_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1), 7, 5);
lean_closure_set(v___f_600_, 0, v_f_593_);
lean_closure_set(v___f_600_, 1, v_decl_597_);
lean_closure_set(v___f_600_, 2, v_ci_598_);
lean_closure_set(v___f_600_, 3, v_toPure_594_);
lean_closure_set(v___f_600_, 4, v_toBind_595_);
lean_inc_ref(v___f_600_);
v___f_601_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_601_, 0, v___f_600_);
v___f_602_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_602_, 0, v_toPure_594_);
lean_closure_set(v___f_602_, 1, v_toBind_595_);
lean_closure_set(v___f_602_, 2, v___f_601_);
v___f_603_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5), 6, 5);
lean_closure_set(v___f_603_, 0, v___f_600_);
lean_closure_set(v___f_603_, 1, v_toPure_594_);
lean_closure_set(v___f_603_, 2, v_toBind_595_);
lean_closure_set(v___f_603_, 3, v_inst_596_);
lean_closure_set(v___f_603_, 4, v___f_602_);
v___f_604_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6), 4, 3);
lean_closure_set(v___f_604_, 0, v_toPure_594_);
lean_closure_set(v___f_604_, 1, v_toBind_595_);
lean_closure_set(v___f_604_, 2, v___f_603_);
v___x_605_ = lean_box(0);
v___x_606_ = lean_unsigned_to_nat(1u);
v___x_607_ = lean_nat_add(v___y_599_, v___x_606_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_605_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = lean_apply_2(v_toPure_594_, lean_box(0), v___x_608_);
v___x_610_ = lean_apply_4(v_toBind_595_, lean_box(0), lean_box(0), v___x_609_, v___f_604_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed(lean_object* v_f_611_, lean_object* v_toPure_612_, lean_object* v_toBind_613_, lean_object* v_inst_614_, lean_object* v_decl_615_, lean_object* v_ci_616_, lean_object* v___y_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(v_f_611_, v_toPure_612_, v_toBind_613_, v_inst_614_, v_decl_615_, v_ci_616_, v___y_617_);
lean_dec(v___y_617_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(lean_object* v_toPure_619_, lean_object* v_____x_620_){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_box(0);
v___x_622_ = lean_apply_2(v_toPure_619_, lean_box(0), v___x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed(lean_object* v_toPure_623_, lean_object* v_____x_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(v_toPure_623_, v_____x_624_);
lean_dec_ref(v_____x_624_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(lean_object* v_inst_626_, lean_object* v_inst_627_, lean_object* v_inst_628_, lean_object* v_inst_629_, lean_object* v_f_630_){
_start:
{
lean_object* v_toApplicative_631_; lean_object* v_toBind_632_; lean_object* v___f_633_; lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v_getEnv_643_; lean_object* v_modifyEnv_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_662_; 
v_toApplicative_631_ = lean_ctor_get(v_inst_626_, 0);
lean_inc_ref(v_toApplicative_631_);
v_toBind_632_ = lean_ctor_get(v_inst_626_, 1);
lean_inc(v_toBind_632_);
lean_inc_ref_n(v_inst_626_, 7);
v___f_633_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_633_, 0, v_inst_626_);
v___f_634_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_634_, 0, v_inst_626_);
v___f_635_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_635_, 0, v_inst_626_);
v___f_636_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_636_, 0, v_inst_626_);
v___x_637_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_637_, 0, lean_box(0));
lean_closure_set(v___x_637_, 1, lean_box(0));
lean_closure_set(v___x_637_, 2, v_inst_626_);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
lean_ctor_set(v___x_638_, 1, v___f_633_);
v___x_639_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_639_, 0, lean_box(0));
lean_closure_set(v___x_639_, 1, lean_box(0));
lean_closure_set(v___x_639_, 2, v_inst_626_);
v___x_640_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
lean_ctor_set(v___x_640_, 2, v___f_634_);
lean_ctor_set(v___x_640_, 3, v___f_635_);
lean_ctor_set(v___x_640_, 4, v___f_636_);
v___x_641_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_641_, 0, lean_box(0));
lean_closure_set(v___x_641_, 1, lean_box(0));
lean_closure_set(v___x_641_, 2, v_inst_626_);
v___x_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v_getEnv_643_ = lean_ctor_get(v_inst_627_, 0);
v_modifyEnv_644_ = lean_ctor_get(v_inst_627_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v_inst_627_);
if (v_isSharedCheck_662_ == 0)
{
v___x_646_ = v_inst_627_;
v_isShared_647_ = v_isSharedCheck_662_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_modifyEnv_644_);
lean_inc(v_getEnv_643_);
lean_dec(v_inst_627_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_662_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_648_; lean_object* v___f_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
lean_inc_ref(v_inst_626_);
v___x_648_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 3);
lean_closure_set(v___x_648_, 0, lean_box(0));
lean_closure_set(v___x_648_, 1, lean_box(0));
lean_closure_set(v___x_648_, 2, v_inst_626_);
lean_inc_ref(v___x_648_);
v___f_649_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_649_, 0, v_modifyEnv_644_);
lean_closure_set(v___f_649_, 1, v___x_648_);
v___x_650_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 5);
lean_closure_set(v___x_650_, 0, lean_box(0));
lean_closure_set(v___x_650_, 1, lean_box(0));
lean_closure_set(v___x_650_, 2, v_inst_626_);
lean_closure_set(v___x_650_, 3, lean_box(0));
lean_closure_set(v___x_650_, 4, v_getEnv_643_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 1, v___f_649_);
lean_ctor_set(v___x_646_, 0, v___x_650_);
v___x_652_ = v___x_646_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v___f_649_);
v___x_652_ = v_reuseFailAlloc_661_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v_toPure_653_; lean_object* v___f_654_; lean_object* v___f_655_; lean_object* v___f_656_; lean_object* v___x_657_; lean_object* v___x_467__overap_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v_toPure_653_ = lean_ctor_get(v_toApplicative_631_, 1);
lean_inc_n(v_toPure_653_, 2);
lean_dec_ref(v_toApplicative_631_);
lean_inc(v_toBind_632_);
v___f_654_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_654_, 0, v_f_630_);
lean_closure_set(v___f_654_, 1, v_toPure_653_);
lean_closure_set(v___f_654_, 2, v_toBind_632_);
lean_closure_set(v___f_654_, 3, v_inst_629_);
v___f_655_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_655_, 0, v_inst_628_);
lean_closure_set(v___f_655_, 1, v___x_648_);
v___f_656_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed), 2, 1);
lean_closure_set(v___f_656_, 0, v_toPure_653_);
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_467__overap_658_ = l_Lean_Server_Completion_forEligibleDeclsM___redArg(v___x_642_, v___x_652_, v___f_655_, v___f_654_);
v___x_659_ = lean_apply_1(v___x_467__overap_658_, v___x_657_);
v___x_660_ = lean_apply_4(v_toBind_632_, lean_box(0), lean_box(0), v___x_659_, v___f_656_);
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM(lean_object* v_m_663_, lean_object* v_inst_664_, lean_object* v_inst_665_, lean_object* v_inst_666_, lean_object* v_inst_667_, lean_object* v_f_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(v_inst_664_, v_inst_665_, v_inst_666_, v_inst_667_, v_f_668_);
return v___x_669_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(lean_object* v_id_670_, lean_object* v_declName_671_, uint8_t v_danglingDot_672_){
_start:
{
if (v_danglingDot_672_ == 0)
{
if (lean_obj_tag(v_id_670_) == 1)
{
lean_object* v_pre_673_; 
v_pre_673_ = lean_ctor_get(v_id_670_, 0);
if (lean_obj_tag(v_pre_673_) == 0)
{
if (lean_obj_tag(v_declName_671_) == 1)
{
lean_object* v_pre_674_; 
v_pre_674_ = lean_ctor_get(v_declName_671_, 0);
if (lean_obj_tag(v_pre_674_) == 0)
{
lean_object* v_str_675_; lean_object* v_str_676_; uint8_t v___x_677_; 
v_str_675_ = lean_ctor_get(v_id_670_, 1);
v_str_676_ = lean_ctor_get(v_declName_671_, 1);
v___x_677_ = l_Lean_String_charactersIn(v_str_675_, v_str_676_);
return v___x_677_;
}
else
{
return v_danglingDot_672_;
}
}
else
{
return v_danglingDot_672_;
}
}
else
{
return v_danglingDot_672_;
}
}
else
{
return v_danglingDot_672_;
}
}
else
{
uint8_t v___x_678_; 
v___x_678_ = 0;
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic___boxed(lean_object* v_id_679_, lean_object* v_declName_680_, lean_object* v_danglingDot_681_){
_start:
{
uint8_t v_danglingDot_boxed_682_; uint8_t v_res_683_; lean_object* v_r_684_; 
v_danglingDot_boxed_682_ = lean_unbox(v_danglingDot_681_);
v_res_683_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_679_, v_declName_680_, v_danglingDot_boxed_682_);
lean_dec(v_declName_680_);
lean_dec(v_id_679_);
v_r_684_ = lean_box(v_res_683_);
return v_r_684_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(lean_object* v_msg_688_){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0));
v___x_690_ = lean_panic_fn_borrowed(v___x_689_, v_msg_688_);
return v___x_690_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_694_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2));
v___x_695_ = lean_unsigned_to_nat(26u);
v___x_696_ = lean_unsigned_to_nat(177u);
v___x_697_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1));
v___x_698_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0));
v___x_699_ = l_mkPanicMessageWithDecl(v___x_698_, v___x_697_, v___x_696_, v___x_695_, v___x_694_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(lean_object* v_newLen_700_, lean_object* v_id_701_){
_start:
{
switch(lean_obj_tag(v_id_701_))
{
case 0:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
lean_dec(v_newLen_700_);
v___x_702_ = lean_unsigned_to_nat(0u);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v_id_701_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
return v___x_703_;
}
case 1:
{
lean_object* v_pre_704_; lean_object* v_str_705_; lean_object* v___x_706_; lean_object* v_snd_707_; lean_object* v___y_709_; lean_object* v___x_721_; lean_object* v___x_722_; uint8_t v___x_723_; 
v_pre_704_ = lean_ctor_get(v_id_701_, 0);
v_str_705_ = lean_ctor_get(v_id_701_, 1);
lean_inc(v_pre_704_);
lean_inc(v_newLen_700_);
v___x_706_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(v_newLen_700_, v_pre_704_);
v_snd_707_ = lean_ctor_get(v___x_706_, 1);
v___x_721_ = lean_unsigned_to_nat(1u);
v___x_722_ = lean_nat_add(v_snd_707_, v___x_721_);
v___x_723_ = lean_nat_dec_le(v_newLen_700_, v___x_722_);
lean_dec(v___x_722_);
if (v___x_723_ == 0)
{
uint8_t v___x_724_; 
lean_inc(v_snd_707_);
lean_dec_ref(v___x_706_);
v___x_724_ = l_Lean_Name_isAnonymous(v_pre_704_);
if (v___x_724_ == 0)
{
v___y_709_ = v___x_721_;
goto v___jp_708_;
}
else
{
lean_object* v___x_725_; 
v___x_725_ = lean_unsigned_to_nat(0u);
v___y_709_ = v___x_725_;
goto v___jp_708_;
}
}
else
{
lean_dec_ref_known(v_id_701_, 2);
lean_dec(v_newLen_700_);
return v___x_706_;
}
v___jp_708_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v_len_x27_712_; uint8_t v___x_713_; 
v___x_710_ = lean_nat_add(v_snd_707_, v___y_709_);
v___x_711_ = lean_string_length(v_str_705_);
v_len_x27_712_ = lean_nat_add(v___x_710_, v___x_711_);
lean_dec(v___x_710_);
v___x_713_ = lean_nat_dec_le(v_len_x27_712_, v_newLen_700_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
lean_inc_ref(v_str_705_);
lean_inc(v_pre_704_);
lean_dec(v_len_x27_712_);
lean_dec_ref_known(v_id_701_, 2);
v___x_714_ = lean_unsigned_to_nat(0u);
v___x_715_ = lean_nat_sub(v_newLen_700_, v___y_709_);
v___x_716_ = lean_nat_sub(v___x_715_, v_snd_707_);
lean_dec(v_snd_707_);
lean_dec(v___x_715_);
v___x_717_ = lean_string_utf8_extract(v_str_705_, v___x_714_, v___x_716_);
lean_dec(v___x_716_);
lean_dec_ref(v_str_705_);
v___x_718_ = l_Lean_Name_str___override(v_pre_704_, v___x_717_);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
lean_ctor_set(v___x_719_, 1, v_newLen_700_);
return v___x_719_;
}
else
{
lean_object* v___x_720_; 
lean_dec(v_snd_707_);
lean_dec(v_newLen_700_);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v_id_701_);
lean_ctor_set(v___x_720_, 1, v_len_x27_712_);
return v___x_720_;
}
}
}
default: 
{
lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec_ref_known(v_id_701_, 2);
lean_dec(v_newLen_700_);
v___x_726_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3);
v___x_727_ = l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(v___x_726_);
return v___x_727_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(lean_object* v_id_728_, lean_object* v_newLen_729_){
_start:
{
lean_object* v___x_730_; lean_object* v_fst_731_; 
v___x_730_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(v_newLen_729_, v_id_728_);
v_fst_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_fst_731_);
lean_dec_ref(v___x_730_);
return v_fst_731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(lean_object* v_matchUsingNamespace_732_, lean_object* v_ns_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_){
_start:
{
if (lean_obj_tag(v_ns_733_) == 1)
{
lean_object* v_pre_743_; lean_object* v___x_744_; 
v_pre_743_ = lean_ctor_get(v_ns_733_, 0);
lean_inc(v_pre_743_);
lean_inc_ref(v_matchUsingNamespace_732_);
lean_inc(v_a_741_);
lean_inc_ref(v_a_740_);
lean_inc(v_a_739_);
lean_inc_ref(v_a_738_);
lean_inc_ref(v_a_737_);
lean_inc(v_a_736_);
lean_inc_ref(v_a_735_);
v___x_744_ = lean_apply_10(v_matchUsingNamespace_732_, v_ns_733_, v_a_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, lean_box(0));
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
if (lean_obj_tag(v_a_745_) == 0)
{
lean_dec_ref_known(v_a_745_, 1);
lean_dec(v_pre_743_);
lean_dec_ref(v_matchUsingNamespace_732_);
return v___x_744_;
}
else
{
lean_object* v_a_746_; lean_object* v_snd_747_; 
lean_dec_ref_known(v___x_744_, 1);
v_a_746_ = lean_ctor_get(v_a_745_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v_a_745_, 1);
v_snd_747_ = lean_ctor_get(v_a_746_, 1);
lean_inc(v_snd_747_);
lean_dec(v_a_746_);
v_ns_733_ = v_pre_743_;
v_a_734_ = v_snd_747_;
goto _start;
}
}
else
{
lean_dec(v_pre_743_);
lean_dec_ref(v_matchUsingNamespace_732_);
return v___x_744_;
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
lean_dec(v_ns_733_);
lean_dec_ref(v_matchUsingNamespace_732_);
v___x_749_ = lean_box(0);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v_a_734_);
v___x_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
return v___x_752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces___boxed(lean_object* v_matchUsingNamespace_753_, lean_object* v_ns_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(v_matchUsingNamespace_753_, v_ns_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_);
lean_dec(v_a_762_);
lean_dec_ref(v_a_761_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec_ref(v_a_758_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(lean_object* v_id_765_, uint8_t v_danglingDot_766_, lean_object* v_declName_767_, lean_object* v_ns_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v___x_778_; lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_800_; 
v___x_778_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_768_, v_id_765_, v_danglingDot_766_, v_declName_767_, v___y_776_);
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_800_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_800_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_800_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
if (lean_obj_tag(v_a_779_) == 1)
{
lean_object* v_val_783_; lean_object* v___x_784_; lean_object* v___y_786_; 
v_val_783_ = lean_ctor_get(v_a_779_, 0);
v___x_784_ = lean_box(0);
if (lean_obj_tag(v___y_769_) == 0)
{
v___y_786_ = v_a_779_;
goto v___jp_785_;
}
else
{
lean_object* v_val_792_; uint8_t v___x_793_; 
v_val_792_ = lean_ctor_get(v___y_769_, 0);
v___x_793_ = l_Lean_Name_isSuffixOf(v_val_783_, v_val_792_);
if (v___x_793_ == 0)
{
lean_dec_ref_known(v_a_779_, 1);
v___y_786_ = v___y_769_;
goto v___jp_785_;
}
else
{
lean_dec_ref_known(v___y_769_, 1);
v___y_786_ = v_a_779_;
goto v___jp_785_;
}
}
v___jp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_784_);
lean_ctor_set(v___x_787_, 1, v___y_786_);
v___x_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_788_);
v___x_790_ = v___x_781_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v___x_788_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
else
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_798_; 
lean_dec(v_a_779_);
v___x_794_ = lean_box(0);
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
lean_ctor_set(v___x_795_, 1, v___y_769_);
v___x_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_796_);
v___x_798_ = v___x_781_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_796_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed(lean_object* v_id_801_, lean_object* v_danglingDot_802_, lean_object* v_declName_803_, lean_object* v_ns_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
uint8_t v_danglingDot_boxed_814_; lean_object* v_res_815_; 
v_danglingDot_boxed_814_ = lean_unbox(v_danglingDot_802_);
v_res_815_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(v_id_801_, v_danglingDot_boxed_814_, v_declName_803_, v_ns_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v_ns_804_);
lean_dec(v_id_801_);
return v_res_815_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(lean_object* v_a_816_, lean_object* v_x_817_){
_start:
{
if (lean_obj_tag(v_x_817_) == 0)
{
uint8_t v___x_818_; 
v___x_818_ = 0;
return v___x_818_;
}
else
{
lean_object* v_head_819_; lean_object* v_tail_820_; uint8_t v___x_821_; 
v_head_819_ = lean_ctor_get(v_x_817_, 0);
v_tail_820_ = lean_ctor_get(v_x_817_, 1);
v___x_821_ = lean_name_eq(v_a_816_, v_head_819_);
if (v___x_821_ == 0)
{
v_x_817_ = v_tail_820_;
goto _start;
}
else
{
return v___x_821_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0___boxed(lean_object* v_a_823_, lean_object* v_x_824_){
_start:
{
uint8_t v_res_825_; lean_object* v_r_826_; 
v_res_825_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_a_823_, v_x_824_);
lean_dec(v_x_824_);
lean_dec(v_a_823_);
v_r_826_ = lean_box(v_res_825_);
return v_r_826_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(lean_object* v_declName_827_, lean_object* v_id_828_, uint8_t v_danglingDot_829_, lean_object* v_as_x27_830_, lean_object* v_b_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
if (lean_obj_tag(v_as_x27_830_) == 0)
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
lean_dec(v_declName_827_);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v_b_831_);
lean_ctor_set(v___x_835_, 1, v___y_832_);
v___x_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
else
{
lean_object* v_head_838_; lean_object* v_tail_839_; lean_object* v___x_840_; 
v_head_838_ = lean_ctor_get(v_as_x27_830_, 0);
v_tail_839_ = lean_ctor_get(v_as_x27_830_, 1);
v___x_840_ = lean_box(0);
if (lean_obj_tag(v_head_838_) == 0)
{
lean_object* v_ns_841_; lean_object* v_except_842_; uint8_t v___x_843_; 
v_ns_841_ = lean_ctor_get(v_head_838_, 0);
v_except_842_ = lean_ctor_get(v_head_838_, 1);
v___x_843_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_declName_827_, v_except_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; lean_object* v_a_845_; 
lean_inc(v_declName_827_);
v___x_844_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_841_, v_id_828_, v_danglingDot_829_, v_declName_827_, v___y_833_);
v_a_845_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_845_);
lean_dec_ref(v___x_844_);
if (lean_obj_tag(v_a_845_) == 1)
{
if (lean_obj_tag(v___y_832_) == 0)
{
v_as_x27_830_ = v_tail_839_;
v_b_831_ = v___x_840_;
v___y_832_ = v_a_845_;
goto _start;
}
else
{
lean_object* v_val_847_; lean_object* v_val_848_; uint8_t v___x_849_; 
v_val_847_ = lean_ctor_get(v_a_845_, 0);
v_val_848_ = lean_ctor_get(v___y_832_, 0);
v___x_849_ = l_Lean_Name_isSuffixOf(v_val_847_, v_val_848_);
if (v___x_849_ == 0)
{
lean_dec_ref_known(v_a_845_, 1);
v_as_x27_830_ = v_tail_839_;
v_b_831_ = v___x_840_;
goto _start;
}
else
{
lean_dec_ref_known(v___y_832_, 1);
v_as_x27_830_ = v_tail_839_;
v_b_831_ = v___x_840_;
v___y_832_ = v_a_845_;
goto _start;
}
}
}
else
{
lean_dec(v_a_845_);
v_as_x27_830_ = v_tail_839_;
v_b_831_ = v___x_840_;
goto _start;
}
}
else
{
v_as_x27_830_ = v_tail_839_;
v_b_831_ = v___x_840_;
goto _start;
}
}
else
{
v_as_x27_830_ = v_tail_839_;
v_b_831_ = v___x_840_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_declName_855_, lean_object* v_id_856_, lean_object* v_danglingDot_857_, lean_object* v_as_x27_858_, lean_object* v_b_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
uint8_t v_danglingDot_boxed_863_; lean_object* v_res_864_; 
v_danglingDot_boxed_863_ = lean_unbox(v_danglingDot_857_);
v_res_864_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_855_, v_id_856_, v_danglingDot_boxed_863_, v_as_x27_858_, v_b_859_, v___y_860_, v___y_861_);
lean_dec(v___y_861_);
lean_dec(v_as_x27_858_);
lean_dec(v_id_856_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(lean_object* v_declName_865_, lean_object* v_id_866_, uint8_t v_danglingDot_867_, lean_object* v_as_868_, lean_object* v_as_x27_869_, lean_object* v_b_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
if (lean_obj_tag(v_as_x27_869_) == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
lean_dec(v_declName_865_);
v___x_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_880_, 0, v_b_870_);
lean_ctor_set(v___x_880_, 1, v___y_871_);
v___x_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
return v___x_882_;
}
else
{
lean_object* v_head_883_; lean_object* v_tail_884_; lean_object* v___x_885_; 
v_head_883_ = lean_ctor_get(v_as_x27_869_, 0);
v_tail_884_ = lean_ctor_get(v_as_x27_869_, 1);
v___x_885_ = lean_box(0);
if (lean_obj_tag(v_head_883_) == 0)
{
lean_object* v_ns_886_; lean_object* v_except_887_; uint8_t v___x_888_; 
v_ns_886_ = lean_ctor_get(v_head_883_, 0);
v_except_887_ = lean_ctor_get(v_head_883_, 1);
v___x_888_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_declName_865_, v_except_887_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; lean_object* v_a_890_; 
lean_inc(v_declName_865_);
v___x_889_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_886_, v_id_866_, v_danglingDot_867_, v_declName_865_, v___y_878_);
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref(v___x_889_);
if (lean_obj_tag(v_a_890_) == 1)
{
if (lean_obj_tag(v___y_871_) == 0)
{
lean_object* v___x_891_; 
v___x_891_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_865_, v_id_866_, v_danglingDot_867_, v_tail_884_, v___x_885_, v_a_890_, v___y_878_);
return v___x_891_;
}
else
{
lean_object* v_val_892_; lean_object* v_val_893_; uint8_t v___x_894_; 
v_val_892_ = lean_ctor_get(v_a_890_, 0);
v_val_893_ = lean_ctor_get(v___y_871_, 0);
v___x_894_ = l_Lean_Name_isSuffixOf(v_val_892_, v_val_893_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; 
lean_dec_ref_known(v_a_890_, 1);
v___x_895_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_865_, v_id_866_, v_danglingDot_867_, v_tail_884_, v___x_885_, v___y_871_, v___y_878_);
return v___x_895_;
}
else
{
lean_object* v___x_896_; 
lean_dec_ref_known(v___y_871_, 1);
v___x_896_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_865_, v_id_866_, v_danglingDot_867_, v_tail_884_, v___x_885_, v_a_890_, v___y_878_);
return v___x_896_;
}
}
}
else
{
lean_object* v___x_897_; 
lean_dec(v_a_890_);
v___x_897_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_865_, v_id_866_, v_danglingDot_867_, v_tail_884_, v___x_885_, v___y_871_, v___y_878_);
return v___x_897_;
}
}
else
{
lean_object* v___x_898_; 
v___x_898_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_865_, v_id_866_, v_danglingDot_867_, v_tail_884_, v___x_885_, v___y_871_, v___y_878_);
return v___x_898_;
}
}
else
{
lean_object* v___x_899_; 
v___x_899_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_865_, v_id_866_, v_danglingDot_867_, v_tail_884_, v___x_885_, v___y_871_, v___y_878_);
return v___x_899_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg___boxed(lean_object* v_declName_900_, lean_object* v_id_901_, lean_object* v_danglingDot_902_, lean_object* v_as_903_, lean_object* v_as_x27_904_, lean_object* v_b_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
uint8_t v_danglingDot_boxed_915_; lean_object* v_res_916_; 
v_danglingDot_boxed_915_ = lean_unbox(v_danglingDot_902_);
v_res_916_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_900_, v_id_901_, v_danglingDot_boxed_915_, v_as_903_, v_as_x27_904_, v_b_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v_as_x27_904_);
lean_dec(v_as_903_);
lean_dec(v_id_901_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(lean_object* v_ctx_917_, lean_object* v_declName_918_, lean_object* v_id_919_, uint8_t v_danglingDot_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_){
_start:
{
lean_object* v_a_930_; lean_object* v_toCommandContextInfo_933_; lean_object* v_currNamespace_934_; lean_object* v_openDecls_935_; lean_object* v___x_936_; lean_object* v_matchUsingNamespace_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_toCommandContextInfo_933_ = lean_ctor_get(v_ctx_917_, 0);
lean_inc_ref(v_toCommandContextInfo_933_);
lean_dec_ref(v_ctx_917_);
v_currNamespace_934_ = lean_ctor_get(v_toCommandContextInfo_933_, 5);
lean_inc(v_currNamespace_934_);
v_openDecls_935_ = lean_ctor_get(v_toCommandContextInfo_933_, 6);
lean_inc(v_openDecls_935_);
lean_dec_ref(v_toCommandContextInfo_933_);
v___x_936_ = lean_box(v_danglingDot_920_);
lean_inc(v_declName_918_);
lean_inc(v_id_919_);
v_matchUsingNamespace_937_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed), 13, 3);
lean_closure_set(v_matchUsingNamespace_937_, 0, v_id_919_);
lean_closure_set(v_matchUsingNamespace_937_, 1, v___x_936_);
lean_closure_set(v_matchUsingNamespace_937_, 2, v_declName_918_);
v___x_938_ = lean_box(0);
v___x_939_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(v_matchUsingNamespace_937_, v_currNamespace_934_, v___x_938_, v_a_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 1);
if (lean_obj_tag(v_a_940_) == 0)
{
lean_object* v_a_941_; 
lean_dec(v_openDecls_935_);
lean_dec(v_id_919_);
lean_dec(v_declName_918_);
v_a_941_ = lean_ctor_get(v_a_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v_a_940_, 1);
v_a_930_ = v_a_941_;
goto v___jp_929_;
}
else
{
lean_object* v_a_942_; lean_object* v_snd_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_a_942_ = lean_ctor_get(v_a_940_, 0);
lean_inc(v_a_942_);
lean_dec_ref_known(v_a_940_, 1);
v_snd_943_ = lean_ctor_get(v_a_942_, 1);
lean_inc(v_snd_943_);
lean_dec(v_a_942_);
v___x_944_ = lean_box(0);
lean_inc(v_declName_918_);
v___x_945_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_918_, v_id_919_, v_danglingDot_920_, v_openDecls_935_, v_openDecls_935_, v___x_944_, v_snd_943_, v_a_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_);
lean_dec(v_openDecls_935_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v_a_947_; lean_object* v_snd_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_945_, 1);
v_a_947_ = lean_ctor_get(v_a_946_, 0);
lean_inc(v_a_947_);
lean_dec(v_a_946_);
v_snd_948_ = lean_ctor_get(v_a_947_, 1);
lean_inc(v_snd_948_);
lean_dec(v_a_947_);
v___x_949_ = lean_box(0);
v___x_950_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(v_id_919_, v_danglingDot_920_, v_declName_918_, v___x_949_, v_snd_948_, v_a_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_);
lean_dec(v_id_919_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_967_; 
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_967_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_967_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_967_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_966_; 
v_a_955_ = lean_ctor_get(v_a_951_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v_a_951_);
if (v_isSharedCheck_966_ == 0)
{
v___x_957_ = v_a_951_;
v_isShared_958_ = v_isSharedCheck_966_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v_a_951_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_966_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v_snd_959_; lean_object* v___x_961_; 
v_snd_959_ = lean_ctor_get(v_a_955_, 1);
lean_inc(v_snd_959_);
lean_dec(v_a_955_);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v_snd_959_);
v___x_961_ = v___x_957_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_snd_959_);
v___x_961_ = v_reuseFailAlloc_965_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
lean_object* v___x_963_; 
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_961_);
v___x_963_ = v___x_953_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_961_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
v_a_968_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_950_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_950_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
else
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec(v_id_919_);
lean_dec(v_declName_918_);
v_a_976_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_945_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_945_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
lean_dec(v_openDecls_935_);
lean_dec(v_id_919_);
lean_dec(v_declName_918_);
v_a_984_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_939_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_939_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
v___jp_929_:
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v_a_930_);
v___x_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_932_, 0, v___x_931_);
return v___x_932_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___boxed(lean_object* v_ctx_992_, lean_object* v_declName_993_, lean_object* v_id_994_, lean_object* v_danglingDot_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
uint8_t v_danglingDot_boxed_1004_; lean_object* v_res_1005_; 
v_danglingDot_boxed_1004_ = lean_unbox(v_danglingDot_995_);
v_res_1005_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_992_, v_declName_993_, v_id_994_, v_danglingDot_boxed_1004_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_a_1002_);
lean_dec_ref(v_a_1001_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
lean_dec_ref(v_a_998_);
lean_dec(v_a_997_);
lean_dec_ref(v_a_996_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(lean_object* v_declName_1006_, lean_object* v_id_1007_, uint8_t v_danglingDot_1008_, lean_object* v_as_1009_, lean_object* v_as_x27_1010_, lean_object* v_b_1011_, lean_object* v_a_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_1006_, v_id_1007_, v_danglingDot_1008_, v_as_1009_, v_as_x27_1010_, v_b_1011_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___boxed(lean_object* v_declName_1023_, lean_object* v_id_1024_, lean_object* v_danglingDot_1025_, lean_object* v_as_1026_, lean_object* v_as_x27_1027_, lean_object* v_b_1028_, lean_object* v_a_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
uint8_t v_danglingDot_boxed_1039_; lean_object* v_res_1040_; 
v_danglingDot_boxed_1039_ = lean_unbox(v_danglingDot_1025_);
v_res_1040_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(v_declName_1023_, v_id_1024_, v_danglingDot_boxed_1039_, v_as_1026_, v_as_x27_1027_, v_b_1028_, v_a_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec_ref(v___y_1033_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v_as_x27_1027_);
lean_dec(v_as_1026_);
lean_dec(v_id_1024_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(lean_object* v_declName_1041_, lean_object* v_id_1042_, uint8_t v_danglingDot_1043_, lean_object* v_as_1044_, lean_object* v_as_x27_1045_, lean_object* v_b_1046_, lean_object* v_a_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v___x_1057_; 
v___x_1057_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_1041_, v_id_1042_, v_danglingDot_1043_, v_as_x27_1045_, v_b_1046_, v___y_1048_, v___y_1055_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___boxed(lean_object* v_declName_1058_, lean_object* v_id_1059_, lean_object* v_danglingDot_1060_, lean_object* v_as_1061_, lean_object* v_as_x27_1062_, lean_object* v_b_1063_, lean_object* v_a_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
uint8_t v_danglingDot_boxed_1074_; lean_object* v_res_1075_; 
v_danglingDot_boxed_1074_ = lean_unbox(v_danglingDot_1060_);
v_res_1075_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(v_declName_1058_, v_id_1059_, v_danglingDot_boxed_1074_, v_as_1061_, v_as_x27_1062_, v_b_1063_, v_a_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v_as_x27_1062_);
lean_dec(v_as_1061_);
lean_dec(v_id_1059_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(lean_object* v___x_1076_, lean_object* v_ctx_1077_, lean_object* v_id_1078_, uint8_t v_danglingDot_1079_, lean_object* v_a_1080_, lean_object* v_b_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v_a_1091_; lean_object* v_it_1095_; lean_object* v___x_1098_; lean_object* v_it_1100_; lean_object* v_fst_1101_; lean_object* v_it_1126_; lean_object* v_fst_1127_; 
v___x_1098_ = lean_box(0);
if (lean_obj_tag(v_a_1080_) == 0)
{
lean_object* v_a_1129_; lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1197_; 
v_a_1129_ = lean_ctor_get(v_a_1080_, 0);
v_a_1130_ = lean_ctor_get(v_a_1080_, 1);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_a_1080_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1132_ = v_a_1080_;
v_isShared_1133_ = v_isSharedCheck_1197_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_inc(v_a_1129_);
lean_dec(v_a_1080_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1197_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v_it_1135_; lean_object* v_it_u2082_1140_; 
v_it_u2082_1140_ = lean_ctor_get(v_a_1129_, 1);
lean_inc(v_it_u2082_1140_);
if (lean_obj_tag(v_it_u2082_1140_) == 0)
{
lean_object* v_it_u2081_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1165_; 
v_it_u2081_1141_ = lean_ctor_get(v_a_1129_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_a_1129_);
if (v_isSharedCheck_1165_ == 0)
{
lean_object* v_unused_1166_; 
v_unused_1166_ = lean_ctor_get(v_a_1129_, 1);
lean_dec(v_unused_1166_);
v___x_1143_ = v_a_1129_;
v_isShared_1144_ = v_isSharedCheck_1165_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_it_u2081_1141_);
lean_dec(v_a_1129_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1165_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v_array_1145_; lean_object* v_pos_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1164_; 
v_array_1145_ = lean_ctor_get(v_it_u2081_1141_, 0);
v_pos_1146_ = lean_ctor_get(v_it_u2081_1141_, 1);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_it_u2081_1141_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1148_ = v_it_u2081_1141_;
v_isShared_1149_ = v_isSharedCheck_1164_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_pos_1146_);
lean_inc(v_array_1145_);
lean_dec(v_it_u2081_1141_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1164_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1150_; uint8_t v___x_1151_; 
v___x_1150_ = lean_array_get_size(v_array_1145_);
v___x_1151_ = lean_nat_dec_lt(v_pos_1146_, v___x_1150_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; 
lean_del_object(v___x_1148_);
lean_dec(v_pos_1146_);
lean_dec_ref(v_array_1145_);
lean_del_object(v___x_1143_);
lean_del_object(v___x_1132_);
v___x_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1152_, 0, v_a_1130_);
v_a_1080_ = v___x_1152_;
goto _start;
}
else
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1154_ = lean_unsigned_to_nat(1u);
v___x_1155_ = lean_nat_add(v_pos_1146_, v___x_1154_);
lean_inc_ref(v_array_1145_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 1, v___x_1155_);
v___x_1157_ = v___x_1148_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_array_1145_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1161_; 
v___x_1158_ = lean_array_fget(v_array_1145_, v_pos_1146_);
lean_dec(v_pos_1146_);
lean_dec_ref(v_array_1145_);
v___x_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 1, v___x_1159_);
lean_ctor_set(v___x_1143_, 0, v___x_1157_);
v___x_1161_ = v___x_1143_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v___x_1157_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v___x_1159_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
v_it_1135_ = v___x_1161_;
goto v___jp_1134_;
}
}
}
}
}
}
else
{
lean_object* v_val_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1196_; 
v_val_1167_ = lean_ctor_get(v_it_u2082_1140_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_it_u2082_1140_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1169_ = v_it_u2082_1140_;
v_isShared_1170_ = v_isSharedCheck_1196_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_val_1167_);
lean_dec(v_it_u2082_1140_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1196_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
if (lean_obj_tag(v_val_1167_) == 0)
{
lean_object* v_it_u2081_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1179_; 
lean_del_object(v___x_1169_);
v_it_u2081_1171_ = lean_ctor_get(v_a_1129_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_a_1129_);
if (v_isSharedCheck_1179_ == 0)
{
lean_object* v_unused_1180_; 
v_unused_1180_ = lean_ctor_get(v_a_1129_, 1);
lean_dec(v_unused_1180_);
v___x_1173_ = v_a_1129_;
v_isShared_1174_ = v_isSharedCheck_1179_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_it_u2081_1171_);
lean_dec(v_a_1129_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1179_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1175_ = lean_box(0);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v___x_1175_);
v___x_1177_ = v___x_1173_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_it_u2081_1171_);
lean_ctor_set(v_reuseFailAlloc_1178_, 1, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
v_it_1135_ = v___x_1177_;
goto v___jp_1134_;
}
}
}
else
{
lean_object* v_it_u2081_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1194_; 
lean_del_object(v___x_1132_);
v_it_u2081_1181_ = lean_ctor_get(v_a_1129_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_a_1129_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; 
v_unused_1195_ = lean_ctor_get(v_a_1129_, 1);
lean_dec(v_unused_1195_);
v___x_1183_ = v_a_1129_;
v_isShared_1184_ = v_isSharedCheck_1194_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_it_u2081_1181_);
lean_dec(v_a_1129_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1194_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v_key_1185_; lean_object* v_tail_1186_; lean_object* v___x_1188_; 
v_key_1185_ = lean_ctor_get(v_val_1167_, 0);
lean_inc(v_key_1185_);
v_tail_1186_ = lean_ctor_get(v_val_1167_, 2);
lean_inc(v_tail_1186_);
lean_dec_ref_known(v_val_1167_, 3);
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 0, v_tail_1186_);
v___x_1188_ = v___x_1169_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_tail_1186_);
v___x_1188_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1190_; 
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 1, v___x_1188_);
v___x_1190_ = v___x_1183_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_it_u2081_1181_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
lean_ctor_set(v___x_1191_, 1, v_a_1130_);
v_it_1100_ = v___x_1191_;
v_fst_1101_ = v_key_1185_;
goto v___jp_1099_;
}
}
}
}
}
}
v___jp_1134_:
{
lean_object* v___x_1137_; 
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v_it_1135_);
v___x_1137_ = v___x_1132_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_it_1135_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_a_1130_);
v___x_1137_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
v_a_1080_ = v___x_1137_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1198_; 
v_a_1198_ = lean_ctor_get(v_a_1080_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v_a_1080_, 1);
switch(lean_obj_tag(v_a_1198_))
{
case 0:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
lean_dec(v_id_1078_);
lean_dec_ref(v_ctx_1077_);
lean_dec_ref(v___x_1076_);
v___x_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1199_, 0, v_b_1081_);
v___x_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1199_);
return v___x_1200_;
}
case 1:
{
lean_object* v_a_1201_; lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1220_; 
v_a_1201_ = lean_ctor_get(v_a_1198_, 0);
v_a_1202_ = lean_ctor_get(v_a_1198_, 1);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_a_1198_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1204_ = v_a_1198_;
v_isShared_1205_ = v_isSharedCheck_1220_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_inc(v_a_1201_);
lean_dec(v_a_1198_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1220_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v_start_1206_; lean_object* v_stop_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v_start_1206_ = lean_ctor_get(v_a_1201_, 1);
v_stop_1207_ = lean_ctor_get(v_a_1201_, 2);
v___x_1208_ = lean_unsigned_to_nat(0u);
v___x_1209_ = lean_nat_sub(v_stop_1207_, v_start_1206_);
v___x_1210_ = lean_nat_dec_lt(v___x_1208_, v___x_1209_);
lean_dec(v___x_1209_);
if (v___x_1210_ == 0)
{
lean_del_object(v___x_1204_);
lean_dec_ref(v_a_1201_);
v_it_1095_ = v_a_1202_;
goto v___jp_1094_;
}
else
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v_z_1214_; 
v___x_1211_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_a_1201_);
v___x_1212_ = l_Subarray_drop___redArg(v_a_1201_, v___x_1211_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1212_);
v_z_1214_ = v___x_1204_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1212_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v_a_1202_);
v_z_1214_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
lean_object* v___x_1215_; 
v___x_1215_ = l_Subarray_get___redArg(v_a_1201_, v___x_1208_);
lean_dec_ref(v_a_1201_);
switch(lean_obj_tag(v___x_1215_))
{
case 0:
{
lean_object* v_key_1216_; 
v_key_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_key_1216_);
lean_dec_ref_known(v___x_1215_, 2);
v_it_1126_ = v_z_1214_;
v_fst_1127_ = v_key_1216_;
goto v___jp_1125_;
}
case 1:
{
lean_object* v_node_1217_; lean_object* v___x_1218_; 
v_node_1217_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_node_1217_);
lean_dec_ref_known(v___x_1215_, 1);
v___x_1218_ = l_Lean_PersistentHashMap_Zipper_prependNode___redArg(v_node_1217_, v_z_1214_);
v_it_1095_ = v___x_1218_;
goto v___jp_1094_;
}
default: 
{
v_it_1095_ = v_z_1214_;
goto v___jp_1094_;
}
}
}
}
}
}
default: 
{
lean_object* v_vals_1221_; lean_object* v_keys_1222_; lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1239_; 
v_vals_1221_ = lean_ctor_get(v_a_1198_, 1);
v_keys_1222_ = lean_ctor_get(v_a_1198_, 0);
v_a_1223_ = lean_ctor_get(v_a_1198_, 2);
v_isSharedCheck_1239_ = !lean_is_exclusive(v_a_1198_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1225_ = v_a_1198_;
v_isShared_1226_ = v_isSharedCheck_1239_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_inc(v_vals_1221_);
lean_inc(v_keys_1222_);
lean_dec(v_a_1198_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1239_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v_start_1227_; lean_object* v_stop_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; uint8_t v___x_1231_; 
v_start_1227_ = lean_ctor_get(v_vals_1221_, 1);
v_stop_1228_ = lean_ctor_get(v_vals_1221_, 2);
v___x_1229_ = lean_unsigned_to_nat(0u);
v___x_1230_ = lean_nat_sub(v_stop_1228_, v_start_1227_);
v___x_1231_ = lean_nat_dec_lt(v___x_1229_, v___x_1230_);
lean_dec(v___x_1230_);
if (v___x_1231_ == 0)
{
lean_del_object(v___x_1225_);
lean_dec_ref(v_keys_1222_);
lean_dec_ref(v_vals_1221_);
v_it_1095_ = v_a_1223_;
goto v___jp_1094_;
}
else
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1232_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_keys_1222_);
v___x_1233_ = l_Subarray_drop___redArg(v_keys_1222_, v___x_1232_);
v___x_1234_ = l_Subarray_drop___redArg(v_vals_1221_, v___x_1232_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 1, v___x_1234_);
lean_ctor_set(v___x_1225_, 0, v___x_1233_);
v___x_1236_ = v___x_1225_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1233_);
lean_ctor_set(v_reuseFailAlloc_1238_, 1, v___x_1234_);
lean_ctor_set(v_reuseFailAlloc_1238_, 2, v_a_1223_);
v___x_1236_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
lean_object* v___x_1237_; 
v___x_1237_ = l_Subarray_get___redArg(v_keys_1222_, v___x_1229_);
lean_dec_ref(v_keys_1222_);
v_it_1126_ = v___x_1236_;
v_fst_1127_ = v___x_1237_;
goto v___jp_1125_;
}
}
}
}
}
}
v___jp_1090_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1092_, 0, v_a_1091_);
v___x_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
return v___x_1093_;
}
v___jp_1094_:
{
lean_object* v___x_1096_; 
v___x_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1096_, 0, v_it_1095_);
v_a_1080_ = v___x_1096_;
goto _start;
}
v___jp_1099_:
{
uint8_t v___x_1102_; 
v___x_1102_ = l_Lean_Name_isInternal(v_fst_1101_);
if (v___x_1102_ == 0)
{
uint8_t v___x_1103_; uint8_t v___x_1104_; 
v___x_1103_ = 1;
lean_inc(v_fst_1101_);
lean_inc_ref(v___x_1076_);
v___x_1104_ = l_Lean_Environment_contains(v___x_1076_, v_fst_1101_, v___x_1103_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; 
lean_inc(v_id_1078_);
lean_inc_ref(v_ctx_1077_);
v___x_1105_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_1077_, v_fst_1101_, v_id_1078_, v_danglingDot_1079_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1105_, 1);
if (lean_obj_tag(v_a_1106_) == 0)
{
lean_object* v_a_1107_; 
lean_dec_ref(v_it_1100_);
lean_dec(v_id_1078_);
lean_dec_ref(v_ctx_1077_);
lean_dec_ref(v___x_1076_);
v_a_1107_ = lean_ctor_get(v_a_1106_, 0);
lean_inc(v_a_1107_);
lean_dec_ref_known(v_a_1106_, 1);
v_a_1091_ = v_a_1107_;
goto v___jp_1090_;
}
else
{
lean_object* v_a_1108_; 
v_a_1108_ = lean_ctor_get(v_a_1106_, 0);
lean_inc(v_a_1108_);
lean_dec_ref_known(v_a_1106_, 1);
if (lean_obj_tag(v_a_1108_) == 1)
{
lean_object* v_val_1109_; lean_object* v___x_1110_; 
v_val_1109_ = lean_ctor_get(v_a_1108_, 0);
lean_inc(v_val_1109_);
lean_dec_ref_known(v_a_1108_, 1);
v___x_1110_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_val_1109_, v___y_1082_, v___y_1083_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
lean_inc(v_a_1111_);
lean_dec_ref_known(v___x_1110_, 1);
if (lean_obj_tag(v_a_1111_) == 0)
{
lean_object* v_a_1112_; 
lean_dec_ref(v_it_1100_);
lean_dec(v_id_1078_);
lean_dec_ref(v_ctx_1077_);
lean_dec_ref(v___x_1076_);
v_a_1112_ = lean_ctor_get(v_a_1111_, 0);
lean_inc(v_a_1112_);
lean_dec_ref_known(v_a_1111_, 1);
v_a_1091_ = v_a_1112_;
goto v___jp_1090_;
}
else
{
lean_dec_ref_known(v_a_1111_, 1);
v_a_1080_ = v_it_1100_;
v_b_1081_ = v___x_1098_;
goto _start;
}
}
else
{
lean_dec_ref(v_it_1100_);
lean_dec(v_id_1078_);
lean_dec_ref(v_ctx_1077_);
lean_dec_ref(v___x_1076_);
return v___x_1110_;
}
}
else
{
lean_dec(v_a_1108_);
v_a_1080_ = v_it_1100_;
v_b_1081_ = v___x_1098_;
goto _start;
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec_ref(v_it_1100_);
lean_dec(v_id_1078_);
lean_dec_ref(v_ctx_1077_);
lean_dec_ref(v___x_1076_);
v_a_1115_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1105_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1105_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
else
{
lean_dec(v_fst_1101_);
v_a_1080_ = v_it_1100_;
v_b_1081_ = v___x_1098_;
goto _start;
}
}
else
{
lean_dec(v_fst_1101_);
v_a_1080_ = v_it_1100_;
v_b_1081_ = v___x_1098_;
goto _start;
}
}
v___jp_1125_:
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1128_, 0, v_it_1126_);
v_it_1100_ = v___x_1128_;
v_fst_1101_ = v_fst_1127_;
goto v___jp_1099_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg___boxed(lean_object* v___x_1240_, lean_object* v_ctx_1241_, lean_object* v_id_1242_, lean_object* v_danglingDot_1243_, lean_object* v_a_1244_, lean_object* v_b_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
uint8_t v_danglingDot_boxed_1254_; lean_object* v_res_1255_; 
v_danglingDot_boxed_1254_ = lean_unbox(v_danglingDot_1243_);
v_res_1255_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v___x_1240_, v_ctx_1241_, v_id_1242_, v_danglingDot_boxed_1254_, v_a_1244_, v_b_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(lean_object* v_ctx_1256_, lean_object* v_id_1257_, uint8_t v_danglingDot_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v___x_1267_; lean_object* v_env_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1267_ = lean_st_ref_get(v_a_1265_);
v_env_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc_ref_n(v_env_1268_, 2);
lean_dec(v___x_1267_);
v___x_1269_ = l_Lean_Environment_getNamespaces(v_env_1268_);
v___x_1270_ = lean_box(0);
v___x_1271_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v_env_1268_, v_ctx_1256_, v_id_1257_, v_danglingDot_1258_, v___x_1269_, v___x_1270_, v_a_1259_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
if (lean_obj_tag(v_a_1272_) == 0)
{
return v___x_1271_;
}
else
{
lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1280_; 
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1280_ == 0)
{
lean_object* v_unused_1281_; 
v_unused_1281_ = lean_ctor_get(v___x_1271_, 0);
lean_dec(v_unused_1281_);
v___x_1274_ = v___x_1271_;
v_isShared_1275_ = v_isSharedCheck_1280_;
goto v_resetjp_1273_;
}
else
{
lean_dec(v___x_1271_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1280_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1276_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 0, v___x_1276_);
v___x_1278_ = v___x_1274_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
else
{
return v___x_1271_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces___boxed(lean_object* v_ctx_1282_, lean_object* v_id_1283_, lean_object* v_danglingDot_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_){
_start:
{
uint8_t v_danglingDot_boxed_1293_; lean_object* v_res_1294_; 
v_danglingDot_boxed_1293_ = lean_unbox(v_danglingDot_1284_);
v_res_1294_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_1282_, v_id_1283_, v_danglingDot_boxed_1293_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_);
lean_dec(v_a_1291_);
lean_dec_ref(v_a_1290_);
lean_dec(v_a_1289_);
lean_dec_ref(v_a_1288_);
lean_dec_ref(v_a_1287_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(lean_object* v___x_1295_, lean_object* v_ctx_1296_, lean_object* v_id_1297_, uint8_t v_danglingDot_1298_, lean_object* v_inst_1299_, lean_object* v_R_1300_, lean_object* v_a_1301_, lean_object* v_b_1302_, lean_object* v_c_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v___x_1312_; 
v___x_1312_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v___x_1295_, v_ctx_1296_, v_id_1297_, v_danglingDot_1298_, v_a_1301_, v_b_1302_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___boxed(lean_object** _args){
lean_object* v___x_1313_ = _args[0];
lean_object* v_ctx_1314_ = _args[1];
lean_object* v_id_1315_ = _args[2];
lean_object* v_danglingDot_1316_ = _args[3];
lean_object* v_inst_1317_ = _args[4];
lean_object* v_R_1318_ = _args[5];
lean_object* v_a_1319_ = _args[6];
lean_object* v_b_1320_ = _args[7];
lean_object* v_c_1321_ = _args[8];
lean_object* v___y_1322_ = _args[9];
lean_object* v___y_1323_ = _args[10];
lean_object* v___y_1324_ = _args[11];
lean_object* v___y_1325_ = _args[12];
lean_object* v___y_1326_ = _args[13];
lean_object* v___y_1327_ = _args[14];
lean_object* v___y_1328_ = _args[15];
lean_object* v___y_1329_ = _args[16];
_start:
{
uint8_t v_danglingDot_boxed_1330_; lean_object* v_res_1331_; 
v_danglingDot_boxed_1330_ = lean_unbox(v_danglingDot_1316_);
v_res_1331_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(v___x_1313_, v_ctx_1314_, v_id_1315_, v_danglingDot_boxed_1330_, v_inst_1317_, v_R_1318_, v_a_1319_, v_b_1320_, v_c_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
lean_dec_ref(v___y_1322_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(lean_object* v_n_1332_){
_start:
{
if (lean_obj_tag(v_n_1332_) == 2)
{
lean_object* v_i_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; 
v_i_1333_ = lean_ctor_get(v_n_1332_, 1);
v___x_1334_ = lean_unsigned_to_nat(0u);
v___x_1335_ = lean_nat_dec_eq(v_i_1333_, v___x_1334_);
if (v___x_1335_ == 0)
{
lean_inc_ref(v_n_1332_);
return v_n_1332_;
}
else
{
uint8_t v___x_1336_; 
v___x_1336_ = l_Lean_isPrivatePrefix(v_n_1332_);
if (v___x_1336_ == 0)
{
lean_inc_ref(v_n_1332_);
return v_n_1332_;
}
else
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_box(0);
return v___x_1337_;
}
}
}
else
{
lean_inc(v_n_1332_);
return v_n_1332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix___boxed(lean_object* v_n_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_1338_);
lean_dec(v_n_1338_);
return v_res_1339_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(lean_object* v_n_u2081_1340_, lean_object* v_n_u2082_1341_){
_start:
{
lean_object* v_n_u2081_1342_; lean_object* v_n_u2082_1343_; 
v_n_u2081_1342_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_u2081_1340_);
lean_dec(v_n_u2081_1340_);
v_n_u2082_1343_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_u2082_1341_);
lean_dec(v_n_u2082_1341_);
switch(lean_obj_tag(v_n_u2081_1342_))
{
case 0:
{
if (lean_obj_tag(v_n_u2082_1343_) == 0)
{
uint8_t v___x_1344_; 
v___x_1344_ = 1;
return v___x_1344_;
}
else
{
uint8_t v___x_1345_; 
lean_dec(v_n_u2082_1343_);
v___x_1345_ = 0;
return v___x_1345_;
}
}
case 1:
{
if (lean_obj_tag(v_n_u2082_1343_) == 1)
{
lean_object* v_pre_1346_; lean_object* v_str_1347_; lean_object* v_pre_1348_; lean_object* v_str_1349_; uint8_t v___x_1350_; 
v_pre_1346_ = lean_ctor_get(v_n_u2081_1342_, 0);
lean_inc(v_pre_1346_);
v_str_1347_ = lean_ctor_get(v_n_u2081_1342_, 1);
lean_inc_ref(v_str_1347_);
lean_dec_ref_known(v_n_u2081_1342_, 2);
v_pre_1348_ = lean_ctor_get(v_n_u2082_1343_, 0);
lean_inc(v_pre_1348_);
v_str_1349_ = lean_ctor_get(v_n_u2082_1343_, 1);
lean_inc_ref(v_str_1349_);
lean_dec_ref_known(v_n_u2082_1343_, 2);
v___x_1350_ = lean_string_compare(v_str_1347_, v_str_1349_);
lean_dec_ref(v_str_1349_);
lean_dec_ref(v_str_1347_);
if (v___x_1350_ == 1)
{
v_n_u2081_1340_ = v_pre_1346_;
v_n_u2082_1341_ = v_pre_1348_;
goto _start;
}
else
{
lean_dec(v_pre_1348_);
lean_dec(v_pre_1346_);
return v___x_1350_;
}
}
else
{
uint8_t v___x_1352_; 
lean_dec_ref_known(v_n_u2081_1342_, 2);
lean_dec(v_n_u2082_1343_);
v___x_1352_ = 2;
return v___x_1352_;
}
}
default: 
{
switch(lean_obj_tag(v_n_u2082_1343_))
{
case 0:
{
uint8_t v___x_1353_; 
lean_dec_ref_known(v_n_u2081_1342_, 2);
v___x_1353_ = 2;
return v___x_1353_;
}
case 1:
{
uint8_t v___x_1354_; 
lean_dec_ref_known(v_n_u2082_1343_, 2);
lean_dec_ref_known(v_n_u2081_1342_, 2);
v___x_1354_ = 0;
return v___x_1354_;
}
default: 
{
lean_object* v_pre_1355_; lean_object* v_i_1356_; lean_object* v_pre_1357_; lean_object* v_i_1358_; uint8_t v___x_1359_; 
v_pre_1355_ = lean_ctor_get(v_n_u2081_1342_, 0);
lean_inc(v_pre_1355_);
v_i_1356_ = lean_ctor_get(v_n_u2081_1342_, 1);
lean_inc(v_i_1356_);
lean_dec_ref_known(v_n_u2081_1342_, 2);
v_pre_1357_ = lean_ctor_get(v_n_u2082_1343_, 0);
lean_inc(v_pre_1357_);
v_i_1358_ = lean_ctor_get(v_n_u2082_1343_, 1);
lean_inc(v_i_1358_);
lean_dec_ref_known(v_n_u2082_1343_, 2);
v___x_1359_ = lean_nat_dec_lt(v_i_1356_, v_i_1358_);
if (v___x_1359_ == 0)
{
uint8_t v___x_1360_; 
v___x_1360_ = lean_nat_dec_eq(v_i_1356_, v_i_1358_);
lean_dec(v_i_1358_);
lean_dec(v_i_1356_);
if (v___x_1360_ == 0)
{
uint8_t v___x_1361_; 
lean_dec(v_pre_1357_);
lean_dec(v_pre_1355_);
v___x_1361_ = 2;
return v___x_1361_;
}
else
{
v_n_u2081_1340_ = v_pre_1355_;
v_n_u2082_1341_ = v_pre_1357_;
goto _start;
}
}
else
{
uint8_t v___x_1363_; 
lean_dec(v_i_1358_);
lean_dec(v_pre_1357_);
lean_dec(v_i_1356_);
lean_dec(v_pre_1355_);
v___x_1363_ = 0;
return v___x_1363_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed(lean_object* v_n_u2081_1364_, lean_object* v_n_u2082_1365_){
_start:
{
uint8_t v_res_1366_; lean_object* v_r_1367_; 
v_res_1366_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_n_u2081_1364_, v_n_u2082_1365_);
v_r_1367_ = lean_box(v_res_1366_);
return v_r_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(lean_object* v_names_1369_){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0));
v___x_1371_ = l_Std_TreeSet_ofArray___redArg(v_names_1369_, v___x_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___boxed(lean_object* v_names_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(v_names_1372_);
lean_dec_ref(v_names_1372_);
return v_res_1373_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(lean_object* v_k_1374_, lean_object* v_t_1375_){
_start:
{
if (lean_obj_tag(v_t_1375_) == 0)
{
lean_object* v_k_1376_; lean_object* v_l_1377_; lean_object* v_r_1378_; uint8_t v___x_1379_; 
v_k_1376_ = lean_ctor_get(v_t_1375_, 1);
lean_inc(v_k_1376_);
v_l_1377_ = lean_ctor_get(v_t_1375_, 3);
lean_inc(v_l_1377_);
v_r_1378_ = lean_ctor_get(v_t_1375_, 4);
lean_inc(v_r_1378_);
lean_dec_ref_known(v_t_1375_, 5);
lean_inc(v_k_1374_);
v___x_1379_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_k_1374_, v_k_1376_);
switch(v___x_1379_)
{
case 0:
{
lean_dec(v_r_1378_);
v_t_1375_ = v_l_1377_;
goto _start;
}
case 1:
{
uint8_t v___x_1381_; 
lean_dec(v_r_1378_);
lean_dec(v_l_1377_);
lean_dec(v_k_1374_);
v___x_1381_ = 1;
return v___x_1381_;
}
default: 
{
lean_dec(v_l_1377_);
v_t_1375_ = v_r_1378_;
goto _start;
}
}
}
else
{
uint8_t v___x_1383_; 
lean_dec(v_k_1374_);
v___x_1383_ = 0;
return v___x_1383_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg___boxed(lean_object* v_k_1384_, lean_object* v_t_1385_){
_start:
{
uint8_t v_res_1386_; lean_object* v_r_1387_; 
v_res_1386_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_k_1384_, v_t_1385_);
v_r_1387_ = lean_box(v_res_1386_);
return v_r_1387_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(lean_object* v_k_1388_, lean_object* v_v_1389_, lean_object* v_t_1390_){
_start:
{
if (lean_obj_tag(v_t_1390_) == 0)
{
lean_object* v_size_1391_; lean_object* v_k_1392_; lean_object* v_v_1393_; lean_object* v_l_1394_; lean_object* v_r_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1675_; 
v_size_1391_ = lean_ctor_get(v_t_1390_, 0);
v_k_1392_ = lean_ctor_get(v_t_1390_, 1);
v_v_1393_ = lean_ctor_get(v_t_1390_, 2);
v_l_1394_ = lean_ctor_get(v_t_1390_, 3);
v_r_1395_ = lean_ctor_get(v_t_1390_, 4);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_t_1390_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1397_ = v_t_1390_;
v_isShared_1398_ = v_isSharedCheck_1675_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_r_1395_);
lean_inc(v_l_1394_);
lean_inc(v_v_1393_);
lean_inc(v_k_1392_);
lean_inc(v_size_1391_);
lean_dec(v_t_1390_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1675_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
uint8_t v___x_1399_; 
lean_inc(v_k_1392_);
lean_inc(v_k_1388_);
v___x_1399_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_k_1388_, v_k_1392_);
switch(v___x_1399_)
{
case 0:
{
lean_object* v_impl_1400_; lean_object* v___x_1401_; 
lean_dec(v_size_1391_);
v_impl_1400_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1388_, v_v_1389_, v_l_1394_);
v___x_1401_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1395_) == 0)
{
lean_object* v_size_1402_; lean_object* v_size_1403_; lean_object* v_k_1404_; lean_object* v_v_1405_; lean_object* v_l_1406_; lean_object* v_r_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v_size_1402_ = lean_ctor_get(v_r_1395_, 0);
v_size_1403_ = lean_ctor_get(v_impl_1400_, 0);
v_k_1404_ = lean_ctor_get(v_impl_1400_, 1);
v_v_1405_ = lean_ctor_get(v_impl_1400_, 2);
v_l_1406_ = lean_ctor_get(v_impl_1400_, 3);
v_r_1407_ = lean_ctor_get(v_impl_1400_, 4);
lean_inc(v_r_1407_);
v___x_1408_ = lean_unsigned_to_nat(3u);
v___x_1409_ = lean_nat_mul(v___x_1408_, v_size_1402_);
v___x_1410_ = lean_nat_dec_lt(v___x_1409_, v_size_1403_);
lean_dec(v___x_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1414_; 
lean_dec(v_r_1407_);
v___x_1411_ = lean_nat_add(v___x_1401_, v_size_1403_);
v___x_1412_ = lean_nat_add(v___x_1411_, v_size_1402_);
lean_dec(v___x_1411_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 3, v_impl_1400_);
lean_ctor_set(v___x_1397_, 0, v___x_1412_);
v___x_1414_ = v___x_1397_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1415_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1415_, 3, v_impl_1400_);
lean_ctor_set(v_reuseFailAlloc_1415_, 4, v_r_1395_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
else
{
lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1481_; 
lean_inc(v_l_1406_);
lean_inc(v_v_1405_);
lean_inc(v_k_1404_);
lean_inc(v_size_1403_);
v_isSharedCheck_1481_ = !lean_is_exclusive(v_impl_1400_);
if (v_isSharedCheck_1481_ == 0)
{
lean_object* v_unused_1482_; lean_object* v_unused_1483_; lean_object* v_unused_1484_; lean_object* v_unused_1485_; lean_object* v_unused_1486_; 
v_unused_1482_ = lean_ctor_get(v_impl_1400_, 4);
lean_dec(v_unused_1482_);
v_unused_1483_ = lean_ctor_get(v_impl_1400_, 3);
lean_dec(v_unused_1483_);
v_unused_1484_ = lean_ctor_get(v_impl_1400_, 2);
lean_dec(v_unused_1484_);
v_unused_1485_ = lean_ctor_get(v_impl_1400_, 1);
lean_dec(v_unused_1485_);
v_unused_1486_ = lean_ctor_get(v_impl_1400_, 0);
lean_dec(v_unused_1486_);
v___x_1417_ = v_impl_1400_;
v_isShared_1418_ = v_isSharedCheck_1481_;
goto v_resetjp_1416_;
}
else
{
lean_dec(v_impl_1400_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1481_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v_size_1419_; lean_object* v_size_1420_; lean_object* v_k_1421_; lean_object* v_v_1422_; lean_object* v_l_1423_; lean_object* v_r_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; 
v_size_1419_ = lean_ctor_get(v_l_1406_, 0);
v_size_1420_ = lean_ctor_get(v_r_1407_, 0);
v_k_1421_ = lean_ctor_get(v_r_1407_, 1);
v_v_1422_ = lean_ctor_get(v_r_1407_, 2);
v_l_1423_ = lean_ctor_get(v_r_1407_, 3);
v_r_1424_ = lean_ctor_get(v_r_1407_, 4);
v___x_1425_ = lean_unsigned_to_nat(2u);
v___x_1426_ = lean_nat_mul(v___x_1425_, v_size_1419_);
v___x_1427_ = lean_nat_dec_lt(v_size_1420_, v___x_1426_);
lean_dec(v___x_1426_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1456_; 
lean_inc(v_r_1424_);
lean_inc(v_l_1423_);
lean_inc(v_v_1422_);
lean_inc(v_k_1421_);
v_isSharedCheck_1456_ = !lean_is_exclusive(v_r_1407_);
if (v_isSharedCheck_1456_ == 0)
{
lean_object* v_unused_1457_; lean_object* v_unused_1458_; lean_object* v_unused_1459_; lean_object* v_unused_1460_; lean_object* v_unused_1461_; 
v_unused_1457_ = lean_ctor_get(v_r_1407_, 4);
lean_dec(v_unused_1457_);
v_unused_1458_ = lean_ctor_get(v_r_1407_, 3);
lean_dec(v_unused_1458_);
v_unused_1459_ = lean_ctor_get(v_r_1407_, 2);
lean_dec(v_unused_1459_);
v_unused_1460_ = lean_ctor_get(v_r_1407_, 1);
lean_dec(v_unused_1460_);
v_unused_1461_ = lean_ctor_get(v_r_1407_, 0);
lean_dec(v_unused_1461_);
v___x_1429_ = v_r_1407_;
v_isShared_1430_ = v_isSharedCheck_1456_;
goto v_resetjp_1428_;
}
else
{
lean_dec(v_r_1407_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1456_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___y_1434_; lean_object* v___y_1435_; lean_object* v___y_1436_; lean_object* v___x_1444_; lean_object* v___y_1446_; 
v___x_1431_ = lean_nat_add(v___x_1401_, v_size_1403_);
lean_dec(v_size_1403_);
v___x_1432_ = lean_nat_add(v___x_1431_, v_size_1402_);
lean_dec(v___x_1431_);
v___x_1444_ = lean_nat_add(v___x_1401_, v_size_1419_);
if (lean_obj_tag(v_l_1423_) == 0)
{
lean_object* v_size_1454_; 
v_size_1454_ = lean_ctor_get(v_l_1423_, 0);
lean_inc(v_size_1454_);
v___y_1446_ = v_size_1454_;
goto v___jp_1445_;
}
else
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_unsigned_to_nat(0u);
v___y_1446_ = v___x_1455_;
goto v___jp_1445_;
}
v___jp_1433_:
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1437_ = lean_nat_add(v___y_1434_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec(v___y_1434_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 4, v_r_1395_);
lean_ctor_set(v___x_1429_, 3, v_r_1424_);
lean_ctor_set(v___x_1429_, 2, v_v_1393_);
lean_ctor_set(v___x_1429_, 1, v_k_1392_);
lean_ctor_set(v___x_1429_, 0, v___x_1437_);
v___x_1439_ = v___x_1429_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1437_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1443_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1443_, 3, v_r_1424_);
lean_ctor_set(v_reuseFailAlloc_1443_, 4, v_r_1395_);
v___x_1439_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1441_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v___x_1439_);
lean_ctor_set(v___x_1417_, 3, v___y_1435_);
lean_ctor_set(v___x_1417_, 2, v_v_1422_);
lean_ctor_set(v___x_1417_, 1, v_k_1421_);
lean_ctor_set(v___x_1417_, 0, v___x_1432_);
v___x_1441_ = v___x_1417_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_k_1421_);
lean_ctor_set(v_reuseFailAlloc_1442_, 2, v_v_1422_);
lean_ctor_set(v_reuseFailAlloc_1442_, 3, v___y_1435_);
lean_ctor_set(v_reuseFailAlloc_1442_, 4, v___x_1439_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
v___jp_1445_:
{
lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1447_ = lean_nat_add(v___x_1444_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec(v___x_1444_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v_l_1423_);
lean_ctor_set(v___x_1397_, 3, v_l_1406_);
lean_ctor_set(v___x_1397_, 2, v_v_1405_);
lean_ctor_set(v___x_1397_, 1, v_k_1404_);
lean_ctor_set(v___x_1397_, 0, v___x_1447_);
v___x_1449_ = v___x_1397_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1447_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v_k_1404_);
lean_ctor_set(v_reuseFailAlloc_1453_, 2, v_v_1405_);
lean_ctor_set(v_reuseFailAlloc_1453_, 3, v_l_1406_);
lean_ctor_set(v_reuseFailAlloc_1453_, 4, v_l_1423_);
v___x_1449_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_nat_add(v___x_1401_, v_size_1402_);
if (lean_obj_tag(v_r_1424_) == 0)
{
lean_object* v_size_1451_; 
v_size_1451_ = lean_ctor_get(v_r_1424_, 0);
lean_inc(v_size_1451_);
v___y_1434_ = v___x_1450_;
v___y_1435_ = v___x_1449_;
v___y_1436_ = v_size_1451_;
goto v___jp_1433_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_unsigned_to_nat(0u);
v___y_1434_ = v___x_1450_;
v___y_1435_ = v___x_1449_;
v___y_1436_ = v___x_1452_;
goto v___jp_1433_;
}
}
}
}
}
else
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1467_; 
lean_del_object(v___x_1397_);
v___x_1462_ = lean_nat_add(v___x_1401_, v_size_1403_);
lean_dec(v_size_1403_);
v___x_1463_ = lean_nat_add(v___x_1462_, v_size_1402_);
lean_dec(v___x_1462_);
v___x_1464_ = lean_nat_add(v___x_1401_, v_size_1402_);
v___x_1465_ = lean_nat_add(v___x_1464_, v_size_1420_);
lean_dec(v___x_1464_);
lean_inc_ref(v_r_1395_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 4, v_r_1395_);
lean_ctor_set(v___x_1417_, 3, v_r_1407_);
lean_ctor_set(v___x_1417_, 2, v_v_1393_);
lean_ctor_set(v___x_1417_, 1, v_k_1392_);
lean_ctor_set(v___x_1417_, 0, v___x_1465_);
v___x_1467_ = v___x_1417_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1465_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1480_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1480_, 3, v_r_1407_);
lean_ctor_set(v_reuseFailAlloc_1480_, 4, v_r_1395_);
v___x_1467_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
v_isSharedCheck_1474_ = !lean_is_exclusive(v_r_1395_);
if (v_isSharedCheck_1474_ == 0)
{
lean_object* v_unused_1475_; lean_object* v_unused_1476_; lean_object* v_unused_1477_; lean_object* v_unused_1478_; lean_object* v_unused_1479_; 
v_unused_1475_ = lean_ctor_get(v_r_1395_, 4);
lean_dec(v_unused_1475_);
v_unused_1476_ = lean_ctor_get(v_r_1395_, 3);
lean_dec(v_unused_1476_);
v_unused_1477_ = lean_ctor_get(v_r_1395_, 2);
lean_dec(v_unused_1477_);
v_unused_1478_ = lean_ctor_get(v_r_1395_, 1);
lean_dec(v_unused_1478_);
v_unused_1479_ = lean_ctor_get(v_r_1395_, 0);
lean_dec(v_unused_1479_);
v___x_1469_ = v_r_1395_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_dec(v_r_1395_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 4, v___x_1467_);
lean_ctor_set(v___x_1469_, 3, v_l_1406_);
lean_ctor_set(v___x_1469_, 2, v_v_1405_);
lean_ctor_set(v___x_1469_, 1, v_k_1404_);
lean_ctor_set(v___x_1469_, 0, v___x_1463_);
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_k_1404_);
lean_ctor_set(v_reuseFailAlloc_1473_, 2, v_v_1405_);
lean_ctor_set(v_reuseFailAlloc_1473_, 3, v_l_1406_);
lean_ctor_set(v_reuseFailAlloc_1473_, 4, v___x_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1487_; 
v_l_1487_ = lean_ctor_get(v_impl_1400_, 3);
if (lean_obj_tag(v_l_1487_) == 0)
{
lean_object* v_r_1488_; lean_object* v_k_1489_; lean_object* v_v_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1501_; 
lean_inc_ref(v_l_1487_);
v_r_1488_ = lean_ctor_get(v_impl_1400_, 4);
v_k_1489_ = lean_ctor_get(v_impl_1400_, 1);
v_v_1490_ = lean_ctor_get(v_impl_1400_, 2);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_impl_1400_);
if (v_isSharedCheck_1501_ == 0)
{
lean_object* v_unused_1502_; lean_object* v_unused_1503_; 
v_unused_1502_ = lean_ctor_get(v_impl_1400_, 3);
lean_dec(v_unused_1502_);
v_unused_1503_ = lean_ctor_get(v_impl_1400_, 0);
lean_dec(v_unused_1503_);
v___x_1492_ = v_impl_1400_;
v_isShared_1493_ = v_isSharedCheck_1501_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_r_1488_);
lean_inc(v_v_1490_);
lean_inc(v_k_1489_);
lean_dec(v_impl_1400_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1501_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1494_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1488_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 3, v_r_1488_);
lean_ctor_set(v___x_1492_, 2, v_v_1393_);
lean_ctor_set(v___x_1492_, 1, v_k_1392_);
lean_ctor_set(v___x_1492_, 0, v___x_1401_);
v___x_1496_ = v___x_1492_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1401_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1500_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1500_, 3, v_r_1488_);
lean_ctor_set(v_reuseFailAlloc_1500_, 4, v_r_1488_);
v___x_1496_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
lean_object* v___x_1498_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v___x_1496_);
lean_ctor_set(v___x_1397_, 3, v_l_1487_);
lean_ctor_set(v___x_1397_, 2, v_v_1490_);
lean_ctor_set(v___x_1397_, 1, v_k_1489_);
lean_ctor_set(v___x_1397_, 0, v___x_1494_);
v___x_1498_ = v___x_1397_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1494_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v_k_1489_);
lean_ctor_set(v_reuseFailAlloc_1499_, 2, v_v_1490_);
lean_ctor_set(v_reuseFailAlloc_1499_, 3, v_l_1487_);
lean_ctor_set(v_reuseFailAlloc_1499_, 4, v___x_1496_);
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
lean_object* v_r_1504_; 
v_r_1504_ = lean_ctor_get(v_impl_1400_, 4);
lean_inc(v_r_1504_);
if (lean_obj_tag(v_r_1504_) == 0)
{
lean_object* v_k_1505_; lean_object* v_v_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1529_; 
lean_inc(v_l_1487_);
v_k_1505_ = lean_ctor_get(v_impl_1400_, 1);
v_v_1506_ = lean_ctor_get(v_impl_1400_, 2);
v_isSharedCheck_1529_ = !lean_is_exclusive(v_impl_1400_);
if (v_isSharedCheck_1529_ == 0)
{
lean_object* v_unused_1530_; lean_object* v_unused_1531_; lean_object* v_unused_1532_; 
v_unused_1530_ = lean_ctor_get(v_impl_1400_, 4);
lean_dec(v_unused_1530_);
v_unused_1531_ = lean_ctor_get(v_impl_1400_, 3);
lean_dec(v_unused_1531_);
v_unused_1532_ = lean_ctor_get(v_impl_1400_, 0);
lean_dec(v_unused_1532_);
v___x_1508_ = v_impl_1400_;
v_isShared_1509_ = v_isSharedCheck_1529_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_v_1506_);
lean_inc(v_k_1505_);
lean_dec(v_impl_1400_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1529_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v_k_1510_; lean_object* v_v_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1525_; 
v_k_1510_ = lean_ctor_get(v_r_1504_, 1);
v_v_1511_ = lean_ctor_get(v_r_1504_, 2);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_r_1504_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; lean_object* v_unused_1527_; lean_object* v_unused_1528_; 
v_unused_1526_ = lean_ctor_get(v_r_1504_, 4);
lean_dec(v_unused_1526_);
v_unused_1527_ = lean_ctor_get(v_r_1504_, 3);
lean_dec(v_unused_1527_);
v_unused_1528_ = lean_ctor_get(v_r_1504_, 0);
lean_dec(v_unused_1528_);
v___x_1513_ = v_r_1504_;
v_isShared_1514_ = v_isSharedCheck_1525_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_v_1511_);
lean_inc(v_k_1510_);
lean_dec(v_r_1504_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1525_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1517_; 
v___x_1515_ = lean_unsigned_to_nat(3u);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 4, v_l_1487_);
lean_ctor_set(v___x_1513_, 3, v_l_1487_);
lean_ctor_set(v___x_1513_, 2, v_v_1506_);
lean_ctor_set(v___x_1513_, 1, v_k_1505_);
lean_ctor_set(v___x_1513_, 0, v___x_1401_);
v___x_1517_ = v___x_1513_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v___x_1401_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v_k_1505_);
lean_ctor_set(v_reuseFailAlloc_1524_, 2, v_v_1506_);
lean_ctor_set(v_reuseFailAlloc_1524_, 3, v_l_1487_);
lean_ctor_set(v_reuseFailAlloc_1524_, 4, v_l_1487_);
v___x_1517_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
lean_object* v___x_1519_; 
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 4, v_l_1487_);
lean_ctor_set(v___x_1508_, 2, v_v_1393_);
lean_ctor_set(v___x_1508_, 1, v_k_1392_);
lean_ctor_set(v___x_1508_, 0, v___x_1401_);
v___x_1519_ = v___x_1508_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1401_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1523_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1523_, 3, v_l_1487_);
lean_ctor_set(v_reuseFailAlloc_1523_, 4, v_l_1487_);
v___x_1519_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
lean_object* v___x_1521_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v___x_1519_);
lean_ctor_set(v___x_1397_, 3, v___x_1517_);
lean_ctor_set(v___x_1397_, 2, v_v_1511_);
lean_ctor_set(v___x_1397_, 1, v_k_1510_);
lean_ctor_set(v___x_1397_, 0, v___x_1515_);
v___x_1521_ = v___x_1397_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1515_);
lean_ctor_set(v_reuseFailAlloc_1522_, 1, v_k_1510_);
lean_ctor_set(v_reuseFailAlloc_1522_, 2, v_v_1511_);
lean_ctor_set(v_reuseFailAlloc_1522_, 3, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1522_, 4, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
}
}
else
{
lean_object* v___x_1533_; lean_object* v___x_1535_; 
v___x_1533_ = lean_unsigned_to_nat(2u);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v_r_1504_);
lean_ctor_set(v___x_1397_, 3, v_impl_1400_);
lean_ctor_set(v___x_1397_, 0, v___x_1533_);
v___x_1535_ = v___x_1397_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1533_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1536_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1536_, 3, v_impl_1400_);
lean_ctor_set(v_reuseFailAlloc_1536_, 4, v_r_1504_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1538_; 
lean_dec(v_v_1393_);
lean_dec(v_k_1392_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 2, v_v_1389_);
lean_ctor_set(v___x_1397_, 1, v_k_1388_);
v___x_1538_ = v___x_1397_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_size_1391_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_k_1388_);
lean_ctor_set(v_reuseFailAlloc_1539_, 2, v_v_1389_);
lean_ctor_set(v_reuseFailAlloc_1539_, 3, v_l_1394_);
lean_ctor_set(v_reuseFailAlloc_1539_, 4, v_r_1395_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
default: 
{
lean_object* v_impl_1540_; lean_object* v___x_1541_; 
lean_dec(v_size_1391_);
v_impl_1540_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1388_, v_v_1389_, v_r_1395_);
v___x_1541_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1394_) == 0)
{
lean_object* v_size_1542_; lean_object* v_size_1543_; lean_object* v_k_1544_; lean_object* v_v_1545_; lean_object* v_l_1546_; lean_object* v_r_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; uint8_t v___x_1550_; 
v_size_1542_ = lean_ctor_get(v_l_1394_, 0);
v_size_1543_ = lean_ctor_get(v_impl_1540_, 0);
v_k_1544_ = lean_ctor_get(v_impl_1540_, 1);
v_v_1545_ = lean_ctor_get(v_impl_1540_, 2);
v_l_1546_ = lean_ctor_get(v_impl_1540_, 3);
lean_inc(v_l_1546_);
v_r_1547_ = lean_ctor_get(v_impl_1540_, 4);
v___x_1548_ = lean_unsigned_to_nat(3u);
v___x_1549_ = lean_nat_mul(v___x_1548_, v_size_1542_);
v___x_1550_ = lean_nat_dec_lt(v___x_1549_, v_size_1543_);
lean_dec(v___x_1549_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1554_; 
lean_dec(v_l_1546_);
v___x_1551_ = lean_nat_add(v___x_1541_, v_size_1542_);
v___x_1552_ = lean_nat_add(v___x_1551_, v_size_1543_);
lean_dec(v___x_1551_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v_impl_1540_);
lean_ctor_set(v___x_1397_, 0, v___x_1552_);
v___x_1554_ = v___x_1397_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1552_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1555_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1555_, 3, v_l_1394_);
lean_ctor_set(v_reuseFailAlloc_1555_, 4, v_impl_1540_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
else
{
lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1619_; 
lean_inc(v_r_1547_);
lean_inc(v_v_1545_);
lean_inc(v_k_1544_);
lean_inc(v_size_1543_);
v_isSharedCheck_1619_ = !lean_is_exclusive(v_impl_1540_);
if (v_isSharedCheck_1619_ == 0)
{
lean_object* v_unused_1620_; lean_object* v_unused_1621_; lean_object* v_unused_1622_; lean_object* v_unused_1623_; lean_object* v_unused_1624_; 
v_unused_1620_ = lean_ctor_get(v_impl_1540_, 4);
lean_dec(v_unused_1620_);
v_unused_1621_ = lean_ctor_get(v_impl_1540_, 3);
lean_dec(v_unused_1621_);
v_unused_1622_ = lean_ctor_get(v_impl_1540_, 2);
lean_dec(v_unused_1622_);
v_unused_1623_ = lean_ctor_get(v_impl_1540_, 1);
lean_dec(v_unused_1623_);
v_unused_1624_ = lean_ctor_get(v_impl_1540_, 0);
lean_dec(v_unused_1624_);
v___x_1557_ = v_impl_1540_;
v_isShared_1558_ = v_isSharedCheck_1619_;
goto v_resetjp_1556_;
}
else
{
lean_dec(v_impl_1540_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1619_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v_size_1559_; lean_object* v_k_1560_; lean_object* v_v_1561_; lean_object* v_l_1562_; lean_object* v_r_1563_; lean_object* v_size_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; 
v_size_1559_ = lean_ctor_get(v_l_1546_, 0);
v_k_1560_ = lean_ctor_get(v_l_1546_, 1);
v_v_1561_ = lean_ctor_get(v_l_1546_, 2);
v_l_1562_ = lean_ctor_get(v_l_1546_, 3);
v_r_1563_ = lean_ctor_get(v_l_1546_, 4);
v_size_1564_ = lean_ctor_get(v_r_1547_, 0);
v___x_1565_ = lean_unsigned_to_nat(2u);
v___x_1566_ = lean_nat_mul(v___x_1565_, v_size_1564_);
v___x_1567_ = lean_nat_dec_lt(v_size_1559_, v___x_1566_);
lean_dec(v___x_1566_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1595_; 
lean_inc(v_r_1563_);
lean_inc(v_l_1562_);
lean_inc(v_v_1561_);
lean_inc(v_k_1560_);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_l_1546_);
if (v_isSharedCheck_1595_ == 0)
{
lean_object* v_unused_1596_; lean_object* v_unused_1597_; lean_object* v_unused_1598_; lean_object* v_unused_1599_; lean_object* v_unused_1600_; 
v_unused_1596_ = lean_ctor_get(v_l_1546_, 4);
lean_dec(v_unused_1596_);
v_unused_1597_ = lean_ctor_get(v_l_1546_, 3);
lean_dec(v_unused_1597_);
v_unused_1598_ = lean_ctor_get(v_l_1546_, 2);
lean_dec(v_unused_1598_);
v_unused_1599_ = lean_ctor_get(v_l_1546_, 1);
lean_dec(v_unused_1599_);
v_unused_1600_ = lean_ctor_get(v_l_1546_, 0);
lean_dec(v_unused_1600_);
v___x_1569_ = v_l_1546_;
v_isShared_1570_ = v_isSharedCheck_1595_;
goto v_resetjp_1568_;
}
else
{
lean_dec(v_l_1546_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1595_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___y_1574_; lean_object* v___y_1575_; lean_object* v___y_1576_; lean_object* v___y_1585_; 
v___x_1571_ = lean_nat_add(v___x_1541_, v_size_1542_);
v___x_1572_ = lean_nat_add(v___x_1571_, v_size_1543_);
lean_dec(v_size_1543_);
if (lean_obj_tag(v_l_1562_) == 0)
{
lean_object* v_size_1593_; 
v_size_1593_ = lean_ctor_get(v_l_1562_, 0);
lean_inc(v_size_1593_);
v___y_1585_ = v_size_1593_;
goto v___jp_1584_;
}
else
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_unsigned_to_nat(0u);
v___y_1585_ = v___x_1594_;
goto v___jp_1584_;
}
v___jp_1573_:
{
lean_object* v___x_1577_; lean_object* v___x_1579_; 
v___x_1577_ = lean_nat_add(v___y_1574_, v___y_1576_);
lean_dec(v___y_1576_);
lean_dec(v___y_1574_);
if (v_isShared_1570_ == 0)
{
lean_ctor_set(v___x_1569_, 4, v_r_1547_);
lean_ctor_set(v___x_1569_, 3, v_r_1563_);
lean_ctor_set(v___x_1569_, 2, v_v_1545_);
lean_ctor_set(v___x_1569_, 1, v_k_1544_);
lean_ctor_set(v___x_1569_, 0, v___x_1577_);
v___x_1579_ = v___x_1569_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v___x_1577_);
lean_ctor_set(v_reuseFailAlloc_1583_, 1, v_k_1544_);
lean_ctor_set(v_reuseFailAlloc_1583_, 2, v_v_1545_);
lean_ctor_set(v_reuseFailAlloc_1583_, 3, v_r_1563_);
lean_ctor_set(v_reuseFailAlloc_1583_, 4, v_r_1547_);
v___x_1579_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
lean_object* v___x_1581_; 
if (v_isShared_1558_ == 0)
{
lean_ctor_set(v___x_1557_, 4, v___x_1579_);
lean_ctor_set(v___x_1557_, 3, v___y_1575_);
lean_ctor_set(v___x_1557_, 2, v_v_1561_);
lean_ctor_set(v___x_1557_, 1, v_k_1560_);
lean_ctor_set(v___x_1557_, 0, v___x_1572_);
v___x_1581_ = v___x_1557_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1572_);
lean_ctor_set(v_reuseFailAlloc_1582_, 1, v_k_1560_);
lean_ctor_set(v_reuseFailAlloc_1582_, 2, v_v_1561_);
lean_ctor_set(v_reuseFailAlloc_1582_, 3, v___y_1575_);
lean_ctor_set(v_reuseFailAlloc_1582_, 4, v___x_1579_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
v___jp_1584_:
{
lean_object* v___x_1586_; lean_object* v___x_1588_; 
v___x_1586_ = lean_nat_add(v___x_1571_, v___y_1585_);
lean_dec(v___y_1585_);
lean_dec(v___x_1571_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v_l_1562_);
lean_ctor_set(v___x_1397_, 0, v___x_1586_);
v___x_1588_ = v___x_1397_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v___x_1586_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1592_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1592_, 3, v_l_1394_);
lean_ctor_set(v_reuseFailAlloc_1592_, 4, v_l_1562_);
v___x_1588_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
lean_object* v___x_1589_; 
v___x_1589_ = lean_nat_add(v___x_1541_, v_size_1564_);
if (lean_obj_tag(v_r_1563_) == 0)
{
lean_object* v_size_1590_; 
v_size_1590_ = lean_ctor_get(v_r_1563_, 0);
lean_inc(v_size_1590_);
v___y_1574_ = v___x_1589_;
v___y_1575_ = v___x_1588_;
v___y_1576_ = v_size_1590_;
goto v___jp_1573_;
}
else
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_unsigned_to_nat(0u);
v___y_1574_ = v___x_1589_;
v___y_1575_ = v___x_1588_;
v___y_1576_ = v___x_1591_;
goto v___jp_1573_;
}
}
}
}
}
else
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1605_; 
lean_del_object(v___x_1397_);
v___x_1601_ = lean_nat_add(v___x_1541_, v_size_1542_);
v___x_1602_ = lean_nat_add(v___x_1601_, v_size_1543_);
lean_dec(v_size_1543_);
v___x_1603_ = lean_nat_add(v___x_1601_, v_size_1559_);
lean_dec(v___x_1601_);
lean_inc_ref(v_l_1394_);
if (v_isShared_1558_ == 0)
{
lean_ctor_set(v___x_1557_, 4, v_l_1546_);
lean_ctor_set(v___x_1557_, 3, v_l_1394_);
lean_ctor_set(v___x_1557_, 2, v_v_1393_);
lean_ctor_set(v___x_1557_, 1, v_k_1392_);
lean_ctor_set(v___x_1557_, 0, v___x_1603_);
v___x_1605_ = v___x_1557_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1603_);
lean_ctor_set(v_reuseFailAlloc_1618_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1618_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1618_, 3, v_l_1394_);
lean_ctor_set(v_reuseFailAlloc_1618_, 4, v_l_1546_);
v___x_1605_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1612_; 
v_isSharedCheck_1612_ = !lean_is_exclusive(v_l_1394_);
if (v_isSharedCheck_1612_ == 0)
{
lean_object* v_unused_1613_; lean_object* v_unused_1614_; lean_object* v_unused_1615_; lean_object* v_unused_1616_; lean_object* v_unused_1617_; 
v_unused_1613_ = lean_ctor_get(v_l_1394_, 4);
lean_dec(v_unused_1613_);
v_unused_1614_ = lean_ctor_get(v_l_1394_, 3);
lean_dec(v_unused_1614_);
v_unused_1615_ = lean_ctor_get(v_l_1394_, 2);
lean_dec(v_unused_1615_);
v_unused_1616_ = lean_ctor_get(v_l_1394_, 1);
lean_dec(v_unused_1616_);
v_unused_1617_ = lean_ctor_get(v_l_1394_, 0);
lean_dec(v_unused_1617_);
v___x_1607_ = v_l_1394_;
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
else
{
lean_dec(v_l_1394_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1610_; 
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 4, v_r_1547_);
lean_ctor_set(v___x_1607_, 3, v___x_1605_);
lean_ctor_set(v___x_1607_, 2, v_v_1545_);
lean_ctor_set(v___x_1607_, 1, v_k_1544_);
lean_ctor_set(v___x_1607_, 0, v___x_1602_);
v___x_1610_ = v___x_1607_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_k_1544_);
lean_ctor_set(v_reuseFailAlloc_1611_, 2, v_v_1545_);
lean_ctor_set(v_reuseFailAlloc_1611_, 3, v___x_1605_);
lean_ctor_set(v_reuseFailAlloc_1611_, 4, v_r_1547_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1625_; 
v_l_1625_ = lean_ctor_get(v_impl_1540_, 3);
lean_inc(v_l_1625_);
if (lean_obj_tag(v_l_1625_) == 0)
{
lean_object* v_r_1626_; lean_object* v_k_1627_; lean_object* v_v_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1651_; 
v_r_1626_ = lean_ctor_get(v_impl_1540_, 4);
v_k_1627_ = lean_ctor_get(v_impl_1540_, 1);
v_v_1628_ = lean_ctor_get(v_impl_1540_, 2);
v_isSharedCheck_1651_ = !lean_is_exclusive(v_impl_1540_);
if (v_isSharedCheck_1651_ == 0)
{
lean_object* v_unused_1652_; lean_object* v_unused_1653_; 
v_unused_1652_ = lean_ctor_get(v_impl_1540_, 3);
lean_dec(v_unused_1652_);
v_unused_1653_ = lean_ctor_get(v_impl_1540_, 0);
lean_dec(v_unused_1653_);
v___x_1630_ = v_impl_1540_;
v_isShared_1631_ = v_isSharedCheck_1651_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_r_1626_);
lean_inc(v_v_1628_);
lean_inc(v_k_1627_);
lean_dec(v_impl_1540_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1651_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v_k_1632_; lean_object* v_v_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1647_; 
v_k_1632_ = lean_ctor_get(v_l_1625_, 1);
v_v_1633_ = lean_ctor_get(v_l_1625_, 2);
v_isSharedCheck_1647_ = !lean_is_exclusive(v_l_1625_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; lean_object* v_unused_1649_; lean_object* v_unused_1650_; 
v_unused_1648_ = lean_ctor_get(v_l_1625_, 4);
lean_dec(v_unused_1648_);
v_unused_1649_ = lean_ctor_get(v_l_1625_, 3);
lean_dec(v_unused_1649_);
v_unused_1650_ = lean_ctor_get(v_l_1625_, 0);
lean_dec(v_unused_1650_);
v___x_1635_ = v_l_1625_;
v_isShared_1636_ = v_isSharedCheck_1647_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_v_1633_);
lean_inc(v_k_1632_);
lean_dec(v_l_1625_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1647_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1637_; lean_object* v___x_1639_; 
v___x_1637_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1626_, 2);
if (v_isShared_1636_ == 0)
{
lean_ctor_set(v___x_1635_, 4, v_r_1626_);
lean_ctor_set(v___x_1635_, 3, v_r_1626_);
lean_ctor_set(v___x_1635_, 2, v_v_1393_);
lean_ctor_set(v___x_1635_, 1, v_k_1392_);
lean_ctor_set(v___x_1635_, 0, v___x_1541_);
v___x_1639_ = v___x_1635_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1541_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1646_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1646_, 3, v_r_1626_);
lean_ctor_set(v_reuseFailAlloc_1646_, 4, v_r_1626_);
v___x_1639_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
lean_object* v___x_1641_; 
lean_inc(v_r_1626_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 3, v_r_1626_);
lean_ctor_set(v___x_1630_, 0, v___x_1541_);
v___x_1641_ = v___x_1630_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1541_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v_k_1627_);
lean_ctor_set(v_reuseFailAlloc_1645_, 2, v_v_1628_);
lean_ctor_set(v_reuseFailAlloc_1645_, 3, v_r_1626_);
lean_ctor_set(v_reuseFailAlloc_1645_, 4, v_r_1626_);
v___x_1641_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
lean_object* v___x_1643_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v___x_1641_);
lean_ctor_set(v___x_1397_, 3, v___x_1639_);
lean_ctor_set(v___x_1397_, 2, v_v_1633_);
lean_ctor_set(v___x_1397_, 1, v_k_1632_);
lean_ctor_set(v___x_1397_, 0, v___x_1637_);
v___x_1643_ = v___x_1397_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1637_);
lean_ctor_set(v_reuseFailAlloc_1644_, 1, v_k_1632_);
lean_ctor_set(v_reuseFailAlloc_1644_, 2, v_v_1633_);
lean_ctor_set(v_reuseFailAlloc_1644_, 3, v___x_1639_);
lean_ctor_set(v_reuseFailAlloc_1644_, 4, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
}
else
{
lean_object* v_r_1654_; 
v_r_1654_ = lean_ctor_get(v_impl_1540_, 4);
lean_inc(v_r_1654_);
if (lean_obj_tag(v_r_1654_) == 0)
{
lean_object* v_k_1655_; lean_object* v_v_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1667_; 
v_k_1655_ = lean_ctor_get(v_impl_1540_, 1);
v_v_1656_ = lean_ctor_get(v_impl_1540_, 2);
v_isSharedCheck_1667_ = !lean_is_exclusive(v_impl_1540_);
if (v_isSharedCheck_1667_ == 0)
{
lean_object* v_unused_1668_; lean_object* v_unused_1669_; lean_object* v_unused_1670_; 
v_unused_1668_ = lean_ctor_get(v_impl_1540_, 4);
lean_dec(v_unused_1668_);
v_unused_1669_ = lean_ctor_get(v_impl_1540_, 3);
lean_dec(v_unused_1669_);
v_unused_1670_ = lean_ctor_get(v_impl_1540_, 0);
lean_dec(v_unused_1670_);
v___x_1658_ = v_impl_1540_;
v_isShared_1659_ = v_isSharedCheck_1667_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_v_1656_);
lean_inc(v_k_1655_);
lean_dec(v_impl_1540_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1667_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1660_; lean_object* v___x_1662_; 
v___x_1660_ = lean_unsigned_to_nat(3u);
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 4, v_l_1625_);
lean_ctor_set(v___x_1658_, 2, v_v_1393_);
lean_ctor_set(v___x_1658_, 1, v_k_1392_);
lean_ctor_set(v___x_1658_, 0, v___x_1541_);
v___x_1662_ = v___x_1658_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1541_);
lean_ctor_set(v_reuseFailAlloc_1666_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1666_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1666_, 3, v_l_1625_);
lean_ctor_set(v_reuseFailAlloc_1666_, 4, v_l_1625_);
v___x_1662_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
lean_object* v___x_1664_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v_r_1654_);
lean_ctor_set(v___x_1397_, 3, v___x_1662_);
lean_ctor_set(v___x_1397_, 2, v_v_1656_);
lean_ctor_set(v___x_1397_, 1, v_k_1655_);
lean_ctor_set(v___x_1397_, 0, v___x_1660_);
v___x_1664_ = v___x_1397_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1660_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_k_1655_);
lean_ctor_set(v_reuseFailAlloc_1665_, 2, v_v_1656_);
lean_ctor_set(v_reuseFailAlloc_1665_, 3, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1665_, 4, v_r_1654_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
}
else
{
lean_object* v___x_1671_; lean_object* v___x_1673_; 
v___x_1671_ = lean_unsigned_to_nat(2u);
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 4, v_impl_1540_);
lean_ctor_set(v___x_1397_, 3, v_r_1654_);
lean_ctor_set(v___x_1397_, 0, v___x_1671_);
v___x_1673_ = v___x_1397_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1671_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v_k_1392_);
lean_ctor_set(v_reuseFailAlloc_1674_, 2, v_v_1393_);
lean_ctor_set(v_reuseFailAlloc_1674_, 3, v_r_1654_);
lean_ctor_set(v_reuseFailAlloc_1674_, 4, v_impl_1540_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
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
lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1676_ = lean_unsigned_to_nat(1u);
v___x_1677_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
lean_ctor_set(v___x_1677_, 1, v_k_1388_);
lean_ctor_set(v___x_1677_, 2, v_v_1389_);
lean_ctor_set(v___x_1677_, 3, v_t_1390_);
lean_ctor_set(v___x_1677_, 4, v_t_1390_);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(lean_object* v_as_1678_, size_t v_sz_1679_, size_t v_i_1680_, lean_object* v_b_1681_){
_start:
{
lean_object* v___y_1684_; uint8_t v___x_1688_; 
v___x_1688_ = lean_usize_dec_lt(v_i_1680_, v_sz_1679_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1689_, 0, v_b_1681_);
return v___x_1689_;
}
else
{
lean_object* v_a_1690_; uint8_t v___x_1691_; 
v_a_1690_ = lean_array_uget_borrowed(v_as_1678_, v_i_1680_);
lean_inc(v_b_1681_);
lean_inc(v_a_1690_);
v___x_1691_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_a_1690_, v_b_1681_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1692_ = lean_box(0);
lean_inc(v_a_1690_);
v___x_1693_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_a_1690_, v___x_1692_, v_b_1681_);
v___y_1684_ = v___x_1693_;
goto v___jp_1683_;
}
else
{
v___y_1684_ = v_b_1681_;
goto v___jp_1683_;
}
}
v___jp_1683_:
{
size_t v___x_1685_; size_t v___x_1686_; 
v___x_1685_ = ((size_t)1ULL);
v___x_1686_ = lean_usize_add(v_i_1680_, v___x_1685_);
v_i_1680_ = v___x_1686_;
v_b_1681_ = v___y_1684_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg___boxed(lean_object* v_as_1694_, lean_object* v_sz_1695_, lean_object* v_i_1696_, lean_object* v_b_1697_, lean_object* v___y_1698_){
_start:
{
size_t v_sz_boxed_1699_; size_t v_i_boxed_1700_; lean_object* v_res_1701_; 
v_sz_boxed_1699_ = lean_unbox_usize(v_sz_1695_);
lean_dec(v_sz_1695_);
v_i_boxed_1700_ = lean_unbox_usize(v_i_1696_);
lean_dec(v_i_1696_);
v_res_1701_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_as_1694_, v_sz_boxed_1699_, v_i_boxed_1700_, v_b_1697_);
lean_dec_ref(v_as_1694_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(lean_object* v_type_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v_set_1708_; lean_object* v___x_1709_; 
v_set_1708_ = lean_box(1);
v___x_1709_ = l_Lean_Server_Completion_getDotCompletionTypeNames(v_type_1702_, v_a_1703_, v_a_1704_, v_a_1705_, v_a_1706_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; size_t v_sz_1711_; size_t v___x_1712_; lean_object* v___x_1713_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
lean_inc(v_a_1710_);
lean_dec_ref_known(v___x_1709_, 1);
v_sz_1711_ = lean_array_size(v_a_1710_);
v___x_1712_ = ((size_t)0ULL);
v___x_1713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_a_1710_, v_sz_1711_, v___x_1712_, v_set_1708_);
lean_dec(v_a_1710_);
return v___x_1713_;
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
v_a_1714_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1709_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1709_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet___boxed(lean_object* v_type_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(v_type_1722_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_);
lean_dec(v_a_1726_);
lean_dec_ref(v_a_1725_);
lean_dec(v_a_1724_);
lean_dec_ref(v_a_1723_);
return v_res_1728_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(lean_object* v_00_u03b2_1729_, lean_object* v_k_1730_, lean_object* v_t_1731_){
_start:
{
uint8_t v___x_1732_; 
v___x_1732_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_k_1730_, v_t_1731_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___boxed(lean_object* v_00_u03b2_1733_, lean_object* v_k_1734_, lean_object* v_t_1735_){
_start:
{
uint8_t v_res_1736_; lean_object* v_r_1737_; 
v_res_1736_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(v_00_u03b2_1733_, v_k_1734_, v_t_1735_);
v_r_1737_ = lean_box(v_res_1736_);
return v_r_1737_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1(lean_object* v_00_u03b2_1738_, lean_object* v_k_1739_, lean_object* v_v_1740_, lean_object* v_t_1741_, lean_object* v_hl_1742_){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1739_, v_v_1740_, v_t_1741_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(lean_object* v_as_1744_, size_t v_sz_1745_, size_t v_i_1746_, lean_object* v_b_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_as_1744_, v_sz_1745_, v_i_1746_, v_b_1747_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___boxed(lean_object* v_as_1754_, lean_object* v_sz_1755_, lean_object* v_i_1756_, lean_object* v_b_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_){
_start:
{
size_t v_sz_boxed_1763_; size_t v_i_boxed_1764_; lean_object* v_res_1765_; 
v_sz_boxed_1763_ = lean_unbox_usize(v_sz_1755_);
lean_dec(v_sz_1755_);
v_i_boxed_1764_ = lean_unbox_usize(v_i_1756_);
lean_dec(v_i_1756_);
v_res_1765_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(v_as_1754_, v_sz_boxed_1763_, v_i_boxed_1764_, v_b_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec_ref(v_as_1754_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(lean_object* v_e_1766_, lean_object* v_declName_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_){
_start:
{
uint8_t v___y_1774_; uint8_t v___y_1796_; lean_object* v___x_1799_; 
v___x_1799_ = l_Lean_Expr_getAppFn(v_e_1766_);
if (lean_obj_tag(v___x_1799_) == 4)
{
lean_object* v_declName_1800_; lean_object* v___x_1801_; 
v_declName_1800_ = lean_ctor_get(v___x_1799_, 0);
lean_inc_n(v_declName_1800_, 2);
lean_dec_ref_known(v___x_1799_, 2);
v___x_1801_ = l_Lean_privateToUserName_x3f(v_declName_1800_);
if (lean_obj_tag(v___x_1801_) == 0)
{
uint8_t v___x_1802_; 
v___x_1802_ = lean_name_eq(v_declName_1800_, v_declName_1767_);
lean_dec(v_declName_1800_);
v___y_1796_ = v___x_1802_;
goto v___jp_1795_;
}
else
{
lean_object* v_val_1803_; uint8_t v___x_1804_; 
lean_dec(v_declName_1800_);
v_val_1803_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_val_1803_);
lean_dec_ref_known(v___x_1801_, 1);
v___x_1804_ = lean_name_eq(v_val_1803_, v_declName_1767_);
lean_dec(v_val_1803_);
v___y_1796_ = v___x_1804_;
goto v___jp_1795_;
}
}
else
{
uint8_t v___x_1805_; 
lean_dec_ref(v___x_1799_);
v___x_1805_ = 0;
v___y_1774_ = v___x_1805_;
goto v___jp_1773_;
}
v___jp_1773_:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(v_e_1766_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1786_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
if (lean_obj_tag(v_a_1776_) == 1)
{
lean_object* v_val_1780_; 
lean_del_object(v___x_1778_);
v_val_1780_ = lean_ctor_get(v_a_1776_, 0);
lean_inc(v_val_1780_);
lean_dec_ref_known(v_a_1776_, 1);
v_e_1766_ = v_val_1780_;
goto _start;
}
else
{
lean_object* v___x_1782_; lean_object* v___x_1784_; 
lean_dec(v_a_1776_);
v___x_1782_ = lean_box(v___y_1774_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1782_);
v___x_1784_ = v___x_1778_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
v_a_1787_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1775_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1775_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
v___jp_1795_:
{
if (v___y_1796_ == 0)
{
v___y_1774_ = v___y_1796_;
goto v___jp_1773_;
}
else
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
lean_dec_ref(v_e_1766_);
v___x_1797_ = lean_box(v___y_1796_);
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1797_);
return v___x_1798_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf___boxed(lean_object* v_e_1806_, lean_object* v_declName_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(v_e_1806_, v_declName_1807_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_);
lean_dec(v_a_1811_);
lean_dec_ref(v_a_1810_);
lean_dec(v_a_1809_);
lean_dec_ref(v_a_1808_);
lean_dec(v_declName_1807_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(lean_object* v_k_1814_, lean_object* v_b_1815_, lean_object* v_c_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v___x_1822_; 
lean_inc(v___y_1820_);
lean_inc_ref(v___y_1819_);
lean_inc(v___y_1818_);
lean_inc_ref(v___y_1817_);
v___x_1822_ = lean_apply_7(v_k_1814_, v_b_1815_, v_c_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, lean_box(0));
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed(lean_object* v_k_1823_, lean_object* v_b_1824_, lean_object* v_c_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(v_k_1823_, v_b_1824_, v_c_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(lean_object* v_type_1832_, lean_object* v_k_1833_, uint8_t v_cleanupAnnotations_1834_, uint8_t v_whnfType_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
lean_object* v___f_1841_; lean_object* v___x_1842_; 
v___f_1841_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1841_, 0, v_k_1833_);
v___x_1842_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1832_, v___f_1841_, v_cleanupAnnotations_1834_, v_whnfType_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
v_a_1851_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1842_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1842_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___boxed(lean_object* v_type_1859_, lean_object* v_k_1860_, lean_object* v_cleanupAnnotations_1861_, lean_object* v_whnfType_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1868_; uint8_t v_whnfType_boxed_1869_; lean_object* v_res_1870_; 
v_cleanupAnnotations_boxed_1868_ = lean_unbox(v_cleanupAnnotations_1861_);
v_whnfType_boxed_1869_ = lean_unbox(v_whnfType_1862_);
v_res_1870_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v_type_1859_, v_k_1860_, v_cleanupAnnotations_boxed_1868_, v_whnfType_boxed_1869_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(lean_object* v_00_u03b1_1871_, lean_object* v_type_1872_, lean_object* v_k_1873_, uint8_t v_cleanupAnnotations_1874_, uint8_t v_whnfType_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v_type_1872_, v_k_1873_, v_cleanupAnnotations_1874_, v_whnfType_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___boxed(lean_object* v_00_u03b1_1882_, lean_object* v_type_1883_, lean_object* v_k_1884_, lean_object* v_cleanupAnnotations_1885_, lean_object* v_whnfType_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1892_; uint8_t v_whnfType_boxed_1893_; lean_object* v_res_1894_; 
v_cleanupAnnotations_boxed_1892_ = lean_unbox(v_cleanupAnnotations_1885_);
v_whnfType_boxed_1893_ = lean_unbox(v_whnfType_1886_);
v_res_1894_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(v_00_u03b1_1882_, v_type_1883_, v_k_1884_, v_cleanupAnnotations_boxed_1892_, v_whnfType_boxed_1893_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(lean_object* v_typeName_1898_, lean_object* v_as_1899_, size_t v_sz_1900_, size_t v_i_1901_, lean_object* v_b_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
uint8_t v___x_1908_; 
v___x_1908_ = lean_usize_dec_lt(v_i_1901_, v_sz_1900_);
if (v___x_1908_ == 0)
{
lean_object* v___x_1909_; 
v___x_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1909_, 0, v_b_1902_);
return v___x_1909_;
}
else
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v_a_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
lean_dec_ref(v_b_1902_);
v___x_1910_ = lean_box(0);
v___x_1911_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0));
v_a_1912_ = lean_array_uget_borrowed(v_as_1899_, v_i_1901_);
v___x_1913_ = l_Lean_Expr_fvarId_x21(v_a_1912_);
v___x_1914_ = l_Lean_FVarId_getDecl___redArg(v___x_1913_, v___y_1903_, v___y_1905_, v___y_1906_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v___x_1916_ = l_Lean_LocalDecl_type(v_a_1915_);
lean_dec(v_a_1915_);
v___x_1917_ = l_Lean_Expr_consumeMData(v___x_1916_);
lean_dec_ref(v___x_1916_);
v___x_1918_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(v___x_1917_, v_typeName_1898_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1932_; 
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1921_ = v___x_1918_;
v_isShared_1922_ = v_isSharedCheck_1932_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1918_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1932_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
uint8_t v___x_1923_; 
v___x_1923_ = lean_unbox(v_a_1919_);
if (v___x_1923_ == 0)
{
size_t v___x_1924_; size_t v___x_1925_; 
lean_del_object(v___x_1921_);
lean_dec(v_a_1919_);
v___x_1924_ = ((size_t)1ULL);
v___x_1925_ = lean_usize_add(v_i_1901_, v___x_1924_);
v_i_1901_ = v___x_1925_;
v_b_1902_ = v___x_1911_;
goto _start;
}
else
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1930_; 
v___x_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1927_, 0, v_a_1919_);
v___x_1928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1927_);
lean_ctor_set(v___x_1928_, 1, v___x_1910_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v___x_1928_);
v___x_1930_ = v___x_1921_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v___x_1928_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
v_a_1933_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1918_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1918_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1933_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
v_a_1941_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1914_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1914_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___boxed(lean_object* v_typeName_1949_, lean_object* v_as_1950_, lean_object* v_sz_1951_, lean_object* v_i_1952_, lean_object* v_b_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_){
_start:
{
size_t v_sz_boxed_1959_; size_t v_i_boxed_1960_; lean_object* v_res_1961_; 
v_sz_boxed_1959_ = lean_unbox_usize(v_sz_1951_);
lean_dec(v_sz_1951_);
v_i_boxed_1960_ = lean_unbox_usize(v_i_1952_);
lean_dec(v_i_1952_);
v_res_1961_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(v_typeName_1949_, v_as_1950_, v_sz_boxed_1959_, v_i_boxed_1960_, v_b_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_);
lean_dec(v___y_1957_);
lean_dec_ref(v___y_1956_);
lean_dec(v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec_ref(v_as_1950_);
lean_dec(v_typeName_1949_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(lean_object* v_typeName_1962_, lean_object* v_xs_1963_, lean_object* v_x_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v___x_1970_; size_t v_sz_1971_; size_t v___x_1972_; lean_object* v___x_1973_; 
v___x_1970_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0));
v_sz_1971_ = lean_array_size(v_xs_1963_);
v___x_1972_ = ((size_t)0ULL);
v___x_1973_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(v_typeName_1962_, v_xs_1963_, v_sz_1971_, v___x_1972_, v___x_1970_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1988_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1976_ = v___x_1973_;
v_isShared_1977_ = v_isSharedCheck_1988_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1988_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v_fst_1978_; 
v_fst_1978_ = lean_ctor_get(v_a_1974_, 0);
lean_inc(v_fst_1978_);
lean_dec(v_a_1974_);
if (lean_obj_tag(v_fst_1978_) == 0)
{
uint8_t v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1982_; 
v___x_1979_ = 0;
v___x_1980_ = lean_box(v___x_1979_);
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v___x_1980_);
v___x_1982_ = v___x_1976_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1980_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
else
{
lean_object* v_val_1984_; lean_object* v___x_1986_; 
v_val_1984_ = lean_ctor_get(v_fst_1978_, 0);
lean_inc(v_val_1984_);
lean_dec_ref_known(v_fst_1978_, 1);
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v_val_1984_);
v___x_1986_ = v___x_1976_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_val_1984_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
}
else
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1996_; 
v_a_1989_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1991_ = v___x_1973_;
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1973_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed(lean_object* v_typeName_1997_, lean_object* v_xs_1998_, lean_object* v_x_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(v_typeName_1997_, v_xs_1998_, v_x_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
lean_dec(v___y_2001_);
lean_dec_ref(v___y_2000_);
lean_dec_ref(v_x_1999_);
lean_dec_ref(v_xs_1998_);
lean_dec(v_typeName_1997_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(lean_object* v_typeName_2006_, lean_object* v_info_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v___f_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; lean_object* v___x_2016_; 
v___f_2013_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2013_, 0, v_typeName_2006_);
v___x_2014_ = l_Lean_ConstantInfo_type(v_info_2007_);
v___x_2015_ = 0;
v___x_2016_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v___x_2014_, v___f_2013_, v___x_2015_, v___x_2015_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___boxed(lean_object* v_typeName_2017_, lean_object* v_info_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(v_typeName_2017_, v_info_2018_, v_a_2019_, v_a_2020_, v_a_2021_, v_a_2022_);
lean_dec(v_a_2022_);
lean_dec_ref(v_a_2021_);
lean_dec(v_a_2020_);
lean_dec_ref(v_a_2019_);
lean_dec_ref(v_info_2018_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(lean_object* v_e_2025_, lean_object* v___y_2026_){
_start:
{
uint8_t v___x_2028_; 
v___x_2028_ = l_Lean_Expr_hasMVar(v_e_2025_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; 
v___x_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2029_, 0, v_e_2025_);
return v___x_2029_;
}
else
{
lean_object* v___x_2030_; lean_object* v_mctx_2031_; lean_object* v___x_2032_; lean_object* v_fst_2033_; lean_object* v_snd_2034_; lean_object* v___x_2035_; lean_object* v_cache_2036_; lean_object* v_zetaDeltaFVarIds_2037_; lean_object* v_postponed_2038_; lean_object* v_diag_2039_; lean_object* v_rewriteFires_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2049_; 
v___x_2030_ = lean_st_ref_get(v___y_2026_);
v_mctx_2031_ = lean_ctor_get(v___x_2030_, 0);
lean_inc_ref(v_mctx_2031_);
lean_dec(v___x_2030_);
v___x_2032_ = l_Lean_instantiateMVarsCore(v_mctx_2031_, v_e_2025_);
v_fst_2033_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_fst_2033_);
v_snd_2034_ = lean_ctor_get(v___x_2032_, 1);
lean_inc(v_snd_2034_);
lean_dec_ref(v___x_2032_);
v___x_2035_ = lean_st_ref_take(v___y_2026_);
v_cache_2036_ = lean_ctor_get(v___x_2035_, 1);
v_zetaDeltaFVarIds_2037_ = lean_ctor_get(v___x_2035_, 2);
v_postponed_2038_ = lean_ctor_get(v___x_2035_, 3);
v_diag_2039_ = lean_ctor_get(v___x_2035_, 4);
v_rewriteFires_2040_ = lean_ctor_get(v___x_2035_, 5);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; 
v_unused_2050_ = lean_ctor_get(v___x_2035_, 0);
lean_dec(v_unused_2050_);
v___x_2042_ = v___x_2035_;
v_isShared_2043_ = v_isSharedCheck_2049_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_rewriteFires_2040_);
lean_inc(v_diag_2039_);
lean_inc(v_postponed_2038_);
lean_inc(v_zetaDeltaFVarIds_2037_);
lean_inc(v_cache_2036_);
lean_dec(v___x_2035_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2049_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2045_; 
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 0, v_snd_2034_);
v___x_2045_ = v___x_2042_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_snd_2034_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v_cache_2036_);
lean_ctor_set(v_reuseFailAlloc_2048_, 2, v_zetaDeltaFVarIds_2037_);
lean_ctor_set(v_reuseFailAlloc_2048_, 3, v_postponed_2038_);
lean_ctor_set(v_reuseFailAlloc_2048_, 4, v_diag_2039_);
lean_ctor_set(v_reuseFailAlloc_2048_, 5, v_rewriteFires_2040_);
v___x_2045_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; 
v___x_2046_ = lean_st_ref_put(v___y_2026_, v___x_2045_);
v___x_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2047_, 0, v_fst_2033_);
return v___x_2047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg___boxed(lean_object* v_e_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_e_2051_, v___y_2052_);
lean_dec(v___y_2052_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(lean_object* v_e_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_){
_start:
{
lean_object* v___x_2061_; 
v___x_2061_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_e_2055_, v___y_2057_);
return v___x_2061_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___boxed(lean_object* v_e_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(v_e_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(lean_object* v_type_2069_, lean_object* v_k_2070_, uint8_t v_cleanupAnnotations_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v___f_2077_; uint8_t v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___f_2077_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2077_, 0, v_k_2070_);
v___x_2078_ = 0;
v___x_2079_ = lean_box(0);
v___x_2080_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2078_, v___x_2079_, v_type_2069_, v___f_2077_, v_cleanupAnnotations_2071_, v___x_2078_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
v_a_2081_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2080_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2080_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
v_a_2089_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2080_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2080_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg___boxed(lean_object* v_type_2097_, lean_object* v_k_2098_, lean_object* v_cleanupAnnotations_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2105_; lean_object* v_res_2106_; 
v_cleanupAnnotations_boxed_2105_ = lean_unbox(v_cleanupAnnotations_2099_);
v_res_2106_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_type_2097_, v_k_2098_, v_cleanupAnnotations_boxed_2105_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(lean_object* v_00_u03b1_2107_, lean_object* v_type_2108_, lean_object* v_k_2109_, uint8_t v_cleanupAnnotations_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_type_2108_, v_k_2109_, v_cleanupAnnotations_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___boxed(lean_object* v_00_u03b1_2117_, lean_object* v_type_2118_, lean_object* v_k_2119_, lean_object* v_cleanupAnnotations_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2126_; lean_object* v_res_2127_; 
v_cleanupAnnotations_boxed_2126_ = lean_unbox(v_cleanupAnnotations_2120_);
v_res_2127_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(v_00_u03b1_2117_, v_type_2118_, v_k_2119_, v_cleanupAnnotations_boxed_2126_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed(lean_object* v_typeNameSet_2128_, lean_object* v_x_2129_, lean_object* v_type_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(v_typeNameSet_2128_, v_x_2129_, v_type_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec_ref(v_x_2129_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(lean_object* v_typeNameSet_2137_, lean_object* v_type_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_){
_start:
{
lean_object* v___f_2144_; lean_object* v_a_2146_; lean_object* v___x_2196_; 
lean_inc(v_typeNameSet_2137_);
v___f_2144_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2144_, 0, v_typeNameSet_2137_);
lean_inc_ref(v_type_2138_);
v___x_2196_ = l_Lean_Meta_whnfCoreUnfoldingAnnotations(v_type_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v_a_2197_; 
lean_dec_ref(v_type_2138_);
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_a_2197_);
lean_dec_ref_known(v___x_2196_, 1);
v_a_2146_ = v_a_2197_;
goto v___jp_2145_;
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2210_; 
v_a_2198_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2200_ = v___x_2196_;
v_isShared_2201_ = v_isSharedCheck_2210_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2196_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2210_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
uint8_t v___x_2202_; 
v___x_2202_ = l_Lean_Exception_isInterrupt(v_a_2198_);
if (v___x_2202_ == 0)
{
uint8_t v___x_2203_; 
lean_inc(v_a_2198_);
v___x_2203_ = l_Lean_Exception_isRuntime(v_a_2198_);
if (v___x_2203_ == 0)
{
lean_del_object(v___x_2200_);
lean_dec(v_a_2198_);
v_a_2146_ = v_type_2138_;
goto v___jp_2145_;
}
else
{
lean_object* v___x_2205_; 
lean_dec_ref(v___f_2144_);
lean_dec_ref(v_type_2138_);
lean_dec(v_typeNameSet_2137_);
if (v_isShared_2201_ == 0)
{
v___x_2205_ = v___x_2200_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2198_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
else
{
lean_object* v___x_2208_; 
lean_dec_ref(v___f_2144_);
lean_dec_ref(v_type_2138_);
lean_dec(v_typeNameSet_2137_);
if (v_isShared_2201_ == 0)
{
v___x_2208_ = v___x_2200_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2198_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
v___jp_2145_:
{
uint8_t v___x_2147_; 
v___x_2147_ = l_Lean_Expr_isForall(v_a_2146_);
if (v___x_2147_ == 0)
{
uint8_t v___x_2148_; lean_object* v___x_2149_; 
lean_dec_ref(v___f_2144_);
v___x_2148_ = 1;
v___x_2149_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_a_2146_, v_a_2140_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2185_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2152_ = v___x_2149_;
v_isShared_2153_ = v_isSharedCheck_2185_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_dec(v___x_2149_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2185_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2154_; 
v___x_2154_ = l_Lean_Expr_getAppFn(v_a_2150_);
if (lean_obj_tag(v___x_2154_) == 4)
{
lean_object* v_declName_2155_; uint8_t v___x_2156_; 
v_declName_2155_ = lean_ctor_get(v___x_2154_, 0);
lean_inc(v_declName_2155_);
lean_dec_ref_known(v___x_2154_, 2);
lean_inc(v_typeNameSet_2137_);
v___x_2156_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_declName_2155_, v_typeNameSet_2137_);
if (v___x_2156_ == 0)
{
lean_object* v___x_2157_; 
lean_del_object(v___x_2152_);
v___x_2157_ = l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(v_a_2150_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_);
if (lean_obj_tag(v___x_2157_) == 0)
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2168_; 
v_a_2158_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2160_ = v___x_2157_;
v_isShared_2161_ = v_isSharedCheck_2168_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2157_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2168_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
if (lean_obj_tag(v_a_2158_) == 1)
{
lean_object* v_val_2162_; 
lean_del_object(v___x_2160_);
v_val_2162_ = lean_ctor_get(v_a_2158_, 0);
lean_inc(v_val_2162_);
lean_dec_ref_known(v_a_2158_, 1);
v_type_2138_ = v_val_2162_;
goto _start;
}
else
{
lean_object* v___x_2164_; lean_object* v___x_2166_; 
lean_dec(v_a_2158_);
lean_dec(v_typeNameSet_2137_);
v___x_2164_ = lean_box(v___x_2156_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v___x_2164_);
v___x_2166_ = v___x_2160_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2164_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
lean_dec(v_typeNameSet_2137_);
v_a_2169_ = lean_ctor_get(v___x_2157_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2171_ = v___x_2157_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2157_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
else
{
lean_object* v___x_2177_; lean_object* v___x_2179_; 
lean_dec(v_a_2150_);
lean_dec(v_typeNameSet_2137_);
v___x_2177_ = lean_box(v___x_2148_);
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 0, v___x_2177_);
v___x_2179_ = v___x_2152_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2177_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
else
{
lean_object* v___x_2181_; lean_object* v___x_2183_; 
lean_dec_ref(v___x_2154_);
lean_dec(v_a_2150_);
lean_dec(v_typeNameSet_2137_);
v___x_2181_ = lean_box(v___x_2147_);
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 0, v___x_2181_);
v___x_2183_ = v___x_2152_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
else
{
lean_object* v_a_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2193_; 
lean_dec(v_typeNameSet_2137_);
v_a_2186_ = lean_ctor_get(v___x_2149_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2188_ = v___x_2149_;
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_a_2186_);
lean_dec(v___x_2149_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2191_; 
if (v_isShared_2189_ == 0)
{
v___x_2191_ = v___x_2188_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2186_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
else
{
uint8_t v___x_2194_; lean_object* v___x_2195_; 
lean_dec(v_typeNameSet_2137_);
v___x_2194_ = 0;
v___x_2195_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_a_2146_, v___f_2144_, v___x_2194_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_);
return v___x_2195_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(lean_object* v_typeNameSet_2211_, lean_object* v_x_2212_, lean_object* v_type_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2211_, v_type_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___boxed(lean_object* v_typeNameSet_2220_, lean_object* v_type_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2220_, v_type_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_);
lean_dec(v_a_2225_);
lean_dec_ref(v_a_2224_);
lean_dec(v_a_2223_);
lean_dec_ref(v_a_2222_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(lean_object* v_typeNameSet_2228_, lean_object* v_info_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = l_Lean_ConstantInfo_type(v_info_2229_);
v___x_2236_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2228_, v___x_2235_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod___boxed(lean_object* v_typeNameSet_2237_, lean_object* v_info_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(v_typeNameSet_2237_, v_info_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_2242_);
lean_dec(v_a_2242_);
lean_dec_ref(v_a_2241_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
lean_dec_ref(v_info_2238_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(lean_object* v_matchAlias_2245_, lean_object* v_addAlias_2246_, lean_object* v_alias_2247_, lean_object* v_declNames_2248_, lean_object* v_ns_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_){
_start:
{
lean_object* v___x_2258_; uint8_t v___x_2259_; 
lean_inc_ref(v_matchAlias_2245_);
lean_inc(v_alias_2247_);
lean_inc(v_ns_2249_);
v___x_2258_ = lean_apply_2(v_matchAlias_2245_, v_ns_2249_, v_alias_2247_);
v___x_2259_ = lean_unbox(v___x_2258_);
if (v___x_2259_ == 0)
{
if (lean_obj_tag(v_ns_2249_) == 1)
{
lean_object* v_pre_2260_; 
v_pre_2260_ = lean_ctor_get(v_ns_2249_, 0);
lean_inc(v_pre_2260_);
lean_dec_ref_known(v_ns_2249_, 2);
v_ns_2249_ = v_pre_2260_;
goto _start;
}
else
{
lean_object* v___x_2262_; lean_object* v___x_2263_; 
lean_dec(v_ns_2249_);
lean_dec(v_declNames_2248_);
lean_dec(v_alias_2247_);
lean_dec_ref(v_addAlias_2246_);
lean_dec_ref(v_matchAlias_2245_);
v___x_2262_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
return v___x_2263_;
}
}
else
{
lean_object* v___x_2264_; 
lean_dec(v_ns_2249_);
lean_dec_ref(v_matchAlias_2245_);
lean_inc(v_a_2256_);
lean_inc_ref(v_a_2255_);
lean_inc(v_a_2254_);
lean_inc_ref(v_a_2253_);
lean_inc_ref(v_a_2252_);
lean_inc(v_a_2251_);
lean_inc_ref(v_a_2250_);
v___x_2264_ = lean_apply_10(v_addAlias_2246_, v_alias_2247_, v_declNames_2248_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_, v_a_2255_, v_a_2256_, lean_box(0));
return v___x_2264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias___boxed(lean_object* v_matchAlias_2265_, lean_object* v_addAlias_2266_, lean_object* v_alias_2267_, lean_object* v_declNames_2268_, lean_object* v_ns_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(v_matchAlias_2265_, v_addAlias_2266_, v_alias_2267_, v_declNames_2268_, v_ns_2269_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_, v_a_2274_, v_a_2275_, v_a_2276_);
lean_dec(v_a_2276_);
lean_dec_ref(v_a_2275_);
lean_dec(v_a_2274_);
lean_dec_ref(v_a_2273_);
lean_dec_ref(v_a_2272_);
lean_dec(v_a_2271_);
lean_dec_ref(v_a_2270_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(lean_object* v_a_2281_){
_start:
{
uint8_t v___x_2283_; 
v___x_2283_ = l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(v_a_2281_);
if (v___x_2283_ == 0)
{
lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2284_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
return v___x_2285_;
}
else
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = ((lean_object*)(l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0));
v___x_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2286_);
return v___x_2287_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___boxed(lean_object* v_a_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v_a_2288_);
lean_dec_ref(v_a_2288_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(lean_object* v_a_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v_a_2291_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___boxed(lean_object* v_a_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(v_a_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec_ref(v_a_2298_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(lean_object* v_ctx_2305_, lean_object* v_id_2306_, uint8_t v_danglingDot_2307_, lean_object* v_declName_2308_, lean_object* v_decl_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
lean_object* v___x_2318_; 
lean_inc(v_declName_2308_);
v___x_2318_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_2305_, v_declName_2308_, v_id_2306_, v_danglingDot_2307_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2371_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2321_ = v___x_2318_;
v_isShared_2322_ = v_isSharedCheck_2371_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2318_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2371_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
if (lean_obj_tag(v_a_2319_) == 0)
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2333_; 
lean_dec_ref(v_decl_2309_);
lean_dec(v_declName_2308_);
v_a_2323_ = lean_ctor_get(v_a_2319_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v_a_2319_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2325_ = v_a_2319_;
v_isShared_2326_ = v_isSharedCheck_2333_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v_a_2319_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2333_;
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
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
lean_object* v___x_2330_; 
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 0, v___x_2328_);
v___x_2330_ = v___x_2321_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v___x_2328_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
else
{
lean_object* v_a_2334_; 
v_a_2334_ = lean_ctor_get(v_a_2319_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v_a_2319_, 1);
if (lean_obj_tag(v_a_2334_) == 1)
{
lean_object* v_val_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2366_; 
lean_del_object(v___x_2321_);
v_val_2335_ = lean_ctor_get(v_a_2334_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v_a_2334_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2337_ = v_a_2334_;
v_isShared_2338_ = v_isSharedCheck_2366_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_val_2335_);
lean_dec(v_a_2334_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2366_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v_kind_2339_; lean_object* v_tags_2340_; lean_object* v___x_2341_; 
v_kind_2339_ = lean_ctor_get(v_decl_2309_, 1);
lean_inc_ref(v_kind_2339_);
v_tags_2340_ = lean_ctor_get(v_decl_2309_, 2);
lean_inc_ref(v_tags_2340_);
lean_dec_ref(v_decl_2309_);
lean_inc(v___y_2316_);
lean_inc_ref(v___y_2315_);
lean_inc(v___y_2314_);
lean_inc_ref(v___y_2313_);
v___x_2341_ = lean_apply_5(v_kind_2339_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, lean_box(0));
if (lean_obj_tag(v___x_2341_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2343_; 
v_a_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc(v_a_2342_);
lean_dec_ref_known(v___x_2341_, 1);
lean_inc(v___y_2316_);
lean_inc_ref(v___y_2315_);
lean_inc(v___y_2314_);
lean_inc_ref(v___y_2313_);
v___x_2343_ = lean_apply_5(v_tags_2340_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, lean_box(0));
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v_a_2344_; lean_object* v___x_2346_; 
v_a_2344_ = lean_ctor_get(v___x_2343_, 0);
lean_inc(v_a_2344_);
lean_dec_ref_known(v___x_2343_, 1);
if (v_isShared_2338_ == 0)
{
lean_ctor_set_tag(v___x_2337_, 0);
lean_ctor_set(v___x_2337_, 0, v_declName_2308_);
v___x_2346_ = v___x_2337_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_declName_2308_);
v___x_2346_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
uint8_t v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_unbox(v_a_2342_);
lean_dec(v_a_2342_);
v___x_2348_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_val_2335_, v___x_2346_, v___x_2347_, v_a_2344_, v___y_2310_, v___y_2311_);
return v___x_2348_;
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec(v_a_2342_);
lean_del_object(v___x_2337_);
lean_dec(v_val_2335_);
lean_dec(v_declName_2308_);
v_a_2350_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2343_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2343_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
lean_dec_ref(v_tags_2340_);
lean_del_object(v___x_2337_);
lean_dec(v_val_2335_);
lean_dec(v_declName_2308_);
v_a_2358_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2341_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2341_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
}
else
{
lean_object* v___x_2367_; lean_object* v___x_2369_; 
lean_dec(v_a_2334_);
lean_dec_ref(v_decl_2309_);
lean_dec(v_declName_2308_);
v___x_2367_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 0, v___x_2367_);
v___x_2369_ = v___x_2321_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
}
else
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2379_; 
lean_dec_ref(v_decl_2309_);
lean_dec(v_declName_2308_);
v_a_2372_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2374_ = v___x_2318_;
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2318_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2372_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed(lean_object* v_ctx_2380_, lean_object* v_id_2381_, lean_object* v_danglingDot_2382_, lean_object* v_declName_2383_, lean_object* v_decl_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
uint8_t v_danglingDot_boxed_2393_; lean_object* v_res_2394_; 
v_danglingDot_boxed_2393_ = lean_unbox(v_danglingDot_2382_);
v_res_2394_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(v_ctx_2380_, v_id_2381_, v_danglingDot_boxed_2393_, v_declName_2383_, v_decl_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
return v_res_2394_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(lean_object* v_id_2395_, uint8_t v_danglingDot_2396_, lean_object* v_ns_2397_, lean_object* v_alias_2398_){
_start:
{
uint8_t v___x_2399_; 
v___x_2399_ = l_Lean_Name_isPrefixOf(v_ns_2397_, v_alias_2398_);
if (v___x_2399_ == 0)
{
lean_dec(v_alias_2398_);
return v___x_2399_;
}
else
{
lean_object* v___x_2400_; lean_object* v___x_2401_; uint8_t v___x_2402_; 
v___x_2400_ = lean_box(0);
v___x_2401_ = l_Lean_Name_replacePrefix(v_alias_2398_, v_ns_2397_, v___x_2400_);
v___x_2402_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_2395_, v___x_2401_, v_danglingDot_2396_);
lean_dec(v___x_2401_);
return v___x_2402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed(lean_object* v_id_2403_, lean_object* v_danglingDot_2404_, lean_object* v_ns_2405_, lean_object* v_alias_2406_){
_start:
{
uint8_t v_danglingDot_boxed_2407_; uint8_t v_res_2408_; lean_object* v_r_2409_; 
v_danglingDot_boxed_2407_ = lean_unbox(v_danglingDot_2404_);
v_res_2408_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(v_id_2403_, v_danglingDot_boxed_2407_, v_ns_2405_, v_alias_2406_);
lean_dec(v_ns_2405_);
lean_dec(v_id_2403_);
v_r_2409_ = lean_box(v_res_2408_);
return v_r_2409_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(lean_object* v_a_2410_, lean_object* v___x_2411_, lean_object* v_alias_2412_, lean_object* v_as_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
if (lean_obj_tag(v_as_2413_) == 0)
{
lean_object* v___x_2421_; lean_object* v___x_2422_; 
lean_dec_ref(v___x_2411_);
v___x_2421_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_2422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2421_);
return v___x_2422_;
}
else
{
lean_object* v_head_2423_; lean_object* v_tail_2424_; uint8_t v___x_2425_; 
v_head_2423_ = lean_ctor_get(v_as_2413_, 0);
lean_inc_n(v_head_2423_, 2);
v_tail_2424_ = lean_ctor_get(v_as_2413_, 1);
lean_inc(v_tail_2424_);
lean_dec_ref_known(v_as_2413_, 2);
lean_inc_ref(v___x_2411_);
v___x_2425_ = l_Lean_Server_Completion_allowCompletion(v_a_2410_, v___x_2411_, v_head_2423_);
if (v___x_2425_ == 0)
{
lean_dec(v_head_2423_);
v_as_2413_ = v_tail_2424_;
goto _start;
}
else
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2427_ = l_Lean_Name_getString_x21(v_alias_2412_);
v___x_2428_ = lean_box(0);
v___x_2429_ = l_Lean_Name_str___override(v___x_2428_, v___x_2427_);
v___x_2430_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_2429_, v_head_2423_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_dec_ref_known(v___x_2430_, 1);
v_as_2413_ = v_tail_2424_;
goto _start;
}
else
{
lean_dec(v_tail_2424_);
lean_dec_ref(v___x_2411_);
return v___x_2430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg___boxed(lean_object* v_a_2432_, lean_object* v___x_2433_, lean_object* v_alias_2434_, lean_object* v_as_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_2432_, v___x_2433_, v_alias_2434_, v_as_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v_alias_2434_);
lean_dec_ref(v_a_2432_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(lean_object* v_a_2444_, lean_object* v_env_2445_, lean_object* v_alias_2446_, lean_object* v_declNames_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v___x_2456_; 
v___x_2456_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_2444_, v_env_2445_, v_alias_2446_, v_declNames_2447_, v___y_2448_, v___y_2449_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed(lean_object* v_a_2457_, lean_object* v_env_2458_, lean_object* v_alias_2459_, lean_object* v_declNames_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(v_a_2457_, v_env_2458_, v_alias_2459_, v_declNames_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec(v___y_2465_);
lean_dec_ref(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec_ref(v___y_2461_);
lean_dec(v_alias_2459_);
lean_dec_ref(v_a_2457_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(lean_object* v___f_2470_, lean_object* v___f_2471_, lean_object* v_currNamespace_2472_, lean_object* v_alias_2473_, lean_object* v_declNames_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v___x_2483_; 
v___x_2483_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(v___f_2470_, v___f_2471_, v_alias_2473_, v_declNames_2474_, v_currNamespace_2472_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed(lean_object* v___f_2484_, lean_object* v___f_2485_, lean_object* v_currNamespace_2486_, lean_object* v_alias_2487_, lean_object* v_declNames_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(v___f_2484_, v___f_2485_, v_currNamespace_2486_, v_alias_2487_, v_declNames_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec_ref(v___y_2491_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(lean_object* v_f_2498_, lean_object* v_x_2499_, lean_object* v_x_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
if (lean_obj_tag(v_x_2500_) == 0)
{
lean_object* v___x_2509_; lean_object* v___x_2510_; 
lean_dec_ref(v_f_2498_);
v___x_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_x_2499_);
v___x_2510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2509_);
return v___x_2510_;
}
else
{
lean_object* v_key_2511_; lean_object* v_value_2512_; lean_object* v_tail_2513_; lean_object* v___x_2514_; 
v_key_2511_ = lean_ctor_get(v_x_2500_, 0);
lean_inc(v_key_2511_);
v_value_2512_ = lean_ctor_get(v_x_2500_, 1);
lean_inc(v_value_2512_);
v_tail_2513_ = lean_ctor_get(v_x_2500_, 2);
lean_inc(v_tail_2513_);
lean_dec_ref_known(v_x_2500_, 3);
lean_inc_ref(v_f_2498_);
lean_inc(v___y_2507_);
lean_inc_ref(v___y_2506_);
lean_inc(v___y_2505_);
lean_inc_ref(v___y_2504_);
lean_inc_ref(v___y_2503_);
lean_inc(v___y_2502_);
lean_inc_ref(v___y_2501_);
v___x_2514_ = lean_apply_10(v_f_2498_, v_key_2511_, v_value_2512_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, lean_box(0));
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
if (lean_obj_tag(v_a_2515_) == 0)
{
lean_dec_ref_known(v_a_2515_, 1);
lean_dec(v_tail_2513_);
lean_dec_ref(v_f_2498_);
return v___x_2514_;
}
else
{
lean_object* v_a_2516_; 
lean_dec_ref_known(v___x_2514_, 1);
v_a_2516_ = lean_ctor_get(v_a_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v_a_2515_, 1);
v_x_2499_ = v_a_2516_;
v_x_2500_ = v_tail_2513_;
goto _start;
}
}
else
{
lean_dec(v_tail_2513_);
lean_dec_ref(v_f_2498_);
return v___x_2514_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg___boxed(lean_object* v_f_2518_, lean_object* v_x_2519_, lean_object* v_x_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_2518_, v_x_2519_, v_x_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(lean_object* v_f_2530_, lean_object* v_as_2531_, size_t v_i_2532_, size_t v_stop_2533_, lean_object* v_b_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
uint8_t v___x_2543_; 
v___x_2543_ = lean_usize_dec_eq(v_i_2532_, v_stop_2533_);
if (v___x_2543_ == 0)
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2544_ = lean_array_uget_borrowed(v_as_2531_, v_i_2532_);
v___x_2545_ = lean_box(0);
lean_inc(v___x_2544_);
lean_inc_ref(v_f_2530_);
v___x_2546_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_2530_, v___x_2545_, v___x_2544_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v_a_2547_; 
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
if (lean_obj_tag(v_a_2547_) == 0)
{
lean_dec_ref(v_f_2530_);
return v___x_2546_;
}
else
{
lean_object* v_a_2548_; size_t v___x_2549_; size_t v___x_2550_; 
lean_inc_ref(v_a_2547_);
lean_dec_ref_known(v___x_2546_, 1);
v_a_2548_ = lean_ctor_get(v_a_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v_a_2547_, 1);
v___x_2549_ = ((size_t)1ULL);
v___x_2550_ = lean_usize_add(v_i_2532_, v___x_2549_);
v_i_2532_ = v___x_2550_;
v_b_2534_ = v_a_2548_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_2530_);
return v___x_2546_;
}
}
else
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
lean_dec_ref(v_f_2530_);
v___x_2552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2552_, 0, v_b_2534_);
v___x_2553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2552_);
return v___x_2553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg___boxed(lean_object* v_f_2554_, lean_object* v_as_2555_, lean_object* v_i_2556_, lean_object* v_stop_2557_, lean_object* v_b_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
size_t v_i_boxed_2567_; size_t v_stop_boxed_2568_; lean_object* v_res_2569_; 
v_i_boxed_2567_ = lean_unbox_usize(v_i_2556_);
lean_dec(v_i_2556_);
v_stop_boxed_2568_ = lean_unbox_usize(v_stop_2557_);
lean_dec(v_stop_2557_);
v_res_2569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_2554_, v_as_2555_, v_i_boxed_2567_, v_stop_boxed_2568_, v_b_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec_ref(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec_ref(v___y_2559_);
lean_dec_ref(v_as_2555_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(lean_object* v_f_2570_, lean_object* v_x_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v___x_2582_; 
lean_inc(v___y_2580_);
lean_inc_ref(v___y_2579_);
lean_inc(v___y_2578_);
lean_inc_ref(v___y_2577_);
lean_inc_ref(v___y_2576_);
lean_inc(v___y_2575_);
lean_inc_ref(v___y_2574_);
v___x_2582_ = lean_apply_10(v_f_2570_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, lean_box(0));
return v___x_2582_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v_f_2583_, lean_object* v_x_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(v_f_2583_, v_x_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec_ref(v___y_2589_);
lean_dec(v___y_2588_);
lean_dec_ref(v___y_2587_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(lean_object* v_f_2596_, lean_object* v_keys_2597_, lean_object* v_vals_2598_, lean_object* v_i_2599_, lean_object* v_acc_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v___x_2609_; uint8_t v___x_2610_; 
v___x_2609_ = lean_array_get_size(v_keys_2597_);
v___x_2610_ = lean_nat_dec_lt(v_i_2599_, v___x_2609_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_dec(v_i_2599_);
lean_dec_ref(v_f_2596_);
v___x_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_acc_2600_);
v___x_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
return v___x_2612_;
}
else
{
lean_object* v_k_2613_; lean_object* v_v_2614_; lean_object* v___x_2615_; 
v_k_2613_ = lean_array_fget_borrowed(v_keys_2597_, v_i_2599_);
v_v_2614_ = lean_array_fget_borrowed(v_vals_2598_, v_i_2599_);
lean_inc_ref(v_f_2596_);
lean_inc(v___y_2607_);
lean_inc_ref(v___y_2606_);
lean_inc(v___y_2605_);
lean_inc_ref(v___y_2604_);
lean_inc_ref(v___y_2603_);
lean_inc(v___y_2602_);
lean_inc_ref(v___y_2601_);
lean_inc(v_v_2614_);
lean_inc(v_k_2613_);
v___x_2615_ = lean_apply_11(v_f_2596_, v_acc_2600_, v_k_2613_, v_v_2614_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, lean_box(0));
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
if (lean_obj_tag(v_a_2616_) == 0)
{
lean_dec_ref_known(v_a_2616_, 1);
lean_dec(v_i_2599_);
lean_dec_ref(v_f_2596_);
return v___x_2615_;
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
lean_dec_ref_known(v___x_2615_, 1);
v_a_2617_ = lean_ctor_get(v_a_2616_, 0);
lean_inc(v_a_2617_);
lean_dec_ref_known(v_a_2616_, 1);
v___x_2618_ = lean_unsigned_to_nat(1u);
v___x_2619_ = lean_nat_add(v_i_2599_, v___x_2618_);
lean_dec(v_i_2599_);
v_i_2599_ = v___x_2619_;
v_acc_2600_ = v_a_2617_;
goto _start;
}
}
else
{
lean_dec(v_i_2599_);
lean_dec_ref(v_f_2596_);
return v___x_2615_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg___boxed(lean_object* v_f_2621_, lean_object* v_keys_2622_, lean_object* v_vals_2623_, lean_object* v_i_2624_, lean_object* v_acc_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v_res_2634_; 
v_res_2634_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_2621_, v_keys_2622_, v_vals_2623_, v_i_2624_, v_acc_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v_vals_2623_);
lean_dec_ref(v_keys_2622_);
return v_res_2634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(lean_object* v_f_2635_, lean_object* v_as_2636_, size_t v_i_2637_, size_t v_stop_2638_, lean_object* v_b_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_a_2649_; lean_object* v___y_2654_; uint8_t v___x_2657_; 
v___x_2657_ = lean_usize_dec_eq(v_i_2637_, v_stop_2638_);
if (v___x_2657_ == 0)
{
lean_object* v___x_2658_; 
v___x_2658_ = lean_array_uget_borrowed(v_as_2636_, v_i_2637_);
switch(lean_obj_tag(v___x_2658_))
{
case 0:
{
lean_object* v_key_2659_; lean_object* v_val_2660_; lean_object* v___x_2661_; 
v_key_2659_ = lean_ctor_get(v___x_2658_, 0);
v_val_2660_ = lean_ctor_get(v___x_2658_, 1);
lean_inc_ref(v_f_2635_);
lean_inc(v___y_2646_);
lean_inc_ref(v___y_2645_);
lean_inc(v___y_2644_);
lean_inc_ref(v___y_2643_);
lean_inc_ref(v___y_2642_);
lean_inc(v___y_2641_);
lean_inc_ref(v___y_2640_);
lean_inc(v_val_2660_);
lean_inc(v_key_2659_);
v___x_2661_ = lean_apply_11(v_f_2635_, v_b_2639_, v_key_2659_, v_val_2660_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, lean_box(0));
v___y_2654_ = v___x_2661_;
goto v___jp_2653_;
}
case 1:
{
lean_object* v_node_2662_; lean_object* v___x_2663_; 
v_node_2662_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_node_2662_);
lean_inc_ref(v_f_2635_);
v___x_2663_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_2635_, v_node_2662_, v_b_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
v___y_2654_ = v___x_2663_;
goto v___jp_2653_;
}
default: 
{
v_a_2649_ = v_b_2639_;
goto v___jp_2648_;
}
}
}
else
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
lean_dec_ref(v_f_2635_);
v___x_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2664_, 0, v_b_2639_);
v___x_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2664_);
return v___x_2665_;
}
v___jp_2648_:
{
size_t v___x_2650_; size_t v___x_2651_; 
v___x_2650_ = ((size_t)1ULL);
v___x_2651_ = lean_usize_add(v_i_2637_, v___x_2650_);
v_i_2637_ = v___x_2651_;
v_b_2639_ = v_a_2649_;
goto _start;
}
v___jp_2653_:
{
if (lean_obj_tag(v___y_2654_) == 0)
{
lean_object* v_a_2655_; 
v_a_2655_ = lean_ctor_get(v___y_2654_, 0);
if (lean_obj_tag(v_a_2655_) == 0)
{
lean_dec_ref(v_f_2635_);
return v___y_2654_;
}
else
{
lean_object* v_a_2656_; 
lean_inc_ref(v_a_2655_);
lean_dec_ref_known(v___y_2654_, 1);
v_a_2656_ = lean_ctor_get(v_a_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v_a_2655_, 1);
v_a_2649_ = v_a_2656_;
goto v___jp_2648_;
}
}
else
{
lean_dec_ref(v_f_2635_);
return v___y_2654_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(lean_object* v_f_2666_, lean_object* v_x_2667_, lean_object* v_x_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
if (lean_obj_tag(v_x_2667_) == 0)
{
lean_object* v_es_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2691_; 
v_es_2677_ = lean_ctor_get(v_x_2667_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v_x_2667_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2679_ = v_x_2667_;
v_isShared_2680_ = v_isSharedCheck_2691_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_es_2677_);
lean_dec(v_x_2667_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2691_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; uint8_t v___x_2683_; 
v___x_2681_ = lean_unsigned_to_nat(0u);
v___x_2682_ = lean_array_get_size(v_es_2677_);
v___x_2683_ = lean_nat_dec_lt(v___x_2681_, v___x_2682_);
if (v___x_2683_ == 0)
{
lean_object* v___x_2685_; 
lean_dec_ref(v_es_2677_);
lean_dec_ref(v_f_2666_);
if (v_isShared_2680_ == 0)
{
lean_ctor_set_tag(v___x_2679_, 1);
lean_ctor_set(v___x_2679_, 0, v_x_2668_);
v___x_2685_ = v___x_2679_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_x_2668_);
v___x_2685_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2686_; 
v___x_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2685_);
return v___x_2686_;
}
}
else
{
size_t v___x_2688_; size_t v___x_2689_; lean_object* v___x_2690_; 
lean_del_object(v___x_2679_);
v___x_2688_ = ((size_t)0ULL);
v___x_2689_ = lean_usize_of_nat(v___x_2682_);
v___x_2690_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_2666_, v_es_2677_, v___x_2688_, v___x_2689_, v_x_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
lean_dec_ref(v_es_2677_);
return v___x_2690_;
}
}
}
else
{
lean_object* v_ks_2692_; lean_object* v_vs_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
v_ks_2692_ = lean_ctor_get(v_x_2667_, 0);
lean_inc_ref(v_ks_2692_);
v_vs_2693_ = lean_ctor_get(v_x_2667_, 1);
lean_inc_ref(v_vs_2693_);
lean_dec_ref_known(v_x_2667_, 2);
v___x_2694_ = lean_unsigned_to_nat(0u);
v___x_2695_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_2666_, v_ks_2692_, v_vs_2693_, v___x_2694_, v_x_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
lean_dec_ref(v_vs_2693_);
lean_dec_ref(v_ks_2692_);
return v___x_2695_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg___boxed(lean_object* v_f_2696_, lean_object* v_x_2697_, lean_object* v_x_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_2696_, v_x_2697_, v_x_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg___boxed(lean_object* v_f_2708_, lean_object* v_as_2709_, lean_object* v_i_2710_, lean_object* v_stop_2711_, lean_object* v_b_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
size_t v_i_boxed_2721_; size_t v_stop_boxed_2722_; lean_object* v_res_2723_; 
v_i_boxed_2721_ = lean_unbox_usize(v_i_2710_);
lean_dec(v_i_2710_);
v_stop_boxed_2722_ = lean_unbox_usize(v_stop_2711_);
lean_dec(v_stop_2711_);
v_res_2723_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_2708_, v_as_2709_, v_i_boxed_2721_, v_stop_boxed_2722_, v_b_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec_ref(v___y_2716_);
lean_dec_ref(v___y_2715_);
lean_dec(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec_ref(v_as_2709_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(lean_object* v_map_2724_, lean_object* v_f_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v___f_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___f_2734_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___f_2734_, 0, v_f_2725_);
v___x_2735_ = lean_box(0);
v___x_2736_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v___f_2734_, v_map_2724_, v___x_2735_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
return v___x_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___boxed(lean_object* v_map_2737_, lean_object* v_f_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_2737_, v_f_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(lean_object* v_s_2748_, lean_object* v_f_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
lean_object* v_map_u2081_2758_; lean_object* v_map_u2082_2759_; lean_object* v_buckets_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; uint8_t v___x_2763_; 
v_map_u2081_2758_ = lean_ctor_get(v_s_2748_, 0);
lean_inc_ref(v_map_u2081_2758_);
v_map_u2082_2759_ = lean_ctor_get(v_s_2748_, 1);
lean_inc_ref(v_map_u2082_2759_);
lean_dec_ref(v_s_2748_);
v_buckets_2760_ = lean_ctor_get(v_map_u2081_2758_, 1);
lean_inc_ref(v_buckets_2760_);
lean_dec_ref(v_map_u2081_2758_);
v___x_2761_ = lean_unsigned_to_nat(0u);
v___x_2762_ = lean_array_get_size(v_buckets_2760_);
v___x_2763_ = lean_nat_dec_lt(v___x_2761_, v___x_2762_);
if (v___x_2763_ == 0)
{
lean_object* v___x_2764_; 
lean_dec_ref(v_buckets_2760_);
v___x_2764_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_2759_, v_f_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
return v___x_2764_;
}
else
{
lean_object* v___x_2765_; size_t v___x_2766_; size_t v___x_2767_; lean_object* v___x_2768_; 
v___x_2765_ = lean_box(0);
v___x_2766_ = ((size_t)0ULL);
v___x_2767_ = lean_usize_of_nat(v___x_2762_);
lean_inc_ref(v_f_2749_);
v___x_2768_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_2749_, v_buckets_2760_, v___x_2766_, v___x_2767_, v___x_2765_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec_ref(v_buckets_2760_);
if (lean_obj_tag(v___x_2768_) == 0)
{
lean_object* v_a_2769_; 
v_a_2769_ = lean_ctor_get(v___x_2768_, 0);
if (lean_obj_tag(v_a_2769_) == 0)
{
lean_dec_ref(v_map_u2082_2759_);
lean_dec_ref(v_f_2749_);
return v___x_2768_;
}
else
{
lean_object* v___x_2770_; 
lean_dec_ref_known(v___x_2768_, 1);
v___x_2770_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_2759_, v_f_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
return v___x_2770_;
}
}
else
{
lean_dec_ref(v_map_u2082_2759_);
lean_dec_ref(v_f_2749_);
return v___x_2768_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg___boxed(lean_object* v_s_2771_, lean_object* v_f_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v_res_2781_; 
v_res_2781_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v_s_2771_, v_f_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec_ref(v___y_2775_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
return v_res_2781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(lean_object* v_f_2782_, lean_object* v_decl_2783_, lean_object* v_ci_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v___y_2795_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; uint8_t v___x_2836_; 
v___x_2833_ = lean_unsigned_to_nat(1u);
v___x_2834_ = lean_nat_add(v___y_2785_, v___x_2833_);
v___x_2835_ = lean_unsigned_to_nat(10000u);
v___x_2836_ = lean_nat_dec_le(v___x_2835_, v___x_2834_);
if (v___x_2836_ == 0)
{
v___y_2795_ = v___x_2834_;
goto v___jp_2794_;
}
else
{
lean_object* v___x_2837_; lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2854_; 
lean_dec(v___x_2834_);
v___x_2837_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v___y_2788_);
v_a_2838_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2840_ = v___x_2837_;
v_isShared_2841_ = v_isSharedCheck_2854_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2837_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2854_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
if (lean_obj_tag(v_a_2838_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2852_; 
lean_dec_ref(v_ci_2784_);
lean_dec(v_decl_2783_);
lean_dec_ref(v_f_2782_);
v_a_2842_ = lean_ctor_get(v_a_2838_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v_a_2838_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2844_ = v_a_2838_;
v_isShared_2845_ = v_isSharedCheck_2852_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v_a_2838_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2852_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2847_; 
if (v_isShared_2845_ == 0)
{
v___x_2847_ = v___x_2844_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2842_);
v___x_2847_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
lean_object* v___x_2849_; 
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 0, v___x_2847_);
v___x_2849_ = v___x_2840_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v___x_2847_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
else
{
lean_object* v___x_2853_; 
lean_dec_ref_known(v_a_2838_, 1);
lean_del_object(v___x_2840_);
v___x_2853_ = lean_unsigned_to_nat(0u);
v___y_2795_ = v___x_2853_;
goto v___jp_2794_;
}
}
}
v___jp_2794_:
{
lean_object* v___x_2796_; 
lean_inc(v___y_2792_);
lean_inc_ref(v___y_2791_);
lean_inc(v___y_2790_);
lean_inc_ref(v___y_2789_);
lean_inc_ref(v___y_2788_);
lean_inc(v___y_2787_);
lean_inc_ref(v___y_2786_);
v___x_2796_ = lean_apply_10(v_f_2782_, v_decl_2783_, v_ci_2784_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, lean_box(0));
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2824_; 
v_a_2797_ = lean_ctor_get(v___x_2796_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2796_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2799_ = v___x_2796_;
v_isShared_2800_ = v_isSharedCheck_2824_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v___x_2796_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2824_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
if (lean_obj_tag(v_a_2797_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2811_; 
lean_dec(v___y_2795_);
v_a_2801_ = lean_ctor_get(v_a_2797_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v_a_2797_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2803_ = v_a_2797_;
v_isShared_2804_ = v_isSharedCheck_2811_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v_a_2797_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2811_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2801_);
v___x_2806_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
lean_object* v___x_2808_; 
if (v_isShared_2800_ == 0)
{
lean_ctor_set(v___x_2799_, 0, v___x_2806_);
v___x_2808_ = v___x_2799_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2806_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2823_; 
v_a_2812_ = lean_ctor_get(v_a_2797_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v_a_2797_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2814_ = v_a_2797_;
v_isShared_2815_ = v_isSharedCheck_2823_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v_a_2797_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2823_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2816_; lean_object* v___x_2818_; 
v___x_2816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2816_, 0, v_a_2812_);
lean_ctor_set(v___x_2816_, 1, v___y_2795_);
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 0, v___x_2816_);
v___x_2818_ = v___x_2814_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v___x_2816_);
v___x_2818_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2820_; 
if (v_isShared_2800_ == 0)
{
lean_ctor_set(v___x_2799_, 0, v___x_2818_);
v___x_2820_ = v___x_2799_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v___x_2818_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
}
}
else
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec(v___y_2795_);
v_a_2825_ = lean_ctor_get(v___x_2796_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2796_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2796_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2796_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed(lean_object* v_f_2855_, lean_object* v_decl_2856_, lean_object* v_ci_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(v_f_2855_, v_decl_2856_, v_ci_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec_ref(v___y_2861_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(lean_object* v_f_2868_, lean_object* v_keys_2869_, lean_object* v_vals_2870_, lean_object* v_i_2871_, lean_object* v_acc_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_){
_start:
{
lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2882_ = lean_array_get_size(v_keys_2869_);
v___x_2883_ = lean_nat_dec_lt(v_i_2871_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; 
lean_dec(v_i_2871_);
lean_dec_ref(v_f_2868_);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v_acc_2872_);
lean_ctor_set(v___x_2884_, 1, v___y_2873_);
v___x_2885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2884_);
v___x_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2885_);
return v___x_2886_;
}
else
{
lean_object* v_k_2887_; lean_object* v_v_2888_; lean_object* v___x_2889_; 
v_k_2887_ = lean_array_fget_borrowed(v_keys_2869_, v_i_2871_);
v_v_2888_ = lean_array_fget_borrowed(v_vals_2870_, v_i_2871_);
lean_inc_ref(v_f_2868_);
lean_inc(v___y_2880_);
lean_inc_ref(v___y_2879_);
lean_inc(v___y_2878_);
lean_inc_ref(v___y_2877_);
lean_inc_ref(v___y_2876_);
lean_inc(v___y_2875_);
lean_inc_ref(v___y_2874_);
lean_inc(v_v_2888_);
lean_inc(v_k_2887_);
v___x_2889_ = lean_apply_12(v_f_2868_, v_acc_2872_, v_k_2887_, v_v_2888_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, lean_box(0));
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v_a_2890_; 
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_a_2890_);
if (lean_obj_tag(v_a_2890_) == 0)
{
lean_dec_ref_known(v_a_2890_, 1);
lean_dec(v_i_2871_);
lean_dec_ref(v_f_2868_);
return v___x_2889_;
}
else
{
lean_object* v_a_2891_; lean_object* v_fst_2892_; lean_object* v_snd_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
lean_dec_ref_known(v___x_2889_, 1);
v_a_2891_ = lean_ctor_get(v_a_2890_, 0);
lean_inc(v_a_2891_);
lean_dec_ref_known(v_a_2890_, 1);
v_fst_2892_ = lean_ctor_get(v_a_2891_, 0);
lean_inc(v_fst_2892_);
v_snd_2893_ = lean_ctor_get(v_a_2891_, 1);
lean_inc(v_snd_2893_);
lean_dec(v_a_2891_);
v___x_2894_ = lean_unsigned_to_nat(1u);
v___x_2895_ = lean_nat_add(v_i_2871_, v___x_2894_);
lean_dec(v_i_2871_);
v_i_2871_ = v___x_2895_;
v_acc_2872_ = v_fst_2892_;
v___y_2873_ = v_snd_2893_;
goto _start;
}
}
else
{
lean_dec(v_i_2871_);
lean_dec_ref(v_f_2868_);
return v___x_2889_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg___boxed(lean_object* v_f_2897_, lean_object* v_keys_2898_, lean_object* v_vals_2899_, lean_object* v_i_2900_, lean_object* v_acc_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_2897_, v_keys_2898_, v_vals_2899_, v_i_2900_, v_acc_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec_ref(v___y_2905_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec_ref(v_vals_2899_);
lean_dec_ref(v_keys_2898_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(lean_object* v_f_2912_, lean_object* v_as_2913_, size_t v_i_2914_, size_t v_stop_2915_, lean_object* v_b_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v_fst_2927_; lean_object* v_snd_2928_; lean_object* v___y_2933_; uint8_t v___x_2938_; 
v___x_2938_ = lean_usize_dec_eq(v_i_2914_, v_stop_2915_);
if (v___x_2938_ == 0)
{
lean_object* v___x_2939_; 
v___x_2939_ = lean_array_uget_borrowed(v_as_2913_, v_i_2914_);
switch(lean_obj_tag(v___x_2939_))
{
case 0:
{
lean_object* v_key_2940_; lean_object* v_val_2941_; lean_object* v___x_2942_; 
v_key_2940_ = lean_ctor_get(v___x_2939_, 0);
v_val_2941_ = lean_ctor_get(v___x_2939_, 1);
lean_inc_ref(v_f_2912_);
lean_inc(v___y_2924_);
lean_inc_ref(v___y_2923_);
lean_inc(v___y_2922_);
lean_inc_ref(v___y_2921_);
lean_inc_ref(v___y_2920_);
lean_inc(v___y_2919_);
lean_inc_ref(v___y_2918_);
lean_inc(v_val_2941_);
lean_inc(v_key_2940_);
v___x_2942_ = lean_apply_12(v_f_2912_, v_b_2916_, v_key_2940_, v_val_2941_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, lean_box(0));
v___y_2933_ = v___x_2942_;
goto v___jp_2932_;
}
case 1:
{
lean_object* v_node_2943_; lean_object* v___x_2944_; 
v_node_2943_ = lean_ctor_get(v___x_2939_, 0);
lean_inc(v_node_2943_);
lean_inc_ref(v_f_2912_);
v___x_2944_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_2912_, v_node_2943_, v_b_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
v___y_2933_ = v___x_2944_;
goto v___jp_2932_;
}
default: 
{
v_fst_2927_ = v_b_2916_;
v_snd_2928_ = v___y_2917_;
goto v___jp_2926_;
}
}
}
else
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
lean_dec_ref(v_f_2912_);
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v_b_2916_);
lean_ctor_set(v___x_2945_, 1, v___y_2917_);
v___x_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
v___x_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
return v___x_2947_;
}
v___jp_2926_:
{
size_t v___x_2929_; size_t v___x_2930_; 
v___x_2929_ = ((size_t)1ULL);
v___x_2930_ = lean_usize_add(v_i_2914_, v___x_2929_);
v_i_2914_ = v___x_2930_;
v_b_2916_ = v_fst_2927_;
v___y_2917_ = v_snd_2928_;
goto _start;
}
v___jp_2932_:
{
if (lean_obj_tag(v___y_2933_) == 0)
{
lean_object* v_a_2934_; 
v_a_2934_ = lean_ctor_get(v___y_2933_, 0);
if (lean_obj_tag(v_a_2934_) == 0)
{
lean_dec_ref(v_f_2912_);
return v___y_2933_;
}
else
{
lean_object* v_a_2935_; lean_object* v_fst_2936_; lean_object* v_snd_2937_; 
lean_inc_ref(v_a_2934_);
lean_dec_ref_known(v___y_2933_, 1);
v_a_2935_ = lean_ctor_get(v_a_2934_, 0);
lean_inc(v_a_2935_);
lean_dec_ref_known(v_a_2934_, 1);
v_fst_2936_ = lean_ctor_get(v_a_2935_, 0);
lean_inc(v_fst_2936_);
v_snd_2937_ = lean_ctor_get(v_a_2935_, 1);
lean_inc(v_snd_2937_);
lean_dec(v_a_2935_);
v_fst_2927_ = v_fst_2936_;
v_snd_2928_ = v_snd_2937_;
goto v___jp_2926_;
}
}
else
{
lean_dec_ref(v_f_2912_);
return v___y_2933_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(lean_object* v_f_2948_, lean_object* v_x_2949_, lean_object* v_x_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
if (lean_obj_tag(v_x_2949_) == 0)
{
lean_object* v_es_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2975_; 
v_es_2960_ = lean_ctor_get(v_x_2949_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_x_2949_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2962_ = v_x_2949_;
v_isShared_2963_ = v_isSharedCheck_2975_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_es_2960_);
lean_dec(v_x_2949_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2975_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; uint8_t v___x_2966_; 
v___x_2964_ = lean_unsigned_to_nat(0u);
v___x_2965_ = lean_array_get_size(v_es_2960_);
v___x_2966_ = lean_nat_dec_lt(v___x_2964_, v___x_2965_);
if (v___x_2966_ == 0)
{
lean_object* v___x_2967_; lean_object* v___x_2969_; 
lean_dec_ref(v_es_2960_);
lean_dec_ref(v_f_2948_);
v___x_2967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2967_, 0, v_x_2950_);
lean_ctor_set(v___x_2967_, 1, v___y_2951_);
if (v_isShared_2963_ == 0)
{
lean_ctor_set_tag(v___x_2962_, 1);
lean_ctor_set(v___x_2962_, 0, v___x_2967_);
v___x_2969_ = v___x_2962_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2967_);
v___x_2969_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2970_; 
v___x_2970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
return v___x_2970_;
}
}
else
{
size_t v___x_2972_; size_t v___x_2973_; lean_object* v___x_2974_; 
lean_del_object(v___x_2962_);
v___x_2972_ = ((size_t)0ULL);
v___x_2973_ = lean_usize_of_nat(v___x_2965_);
v___x_2974_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_2948_, v_es_2960_, v___x_2972_, v___x_2973_, v_x_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_);
lean_dec_ref(v_es_2960_);
return v___x_2974_;
}
}
}
else
{
lean_object* v_ks_2976_; lean_object* v_vs_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v_ks_2976_ = lean_ctor_get(v_x_2949_, 0);
lean_inc_ref(v_ks_2976_);
v_vs_2977_ = lean_ctor_get(v_x_2949_, 1);
lean_inc_ref(v_vs_2977_);
lean_dec_ref_known(v_x_2949_, 2);
v___x_2978_ = lean_unsigned_to_nat(0u);
v___x_2979_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_2948_, v_ks_2976_, v_vs_2977_, v___x_2978_, v_x_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_);
lean_dec_ref(v_vs_2977_);
lean_dec_ref(v_ks_2976_);
return v___x_2979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg___boxed(lean_object* v_f_2980_, lean_object* v_x_2981_, lean_object* v_x_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_){
_start:
{
lean_object* v_res_2992_; 
v_res_2992_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_2980_, v_x_2981_, v_x_2982_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_);
lean_dec(v___y_2990_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec_ref(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
return v_res_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg___boxed(lean_object* v_f_2993_, lean_object* v_as_2994_, lean_object* v_i_2995_, lean_object* v_stop_2996_, lean_object* v_b_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_){
_start:
{
size_t v_i_boxed_3007_; size_t v_stop_boxed_3008_; lean_object* v_res_3009_; 
v_i_boxed_3007_ = lean_unbox_usize(v_i_2995_);
lean_dec(v_i_2995_);
v_stop_boxed_3008_ = lean_unbox_usize(v_stop_2996_);
lean_dec(v_stop_2996_);
v_res_3009_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_2993_, v_as_2994_, v_i_boxed_3007_, v_stop_boxed_3008_, v_b_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_);
lean_dec(v___y_3005_);
lean_dec_ref(v___y_3004_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec_ref(v_as_2994_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object* v_f_3010_, lean_object* v_x_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_){
_start:
{
lean_object* v___x_3023_; 
lean_inc(v___y_3021_);
lean_inc_ref(v___y_3020_);
lean_inc(v___y_3019_);
lean_inc_ref(v___y_3018_);
lean_inc_ref(v___y_3017_);
lean_inc(v___y_3016_);
lean_inc_ref(v___y_3015_);
v___x_3023_ = lean_apply_11(v_f_3010_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_, lean_box(0));
return v___x_3023_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object* v_f_3024_, lean_object* v_x_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(v_f_3024_, v_x_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_, v___y_3034_, v___y_3035_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec_ref(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(lean_object* v_map_3038_, lean_object* v_f_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_){
_start:
{
lean_object* v___f_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___f_3049_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 13, 1);
lean_closure_set(v___f_3049_, 0, v_f_3039_);
v___x_3050_ = lean_box(0);
v___x_3051_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v___f_3049_, v_map_3038_, v___x_3050_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_map_3052_, lean_object* v_f_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_3052_, v_f_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec_ref(v___y_3057_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(lean_object* v_f_3064_, lean_object* v_x_3065_, lean_object* v_x_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
if (lean_obj_tag(v_x_3066_) == 0)
{
lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
lean_dec_ref(v_f_3064_);
v___x_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3076_, 0, v_x_3065_);
lean_ctor_set(v___x_3076_, 1, v___y_3067_);
v___x_3077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
v___x_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3077_);
return v___x_3078_;
}
else
{
lean_object* v_key_3079_; lean_object* v_value_3080_; lean_object* v_tail_3081_; lean_object* v___x_3082_; 
v_key_3079_ = lean_ctor_get(v_x_3066_, 0);
lean_inc(v_key_3079_);
v_value_3080_ = lean_ctor_get(v_x_3066_, 1);
lean_inc(v_value_3080_);
v_tail_3081_ = lean_ctor_get(v_x_3066_, 2);
lean_inc(v_tail_3081_);
lean_dec_ref_known(v_x_3066_, 3);
lean_inc_ref(v_f_3064_);
lean_inc(v___y_3074_);
lean_inc_ref(v___y_3073_);
lean_inc(v___y_3072_);
lean_inc_ref(v___y_3071_);
lean_inc_ref(v___y_3070_);
lean_inc(v___y_3069_);
lean_inc_ref(v___y_3068_);
v___x_3082_ = lean_apply_11(v_f_3064_, v_key_3079_, v_value_3080_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_, lean_box(0));
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
if (lean_obj_tag(v_a_3083_) == 0)
{
lean_dec_ref_known(v_a_3083_, 1);
lean_dec(v_tail_3081_);
lean_dec_ref(v_f_3064_);
return v___x_3082_;
}
else
{
lean_object* v_a_3084_; lean_object* v_fst_3085_; lean_object* v_snd_3086_; 
lean_dec_ref_known(v___x_3082_, 1);
v_a_3084_ = lean_ctor_get(v_a_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v_a_3083_, 1);
v_fst_3085_ = lean_ctor_get(v_a_3084_, 0);
lean_inc(v_fst_3085_);
v_snd_3086_ = lean_ctor_get(v_a_3084_, 1);
lean_inc(v_snd_3086_);
lean_dec(v_a_3084_);
v_x_3065_ = v_fst_3085_;
v_x_3066_ = v_tail_3081_;
v___y_3067_ = v_snd_3086_;
goto _start;
}
}
else
{
lean_dec(v_tail_3081_);
lean_dec_ref(v_f_3064_);
return v___x_3082_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_f_3088_, lean_object* v_x_3089_, lean_object* v_x_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_){
_start:
{
lean_object* v_res_3100_; 
v_res_3100_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(v_f_3088_, v_x_3089_, v_x_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec_ref(v___y_3094_);
lean_dec(v___y_3093_);
lean_dec_ref(v___y_3092_);
return v_res_3100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(lean_object* v_f_3101_, lean_object* v_as_3102_, size_t v_i_3103_, size_t v_stop_3104_, lean_object* v_b_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_){
_start:
{
uint8_t v___x_3115_; 
v___x_3115_ = lean_usize_dec_eq(v_i_3103_, v_stop_3104_);
if (v___x_3115_ == 0)
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3116_ = lean_array_uget_borrowed(v_as_3102_, v_i_3103_);
v___x_3117_ = lean_box(0);
lean_inc(v___x_3116_);
lean_inc_ref(v_f_3101_);
v___x_3118_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(v_f_3101_, v___x_3117_, v___x_3116_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
if (lean_obj_tag(v_a_3119_) == 0)
{
lean_dec_ref(v_f_3101_);
return v___x_3118_;
}
else
{
lean_object* v_a_3120_; lean_object* v_fst_3121_; lean_object* v_snd_3122_; size_t v___x_3123_; size_t v___x_3124_; 
lean_inc_ref(v_a_3119_);
lean_dec_ref_known(v___x_3118_, 1);
v_a_3120_ = lean_ctor_get(v_a_3119_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v_a_3119_, 1);
v_fst_3121_ = lean_ctor_get(v_a_3120_, 0);
lean_inc(v_fst_3121_);
v_snd_3122_ = lean_ctor_get(v_a_3120_, 1);
lean_inc(v_snd_3122_);
lean_dec(v_a_3120_);
v___x_3123_ = ((size_t)1ULL);
v___x_3124_ = lean_usize_add(v_i_3103_, v___x_3123_);
v_i_3103_ = v___x_3124_;
v_b_3105_ = v_fst_3121_;
v___y_3106_ = v_snd_3122_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_3101_);
return v___x_3118_;
}
}
else
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
lean_dec_ref(v_f_3101_);
v___x_3126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3126_, 0, v_b_3105_);
lean_ctor_set(v___x_3126_, 1, v___y_3106_);
v___x_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
v___x_3128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
return v___x_3128_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4___boxed(lean_object* v_f_3129_, lean_object* v_as_3130_, lean_object* v_i_3131_, lean_object* v_stop_3132_, lean_object* v_b_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_){
_start:
{
size_t v_i_boxed_3143_; size_t v_stop_boxed_3144_; lean_object* v_res_3145_; 
v_i_boxed_3143_ = lean_unbox_usize(v_i_3131_);
lean_dec(v_i_3131_);
v_stop_boxed_3144_ = lean_unbox_usize(v_stop_3132_);
lean_dec(v_stop_3132_);
v_res_3145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_3129_, v_as_3130_, v_i_boxed_3143_, v_stop_boxed_3144_, v_b_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec_ref(v___y_3137_);
lean_dec(v___y_3136_);
lean_dec_ref(v___y_3135_);
lean_dec_ref(v_as_3130_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(lean_object* v_env_3146_, lean_object* v_f_3147_, lean_object* v_name_3148_, lean_object* v_c_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_){
_start:
{
uint8_t v___x_3159_; 
lean_inc(v_name_3148_);
v___x_3159_ = l_Lean_Meta_allowCompletion(v_env_3146_, v_name_3148_);
if (v___x_3159_ == 0)
{
lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
lean_dec_ref(v_c_3149_);
lean_dec(v_name_3148_);
lean_dec_ref(v_f_3147_);
v___x_3160_ = lean_box(0);
v___x_3161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3160_);
lean_ctor_set(v___x_3161_, 1, v___y_3150_);
v___x_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
v___x_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3162_);
return v___x_3163_;
}
else
{
lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
lean_inc_ref(v_c_3149_);
v___x_3164_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_getCompletionKindForDecl___boxed), 6, 1);
lean_closure_set(v___x_3164_, 0, v_c_3149_);
lean_inc(v_name_3148_);
v___x_3165_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_getCompletionTagsForDecl___boxed), 6, 1);
lean_closure_set(v___x_3165_, 0, v_name_3148_);
v___x_3166_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3166_, 0, v_c_3149_);
lean_ctor_set(v___x_3166_, 1, v___x_3164_);
lean_ctor_set(v___x_3166_, 2, v___x_3165_);
lean_inc(v___y_3157_);
lean_inc_ref(v___y_3156_);
lean_inc(v___y_3155_);
lean_inc_ref(v___y_3154_);
lean_inc_ref(v___y_3153_);
lean_inc(v___y_3152_);
lean_inc_ref(v___y_3151_);
v___x_3167_ = lean_apply_11(v_f_3147_, v_name_3148_, v___x_3166_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, lean_box(0));
return v___x_3167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed(lean_object* v_env_3168_, lean_object* v_f_3169_, lean_object* v_name_3170_, lean_object* v_c_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(v_env_3168_, v_f_3169_, v_name_3170_, v_c_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_);
lean_dec(v___y_3179_);
lean_dec_ref(v___y_3178_);
lean_dec(v___y_3177_);
lean_dec_ref(v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3174_);
lean_dec_ref(v___y_3173_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(lean_object* v_f_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_){
_start:
{
lean_object* v___x_3192_; lean_object* v_env_3193_; lean_object* v___f_3194_; lean_object* v___x_3195_; 
v___x_3192_ = lean_st_ref_get(v___y_3190_);
v_env_3193_ = lean_ctor_get(v___x_3192_, 0);
lean_inc_ref_n(v_env_3193_, 3);
lean_dec(v___x_3192_);
lean_inc_ref(v_f_3182_);
v___f_3194_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed), 13, 2);
lean_closure_set(v___f_3194_, 0, v_env_3193_);
lean_closure_set(v___f_3194_, 1, v_f_3182_);
v___x_3195_ = l_Lean_Server_Completion_getEligibleHeaderDecls(v_env_3193_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v_a_3196_; lean_object* v_buckets_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; uint8_t v___x_3200_; 
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
lean_inc(v_a_3196_);
lean_dec_ref_known(v___x_3195_, 1);
v_buckets_3197_ = lean_ctor_get(v_a_3196_, 1);
lean_inc_ref(v_buckets_3197_);
lean_dec(v_a_3196_);
v___x_3198_ = lean_unsigned_to_nat(0u);
v___x_3199_ = lean_array_get_size(v_buckets_3197_);
v___x_3200_ = lean_nat_dec_lt(v___x_3198_, v___x_3199_);
if (v___x_3200_ == 0)
{
lean_object* v___x_3201_; lean_object* v_map_u2082_3202_; lean_object* v___x_3203_; 
lean_dec_ref(v_buckets_3197_);
lean_dec_ref(v_f_3182_);
v___x_3201_ = l_Lean_Environment_constants(v_env_3193_);
v_map_u2082_3202_ = lean_ctor_get(v___x_3201_, 1);
lean_inc_ref(v_map_u2082_3202_);
lean_dec_ref(v___x_3201_);
v___x_3203_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_u2082_3202_, v___f_3194_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_);
return v___x_3203_;
}
else
{
lean_object* v___x_3204_; size_t v___x_3205_; size_t v___x_3206_; lean_object* v___x_3207_; 
v___x_3204_ = lean_box(0);
v___x_3205_ = ((size_t)0ULL);
v___x_3206_ = lean_usize_of_nat(v___x_3199_);
v___x_3207_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_3182_, v_buckets_3197_, v___x_3205_, v___x_3206_, v___x_3204_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_);
lean_dec_ref(v_buckets_3197_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_object* v_a_3208_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
if (lean_obj_tag(v_a_3208_) == 0)
{
lean_dec_ref(v___f_3194_);
lean_dec_ref(v_env_3193_);
return v___x_3207_;
}
else
{
lean_object* v_a_3209_; lean_object* v_snd_3210_; lean_object* v___x_3211_; lean_object* v_map_u2082_3212_; lean_object* v___x_3213_; 
lean_inc_ref(v_a_3208_);
lean_dec_ref_known(v___x_3207_, 1);
v_a_3209_ = lean_ctor_get(v_a_3208_, 0);
lean_inc(v_a_3209_);
lean_dec_ref_known(v_a_3208_, 1);
v_snd_3210_ = lean_ctor_get(v_a_3209_, 1);
lean_inc(v_snd_3210_);
lean_dec(v_a_3209_);
v___x_3211_ = l_Lean_Environment_constants(v_env_3193_);
v_map_u2082_3212_ = lean_ctor_get(v___x_3211_, 1);
lean_inc_ref(v_map_u2082_3212_);
lean_dec_ref(v___x_3211_);
v___x_3213_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_u2082_3212_, v___f_3194_, v_snd_3210_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_);
return v___x_3213_;
}
}
else
{
lean_dec_ref(v___f_3194_);
lean_dec_ref(v_env_3193_);
return v___x_3207_;
}
}
}
else
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3221_; 
lean_dec_ref(v___f_3194_);
lean_dec_ref(v_env_3193_);
lean_dec(v___y_3183_);
lean_dec_ref(v_f_3182_);
v_a_3214_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3216_ = v___x_3195_;
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___x_3195_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3214_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___boxed(lean_object* v_f_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(v_f_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_);
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___y_3225_);
lean_dec_ref(v___y_3224_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(lean_object* v_f_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_){
_start:
{
lean_object* v___f_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
v___f_3242_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed), 12, 1);
lean_closure_set(v___f_3242_, 0, v_f_3233_);
v___x_3243_ = lean_unsigned_to_nat(0u);
v___x_3244_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(v___f_3242_, v___x_3243_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_);
if (lean_obj_tag(v___x_3244_) == 0)
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3264_; 
v_a_3245_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3264_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3247_ = v___x_3244_;
v_isShared_3248_ = v_isSharedCheck_3264_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3244_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3264_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
if (lean_obj_tag(v_a_3245_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3259_; 
v_a_3249_ = lean_ctor_get(v_a_3245_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v_a_3245_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3251_ = v_a_3245_;
v_isShared_3252_ = v_isSharedCheck_3259_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v_a_3245_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3259_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
lean_object* v___x_3256_; 
if (v_isShared_3248_ == 0)
{
lean_ctor_set(v___x_3247_, 0, v___x_3254_);
v___x_3256_ = v___x_3247_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
else
{
lean_object* v___x_3260_; lean_object* v___x_3262_; 
lean_dec_ref_known(v_a_3245_, 1);
v___x_3260_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_3248_ == 0)
{
lean_ctor_set(v___x_3247_, 0, v___x_3260_);
v___x_3262_ = v___x_3247_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3263_; 
v_reuseFailAlloc_3263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3263_, 0, v___x_3260_);
v___x_3262_ = v_reuseFailAlloc_3263_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
return v___x_3262_;
}
}
}
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
v_a_3265_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_3244_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_3244_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___boxed(lean_object* v_f_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
lean_object* v_res_3282_; 
v_res_3282_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v_f_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
return v_res_3282_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(lean_object* v_id_3285_, uint8_t v_danglingDot_3286_, lean_object* v_as_3287_, size_t v_sz_3288_, size_t v_i_3289_, lean_object* v_b_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
uint8_t v___x_3294_; 
v___x_3294_ = lean_usize_dec_lt(v_i_3289_, v_sz_3288_);
if (v___x_3294_ == 0)
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3295_, 0, v_b_3290_);
v___x_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
return v___x_3296_;
}
else
{
lean_object* v_snd_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3350_; 
v_snd_3297_ = lean_ctor_get(v_b_3290_, 1);
v_isSharedCheck_3350_ = !lean_is_exclusive(v_b_3290_);
if (v_isSharedCheck_3350_ == 0)
{
lean_object* v_unused_3351_; 
v_unused_3351_ = lean_ctor_get(v_b_3290_, 0);
lean_dec(v_unused_3351_);
v___x_3299_ = v_b_3290_;
v_isShared_3300_ = v_isSharedCheck_3350_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_snd_3297_);
lean_dec(v_b_3290_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3350_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___x_3301_; lean_object* v_a_3303_; lean_object* v_a_3310_; 
v___x_3301_ = lean_box(0);
v_a_3310_ = lean_array_uget(v_as_3287_, v_i_3289_);
if (lean_obj_tag(v_a_3310_) == 0)
{
v_a_3303_ = v_snd_3297_;
goto v___jp_3302_;
}
else
{
lean_object* v_val_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3349_; 
lean_dec(v_snd_3297_);
v_val_3311_ = lean_ctor_get(v_a_3310_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v_a_3310_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3313_ = v_a_3310_;
v_isShared_3314_ = v_isSharedCheck_3349_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_val_3311_);
lean_dec(v_a_3310_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3349_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; uint8_t v___x_3317_; 
v___x_3315_ = lean_box(0);
v___x_3316_ = l_Lean_LocalDecl_userName(v_val_3311_);
v___x_3317_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3285_, v___x_3316_, v_danglingDot_3286_);
if (v___x_3317_ == 0)
{
lean_dec(v___x_3316_);
lean_del_object(v___x_3313_);
lean_dec(v_val_3311_);
v_a_3303_ = v___x_3315_;
goto v___jp_3302_;
}
else
{
lean_object* v___x_3318_; lean_object* v___x_3320_; 
v___x_3318_ = l_Lean_LocalDecl_fvarId(v_val_3311_);
lean_dec(v_val_3311_);
if (v_isShared_3314_ == 0)
{
lean_ctor_set(v___x_3313_, 0, v___x_3318_);
v___x_3320_ = v___x_3313_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v___x_3318_);
v___x_3320_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
uint8_t v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3321_ = 5;
v___x_3322_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3323_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3316_, v___x_3320_, v___x_3321_, v___x_3322_, v___y_3291_, v___y_3292_);
if (lean_obj_tag(v___x_3323_) == 0)
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3339_; 
v_a_3324_ = lean_ctor_get(v___x_3323_, 0);
v_isSharedCheck_3339_ = !lean_is_exclusive(v___x_3323_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3326_ = v___x_3323_;
v_isShared_3327_ = v_isSharedCheck_3339_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3323_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3339_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
if (lean_obj_tag(v_a_3324_) == 0)
{
lean_object* v_a_3328_; lean_object* v___x_3330_; uint8_t v_isShared_3331_; uint8_t v_isSharedCheck_3338_; 
lean_del_object(v___x_3299_);
v_a_3328_ = lean_ctor_get(v_a_3324_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v_a_3324_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3330_ = v_a_3324_;
v_isShared_3331_ = v_isSharedCheck_3338_;
goto v_resetjp_3329_;
}
else
{
lean_inc(v_a_3328_);
lean_dec(v_a_3324_);
v___x_3330_ = lean_box(0);
v_isShared_3331_ = v_isSharedCheck_3338_;
goto v_resetjp_3329_;
}
v_resetjp_3329_:
{
lean_object* v___x_3333_; 
if (v_isShared_3331_ == 0)
{
v___x_3333_ = v___x_3330_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3328_);
v___x_3333_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
lean_object* v___x_3335_; 
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 0, v___x_3333_);
v___x_3335_ = v___x_3326_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v___x_3333_);
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
else
{
lean_dec_ref_known(v_a_3324_, 1);
lean_del_object(v___x_3326_);
v_a_3303_ = v___x_3315_;
goto v___jp_3302_;
}
}
}
else
{
lean_object* v_a_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3347_; 
lean_del_object(v___x_3299_);
v_a_3340_ = lean_ctor_get(v___x_3323_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3323_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3342_ = v___x_3323_;
v_isShared_3343_ = v_isSharedCheck_3347_;
goto v_resetjp_3341_;
}
else
{
lean_inc(v_a_3340_);
lean_dec(v___x_3323_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3347_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3345_; 
if (v_isShared_3343_ == 0)
{
v___x_3345_ = v___x_3342_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v_a_3340_);
v___x_3345_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
return v___x_3345_;
}
}
}
}
}
}
}
v___jp_3302_:
{
lean_object* v___x_3305_; 
if (v_isShared_3300_ == 0)
{
lean_ctor_set(v___x_3299_, 1, v_a_3303_);
lean_ctor_set(v___x_3299_, 0, v___x_3301_);
v___x_3305_ = v___x_3299_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3301_);
lean_ctor_set(v_reuseFailAlloc_3309_, 1, v_a_3303_);
v___x_3305_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
size_t v___x_3306_; size_t v___x_3307_; 
v___x_3306_ = ((size_t)1ULL);
v___x_3307_ = lean_usize_add(v_i_3289_, v___x_3306_);
v_i_3289_ = v___x_3307_;
v_b_3290_ = v___x_3305_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___boxed(lean_object* v_id_3352_, lean_object* v_danglingDot_3353_, lean_object* v_as_3354_, lean_object* v_sz_3355_, lean_object* v_i_3356_, lean_object* v_b_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_){
_start:
{
uint8_t v_danglingDot_boxed_3361_; size_t v_sz_boxed_3362_; size_t v_i_boxed_3363_; lean_object* v_res_3364_; 
v_danglingDot_boxed_3361_ = lean_unbox(v_danglingDot_3353_);
v_sz_boxed_3362_ = lean_unbox_usize(v_sz_3355_);
lean_dec(v_sz_3355_);
v_i_boxed_3363_ = lean_unbox_usize(v_i_3356_);
lean_dec(v_i_3356_);
v_res_3364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_3352_, v_danglingDot_boxed_3361_, v_as_3354_, v_sz_boxed_3362_, v_i_boxed_3363_, v_b_3357_, v___y_3358_, v___y_3359_);
lean_dec(v___y_3359_);
lean_dec_ref(v___y_3358_);
lean_dec_ref(v_as_3354_);
lean_dec(v_id_3352_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(lean_object* v_id_3365_, uint8_t v_danglingDot_3366_, lean_object* v_as_3367_, size_t v_sz_3368_, size_t v_i_3369_, lean_object* v_b_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
uint8_t v___x_3379_; 
v___x_3379_ = lean_usize_dec_lt(v_i_3369_, v_sz_3368_);
if (v___x_3379_ == 0)
{
lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3380_, 0, v_b_3370_);
v___x_3381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3380_);
return v___x_3381_;
}
else
{
lean_object* v_snd_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3435_; 
v_snd_3382_ = lean_ctor_get(v_b_3370_, 1);
v_isSharedCheck_3435_ = !lean_is_exclusive(v_b_3370_);
if (v_isSharedCheck_3435_ == 0)
{
lean_object* v_unused_3436_; 
v_unused_3436_ = lean_ctor_get(v_b_3370_, 0);
lean_dec(v_unused_3436_);
v___x_3384_ = v_b_3370_;
v_isShared_3385_ = v_isSharedCheck_3435_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_snd_3382_);
lean_dec(v_b_3370_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3435_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3386_; lean_object* v_a_3388_; lean_object* v_a_3395_; 
v___x_3386_ = lean_box(0);
v_a_3395_ = lean_array_uget(v_as_3367_, v_i_3369_);
if (lean_obj_tag(v_a_3395_) == 0)
{
v_a_3388_ = v_snd_3382_;
goto v___jp_3387_;
}
else
{
lean_object* v_val_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3434_; 
lean_dec(v_snd_3382_);
v_val_3396_ = lean_ctor_get(v_a_3395_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v_a_3395_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3398_ = v_a_3395_;
v_isShared_3399_ = v_isSharedCheck_3434_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_val_3396_);
lean_dec(v_a_3395_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3434_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; uint8_t v___x_3402_; 
v___x_3400_ = lean_box(0);
v___x_3401_ = l_Lean_LocalDecl_userName(v_val_3396_);
v___x_3402_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3365_, v___x_3401_, v_danglingDot_3366_);
if (v___x_3402_ == 0)
{
lean_dec(v___x_3401_);
lean_del_object(v___x_3398_);
lean_dec(v_val_3396_);
v_a_3388_ = v___x_3400_;
goto v___jp_3387_;
}
else
{
lean_object* v___x_3403_; lean_object* v___x_3405_; 
v___x_3403_ = l_Lean_LocalDecl_fvarId(v_val_3396_);
lean_dec(v_val_3396_);
if (v_isShared_3399_ == 0)
{
lean_ctor_set(v___x_3398_, 0, v___x_3403_);
v___x_3405_ = v___x_3398_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v___x_3403_);
v___x_3405_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
uint8_t v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3406_ = 5;
v___x_3407_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3408_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3401_, v___x_3405_, v___x_3406_, v___x_3407_, v___y_3371_, v___y_3372_);
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3424_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3411_ = v___x_3408_;
v_isShared_3412_ = v_isSharedCheck_3424_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v___x_3408_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3424_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
if (lean_obj_tag(v_a_3409_) == 0)
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3423_; 
lean_del_object(v___x_3384_);
v_a_3413_ = lean_ctor_get(v_a_3409_, 0);
v_isSharedCheck_3423_ = !lean_is_exclusive(v_a_3409_);
if (v_isSharedCheck_3423_ == 0)
{
v___x_3415_ = v_a_3409_;
v_isShared_3416_ = v_isSharedCheck_3423_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v_a_3409_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3423_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3418_; 
if (v_isShared_3416_ == 0)
{
v___x_3418_ = v___x_3415_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v_a_3413_);
v___x_3418_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
lean_object* v___x_3420_; 
if (v_isShared_3412_ == 0)
{
lean_ctor_set(v___x_3411_, 0, v___x_3418_);
v___x_3420_ = v___x_3411_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v___x_3418_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3409_, 1);
lean_del_object(v___x_3411_);
v_a_3388_ = v___x_3400_;
goto v___jp_3387_;
}
}
}
else
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
lean_del_object(v___x_3384_);
v_a_3425_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3427_ = v___x_3408_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3408_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
}
}
}
v___jp_3387_:
{
lean_object* v___x_3390_; 
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 1, v_a_3388_);
lean_ctor_set(v___x_3384_, 0, v___x_3386_);
v___x_3390_ = v___x_3384_;
goto v_reusejp_3389_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v___x_3386_);
lean_ctor_set(v_reuseFailAlloc_3394_, 1, v_a_3388_);
v___x_3390_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3389_;
}
v_reusejp_3389_:
{
size_t v___x_3391_; size_t v___x_3392_; lean_object* v___x_3393_; 
v___x_3391_ = ((size_t)1ULL);
v___x_3392_ = lean_usize_add(v_i_3369_, v___x_3391_);
v___x_3393_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_3365_, v_danglingDot_3366_, v_as_3367_, v_sz_3368_, v___x_3392_, v___x_3390_, v___y_3371_, v___y_3372_);
return v___x_3393_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17___boxed(lean_object* v_id_3437_, lean_object* v_danglingDot_3438_, lean_object* v_as_3439_, lean_object* v_sz_3440_, lean_object* v_i_3441_, lean_object* v_b_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_){
_start:
{
uint8_t v_danglingDot_boxed_3451_; size_t v_sz_boxed_3452_; size_t v_i_boxed_3453_; lean_object* v_res_3454_; 
v_danglingDot_boxed_3451_ = lean_unbox(v_danglingDot_3438_);
v_sz_boxed_3452_ = lean_unbox_usize(v_sz_3440_);
lean_dec(v_sz_3440_);
v_i_boxed_3453_ = lean_unbox_usize(v_i_3441_);
lean_dec(v_i_3441_);
v_res_3454_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(v_id_3437_, v_danglingDot_boxed_3451_, v_as_3439_, v_sz_boxed_3452_, v_i_boxed_3453_, v_b_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
lean_dec(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec_ref(v___y_3446_);
lean_dec_ref(v___y_3445_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec_ref(v_as_3439_);
lean_dec(v_id_3437_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(lean_object* v_init_3455_, lean_object* v_id_3456_, uint8_t v_danglingDot_3457_, lean_object* v_n_3458_, lean_object* v_b_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
if (lean_obj_tag(v_n_3458_) == 0)
{
lean_object* v_cs_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; size_t v_sz_3471_; size_t v___x_3472_; lean_object* v___x_3473_; 
v_cs_3468_ = lean_ctor_get(v_n_3458_, 0);
v___x_3469_ = lean_box(0);
v___x_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3470_, 0, v___x_3469_);
lean_ctor_set(v___x_3470_, 1, v_b_3459_);
v_sz_3471_ = lean_array_size(v_cs_3468_);
v___x_3472_ = ((size_t)0ULL);
v___x_3473_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(v_init_3455_, v_id_3456_, v_danglingDot_3457_, v_cs_3468_, v_sz_3471_, v___x_3472_, v___x_3470_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v_a_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3510_; 
v_a_3474_ = lean_ctor_get(v___x_3473_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3476_ = v___x_3473_;
v_isShared_3477_ = v_isSharedCheck_3510_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_a_3474_);
lean_dec(v___x_3473_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3510_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
if (lean_obj_tag(v_a_3474_) == 0)
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3488_; 
v_a_3478_ = lean_ctor_get(v_a_3474_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v_a_3474_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3480_ = v_a_3474_;
v_isShared_3481_ = v_isSharedCheck_3488_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v_a_3474_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3488_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_a_3478_);
v___x_3483_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
lean_object* v___x_3485_; 
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 0, v___x_3483_);
v___x_3485_ = v___x_3476_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v___x_3483_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
}
else
{
lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3509_; 
v_a_3489_ = lean_ctor_get(v_a_3474_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v_a_3474_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3491_ = v_a_3474_;
v_isShared_3492_ = v_isSharedCheck_3509_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v_a_3474_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3509_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v_fst_3493_; 
v_fst_3493_ = lean_ctor_get(v_a_3489_, 0);
if (lean_obj_tag(v_fst_3493_) == 0)
{
lean_object* v_snd_3494_; lean_object* v___x_3495_; lean_object* v___x_3497_; 
v_snd_3494_ = lean_ctor_get(v_a_3489_, 1);
lean_inc(v_snd_3494_);
lean_dec(v_a_3489_);
v___x_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3495_, 0, v_snd_3494_);
if (v_isShared_3492_ == 0)
{
lean_ctor_set(v___x_3491_, 0, v___x_3495_);
v___x_3497_ = v___x_3491_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
lean_object* v___x_3499_; 
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 0, v___x_3497_);
v___x_3499_ = v___x_3476_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v___x_3497_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
else
{
lean_object* v_val_3502_; lean_object* v___x_3504_; 
lean_inc_ref(v_fst_3493_);
lean_dec(v_a_3489_);
v_val_3502_ = lean_ctor_get(v_fst_3493_, 0);
lean_inc(v_val_3502_);
lean_dec_ref_known(v_fst_3493_, 1);
if (v_isShared_3492_ == 0)
{
lean_ctor_set(v___x_3491_, 0, v_val_3502_);
v___x_3504_ = v___x_3491_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_val_3502_);
v___x_3504_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
lean_object* v___x_3506_; 
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 0, v___x_3504_);
v___x_3506_ = v___x_3476_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v___x_3504_);
v___x_3506_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
return v___x_3506_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3518_; 
v_a_3511_ = lean_ctor_get(v___x_3473_, 0);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3513_ = v___x_3473_;
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3473_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3516_; 
if (v_isShared_3514_ == 0)
{
v___x_3516_ = v___x_3513_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_a_3511_);
v___x_3516_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
return v___x_3516_;
}
}
}
}
else
{
lean_object* v_vs_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; size_t v_sz_3522_; size_t v___x_3523_; lean_object* v___x_3524_; 
v_vs_3519_ = lean_ctor_get(v_n_3458_, 0);
v___x_3520_ = lean_box(0);
v___x_3521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
lean_ctor_set(v___x_3521_, 1, v_b_3459_);
v_sz_3522_ = lean_array_size(v_vs_3519_);
v___x_3523_ = ((size_t)0ULL);
v___x_3524_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(v_id_3456_, v_danglingDot_3457_, v_vs_3519_, v_sz_3522_, v___x_3523_, v___x_3521_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3561_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3527_ = v___x_3524_;
v_isShared_3528_ = v_isSharedCheck_3561_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3524_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3561_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
if (lean_obj_tag(v_a_3525_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3539_; 
v_a_3529_ = lean_ctor_get(v_a_3525_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v_a_3525_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3531_ = v_a_3525_;
v_isShared_3532_ = v_isSharedCheck_3539_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v_a_3525_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3539_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
lean_object* v___x_3536_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v___x_3534_);
v___x_3536_ = v___x_3527_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
}
else
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3560_; 
v_a_3540_ = lean_ctor_get(v_a_3525_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_a_3525_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3542_ = v_a_3525_;
v_isShared_3543_ = v_isSharedCheck_3560_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v_a_3525_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3560_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v_fst_3544_; 
v_fst_3544_ = lean_ctor_get(v_a_3540_, 0);
if (lean_obj_tag(v_fst_3544_) == 0)
{
lean_object* v_snd_3545_; lean_object* v___x_3546_; lean_object* v___x_3548_; 
v_snd_3545_ = lean_ctor_get(v_a_3540_, 1);
lean_inc(v_snd_3545_);
lean_dec(v_a_3540_);
v___x_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3546_, 0, v_snd_3545_);
if (v_isShared_3543_ == 0)
{
lean_ctor_set(v___x_3542_, 0, v___x_3546_);
v___x_3548_ = v___x_3542_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v___x_3546_);
v___x_3548_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
lean_object* v___x_3550_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v___x_3548_);
v___x_3550_ = v___x_3527_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3548_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
else
{
lean_object* v_val_3553_; lean_object* v___x_3555_; 
lean_inc_ref(v_fst_3544_);
lean_dec(v_a_3540_);
v_val_3553_ = lean_ctor_get(v_fst_3544_, 0);
lean_inc(v_val_3553_);
lean_dec_ref_known(v_fst_3544_, 1);
if (v_isShared_3543_ == 0)
{
lean_ctor_set(v___x_3542_, 0, v_val_3553_);
v___x_3555_ = v___x_3542_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_val_3553_);
v___x_3555_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
lean_object* v___x_3557_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v___x_3555_);
v___x_3557_ = v___x_3527_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v___x_3555_);
v___x_3557_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
return v___x_3557_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3569_; 
v_a_3562_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3564_ = v___x_3524_;
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3524_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3567_; 
if (v_isShared_3565_ == 0)
{
v___x_3567_ = v___x_3564_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_a_3562_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(lean_object* v_init_3570_, lean_object* v_id_3571_, uint8_t v_danglingDot_3572_, lean_object* v_as_3573_, size_t v_sz_3574_, size_t v_i_3575_, lean_object* v_b_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_){
_start:
{
uint8_t v___x_3585_; 
v___x_3585_ = lean_usize_dec_lt(v_i_3575_, v_sz_3574_);
if (v___x_3585_ == 0)
{
lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3586_, 0, v_b_3576_);
v___x_3587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3586_);
return v___x_3587_;
}
else
{
lean_object* v_snd_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3641_; 
v_snd_3588_ = lean_ctor_get(v_b_3576_, 1);
v_isSharedCheck_3641_ = !lean_is_exclusive(v_b_3576_);
if (v_isSharedCheck_3641_ == 0)
{
lean_object* v_unused_3642_; 
v_unused_3642_ = lean_ctor_get(v_b_3576_, 0);
lean_dec(v_unused_3642_);
v___x_3590_ = v_b_3576_;
v_isShared_3591_ = v_isSharedCheck_3641_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_snd_3588_);
lean_dec(v_b_3576_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3641_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3592_; lean_object* v_a_3593_; lean_object* v___x_3594_; 
v___x_3592_ = lean_box(0);
v_a_3593_ = lean_array_uget_borrowed(v_as_3573_, v_i_3575_);
lean_inc(v_snd_3588_);
v___x_3594_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3570_, v_id_3571_, v_danglingDot_3572_, v_a_3593_, v_snd_3588_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_);
if (lean_obj_tag(v___x_3594_) == 0)
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3632_; 
v_a_3595_ = lean_ctor_get(v___x_3594_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3594_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3597_ = v___x_3594_;
v_isShared_3598_ = v_isSharedCheck_3632_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v___x_3594_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3632_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
if (lean_obj_tag(v_a_3595_) == 0)
{
lean_object* v_a_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3609_; 
lean_del_object(v___x_3590_);
lean_dec(v_snd_3588_);
v_a_3599_ = lean_ctor_get(v_a_3595_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v_a_3595_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3601_ = v_a_3595_;
v_isShared_3602_ = v_isSharedCheck_3609_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_a_3599_);
lean_dec(v_a_3595_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3609_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3604_; 
if (v_isShared_3602_ == 0)
{
v___x_3604_ = v___x_3601_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v_a_3599_);
v___x_3604_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
lean_object* v___x_3606_; 
if (v_isShared_3598_ == 0)
{
lean_ctor_set(v___x_3597_, 0, v___x_3604_);
v___x_3606_ = v___x_3597_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v___x_3604_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
return v___x_3606_;
}
}
}
}
else
{
lean_object* v_a_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3631_; 
v_a_3610_ = lean_ctor_get(v_a_3595_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v_a_3595_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3612_ = v_a_3595_;
v_isShared_3613_ = v_isSharedCheck_3631_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_a_3610_);
lean_dec(v_a_3595_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3631_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
if (lean_obj_tag(v_a_3610_) == 0)
{
lean_object* v___x_3614_; lean_object* v___x_3616_; 
v___x_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3614_, 0, v_a_3610_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set(v___x_3590_, 0, v___x_3614_);
v___x_3616_ = v___x_3590_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v___x_3614_);
lean_ctor_set(v_reuseFailAlloc_3623_, 1, v_snd_3588_);
v___x_3616_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
lean_object* v___x_3618_; 
if (v_isShared_3613_ == 0)
{
lean_ctor_set(v___x_3612_, 0, v___x_3616_);
v___x_3618_ = v___x_3612_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v___x_3616_);
v___x_3618_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
lean_object* v___x_3620_; 
if (v_isShared_3598_ == 0)
{
lean_ctor_set(v___x_3597_, 0, v___x_3618_);
v___x_3620_ = v___x_3597_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v___x_3618_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
}
}
else
{
lean_object* v_a_3624_; lean_object* v___x_3626_; 
lean_del_object(v___x_3612_);
lean_del_object(v___x_3597_);
lean_dec(v_snd_3588_);
v_a_3624_ = lean_ctor_get(v_a_3610_, 0);
lean_inc(v_a_3624_);
lean_dec_ref_known(v_a_3610_, 1);
if (v_isShared_3591_ == 0)
{
lean_ctor_set(v___x_3590_, 1, v_a_3624_);
lean_ctor_set(v___x_3590_, 0, v___x_3592_);
v___x_3626_ = v___x_3590_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v___x_3592_);
lean_ctor_set(v_reuseFailAlloc_3630_, 1, v_a_3624_);
v___x_3626_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
size_t v___x_3627_; size_t v___x_3628_; 
v___x_3627_ = ((size_t)1ULL);
v___x_3628_ = lean_usize_add(v_i_3575_, v___x_3627_);
v_i_3575_ = v___x_3628_;
v_b_3576_ = v___x_3626_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_del_object(v___x_3590_);
lean_dec(v_snd_3588_);
v_a_3633_ = lean_ctor_get(v___x_3594_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3594_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3594_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3594_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16___boxed(lean_object* v_init_3643_, lean_object* v_id_3644_, lean_object* v_danglingDot_3645_, lean_object* v_as_3646_, lean_object* v_sz_3647_, lean_object* v_i_3648_, lean_object* v_b_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_){
_start:
{
uint8_t v_danglingDot_boxed_3658_; size_t v_sz_boxed_3659_; size_t v_i_boxed_3660_; lean_object* v_res_3661_; 
v_danglingDot_boxed_3658_ = lean_unbox(v_danglingDot_3645_);
v_sz_boxed_3659_ = lean_unbox_usize(v_sz_3647_);
lean_dec(v_sz_3647_);
v_i_boxed_3660_ = lean_unbox_usize(v_i_3648_);
lean_dec(v_i_3648_);
v_res_3661_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(v_init_3643_, v_id_3644_, v_danglingDot_boxed_3658_, v_as_3646_, v_sz_boxed_3659_, v_i_boxed_3660_, v_b_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_);
lean_dec(v___y_3656_);
lean_dec_ref(v___y_3655_);
lean_dec(v___y_3654_);
lean_dec_ref(v___y_3653_);
lean_dec_ref(v___y_3652_);
lean_dec(v___y_3651_);
lean_dec_ref(v___y_3650_);
lean_dec_ref(v_as_3646_);
lean_dec(v_id_3644_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11___boxed(lean_object* v_init_3662_, lean_object* v_id_3663_, lean_object* v_danglingDot_3664_, lean_object* v_n_3665_, lean_object* v_b_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
uint8_t v_danglingDot_boxed_3675_; lean_object* v_res_3676_; 
v_danglingDot_boxed_3675_ = lean_unbox(v_danglingDot_3664_);
v_res_3676_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3662_, v_id_3663_, v_danglingDot_boxed_3675_, v_n_3665_, v_b_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
lean_dec(v___y_3673_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec_ref(v___y_3669_);
lean_dec(v___y_3668_);
lean_dec_ref(v___y_3667_);
lean_dec_ref(v_n_3665_);
lean_dec(v_id_3663_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(lean_object* v_id_3677_, uint8_t v_danglingDot_3678_, lean_object* v_as_3679_, size_t v_sz_3680_, size_t v_i_3681_, lean_object* v_b_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
uint8_t v___x_3686_; 
v___x_3686_ = lean_usize_dec_lt(v_i_3681_, v_sz_3680_);
if (v___x_3686_ == 0)
{
lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3687_, 0, v_b_3682_);
v___x_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3687_);
return v___x_3688_;
}
else
{
lean_object* v_snd_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3742_; 
v_snd_3689_ = lean_ctor_get(v_b_3682_, 1);
v_isSharedCheck_3742_ = !lean_is_exclusive(v_b_3682_);
if (v_isSharedCheck_3742_ == 0)
{
lean_object* v_unused_3743_; 
v_unused_3743_ = lean_ctor_get(v_b_3682_, 0);
lean_dec(v_unused_3743_);
v___x_3691_ = v_b_3682_;
v_isShared_3692_ = v_isSharedCheck_3742_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_snd_3689_);
lean_dec(v_b_3682_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3742_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3693_; lean_object* v_a_3695_; lean_object* v_a_3702_; 
v___x_3693_ = lean_box(0);
v_a_3702_ = lean_array_uget(v_as_3679_, v_i_3681_);
if (lean_obj_tag(v_a_3702_) == 0)
{
v_a_3695_ = v_snd_3689_;
goto v___jp_3694_;
}
else
{
lean_object* v_val_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3741_; 
lean_dec(v_snd_3689_);
v_val_3703_ = lean_ctor_get(v_a_3702_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v_a_3702_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3705_ = v_a_3702_;
v_isShared_3706_ = v_isSharedCheck_3741_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_val_3703_);
lean_dec(v_a_3702_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3741_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; uint8_t v___x_3709_; 
v___x_3707_ = lean_box(0);
v___x_3708_ = l_Lean_LocalDecl_userName(v_val_3703_);
v___x_3709_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3677_, v___x_3708_, v_danglingDot_3678_);
if (v___x_3709_ == 0)
{
lean_dec(v___x_3708_);
lean_del_object(v___x_3705_);
lean_dec(v_val_3703_);
v_a_3695_ = v___x_3707_;
goto v___jp_3694_;
}
else
{
lean_object* v___x_3710_; lean_object* v___x_3712_; 
v___x_3710_ = l_Lean_LocalDecl_fvarId(v_val_3703_);
lean_dec(v_val_3703_);
if (v_isShared_3706_ == 0)
{
lean_ctor_set(v___x_3705_, 0, v___x_3710_);
v___x_3712_ = v___x_3705_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v___x_3710_);
v___x_3712_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
uint8_t v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3713_ = 5;
v___x_3714_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3715_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3708_, v___x_3712_, v___x_3713_, v___x_3714_, v___y_3683_, v___y_3684_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3731_; 
v_a_3716_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3718_ = v___x_3715_;
v_isShared_3719_ = v_isSharedCheck_3731_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_a_3716_);
lean_dec(v___x_3715_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3731_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
if (lean_obj_tag(v_a_3716_) == 0)
{
lean_object* v_a_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3730_; 
lean_del_object(v___x_3691_);
v_a_3720_ = lean_ctor_get(v_a_3716_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v_a_3716_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3722_ = v_a_3716_;
v_isShared_3723_ = v_isSharedCheck_3730_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_a_3720_);
lean_dec(v_a_3716_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3730_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v___x_3725_; 
if (v_isShared_3723_ == 0)
{
v___x_3725_ = v___x_3722_;
goto v_reusejp_3724_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3720_);
v___x_3725_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3724_;
}
v_reusejp_3724_:
{
lean_object* v___x_3727_; 
if (v_isShared_3719_ == 0)
{
lean_ctor_set(v___x_3718_, 0, v___x_3725_);
v___x_3727_ = v___x_3718_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3725_);
v___x_3727_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
return v___x_3727_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3716_, 1);
lean_del_object(v___x_3718_);
v_a_3695_ = v___x_3707_;
goto v___jp_3694_;
}
}
}
else
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
lean_del_object(v___x_3691_);
v_a_3732_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3715_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3715_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
}
}
}
}
}
}
}
v___jp_3694_:
{
lean_object* v___x_3697_; 
if (v_isShared_3692_ == 0)
{
lean_ctor_set(v___x_3691_, 1, v_a_3695_);
lean_ctor_set(v___x_3691_, 0, v___x_3693_);
v___x_3697_ = v___x_3691_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3693_);
lean_ctor_set(v_reuseFailAlloc_3701_, 1, v_a_3695_);
v___x_3697_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
size_t v___x_3698_; size_t v___x_3699_; 
v___x_3698_ = ((size_t)1ULL);
v___x_3699_ = lean_usize_add(v_i_3681_, v___x_3698_);
v_i_3681_ = v___x_3699_;
v_b_3682_ = v___x_3697_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___boxed(lean_object* v_id_3744_, lean_object* v_danglingDot_3745_, lean_object* v_as_3746_, lean_object* v_sz_3747_, lean_object* v_i_3748_, lean_object* v_b_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_){
_start:
{
uint8_t v_danglingDot_boxed_3753_; size_t v_sz_boxed_3754_; size_t v_i_boxed_3755_; lean_object* v_res_3756_; 
v_danglingDot_boxed_3753_ = lean_unbox(v_danglingDot_3745_);
v_sz_boxed_3754_ = lean_unbox_usize(v_sz_3747_);
lean_dec(v_sz_3747_);
v_i_boxed_3755_ = lean_unbox_usize(v_i_3748_);
lean_dec(v_i_3748_);
v_res_3756_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_3744_, v_danglingDot_boxed_3753_, v_as_3746_, v_sz_boxed_3754_, v_i_boxed_3755_, v_b_3749_, v___y_3750_, v___y_3751_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec_ref(v_as_3746_);
lean_dec(v_id_3744_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(lean_object* v_id_3757_, uint8_t v_danglingDot_3758_, lean_object* v_as_3759_, size_t v_sz_3760_, size_t v_i_3761_, lean_object* v_b_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_){
_start:
{
uint8_t v___x_3771_; 
v___x_3771_ = lean_usize_dec_lt(v_i_3761_, v_sz_3760_);
if (v___x_3771_ == 0)
{
lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3772_, 0, v_b_3762_);
v___x_3773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3772_);
return v___x_3773_;
}
else
{
lean_object* v_snd_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3827_; 
v_snd_3774_ = lean_ctor_get(v_b_3762_, 1);
v_isSharedCheck_3827_ = !lean_is_exclusive(v_b_3762_);
if (v_isSharedCheck_3827_ == 0)
{
lean_object* v_unused_3828_; 
v_unused_3828_ = lean_ctor_get(v_b_3762_, 0);
lean_dec(v_unused_3828_);
v___x_3776_ = v_b_3762_;
v_isShared_3777_ = v_isSharedCheck_3827_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_snd_3774_);
lean_dec(v_b_3762_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3827_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v___x_3778_; lean_object* v_a_3780_; lean_object* v_a_3787_; 
v___x_3778_ = lean_box(0);
v_a_3787_ = lean_array_uget(v_as_3759_, v_i_3761_);
if (lean_obj_tag(v_a_3787_) == 0)
{
v_a_3780_ = v_snd_3774_;
goto v___jp_3779_;
}
else
{
lean_object* v_val_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3826_; 
lean_dec(v_snd_3774_);
v_val_3788_ = lean_ctor_get(v_a_3787_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v_a_3787_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3790_ = v_a_3787_;
v_isShared_3791_ = v_isSharedCheck_3826_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_val_3788_);
lean_dec(v_a_3787_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3826_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; uint8_t v___x_3794_; 
v___x_3792_ = lean_box(0);
v___x_3793_ = l_Lean_LocalDecl_userName(v_val_3788_);
v___x_3794_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3757_, v___x_3793_, v_danglingDot_3758_);
if (v___x_3794_ == 0)
{
lean_dec(v___x_3793_);
lean_del_object(v___x_3790_);
lean_dec(v_val_3788_);
v_a_3780_ = v___x_3792_;
goto v___jp_3779_;
}
else
{
lean_object* v___x_3795_; lean_object* v___x_3797_; 
v___x_3795_ = l_Lean_LocalDecl_fvarId(v_val_3788_);
lean_dec(v_val_3788_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 0, v___x_3795_);
v___x_3797_ = v___x_3790_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v___x_3795_);
v___x_3797_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
uint8_t v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; 
v___x_3798_ = 5;
v___x_3799_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___closed__0));
v___x_3800_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_3793_, v___x_3797_, v___x_3798_, v___x_3799_, v___y_3763_, v___y_3764_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3816_; 
v_a_3801_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3803_ = v___x_3800_;
v_isShared_3804_ = v_isSharedCheck_3816_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v___x_3800_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3816_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
if (lean_obj_tag(v_a_3801_) == 0)
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3815_; 
lean_del_object(v___x_3776_);
v_a_3805_ = lean_ctor_get(v_a_3801_, 0);
v_isSharedCheck_3815_ = !lean_is_exclusive(v_a_3801_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3807_ = v_a_3801_;
v_isShared_3808_ = v_isSharedCheck_3815_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v_a_3801_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3815_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
lean_object* v___x_3810_; 
if (v_isShared_3808_ == 0)
{
v___x_3810_ = v___x_3807_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v_a_3805_);
v___x_3810_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
lean_object* v___x_3812_; 
if (v_isShared_3804_ == 0)
{
lean_ctor_set(v___x_3803_, 0, v___x_3810_);
v___x_3812_ = v___x_3803_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3810_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3801_, 1);
lean_del_object(v___x_3803_);
v_a_3780_ = v___x_3792_;
goto v___jp_3779_;
}
}
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
lean_del_object(v___x_3776_);
v_a_3817_ = lean_ctor_get(v___x_3800_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3800_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3800_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3800_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
}
}
}
v___jp_3779_:
{
lean_object* v___x_3782_; 
if (v_isShared_3777_ == 0)
{
lean_ctor_set(v___x_3776_, 1, v_a_3780_);
lean_ctor_set(v___x_3776_, 0, v___x_3778_);
v___x_3782_ = v___x_3776_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3778_);
lean_ctor_set(v_reuseFailAlloc_3786_, 1, v_a_3780_);
v___x_3782_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
size_t v___x_3783_; size_t v___x_3784_; lean_object* v___x_3785_; 
v___x_3783_ = ((size_t)1ULL);
v___x_3784_ = lean_usize_add(v_i_3761_, v___x_3783_);
v___x_3785_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_3757_, v_danglingDot_3758_, v_as_3759_, v_sz_3760_, v___x_3784_, v___x_3782_, v___y_3763_, v___y_3764_);
return v___x_3785_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12___boxed(lean_object* v_id_3829_, lean_object* v_danglingDot_3830_, lean_object* v_as_3831_, lean_object* v_sz_3832_, lean_object* v_i_3833_, lean_object* v_b_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_){
_start:
{
uint8_t v_danglingDot_boxed_3843_; size_t v_sz_boxed_3844_; size_t v_i_boxed_3845_; lean_object* v_res_3846_; 
v_danglingDot_boxed_3843_ = lean_unbox(v_danglingDot_3830_);
v_sz_boxed_3844_ = lean_unbox_usize(v_sz_3832_);
lean_dec(v_sz_3832_);
v_i_boxed_3845_ = lean_unbox_usize(v_i_3833_);
lean_dec(v_i_3833_);
v_res_3846_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(v_id_3829_, v_danglingDot_boxed_3843_, v_as_3831_, v_sz_boxed_3844_, v_i_boxed_3845_, v_b_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_);
lean_dec(v___y_3841_);
lean_dec_ref(v___y_3840_);
lean_dec(v___y_3839_);
lean_dec_ref(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec_ref(v_as_3831_);
lean_dec(v_id_3829_);
return v_res_3846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(lean_object* v_id_3847_, uint8_t v_danglingDot_3848_, lean_object* v_t_3849_, lean_object* v_init_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_){
_start:
{
lean_object* v_b_3860_; lean_object* v_root_3863_; lean_object* v_tail_3864_; lean_object* v___x_3865_; 
v_root_3863_ = lean_ctor_get(v_t_3849_, 0);
v_tail_3864_ = lean_ctor_get(v_t_3849_, 1);
v___x_3865_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3850_, v_id_3847_, v_danglingDot_3848_, v_root_3863_, v_init_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_, v___y_3857_);
if (lean_obj_tag(v___x_3865_) == 0)
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3927_; 
v_a_3866_ = lean_ctor_get(v___x_3865_, 0);
v_isSharedCheck_3927_ = !lean_is_exclusive(v___x_3865_);
if (v_isSharedCheck_3927_ == 0)
{
v___x_3868_ = v___x_3865_;
v_isShared_3869_ = v_isSharedCheck_3927_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3865_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3927_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
if (lean_obj_tag(v_a_3866_) == 0)
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3880_; 
v_a_3870_ = lean_ctor_get(v_a_3866_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v_a_3866_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3872_ = v_a_3866_;
v_isShared_3873_ = v_isSharedCheck_3880_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v_a_3866_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3880_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3875_; 
if (v_isShared_3873_ == 0)
{
v___x_3875_ = v___x_3872_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_a_3870_);
v___x_3875_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
lean_object* v___x_3877_; 
if (v_isShared_3869_ == 0)
{
lean_ctor_set(v___x_3868_, 0, v___x_3875_);
v___x_3877_ = v___x_3868_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v___x_3875_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
}
else
{
lean_object* v_a_3881_; 
lean_del_object(v___x_3868_);
v_a_3881_ = lean_ctor_get(v_a_3866_, 0);
lean_inc(v_a_3881_);
lean_dec_ref_known(v_a_3866_, 1);
if (lean_obj_tag(v_a_3881_) == 0)
{
lean_object* v_a_3882_; 
v_a_3882_ = lean_ctor_get(v_a_3881_, 0);
lean_inc(v_a_3882_);
lean_dec_ref_known(v_a_3881_, 1);
v_b_3860_ = v_a_3882_;
goto v___jp_3859_;
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; size_t v_sz_3886_; size_t v___x_3887_; lean_object* v___x_3888_; 
v_a_3883_ = lean_ctor_get(v_a_3881_, 0);
lean_inc(v_a_3883_);
lean_dec_ref_known(v_a_3881_, 1);
v___x_3884_ = lean_box(0);
v___x_3885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3885_, 0, v___x_3884_);
lean_ctor_set(v___x_3885_, 1, v_a_3883_);
v_sz_3886_ = lean_array_size(v_tail_3864_);
v___x_3887_ = ((size_t)0ULL);
v___x_3888_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(v_id_3847_, v_danglingDot_3848_, v_tail_3864_, v_sz_3886_, v___x_3887_, v___x_3885_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_, v___y_3857_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3918_; 
v_a_3889_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3918_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3891_ = v___x_3888_;
v_isShared_3892_ = v_isSharedCheck_3918_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3888_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3918_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
if (lean_obj_tag(v_a_3889_) == 0)
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3903_; 
v_a_3893_ = lean_ctor_get(v_a_3889_, 0);
v_isSharedCheck_3903_ = !lean_is_exclusive(v_a_3889_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3895_ = v_a_3889_;
v_isShared_3896_ = v_isSharedCheck_3903_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v_a_3889_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3903_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v___x_3898_; 
if (v_isShared_3896_ == 0)
{
v___x_3898_ = v___x_3895_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v_a_3893_);
v___x_3898_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
lean_object* v___x_3900_; 
if (v_isShared_3892_ == 0)
{
lean_ctor_set(v___x_3891_, 0, v___x_3898_);
v___x_3900_ = v___x_3891_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3917_; 
v_a_3904_ = lean_ctor_get(v_a_3889_, 0);
v_isSharedCheck_3917_ = !lean_is_exclusive(v_a_3889_);
if (v_isSharedCheck_3917_ == 0)
{
v___x_3906_ = v_a_3889_;
v_isShared_3907_ = v_isSharedCheck_3917_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v_a_3889_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3917_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v_fst_3908_; 
v_fst_3908_ = lean_ctor_get(v_a_3904_, 0);
if (lean_obj_tag(v_fst_3908_) == 0)
{
lean_object* v_snd_3909_; lean_object* v___x_3911_; 
v_snd_3909_ = lean_ctor_get(v_a_3904_, 1);
lean_inc(v_snd_3909_);
lean_dec(v_a_3904_);
if (v_isShared_3907_ == 0)
{
lean_ctor_set(v___x_3906_, 0, v_snd_3909_);
v___x_3911_ = v___x_3906_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v_snd_3909_);
v___x_3911_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
lean_object* v___x_3913_; 
if (v_isShared_3892_ == 0)
{
lean_ctor_set(v___x_3891_, 0, v___x_3911_);
v___x_3913_ = v___x_3891_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v___x_3911_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
return v___x_3913_;
}
}
}
else
{
lean_object* v_val_3916_; 
lean_inc_ref(v_fst_3908_);
lean_del_object(v___x_3906_);
lean_dec(v_a_3904_);
lean_del_object(v___x_3891_);
v_val_3916_ = lean_ctor_get(v_fst_3908_, 0);
lean_inc(v_val_3916_);
lean_dec_ref_known(v_fst_3908_, 1);
v_b_3860_ = v_val_3916_;
goto v___jp_3859_;
}
}
}
}
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
v_a_3919_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3888_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3888_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3935_; 
v_a_3928_ = lean_ctor_get(v___x_3865_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3865_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3930_ = v___x_3865_;
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v___x_3865_);
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
v___jp_3859_:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3861_, 0, v_b_3860_);
v___x_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3862_, 0, v___x_3861_);
return v___x_3862_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6___boxed(lean_object* v_id_3936_, lean_object* v_danglingDot_3937_, lean_object* v_t_3938_, lean_object* v_init_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
uint8_t v_danglingDot_boxed_3948_; lean_object* v_res_3949_; 
v_danglingDot_boxed_3948_ = lean_unbox(v_danglingDot_3937_);
v_res_3949_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(v_id_3936_, v_danglingDot_boxed_3948_, v_t_3938_, v_init_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_);
lean_dec(v___y_3946_);
lean_dec_ref(v___y_3945_);
lean_dec(v___y_3944_);
lean_dec_ref(v___y_3943_);
lean_dec_ref(v___y_3942_);
lean_dec(v___y_3941_);
lean_dec_ref(v___y_3940_);
lean_dec_ref(v_t_3938_);
lean_dec(v_id_3936_);
return v_res_3949_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(lean_object* v_as_3950_, size_t v_sz_3951_, size_t v_i_3952_, lean_object* v_b_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_){
_start:
{
uint8_t v___x_3957_; 
v___x_3957_ = lean_usize_dec_lt(v_i_3952_, v_sz_3951_);
if (v___x_3957_ == 0)
{
lean_object* v___x_3958_; lean_object* v___x_3959_; 
v___x_3958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3958_, 0, v_b_3953_);
v___x_3959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3958_);
return v___x_3959_;
}
else
{
lean_object* v___x_3960_; lean_object* v_a_3961_; lean_object* v___x_3962_; 
v___x_3960_ = lean_box(0);
v_a_3961_ = lean_array_uget_borrowed(v_as_3950_, v_i_3952_);
lean_inc(v_a_3961_);
v___x_3962_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_a_3961_, v___y_3954_, v___y_3955_);
if (lean_obj_tag(v___x_3962_) == 0)
{
lean_object* v_a_3963_; 
v_a_3963_ = lean_ctor_get(v___x_3962_, 0);
if (lean_obj_tag(v_a_3963_) == 0)
{
return v___x_3962_;
}
else
{
size_t v___x_3964_; size_t v___x_3965_; 
lean_dec_ref_known(v___x_3962_, 1);
v___x_3964_ = ((size_t)1ULL);
v___x_3965_ = lean_usize_add(v_i_3952_, v___x_3964_);
v_i_3952_ = v___x_3965_;
v_b_3953_ = v___x_3960_;
goto _start;
}
}
else
{
return v___x_3962_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg___boxed(lean_object* v_as_3967_, lean_object* v_sz_3968_, lean_object* v_i_3969_, lean_object* v_b_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_){
_start:
{
size_t v_sz_boxed_3974_; size_t v_i_boxed_3975_; lean_object* v_res_3976_; 
v_sz_boxed_3974_ = lean_unbox_usize(v_sz_3968_);
lean_dec(v_sz_3968_);
v_i_boxed_3975_ = lean_unbox_usize(v_i_3969_);
lean_dec(v_i_3969_);
v_res_3976_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v_as_3967_, v_sz_boxed_3974_, v_i_boxed_3975_, v_b_3970_, v___y_3971_, v___y_3972_);
lean_dec(v___y_3972_);
lean_dec_ref(v___y_3971_);
lean_dec_ref(v_as_3967_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(lean_object* v___x_3977_, lean_object* v_ns_3978_, lean_object* v_id_3979_, uint8_t v_danglingDot_3980_, lean_object* v_a_3981_, lean_object* v___x_3982_, lean_object* v_alias_3983_, lean_object* v_declNames_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
uint8_t v___x_3996_; 
v___x_3996_ = l_Lean_Name_isPrefixOf(v_ns_3978_, v_alias_3983_);
if (v___x_3996_ == 0)
{
lean_dec(v_declNames_3984_);
lean_dec(v_alias_3983_);
lean_dec_ref(v___x_3982_);
goto v___jp_3993_;
}
else
{
lean_object* v___x_3997_; lean_object* v___x_3998_; uint8_t v___x_3999_; 
v___x_3997_ = lean_box(0);
lean_inc(v_alias_3983_);
v___x_3998_ = l_Lean_Name_replacePrefix(v_alias_3983_, v_ns_3978_, v___x_3997_);
v___x_3999_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3979_, v___x_3998_, v_danglingDot_3980_);
lean_dec(v___x_3998_);
if (v___x_3999_ == 0)
{
lean_dec(v_declNames_3984_);
lean_dec(v_alias_3983_);
lean_dec_ref(v___x_3982_);
goto v___jp_3993_;
}
else
{
lean_object* v___x_4000_; 
v___x_4000_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_3981_, v___x_3982_, v_alias_3983_, v_declNames_3984_, v___y_3985_, v___y_3986_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
lean_dec(v_alias_3983_);
return v___x_4000_;
}
}
v___jp_3993_:
{
lean_object* v___x_3994_; lean_object* v___x_3995_; 
v___x_3994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3977_);
v___x_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3994_);
return v___x_3995_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed(lean_object* v___x_4001_, lean_object* v_ns_4002_, lean_object* v_id_4003_, lean_object* v_danglingDot_4004_, lean_object* v_a_4005_, lean_object* v___x_4006_, lean_object* v_alias_4007_, lean_object* v_declNames_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_){
_start:
{
uint8_t v_danglingDot_boxed_4017_; lean_object* v_res_4018_; 
v_danglingDot_boxed_4017_ = lean_unbox(v_danglingDot_4004_);
v_res_4018_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(v___x_4001_, v_ns_4002_, v_id_4003_, v_danglingDot_boxed_4017_, v_a_4005_, v___x_4006_, v_alias_4007_, v_declNames_4008_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_);
lean_dec(v___y_4015_);
lean_dec_ref(v___y_4014_);
lean_dec(v___y_4013_);
lean_dec_ref(v___y_4012_);
lean_dec_ref(v___y_4011_);
lean_dec(v___y_4010_);
lean_dec_ref(v___y_4009_);
lean_dec_ref(v_a_4005_);
lean_dec(v_id_4003_);
lean_dec(v_ns_4002_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(lean_object* v_id_4019_, uint8_t v_danglingDot_4020_, lean_object* v_a_4021_, lean_object* v___x_4022_, lean_object* v_as_x27_4023_, lean_object* v_b_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_){
_start:
{
lean_object* v_a_4034_; 
if (lean_obj_tag(v_as_x27_4023_) == 0)
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
lean_dec_ref(v___x_4022_);
lean_dec_ref(v_a_4021_);
lean_dec(v_id_4019_);
v___x_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4037_, 0, v_b_4024_);
v___x_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4037_);
return v___x_4038_;
}
else
{
lean_object* v_head_4039_; lean_object* v_tail_4040_; lean_object* v___x_4041_; 
v_head_4039_ = lean_ctor_get(v_as_x27_4023_, 0);
v_tail_4040_ = lean_ctor_get(v_as_x27_4023_, 1);
v___x_4041_ = lean_box(0);
if (lean_obj_tag(v_head_4039_) == 0)
{
lean_object* v_ns_4042_; lean_object* v___x_4043_; lean_object* v___f_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; 
v_ns_4042_ = lean_ctor_get(v_head_4039_, 0);
v___x_4043_ = lean_box(v_danglingDot_4020_);
lean_inc_ref_n(v___x_4022_, 2);
lean_inc_ref(v_a_4021_);
lean_inc(v_id_4019_);
lean_inc(v_ns_4042_);
v___f_4044_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed), 16, 6);
lean_closure_set(v___f_4044_, 0, v___x_4041_);
lean_closure_set(v___f_4044_, 1, v_ns_4042_);
lean_closure_set(v___f_4044_, 2, v_id_4019_);
lean_closure_set(v___f_4044_, 3, v___x_4043_);
lean_closure_set(v___f_4044_, 4, v_a_4021_);
lean_closure_set(v___f_4044_, 5, v___x_4022_);
v___x_4045_ = l_Lean_getAliasState(v___x_4022_);
v___x_4046_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4045_, v___f_4044_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_);
if (lean_obj_tag(v___x_4046_) == 0)
{
lean_object* v_a_4047_; 
v_a_4047_ = lean_ctor_get(v___x_4046_, 0);
lean_inc(v_a_4047_);
lean_dec_ref_known(v___x_4046_, 1);
if (lean_obj_tag(v_a_4047_) == 0)
{
lean_object* v_a_4048_; 
lean_dec_ref(v___x_4022_);
lean_dec_ref(v_a_4021_);
lean_dec(v_id_4019_);
v_a_4048_ = lean_ctor_get(v_a_4047_, 0);
lean_inc(v_a_4048_);
lean_dec_ref_known(v_a_4047_, 1);
v_a_4034_ = v_a_4048_;
goto v___jp_4033_;
}
else
{
lean_dec_ref_known(v_a_4047_, 1);
v_as_x27_4023_ = v_tail_4040_;
v_b_4024_ = v___x_4041_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_4022_);
lean_dec_ref(v_a_4021_);
lean_dec(v_id_4019_);
return v___x_4046_;
}
}
else
{
lean_object* v_id_4050_; lean_object* v_declName_4051_; uint8_t v___x_4052_; 
v_id_4050_ = lean_ctor_get(v_head_4039_, 0);
v_declName_4051_ = lean_ctor_get(v_head_4039_, 1);
lean_inc(v_declName_4051_);
lean_inc_ref(v___x_4022_);
v___x_4052_ = l_Lean_Server_Completion_allowCompletion(v_a_4021_, v___x_4022_, v_declName_4051_);
if (v___x_4052_ == 0)
{
v_as_x27_4023_ = v_tail_4040_;
v_b_4024_ = v___x_4041_;
goto _start;
}
else
{
uint8_t v___x_4054_; 
v___x_4054_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_4019_, v_id_4050_, v_danglingDot_4020_);
if (v___x_4054_ == 0)
{
v_as_x27_4023_ = v_tail_4040_;
v_b_4024_ = v___x_4041_;
goto _start;
}
else
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4056_ = l_Lean_Name_getString_x21(v_id_4050_);
v___x_4057_ = lean_box(0);
v___x_4058_ = l_Lean_Name_str___override(v___x_4057_, v___x_4056_);
lean_inc(v_declName_4051_);
v___x_4059_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_4058_, v_declName_4051_, v___y_4025_, v___y_4026_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_dec_ref_known(v___x_4059_, 1);
v_as_x27_4023_ = v_tail_4040_;
v_b_4024_ = v___x_4041_;
goto _start;
}
else
{
lean_dec_ref(v___x_4022_);
lean_dec_ref(v_a_4021_);
lean_dec(v_id_4019_);
return v___x_4059_;
}
}
}
}
}
v___jp_4033_:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; 
v___x_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4035_, 0, v_a_4034_);
v___x_4036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4035_);
return v___x_4036_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg___boxed(lean_object* v_id_4061_, lean_object* v_danglingDot_4062_, lean_object* v_a_4063_, lean_object* v___x_4064_, lean_object* v_as_x27_4065_, lean_object* v_b_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_){
_start:
{
uint8_t v_danglingDot_boxed_4075_; lean_object* v_res_4076_; 
v_danglingDot_boxed_4075_ = lean_unbox(v_danglingDot_4062_);
v_res_4076_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4061_, v_danglingDot_boxed_4075_, v_a_4063_, v___x_4064_, v_as_x27_4065_, v_b_4066_, v___y_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_);
lean_dec(v___y_4073_);
lean_dec_ref(v___y_4072_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
lean_dec_ref(v___y_4069_);
lean_dec(v___y_4068_);
lean_dec_ref(v___y_4067_);
lean_dec(v_as_x27_4065_);
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(lean_object* v_id_4077_, uint8_t v_danglingDot_4078_, lean_object* v_a_4079_, lean_object* v___x_4080_, lean_object* v_as_4081_, lean_object* v_as_x27_4082_, lean_object* v_b_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_){
_start:
{
lean_object* v_a_4093_; 
if (lean_obj_tag(v_as_x27_4082_) == 0)
{
lean_object* v___x_4096_; lean_object* v___x_4097_; 
lean_dec_ref(v___x_4080_);
lean_dec_ref(v_a_4079_);
lean_dec(v_id_4077_);
v___x_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4096_, 0, v_b_4083_);
v___x_4097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4096_);
return v___x_4097_;
}
else
{
lean_object* v_head_4098_; lean_object* v_tail_4099_; lean_object* v___x_4100_; 
v_head_4098_ = lean_ctor_get(v_as_x27_4082_, 0);
v_tail_4099_ = lean_ctor_get(v_as_x27_4082_, 1);
v___x_4100_ = lean_box(0);
if (lean_obj_tag(v_head_4098_) == 0)
{
lean_object* v_ns_4101_; lean_object* v___x_4102_; lean_object* v___f_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v_ns_4101_ = lean_ctor_get(v_head_4098_, 0);
v___x_4102_ = lean_box(v_danglingDot_4078_);
lean_inc_ref_n(v___x_4080_, 2);
lean_inc_ref(v_a_4079_);
lean_inc(v_id_4077_);
lean_inc(v_ns_4101_);
v___f_4103_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed), 16, 6);
lean_closure_set(v___f_4103_, 0, v___x_4100_);
lean_closure_set(v___f_4103_, 1, v_ns_4101_);
lean_closure_set(v___f_4103_, 2, v_id_4077_);
lean_closure_set(v___f_4103_, 3, v___x_4102_);
lean_closure_set(v___f_4103_, 4, v_a_4079_);
lean_closure_set(v___f_4103_, 5, v___x_4080_);
v___x_4104_ = l_Lean_getAliasState(v___x_4080_);
v___x_4105_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4104_, v___f_4103_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_);
if (lean_obj_tag(v___x_4105_) == 0)
{
lean_object* v_a_4106_; 
v_a_4106_ = lean_ctor_get(v___x_4105_, 0);
lean_inc(v_a_4106_);
lean_dec_ref_known(v___x_4105_, 1);
if (lean_obj_tag(v_a_4106_) == 0)
{
lean_object* v_a_4107_; 
lean_dec_ref(v___x_4080_);
lean_dec_ref(v_a_4079_);
lean_dec(v_id_4077_);
v_a_4107_ = lean_ctor_get(v_a_4106_, 0);
lean_inc(v_a_4107_);
lean_dec_ref_known(v_a_4106_, 1);
v_a_4093_ = v_a_4107_;
goto v___jp_4092_;
}
else
{
lean_object* v___x_4108_; 
lean_dec_ref_known(v_a_4106_, 1);
v___x_4108_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4077_, v_danglingDot_4078_, v_a_4079_, v___x_4080_, v_tail_4099_, v___x_4100_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_);
return v___x_4108_;
}
}
else
{
lean_dec_ref(v___x_4080_);
lean_dec_ref(v_a_4079_);
lean_dec(v_id_4077_);
return v___x_4105_;
}
}
else
{
lean_object* v_id_4109_; lean_object* v_declName_4110_; uint8_t v___x_4111_; 
v_id_4109_ = lean_ctor_get(v_head_4098_, 0);
v_declName_4110_ = lean_ctor_get(v_head_4098_, 1);
lean_inc(v_declName_4110_);
lean_inc_ref(v___x_4080_);
v___x_4111_ = l_Lean_Server_Completion_allowCompletion(v_a_4079_, v___x_4080_, v_declName_4110_);
if (v___x_4111_ == 0)
{
lean_object* v___x_4112_; 
v___x_4112_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4077_, v_danglingDot_4078_, v_a_4079_, v___x_4080_, v_tail_4099_, v___x_4100_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_);
return v___x_4112_;
}
else
{
uint8_t v___x_4113_; 
v___x_4113_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_4077_, v_id_4109_, v_danglingDot_4078_);
if (v___x_4113_ == 0)
{
lean_object* v___x_4114_; 
v___x_4114_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4077_, v_danglingDot_4078_, v_a_4079_, v___x_4080_, v_tail_4099_, v___x_4100_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_);
return v___x_4114_;
}
else
{
lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; 
v___x_4115_ = l_Lean_Name_getString_x21(v_id_4109_);
v___x_4116_ = lean_box(0);
v___x_4117_ = l_Lean_Name_str___override(v___x_4116_, v___x_4115_);
lean_inc(v_declName_4110_);
v___x_4118_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_4117_, v_declName_4110_, v___y_4084_, v___y_4085_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v___x_4119_; 
lean_dec_ref_known(v___x_4118_, 1);
v___x_4119_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4077_, v_danglingDot_4078_, v_a_4079_, v___x_4080_, v_tail_4099_, v___x_4100_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_);
return v___x_4119_;
}
else
{
lean_dec_ref(v___x_4080_);
lean_dec_ref(v_a_4079_);
lean_dec(v_id_4077_);
return v___x_4118_;
}
}
}
}
}
v___jp_4092_:
{
lean_object* v___x_4094_; lean_object* v___x_4095_; 
v___x_4094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4094_, 0, v_a_4093_);
v___x_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4095_, 0, v___x_4094_);
return v___x_4095_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___boxed(lean_object* v_id_4120_, lean_object* v_danglingDot_4121_, lean_object* v_a_4122_, lean_object* v___x_4123_, lean_object* v_as_4124_, lean_object* v_as_x27_4125_, lean_object* v_b_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_){
_start:
{
uint8_t v_danglingDot_boxed_4135_; lean_object* v_res_4136_; 
v_danglingDot_boxed_4135_ = lean_unbox(v_danglingDot_4121_);
v_res_4136_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v_id_4120_, v_danglingDot_boxed_4135_, v_a_4122_, v___x_4123_, v_as_4124_, v_as_x27_4125_, v_b_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_);
lean_dec(v___y_4133_);
lean_dec_ref(v___y_4132_);
lean_dec(v___y_4131_);
lean_dec_ref(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec(v_as_x27_4125_);
lean_dec(v_as_4124_);
return v_res_4136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(lean_object* v_ctx_4137_, lean_object* v_stx_4138_, lean_object* v_id_4139_, lean_object* v_hoverInfo_4140_, uint8_t v_danglingDot_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_){
_start:
{
lean_object* v___y_4151_; lean_object* v___y_4152_; lean_object* v___y_4153_; uint8_t v___y_4154_; lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; lean_object* v_id_4202_; uint8_t v_danglingDot_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; lean_object* v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v_id_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; lean_object* v___y_4228_; lean_object* v___y_4229_; uint8_t v___x_4233_; 
v___x_4233_ = l_Lean_Name_hasMacroScopes(v_id_4139_);
if (v___x_4233_ == 0)
{
v_id_4222_ = v_id_4139_;
v___y_4223_ = v_a_4142_;
v___y_4224_ = v_a_4143_;
v___y_4225_ = v_a_4144_;
v___y_4226_ = v_a_4145_;
v___y_4227_ = v_a_4146_;
v___y_4228_ = v_a_4147_;
v___y_4229_ = v_a_4148_;
goto v___jp_4221_;
}
else
{
lean_object* v___x_4234_; 
v___x_4234_ = l_Lean_Syntax_getHeadInfo(v_stx_4138_);
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v_id_4235_; 
lean_dec_ref_known(v___x_4234_, 4);
v_id_4235_ = l_Lean_Name_eraseMacroScopes(v_id_4139_);
lean_dec(v_id_4139_);
v_id_4222_ = v_id_4235_;
v___y_4223_ = v_a_4142_;
v___y_4224_ = v_a_4143_;
v___y_4225_ = v_a_4144_;
v___y_4226_ = v_a_4145_;
v___y_4227_ = v_a_4146_;
v___y_4228_ = v_a_4147_;
v___y_4229_ = v_a_4148_;
goto v___jp_4221_;
}
else
{
lean_object* v___x_4236_; lean_object* v___x_4237_; 
lean_dec(v___x_4234_);
lean_dec(v_hoverInfo_4140_);
lean_dec(v_id_4139_);
lean_dec_ref(v_ctx_4137_);
v___x_4236_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_4237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4236_);
return v___x_4237_;
}
}
v___jp_4150_:
{
lean_object* v___x_4162_; lean_object* v_env_4163_; lean_object* v___x_4164_; 
v___x_4162_ = lean_st_ref_get(v___y_4160_);
v_env_4163_ = lean_ctor_get(v___x_4162_, 0);
lean_inc_ref(v_env_4163_);
lean_dec(v___x_4162_);
v___x_4164_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___y_4158_, v___y_4157_, v___y_4151_, v___y_4159_, v___y_4152_, v___y_4153_, v___y_4155_, v___y_4160_);
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_object* v_a_4165_; 
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
if (lean_obj_tag(v_a_4165_) == 0)
{
lean_dec_ref(v_env_4163_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4156_);
lean_dec_ref(v_ctx_4137_);
return v___x_4164_;
}
else
{
lean_object* v___x_4166_; lean_object* v_a_4167_; 
lean_dec_ref_known(v___x_4164_, 1);
v___x_4166_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v___y_4159_);
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
if (lean_obj_tag(v_a_4167_) == 0)
{
lean_dec_ref(v_env_4163_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4156_);
lean_dec_ref(v_ctx_4137_);
return v___x_4166_;
}
else
{
lean_object* v___x_4168_; 
lean_dec_ref(v___x_4166_);
lean_inc_ref(v_env_4163_);
v___x_4168_ = l_Lean_Server_Completion_getEligibleHeaderDecls(v_env_4163_, v___y_4152_, v___y_4153_, v___y_4155_, v___y_4160_);
if (lean_obj_tag(v___x_4168_) == 0)
{
lean_object* v_toCommandContextInfo_4169_; lean_object* v_a_4170_; lean_object* v_currNamespace_4171_; lean_object* v_openDecls_4172_; lean_object* v___f_4173_; lean_object* v___f_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v_toCommandContextInfo_4169_ = lean_ctor_get(v_ctx_4137_, 0);
v_a_4170_ = lean_ctor_get(v___x_4168_, 0);
lean_inc_n(v_a_4170_, 2);
lean_dec_ref_known(v___x_4168_, 1);
v_currNamespace_4171_ = lean_ctor_get(v_toCommandContextInfo_4169_, 5);
v_openDecls_4172_ = lean_ctor_get(v_toCommandContextInfo_4169_, 6);
lean_inc_ref_n(v_env_4163_, 2);
v___f_4173_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed), 12, 2);
lean_closure_set(v___f_4173_, 0, v_a_4170_);
lean_closure_set(v___f_4173_, 1, v_env_4163_);
lean_inc(v_currNamespace_4171_);
v___f_4174_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed), 13, 3);
lean_closure_set(v___f_4174_, 0, v___y_4156_);
lean_closure_set(v___f_4174_, 1, v___f_4173_);
lean_closure_set(v___f_4174_, 2, v_currNamespace_4171_);
v___x_4175_ = lean_box(0);
lean_inc(v___y_4161_);
v___x_4176_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v___y_4161_, v___y_4154_, v_a_4170_, v_env_4163_, v_openDecls_4172_, v_openDecls_4172_, v___x_4175_, v___y_4157_, v___y_4151_, v___y_4159_, v___y_4152_, v___y_4153_, v___y_4155_, v___y_4160_);
if (lean_obj_tag(v___x_4176_) == 0)
{
lean_object* v_a_4177_; 
v_a_4177_ = lean_ctor_get(v___x_4176_, 0);
if (lean_obj_tag(v_a_4177_) == 0)
{
lean_dec_ref(v___f_4174_);
lean_dec_ref(v_env_4163_);
lean_dec(v___y_4161_);
lean_dec_ref(v_ctx_4137_);
return v___x_4176_;
}
else
{
lean_object* v___x_4178_; lean_object* v___x_4179_; 
lean_dec_ref_known(v___x_4176_, 1);
lean_inc_ref(v_env_4163_);
v___x_4178_ = l_Lean_getAliasState(v_env_4163_);
v___x_4179_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4178_, v___f_4174_, v___y_4157_, v___y_4151_, v___y_4159_, v___y_4152_, v___y_4153_, v___y_4155_, v___y_4160_);
if (lean_obj_tag(v___x_4179_) == 0)
{
lean_object* v_a_4180_; 
v_a_4180_ = lean_ctor_get(v___x_4179_, 0);
if (lean_obj_tag(v_a_4180_) == 0)
{
lean_dec_ref(v_env_4163_);
lean_dec(v___y_4161_);
lean_dec_ref(v_ctx_4137_);
return v___x_4179_;
}
else
{
lean_dec_ref_known(v___x_4179_, 1);
if (v___y_4154_ == 0)
{
if (lean_obj_tag(v___y_4161_) == 1)
{
lean_object* v_pre_4181_; 
v_pre_4181_ = lean_ctor_get(v___y_4161_, 0);
if (lean_obj_tag(v_pre_4181_) == 0)
{
lean_object* v_str_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; size_t v_sz_4185_; size_t v___x_4186_; lean_object* v___x_4187_; 
v_str_4182_ = lean_ctor_get(v___y_4161_, 1);
v___x_4183_ = l_Lean_Parser_getTokenTable(v_env_4163_);
v___x_4184_ = l_Lean_Data_Trie_findPrefix___redArg(v___x_4183_, v_str_4182_);
lean_dec_ref(v___x_4183_);
v_sz_4185_ = lean_array_size(v___x_4184_);
v___x_4186_ = ((size_t)0ULL);
v___x_4187_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v___x_4184_, v_sz_4185_, v___x_4186_, v___x_4175_, v___y_4157_, v___y_4151_);
lean_dec_ref(v___x_4184_);
if (lean_obj_tag(v___x_4187_) == 0)
{
lean_object* v_a_4188_; 
v_a_4188_ = lean_ctor_get(v___x_4187_, 0);
if (lean_obj_tag(v_a_4188_) == 0)
{
lean_dec_ref_known(v___y_4161_, 2);
lean_dec_ref(v_ctx_4137_);
return v___x_4187_;
}
else
{
lean_object* v___x_4189_; 
lean_dec_ref_known(v___x_4187_, 1);
v___x_4189_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4137_, v___y_4161_, v___y_4154_, v___y_4157_, v___y_4151_, v___y_4159_, v___y_4152_, v___y_4153_, v___y_4155_, v___y_4160_);
return v___x_4189_;
}
}
else
{
lean_dec_ref_known(v___y_4161_, 2);
lean_dec_ref(v_ctx_4137_);
return v___x_4187_;
}
}
else
{
lean_object* v___x_4190_; 
lean_dec_ref(v_env_4163_);
v___x_4190_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4137_, v___y_4161_, v___y_4154_, v___y_4157_, v___y_4151_, v___y_4159_, v___y_4152_, v___y_4153_, v___y_4155_, v___y_4160_);
return v___x_4190_;
}
}
else
{
lean_object* v___x_4191_; 
lean_dec_ref(v_env_4163_);
v___x_4191_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4137_, v___y_4161_, v___y_4154_, v___y_4157_, v___y_4151_, v___y_4159_, v___y_4152_, v___y_4153_, v___y_4155_, v___y_4160_);
return v___x_4191_;
}
}
else
{
lean_object* v___x_4192_; 
lean_dec_ref(v_env_4163_);
v___x_4192_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4137_, v___y_4161_, v___y_4154_, v___y_4157_, v___y_4151_, v___y_4159_, v___y_4152_, v___y_4153_, v___y_4155_, v___y_4160_);
return v___x_4192_;
}
}
}
else
{
lean_dec_ref(v_env_4163_);
lean_dec(v___y_4161_);
lean_dec_ref(v_ctx_4137_);
return v___x_4179_;
}
}
}
else
{
lean_dec_ref(v___f_4174_);
lean_dec_ref(v_env_4163_);
lean_dec(v___y_4161_);
lean_dec_ref(v_ctx_4137_);
return v___x_4176_;
}
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
lean_dec_ref(v_env_4163_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4156_);
lean_dec_ref(v_ctx_4137_);
v_a_4193_ = lean_ctor_get(v___x_4168_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4168_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4168_);
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
}
}
else
{
lean_dec_ref(v_env_4163_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4156_);
lean_dec_ref(v_ctx_4137_);
return v___x_4164_;
}
}
v___jp_4201_:
{
lean_object* v___x_4211_; lean_object* v___f_4212_; lean_object* v___x_4213_; lean_object* v___f_4214_; uint8_t v___x_4215_; 
v___x_4211_ = lean_box(v_danglingDot_4203_);
lean_inc_n(v_id_4202_, 2);
lean_inc_ref(v_ctx_4137_);
v___f_4212_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed), 13, 3);
lean_closure_set(v___f_4212_, 0, v_ctx_4137_);
lean_closure_set(v___f_4212_, 1, v_id_4202_);
lean_closure_set(v___f_4212_, 2, v___x_4211_);
v___x_4213_ = lean_box(v_danglingDot_4203_);
v___f_4214_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4214_, 0, v_id_4202_);
lean_closure_set(v___f_4214_, 1, v___x_4213_);
v___x_4215_ = l_Lean_Name_isAtomic(v_id_4202_);
if (v___x_4215_ == 0)
{
v___y_4151_ = v___y_4205_;
v___y_4152_ = v___y_4207_;
v___y_4153_ = v___y_4208_;
v___y_4154_ = v_danglingDot_4203_;
v___y_4155_ = v___y_4209_;
v___y_4156_ = v___f_4214_;
v___y_4157_ = v___y_4204_;
v___y_4158_ = v___f_4212_;
v___y_4159_ = v___y_4206_;
v___y_4160_ = v___y_4210_;
v___y_4161_ = v_id_4202_;
goto v___jp_4150_;
}
else
{
lean_object* v_lctx_4216_; lean_object* v_decls_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
v_lctx_4216_ = lean_ctor_get(v___y_4207_, 2);
v_decls_4217_ = lean_ctor_get(v_lctx_4216_, 1);
v___x_4218_ = lean_box(0);
v___x_4219_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(v_id_4202_, v_danglingDot_4203_, v_decls_4217_, v___x_4218_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_);
if (lean_obj_tag(v___x_4219_) == 0)
{
lean_object* v_a_4220_; 
v_a_4220_ = lean_ctor_get(v___x_4219_, 0);
if (lean_obj_tag(v_a_4220_) == 0)
{
lean_dec_ref(v___f_4214_);
lean_dec_ref(v___f_4212_);
lean_dec(v_id_4202_);
lean_dec_ref(v_ctx_4137_);
return v___x_4219_;
}
else
{
lean_dec_ref_known(v___x_4219_, 1);
v___y_4151_ = v___y_4205_;
v___y_4152_ = v___y_4207_;
v___y_4153_ = v___y_4208_;
v___y_4154_ = v_danglingDot_4203_;
v___y_4155_ = v___y_4209_;
v___y_4156_ = v___f_4214_;
v___y_4157_ = v___y_4204_;
v___y_4158_ = v___f_4212_;
v___y_4159_ = v___y_4206_;
v___y_4160_ = v___y_4210_;
v___y_4161_ = v_id_4202_;
goto v___jp_4150_;
}
}
else
{
lean_dec_ref(v___f_4214_);
lean_dec_ref(v___f_4212_);
lean_dec(v_id_4202_);
lean_dec_ref(v_ctx_4137_);
return v___x_4219_;
}
}
}
v___jp_4221_:
{
if (lean_obj_tag(v_hoverInfo_4140_) == 1)
{
lean_object* v_delta_4230_; lean_object* v_id_4231_; uint8_t v_danglingDot_4232_; 
v_delta_4230_ = lean_ctor_get(v_hoverInfo_4140_, 0);
lean_inc(v_delta_4230_);
lean_dec_ref_known(v_hoverInfo_4140_, 1);
v_id_4231_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(v_id_4222_, v_delta_4230_);
v_danglingDot_4232_ = 0;
v_id_4202_ = v_id_4231_;
v_danglingDot_4203_ = v_danglingDot_4232_;
v___y_4204_ = v___y_4223_;
v___y_4205_ = v___y_4224_;
v___y_4206_ = v___y_4225_;
v___y_4207_ = v___y_4226_;
v___y_4208_ = v___y_4227_;
v___y_4209_ = v___y_4228_;
v___y_4210_ = v___y_4229_;
goto v___jp_4201_;
}
else
{
lean_dec(v_hoverInfo_4140_);
v_id_4202_ = v_id_4222_;
v_danglingDot_4203_ = v_danglingDot_4141_;
v___y_4204_ = v___y_4223_;
v___y_4205_ = v___y_4224_;
v___y_4206_ = v___y_4225_;
v___y_4207_ = v___y_4226_;
v___y_4208_ = v___y_4227_;
v___y_4209_ = v___y_4228_;
v___y_4210_ = v___y_4229_;
goto v___jp_4201_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed(lean_object* v_ctx_4238_, lean_object* v_stx_4239_, lean_object* v_id_4240_, lean_object* v_hoverInfo_4241_, lean_object* v_danglingDot_4242_, lean_object* v_a_4243_, lean_object* v_a_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_, lean_object* v_a_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_){
_start:
{
uint8_t v_danglingDot_boxed_4251_; lean_object* v_res_4252_; 
v_danglingDot_boxed_4251_ = lean_unbox(v_danglingDot_4242_);
v_res_4252_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(v_ctx_4238_, v_stx_4239_, v_id_4240_, v_hoverInfo_4241_, v_danglingDot_boxed_4251_, v_a_4243_, v_a_4244_, v_a_4245_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_);
lean_dec(v_a_4249_);
lean_dec_ref(v_a_4248_);
lean_dec(v_a_4247_);
lean_dec_ref(v_a_4246_);
lean_dec_ref(v_a_4245_);
lean_dec(v_a_4244_);
lean_dec_ref(v_a_4243_);
lean_dec(v_stx_4239_);
return v_res_4252_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(lean_object* v_a_4253_, lean_object* v___x_4254_, lean_object* v_alias_4255_, lean_object* v_as_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v___x_4265_; 
v___x_4265_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_4253_, v___x_4254_, v_alias_4255_, v_as_4256_, v___y_4257_, v___y_4258_, v___y_4260_, v___y_4261_, v___y_4262_, v___y_4263_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___boxed(lean_object* v_a_4266_, lean_object* v___x_4267_, lean_object* v_alias_4268_, lean_object* v_as_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_){
_start:
{
lean_object* v_res_4278_; 
v_res_4278_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(v_a_4266_, v___x_4267_, v_alias_4268_, v_as_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_);
lean_dec(v___y_4276_);
lean_dec_ref(v___y_4275_);
lean_dec(v___y_4274_);
lean_dec_ref(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec(v_alias_4268_);
lean_dec_ref(v_a_4266_);
return v_res_4278_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(lean_object* v_00_u03b2_4279_, lean_object* v_s_4280_, lean_object* v_f_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_){
_start:
{
lean_object* v___x_4290_; 
v___x_4290_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v_s_4280_, v_f_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_, v___y_4288_);
return v___x_4290_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___boxed(lean_object* v_00_u03b2_4291_, lean_object* v_s_4292_, lean_object* v_f_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_){
_start:
{
lean_object* v_res_4302_; 
v_res_4302_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(v_00_u03b2_4291_, v_s_4292_, v_f_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_, v___y_4298_, v___y_4299_, v___y_4300_);
lean_dec(v___y_4300_);
lean_dec_ref(v___y_4299_);
lean_dec(v___y_4298_);
lean_dec_ref(v___y_4297_);
lean_dec_ref(v___y_4296_);
lean_dec(v___y_4295_);
lean_dec_ref(v___y_4294_);
return v_res_4302_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(lean_object* v_id_4303_, uint8_t v_danglingDot_4304_, lean_object* v_a_4305_, lean_object* v___x_4306_, lean_object* v_as_4307_, lean_object* v_as_x27_4308_, lean_object* v_b_4309_, lean_object* v_a_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v___x_4319_; 
v___x_4319_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v_id_4303_, v_danglingDot_4304_, v_a_4305_, v___x_4306_, v_as_4307_, v_as_x27_4308_, v_b_4309_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_, v___y_4317_);
return v___x_4319_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___boxed(lean_object* v_id_4320_, lean_object* v_danglingDot_4321_, lean_object* v_a_4322_, lean_object* v___x_4323_, lean_object* v_as_4324_, lean_object* v_as_x27_4325_, lean_object* v_b_4326_, lean_object* v_a_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_){
_start:
{
uint8_t v_danglingDot_boxed_4336_; lean_object* v_res_4337_; 
v_danglingDot_boxed_4336_ = lean_unbox(v_danglingDot_4321_);
v_res_4337_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(v_id_4320_, v_danglingDot_boxed_4336_, v_a_4322_, v___x_4323_, v_as_4324_, v_as_x27_4325_, v_b_4326_, v_a_4327_, v___y_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec_ref(v___y_4330_);
lean_dec(v___y_4329_);
lean_dec_ref(v___y_4328_);
lean_dec(v_as_x27_4325_);
lean_dec(v_as_4324_);
return v_res_4337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(lean_object* v_as_4338_, size_t v_sz_4339_, size_t v_i_4340_, lean_object* v_b_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_){
_start:
{
lean_object* v___x_4350_; 
v___x_4350_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v_as_4338_, v_sz_4339_, v_i_4340_, v_b_4341_, v___y_4342_, v___y_4343_);
return v___x_4350_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___boxed(lean_object* v_as_4351_, lean_object* v_sz_4352_, lean_object* v_i_4353_, lean_object* v_b_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_){
_start:
{
size_t v_sz_boxed_4363_; size_t v_i_boxed_4364_; lean_object* v_res_4365_; 
v_sz_boxed_4363_ = lean_unbox_usize(v_sz_4352_);
lean_dec(v_sz_4352_);
v_i_boxed_4364_ = lean_unbox_usize(v_i_4353_);
lean_dec(v_i_4353_);
v_res_4365_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(v_as_4351_, v_sz_boxed_4363_, v_i_boxed_4364_, v_b_4354_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_);
lean_dec(v___y_4361_);
lean_dec_ref(v___y_4360_);
lean_dec(v___y_4359_);
lean_dec_ref(v___y_4358_);
lean_dec_ref(v___y_4357_);
lean_dec(v___y_4356_);
lean_dec_ref(v___y_4355_);
lean_dec_ref(v_as_4351_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(lean_object* v_00_u03b2_4366_, lean_object* v_f_4367_, lean_object* v_x_4368_, lean_object* v_x_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
lean_object* v___x_4378_; 
v___x_4378_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_4367_, v_x_4368_, v_x_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
return v___x_4378_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___boxed(lean_object* v_00_u03b2_4379_, lean_object* v_f_4380_, lean_object* v_x_4381_, lean_object* v_x_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_){
_start:
{
lean_object* v_res_4391_; 
v_res_4391_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(v_00_u03b2_4379_, v_f_4380_, v_x_4381_, v_x_4382_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
lean_dec(v___y_4389_);
lean_dec_ref(v___y_4388_);
lean_dec(v___y_4387_);
lean_dec_ref(v___y_4386_);
lean_dec_ref(v___y_4385_);
lean_dec(v___y_4384_);
lean_dec_ref(v___y_4383_);
return v_res_4391_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(lean_object* v_00_u03b2_4392_, lean_object* v_map_4393_, lean_object* v_f_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_){
_start:
{
lean_object* v___x_4403_; 
v___x_4403_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_4393_, v_f_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_);
return v___x_4403_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4404_, lean_object* v_map_4405_, lean_object* v_f_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_){
_start:
{
lean_object* v_res_4415_; 
v_res_4415_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(v_00_u03b2_4404_, v_map_4405_, v_f_4406_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_);
lean_dec(v___y_4413_);
lean_dec_ref(v___y_4412_);
lean_dec(v___y_4411_);
lean_dec_ref(v___y_4410_);
lean_dec_ref(v___y_4409_);
lean_dec(v___y_4408_);
lean_dec_ref(v___y_4407_);
return v_res_4415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(lean_object* v_00_u03b2_4416_, lean_object* v_f_4417_, lean_object* v_as_4418_, size_t v_i_4419_, size_t v_stop_4420_, lean_object* v_b_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_){
_start:
{
lean_object* v___x_4430_; 
v___x_4430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_4417_, v_as_4418_, v_i_4419_, v_stop_4420_, v_b_4421_, v___y_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_, v___y_4427_, v___y_4428_);
return v___x_4430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_4431_, lean_object* v_f_4432_, lean_object* v_as_4433_, lean_object* v_i_4434_, lean_object* v_stop_4435_, lean_object* v_b_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_){
_start:
{
size_t v_i_boxed_4445_; size_t v_stop_boxed_4446_; lean_object* v_res_4447_; 
v_i_boxed_4445_ = lean_unbox_usize(v_i_4434_);
lean_dec(v_i_4434_);
v_stop_boxed_4446_ = lean_unbox_usize(v_stop_4435_);
lean_dec(v_stop_4435_);
v_res_4447_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(v_00_u03b2_4431_, v_f_4432_, v_as_4433_, v_i_boxed_4445_, v_stop_boxed_4446_, v_b_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
lean_dec(v___y_4443_);
lean_dec_ref(v___y_4442_);
lean_dec(v___y_4441_);
lean_dec_ref(v___y_4440_);
lean_dec_ref(v___y_4439_);
lean_dec(v___y_4438_);
lean_dec_ref(v___y_4437_);
lean_dec_ref(v_as_4433_);
return v_res_4447_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(lean_object* v_id_4448_, uint8_t v_danglingDot_4449_, lean_object* v_a_4450_, lean_object* v___x_4451_, lean_object* v_as_4452_, lean_object* v_as_x27_4453_, lean_object* v_b_4454_, lean_object* v_a_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_){
_start:
{
lean_object* v___x_4464_; 
v___x_4464_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_id_4448_, v_danglingDot_4449_, v_a_4450_, v___x_4451_, v_as_x27_4453_, v_b_4454_, v___y_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_, v___y_4462_);
return v___x_4464_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___boxed(lean_object* v_id_4465_, lean_object* v_danglingDot_4466_, lean_object* v_a_4467_, lean_object* v___x_4468_, lean_object* v_as_4469_, lean_object* v_as_x27_4470_, lean_object* v_b_4471_, lean_object* v_a_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_){
_start:
{
uint8_t v_danglingDot_boxed_4481_; lean_object* v_res_4482_; 
v_danglingDot_boxed_4481_ = lean_unbox(v_danglingDot_4466_);
v_res_4482_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(v_id_4465_, v_danglingDot_boxed_4481_, v_a_4467_, v___x_4468_, v_as_4469_, v_as_x27_4470_, v_b_4471_, v_a_4472_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_, v___y_4479_);
lean_dec(v___y_4479_);
lean_dec_ref(v___y_4478_);
lean_dec(v___y_4477_);
lean_dec_ref(v___y_4476_);
lean_dec_ref(v___y_4475_);
lean_dec(v___y_4474_);
lean_dec_ref(v___y_4473_);
lean_dec(v_as_x27_4470_);
lean_dec(v_as_4469_);
return v_res_4482_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_4483_, lean_object* v_map_4484_, lean_object* v_f_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_){
_start:
{
lean_object* v___x_4495_; 
v___x_4495_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_4484_, v_f_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
return v___x_4495_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_4496_, lean_object* v_map_4497_, lean_object* v_f_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_){
_start:
{
lean_object* v_res_4508_; 
v_res_4508_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(v_00_u03b2_4496_, v_map_4497_, v_f_4498_, v___y_4499_, v___y_4500_, v___y_4501_, v___y_4502_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_);
lean_dec(v___y_4506_);
lean_dec_ref(v___y_4505_);
lean_dec(v___y_4504_);
lean_dec_ref(v___y_4503_);
lean_dec_ref(v___y_4502_);
lean_dec(v___y_4501_);
lean_dec_ref(v___y_4500_);
return v_res_4508_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(lean_object* v_map_4509_, lean_object* v_f_4510_, lean_object* v_init_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_){
_start:
{
lean_object* v___x_4520_; 
v___x_4520_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4510_, v_map_4509_, v_init_4511_, v___y_4512_, v___y_4513_, v___y_4514_, v___y_4515_, v___y_4516_, v___y_4517_, v___y_4518_);
return v___x_4520_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_map_4521_, lean_object* v_f_4522_, lean_object* v_init_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_){
_start:
{
lean_object* v_res_4532_; 
v_res_4532_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(v_map_4521_, v_f_4522_, v_init_4523_, v___y_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_);
lean_dec(v___y_4530_);
lean_dec_ref(v___y_4529_);
lean_dec(v___y_4528_);
lean_dec_ref(v___y_4527_);
lean_dec_ref(v___y_4526_);
lean_dec(v___y_4525_);
lean_dec_ref(v___y_4524_);
return v_res_4532_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(lean_object* v_00_u03c3_4533_, lean_object* v_00_u03b2_4534_, lean_object* v_map_4535_, lean_object* v_f_4536_, lean_object* v_init_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_){
_start:
{
lean_object* v___x_4546_; 
v___x_4546_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4536_, v_map_4535_, v_init_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_);
return v___x_4546_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03c3_4547_, lean_object* v_00_u03b2_4548_, lean_object* v_map_4549_, lean_object* v_f_4550_, lean_object* v_init_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(v_00_u03c3_4547_, v_00_u03b2_4548_, v_map_4549_, v_f_4550_, v_init_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_);
lean_dec(v___y_4558_);
lean_dec_ref(v___y_4557_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
lean_dec_ref(v___y_4554_);
lean_dec(v___y_4553_);
lean_dec_ref(v___y_4552_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(lean_object* v_id_4561_, uint8_t v_danglingDot_4562_, lean_object* v_as_4563_, size_t v_sz_4564_, size_t v_i_4565_, lean_object* v_b_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_){
_start:
{
lean_object* v___x_4575_; 
v___x_4575_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_4561_, v_danglingDot_4562_, v_as_4563_, v_sz_4564_, v_i_4565_, v_b_4566_, v___y_4567_, v___y_4568_);
return v___x_4575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___boxed(lean_object* v_id_4576_, lean_object* v_danglingDot_4577_, lean_object* v_as_4578_, lean_object* v_sz_4579_, lean_object* v_i_4580_, lean_object* v_b_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_){
_start:
{
uint8_t v_danglingDot_boxed_4590_; size_t v_sz_boxed_4591_; size_t v_i_boxed_4592_; lean_object* v_res_4593_; 
v_danglingDot_boxed_4590_ = lean_unbox(v_danglingDot_4577_);
v_sz_boxed_4591_ = lean_unbox_usize(v_sz_4579_);
lean_dec(v_sz_4579_);
v_i_boxed_4592_ = lean_unbox_usize(v_i_4580_);
lean_dec(v_i_4580_);
v_res_4593_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(v_id_4576_, v_danglingDot_boxed_4590_, v_as_4578_, v_sz_boxed_4591_, v_i_boxed_4592_, v_b_4581_, v___y_4582_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_);
lean_dec(v___y_4588_);
lean_dec_ref(v___y_4587_);
lean_dec(v___y_4586_);
lean_dec_ref(v___y_4585_);
lean_dec_ref(v___y_4584_);
lean_dec(v___y_4583_);
lean_dec_ref(v___y_4582_);
lean_dec_ref(v_as_4578_);
lean_dec(v_id_4576_);
return v_res_4593_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(lean_object* v_map_4594_, lean_object* v_f_4595_, lean_object* v_init_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_){
_start:
{
lean_object* v___x_4606_; 
v___x_4606_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4595_, v_map_4594_, v_init_4596_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_);
return v___x_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object* v_map_4607_, lean_object* v_f_4608_, lean_object* v_init_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_){
_start:
{
lean_object* v_res_4619_; 
v_res_4619_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(v_map_4607_, v_f_4608_, v_init_4609_, v___y_4610_, v___y_4611_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_);
lean_dec(v___y_4617_);
lean_dec_ref(v___y_4616_);
lean_dec(v___y_4615_);
lean_dec_ref(v___y_4614_);
lean_dec_ref(v___y_4613_);
lean_dec(v___y_4612_);
lean_dec_ref(v___y_4611_);
return v_res_4619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(lean_object* v_00_u03c3_4620_, lean_object* v_00_u03b2_4621_, lean_object* v_map_4622_, lean_object* v_f_4623_, lean_object* v_init_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_){
_start:
{
lean_object* v___x_4634_; 
v___x_4634_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4623_, v_map_4622_, v_init_4624_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_, v___y_4629_, v___y_4630_, v___y_4631_, v___y_4632_);
return v___x_4634_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___boxed(lean_object* v_00_u03c3_4635_, lean_object* v_00_u03b2_4636_, lean_object* v_map_4637_, lean_object* v_f_4638_, lean_object* v_init_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_){
_start:
{
lean_object* v_res_4649_; 
v_res_4649_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(v_00_u03c3_4635_, v_00_u03b2_4636_, v_map_4637_, v_f_4638_, v_init_4639_, v___y_4640_, v___y_4641_, v___y_4642_, v___y_4643_, v___y_4644_, v___y_4645_, v___y_4646_, v___y_4647_);
lean_dec(v___y_4647_);
lean_dec_ref(v___y_4646_);
lean_dec(v___y_4645_);
lean_dec_ref(v___y_4644_);
lean_dec_ref(v___y_4643_);
lean_dec(v___y_4642_);
lean_dec_ref(v___y_4641_);
return v_res_4649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(lean_object* v_00_u03c3_4650_, lean_object* v_00_u03b1_4651_, lean_object* v_00_u03b2_4652_, lean_object* v_f_4653_, lean_object* v_x_4654_, lean_object* v_x_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_){
_start:
{
lean_object* v___x_4664_; 
v___x_4664_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4653_, v_x_4654_, v_x_4655_, v___y_4656_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_);
return v___x_4664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___boxed(lean_object* v_00_u03c3_4665_, lean_object* v_00_u03b1_4666_, lean_object* v_00_u03b2_4667_, lean_object* v_f_4668_, lean_object* v_x_4669_, lean_object* v_x_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_){
_start:
{
lean_object* v_res_4679_; 
v_res_4679_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(v_00_u03c3_4665_, v_00_u03b1_4666_, v_00_u03b2_4667_, v_f_4668_, v_x_4669_, v_x_4670_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_, v___y_4676_, v___y_4677_);
lean_dec(v___y_4677_);
lean_dec_ref(v___y_4676_);
lean_dec(v___y_4675_);
lean_dec_ref(v___y_4674_);
lean_dec_ref(v___y_4673_);
lean_dec(v___y_4672_);
lean_dec_ref(v___y_4671_);
return v_res_4679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(lean_object* v_id_4680_, uint8_t v_danglingDot_4681_, lean_object* v_as_4682_, size_t v_sz_4683_, size_t v_i_4684_, lean_object* v_b_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v___x_4694_; 
v___x_4694_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_4680_, v_danglingDot_4681_, v_as_4682_, v_sz_4683_, v_i_4684_, v_b_4685_, v___y_4686_, v___y_4687_);
return v___x_4694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___boxed(lean_object* v_id_4695_, lean_object* v_danglingDot_4696_, lean_object* v_as_4697_, lean_object* v_sz_4698_, lean_object* v_i_4699_, lean_object* v_b_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_){
_start:
{
uint8_t v_danglingDot_boxed_4709_; size_t v_sz_boxed_4710_; size_t v_i_boxed_4711_; lean_object* v_res_4712_; 
v_danglingDot_boxed_4709_ = lean_unbox(v_danglingDot_4696_);
v_sz_boxed_4710_ = lean_unbox_usize(v_sz_4698_);
lean_dec(v_sz_4698_);
v_i_boxed_4711_ = lean_unbox_usize(v_i_4699_);
lean_dec(v_i_4699_);
v_res_4712_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(v_id_4695_, v_danglingDot_boxed_4709_, v_as_4697_, v_sz_boxed_4710_, v_i_boxed_4711_, v_b_4700_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_, v___y_4706_, v___y_4707_);
lean_dec(v___y_4707_);
lean_dec_ref(v___y_4706_);
lean_dec(v___y_4705_);
lean_dec_ref(v___y_4704_);
lean_dec_ref(v___y_4703_);
lean_dec(v___y_4702_);
lean_dec_ref(v___y_4701_);
lean_dec_ref(v_as_4697_);
lean_dec(v_id_4695_);
return v_res_4712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(lean_object* v_00_u03c3_4713_, lean_object* v_00_u03b1_4714_, lean_object* v_00_u03b2_4715_, lean_object* v_f_4716_, lean_object* v_x_4717_, lean_object* v_x_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_){
_start:
{
lean_object* v___x_4728_; 
v___x_4728_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4716_, v_x_4717_, v_x_4718_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_, v___y_4726_);
return v___x_4728_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___boxed(lean_object* v_00_u03c3_4729_, lean_object* v_00_u03b1_4730_, lean_object* v_00_u03b2_4731_, lean_object* v_f_4732_, lean_object* v_x_4733_, lean_object* v_x_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_){
_start:
{
lean_object* v_res_4744_; 
v_res_4744_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(v_00_u03c3_4729_, v_00_u03b1_4730_, v_00_u03b2_4731_, v_f_4732_, v_x_4733_, v_x_4734_, v___y_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_, v___y_4740_, v___y_4741_, v___y_4742_);
lean_dec(v___y_4742_);
lean_dec_ref(v___y_4741_);
lean_dec(v___y_4740_);
lean_dec_ref(v___y_4739_);
lean_dec_ref(v___y_4738_);
lean_dec(v___y_4737_);
lean_dec_ref(v___y_4736_);
return v_res_4744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(lean_object* v_00_u03b1_4745_, lean_object* v_00_u03b2_4746_, lean_object* v_00_u03c3_4747_, lean_object* v_f_4748_, lean_object* v_as_4749_, size_t v_i_4750_, size_t v_stop_4751_, lean_object* v_b_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_){
_start:
{
lean_object* v___x_4761_; 
v___x_4761_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_4748_, v_as_4749_, v_i_4750_, v_stop_4751_, v_b_4752_, v___y_4753_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_, v___y_4759_);
return v___x_4761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___boxed(lean_object* v_00_u03b1_4762_, lean_object* v_00_u03b2_4763_, lean_object* v_00_u03c3_4764_, lean_object* v_f_4765_, lean_object* v_as_4766_, lean_object* v_i_4767_, lean_object* v_stop_4768_, lean_object* v_b_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_){
_start:
{
size_t v_i_boxed_4778_; size_t v_stop_boxed_4779_; lean_object* v_res_4780_; 
v_i_boxed_4778_ = lean_unbox_usize(v_i_4767_);
lean_dec(v_i_4767_);
v_stop_boxed_4779_ = lean_unbox_usize(v_stop_4768_);
lean_dec(v_stop_4768_);
v_res_4780_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(v_00_u03b1_4762_, v_00_u03b2_4763_, v_00_u03c3_4764_, v_f_4765_, v_as_4766_, v_i_boxed_4778_, v_stop_boxed_4779_, v_b_4769_, v___y_4770_, v___y_4771_, v___y_4772_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
lean_dec(v___y_4776_);
lean_dec_ref(v___y_4775_);
lean_dec(v___y_4774_);
lean_dec_ref(v___y_4773_);
lean_dec_ref(v___y_4772_);
lean_dec(v___y_4771_);
lean_dec_ref(v___y_4770_);
lean_dec_ref(v_as_4766_);
return v_res_4780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(lean_object* v_00_u03c3_4781_, lean_object* v_00_u03b1_4782_, lean_object* v_00_u03b2_4783_, lean_object* v_f_4784_, lean_object* v_keys_4785_, lean_object* v_vals_4786_, lean_object* v_heq_4787_, lean_object* v_i_4788_, lean_object* v_acc_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_){
_start:
{
lean_object* v___x_4798_; 
v___x_4798_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_4784_, v_keys_4785_, v_vals_4786_, v_i_4788_, v_acc_4789_, v___y_4790_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_, v___y_4795_, v___y_4796_);
return v___x_4798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___boxed(lean_object** _args){
lean_object* v_00_u03c3_4799_ = _args[0];
lean_object* v_00_u03b1_4800_ = _args[1];
lean_object* v_00_u03b2_4801_ = _args[2];
lean_object* v_f_4802_ = _args[3];
lean_object* v_keys_4803_ = _args[4];
lean_object* v_vals_4804_ = _args[5];
lean_object* v_heq_4805_ = _args[6];
lean_object* v_i_4806_ = _args[7];
lean_object* v_acc_4807_ = _args[8];
lean_object* v___y_4808_ = _args[9];
lean_object* v___y_4809_ = _args[10];
lean_object* v___y_4810_ = _args[11];
lean_object* v___y_4811_ = _args[12];
lean_object* v___y_4812_ = _args[13];
lean_object* v___y_4813_ = _args[14];
lean_object* v___y_4814_ = _args[15];
lean_object* v___y_4815_ = _args[16];
_start:
{
lean_object* v_res_4816_; 
v_res_4816_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(v_00_u03c3_4799_, v_00_u03b1_4800_, v_00_u03b2_4801_, v_f_4802_, v_keys_4803_, v_vals_4804_, v_heq_4805_, v_i_4806_, v_acc_4807_, v___y_4808_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_, v___y_4813_, v___y_4814_);
lean_dec(v___y_4814_);
lean_dec_ref(v___y_4813_);
lean_dec(v___y_4812_);
lean_dec_ref(v___y_4811_);
lean_dec_ref(v___y_4810_);
lean_dec(v___y_4809_);
lean_dec_ref(v___y_4808_);
lean_dec_ref(v_vals_4804_);
lean_dec_ref(v_keys_4803_);
return v_res_4816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(lean_object* v_00_u03b1_4817_, lean_object* v_00_u03b2_4818_, lean_object* v_00_u03c3_4819_, lean_object* v_f_4820_, lean_object* v_as_4821_, size_t v_i_4822_, size_t v_stop_4823_, lean_object* v_b_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_){
_start:
{
lean_object* v___x_4834_; 
v___x_4834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_4820_, v_as_4821_, v_i_4822_, v_stop_4823_, v_b_4824_, v___y_4825_, v___y_4826_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_, v___y_4832_);
return v___x_4834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___boxed(lean_object** _args){
lean_object* v_00_u03b1_4835_ = _args[0];
lean_object* v_00_u03b2_4836_ = _args[1];
lean_object* v_00_u03c3_4837_ = _args[2];
lean_object* v_f_4838_ = _args[3];
lean_object* v_as_4839_ = _args[4];
lean_object* v_i_4840_ = _args[5];
lean_object* v_stop_4841_ = _args[6];
lean_object* v_b_4842_ = _args[7];
lean_object* v___y_4843_ = _args[8];
lean_object* v___y_4844_ = _args[9];
lean_object* v___y_4845_ = _args[10];
lean_object* v___y_4846_ = _args[11];
lean_object* v___y_4847_ = _args[12];
lean_object* v___y_4848_ = _args[13];
lean_object* v___y_4849_ = _args[14];
lean_object* v___y_4850_ = _args[15];
lean_object* v___y_4851_ = _args[16];
_start:
{
size_t v_i_boxed_4852_; size_t v_stop_boxed_4853_; lean_object* v_res_4854_; 
v_i_boxed_4852_ = lean_unbox_usize(v_i_4840_);
lean_dec(v_i_4840_);
v_stop_boxed_4853_ = lean_unbox_usize(v_stop_4841_);
lean_dec(v_stop_4841_);
v_res_4854_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(v_00_u03b1_4835_, v_00_u03b2_4836_, v_00_u03c3_4837_, v_f_4838_, v_as_4839_, v_i_boxed_4852_, v_stop_boxed_4853_, v_b_4842_, v___y_4843_, v___y_4844_, v___y_4845_, v___y_4846_, v___y_4847_, v___y_4848_, v___y_4849_, v___y_4850_);
lean_dec(v___y_4850_);
lean_dec_ref(v___y_4849_);
lean_dec(v___y_4848_);
lean_dec_ref(v___y_4847_);
lean_dec_ref(v___y_4846_);
lean_dec(v___y_4845_);
lean_dec_ref(v___y_4844_);
lean_dec_ref(v_as_4839_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(lean_object* v_00_u03c3_4855_, lean_object* v_00_u03b1_4856_, lean_object* v_00_u03b2_4857_, lean_object* v_f_4858_, lean_object* v_keys_4859_, lean_object* v_vals_4860_, lean_object* v_heq_4861_, lean_object* v_i_4862_, lean_object* v_acc_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_){
_start:
{
lean_object* v___x_4873_; 
v___x_4873_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_4858_, v_keys_4859_, v_vals_4860_, v_i_4862_, v_acc_4863_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
return v___x_4873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___boxed(lean_object** _args){
lean_object* v_00_u03c3_4874_ = _args[0];
lean_object* v_00_u03b1_4875_ = _args[1];
lean_object* v_00_u03b2_4876_ = _args[2];
lean_object* v_f_4877_ = _args[3];
lean_object* v_keys_4878_ = _args[4];
lean_object* v_vals_4879_ = _args[5];
lean_object* v_heq_4880_ = _args[6];
lean_object* v_i_4881_ = _args[7];
lean_object* v_acc_4882_ = _args[8];
lean_object* v___y_4883_ = _args[9];
lean_object* v___y_4884_ = _args[10];
lean_object* v___y_4885_ = _args[11];
lean_object* v___y_4886_ = _args[12];
lean_object* v___y_4887_ = _args[13];
lean_object* v___y_4888_ = _args[14];
lean_object* v___y_4889_ = _args[15];
lean_object* v___y_4890_ = _args[16];
lean_object* v___y_4891_ = _args[17];
_start:
{
lean_object* v_res_4892_; 
v_res_4892_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(v_00_u03c3_4874_, v_00_u03b1_4875_, v_00_u03b2_4876_, v_f_4877_, v_keys_4878_, v_vals_4879_, v_heq_4880_, v_i_4881_, v_acc_4882_, v___y_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_, v___y_4889_, v___y_4890_);
lean_dec(v___y_4890_);
lean_dec_ref(v___y_4889_);
lean_dec(v___y_4888_);
lean_dec_ref(v___y_4887_);
lean_dec_ref(v___y_4886_);
lean_dec(v___y_4885_);
lean_dec_ref(v___y_4884_);
lean_dec_ref(v_vals_4879_);
lean_dec_ref(v_keys_4878_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion(lean_object* v_uri_4893_, lean_object* v_pos_4894_, lean_object* v_completionInfoPos_4895_, lean_object* v_ctx_4896_, lean_object* v_lctx_4897_, lean_object* v_stx_4898_, lean_object* v_id_4899_, lean_object* v_hoverInfo_4900_, uint8_t v_danglingDot_4901_, lean_object* v_a_4902_){
_start:
{
lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; 
v___x_4904_ = lean_box(v_danglingDot_4901_);
lean_inc_ref(v_ctx_4896_);
v___x_4905_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed), 13, 5);
lean_closure_set(v___x_4905_, 0, v_ctx_4896_);
lean_closure_set(v___x_4905_, 1, v_stx_4898_);
lean_closure_set(v___x_4905_, 2, v_id_4899_);
lean_closure_set(v___x_4905_, 3, v_hoverInfo_4900_);
lean_closure_set(v___x_4905_, 4, v___x_4904_);
v___x_4906_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_4893_, v_pos_4894_, v_completionInfoPos_4895_, v_ctx_4896_, v_lctx_4897_, v___x_4905_, v_a_4902_);
return v___x_4906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion___boxed(lean_object* v_uri_4907_, lean_object* v_pos_4908_, lean_object* v_completionInfoPos_4909_, lean_object* v_ctx_4910_, lean_object* v_lctx_4911_, lean_object* v_stx_4912_, lean_object* v_id_4913_, lean_object* v_hoverInfo_4914_, lean_object* v_danglingDot_4915_, lean_object* v_a_4916_, lean_object* v_a_4917_){
_start:
{
uint8_t v_danglingDot_boxed_4918_; lean_object* v_res_4919_; 
v_danglingDot_boxed_4918_ = lean_unbox(v_danglingDot_4915_);
v_res_4919_ = l_Lean_Server_Completion_idCompletion(v_uri_4907_, v_pos_4908_, v_completionInfoPos_4909_, v_ctx_4910_, v_lctx_4911_, v_stx_4912_, v_id_4913_, v_hoverInfo_4914_, v_danglingDot_boxed_4918_, v_a_4916_);
lean_dec_ref(v_a_4916_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(lean_object* v_e_4920_, lean_object* v___y_4921_){
_start:
{
uint8_t v___x_4923_; 
v___x_4923_ = l_Lean_Expr_hasMVar(v_e_4920_);
if (v___x_4923_ == 0)
{
lean_object* v___x_4924_; lean_object* v___x_4925_; 
v___x_4924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4924_, 0, v_e_4920_);
v___x_4925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4925_, 0, v___x_4924_);
return v___x_4925_;
}
else
{
lean_object* v___x_4926_; lean_object* v_mctx_4927_; lean_object* v___x_4928_; lean_object* v_fst_4929_; lean_object* v_snd_4930_; lean_object* v___x_4931_; lean_object* v_cache_4932_; lean_object* v_zetaDeltaFVarIds_4933_; lean_object* v_postponed_4934_; lean_object* v_diag_4935_; lean_object* v_rewriteFires_4936_; lean_object* v___x_4938_; uint8_t v_isShared_4939_; uint8_t v_isSharedCheck_4946_; 
v___x_4926_ = lean_st_ref_get(v___y_4921_);
v_mctx_4927_ = lean_ctor_get(v___x_4926_, 0);
lean_inc_ref(v_mctx_4927_);
lean_dec(v___x_4926_);
v___x_4928_ = l_Lean_instantiateMVarsCore(v_mctx_4927_, v_e_4920_);
v_fst_4929_ = lean_ctor_get(v___x_4928_, 0);
lean_inc(v_fst_4929_);
v_snd_4930_ = lean_ctor_get(v___x_4928_, 1);
lean_inc(v_snd_4930_);
lean_dec_ref(v___x_4928_);
v___x_4931_ = lean_st_ref_take(v___y_4921_);
v_cache_4932_ = lean_ctor_get(v___x_4931_, 1);
v_zetaDeltaFVarIds_4933_ = lean_ctor_get(v___x_4931_, 2);
v_postponed_4934_ = lean_ctor_get(v___x_4931_, 3);
v_diag_4935_ = lean_ctor_get(v___x_4931_, 4);
v_rewriteFires_4936_ = lean_ctor_get(v___x_4931_, 5);
v_isSharedCheck_4946_ = !lean_is_exclusive(v___x_4931_);
if (v_isSharedCheck_4946_ == 0)
{
lean_object* v_unused_4947_; 
v_unused_4947_ = lean_ctor_get(v___x_4931_, 0);
lean_dec(v_unused_4947_);
v___x_4938_ = v___x_4931_;
v_isShared_4939_ = v_isSharedCheck_4946_;
goto v_resetjp_4937_;
}
else
{
lean_inc(v_rewriteFires_4936_);
lean_inc(v_diag_4935_);
lean_inc(v_postponed_4934_);
lean_inc(v_zetaDeltaFVarIds_4933_);
lean_inc(v_cache_4932_);
lean_dec(v___x_4931_);
v___x_4938_ = lean_box(0);
v_isShared_4939_ = v_isSharedCheck_4946_;
goto v_resetjp_4937_;
}
v_resetjp_4937_:
{
lean_object* v___x_4941_; 
if (v_isShared_4939_ == 0)
{
lean_ctor_set(v___x_4938_, 0, v_snd_4930_);
v___x_4941_ = v___x_4938_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v_snd_4930_);
lean_ctor_set(v_reuseFailAlloc_4945_, 1, v_cache_4932_);
lean_ctor_set(v_reuseFailAlloc_4945_, 2, v_zetaDeltaFVarIds_4933_);
lean_ctor_set(v_reuseFailAlloc_4945_, 3, v_postponed_4934_);
lean_ctor_set(v_reuseFailAlloc_4945_, 4, v_diag_4935_);
lean_ctor_set(v_reuseFailAlloc_4945_, 5, v_rewriteFires_4936_);
v___x_4941_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; 
v___x_4942_ = lean_st_ref_put(v___y_4921_, v___x_4941_);
v___x_4943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4943_, 0, v_fst_4929_);
v___x_4944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4944_, 0, v___x_4943_);
return v___x_4944_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg___boxed(lean_object* v_e_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_){
_start:
{
lean_object* v_res_4951_; 
v_res_4951_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_e_4948_, v___y_4949_);
lean_dec(v___y_4949_);
return v_res_4951_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(lean_object* v_e_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_){
_start:
{
lean_object* v___x_4961_; 
v___x_4961_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_e_4952_, v___y_4957_);
return v___x_4961_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___boxed(lean_object* v_e_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_){
_start:
{
lean_object* v_res_4971_; 
v_res_4971_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(v_e_4962_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_, v___y_4967_, v___y_4968_, v___y_4969_);
lean_dec(v___y_4969_);
lean_dec_ref(v___y_4968_);
lean_dec(v___y_4967_);
lean_dec_ref(v___y_4966_);
lean_dec_ref(v___y_4965_);
lean_dec(v___y_4964_);
lean_dec_ref(v___y_4963_);
return v_res_4971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0(lean_object* v_a_4972_, lean_object* v_declName_4973_, lean_object* v_decl_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_){
_start:
{
lean_object* v_unnormedTypeName_4983_; uint8_t v___x_4984_; 
v_unnormedTypeName_4983_ = l_Lean_Name_getPrefix(v_declName_4973_);
v___x_4984_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_unnormedTypeName_4983_, v_a_4972_);
if (v___x_4984_ == 0)
{
lean_object* v___x_4985_; lean_object* v___x_4986_; 
lean_dec_ref(v_decl_4974_);
lean_dec(v_declName_4973_);
v___x_4985_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_4986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4986_, 0, v___x_4985_);
return v___x_4986_;
}
else
{
lean_object* v___x_4987_; lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_5053_; 
v___x_4987_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_4973_, v___y_4981_);
v_a_4988_ = lean_ctor_get(v___x_4987_, 0);
v_isSharedCheck_5053_ = !lean_is_exclusive(v___x_4987_);
if (v_isSharedCheck_5053_ == 0)
{
v___x_4990_ = v___x_4987_;
v_isShared_4991_ = v_isSharedCheck_5053_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4987_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_5053_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
if (lean_obj_tag(v_a_4988_) == 1)
{
lean_object* v_val_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_5048_; 
lean_del_object(v___x_4990_);
v_val_4992_ = lean_ctor_get(v_a_4988_, 0);
v_isSharedCheck_5048_ = !lean_is_exclusive(v_a_4988_);
if (v_isSharedCheck_5048_ == 0)
{
v___x_4994_ = v_a_4988_;
v_isShared_4995_ = v_isSharedCheck_5048_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_val_4992_);
lean_dec(v_a_4988_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_5048_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v_info_4996_; lean_object* v_kind_4997_; lean_object* v_tags_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; 
v_info_4996_ = lean_ctor_get(v_decl_4974_, 0);
lean_inc_ref(v_info_4996_);
v_kind_4997_ = lean_ctor_get(v_decl_4974_, 1);
lean_inc_ref(v_kind_4997_);
v_tags_4998_ = lean_ctor_get(v_decl_4974_, 2);
lean_inc_ref(v_tags_4998_);
lean_dec_ref(v_decl_4974_);
v___x_4999_ = l_Lean_Name_getPrefix(v_val_4992_);
lean_dec(v_val_4992_);
v___x_5000_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(v___x_4999_, v_info_4996_, v___y_4978_, v___y_4979_, v___y_4980_, v___y_4981_);
if (lean_obj_tag(v___x_5000_) == 0)
{
lean_object* v_a_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5039_; 
v_a_5001_ = lean_ctor_get(v___x_5000_, 0);
v_isSharedCheck_5039_ = !lean_is_exclusive(v___x_5000_);
if (v_isSharedCheck_5039_ == 0)
{
v___x_5003_ = v___x_5000_;
v_isShared_5004_ = v_isSharedCheck_5039_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_a_5001_);
lean_dec(v___x_5000_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5039_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
uint8_t v___x_5005_; 
v___x_5005_ = lean_unbox(v_a_5001_);
lean_dec(v_a_5001_);
if (v___x_5005_ == 0)
{
lean_object* v___x_5006_; lean_object* v___x_5008_; 
lean_dec_ref(v_tags_4998_);
lean_dec_ref(v_kind_4997_);
lean_dec_ref(v_info_4996_);
lean_del_object(v___x_4994_);
v___x_5006_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5004_ == 0)
{
lean_ctor_set(v___x_5003_, 0, v___x_5006_);
v___x_5008_ = v___x_5003_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5009_; 
v_reuseFailAlloc_5009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5009_, 0, v___x_5006_);
v___x_5008_ = v_reuseFailAlloc_5009_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
return v___x_5008_;
}
}
else
{
lean_object* v___x_5010_; 
lean_del_object(v___x_5003_);
lean_inc(v___y_4981_);
lean_inc_ref(v___y_4980_);
lean_inc(v___y_4979_);
lean_inc_ref(v___y_4978_);
v___x_5010_ = lean_apply_5(v_kind_4997_, v___y_4978_, v___y_4979_, v___y_4980_, v___y_4981_, lean_box(0));
if (lean_obj_tag(v___x_5010_) == 0)
{
lean_object* v_a_5011_; lean_object* v___x_5012_; 
v_a_5011_ = lean_ctor_get(v___x_5010_, 0);
lean_inc(v_a_5011_);
lean_dec_ref_known(v___x_5010_, 1);
lean_inc(v___y_4981_);
lean_inc_ref(v___y_4980_);
lean_inc(v___y_4979_);
lean_inc_ref(v___y_4978_);
v___x_5012_ = lean_apply_5(v_tags_4998_, v___y_4978_, v___y_4979_, v___y_4980_, v___y_4981_, lean_box(0));
if (lean_obj_tag(v___x_5012_) == 0)
{
lean_object* v_a_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5019_; 
v_a_5013_ = lean_ctor_get(v___x_5012_, 0);
lean_inc(v_a_5013_);
lean_dec_ref_known(v___x_5012_, 1);
v___x_5014_ = l_Lean_ConstantInfo_name(v_info_4996_);
lean_dec_ref(v_info_4996_);
v___x_5015_ = l_Lean_Name_getString_x21(v___x_5014_);
v___x_5016_ = lean_box(0);
v___x_5017_ = l_Lean_Name_str___override(v___x_5016_, v___x_5015_);
if (v_isShared_4995_ == 0)
{
lean_ctor_set_tag(v___x_4994_, 0);
lean_ctor_set(v___x_4994_, 0, v___x_5014_);
v___x_5019_ = v___x_4994_;
goto v_reusejp_5018_;
}
else
{
lean_object* v_reuseFailAlloc_5022_; 
v_reuseFailAlloc_5022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5022_, 0, v___x_5014_);
v___x_5019_ = v_reuseFailAlloc_5022_;
goto v_reusejp_5018_;
}
v_reusejp_5018_:
{
uint8_t v___x_5020_; lean_object* v___x_5021_; 
v___x_5020_ = lean_unbox(v_a_5011_);
lean_dec(v_a_5011_);
v___x_5021_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_5017_, v___x_5019_, v___x_5020_, v_a_5013_, v___y_4975_, v___y_4976_);
return v___x_5021_;
}
}
else
{
lean_object* v_a_5023_; lean_object* v___x_5025_; uint8_t v_isShared_5026_; uint8_t v_isSharedCheck_5030_; 
lean_dec(v_a_5011_);
lean_dec_ref(v_info_4996_);
lean_del_object(v___x_4994_);
v_a_5023_ = lean_ctor_get(v___x_5012_, 0);
v_isSharedCheck_5030_ = !lean_is_exclusive(v___x_5012_);
if (v_isSharedCheck_5030_ == 0)
{
v___x_5025_ = v___x_5012_;
v_isShared_5026_ = v_isSharedCheck_5030_;
goto v_resetjp_5024_;
}
else
{
lean_inc(v_a_5023_);
lean_dec(v___x_5012_);
v___x_5025_ = lean_box(0);
v_isShared_5026_ = v_isSharedCheck_5030_;
goto v_resetjp_5024_;
}
v_resetjp_5024_:
{
lean_object* v___x_5028_; 
if (v_isShared_5026_ == 0)
{
v___x_5028_ = v___x_5025_;
goto v_reusejp_5027_;
}
else
{
lean_object* v_reuseFailAlloc_5029_; 
v_reuseFailAlloc_5029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5029_, 0, v_a_5023_);
v___x_5028_ = v_reuseFailAlloc_5029_;
goto v_reusejp_5027_;
}
v_reusejp_5027_:
{
return v___x_5028_;
}
}
}
}
else
{
lean_object* v_a_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5038_; 
lean_dec_ref(v_tags_4998_);
lean_dec_ref(v_info_4996_);
lean_del_object(v___x_4994_);
v_a_5031_ = lean_ctor_get(v___x_5010_, 0);
v_isSharedCheck_5038_ = !lean_is_exclusive(v___x_5010_);
if (v_isSharedCheck_5038_ == 0)
{
v___x_5033_ = v___x_5010_;
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_a_5031_);
lean_dec(v___x_5010_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5036_; 
if (v_isShared_5034_ == 0)
{
v___x_5036_ = v___x_5033_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5037_; 
v_reuseFailAlloc_5037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5037_, 0, v_a_5031_);
v___x_5036_ = v_reuseFailAlloc_5037_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
return v___x_5036_;
}
}
}
}
}
}
else
{
lean_object* v_a_5040_; lean_object* v___x_5042_; uint8_t v_isShared_5043_; uint8_t v_isSharedCheck_5047_; 
lean_dec_ref(v_tags_4998_);
lean_dec_ref(v_kind_4997_);
lean_dec_ref(v_info_4996_);
lean_del_object(v___x_4994_);
v_a_5040_ = lean_ctor_get(v___x_5000_, 0);
v_isSharedCheck_5047_ = !lean_is_exclusive(v___x_5000_);
if (v_isSharedCheck_5047_ == 0)
{
v___x_5042_ = v___x_5000_;
v_isShared_5043_ = v_isSharedCheck_5047_;
goto v_resetjp_5041_;
}
else
{
lean_inc(v_a_5040_);
lean_dec(v___x_5000_);
v___x_5042_ = lean_box(0);
v_isShared_5043_ = v_isSharedCheck_5047_;
goto v_resetjp_5041_;
}
v_resetjp_5041_:
{
lean_object* v___x_5045_; 
if (v_isShared_5043_ == 0)
{
v___x_5045_ = v___x_5042_;
goto v_reusejp_5044_;
}
else
{
lean_object* v_reuseFailAlloc_5046_; 
v_reuseFailAlloc_5046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5046_, 0, v_a_5040_);
v___x_5045_ = v_reuseFailAlloc_5046_;
goto v_reusejp_5044_;
}
v_reusejp_5044_:
{
return v___x_5045_;
}
}
}
}
}
else
{
lean_object* v___x_5049_; lean_object* v___x_5051_; 
lean_dec(v_a_4988_);
lean_dec_ref(v_decl_4974_);
v___x_5049_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_4991_ == 0)
{
lean_ctor_set(v___x_4990_, 0, v___x_5049_);
v___x_5051_ = v___x_4990_;
goto v_reusejp_5050_;
}
else
{
lean_object* v_reuseFailAlloc_5052_; 
v_reuseFailAlloc_5052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5052_, 0, v___x_5049_);
v___x_5051_ = v_reuseFailAlloc_5052_;
goto v_reusejp_5050_;
}
v_reusejp_5050_:
{
return v___x_5051_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0___boxed(lean_object* v_a_5054_, lean_object* v_declName_5055_, lean_object* v_decl_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_){
_start:
{
lean_object* v_res_5065_; 
v_res_5065_ = l_Lean_Server_Completion_dotCompletion___lam__0(v_a_5054_, v_declName_5055_, v_decl_5056_, v___y_5057_, v___y_5058_, v___y_5059_, v___y_5060_, v___y_5061_, v___y_5062_, v___y_5063_);
lean_dec(v___y_5063_);
lean_dec_ref(v___y_5062_);
lean_dec(v___y_5061_);
lean_dec_ref(v___y_5060_);
lean_dec_ref(v___y_5059_);
lean_dec(v___y_5058_);
lean_dec_ref(v___y_5057_);
return v_res_5065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1(lean_object* v_expr_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_){
_start:
{
lean_object* v_a_5079_; lean_object* v___y_5083_; lean_object* v___y_5093_; lean_object* v_a_5094_; lean_object* v___x_5097_; 
lean_inc(v___y_5073_);
lean_inc_ref(v___y_5072_);
lean_inc(v___y_5071_);
lean_inc_ref(v___y_5070_);
v___x_5097_ = lean_infer_type(v_expr_5066_, v___y_5070_, v___y_5071_, v___y_5072_, v___y_5073_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v_a_5098_; lean_object* v___x_5099_; lean_object* v_a_5100_; lean_object* v_a_5101_; lean_object* v___x_5102_; 
v_a_5098_ = lean_ctor_get(v___x_5097_, 0);
lean_inc(v_a_5098_);
lean_dec_ref_known(v___x_5097_, 1);
v___x_5099_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_a_5098_, v___y_5071_);
v_a_5100_ = lean_ctor_get(v___x_5099_, 0);
lean_inc(v_a_5100_);
lean_dec_ref(v___x_5099_);
v_a_5101_ = lean_ctor_get(v_a_5100_, 0);
lean_inc(v_a_5101_);
lean_dec(v_a_5100_);
v___x_5102_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(v_a_5101_, v___y_5070_, v___y_5071_, v___y_5072_, v___y_5073_);
if (lean_obj_tag(v___x_5102_) == 0)
{
lean_object* v_a_5103_; 
v_a_5103_ = lean_ctor_get(v___x_5102_, 0);
lean_inc(v_a_5103_);
lean_dec_ref_known(v___x_5102_, 1);
v_a_5079_ = v_a_5103_;
goto v___jp_5078_;
}
else
{
lean_object* v_a_5104_; lean_object* v___x_5106_; uint8_t v_isShared_5107_; uint8_t v_isSharedCheck_5111_; 
v_a_5104_ = lean_ctor_get(v___x_5102_, 0);
v_isSharedCheck_5111_ = !lean_is_exclusive(v___x_5102_);
if (v_isSharedCheck_5111_ == 0)
{
v___x_5106_ = v___x_5102_;
v_isShared_5107_ = v_isSharedCheck_5111_;
goto v_resetjp_5105_;
}
else
{
lean_inc(v_a_5104_);
lean_dec(v___x_5102_);
v___x_5106_ = lean_box(0);
v_isShared_5107_ = v_isSharedCheck_5111_;
goto v_resetjp_5105_;
}
v_resetjp_5105_:
{
lean_object* v___x_5109_; 
lean_inc(v_a_5104_);
if (v_isShared_5107_ == 0)
{
v___x_5109_ = v___x_5106_;
goto v_reusejp_5108_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v_a_5104_);
v___x_5109_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5108_;
}
v_reusejp_5108_:
{
v___y_5093_ = v___x_5109_;
v_a_5094_ = v_a_5104_;
goto v___jp_5092_;
}
}
}
}
else
{
lean_object* v_a_5112_; lean_object* v___x_5114_; uint8_t v_isShared_5115_; uint8_t v_isSharedCheck_5119_; 
v_a_5112_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5119_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5119_ == 0)
{
v___x_5114_ = v___x_5097_;
v_isShared_5115_ = v_isSharedCheck_5119_;
goto v_resetjp_5113_;
}
else
{
lean_inc(v_a_5112_);
lean_dec(v___x_5097_);
v___x_5114_ = lean_box(0);
v_isShared_5115_ = v_isSharedCheck_5119_;
goto v_resetjp_5113_;
}
v_resetjp_5113_:
{
lean_object* v___x_5117_; 
lean_inc(v_a_5112_);
if (v_isShared_5115_ == 0)
{
v___x_5117_ = v___x_5114_;
goto v_reusejp_5116_;
}
else
{
lean_object* v_reuseFailAlloc_5118_; 
v_reuseFailAlloc_5118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5118_, 0, v_a_5112_);
v___x_5117_ = v_reuseFailAlloc_5118_;
goto v_reusejp_5116_;
}
v_reusejp_5116_:
{
v___y_5093_ = v___x_5117_;
v_a_5094_ = v_a_5112_;
goto v___jp_5092_;
}
}
}
v___jp_5075_:
{
lean_object* v___x_5076_; lean_object* v___x_5077_; 
v___x_5076_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_5077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5077_, 0, v___x_5076_);
return v___x_5077_;
}
v___jp_5078_:
{
if (lean_obj_tag(v_a_5079_) == 0)
{
lean_object* v___f_5080_; lean_object* v___x_5081_; 
v___f_5080_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotCompletion___lam__0___boxed), 11, 1);
lean_closure_set(v___f_5080_, 0, v_a_5079_);
v___x_5081_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___f_5080_, v___y_5067_, v___y_5068_, v___y_5069_, v___y_5070_, v___y_5071_, v___y_5072_, v___y_5073_);
return v___x_5081_;
}
else
{
goto v___jp_5075_;
}
}
v___jp_5082_:
{
lean_object* v_a_5084_; lean_object* v___x_5086_; uint8_t v_isShared_5087_; uint8_t v_isSharedCheck_5091_; 
v_a_5084_ = lean_ctor_get(v___y_5083_, 0);
v_isSharedCheck_5091_ = !lean_is_exclusive(v___y_5083_);
if (v_isSharedCheck_5091_ == 0)
{
v___x_5086_ = v___y_5083_;
v_isShared_5087_ = v_isSharedCheck_5091_;
goto v_resetjp_5085_;
}
else
{
lean_inc(v_a_5084_);
lean_dec(v___y_5083_);
v___x_5086_ = lean_box(0);
v_isShared_5087_ = v_isSharedCheck_5091_;
goto v_resetjp_5085_;
}
v_resetjp_5085_:
{
lean_object* v___x_5089_; 
if (v_isShared_5087_ == 0)
{
v___x_5089_ = v___x_5086_;
goto v_reusejp_5088_;
}
else
{
lean_object* v_reuseFailAlloc_5090_; 
v_reuseFailAlloc_5090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5090_, 0, v_a_5084_);
v___x_5089_ = v_reuseFailAlloc_5090_;
goto v_reusejp_5088_;
}
v_reusejp_5088_:
{
return v___x_5089_;
}
}
}
v___jp_5092_:
{
uint8_t v___x_5095_; 
v___x_5095_ = l_Lean_Exception_isInterrupt(v_a_5094_);
if (v___x_5095_ == 0)
{
uint8_t v___x_5096_; 
v___x_5096_ = l_Lean_Exception_isRuntime(v_a_5094_);
if (v___x_5096_ == 0)
{
lean_dec_ref(v___y_5093_);
goto v___jp_5075_;
}
else
{
v___y_5083_ = v___y_5093_;
goto v___jp_5082_;
}
}
else
{
lean_dec_ref(v_a_5094_);
v___y_5083_ = v___y_5093_;
goto v___jp_5082_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1___boxed(lean_object* v_expr_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_){
_start:
{
lean_object* v_res_5129_; 
v_res_5129_ = l_Lean_Server_Completion_dotCompletion___lam__1(v_expr_5120_, v___y_5121_, v___y_5122_, v___y_5123_, v___y_5124_, v___y_5125_, v___y_5126_, v___y_5127_);
lean_dec(v___y_5127_);
lean_dec_ref(v___y_5126_);
lean_dec(v___y_5125_);
lean_dec_ref(v___y_5124_);
lean_dec_ref(v___y_5123_);
lean_dec(v___y_5122_);
lean_dec_ref(v___y_5121_);
return v_res_5129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion(lean_object* v_uri_5130_, lean_object* v_pos_5131_, lean_object* v_completionInfoPos_5132_, lean_object* v_ctx_5133_, lean_object* v_info_5134_, lean_object* v_a_5135_){
_start:
{
lean_object* v_lctx_5137_; lean_object* v_expr_5138_; lean_object* v___f_5139_; lean_object* v___x_5140_; 
v_lctx_5137_ = lean_ctor_get(v_info_5134_, 1);
lean_inc_ref(v_lctx_5137_);
v_expr_5138_ = lean_ctor_get(v_info_5134_, 3);
lean_inc_ref(v_expr_5138_);
lean_dec_ref(v_info_5134_);
v___f_5139_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotCompletion___lam__1___boxed), 9, 1);
lean_closure_set(v___f_5139_, 0, v_expr_5138_);
v___x_5140_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5130_, v_pos_5131_, v_completionInfoPos_5132_, v_ctx_5133_, v_lctx_5137_, v___f_5139_, v_a_5135_);
return v___x_5140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___boxed(lean_object* v_uri_5141_, lean_object* v_pos_5142_, lean_object* v_completionInfoPos_5143_, lean_object* v_ctx_5144_, lean_object* v_info_5145_, lean_object* v_a_5146_, lean_object* v_a_5147_){
_start:
{
lean_object* v_res_5148_; 
v_res_5148_ = l_Lean_Server_Completion_dotCompletion(v_uri_5141_, v_pos_5142_, v_completionInfoPos_5143_, v_ctx_5144_, v_info_5145_, v_a_5146_);
lean_dec_ref(v_a_5146_);
return v_res_5148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0(lean_object* v___x_5149_, lean_object* v_id_5150_, lean_object* v_declName_5151_, lean_object* v_decl_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_){
_start:
{
lean_object* v___x_5161_; uint8_t v___x_5162_; 
v___x_5161_ = l_Lean_Name_getPrefix(v_declName_5151_);
lean_inc(v___x_5149_);
v___x_5162_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v___x_5161_, v___x_5149_);
if (v___x_5162_ == 0)
{
lean_object* v___x_5163_; lean_object* v___x_5164_; 
lean_dec_ref(v_decl_5152_);
lean_dec(v_declName_5151_);
lean_dec(v___x_5149_);
v___x_5163_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_5164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5164_, 0, v___x_5163_);
return v___x_5164_;
}
else
{
lean_object* v___x_5165_; lean_object* v_a_5166_; lean_object* v___x_5168_; uint8_t v_isShared_5169_; uint8_t v_isSharedCheck_5262_; 
v___x_5165_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_5151_, v___y_5159_);
v_a_5166_ = lean_ctor_get(v___x_5165_, 0);
v_isSharedCheck_5262_ = !lean_is_exclusive(v___x_5165_);
if (v_isSharedCheck_5262_ == 0)
{
v___x_5168_ = v___x_5165_;
v_isShared_5169_ = v_isSharedCheck_5262_;
goto v_resetjp_5167_;
}
else
{
lean_inc(v_a_5166_);
lean_dec(v___x_5165_);
v___x_5168_ = lean_box(0);
v_isShared_5169_ = v_isSharedCheck_5262_;
goto v_resetjp_5167_;
}
v_resetjp_5167_:
{
if (lean_obj_tag(v_a_5166_) == 1)
{
lean_object* v_val_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5257_; 
lean_del_object(v___x_5168_);
v_val_5170_ = lean_ctor_get(v_a_5166_, 0);
v_isSharedCheck_5257_ = !lean_is_exclusive(v_a_5166_);
if (v_isSharedCheck_5257_ == 0)
{
v___x_5172_ = v_a_5166_;
v_isShared_5173_ = v_isSharedCheck_5257_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_val_5170_);
lean_dec(v_a_5166_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5257_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v_info_5174_; lean_object* v_kind_5175_; lean_object* v_tags_5176_; lean_object* v___x_5177_; 
v_info_5174_ = lean_ctor_get(v_decl_5152_, 0);
lean_inc_ref(v_info_5174_);
v_kind_5175_ = lean_ctor_get(v_decl_5152_, 1);
lean_inc_ref(v_kind_5175_);
v_tags_5176_ = lean_ctor_get(v_decl_5152_, 2);
lean_inc_ref(v_tags_5176_);
lean_dec_ref(v_decl_5152_);
v___x_5177_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(v___x_5149_, v_info_5174_, v___y_5156_, v___y_5157_, v___y_5158_, v___y_5159_);
if (lean_obj_tag(v___x_5177_) == 0)
{
lean_object* v_a_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5248_; 
v_a_5178_ = lean_ctor_get(v___x_5177_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5177_);
if (v_isSharedCheck_5248_ == 0)
{
v___x_5180_ = v___x_5177_;
v_isShared_5181_ = v_isSharedCheck_5248_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_a_5178_);
lean_dec(v___x_5177_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5248_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
uint8_t v___x_5182_; 
v___x_5182_ = lean_unbox(v_a_5178_);
lean_dec(v_a_5178_);
if (v___x_5182_ == 0)
{
lean_object* v___x_5183_; lean_object* v___x_5185_; 
lean_dec_ref(v_tags_5176_);
lean_dec_ref(v_kind_5175_);
lean_dec_ref(v_info_5174_);
lean_del_object(v___x_5172_);
lean_dec(v_val_5170_);
v___x_5183_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5181_ == 0)
{
lean_ctor_set(v___x_5180_, 0, v___x_5183_);
v___x_5185_ = v___x_5180_;
goto v_reusejp_5184_;
}
else
{
lean_object* v_reuseFailAlloc_5186_; 
v_reuseFailAlloc_5186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5186_, 0, v___x_5183_);
v___x_5185_ = v_reuseFailAlloc_5186_;
goto v_reusejp_5184_;
}
v_reusejp_5184_:
{
return v___x_5185_;
}
}
else
{
lean_object* v___x_5187_; 
lean_del_object(v___x_5180_);
lean_inc(v___y_5159_);
lean_inc_ref(v___y_5158_);
lean_inc(v___y_5157_);
lean_inc_ref(v___y_5156_);
v___x_5187_ = lean_apply_5(v_kind_5175_, v___y_5156_, v___y_5157_, v___y_5158_, v___y_5159_, lean_box(0));
if (lean_obj_tag(v___x_5187_) == 0)
{
lean_object* v_a_5188_; lean_object* v___x_5189_; 
v_a_5188_ = lean_ctor_get(v___x_5187_, 0);
lean_inc(v_a_5188_);
lean_dec_ref_known(v___x_5187_, 1);
lean_inc(v___y_5159_);
lean_inc_ref(v___y_5158_);
lean_inc(v___y_5157_);
lean_inc_ref(v___y_5156_);
v___x_5189_ = lean_apply_5(v_tags_5176_, v___y_5156_, v___y_5157_, v___y_5158_, v___y_5159_, lean_box(0));
if (lean_obj_tag(v___x_5189_) == 0)
{
lean_object* v_a_5190_; uint8_t v___x_5191_; 
v_a_5190_ = lean_ctor_get(v___x_5189_, 0);
lean_inc(v_a_5190_);
lean_dec_ref_known(v___x_5189_, 1);
v___x_5191_ = l_Lean_Name_isAnonymous(v_id_5150_);
if (v___x_5191_ == 0)
{
lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v_a_5194_; lean_object* v___x_5196_; uint8_t v_isShared_5197_; uint8_t v_isSharedCheck_5213_; 
lean_del_object(v___x_5172_);
v___x_5192_ = l_Lean_Name_getPrefix(v_val_5170_);
v___x_5193_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v___x_5192_, v_id_5150_, v___x_5191_, v_val_5170_, v___y_5159_);
lean_dec(v___x_5192_);
v_a_5194_ = lean_ctor_get(v___x_5193_, 0);
v_isSharedCheck_5213_ = !lean_is_exclusive(v___x_5193_);
if (v_isSharedCheck_5213_ == 0)
{
v___x_5196_ = v___x_5193_;
v_isShared_5197_ = v_isSharedCheck_5213_;
goto v_resetjp_5195_;
}
else
{
lean_inc(v_a_5194_);
lean_dec(v___x_5193_);
v___x_5196_ = lean_box(0);
v_isShared_5197_ = v_isSharedCheck_5213_;
goto v_resetjp_5195_;
}
v_resetjp_5195_:
{
if (lean_obj_tag(v_a_5194_) == 1)
{
lean_object* v_val_5198_; lean_object* v___x_5200_; uint8_t v_isShared_5201_; uint8_t v_isSharedCheck_5208_; 
lean_del_object(v___x_5196_);
v_val_5198_ = lean_ctor_get(v_a_5194_, 0);
v_isSharedCheck_5208_ = !lean_is_exclusive(v_a_5194_);
if (v_isSharedCheck_5208_ == 0)
{
v___x_5200_ = v_a_5194_;
v_isShared_5201_ = v_isSharedCheck_5208_;
goto v_resetjp_5199_;
}
else
{
lean_inc(v_val_5198_);
lean_dec(v_a_5194_);
v___x_5200_ = lean_box(0);
v_isShared_5201_ = v_isSharedCheck_5208_;
goto v_resetjp_5199_;
}
v_resetjp_5199_:
{
lean_object* v___x_5202_; lean_object* v___x_5204_; 
v___x_5202_ = l_Lean_ConstantInfo_name(v_info_5174_);
lean_dec_ref(v_info_5174_);
if (v_isShared_5201_ == 0)
{
lean_ctor_set_tag(v___x_5200_, 0);
lean_ctor_set(v___x_5200_, 0, v___x_5202_);
v___x_5204_ = v___x_5200_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5207_; 
v_reuseFailAlloc_5207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5207_, 0, v___x_5202_);
v___x_5204_ = v_reuseFailAlloc_5207_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
uint8_t v___x_5205_; lean_object* v___x_5206_; 
v___x_5205_ = lean_unbox(v_a_5188_);
lean_dec(v_a_5188_);
v___x_5206_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_val_5198_, v___x_5204_, v___x_5205_, v_a_5190_, v___y_5153_, v___y_5154_);
return v___x_5206_;
}
}
}
else
{
lean_object* v___x_5209_; lean_object* v___x_5211_; 
lean_dec(v_a_5194_);
lean_dec(v_a_5190_);
lean_dec(v_a_5188_);
lean_dec_ref(v_info_5174_);
v___x_5209_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5197_ == 0)
{
lean_ctor_set(v___x_5196_, 0, v___x_5209_);
v___x_5211_ = v___x_5196_;
goto v_reusejp_5210_;
}
else
{
lean_object* v_reuseFailAlloc_5212_; 
v_reuseFailAlloc_5212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5212_, 0, v___x_5209_);
v___x_5211_ = v_reuseFailAlloc_5212_;
goto v_reusejp_5210_;
}
v_reusejp_5210_:
{
return v___x_5211_;
}
}
}
}
else
{
lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5219_; 
lean_dec(v_val_5170_);
v___x_5214_ = l_Lean_ConstantInfo_name(v_info_5174_);
lean_dec_ref(v_info_5174_);
v___x_5215_ = l_Lean_Name_getString_x21(v___x_5214_);
v___x_5216_ = lean_box(0);
v___x_5217_ = l_Lean_Name_str___override(v___x_5216_, v___x_5215_);
if (v_isShared_5173_ == 0)
{
lean_ctor_set_tag(v___x_5172_, 0);
lean_ctor_set(v___x_5172_, 0, v___x_5214_);
v___x_5219_ = v___x_5172_;
goto v_reusejp_5218_;
}
else
{
lean_object* v_reuseFailAlloc_5231_; 
v_reuseFailAlloc_5231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5231_, 0, v___x_5214_);
v___x_5219_ = v_reuseFailAlloc_5231_;
goto v_reusejp_5218_;
}
v_reusejp_5218_:
{
uint8_t v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5223_; uint8_t v_isShared_5224_; uint8_t v_isSharedCheck_5229_; 
v___x_5220_ = lean_unbox(v_a_5188_);
lean_dec(v_a_5188_);
v___x_5221_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_5217_, v___x_5219_, v___x_5220_, v_a_5190_, v___y_5153_, v___y_5154_);
v_isSharedCheck_5229_ = !lean_is_exclusive(v___x_5221_);
if (v_isSharedCheck_5229_ == 0)
{
lean_object* v_unused_5230_; 
v_unused_5230_ = lean_ctor_get(v___x_5221_, 0);
lean_dec(v_unused_5230_);
v___x_5223_ = v___x_5221_;
v_isShared_5224_ = v_isSharedCheck_5229_;
goto v_resetjp_5222_;
}
else
{
lean_dec(v___x_5221_);
v___x_5223_ = lean_box(0);
v_isShared_5224_ = v_isSharedCheck_5229_;
goto v_resetjp_5222_;
}
v_resetjp_5222_:
{
lean_object* v___x_5225_; lean_object* v___x_5227_; 
v___x_5225_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5224_ == 0)
{
lean_ctor_set(v___x_5223_, 0, v___x_5225_);
v___x_5227_ = v___x_5223_;
goto v_reusejp_5226_;
}
else
{
lean_object* v_reuseFailAlloc_5228_; 
v_reuseFailAlloc_5228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5228_, 0, v___x_5225_);
v___x_5227_ = v_reuseFailAlloc_5228_;
goto v_reusejp_5226_;
}
v_reusejp_5226_:
{
return v___x_5227_;
}
}
}
}
}
else
{
lean_object* v_a_5232_; lean_object* v___x_5234_; uint8_t v_isShared_5235_; uint8_t v_isSharedCheck_5239_; 
lean_dec(v_a_5188_);
lean_dec_ref(v_info_5174_);
lean_del_object(v___x_5172_);
lean_dec(v_val_5170_);
v_a_5232_ = lean_ctor_get(v___x_5189_, 0);
v_isSharedCheck_5239_ = !lean_is_exclusive(v___x_5189_);
if (v_isSharedCheck_5239_ == 0)
{
v___x_5234_ = v___x_5189_;
v_isShared_5235_ = v_isSharedCheck_5239_;
goto v_resetjp_5233_;
}
else
{
lean_inc(v_a_5232_);
lean_dec(v___x_5189_);
v___x_5234_ = lean_box(0);
v_isShared_5235_ = v_isSharedCheck_5239_;
goto v_resetjp_5233_;
}
v_resetjp_5233_:
{
lean_object* v___x_5237_; 
if (v_isShared_5235_ == 0)
{
v___x_5237_ = v___x_5234_;
goto v_reusejp_5236_;
}
else
{
lean_object* v_reuseFailAlloc_5238_; 
v_reuseFailAlloc_5238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5238_, 0, v_a_5232_);
v___x_5237_ = v_reuseFailAlloc_5238_;
goto v_reusejp_5236_;
}
v_reusejp_5236_:
{
return v___x_5237_;
}
}
}
}
else
{
lean_object* v_a_5240_; lean_object* v___x_5242_; uint8_t v_isShared_5243_; uint8_t v_isSharedCheck_5247_; 
lean_dec_ref(v_tags_5176_);
lean_dec_ref(v_info_5174_);
lean_del_object(v___x_5172_);
lean_dec(v_val_5170_);
v_a_5240_ = lean_ctor_get(v___x_5187_, 0);
v_isSharedCheck_5247_ = !lean_is_exclusive(v___x_5187_);
if (v_isSharedCheck_5247_ == 0)
{
v___x_5242_ = v___x_5187_;
v_isShared_5243_ = v_isSharedCheck_5247_;
goto v_resetjp_5241_;
}
else
{
lean_inc(v_a_5240_);
lean_dec(v___x_5187_);
v___x_5242_ = lean_box(0);
v_isShared_5243_ = v_isSharedCheck_5247_;
goto v_resetjp_5241_;
}
v_resetjp_5241_:
{
lean_object* v___x_5245_; 
if (v_isShared_5243_ == 0)
{
v___x_5245_ = v___x_5242_;
goto v_reusejp_5244_;
}
else
{
lean_object* v_reuseFailAlloc_5246_; 
v_reuseFailAlloc_5246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5246_, 0, v_a_5240_);
v___x_5245_ = v_reuseFailAlloc_5246_;
goto v_reusejp_5244_;
}
v_reusejp_5244_:
{
return v___x_5245_;
}
}
}
}
}
}
else
{
lean_object* v_a_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5256_; 
lean_dec_ref(v_tags_5176_);
lean_dec_ref(v_kind_5175_);
lean_dec_ref(v_info_5174_);
lean_del_object(v___x_5172_);
lean_dec(v_val_5170_);
v_a_5249_ = lean_ctor_get(v___x_5177_, 0);
v_isSharedCheck_5256_ = !lean_is_exclusive(v___x_5177_);
if (v_isSharedCheck_5256_ == 0)
{
v___x_5251_ = v___x_5177_;
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_a_5249_);
lean_dec(v___x_5177_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
lean_object* v___x_5254_; 
if (v_isShared_5252_ == 0)
{
v___x_5254_ = v___x_5251_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v_a_5249_);
v___x_5254_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
return v___x_5254_;
}
}
}
}
}
else
{
lean_object* v___x_5258_; lean_object* v___x_5260_; 
lean_dec(v_a_5166_);
lean_dec_ref(v_decl_5152_);
lean_dec(v___x_5149_);
v___x_5258_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5169_ == 0)
{
lean_ctor_set(v___x_5168_, 0, v___x_5258_);
v___x_5260_ = v___x_5168_;
goto v_reusejp_5259_;
}
else
{
lean_object* v_reuseFailAlloc_5261_; 
v_reuseFailAlloc_5261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5261_, 0, v___x_5258_);
v___x_5260_ = v_reuseFailAlloc_5261_;
goto v_reusejp_5259_;
}
v_reusejp_5259_:
{
return v___x_5260_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed(lean_object* v___x_5263_, lean_object* v_id_5264_, lean_object* v_declName_5265_, lean_object* v_decl_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_){
_start:
{
lean_object* v_res_5275_; 
v_res_5275_ = l_Lean_Server_Completion_dotIdCompletion___lam__0(v___x_5263_, v_id_5264_, v_declName_5265_, v_decl_5266_, v___y_5267_, v___y_5268_, v___y_5269_, v___y_5270_, v___y_5271_, v___y_5272_, v___y_5273_);
lean_dec(v___y_5273_);
lean_dec_ref(v___y_5272_);
lean_dec(v___y_5271_);
lean_dec_ref(v___y_5270_);
lean_dec_ref(v___y_5269_);
lean_dec(v___y_5268_);
lean_dec_ref(v___y_5267_);
lean_dec(v_id_5264_);
return v_res_5275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1(lean_object* v_expectedType_x3f_5276_, lean_object* v_id_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_){
_start:
{
if (lean_obj_tag(v_expectedType_x3f_5276_) == 1)
{
lean_object* v_val_5286_; lean_object* v___x_5287_; 
v_val_5286_ = lean_ctor_get(v_expectedType_x3f_5276_, 0);
lean_inc(v_val_5286_);
lean_dec_ref_known(v_expectedType_x3f_5276_, 1);
v___x_5287_ = l_Lean_Server_Completion_getDotIdCompletionTypeNames(v_val_5286_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_);
if (lean_obj_tag(v___x_5287_) == 0)
{
lean_object* v_a_5288_; lean_object* v___x_5290_; uint8_t v_isShared_5291_; uint8_t v_isSharedCheck_5302_; 
v_a_5288_ = lean_ctor_get(v___x_5287_, 0);
v_isSharedCheck_5302_ = !lean_is_exclusive(v___x_5287_);
if (v_isSharedCheck_5302_ == 0)
{
v___x_5290_ = v___x_5287_;
v_isShared_5291_ = v_isSharedCheck_5302_;
goto v_resetjp_5289_;
}
else
{
lean_inc(v_a_5288_);
lean_dec(v___x_5287_);
v___x_5290_ = lean_box(0);
v_isShared_5291_ = v_isSharedCheck_5302_;
goto v_resetjp_5289_;
}
v_resetjp_5289_:
{
lean_object* v___x_5292_; lean_object* v___x_5293_; uint8_t v___x_5294_; 
v___x_5292_ = lean_array_get_size(v_a_5288_);
v___x_5293_ = lean_unsigned_to_nat(0u);
v___x_5294_ = lean_nat_dec_eq(v___x_5292_, v___x_5293_);
if (v___x_5294_ == 0)
{
lean_object* v___x_5295_; lean_object* v___f_5296_; lean_object* v___x_5297_; 
lean_del_object(v___x_5290_);
v___x_5295_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(v_a_5288_);
lean_dec(v_a_5288_);
v___f_5296_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed), 12, 2);
lean_closure_set(v___f_5296_, 0, v___x_5295_);
lean_closure_set(v___f_5296_, 1, v_id_5277_);
v___x_5297_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___f_5296_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_);
return v___x_5297_;
}
else
{
lean_object* v___x_5298_; lean_object* v___x_5300_; 
lean_dec(v_a_5288_);
lean_dec(v_id_5277_);
v___x_5298_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5291_ == 0)
{
lean_ctor_set(v___x_5290_, 0, v___x_5298_);
v___x_5300_ = v___x_5290_;
goto v_reusejp_5299_;
}
else
{
lean_object* v_reuseFailAlloc_5301_; 
v_reuseFailAlloc_5301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5301_, 0, v___x_5298_);
v___x_5300_ = v_reuseFailAlloc_5301_;
goto v_reusejp_5299_;
}
v_reusejp_5299_:
{
return v___x_5300_;
}
}
}
}
else
{
lean_object* v_a_5303_; lean_object* v___x_5305_; uint8_t v_isShared_5306_; uint8_t v_isSharedCheck_5310_; 
lean_dec(v_id_5277_);
v_a_5303_ = lean_ctor_get(v___x_5287_, 0);
v_isSharedCheck_5310_ = !lean_is_exclusive(v___x_5287_);
if (v_isSharedCheck_5310_ == 0)
{
v___x_5305_ = v___x_5287_;
v_isShared_5306_ = v_isSharedCheck_5310_;
goto v_resetjp_5304_;
}
else
{
lean_inc(v_a_5303_);
lean_dec(v___x_5287_);
v___x_5305_ = lean_box(0);
v_isShared_5306_ = v_isSharedCheck_5310_;
goto v_resetjp_5304_;
}
v_resetjp_5304_:
{
lean_object* v___x_5308_; 
if (v_isShared_5306_ == 0)
{
v___x_5308_ = v___x_5305_;
goto v_reusejp_5307_;
}
else
{
lean_object* v_reuseFailAlloc_5309_; 
v_reuseFailAlloc_5309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5309_, 0, v_a_5303_);
v___x_5308_ = v_reuseFailAlloc_5309_;
goto v_reusejp_5307_;
}
v_reusejp_5307_:
{
return v___x_5308_;
}
}
}
}
else
{
lean_object* v___x_5311_; lean_object* v___x_5312_; 
lean_dec(v_id_5277_);
lean_dec(v_expectedType_x3f_5276_);
v___x_5311_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
v___x_5312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5312_, 0, v___x_5311_);
return v___x_5312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed(lean_object* v_expectedType_x3f_5313_, lean_object* v_id_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_){
_start:
{
lean_object* v_res_5323_; 
v_res_5323_ = l_Lean_Server_Completion_dotIdCompletion___lam__1(v_expectedType_x3f_5313_, v_id_5314_, v___y_5315_, v___y_5316_, v___y_5317_, v___y_5318_, v___y_5319_, v___y_5320_, v___y_5321_);
lean_dec(v___y_5321_);
lean_dec_ref(v___y_5320_);
lean_dec(v___y_5319_);
lean_dec_ref(v___y_5318_);
lean_dec_ref(v___y_5317_);
lean_dec(v___y_5316_);
lean_dec_ref(v___y_5315_);
return v_res_5323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion(lean_object* v_uri_5324_, lean_object* v_pos_5325_, lean_object* v_completionInfoPos_5326_, lean_object* v_ctx_5327_, lean_object* v_lctx_5328_, lean_object* v_id_5329_, lean_object* v_expectedType_x3f_5330_, lean_object* v_a_5331_){
_start:
{
lean_object* v___y_5333_; lean_object* v___x_5334_; 
v___y_5333_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed), 10, 2);
lean_closure_set(v___y_5333_, 0, v_expectedType_x3f_5330_);
lean_closure_set(v___y_5333_, 1, v_id_5329_);
v___x_5334_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5324_, v_pos_5325_, v_completionInfoPos_5326_, v_ctx_5327_, v_lctx_5328_, v___y_5333_, v_a_5331_);
return v___x_5334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___boxed(lean_object* v_uri_5335_, lean_object* v_pos_5336_, lean_object* v_completionInfoPos_5337_, lean_object* v_ctx_5338_, lean_object* v_lctx_5339_, lean_object* v_id_5340_, lean_object* v_expectedType_x3f_5341_, lean_object* v_a_5342_, lean_object* v_a_5343_){
_start:
{
lean_object* v_res_5344_; 
v_res_5344_ = l_Lean_Server_Completion_dotIdCompletion(v_uri_5335_, v_pos_5336_, v_completionInfoPos_5337_, v_ctx_5338_, v_lctx_5339_, v_id_5340_, v_expectedType_x3f_5341_, v_a_5342_);
lean_dec_ref(v_a_5342_);
return v_res_5344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(lean_object* v___y_5351_, lean_object* v_as_5352_, size_t v_sz_5353_, size_t v_i_5354_, lean_object* v_b_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_){
_start:
{
lean_object* v_a_5360_; uint8_t v___x_5364_; 
v___x_5364_ = lean_usize_dec_lt(v_i_5354_, v_sz_5353_);
if (v___x_5364_ == 0)
{
lean_object* v___x_5365_; lean_object* v___x_5366_; 
v___x_5365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5365_, 0, v_b_5355_);
v___x_5366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5366_, 0, v___x_5365_);
return v___x_5366_;
}
else
{
lean_object* v___x_5367_; lean_object* v_a_5368_; 
v___x_5367_ = lean_box(0);
v_a_5368_ = lean_array_uget_borrowed(v_as_5352_, v_i_5354_);
if (lean_obj_tag(v_a_5368_) == 1)
{
lean_object* v_str_5369_; uint8_t v___x_5370_; 
v_str_5369_ = lean_ctor_get(v_a_5368_, 1);
v___x_5370_ = l_Lean_String_charactersIn(v___y_5351_, v_str_5369_);
if (v___x_5370_ == 0)
{
v_a_5360_ = v___x_5367_;
goto v___jp_5359_;
}
else
{
lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; 
v___x_5371_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1));
v___x_5372_ = lean_box(0);
v___x_5373_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2));
lean_inc_ref(v_str_5369_);
v___x_5374_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5374_, 0, v_str_5369_);
lean_ctor_set(v___x_5374_, 1, v___x_5371_);
lean_ctor_set(v___x_5374_, 2, v___x_5372_);
lean_ctor_set(v___x_5374_, 3, v___x_5373_);
lean_ctor_set(v___x_5374_, 4, v___x_5372_);
lean_ctor_set(v___x_5374_, 5, v___x_5372_);
lean_ctor_set(v___x_5374_, 6, v___x_5372_);
lean_ctor_set(v___x_5374_, 7, v___x_5372_);
v___x_5375_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v___x_5374_, v___x_5372_, v___y_5356_, v___y_5357_);
if (lean_obj_tag(v___x_5375_) == 0)
{
lean_object* v_a_5376_; 
v_a_5376_ = lean_ctor_get(v___x_5375_, 0);
if (lean_obj_tag(v_a_5376_) == 0)
{
return v___x_5375_;
}
else
{
lean_dec_ref_known(v___x_5375_, 1);
v_a_5360_ = v___x_5367_;
goto v___jp_5359_;
}
}
else
{
return v___x_5375_;
}
}
}
else
{
v_a_5360_ = v___x_5367_;
goto v___jp_5359_;
}
}
v___jp_5359_:
{
size_t v___x_5361_; size_t v___x_5362_; 
v___x_5361_ = ((size_t)1ULL);
v___x_5362_ = lean_usize_add(v_i_5354_, v___x_5361_);
v_i_5354_ = v___x_5362_;
v_b_5355_ = v_a_5360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___boxed(lean_object* v___y_5377_, lean_object* v_as_5378_, lean_object* v_sz_5379_, lean_object* v_i_5380_, lean_object* v_b_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_){
_start:
{
size_t v_sz_boxed_5385_; size_t v_i_boxed_5386_; lean_object* v_res_5387_; 
v_sz_boxed_5385_ = lean_unbox_usize(v_sz_5379_);
lean_dec(v_sz_5379_);
v_i_boxed_5386_ = lean_unbox_usize(v_i_5380_);
lean_dec(v_i_5380_);
v_res_5387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5377_, v_as_5378_, v_sz_boxed_5385_, v_i_boxed_5386_, v_b_5381_, v___y_5382_, v___y_5383_);
lean_dec(v___y_5383_);
lean_dec_ref(v___y_5382_);
lean_dec_ref(v_as_5378_);
lean_dec_ref(v___y_5377_);
return v_res_5387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0(lean_object* v_structName_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_){
_start:
{
lean_object* v___x_5398_; lean_object* v_env_5399_; uint8_t v___x_5400_; lean_object* v_fieldNames_5401_; lean_object* v___x_5402_; size_t v_sz_5403_; size_t v___x_5404_; lean_object* v___x_5405_; 
v___x_5398_ = lean_st_ref_get(v___y_5396_);
v_env_5399_ = lean_ctor_get(v___x_5398_, 0);
lean_inc_ref(v_env_5399_);
lean_dec(v___x_5398_);
v___x_5400_ = 0;
v_fieldNames_5401_ = l_Lean_getStructureFieldsFlattened(v_env_5399_, v_structName_5388_, v___x_5400_);
v___x_5402_ = lean_box(0);
v_sz_5403_ = lean_array_size(v_fieldNames_5401_);
v___x_5404_ = ((size_t)0ULL);
v___x_5405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5389_, v_fieldNames_5401_, v_sz_5403_, v___x_5404_, v___x_5402_, v___y_5390_, v___y_5391_);
lean_dec_ref(v_fieldNames_5401_);
if (lean_obj_tag(v___x_5405_) == 0)
{
lean_object* v_a_5406_; 
v_a_5406_ = lean_ctor_get(v___x_5405_, 0);
if (lean_obj_tag(v_a_5406_) == 0)
{
return v___x_5405_;
}
else
{
lean_object* v___x_5408_; uint8_t v_isShared_5409_; uint8_t v_isSharedCheck_5414_; 
v_isSharedCheck_5414_ = !lean_is_exclusive(v___x_5405_);
if (v_isSharedCheck_5414_ == 0)
{
lean_object* v_unused_5415_; 
v_unused_5415_ = lean_ctor_get(v___x_5405_, 0);
lean_dec(v_unused_5415_);
v___x_5408_ = v___x_5405_;
v_isShared_5409_ = v_isSharedCheck_5414_;
goto v_resetjp_5407_;
}
else
{
lean_dec(v___x_5405_);
v___x_5408_ = lean_box(0);
v_isShared_5409_ = v_isSharedCheck_5414_;
goto v_resetjp_5407_;
}
v_resetjp_5407_:
{
lean_object* v___x_5410_; lean_object* v___x_5412_; 
v___x_5410_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0));
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 0, v___x_5410_);
v___x_5412_ = v___x_5408_;
goto v_reusejp_5411_;
}
else
{
lean_object* v_reuseFailAlloc_5413_; 
v_reuseFailAlloc_5413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5413_, 0, v___x_5410_);
v___x_5412_ = v_reuseFailAlloc_5413_;
goto v_reusejp_5411_;
}
v_reusejp_5411_:
{
return v___x_5412_;
}
}
}
}
else
{
return v___x_5405_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed(lean_object* v_structName_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_){
_start:
{
lean_object* v_res_5426_; 
v_res_5426_ = l_Lean_Server_Completion_fieldIdCompletion___lam__0(v_structName_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_);
lean_dec(v___y_5424_);
lean_dec_ref(v___y_5423_);
lean_dec(v___y_5422_);
lean_dec_ref(v___y_5421_);
lean_dec_ref(v___y_5420_);
lean_dec(v___y_5419_);
lean_dec_ref(v___y_5418_);
lean_dec_ref(v___y_5417_);
return v_res_5426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion(lean_object* v_uri_5428_, lean_object* v_pos_5429_, lean_object* v_completionInfoPos_5430_, lean_object* v_ctx_5431_, lean_object* v_lctx_5432_, lean_object* v_id_5433_, lean_object* v_structName_5434_, lean_object* v_a_5435_){
_start:
{
lean_object* v___y_5438_; 
if (lean_obj_tag(v_id_5433_) == 0)
{
lean_object* v___x_5441_; 
v___x_5441_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v___y_5438_ = v___x_5441_;
goto v___jp_5437_;
}
else
{
lean_object* v_val_5442_; uint8_t v___x_5443_; lean_object* v___x_5444_; 
v_val_5442_ = lean_ctor_get(v_id_5433_, 0);
lean_inc(v_val_5442_);
lean_dec_ref_known(v_id_5433_, 1);
v___x_5443_ = 1;
v___x_5444_ = l_Lean_Name_toString(v_val_5442_, v___x_5443_);
v___y_5438_ = v___x_5444_;
goto v___jp_5437_;
}
v___jp_5437_:
{
lean_object* v___f_5439_; lean_object* v___x_5440_; 
v___f_5439_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed), 10, 2);
lean_closure_set(v___f_5439_, 0, v_structName_5434_);
lean_closure_set(v___f_5439_, 1, v___y_5438_);
v___x_5440_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5428_, v_pos_5429_, v_completionInfoPos_5430_, v_ctx_5431_, v_lctx_5432_, v___f_5439_, v_a_5435_);
return v___x_5440_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___boxed(lean_object* v_uri_5445_, lean_object* v_pos_5446_, lean_object* v_completionInfoPos_5447_, lean_object* v_ctx_5448_, lean_object* v_lctx_5449_, lean_object* v_id_5450_, lean_object* v_structName_5451_, lean_object* v_a_5452_, lean_object* v_a_5453_){
_start:
{
lean_object* v_res_5454_; 
v_res_5454_ = l_Lean_Server_Completion_fieldIdCompletion(v_uri_5445_, v_pos_5446_, v_completionInfoPos_5447_, v_ctx_5448_, v_lctx_5449_, v_id_5450_, v_structName_5451_, v_a_5452_);
lean_dec_ref(v_a_5452_);
return v_res_5454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(lean_object* v___y_5455_, lean_object* v_as_5456_, size_t v_sz_5457_, size_t v_i_5458_, lean_object* v_b_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v___x_5468_; 
v___x_5468_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5455_, v_as_5456_, v_sz_5457_, v_i_5458_, v_b_5459_, v___y_5460_, v___y_5461_);
return v___x_5468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___boxed(lean_object* v___y_5469_, lean_object* v_as_5470_, lean_object* v_sz_5471_, lean_object* v_i_5472_, lean_object* v_b_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_, lean_object* v___y_5481_){
_start:
{
size_t v_sz_boxed_5482_; size_t v_i_boxed_5483_; lean_object* v_res_5484_; 
v_sz_boxed_5482_ = lean_unbox_usize(v_sz_5471_);
lean_dec(v_sz_5471_);
v_i_boxed_5483_ = lean_unbox_usize(v_i_5472_);
lean_dec(v_i_5472_);
v_res_5484_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(v___y_5469_, v_as_5470_, v_sz_boxed_5482_, v_i_boxed_5483_, v_b_5473_, v___y_5474_, v___y_5475_, v___y_5476_, v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_);
lean_dec(v___y_5480_);
lean_dec_ref(v___y_5479_);
lean_dec(v___y_5478_);
lean_dec_ref(v___y_5477_);
lean_dec_ref(v___y_5476_);
lean_dec(v___y_5475_);
lean_dec_ref(v___y_5474_);
lean_dec_ref(v_as_5470_);
lean_dec_ref(v___y_5469_);
return v_res_5484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(lean_object* v_fst_5485_, lean_object* v_caps_5486_, lean_object* v_mkItem_5487_, lean_object* v_stx_5488_, lean_object* v_ctx_5489_, uint8_t v_snd_5490_, lean_object* v_x_5491_, lean_object* v_____s_5492_){
_start:
{
lean_object* v_fst_5493_; lean_object* v_snd_5494_; lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5546_; 
v_fst_5493_ = lean_ctor_get(v_x_5491_, 0);
v_snd_5494_ = lean_ctor_get(v_x_5491_, 1);
v_isSharedCheck_5546_ = !lean_is_exclusive(v_x_5491_);
if (v_isSharedCheck_5546_ == 0)
{
v___x_5496_ = v_x_5491_;
v_isShared_5497_ = v_isSharedCheck_5546_;
goto v_resetjp_5495_;
}
else
{
lean_inc(v_snd_5494_);
lean_inc(v_fst_5493_);
lean_dec(v_x_5491_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5546_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
lean_object* v___y_5499_; uint8_t v___x_5505_; lean_object* v___x_5506_; lean_object* v___y_5508_; lean_object* v___y_5509_; uint8_t v___x_5527_; 
v___x_5505_ = 1;
lean_inc(v_fst_5493_);
v___x_5506_ = l_Lean_Name_toString(v_fst_5493_, v___x_5505_);
v___x_5527_ = l_Lean_String_charactersIn(v_fst_5485_, v___x_5506_);
if (v___x_5527_ == 0)
{
lean_object* v___x_5528_; 
lean_dec_ref(v___x_5506_);
lean_del_object(v___x_5496_);
lean_dec(v_snd_5494_);
lean_dec(v_fst_5493_);
lean_dec_ref(v_ctx_5489_);
lean_dec_ref(v_mkItem_5487_);
v___x_5528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5528_, 0, v_____s_5492_);
return v___x_5528_;
}
else
{
lean_object* v_textDocument_x3f_5529_; 
v_textDocument_x3f_5529_ = lean_ctor_get(v_caps_5486_, 0);
if (lean_obj_tag(v_textDocument_x3f_5529_) == 0)
{
lean_dec_ref(v___x_5506_);
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
lean_object* v_val_5530_; lean_object* v_completion_x3f_5531_; 
v_val_5530_ = lean_ctor_get(v_textDocument_x3f_5529_, 0);
v_completion_x3f_5531_ = lean_ctor_get(v_val_5530_, 0);
if (lean_obj_tag(v_completion_x3f_5531_) == 0)
{
lean_dec_ref(v___x_5506_);
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
lean_object* v_val_5532_; 
v_val_5532_ = lean_ctor_get(v_completion_x3f_5531_, 0);
if (lean_obj_tag(v_val_5532_) == 0)
{
lean_dec_ref(v___x_5506_);
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
lean_object* v_val_5533_; 
v_val_5533_ = lean_ctor_get(v_val_5532_, 0);
if (lean_obj_tag(v_val_5533_) == 0)
{
lean_dec_ref(v___x_5506_);
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
lean_object* v_val_5534_; uint8_t v___x_5535_; 
v_val_5534_ = lean_ctor_get(v_val_5533_, 0);
v___x_5535_ = lean_unbox(v_val_5534_);
if (v___x_5535_ == 0)
{
lean_dec_ref(v___x_5506_);
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
goto v___jp_5503_;
}
else
{
uint8_t v___x_5536_; lean_object* v___x_5537_; 
v___x_5536_ = 0;
v___x_5537_ = l_Lean_Syntax_getRange_x3f(v_stx_5488_, v___x_5536_);
if (lean_obj_tag(v___x_5537_) == 1)
{
lean_object* v_val_5538_; 
v_val_5538_ = lean_ctor_get(v___x_5537_, 0);
lean_inc(v_val_5538_);
lean_dec_ref_known(v___x_5537_, 1);
if (v_snd_5490_ == 0)
{
lean_object* v_start_5539_; lean_object* v_stop_5540_; 
v_start_5539_ = lean_ctor_get(v_val_5538_, 0);
lean_inc(v_start_5539_);
v_stop_5540_ = lean_ctor_get(v_val_5538_, 1);
lean_inc(v_stop_5540_);
lean_dec(v_val_5538_);
v___y_5508_ = v_start_5539_;
v___y_5509_ = v_stop_5540_;
goto v___jp_5507_;
}
else
{
lean_object* v_start_5541_; lean_object* v_stop_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; 
v_start_5541_ = lean_ctor_get(v_val_5538_, 0);
lean_inc(v_start_5541_);
v_stop_5542_ = lean_ctor_get(v_val_5538_, 1);
lean_inc(v_stop_5542_);
lean_dec(v_val_5538_);
v___x_5543_ = lean_unsigned_to_nat(1u);
v___x_5544_ = lean_nat_add(v_stop_5542_, v___x_5543_);
lean_dec(v_stop_5542_);
v___y_5508_ = v_start_5541_;
v___y_5509_ = v___x_5544_;
goto v___jp_5507_;
}
}
else
{
lean_object* v___x_5545_; 
lean_dec(v___x_5537_);
lean_dec_ref(v___x_5506_);
lean_del_object(v___x_5496_);
lean_dec_ref(v_ctx_5489_);
v___x_5545_ = lean_box(0);
v___y_5499_ = v___x_5545_;
goto v___jp_5498_;
}
}
}
}
}
}
}
v___jp_5498_:
{
lean_object* v___x_5500_; lean_object* v_items_5501_; lean_object* v___x_5502_; 
v___x_5500_ = lean_apply_3(v_mkItem_5487_, v_fst_5493_, v_snd_5494_, v___y_5499_);
v_items_5501_ = lean_array_push(v_____s_5492_, v___x_5500_);
v___x_5502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5502_, 0, v_items_5501_);
return v___x_5502_;
}
v___jp_5503_:
{
lean_object* v___x_5504_; 
v___x_5504_ = lean_box(0);
v___y_5499_ = v___x_5504_;
goto v___jp_5498_;
}
v___jp_5507_:
{
lean_object* v_toCommandContextInfo_5510_; lean_object* v___x_5512_; uint8_t v_isShared_5513_; uint8_t v_isSharedCheck_5524_; 
v_toCommandContextInfo_5510_ = lean_ctor_get(v_ctx_5489_, 0);
v_isSharedCheck_5524_ = !lean_is_exclusive(v_ctx_5489_);
if (v_isSharedCheck_5524_ == 0)
{
lean_object* v_unused_5525_; lean_object* v_unused_5526_; 
v_unused_5525_ = lean_ctor_get(v_ctx_5489_, 2);
lean_dec(v_unused_5525_);
v_unused_5526_ = lean_ctor_get(v_ctx_5489_, 1);
lean_dec(v_unused_5526_);
v___x_5512_ = v_ctx_5489_;
v_isShared_5513_ = v_isSharedCheck_5524_;
goto v_resetjp_5511_;
}
else
{
lean_inc(v_toCommandContextInfo_5510_);
lean_dec(v_ctx_5489_);
v___x_5512_ = lean_box(0);
v_isShared_5513_ = v_isSharedCheck_5524_;
goto v_resetjp_5511_;
}
v_resetjp_5511_:
{
lean_object* v_fileMap_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v_range_5518_; 
v_fileMap_5514_ = lean_ctor_get(v_toCommandContextInfo_5510_, 2);
lean_inc_ref_n(v_fileMap_5514_, 2);
lean_dec_ref(v_toCommandContextInfo_5510_);
v___x_5515_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5514_, v___y_5508_);
lean_dec(v___y_5508_);
v___x_5516_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5514_, v___y_5509_);
lean_dec(v___y_5509_);
if (v_isShared_5497_ == 0)
{
lean_ctor_set(v___x_5496_, 1, v___x_5516_);
lean_ctor_set(v___x_5496_, 0, v___x_5515_);
v_range_5518_ = v___x_5496_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v___x_5515_);
lean_ctor_set(v_reuseFailAlloc_5523_, 1, v___x_5516_);
v_range_5518_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
lean_object* v___x_5520_; 
lean_inc_ref(v_range_5518_);
if (v_isShared_5513_ == 0)
{
lean_ctor_set(v___x_5512_, 2, v_range_5518_);
lean_ctor_set(v___x_5512_, 1, v_range_5518_);
lean_ctor_set(v___x_5512_, 0, v___x_5506_);
v___x_5520_ = v___x_5512_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v___x_5506_);
lean_ctor_set(v_reuseFailAlloc_5522_, 1, v_range_5518_);
lean_ctor_set(v_reuseFailAlloc_5522_, 2, v_range_5518_);
v___x_5520_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
lean_object* v___x_5521_; 
v___x_5521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5521_, 0, v___x_5520_);
v___y_5499_ = v___x_5521_;
goto v___jp_5498_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed(lean_object* v_fst_5547_, lean_object* v_caps_5548_, lean_object* v_mkItem_5549_, lean_object* v_stx_5550_, lean_object* v_ctx_5551_, lean_object* v_snd_5552_, lean_object* v_x_5553_, lean_object* v_____s_5554_){
_start:
{
uint8_t v_snd_949__boxed_5555_; lean_object* v_res_5556_; 
v_snd_949__boxed_5555_ = lean_unbox(v_snd_5552_);
v_res_5556_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(v_fst_5547_, v_caps_5548_, v_mkItem_5549_, v_stx_5550_, v_ctx_5551_, v_snd_949__boxed_5555_, v_x_5553_, v_____s_5554_);
lean_dec(v_stx_5550_);
lean_dec_ref(v_caps_5548_);
lean_dec_ref(v_fst_5547_);
return v_res_5556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(lean_object* v_inst_5558_, lean_object* v_entries_5559_, lean_object* v_stx_5560_, lean_object* v_caps_5561_, lean_object* v_ctx_5562_, lean_object* v_mkItem_5563_){
_start:
{
lean_object* v_fst_5565_; uint8_t v_snd_5566_; uint8_t v___x_5571_; lean_object* v___x_5572_; 
v___x_5571_ = 0;
v___x_5572_ = l_Lean_Syntax_getSubstring_x3f(v_stx_5560_, v___x_5571_, v___x_5571_);
if (lean_obj_tag(v___x_5572_) == 0)
{
lean_object* v___x_5573_; 
v___x_5573_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_5565_ = v___x_5573_;
v_snd_5566_ = v___x_5571_;
goto v___jp_5564_;
}
else
{
lean_object* v_val_5574_; lean_object* v_str_5575_; lean_object* v_startPos_5576_; lean_object* v_stopPos_5577_; uint8_t v___y_5579_; uint8_t v___x_5581_; 
v_val_5574_ = lean_ctor_get(v___x_5572_, 0);
lean_inc(v_val_5574_);
lean_dec_ref_known(v___x_5572_, 1);
v_str_5575_ = lean_ctor_get(v_val_5574_, 0);
lean_inc_ref(v_str_5575_);
v_startPos_5576_ = lean_ctor_get(v_val_5574_, 1);
lean_inc(v_startPos_5576_);
v_stopPos_5577_ = lean_ctor_get(v_val_5574_, 2);
lean_inc(v_stopPos_5577_);
lean_dec(v_val_5574_);
v___x_5581_ = lean_string_utf8_at_end(v_str_5575_, v_stopPos_5577_);
if (v___x_5581_ == 0)
{
uint32_t v___x_5582_; uint32_t v___x_5583_; uint8_t v___x_5584_; 
v___x_5582_ = lean_string_utf8_get(v_str_5575_, v_stopPos_5577_);
v___x_5583_ = 46;
v___x_5584_ = lean_uint32_dec_eq(v___x_5582_, v___x_5583_);
if (v___x_5584_ == 0)
{
v___y_5579_ = v___x_5584_;
goto v___jp_5578_;
}
else
{
lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; 
v___x_5585_ = lean_string_utf8_extract(v_str_5575_, v_startPos_5576_, v_stopPos_5577_);
lean_dec(v_stopPos_5577_);
lean_dec(v_startPos_5576_);
lean_dec_ref(v_str_5575_);
v___x_5586_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_5587_ = lean_string_append(v___x_5585_, v___x_5586_);
v_fst_5565_ = v___x_5587_;
v_snd_5566_ = v___x_5584_;
goto v___jp_5564_;
}
}
else
{
v___y_5579_ = v___x_5571_;
goto v___jp_5578_;
}
v___jp_5578_:
{
lean_object* v___x_5580_; 
v___x_5580_ = lean_string_utf8_extract(v_str_5575_, v_startPos_5576_, v_stopPos_5577_);
lean_dec(v_stopPos_5577_);
lean_dec(v_startPos_5576_);
lean_dec_ref(v_str_5575_);
v_fst_5565_ = v___x_5580_;
v_snd_5566_ = v___y_5579_;
goto v___jp_5564_;
}
}
v___jp_5564_:
{
lean_object* v___x_5567_; lean_object* v___f_5568_; lean_object* v_items_5569_; lean_object* v___x_5570_; 
v___x_5567_ = lean_box(v_snd_5566_);
v___f_5568_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_5568_, 0, v_fst_5565_);
lean_closure_set(v___f_5568_, 1, v_caps_5561_);
lean_closure_set(v___f_5568_, 2, v_mkItem_5563_);
lean_closure_set(v___f_5568_, 3, v_stx_5560_);
lean_closure_set(v___f_5568_, 4, v_ctx_5562_);
lean_closure_set(v___f_5568_, 5, v___x_5567_);
v_items_5569_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v___x_5570_ = lean_apply_4(v_inst_5558_, lean_box(0), v_entries_5559_, v_items_5569_, v___f_5568_);
return v___x_5570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion(lean_object* v_Coll_5588_, lean_object* v_00_u03b1_5589_, lean_object* v_inst_5590_, lean_object* v_entries_5591_, lean_object* v_stx_5592_, lean_object* v_caps_5593_, lean_object* v_ctx_5594_, lean_object* v_mkItem_5595_){
_start:
{
lean_object* v___x_5596_; 
v___x_5596_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(v_inst_5590_, v_entries_5591_, v_stx_5592_, v_caps_5593_, v_ctx_5594_, v_mkItem_5595_);
return v___x_5596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0(lean_object* v___x_5602_, lean_object* v_completionInfoPos_5603_, lean_object* v_uri_5604_, lean_object* v_pos_5605_, lean_object* v_name_5606_, lean_object* v_decl_5607_, lean_object* v_textEdit_x3f_5608_){
_start:
{
lean_object* v_map_5609_; uint8_t v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___y_5614_; lean_object* v___x_5628_; 
v_map_5609_ = lean_ctor_get(v___x_5602_, 0);
v___x_5610_ = 1;
lean_inc(v_name_5606_);
v___x_5611_ = l_Lean_Name_toString(v_name_5606_, v___x_5610_);
v___x_5612_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__0));
v___x_5628_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5609_, v_name_5606_);
lean_dec(v_name_5606_);
if (lean_obj_tag(v___x_5628_) == 0)
{
lean_object* v_defValue_5629_; 
v_defValue_5629_ = lean_ctor_get(v_decl_5607_, 2);
lean_inc_ref(v_defValue_5629_);
v___y_5614_ = v_defValue_5629_;
goto v___jp_5613_;
}
else
{
lean_object* v_val_5630_; 
v_val_5630_ = lean_ctor_get(v___x_5628_, 0);
lean_inc(v_val_5630_);
lean_dec_ref_known(v___x_5628_, 1);
v___y_5614_ = v_val_5630_;
goto v___jp_5613_;
}
v___jp_5613_:
{
lean_object* v_descr_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; 
v_descr_5615_ = lean_ctor_get(v_decl_5607_, 3);
lean_inc_ref(v_descr_5615_);
lean_dec_ref(v_decl_5607_);
v___x_5616_ = l_Lean_DataValue_str(v___y_5614_);
v___x_5617_ = lean_string_append(v___x_5612_, v___x_5616_);
lean_dec_ref(v___x_5616_);
v___x_5618_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__1));
v___x_5619_ = lean_string_append(v___x_5617_, v___x_5618_);
v___x_5620_ = lean_string_append(v___x_5619_, v_descr_5615_);
lean_dec_ref(v_descr_5615_);
v___x_5621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5621_, 0, v___x_5620_);
v___x_5622_ = lean_box(0);
v___x_5623_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__2));
v___x_5624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5624_, 0, v_completionInfoPos_5603_);
v___x_5625_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5625_, 0, v_uri_5604_);
lean_ctor_set(v___x_5625_, 1, v_pos_5605_);
lean_ctor_set(v___x_5625_, 2, v___x_5624_);
lean_ctor_set(v___x_5625_, 3, v___x_5622_);
v___x_5626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5626_, 0, v___x_5625_);
v___x_5627_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5627_, 0, v___x_5611_);
lean_ctor_set(v___x_5627_, 1, v___x_5621_);
lean_ctor_set(v___x_5627_, 2, v___x_5622_);
lean_ctor_set(v___x_5627_, 3, v___x_5623_);
lean_ctor_set(v___x_5627_, 4, v_textEdit_x3f_5608_);
lean_ctor_set(v___x_5627_, 5, v___x_5622_);
lean_ctor_set(v___x_5627_, 6, v___x_5626_);
lean_ctor_set(v___x_5627_, 7, v___x_5622_);
return v___x_5627_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___boxed(lean_object* v___x_5631_, lean_object* v_completionInfoPos_5632_, lean_object* v_uri_5633_, lean_object* v_pos_5634_, lean_object* v_name_5635_, lean_object* v_decl_5636_, lean_object* v_textEdit_x3f_5637_){
_start:
{
lean_object* v_res_5638_; 
v_res_5638_ = l_Lean_Server_Completion_optionCompletion___lam__0(v___x_5631_, v_completionInfoPos_5632_, v_uri_5633_, v_pos_5634_, v_name_5635_, v_decl_5636_, v_textEdit_x3f_5637_);
lean_dec_ref(v___x_5631_);
return v_res_5638_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(lean_object* v_mkItem_5639_, lean_object* v_stx_5640_, lean_object* v_ctx_5641_, uint8_t v_snd_5642_, lean_object* v_fst_5643_, lean_object* v_caps_5644_, lean_object* v_init_5645_, lean_object* v_x_5646_){
_start:
{
if (lean_obj_tag(v_x_5646_) == 0)
{
lean_object* v_k_5647_; lean_object* v_v_5648_; lean_object* v_l_5649_; lean_object* v_r_5650_; lean_object* v___x_5651_; lean_object* v_a_5652_; lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5696_; 
v_k_5647_ = lean_ctor_get(v_x_5646_, 1);
lean_inc(v_k_5647_);
v_v_5648_ = lean_ctor_get(v_x_5646_, 2);
lean_inc(v_v_5648_);
v_l_5649_ = lean_ctor_get(v_x_5646_, 3);
lean_inc(v_l_5649_);
v_r_5650_ = lean_ctor_get(v_x_5646_, 4);
lean_inc(v_r_5650_);
lean_dec_ref_known(v_x_5646_, 5);
lean_inc_ref(v_ctx_5641_);
lean_inc_ref(v_mkItem_5639_);
v___x_5651_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5639_, v_stx_5640_, v_ctx_5641_, v_snd_5642_, v_fst_5643_, v_caps_5644_, v_init_5645_, v_l_5649_);
v_a_5652_ = lean_ctor_get(v___x_5651_, 0);
v_isSharedCheck_5696_ = !lean_is_exclusive(v___x_5651_);
if (v_isSharedCheck_5696_ == 0)
{
v___x_5654_ = v___x_5651_;
v_isShared_5655_ = v_isSharedCheck_5696_;
goto v_resetjp_5653_;
}
else
{
lean_inc(v_a_5652_);
lean_dec(v___x_5651_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5696_;
goto v_resetjp_5653_;
}
v_resetjp_5653_:
{
lean_object* v___y_5657_; uint8_t v___x_5663_; lean_object* v___x_5664_; lean_object* v___y_5666_; lean_object* v___y_5667_; uint8_t v___x_5677_; 
v___x_5663_ = 1;
lean_inc(v_k_5647_);
v___x_5664_ = l_Lean_Name_toString(v_k_5647_, v___x_5663_);
v___x_5677_ = l_Lean_String_charactersIn(v_fst_5643_, v___x_5664_);
if (v___x_5677_ == 0)
{
lean_dec_ref(v___x_5664_);
lean_del_object(v___x_5654_);
lean_dec(v_v_5648_);
lean_dec(v_k_5647_);
v_init_5645_ = v_a_5652_;
v_x_5646_ = v_r_5650_;
goto _start;
}
else
{
lean_object* v_textDocument_x3f_5679_; 
v_textDocument_x3f_5679_ = lean_ctor_get(v_caps_5644_, 0);
if (lean_obj_tag(v_textDocument_x3f_5679_) == 0)
{
lean_dec_ref(v___x_5664_);
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
lean_object* v_val_5680_; lean_object* v_completion_x3f_5681_; 
v_val_5680_ = lean_ctor_get(v_textDocument_x3f_5679_, 0);
v_completion_x3f_5681_ = lean_ctor_get(v_val_5680_, 0);
if (lean_obj_tag(v_completion_x3f_5681_) == 0)
{
lean_dec_ref(v___x_5664_);
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
lean_object* v_val_5682_; 
v_val_5682_ = lean_ctor_get(v_completion_x3f_5681_, 0);
if (lean_obj_tag(v_val_5682_) == 0)
{
lean_dec_ref(v___x_5664_);
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
lean_object* v_val_5683_; 
v_val_5683_ = lean_ctor_get(v_val_5682_, 0);
if (lean_obj_tag(v_val_5683_) == 0)
{
lean_dec_ref(v___x_5664_);
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
lean_object* v_val_5684_; uint8_t v___x_5685_; 
v_val_5684_ = lean_ctor_get(v_val_5683_, 0);
v___x_5685_ = lean_unbox(v_val_5684_);
if (v___x_5685_ == 0)
{
lean_dec_ref(v___x_5664_);
lean_del_object(v___x_5654_);
goto v___jp_5661_;
}
else
{
uint8_t v___x_5686_; lean_object* v___x_5687_; 
v___x_5686_ = 0;
v___x_5687_ = l_Lean_Syntax_getRange_x3f(v_stx_5640_, v___x_5686_);
if (lean_obj_tag(v___x_5687_) == 1)
{
lean_object* v_val_5688_; 
v_val_5688_ = lean_ctor_get(v___x_5687_, 0);
lean_inc(v_val_5688_);
lean_dec_ref_known(v___x_5687_, 1);
if (v_snd_5642_ == 0)
{
lean_object* v_start_5689_; lean_object* v_stop_5690_; 
v_start_5689_ = lean_ctor_get(v_val_5688_, 0);
lean_inc(v_start_5689_);
v_stop_5690_ = lean_ctor_get(v_val_5688_, 1);
lean_inc(v_stop_5690_);
lean_dec(v_val_5688_);
v___y_5666_ = v_start_5689_;
v___y_5667_ = v_stop_5690_;
goto v___jp_5665_;
}
else
{
lean_object* v_start_5691_; lean_object* v_stop_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; 
v_start_5691_ = lean_ctor_get(v_val_5688_, 0);
lean_inc(v_start_5691_);
v_stop_5692_ = lean_ctor_get(v_val_5688_, 1);
lean_inc(v_stop_5692_);
lean_dec(v_val_5688_);
v___x_5693_ = lean_unsigned_to_nat(1u);
v___x_5694_ = lean_nat_add(v_stop_5692_, v___x_5693_);
lean_dec(v_stop_5692_);
v___y_5666_ = v_start_5691_;
v___y_5667_ = v___x_5694_;
goto v___jp_5665_;
}
}
else
{
lean_object* v___x_5695_; 
lean_dec(v___x_5687_);
lean_dec_ref(v___x_5664_);
lean_del_object(v___x_5654_);
v___x_5695_ = lean_box(0);
v___y_5657_ = v___x_5695_;
goto v___jp_5656_;
}
}
}
}
}
}
}
v___jp_5656_:
{
lean_object* v___x_5658_; lean_object* v_items_5659_; 
lean_inc_ref(v_mkItem_5639_);
v___x_5658_ = lean_apply_3(v_mkItem_5639_, v_k_5647_, v_v_5648_, v___y_5657_);
v_items_5659_ = lean_array_push(v_a_5652_, v___x_5658_);
v_init_5645_ = v_items_5659_;
v_x_5646_ = v_r_5650_;
goto _start;
}
v___jp_5661_:
{
lean_object* v___x_5662_; 
v___x_5662_ = lean_box(0);
v___y_5657_ = v___x_5662_;
goto v___jp_5656_;
}
v___jp_5665_:
{
lean_object* v_toCommandContextInfo_5668_; lean_object* v_fileMap_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v_range_5672_; lean_object* v___x_5673_; lean_object* v___x_5675_; 
v_toCommandContextInfo_5668_ = lean_ctor_get(v_ctx_5641_, 0);
v_fileMap_5669_ = lean_ctor_get(v_toCommandContextInfo_5668_, 2);
lean_inc_ref_n(v_fileMap_5669_, 2);
v___x_5670_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5669_, v___y_5666_);
lean_dec(v___y_5666_);
v___x_5671_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5669_, v___y_5667_);
lean_dec(v___y_5667_);
v_range_5672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_range_5672_, 0, v___x_5670_);
lean_ctor_set(v_range_5672_, 1, v___x_5671_);
lean_inc_ref(v_range_5672_);
v___x_5673_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5673_, 0, v___x_5664_);
lean_ctor_set(v___x_5673_, 1, v_range_5672_);
lean_ctor_set(v___x_5673_, 2, v_range_5672_);
if (v_isShared_5655_ == 0)
{
lean_ctor_set(v___x_5654_, 0, v___x_5673_);
v___x_5675_ = v___x_5654_;
goto v_reusejp_5674_;
}
else
{
lean_object* v_reuseFailAlloc_5676_; 
v_reuseFailAlloc_5676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5676_, 0, v___x_5673_);
v___x_5675_ = v_reuseFailAlloc_5676_;
goto v_reusejp_5674_;
}
v_reusejp_5674_:
{
v___y_5657_ = v___x_5675_;
goto v___jp_5656_;
}
}
}
}
else
{
lean_object* v___x_5697_; 
lean_dec_ref(v_ctx_5641_);
lean_dec_ref(v_mkItem_5639_);
v___x_5697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5697_, 0, v_init_5645_);
return v___x_5697_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0___boxed(lean_object* v_mkItem_5698_, lean_object* v_stx_5699_, lean_object* v_ctx_5700_, lean_object* v_snd_5701_, lean_object* v_fst_5702_, lean_object* v_caps_5703_, lean_object* v_init_5704_, lean_object* v_x_5705_){
_start:
{
uint8_t v_snd_1523__boxed_5706_; lean_object* v_res_5707_; 
v_snd_1523__boxed_5706_ = lean_unbox(v_snd_5701_);
v_res_5707_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5698_, v_stx_5699_, v_ctx_5700_, v_snd_1523__boxed_5706_, v_fst_5702_, v_caps_5703_, v_init_5704_, v_x_5705_);
lean_dec_ref(v_caps_5703_);
lean_dec_ref(v_fst_5702_);
lean_dec(v_stx_5699_);
return v_res_5707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(lean_object* v_entries_5708_, lean_object* v_stx_5709_, lean_object* v_caps_5710_, lean_object* v_ctx_5711_, lean_object* v_mkItem_5712_){
_start:
{
lean_object* v_fst_5714_; uint8_t v_snd_5715_; uint8_t v___x_5719_; lean_object* v___x_5720_; 
v___x_5719_ = 0;
v___x_5720_ = l_Lean_Syntax_getSubstring_x3f(v_stx_5709_, v___x_5719_, v___x_5719_);
if (lean_obj_tag(v___x_5720_) == 0)
{
lean_object* v___x_5721_; 
v___x_5721_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_5714_ = v___x_5721_;
v_snd_5715_ = v___x_5719_;
goto v___jp_5713_;
}
else
{
lean_object* v_val_5722_; lean_object* v_str_5723_; lean_object* v_startPos_5724_; lean_object* v_stopPos_5725_; uint8_t v___y_5727_; uint8_t v___x_5729_; 
v_val_5722_ = lean_ctor_get(v___x_5720_, 0);
lean_inc(v_val_5722_);
lean_dec_ref_known(v___x_5720_, 1);
v_str_5723_ = lean_ctor_get(v_val_5722_, 0);
lean_inc_ref(v_str_5723_);
v_startPos_5724_ = lean_ctor_get(v_val_5722_, 1);
lean_inc(v_startPos_5724_);
v_stopPos_5725_ = lean_ctor_get(v_val_5722_, 2);
lean_inc(v_stopPos_5725_);
lean_dec(v_val_5722_);
v___x_5729_ = lean_string_utf8_at_end(v_str_5723_, v_stopPos_5725_);
if (v___x_5729_ == 0)
{
uint32_t v___x_5730_; uint32_t v___x_5731_; uint8_t v___x_5732_; 
v___x_5730_ = lean_string_utf8_get(v_str_5723_, v_stopPos_5725_);
v___x_5731_ = 46;
v___x_5732_ = lean_uint32_dec_eq(v___x_5730_, v___x_5731_);
if (v___x_5732_ == 0)
{
v___y_5727_ = v___x_5732_;
goto v___jp_5726_;
}
else
{
lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; 
v___x_5733_ = lean_string_utf8_extract(v_str_5723_, v_startPos_5724_, v_stopPos_5725_);
lean_dec(v_stopPos_5725_);
lean_dec(v_startPos_5724_);
lean_dec_ref(v_str_5723_);
v___x_5734_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_5735_ = lean_string_append(v___x_5733_, v___x_5734_);
v_fst_5714_ = v___x_5735_;
v_snd_5715_ = v___x_5732_;
goto v___jp_5713_;
}
}
else
{
v___y_5727_ = v___x_5719_;
goto v___jp_5726_;
}
v___jp_5726_:
{
lean_object* v___x_5728_; 
v___x_5728_ = lean_string_utf8_extract(v_str_5723_, v_startPos_5724_, v_stopPos_5725_);
lean_dec(v_stopPos_5725_);
lean_dec(v_startPos_5724_);
lean_dec_ref(v_str_5723_);
v_fst_5714_ = v___x_5728_;
v_snd_5715_ = v___y_5727_;
goto v___jp_5713_;
}
}
v___jp_5713_:
{
lean_object* v_items_5716_; lean_object* v___x_5717_; lean_object* v_a_5718_; 
v_items_5716_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v___x_5717_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5712_, v_stx_5709_, v_ctx_5711_, v_snd_5715_, v_fst_5714_, v_caps_5710_, v_items_5716_, v_entries_5708_);
lean_dec_ref(v_fst_5714_);
v_a_5718_ = lean_ctor_get(v___x_5717_, 0);
lean_inc(v_a_5718_);
lean_dec_ref(v___x_5717_);
return v_a_5718_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0___boxed(lean_object* v_entries_5736_, lean_object* v_stx_5737_, lean_object* v_caps_5738_, lean_object* v_ctx_5739_, lean_object* v_mkItem_5740_){
_start:
{
lean_object* v_res_5741_; 
v_res_5741_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(v_entries_5736_, v_stx_5737_, v_caps_5738_, v_ctx_5739_, v_mkItem_5740_);
lean_dec_ref(v_caps_5738_);
lean_dec(v_stx_5737_);
return v_res_5741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1(lean_object* v_completionInfoPos_5742_, lean_object* v_uri_5743_, lean_object* v_pos_5744_, lean_object* v_stx_5745_, lean_object* v_caps_5746_, lean_object* v_ctx_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_){
_start:
{
lean_object* v_ref_5753_; lean_object* v___x_5754_; 
v_ref_5753_ = lean_ctor_get(v___y_5750_, 2);
v___x_5754_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_5754_) == 0)
{
lean_object* v_a_5755_; lean_object* v___x_5757_; uint8_t v_isShared_5758_; uint8_t v_isSharedCheck_5767_; 
v_a_5755_ = lean_ctor_get(v___x_5754_, 0);
v_isSharedCheck_5767_ = !lean_is_exclusive(v___x_5754_);
if (v_isSharedCheck_5767_ == 0)
{
v___x_5757_ = v___x_5754_;
v_isShared_5758_ = v_isSharedCheck_5767_;
goto v_resetjp_5756_;
}
else
{
lean_inc(v_a_5755_);
lean_dec(v___x_5754_);
v___x_5757_ = lean_box(0);
v_isShared_5758_ = v_isSharedCheck_5767_;
goto v_resetjp_5756_;
}
v_resetjp_5756_:
{
lean_object* v___x_5759_; lean_object* v___f_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5765_; 
v___x_5759_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_5750_);
v___f_5760_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_optionCompletion___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5760_, 0, v___x_5759_);
lean_closure_set(v___f_5760_, 1, v_completionInfoPos_5742_);
lean_closure_set(v___f_5760_, 2, v_uri_5743_);
lean_closure_set(v___f_5760_, 3, v_pos_5744_);
v___x_5761_ = lean_unsigned_to_nat(1u);
v___x_5762_ = l_Lean_Syntax_getArg(v_stx_5745_, v___x_5761_);
v___x_5763_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(v_a_5755_, v___x_5762_, v_caps_5746_, v_ctx_5747_, v___f_5760_);
lean_dec(v___x_5762_);
if (v_isShared_5758_ == 0)
{
lean_ctor_set(v___x_5757_, 0, v___x_5763_);
v___x_5765_ = v___x_5757_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5766_; 
v_reuseFailAlloc_5766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5766_, 0, v___x_5763_);
v___x_5765_ = v_reuseFailAlloc_5766_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
return v___x_5765_;
}
}
}
else
{
lean_object* v_a_5768_; lean_object* v___x_5770_; uint8_t v_isShared_5771_; uint8_t v_isSharedCheck_5779_; 
lean_dec_ref(v_ctx_5747_);
lean_dec_ref(v_pos_5744_);
lean_dec_ref(v_uri_5743_);
lean_dec(v_completionInfoPos_5742_);
v_a_5768_ = lean_ctor_get(v___x_5754_, 0);
v_isSharedCheck_5779_ = !lean_is_exclusive(v___x_5754_);
if (v_isSharedCheck_5779_ == 0)
{
v___x_5770_ = v___x_5754_;
v_isShared_5771_ = v_isSharedCheck_5779_;
goto v_resetjp_5769_;
}
else
{
lean_inc(v_a_5768_);
lean_dec(v___x_5754_);
v___x_5770_ = lean_box(0);
v_isShared_5771_ = v_isSharedCheck_5779_;
goto v_resetjp_5769_;
}
v_resetjp_5769_:
{
lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5777_; 
v___x_5772_ = lean_io_error_to_string(v_a_5768_);
v___x_5773_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5773_, 0, v___x_5772_);
v___x_5774_ = l_Lean_MessageData_ofFormat(v___x_5773_);
lean_inc(v_ref_5753_);
v___x_5775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5775_, 0, v_ref_5753_);
lean_ctor_set(v___x_5775_, 1, v___x_5774_);
if (v_isShared_5771_ == 0)
{
lean_ctor_set(v___x_5770_, 0, v___x_5775_);
v___x_5777_ = v___x_5770_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5778_; 
v_reuseFailAlloc_5778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5778_, 0, v___x_5775_);
v___x_5777_ = v_reuseFailAlloc_5778_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
return v___x_5777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1___boxed(lean_object* v_completionInfoPos_5780_, lean_object* v_uri_5781_, lean_object* v_pos_5782_, lean_object* v_stx_5783_, lean_object* v_caps_5784_, lean_object* v_ctx_5785_, lean_object* v___y_5786_, lean_object* v___y_5787_, lean_object* v___y_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_){
_start:
{
lean_object* v_res_5791_; 
v_res_5791_ = l_Lean_Server_Completion_optionCompletion___lam__1(v_completionInfoPos_5780_, v_uri_5781_, v_pos_5782_, v_stx_5783_, v_caps_5784_, v_ctx_5785_, v___y_5786_, v___y_5787_, v___y_5788_, v___y_5789_);
lean_dec(v___y_5789_);
lean_dec_ref(v___y_5788_);
lean_dec(v___y_5787_);
lean_dec_ref(v___y_5786_);
lean_dec_ref(v_caps_5784_);
lean_dec(v_stx_5783_);
return v_res_5791_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__0(void){
_start:
{
lean_object* v___x_5792_; 
v___x_5792_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_5792_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__1(void){
_start:
{
lean_object* v___x_5793_; lean_object* v___x_5794_; 
v___x_5793_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__0, &l_Lean_Server_Completion_optionCompletion___closed__0_once, _init_l_Lean_Server_Completion_optionCompletion___closed__0);
v___x_5794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5794_, 0, v___x_5793_);
return v___x_5794_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__2(void){
_start:
{
lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; 
v___x_5795_ = lean_unsigned_to_nat(32u);
v___x_5796_ = lean_mk_empty_array_with_capacity(v___x_5795_);
v___x_5797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5797_, 0, v___x_5796_);
return v___x_5797_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__3(void){
_start:
{
size_t v___x_5798_; lean_object* v___x_5799_; lean_object* v___x_5800_; lean_object* v___x_5801_; lean_object* v___x_5802_; lean_object* v___x_5803_; 
v___x_5798_ = ((size_t)5ULL);
v___x_5799_ = lean_unsigned_to_nat(0u);
v___x_5800_ = lean_unsigned_to_nat(32u);
v___x_5801_ = lean_mk_empty_array_with_capacity(v___x_5800_);
v___x_5802_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__2, &l_Lean_Server_Completion_optionCompletion___closed__2_once, _init_l_Lean_Server_Completion_optionCompletion___closed__2);
v___x_5803_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5803_, 0, v___x_5802_);
lean_ctor_set(v___x_5803_, 1, v___x_5801_);
lean_ctor_set(v___x_5803_, 2, v___x_5799_);
lean_ctor_set(v___x_5803_, 3, v___x_5799_);
lean_ctor_set_usize(v___x_5803_, 4, v___x_5798_);
return v___x_5803_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__4(void){
_start:
{
lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; 
v___x_5804_ = lean_box(1);
v___x_5805_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__3, &l_Lean_Server_Completion_optionCompletion___closed__3_once, _init_l_Lean_Server_Completion_optionCompletion___closed__3);
v___x_5806_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__1, &l_Lean_Server_Completion_optionCompletion___closed__1_once, _init_l_Lean_Server_Completion_optionCompletion___closed__1);
v___x_5807_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5807_, 0, v___x_5806_);
lean_ctor_set(v___x_5807_, 1, v___x_5805_);
lean_ctor_set(v___x_5807_, 2, v___x_5804_);
return v___x_5807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion(lean_object* v_uri_5808_, lean_object* v_pos_5809_, lean_object* v_completionInfoPos_5810_, lean_object* v_ctx_5811_, lean_object* v_stx_5812_, lean_object* v_caps_5813_){
_start:
{
lean_object* v___f_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; 
lean_inc_ref(v_ctx_5811_);
v___f_5815_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_optionCompletion___lam__1___boxed), 11, 6);
lean_closure_set(v___f_5815_, 0, v_completionInfoPos_5810_);
lean_closure_set(v___f_5815_, 1, v_uri_5808_);
lean_closure_set(v___f_5815_, 2, v_pos_5809_);
lean_closure_set(v___f_5815_, 3, v_stx_5812_);
lean_closure_set(v___f_5815_, 4, v_caps_5813_);
lean_closure_set(v___f_5815_, 5, v_ctx_5811_);
v___x_5816_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__4, &l_Lean_Server_Completion_optionCompletion___closed__4_once, _init_l_Lean_Server_Completion_optionCompletion___closed__4);
v___x_5817_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_5811_, v___x_5816_, v___f_5815_);
return v___x_5817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___boxed(lean_object* v_uri_5818_, lean_object* v_pos_5819_, lean_object* v_completionInfoPos_5820_, lean_object* v_ctx_5821_, lean_object* v_stx_5822_, lean_object* v_caps_5823_, lean_object* v_a_5824_){
_start:
{
lean_object* v_res_5825_; 
v_res_5825_ = l_Lean_Server_Completion_optionCompletion(v_uri_5818_, v_pos_5819_, v_completionInfoPos_5820_, v_ctx_5821_, v_stx_5822_, v_caps_5823_);
return v_res_5825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0(lean_object* v_completionInfoPos_5835_, lean_object* v_uri_5836_, lean_object* v_pos_5837_, lean_object* v_name_5838_, lean_object* v_explan_5839_, lean_object* v_textEdit_x3f_5840_){
_start:
{
lean_object* v_metadata_5841_; lean_object* v_removedVersion_x3f_5842_; uint8_t v___x_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; uint8_t v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5852_; lean_object* v___x_5853_; lean_object* v___x_5854_; 
v_metadata_5841_ = lean_ctor_get(v_explan_5839_, 1);
v_removedVersion_x3f_5842_ = lean_ctor_get(v_metadata_5841_, 2);
v___x_5843_ = 1;
v___x_5844_ = l_Lean_Name_toString(v_name_5838_, v___x_5843_);
v___x_5845_ = ((lean_object*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1));
v___x_5846_ = 1;
v___x_5847_ = l_Lean_ErrorExplanation_summaryWithSeverity(v_explan_5839_);
v___x_5848_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5848_, 0, v___x_5847_);
lean_ctor_set_uint8(v___x_5848_, sizeof(void*)*1, v___x_5846_);
v___x_5849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5849_, 0, v___x_5848_);
v___x_5850_ = ((lean_object*)(l_Lean_Server_Completion_optionCompletion___lam__0___closed__2));
v___x_5851_ = lean_box(0);
v___x_5852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5852_, 0, v_completionInfoPos_5835_);
v___x_5853_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5853_, 0, v_uri_5836_);
lean_ctor_set(v___x_5853_, 1, v_pos_5837_);
lean_ctor_set(v___x_5853_, 2, v___x_5852_);
lean_ctor_set(v___x_5853_, 3, v___x_5851_);
v___x_5854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5854_, 0, v___x_5853_);
if (lean_obj_tag(v_removedVersion_x3f_5842_) == 0)
{
lean_object* v___x_5855_; 
v___x_5855_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5855_, 0, v___x_5844_);
lean_ctor_set(v___x_5855_, 1, v___x_5845_);
lean_ctor_set(v___x_5855_, 2, v___x_5849_);
lean_ctor_set(v___x_5855_, 3, v___x_5850_);
lean_ctor_set(v___x_5855_, 4, v_textEdit_x3f_5840_);
lean_ctor_set(v___x_5855_, 5, v___x_5851_);
lean_ctor_set(v___x_5855_, 6, v___x_5854_);
lean_ctor_set(v___x_5855_, 7, v___x_5851_);
return v___x_5855_;
}
else
{
lean_object* v___x_5856_; lean_object* v___x_5857_; 
v___x_5856_ = ((lean_object*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3));
v___x_5857_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5857_, 0, v___x_5844_);
lean_ctor_set(v___x_5857_, 1, v___x_5845_);
lean_ctor_set(v___x_5857_, 2, v___x_5849_);
lean_ctor_set(v___x_5857_, 3, v___x_5850_);
lean_ctor_set(v___x_5857_, 4, v_textEdit_x3f_5840_);
lean_ctor_set(v___x_5857_, 5, v___x_5851_);
lean_ctor_set(v___x_5857_, 6, v___x_5854_);
lean_ctor_set(v___x_5857_, 7, v___x_5856_);
return v___x_5857_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed(lean_object* v_completionInfoPos_5858_, lean_object* v_uri_5859_, lean_object* v_pos_5860_, lean_object* v_name_5861_, lean_object* v_explan_5862_, lean_object* v_textEdit_x3f_5863_){
_start:
{
lean_object* v_res_5864_; 
v_res_5864_ = l_Lean_Server_Completion_errorNameCompletion___lam__0(v_completionInfoPos_5858_, v_uri_5859_, v_pos_5860_, v_name_5861_, v_explan_5862_, v_textEdit_x3f_5863_);
lean_dec_ref(v_explan_5862_);
return v_res_5864_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(lean_object* v_init_5865_, lean_object* v_x_5866_){
_start:
{
if (lean_obj_tag(v_x_5866_) == 0)
{
lean_object* v_k_5867_; lean_object* v_v_5868_; lean_object* v_l_5869_; lean_object* v_r_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; 
v_k_5867_ = lean_ctor_get(v_x_5866_, 1);
v_v_5868_ = lean_ctor_get(v_x_5866_, 2);
v_l_5869_ = lean_ctor_get(v_x_5866_, 3);
v_r_5870_ = lean_ctor_get(v_x_5866_, 4);
v___x_5871_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_5865_, v_l_5869_);
lean_inc(v_v_5868_);
lean_inc(v_k_5867_);
v___x_5872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5872_, 0, v_k_5867_);
lean_ctor_set(v___x_5872_, 1, v_v_5868_);
v___x_5873_ = lean_array_push(v___x_5871_, v___x_5872_);
v_init_5865_ = v___x_5873_;
v_x_5866_ = v_r_5870_;
goto _start;
}
else
{
return v_init_5865_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1___boxed(lean_object* v_init_5875_, lean_object* v_x_5876_){
_start:
{
lean_object* v_res_5877_; 
v_res_5877_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_5875_, v_x_5876_);
lean_dec(v_x_5876_);
return v_res_5877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(lean_object* v_hi_5878_, lean_object* v_pivot_5879_, lean_object* v_as_5880_, lean_object* v_i_5881_, lean_object* v_k_5882_){
_start:
{
uint8_t v___x_5883_; 
v___x_5883_ = lean_nat_dec_lt(v_k_5882_, v_hi_5878_);
if (v___x_5883_ == 0)
{
lean_object* v___x_5884_; lean_object* v___x_5885_; 
lean_dec(v_k_5882_);
lean_dec_ref(v_pivot_5879_);
v___x_5884_ = lean_array_fswap(v_as_5880_, v_i_5881_, v_hi_5878_);
v___x_5885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5885_, 0, v_i_5881_);
lean_ctor_set(v___x_5885_, 1, v___x_5884_);
return v___x_5885_;
}
else
{
lean_object* v___x_5886_; lean_object* v_fst_5887_; lean_object* v_fst_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; uint8_t v___x_5891_; 
v___x_5886_ = lean_array_fget_borrowed(v_as_5880_, v_k_5882_);
v_fst_5887_ = lean_ctor_get(v___x_5886_, 0);
v_fst_5888_ = lean_ctor_get(v_pivot_5879_, 0);
lean_inc(v_fst_5887_);
v___x_5889_ = l_Lean_Name_toString(v_fst_5887_, v___x_5883_);
lean_inc(v_fst_5888_);
v___x_5890_ = l_Lean_Name_toString(v_fst_5888_, v___x_5883_);
v___x_5891_ = lean_string_dec_lt(v___x_5889_, v___x_5890_);
lean_dec_ref(v___x_5890_);
lean_dec_ref(v___x_5889_);
if (v___x_5891_ == 0)
{
lean_object* v___x_5892_; lean_object* v___x_5893_; 
v___x_5892_ = lean_unsigned_to_nat(1u);
v___x_5893_ = lean_nat_add(v_k_5882_, v___x_5892_);
lean_dec(v_k_5882_);
v_k_5882_ = v___x_5893_;
goto _start;
}
else
{
lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; 
v___x_5895_ = lean_array_fswap(v_as_5880_, v_i_5881_, v_k_5882_);
v___x_5896_ = lean_unsigned_to_nat(1u);
v___x_5897_ = lean_nat_add(v_i_5881_, v___x_5896_);
lean_dec(v_i_5881_);
v___x_5898_ = lean_nat_add(v_k_5882_, v___x_5896_);
lean_dec(v_k_5882_);
v_as_5880_ = v___x_5895_;
v_i_5881_ = v___x_5897_;
v_k_5882_ = v___x_5898_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_hi_5900_, lean_object* v_pivot_5901_, lean_object* v_as_5902_, lean_object* v_i_5903_, lean_object* v_k_5904_){
_start:
{
lean_object* v_res_5905_; 
v_res_5905_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_5900_, v_pivot_5901_, v_as_5902_, v_i_5903_, v_k_5904_);
lean_dec(v_hi_5900_);
return v_res_5905_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(uint8_t v___x_5906_, lean_object* v_e_5907_, lean_object* v_e_x27_5908_){
_start:
{
lean_object* v_fst_5909_; lean_object* v_fst_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; uint8_t v___x_5913_; 
v_fst_5909_ = lean_ctor_get(v_e_5907_, 0);
lean_inc(v_fst_5909_);
lean_dec_ref(v_e_5907_);
v_fst_5910_ = lean_ctor_get(v_e_x27_5908_, 0);
lean_inc(v_fst_5910_);
lean_dec_ref(v_e_x27_5908_);
v___x_5911_ = l_Lean_Name_toString(v_fst_5909_, v___x_5906_);
v___x_5912_ = l_Lean_Name_toString(v_fst_5910_, v___x_5906_);
v___x_5913_ = lean_string_dec_lt(v___x_5911_, v___x_5912_);
lean_dec_ref(v___x_5912_);
lean_dec_ref(v___x_5911_);
return v___x_5913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___x_5914_, lean_object* v_e_5915_, lean_object* v_e_x27_5916_){
_start:
{
uint8_t v___x_1705__boxed_5917_; uint8_t v_res_5918_; lean_object* v_r_5919_; 
v___x_1705__boxed_5917_ = lean_unbox(v___x_5914_);
v_res_5918_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_1705__boxed_5917_, v_e_5915_, v_e_x27_5916_);
v_r_5919_ = lean_box(v_res_5918_);
return v_r_5919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(lean_object* v_n_5920_, lean_object* v_as_5921_, lean_object* v_lo_5922_, lean_object* v_hi_5923_){
_start:
{
lean_object* v___y_5925_; uint8_t v___x_5935_; 
v___x_5935_ = lean_nat_dec_lt(v_lo_5922_, v_hi_5923_);
if (v___x_5935_ == 0)
{
lean_dec(v_lo_5922_);
return v_as_5921_;
}
else
{
lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v_mid_5938_; lean_object* v___y_5940_; lean_object* v___y_5946_; lean_object* v___x_5951_; lean_object* v___x_5952_; uint8_t v___x_5953_; 
v___x_5936_ = lean_nat_add(v_lo_5922_, v_hi_5923_);
v___x_5937_ = lean_unsigned_to_nat(1u);
v_mid_5938_ = lean_nat_shiftr(v___x_5936_, v___x_5937_);
lean_dec(v___x_5936_);
v___x_5951_ = lean_array_fget_borrowed(v_as_5921_, v_mid_5938_);
v___x_5952_ = lean_array_fget_borrowed(v_as_5921_, v_lo_5922_);
lean_inc(v___x_5952_);
lean_inc(v___x_5951_);
v___x_5953_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5935_, v___x_5951_, v___x_5952_);
if (v___x_5953_ == 0)
{
v___y_5946_ = v_as_5921_;
goto v___jp_5945_;
}
else
{
lean_object* v___x_5954_; 
v___x_5954_ = lean_array_fswap(v_as_5921_, v_lo_5922_, v_mid_5938_);
v___y_5946_ = v___x_5954_;
goto v___jp_5945_;
}
v___jp_5939_:
{
lean_object* v___x_5941_; lean_object* v___x_5942_; uint8_t v___x_5943_; 
v___x_5941_ = lean_array_fget_borrowed(v___y_5940_, v_mid_5938_);
v___x_5942_ = lean_array_fget_borrowed(v___y_5940_, v_hi_5923_);
lean_inc(v___x_5942_);
lean_inc(v___x_5941_);
v___x_5943_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5935_, v___x_5941_, v___x_5942_);
if (v___x_5943_ == 0)
{
lean_dec(v_mid_5938_);
v___y_5925_ = v___y_5940_;
goto v___jp_5924_;
}
else
{
lean_object* v___x_5944_; 
v___x_5944_ = lean_array_fswap(v___y_5940_, v_mid_5938_, v_hi_5923_);
lean_dec(v_mid_5938_);
v___y_5925_ = v___x_5944_;
goto v___jp_5924_;
}
}
v___jp_5945_:
{
lean_object* v___x_5947_; lean_object* v___x_5948_; uint8_t v___x_5949_; 
v___x_5947_ = lean_array_fget_borrowed(v___y_5946_, v_hi_5923_);
v___x_5948_ = lean_array_fget_borrowed(v___y_5946_, v_lo_5922_);
lean_inc(v___x_5948_);
lean_inc(v___x_5947_);
v___x_5949_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_5935_, v___x_5947_, v___x_5948_);
if (v___x_5949_ == 0)
{
v___y_5940_ = v___y_5946_;
goto v___jp_5939_;
}
else
{
lean_object* v___x_5950_; 
v___x_5950_ = lean_array_fswap(v___y_5946_, v_lo_5922_, v_hi_5923_);
v___y_5940_ = v___x_5950_;
goto v___jp_5939_;
}
}
}
v___jp_5924_:
{
lean_object* v_pivot_5926_; lean_object* v___x_5927_; lean_object* v_fst_5928_; lean_object* v_snd_5929_; uint8_t v___x_5930_; 
v_pivot_5926_ = lean_array_fget(v___y_5925_, v_hi_5923_);
lean_inc_n(v_lo_5922_, 2);
v___x_5927_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_5923_, v_pivot_5926_, v___y_5925_, v_lo_5922_, v_lo_5922_);
v_fst_5928_ = lean_ctor_get(v___x_5927_, 0);
lean_inc(v_fst_5928_);
v_snd_5929_ = lean_ctor_get(v___x_5927_, 1);
lean_inc(v_snd_5929_);
lean_dec_ref(v___x_5927_);
v___x_5930_ = lean_nat_dec_le(v_hi_5923_, v_fst_5928_);
if (v___x_5930_ == 0)
{
lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; 
v___x_5931_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_5920_, v_snd_5929_, v_lo_5922_, v_fst_5928_);
v___x_5932_ = lean_unsigned_to_nat(1u);
v___x_5933_ = lean_nat_add(v_fst_5928_, v___x_5932_);
lean_dec(v_fst_5928_);
v_as_5921_ = v___x_5931_;
v_lo_5922_ = v___x_5933_;
goto _start;
}
else
{
lean_dec(v_fst_5928_);
lean_dec(v_lo_5922_);
return v_snd_5929_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___boxed(lean_object* v_n_5955_, lean_object* v_as_5956_, lean_object* v_lo_5957_, lean_object* v_hi_5958_){
_start:
{
lean_object* v_res_5959_; 
v_res_5959_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_5955_, v_as_5956_, v_lo_5957_, v_hi_5958_);
lean_dec(v_hi_5958_);
lean_dec(v_n_5955_);
return v_res_5959_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(lean_object* v___y_5962_){
_start:
{
lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v_env_5966_; lean_object* v___x_5967_; lean_object* v_toEnvExtension_5968_; lean_object* v_asyncMode_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___y_5977_; lean_object* v___y_5978_; uint8_t v___x_5981_; 
v___x_5964_ = lean_box(1);
v___x_5965_ = lean_st_ref_get(v___y_5962_);
v_env_5966_ = lean_ctor_get(v___x_5965_, 0);
lean_inc_ref(v_env_5966_);
lean_dec(v___x_5965_);
v___x_5967_ = l_Lean_errorExplanationExt;
v_toEnvExtension_5968_ = lean_ctor_get(v___x_5967_, 0);
v_asyncMode_5969_ = lean_ctor_get(v_toEnvExtension_5968_, 2);
v___x_5970_ = lean_box(0);
v___x_5971_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_5964_, v___x_5967_, v_env_5966_, v_asyncMode_5969_, v___x_5970_);
v___x_5972_ = lean_unsigned_to_nat(0u);
v___x_5973_ = ((lean_object*)(l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0));
v___x_5974_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v___x_5973_, v___x_5971_);
lean_dec(v___x_5971_);
v___x_5975_ = lean_array_get_size(v___x_5974_);
v___x_5981_ = lean_nat_dec_eq(v___x_5975_, v___x_5972_);
if (v___x_5981_ == 0)
{
lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___y_5985_; uint8_t v___x_5987_; 
v___x_5982_ = lean_unsigned_to_nat(1u);
v___x_5983_ = lean_nat_sub(v___x_5975_, v___x_5982_);
v___x_5987_ = lean_nat_dec_le(v___x_5972_, v___x_5983_);
if (v___x_5987_ == 0)
{
lean_inc(v___x_5983_);
v___y_5985_ = v___x_5983_;
goto v___jp_5984_;
}
else
{
v___y_5985_ = v___x_5972_;
goto v___jp_5984_;
}
v___jp_5984_:
{
uint8_t v___x_5986_; 
v___x_5986_ = lean_nat_dec_le(v___y_5985_, v___x_5983_);
if (v___x_5986_ == 0)
{
lean_dec(v___x_5983_);
lean_inc(v___y_5985_);
v___y_5977_ = v___y_5985_;
v___y_5978_ = v___y_5985_;
goto v___jp_5976_;
}
else
{
v___y_5977_ = v___y_5985_;
v___y_5978_ = v___x_5983_;
goto v___jp_5976_;
}
}
}
else
{
lean_object* v___x_5988_; 
v___x_5988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5988_, 0, v___x_5974_);
return v___x_5988_;
}
v___jp_5976_:
{
lean_object* v___x_5979_; lean_object* v___x_5980_; 
v___x_5979_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v___x_5975_, v___x_5974_, v___y_5977_, v___y_5978_);
lean_dec(v___y_5978_);
v___x_5980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5980_, 0, v___x_5979_);
return v___x_5980_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___boxed(lean_object* v___y_5989_, lean_object* v___y_5990_){
_start:
{
lean_object* v_res_5991_; 
v_res_5991_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_5989_);
lean_dec(v___y_5989_);
return v_res_5991_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(lean_object* v_mkItem_5992_, lean_object* v_stx_5993_, lean_object* v_ctx_5994_, uint8_t v_snd_5995_, lean_object* v_fst_5996_, lean_object* v_caps_5997_, lean_object* v_as_5998_, size_t v_sz_5999_, size_t v_i_6000_, lean_object* v_b_6001_){
_start:
{
lean_object* v_a_6003_; uint8_t v___x_6007_; 
v___x_6007_ = lean_usize_dec_lt(v_i_6000_, v_sz_5999_);
if (v___x_6007_ == 0)
{
lean_dec_ref(v_ctx_5994_);
lean_dec_ref(v_mkItem_5992_);
return v_b_6001_;
}
else
{
lean_object* v_a_6008_; lean_object* v_fst_6009_; lean_object* v_snd_6010_; lean_object* v___x_6012_; uint8_t v_isShared_6013_; uint8_t v_isSharedCheck_6051_; 
v_a_6008_ = lean_array_uget(v_as_5998_, v_i_6000_);
v_fst_6009_ = lean_ctor_get(v_a_6008_, 0);
v_snd_6010_ = lean_ctor_get(v_a_6008_, 1);
v_isSharedCheck_6051_ = !lean_is_exclusive(v_a_6008_);
if (v_isSharedCheck_6051_ == 0)
{
v___x_6012_ = v_a_6008_;
v_isShared_6013_ = v_isSharedCheck_6051_;
goto v_resetjp_6011_;
}
else
{
lean_inc(v_snd_6010_);
lean_inc(v_fst_6009_);
lean_dec(v_a_6008_);
v___x_6012_ = lean_box(0);
v_isShared_6013_ = v_isSharedCheck_6051_;
goto v_resetjp_6011_;
}
v_resetjp_6011_:
{
lean_object* v___y_6015_; lean_object* v___x_6020_; lean_object* v___y_6022_; lean_object* v___y_6023_; uint8_t v___x_6033_; 
lean_inc(v_fst_6009_);
v___x_6020_ = l_Lean_Name_toString(v_fst_6009_, v___x_6007_);
v___x_6033_ = l_Lean_String_charactersIn(v_fst_5996_, v___x_6020_);
if (v___x_6033_ == 0)
{
lean_dec_ref(v___x_6020_);
lean_del_object(v___x_6012_);
lean_dec(v_snd_6010_);
lean_dec(v_fst_6009_);
v_a_6003_ = v_b_6001_;
goto v___jp_6002_;
}
else
{
lean_object* v_textDocument_x3f_6034_; 
v_textDocument_x3f_6034_ = lean_ctor_get(v_caps_5997_, 0);
if (lean_obj_tag(v_textDocument_x3f_6034_) == 0)
{
lean_dec_ref(v___x_6020_);
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
lean_object* v_val_6035_; lean_object* v_completion_x3f_6036_; 
v_val_6035_ = lean_ctor_get(v_textDocument_x3f_6034_, 0);
v_completion_x3f_6036_ = lean_ctor_get(v_val_6035_, 0);
if (lean_obj_tag(v_completion_x3f_6036_) == 0)
{
lean_dec_ref(v___x_6020_);
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
lean_object* v_val_6037_; 
v_val_6037_ = lean_ctor_get(v_completion_x3f_6036_, 0);
if (lean_obj_tag(v_val_6037_) == 0)
{
lean_dec_ref(v___x_6020_);
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
lean_object* v_val_6038_; 
v_val_6038_ = lean_ctor_get(v_val_6037_, 0);
if (lean_obj_tag(v_val_6038_) == 0)
{
lean_dec_ref(v___x_6020_);
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
lean_object* v_val_6039_; uint8_t v___x_6040_; 
v_val_6039_ = lean_ctor_get(v_val_6038_, 0);
v___x_6040_ = lean_unbox(v_val_6039_);
if (v___x_6040_ == 0)
{
lean_dec_ref(v___x_6020_);
lean_del_object(v___x_6012_);
goto v___jp_6018_;
}
else
{
uint8_t v___x_6041_; lean_object* v___x_6042_; 
v___x_6041_ = 0;
v___x_6042_ = l_Lean_Syntax_getRange_x3f(v_stx_5993_, v___x_6041_);
if (lean_obj_tag(v___x_6042_) == 1)
{
lean_object* v_val_6043_; 
v_val_6043_ = lean_ctor_get(v___x_6042_, 0);
lean_inc(v_val_6043_);
lean_dec_ref_known(v___x_6042_, 1);
if (v_snd_5995_ == 0)
{
lean_object* v_start_6044_; lean_object* v_stop_6045_; 
v_start_6044_ = lean_ctor_get(v_val_6043_, 0);
lean_inc(v_start_6044_);
v_stop_6045_ = lean_ctor_get(v_val_6043_, 1);
lean_inc(v_stop_6045_);
lean_dec(v_val_6043_);
v___y_6022_ = v_start_6044_;
v___y_6023_ = v_stop_6045_;
goto v___jp_6021_;
}
else
{
lean_object* v_start_6046_; lean_object* v_stop_6047_; lean_object* v___x_6048_; lean_object* v___x_6049_; 
v_start_6046_ = lean_ctor_get(v_val_6043_, 0);
lean_inc(v_start_6046_);
v_stop_6047_ = lean_ctor_get(v_val_6043_, 1);
lean_inc(v_stop_6047_);
lean_dec(v_val_6043_);
v___x_6048_ = lean_unsigned_to_nat(1u);
v___x_6049_ = lean_nat_add(v_stop_6047_, v___x_6048_);
lean_dec(v_stop_6047_);
v___y_6022_ = v_start_6046_;
v___y_6023_ = v___x_6049_;
goto v___jp_6021_;
}
}
else
{
lean_object* v___x_6050_; 
lean_dec(v___x_6042_);
lean_dec_ref(v___x_6020_);
lean_del_object(v___x_6012_);
v___x_6050_ = lean_box(0);
v___y_6015_ = v___x_6050_;
goto v___jp_6014_;
}
}
}
}
}
}
}
v___jp_6014_:
{
lean_object* v___x_6016_; lean_object* v_items_6017_; 
lean_inc_ref(v_mkItem_5992_);
v___x_6016_ = lean_apply_3(v_mkItem_5992_, v_fst_6009_, v_snd_6010_, v___y_6015_);
v_items_6017_ = lean_array_push(v_b_6001_, v___x_6016_);
v_a_6003_ = v_items_6017_;
goto v___jp_6002_;
}
v___jp_6018_:
{
lean_object* v___x_6019_; 
v___x_6019_ = lean_box(0);
v___y_6015_ = v___x_6019_;
goto v___jp_6014_;
}
v___jp_6021_:
{
lean_object* v_toCommandContextInfo_6024_; lean_object* v_fileMap_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v_range_6029_; 
v_toCommandContextInfo_6024_ = lean_ctor_get(v_ctx_5994_, 0);
v_fileMap_6025_ = lean_ctor_get(v_toCommandContextInfo_6024_, 2);
lean_inc_ref_n(v_fileMap_6025_, 2);
v___x_6026_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_6025_, v___y_6022_);
lean_dec(v___y_6022_);
v___x_6027_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_6025_, v___y_6023_);
lean_dec(v___y_6023_);
if (v_isShared_6013_ == 0)
{
lean_ctor_set(v___x_6012_, 1, v___x_6027_);
lean_ctor_set(v___x_6012_, 0, v___x_6026_);
v_range_6029_ = v___x_6012_;
goto v_reusejp_6028_;
}
else
{
lean_object* v_reuseFailAlloc_6032_; 
v_reuseFailAlloc_6032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6032_, 0, v___x_6026_);
lean_ctor_set(v_reuseFailAlloc_6032_, 1, v___x_6027_);
v_range_6029_ = v_reuseFailAlloc_6032_;
goto v_reusejp_6028_;
}
v_reusejp_6028_:
{
lean_object* v___x_6030_; lean_object* v___x_6031_; 
lean_inc_ref(v_range_6029_);
v___x_6030_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6030_, 0, v___x_6020_);
lean_ctor_set(v___x_6030_, 1, v_range_6029_);
lean_ctor_set(v___x_6030_, 2, v_range_6029_);
v___x_6031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6031_, 0, v___x_6030_);
v___y_6015_ = v___x_6031_;
goto v___jp_6014_;
}
}
}
}
v___jp_6002_:
{
size_t v___x_6004_; size_t v___x_6005_; 
v___x_6004_ = ((size_t)1ULL);
v___x_6005_ = lean_usize_add(v_i_6000_, v___x_6004_);
v_i_6000_ = v___x_6005_;
v_b_6001_ = v_a_6003_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3___boxed(lean_object* v_mkItem_6052_, lean_object* v_stx_6053_, lean_object* v_ctx_6054_, lean_object* v_snd_6055_, lean_object* v_fst_6056_, lean_object* v_caps_6057_, lean_object* v_as_6058_, lean_object* v_sz_6059_, lean_object* v_i_6060_, lean_object* v_b_6061_){
_start:
{
uint8_t v_snd_1828__boxed_6062_; size_t v_sz_boxed_6063_; size_t v_i_boxed_6064_; lean_object* v_res_6065_; 
v_snd_1828__boxed_6062_ = lean_unbox(v_snd_6055_);
v_sz_boxed_6063_ = lean_unbox_usize(v_sz_6059_);
lean_dec(v_sz_6059_);
v_i_boxed_6064_ = lean_unbox_usize(v_i_6060_);
lean_dec(v_i_6060_);
v_res_6065_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(v_mkItem_6052_, v_stx_6053_, v_ctx_6054_, v_snd_1828__boxed_6062_, v_fst_6056_, v_caps_6057_, v_as_6058_, v_sz_boxed_6063_, v_i_boxed_6064_, v_b_6061_);
lean_dec_ref(v_as_6058_);
lean_dec_ref(v_caps_6057_);
lean_dec_ref(v_fst_6056_);
lean_dec(v_stx_6053_);
return v_res_6065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(lean_object* v_entries_6066_, lean_object* v_stx_6067_, lean_object* v_caps_6068_, lean_object* v_ctx_6069_, lean_object* v_mkItem_6070_){
_start:
{
lean_object* v_fst_6072_; uint8_t v_snd_6073_; uint8_t v___x_6078_; lean_object* v___x_6079_; 
v___x_6078_ = 0;
v___x_6079_ = l_Lean_Syntax_getSubstring_x3f(v_stx_6067_, v___x_6078_, v___x_6078_);
if (lean_obj_tag(v___x_6079_) == 0)
{
lean_object* v___x_6080_; 
v___x_6080_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_fst_6072_ = v___x_6080_;
v_snd_6073_ = v___x_6078_;
goto v___jp_6071_;
}
else
{
lean_object* v_val_6081_; lean_object* v_str_6082_; lean_object* v_startPos_6083_; lean_object* v_stopPos_6084_; uint8_t v___y_6086_; uint8_t v___x_6088_; 
v_val_6081_ = lean_ctor_get(v___x_6079_, 0);
lean_inc(v_val_6081_);
lean_dec_ref_known(v___x_6079_, 1);
v_str_6082_ = lean_ctor_get(v_val_6081_, 0);
lean_inc_ref(v_str_6082_);
v_startPos_6083_ = lean_ctor_get(v_val_6081_, 1);
lean_inc(v_startPos_6083_);
v_stopPos_6084_ = lean_ctor_get(v_val_6081_, 2);
lean_inc(v_stopPos_6084_);
lean_dec(v_val_6081_);
v___x_6088_ = lean_string_utf8_at_end(v_str_6082_, v_stopPos_6084_);
if (v___x_6088_ == 0)
{
uint32_t v___x_6089_; uint32_t v___x_6090_; uint8_t v___x_6091_; 
v___x_6089_ = lean_string_utf8_get(v_str_6082_, v_stopPos_6084_);
v___x_6090_ = 46;
v___x_6091_ = lean_uint32_dec_eq(v___x_6089_, v___x_6090_);
if (v___x_6091_ == 0)
{
v___y_6086_ = v___x_6091_;
goto v___jp_6085_;
}
else
{
lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; 
v___x_6092_ = lean_string_utf8_extract(v_str_6082_, v_startPos_6083_, v_stopPos_6084_);
lean_dec(v_stopPos_6084_);
lean_dec(v_startPos_6083_);
lean_dec_ref(v_str_6082_);
v___x_6093_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_6094_ = lean_string_append(v___x_6092_, v___x_6093_);
v_fst_6072_ = v___x_6094_;
v_snd_6073_ = v___x_6091_;
goto v___jp_6071_;
}
}
else
{
v___y_6086_ = v___x_6078_;
goto v___jp_6085_;
}
v___jp_6085_:
{
lean_object* v___x_6087_; 
v___x_6087_ = lean_string_utf8_extract(v_str_6082_, v_startPos_6083_, v_stopPos_6084_);
lean_dec(v_stopPos_6084_);
lean_dec(v_startPos_6083_);
lean_dec_ref(v_str_6082_);
v_fst_6072_ = v___x_6087_;
v_snd_6073_ = v___y_6086_;
goto v___jp_6071_;
}
}
v___jp_6071_:
{
lean_object* v_items_6074_; size_t v_sz_6075_; size_t v___x_6076_; lean_object* v___x_6077_; 
v_items_6074_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0));
v_sz_6075_ = lean_array_size(v_entries_6066_);
v___x_6076_ = ((size_t)0ULL);
v___x_6077_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(v_mkItem_6070_, v_stx_6067_, v_ctx_6069_, v_snd_6073_, v_fst_6072_, v_caps_6068_, v_entries_6066_, v_sz_6075_, v___x_6076_, v_items_6074_);
lean_dec_ref(v_fst_6072_);
return v___x_6077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1___boxed(lean_object* v_entries_6095_, lean_object* v_stx_6096_, lean_object* v_caps_6097_, lean_object* v_ctx_6098_, lean_object* v_mkItem_6099_){
_start:
{
lean_object* v_res_6100_; 
v_res_6100_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(v_entries_6095_, v_stx_6096_, v_caps_6097_, v_ctx_6098_, v_mkItem_6099_);
lean_dec_ref(v_caps_6097_);
lean_dec(v_stx_6096_);
lean_dec_ref(v_entries_6095_);
return v_res_6100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1(lean_object* v_partialId_6101_, lean_object* v_caps_6102_, lean_object* v_ctx_6103_, lean_object* v___f_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_, lean_object* v___y_6107_, lean_object* v___y_6108_){
_start:
{
lean_object* v___x_6110_; lean_object* v_a_6111_; lean_object* v___x_6113_; uint8_t v_isShared_6114_; uint8_t v_isSharedCheck_6119_; 
v___x_6110_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6108_);
v_a_6111_ = lean_ctor_get(v___x_6110_, 0);
v_isSharedCheck_6119_ = !lean_is_exclusive(v___x_6110_);
if (v_isSharedCheck_6119_ == 0)
{
v___x_6113_ = v___x_6110_;
v_isShared_6114_ = v_isSharedCheck_6119_;
goto v_resetjp_6112_;
}
else
{
lean_inc(v_a_6111_);
lean_dec(v___x_6110_);
v___x_6113_ = lean_box(0);
v_isShared_6114_ = v_isSharedCheck_6119_;
goto v_resetjp_6112_;
}
v_resetjp_6112_:
{
lean_object* v___x_6115_; lean_object* v___x_6117_; 
v___x_6115_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(v_a_6111_, v_partialId_6101_, v_caps_6102_, v_ctx_6103_, v___f_6104_);
lean_dec(v_a_6111_);
if (v_isShared_6114_ == 0)
{
lean_ctor_set(v___x_6113_, 0, v___x_6115_);
v___x_6117_ = v___x_6113_;
goto v_reusejp_6116_;
}
else
{
lean_object* v_reuseFailAlloc_6118_; 
v_reuseFailAlloc_6118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6118_, 0, v___x_6115_);
v___x_6117_ = v_reuseFailAlloc_6118_;
goto v_reusejp_6116_;
}
v_reusejp_6116_:
{
return v___x_6117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed(lean_object* v_partialId_6120_, lean_object* v_caps_6121_, lean_object* v_ctx_6122_, lean_object* v___f_6123_, lean_object* v___y_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_, lean_object* v___y_6127_, lean_object* v___y_6128_){
_start:
{
lean_object* v_res_6129_; 
v_res_6129_ = l_Lean_Server_Completion_errorNameCompletion___lam__1(v_partialId_6120_, v_caps_6121_, v_ctx_6122_, v___f_6123_, v___y_6124_, v___y_6125_, v___y_6126_, v___y_6127_);
lean_dec(v___y_6127_);
lean_dec_ref(v___y_6126_);
lean_dec(v___y_6125_);
lean_dec_ref(v___y_6124_);
lean_dec_ref(v_caps_6121_);
lean_dec(v_partialId_6120_);
return v_res_6129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion(lean_object* v_uri_6130_, lean_object* v_pos_6131_, lean_object* v_completionInfoPos_6132_, lean_object* v_ctx_6133_, lean_object* v_partialId_6134_, lean_object* v_caps_6135_){
_start:
{
lean_object* v___f_6137_; lean_object* v___f_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; 
v___f_6137_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6137_, 0, v_completionInfoPos_6132_);
lean_closure_set(v___f_6137_, 1, v_uri_6130_);
lean_closure_set(v___f_6137_, 2, v_pos_6131_);
lean_inc_ref(v_ctx_6133_);
v___f_6138_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed), 9, 4);
lean_closure_set(v___f_6138_, 0, v_partialId_6134_);
lean_closure_set(v___f_6138_, 1, v_caps_6135_);
lean_closure_set(v___f_6138_, 2, v_ctx_6133_);
lean_closure_set(v___f_6138_, 3, v___f_6137_);
v___x_6139_ = lean_unsigned_to_nat(32u);
v___x_6140_ = lean_mk_empty_array_with_capacity(v___x_6139_);
lean_dec_ref(v___x_6140_);
v___x_6141_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__4, &l_Lean_Server_Completion_optionCompletion___closed__4_once, _init_l_Lean_Server_Completion_optionCompletion___closed__4);
v___x_6142_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_6133_, v___x_6141_, v___f_6138_);
return v___x_6142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___boxed(lean_object* v_uri_6143_, lean_object* v_pos_6144_, lean_object* v_completionInfoPos_6145_, lean_object* v_ctx_6146_, lean_object* v_partialId_6147_, lean_object* v_caps_6148_, lean_object* v_a_6149_){
_start:
{
lean_object* v_res_6150_; 
v_res_6150_ = l_Lean_Server_Completion_errorNameCompletion(v_uri_6143_, v_pos_6144_, v_completionInfoPos_6145_, v_ctx_6146_, v_partialId_6147_, v_caps_6148_);
return v_res_6150_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(lean_object* v___y_6151_, lean_object* v___y_6152_, lean_object* v___y_6153_, lean_object* v___y_6154_){
_start:
{
lean_object* v___x_6156_; 
v___x_6156_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6154_);
return v___x_6156_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___boxed(lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_, lean_object* v___y_6160_, lean_object* v___y_6161_){
_start:
{
lean_object* v_res_6162_; 
v_res_6162_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(v___y_6157_, v___y_6158_, v___y_6159_, v___y_6160_);
lean_dec(v___y_6160_);
lean_dec_ref(v___y_6159_);
lean_dec(v___y_6158_);
lean_dec_ref(v___y_6157_);
return v_res_6162_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(lean_object* v_init_6163_, lean_object* v_t_6164_){
_start:
{
lean_object* v___x_6165_; 
v___x_6165_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_6163_, v_t_6164_);
return v___x_6165_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0___boxed(lean_object* v_init_6166_, lean_object* v_t_6167_){
_start:
{
lean_object* v_res_6168_; 
v_res_6168_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(v_init_6166_, v_t_6167_);
lean_dec(v_t_6167_);
return v_res_6168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(lean_object* v_n_6169_, lean_object* v_as_6170_, lean_object* v_lo_6171_, lean_object* v_hi_6172_, lean_object* v_w_6173_, lean_object* v_hlo_6174_, lean_object* v_hhi_6175_){
_start:
{
lean_object* v___x_6176_; 
v___x_6176_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_6169_, v_as_6170_, v_lo_6171_, v_hi_6172_);
return v___x_6176_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___boxed(lean_object* v_n_6177_, lean_object* v_as_6178_, lean_object* v_lo_6179_, lean_object* v_hi_6180_, lean_object* v_w_6181_, lean_object* v_hlo_6182_, lean_object* v_hhi_6183_){
_start:
{
lean_object* v_res_6184_; 
v_res_6184_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(v_n_6177_, v_as_6178_, v_lo_6179_, v_hi_6180_, v_w_6181_, v_hlo_6182_, v_hhi_6183_);
lean_dec(v_hi_6180_);
lean_dec(v_n_6177_);
return v_res_6184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(lean_object* v_n_6185_, lean_object* v_lo_6186_, lean_object* v_hi_6187_, lean_object* v_hhi_6188_, lean_object* v_pivot_6189_, lean_object* v_as_6190_, lean_object* v_i_6191_, lean_object* v_k_6192_, lean_object* v_ilo_6193_, lean_object* v_ik_6194_, lean_object* v_w_6195_){
_start:
{
lean_object* v___x_6196_; 
v___x_6196_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_6187_, v_pivot_6189_, v_as_6190_, v_i_6191_, v_k_6192_);
return v___x_6196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___boxed(lean_object* v_n_6197_, lean_object* v_lo_6198_, lean_object* v_hi_6199_, lean_object* v_hhi_6200_, lean_object* v_pivot_6201_, lean_object* v_as_6202_, lean_object* v_i_6203_, lean_object* v_k_6204_, lean_object* v_ilo_6205_, lean_object* v_ik_6206_, lean_object* v_w_6207_){
_start:
{
lean_object* v_res_6208_; 
v_res_6208_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(v_n_6197_, v_lo_6198_, v_hi_6199_, v_hhi_6200_, v_pivot_6201_, v_as_6202_, v_i_6203_, v_k_6204_, v_ilo_6205_, v_ik_6206_, v_w_6207_);
lean_dec(v_hi_6199_);
lean_dec(v_lo_6198_);
lean_dec(v_n_6197_);
return v_res_6208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(lean_object* v_completionInfoPos_6209_, lean_object* v_uri_6210_, lean_object* v_pos_6211_, size_t v_sz_6212_, size_t v_i_6213_, lean_object* v_bs_6214_){
_start:
{
uint8_t v___x_6215_; 
v___x_6215_ = lean_usize_dec_lt(v_i_6213_, v_sz_6212_);
if (v___x_6215_ == 0)
{
lean_dec_ref(v_pos_6211_);
lean_dec_ref(v_uri_6210_);
lean_dec(v_completionInfoPos_6209_);
return v_bs_6214_;
}
else
{
lean_object* v_v_6216_; lean_object* v_userName_6217_; lean_object* v_docString_6218_; lean_object* v___x_6219_; lean_object* v_bs_x27_6220_; lean_object* v___x_6221_; lean_object* v___y_6223_; 
v_v_6216_ = lean_array_uget_borrowed(v_bs_6214_, v_i_6213_);
v_userName_6217_ = lean_ctor_get(v_v_6216_, 1);
lean_inc_ref(v_userName_6217_);
v_docString_6218_ = lean_ctor_get(v_v_6216_, 3);
lean_inc(v_docString_6218_);
v___x_6219_ = lean_unsigned_to_nat(0u);
v_bs_x27_6220_ = lean_array_uset(v_bs_6214_, v_i_6213_, v___x_6219_);
v___x_6221_ = lean_box(0);
if (lean_obj_tag(v_docString_6218_) == 0)
{
v___y_6223_ = v___x_6221_;
goto v___jp_6222_;
}
else
{
lean_object* v_val_6233_; lean_object* v___x_6235_; uint8_t v_isShared_6236_; uint8_t v_isSharedCheck_6242_; 
v_val_6233_ = lean_ctor_get(v_docString_6218_, 0);
v_isSharedCheck_6242_ = !lean_is_exclusive(v_docString_6218_);
if (v_isSharedCheck_6242_ == 0)
{
v___x_6235_ = v_docString_6218_;
v_isShared_6236_ = v_isSharedCheck_6242_;
goto v_resetjp_6234_;
}
else
{
lean_inc(v_val_6233_);
lean_dec(v_docString_6218_);
v___x_6235_ = lean_box(0);
v_isShared_6236_ = v_isSharedCheck_6242_;
goto v_resetjp_6234_;
}
v_resetjp_6234_:
{
uint8_t v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6240_; 
v___x_6237_ = 1;
v___x_6238_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6238_, 0, v_val_6233_);
lean_ctor_set_uint8(v___x_6238_, sizeof(void*)*1, v___x_6237_);
if (v_isShared_6236_ == 0)
{
lean_ctor_set(v___x_6235_, 0, v___x_6238_);
v___x_6240_ = v___x_6235_;
goto v_reusejp_6239_;
}
else
{
lean_object* v_reuseFailAlloc_6241_; 
v_reuseFailAlloc_6241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6241_, 0, v___x_6238_);
v___x_6240_ = v_reuseFailAlloc_6241_;
goto v_reusejp_6239_;
}
v_reusejp_6239_:
{
v___y_6223_ = v___x_6240_;
goto v___jp_6222_;
}
}
}
v___jp_6222_:
{
lean_object* v___x_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v___x_6228_; size_t v___x_6229_; size_t v___x_6230_; lean_object* v___x_6231_; 
v___x_6224_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2));
lean_inc(v_completionInfoPos_6209_);
v___x_6225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6225_, 0, v_completionInfoPos_6209_);
lean_inc_ref(v_pos_6211_);
lean_inc_ref(v_uri_6210_);
v___x_6226_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6226_, 0, v_uri_6210_);
lean_ctor_set(v___x_6226_, 1, v_pos_6211_);
lean_ctor_set(v___x_6226_, 2, v___x_6225_);
lean_ctor_set(v___x_6226_, 3, v___x_6221_);
v___x_6227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6227_, 0, v___x_6226_);
v___x_6228_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6228_, 0, v_userName_6217_);
lean_ctor_set(v___x_6228_, 1, v___x_6221_);
lean_ctor_set(v___x_6228_, 2, v___y_6223_);
lean_ctor_set(v___x_6228_, 3, v___x_6224_);
lean_ctor_set(v___x_6228_, 4, v___x_6221_);
lean_ctor_set(v___x_6228_, 5, v___x_6221_);
lean_ctor_set(v___x_6228_, 6, v___x_6227_);
lean_ctor_set(v___x_6228_, 7, v___x_6221_);
v___x_6229_ = ((size_t)1ULL);
v___x_6230_ = lean_usize_add(v_i_6213_, v___x_6229_);
v___x_6231_ = lean_array_uset(v_bs_x27_6220_, v_i_6213_, v___x_6228_);
v_i_6213_ = v___x_6230_;
v_bs_6214_ = v___x_6231_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0___boxed(lean_object* v_completionInfoPos_6243_, lean_object* v_uri_6244_, lean_object* v_pos_6245_, lean_object* v_sz_6246_, lean_object* v_i_6247_, lean_object* v_bs_6248_){
_start:
{
size_t v_sz_boxed_6249_; size_t v_i_boxed_6250_; lean_object* v_res_6251_; 
v_sz_boxed_6249_ = lean_unbox_usize(v_sz_6246_);
lean_dec(v_sz_6246_);
v_i_boxed_6250_ = lean_unbox_usize(v_i_6247_);
lean_dec(v_i_6247_);
v_res_6251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(v_completionInfoPos_6243_, v_uri_6244_, v_pos_6245_, v_sz_boxed_6249_, v_i_boxed_6250_, v_bs_6248_);
return v_res_6251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0(uint8_t v___x_6252_, lean_object* v_completionInfoPos_6253_, lean_object* v_uri_6254_, lean_object* v_pos_6255_, lean_object* v___y_6256_, lean_object* v___y_6257_, lean_object* v___y_6258_, lean_object* v___y_6259_){
_start:
{
lean_object* v___x_6261_; 
v___x_6261_ = l_Lean_Elab_Tactic_Doc_allTacticDocs(v___x_6252_, v___y_6256_, v___y_6257_, v___y_6258_, v___y_6259_);
if (lean_obj_tag(v___x_6261_) == 0)
{
lean_object* v_a_6262_; lean_object* v___x_6264_; uint8_t v_isShared_6265_; uint8_t v_isSharedCheck_6272_; 
v_a_6262_ = lean_ctor_get(v___x_6261_, 0);
v_isSharedCheck_6272_ = !lean_is_exclusive(v___x_6261_);
if (v_isSharedCheck_6272_ == 0)
{
v___x_6264_ = v___x_6261_;
v_isShared_6265_ = v_isSharedCheck_6272_;
goto v_resetjp_6263_;
}
else
{
lean_inc(v_a_6262_);
lean_dec(v___x_6261_);
v___x_6264_ = lean_box(0);
v_isShared_6265_ = v_isSharedCheck_6272_;
goto v_resetjp_6263_;
}
v_resetjp_6263_:
{
size_t v_sz_6266_; size_t v___x_6267_; lean_object* v___x_6268_; lean_object* v___x_6270_; 
v_sz_6266_ = lean_array_size(v_a_6262_);
v___x_6267_ = ((size_t)0ULL);
v___x_6268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(v_completionInfoPos_6253_, v_uri_6254_, v_pos_6255_, v_sz_6266_, v___x_6267_, v_a_6262_);
if (v_isShared_6265_ == 0)
{
lean_ctor_set(v___x_6264_, 0, v___x_6268_);
v___x_6270_ = v___x_6264_;
goto v_reusejp_6269_;
}
else
{
lean_object* v_reuseFailAlloc_6271_; 
v_reuseFailAlloc_6271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6271_, 0, v___x_6268_);
v___x_6270_ = v_reuseFailAlloc_6271_;
goto v_reusejp_6269_;
}
v_reusejp_6269_:
{
return v___x_6270_;
}
}
}
else
{
lean_object* v_a_6273_; lean_object* v___x_6275_; uint8_t v_isShared_6276_; uint8_t v_isSharedCheck_6280_; 
lean_dec_ref(v_pos_6255_);
lean_dec_ref(v_uri_6254_);
lean_dec(v_completionInfoPos_6253_);
v_a_6273_ = lean_ctor_get(v___x_6261_, 0);
v_isSharedCheck_6280_ = !lean_is_exclusive(v___x_6261_);
if (v_isSharedCheck_6280_ == 0)
{
v___x_6275_ = v___x_6261_;
v_isShared_6276_ = v_isSharedCheck_6280_;
goto v_resetjp_6274_;
}
else
{
lean_inc(v_a_6273_);
lean_dec(v___x_6261_);
v___x_6275_ = lean_box(0);
v_isShared_6276_ = v_isSharedCheck_6280_;
goto v_resetjp_6274_;
}
v_resetjp_6274_:
{
lean_object* v___x_6278_; 
if (v_isShared_6276_ == 0)
{
v___x_6278_ = v___x_6275_;
goto v_reusejp_6277_;
}
else
{
lean_object* v_reuseFailAlloc_6279_; 
v_reuseFailAlloc_6279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6279_, 0, v_a_6273_);
v___x_6278_ = v_reuseFailAlloc_6279_;
goto v_reusejp_6277_;
}
v_reusejp_6277_:
{
return v___x_6278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0___boxed(lean_object* v___x_6281_, lean_object* v_completionInfoPos_6282_, lean_object* v_uri_6283_, lean_object* v_pos_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_){
_start:
{
uint8_t v___x_494__boxed_6290_; lean_object* v_res_6291_; 
v___x_494__boxed_6290_ = lean_unbox(v___x_6281_);
v_res_6291_ = l_Lean_Server_Completion_tacticCompletion___lam__0(v___x_494__boxed_6290_, v_completionInfoPos_6282_, v_uri_6283_, v_pos_6284_, v___y_6285_, v___y_6286_, v___y_6287_, v___y_6288_);
lean_dec(v___y_6288_);
lean_dec_ref(v___y_6287_);
lean_dec(v___y_6286_);
lean_dec_ref(v___y_6285_);
return v_res_6291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion(lean_object* v_uri_6292_, lean_object* v_pos_6293_, lean_object* v_completionInfoPos_6294_, lean_object* v_ctx_6295_){
_start:
{
lean_object* v___x_6297_; uint8_t v___x_6298_; lean_object* v___x_6299_; lean_object* v___f_6300_; lean_object* v___x_6301_; 
v___x_6297_ = l_Lean_LocalContext_empty;
v___x_6298_ = 0;
v___x_6299_ = lean_box(v___x_6298_);
v___f_6300_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_tacticCompletion___lam__0___boxed), 9, 4);
lean_closure_set(v___f_6300_, 0, v___x_6299_);
lean_closure_set(v___f_6300_, 1, v_completionInfoPos_6294_);
lean_closure_set(v___f_6300_, 2, v_uri_6292_);
lean_closure_set(v___f_6300_, 3, v_pos_6293_);
v___x_6301_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_6295_, v___x_6297_, v___f_6300_);
return v___x_6301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___boxed(lean_object* v_uri_6302_, lean_object* v_pos_6303_, lean_object* v_completionInfoPos_6304_, lean_object* v_ctx_6305_, lean_object* v_a_6306_){
_start:
{
lean_object* v_res_6307_; 
v_res_6307_ = l_Lean_Server_Completion_tacticCompletion(v_uri_6302_, v_pos_6303_, v_completionInfoPos_6304_, v_ctx_6305_);
return v_res_6307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(lean_object* v_a_6308_, lean_object* v_b_6309_){
_start:
{
lean_object* v_array_6310_; lean_object* v_start_6311_; lean_object* v_stop_6312_; lean_object* v___x_6314_; uint8_t v_isShared_6315_; uint8_t v_isSharedCheck_6325_; 
v_array_6310_ = lean_ctor_get(v_a_6308_, 0);
v_start_6311_ = lean_ctor_get(v_a_6308_, 1);
v_stop_6312_ = lean_ctor_get(v_a_6308_, 2);
v_isSharedCheck_6325_ = !lean_is_exclusive(v_a_6308_);
if (v_isSharedCheck_6325_ == 0)
{
v___x_6314_ = v_a_6308_;
v_isShared_6315_ = v_isSharedCheck_6325_;
goto v_resetjp_6313_;
}
else
{
lean_inc(v_stop_6312_);
lean_inc(v_start_6311_);
lean_inc(v_array_6310_);
lean_dec(v_a_6308_);
v___x_6314_ = lean_box(0);
v_isShared_6315_ = v_isSharedCheck_6325_;
goto v_resetjp_6313_;
}
v_resetjp_6313_:
{
uint8_t v___x_6316_; 
v___x_6316_ = lean_nat_dec_lt(v_start_6311_, v_stop_6312_);
if (v___x_6316_ == 0)
{
lean_del_object(v___x_6314_);
lean_dec(v_stop_6312_);
lean_dec(v_start_6311_);
lean_dec_ref(v_array_6310_);
return v_b_6309_;
}
else
{
lean_object* v___x_6317_; lean_object* v___x_6318_; lean_object* v___x_6320_; 
v___x_6317_ = lean_unsigned_to_nat(1u);
v___x_6318_ = lean_nat_add(v_start_6311_, v___x_6317_);
lean_inc_ref(v_array_6310_);
if (v_isShared_6315_ == 0)
{
lean_ctor_set(v___x_6314_, 1, v___x_6318_);
v___x_6320_ = v___x_6314_;
goto v_reusejp_6319_;
}
else
{
lean_object* v_reuseFailAlloc_6324_; 
v_reuseFailAlloc_6324_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6324_, 0, v_array_6310_);
lean_ctor_set(v_reuseFailAlloc_6324_, 1, v___x_6318_);
lean_ctor_set(v_reuseFailAlloc_6324_, 2, v_stop_6312_);
v___x_6320_ = v_reuseFailAlloc_6324_;
goto v_reusejp_6319_;
}
v_reusejp_6319_:
{
lean_object* v___x_6321_; lean_object* v___x_6322_; 
v___x_6321_ = lean_array_fget(v_array_6310_, v_start_6311_);
lean_dec(v_start_6311_);
lean_dec_ref(v_array_6310_);
v___x_6322_ = lean_array_push(v_b_6309_, v___x_6321_);
v_a_6308_ = v___x_6320_;
v_b_6309_ = v___x_6322_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(lean_object* v_scopeNames_6328_, lean_object* v_idx_6329_){
_start:
{
lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; 
v___x_6330_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0));
v___x_6331_ = lean_array_get_size(v_scopeNames_6328_);
v___x_6332_ = l_Array_toSubarray___redArg(v_scopeNames_6328_, v_idx_6329_, v___x_6331_);
v___x_6333_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___x_6334_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(v___x_6332_, v___x_6333_);
v___x_6335_ = lean_array_to_list(v___x_6334_);
v___x_6336_ = l_String_intercalate(v___x_6330_, v___x_6335_);
return v___x_6336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0(lean_object* v_inst_6337_, lean_object* v_R_6338_, lean_object* v_a_6339_, lean_object* v_b_6340_){
_start:
{
lean_object* v___x_6341_; 
v___x_6341_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(v_a_6339_, v_b_6340_);
return v___x_6341_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(lean_object* v_upperBound_6342_, lean_object* v_next_6343_, lean_object* v_scopeNames_6344_, lean_object* v_idComponents_6345_, lean_object* v_a_6346_, uint8_t v_b_6347_){
_start:
{
uint8_t v___x_6348_; 
v___x_6348_ = lean_nat_dec_lt(v_a_6346_, v_upperBound_6342_);
if (v___x_6348_ == 0)
{
lean_dec(v_a_6346_);
return v_b_6347_;
}
else
{
uint8_t v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; uint8_t v___x_6352_; 
v___x_6349_ = 0;
v___x_6350_ = lean_nat_add(v_next_6343_, v_a_6346_);
v___x_6351_ = lean_array_get_size(v_scopeNames_6344_);
v___x_6352_ = lean_nat_dec_lt(v___x_6350_, v___x_6351_);
if (v___x_6352_ == 0)
{
lean_dec(v___x_6350_);
lean_dec(v_a_6346_);
return v___x_6349_;
}
else
{
lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; uint8_t v___x_6356_; 
v___x_6353_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v___x_6354_ = lean_array_fget_borrowed(v_scopeNames_6344_, v___x_6350_);
lean_dec(v___x_6350_);
v___x_6355_ = lean_array_get_borrowed(v___x_6353_, v_idComponents_6345_, v_a_6346_);
v___x_6356_ = lean_string_dec_eq(v___x_6355_, v___x_6354_);
if (v___x_6356_ == 0)
{
lean_dec(v_a_6346_);
return v___x_6349_;
}
else
{
lean_object* v___x_6357_; lean_object* v___x_6358_; 
v___x_6357_ = lean_unsigned_to_nat(1u);
v___x_6358_ = lean_nat_add(v_a_6346_, v___x_6357_);
lean_dec(v_a_6346_);
v_a_6346_ = v___x_6358_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg___boxed(lean_object* v_upperBound_6360_, lean_object* v_next_6361_, lean_object* v_scopeNames_6362_, lean_object* v_idComponents_6363_, lean_object* v_a_6364_, lean_object* v_b_6365_){
_start:
{
uint8_t v_b_boxed_6366_; uint8_t v_res_6367_; lean_object* v_r_6368_; 
v_b_boxed_6366_ = lean_unbox(v_b_6365_);
v_res_6367_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v_upperBound_6360_, v_next_6361_, v_scopeNames_6362_, v_idComponents_6363_, v_a_6364_, v_b_boxed_6366_);
lean_dec_ref(v_idComponents_6363_);
lean_dec_ref(v_scopeNames_6362_);
lean_dec(v_next_6361_);
lean_dec(v_upperBound_6360_);
v_r_6368_ = lean_box(v_res_6367_);
return v_r_6368_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(lean_object* v_upperBound_6369_, lean_object* v_idComponents_6370_, lean_object* v_scopeNames_6371_, lean_object* v_a_6372_, lean_object* v_b_6373_){
_start:
{
lean_object* v_a_6375_; uint8_t v___x_6379_; 
v___x_6379_ = lean_nat_dec_lt(v_a_6372_, v_upperBound_6369_);
if (v___x_6379_ == 0)
{
lean_dec(v_a_6372_);
lean_dec_ref(v_scopeNames_6371_);
return v_b_6373_;
}
else
{
lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; uint8_t v___x_6383_; 
v___x_6380_ = lean_array_get_size(v_idComponents_6370_);
v___x_6381_ = lean_unsigned_to_nat(1u);
v___x_6382_ = lean_nat_sub(v___x_6380_, v___x_6381_);
v___x_6383_ = lean_nat_dec_lt(v___x_6382_, v___x_6380_);
if (v___x_6383_ == 0)
{
lean_object* v___x_6384_; lean_object* v___x_6385_; 
lean_dec(v___x_6382_);
lean_inc(v_a_6372_);
lean_inc_ref(v_scopeNames_6371_);
v___x_6384_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(v_scopeNames_6371_, v_a_6372_);
v___x_6385_ = lean_array_push(v_b_6373_, v___x_6384_);
v_a_6375_ = v___x_6385_;
goto v___jp_6374_;
}
else
{
lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; uint8_t v___x_6389_; 
v___x_6386_ = lean_nat_add(v_a_6372_, v___x_6380_);
v___x_6387_ = lean_nat_sub(v___x_6386_, v___x_6381_);
lean_dec(v___x_6386_);
v___x_6388_ = lean_array_get_size(v_scopeNames_6371_);
v___x_6389_ = lean_nat_dec_lt(v___x_6387_, v___x_6388_);
if (v___x_6389_ == 0)
{
lean_dec(v___x_6387_);
lean_dec(v___x_6382_);
v_a_6375_ = v_b_6373_;
goto v___jp_6374_;
}
else
{
lean_object* v___x_6390_; lean_object* v___x_6391_; uint8_t v___x_6392_; 
v___x_6390_ = lean_array_fget_borrowed(v_idComponents_6370_, v___x_6382_);
v___x_6391_ = lean_array_fget_borrowed(v_scopeNames_6371_, v___x_6387_);
v___x_6392_ = l_Lean_String_charactersIn(v___x_6390_, v___x_6391_);
if (v___x_6392_ == 0)
{
lean_dec(v___x_6387_);
lean_dec(v___x_6382_);
v_a_6375_ = v_b_6373_;
goto v___jp_6374_;
}
else
{
lean_object* v___x_6393_; uint8_t v___x_6394_; 
v___x_6393_ = lean_unsigned_to_nat(0u);
v___x_6394_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v___x_6382_, v_a_6372_, v_scopeNames_6371_, v_idComponents_6370_, v___x_6393_, v___x_6379_);
lean_dec(v___x_6382_);
if (v___x_6394_ == 0)
{
lean_dec(v___x_6387_);
v_a_6375_ = v_b_6373_;
goto v___jp_6374_;
}
else
{
lean_object* v___x_6395_; lean_object* v___x_6396_; 
lean_inc_ref(v_scopeNames_6371_);
v___x_6395_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(v_scopeNames_6371_, v___x_6387_);
v___x_6396_ = lean_array_push(v_b_6373_, v___x_6395_);
v_a_6375_ = v___x_6396_;
goto v___jp_6374_;
}
}
}
}
}
v___jp_6374_:
{
lean_object* v___x_6376_; lean_object* v___x_6377_; 
v___x_6376_ = lean_unsigned_to_nat(1u);
v___x_6377_ = lean_nat_add(v_a_6372_, v___x_6376_);
lean_dec(v_a_6372_);
v_a_6372_ = v___x_6377_;
v_b_6373_ = v_a_6375_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg___boxed(lean_object* v_upperBound_6397_, lean_object* v_idComponents_6398_, lean_object* v_scopeNames_6399_, lean_object* v_a_6400_, lean_object* v_b_6401_){
_start:
{
lean_object* v_res_6402_; 
v_res_6402_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v_upperBound_6397_, v_idComponents_6398_, v_scopeNames_6399_, v_a_6400_, v_b_6401_);
lean_dec_ref(v_idComponents_6398_);
lean_dec(v_upperBound_6397_);
return v_res_6402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(lean_object* v_idComponents_6403_, lean_object* v_scopeNames_6404_){
_start:
{
lean_object* v___x_6405_; lean_object* v___x_6406_; lean_object* v_r_6407_; lean_object* v___x_6408_; 
v___x_6405_ = lean_unsigned_to_nat(0u);
v___x_6406_ = lean_array_get_size(v_scopeNames_6404_);
v_r_6407_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___x_6408_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v___x_6406_, v_idComponents_6403_, v_scopeNames_6404_, v___x_6405_, v_r_6407_);
return v___x_6408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates___boxed(lean_object* v_idComponents_6409_, lean_object* v_scopeNames_6410_){
_start:
{
lean_object* v_res_6411_; 
v_res_6411_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(v_idComponents_6409_, v_scopeNames_6410_);
lean_dec_ref(v_idComponents_6409_);
return v_res_6411_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(lean_object* v_upperBound_6412_, lean_object* v_next_6413_, lean_object* v_scopeNames_6414_, lean_object* v_idComponents_6415_, lean_object* v_inst_6416_, lean_object* v_R_6417_, lean_object* v_a_6418_, uint8_t v_b_6419_, lean_object* v_c_6420_){
_start:
{
uint8_t v___x_6421_; 
v___x_6421_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v_upperBound_6412_, v_next_6413_, v_scopeNames_6414_, v_idComponents_6415_, v_a_6418_, v_b_6419_);
return v___x_6421_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___boxed(lean_object* v_upperBound_6422_, lean_object* v_next_6423_, lean_object* v_scopeNames_6424_, lean_object* v_idComponents_6425_, lean_object* v_inst_6426_, lean_object* v_R_6427_, lean_object* v_a_6428_, lean_object* v_b_6429_, lean_object* v_c_6430_){
_start:
{
uint8_t v_b_boxed_6431_; uint8_t v_res_6432_; lean_object* v_r_6433_; 
v_b_boxed_6431_ = lean_unbox(v_b_6429_);
v_res_6432_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(v_upperBound_6422_, v_next_6423_, v_scopeNames_6424_, v_idComponents_6425_, v_inst_6426_, v_R_6427_, v_a_6428_, v_b_boxed_6431_, v_c_6430_);
lean_dec_ref(v_idComponents_6425_);
lean_dec_ref(v_scopeNames_6424_);
lean_dec(v_next_6423_);
lean_dec(v_upperBound_6422_);
v_r_6433_ = lean_box(v_res_6432_);
return v_r_6433_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(lean_object* v_upperBound_6434_, lean_object* v_idComponents_6435_, lean_object* v_scopeNames_6436_, lean_object* v_inst_6437_, lean_object* v_R_6438_, lean_object* v_a_6439_, lean_object* v_b_6440_, lean_object* v_c_6441_){
_start:
{
lean_object* v___x_6442_; 
v___x_6442_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v_upperBound_6434_, v_idComponents_6435_, v_scopeNames_6436_, v_a_6439_, v_b_6440_);
return v___x_6442_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___boxed(lean_object* v_upperBound_6443_, lean_object* v_idComponents_6444_, lean_object* v_scopeNames_6445_, lean_object* v_inst_6446_, lean_object* v_R_6447_, lean_object* v_a_6448_, lean_object* v_b_6449_, lean_object* v_c_6450_){
_start:
{
lean_object* v_res_6451_; 
v_res_6451_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(v_upperBound_6443_, v_idComponents_6444_, v_scopeNames_6445_, v_inst_6446_, v_R_6447_, v_a_6448_, v_b_6449_, v_c_6450_);
lean_dec_ref(v_idComponents_6444_);
lean_dec(v_upperBound_6443_);
return v_res_6451_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_Completion_endSectionCompletion___lam__0(lean_object* v_x_6452_){
_start:
{
lean_object* v___x_6453_; lean_object* v___x_6454_; uint8_t v___x_6455_; 
v___x_6453_ = lean_string_utf8_byte_size(v_x_6452_);
v___x_6454_ = lean_unsigned_to_nat(0u);
v___x_6455_ = lean_nat_dec_eq(v___x_6453_, v___x_6454_);
if (v___x_6455_ == 0)
{
uint8_t v___x_6456_; 
v___x_6456_ = 1;
return v___x_6456_;
}
else
{
uint8_t v___x_6457_; 
v___x_6457_ = 0;
return v___x_6457_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed(lean_object* v_x_6458_){
_start:
{
uint8_t v_res_6459_; lean_object* v_r_6460_; 
v_res_6459_ = l_Lean_Server_Completion_endSectionCompletion___lam__0(v_x_6458_);
lean_dec_ref(v_x_6458_);
v_r_6460_ = lean_box(v_res_6459_);
return v_r_6460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(size_t v_sz_6461_, size_t v_i_6462_, lean_object* v_bs_6463_){
_start:
{
uint8_t v___x_6464_; 
v___x_6464_ = lean_usize_dec_lt(v_i_6462_, v_sz_6461_);
if (v___x_6464_ == 0)
{
return v_bs_6463_;
}
else
{
lean_object* v_v_6465_; lean_object* v___x_6466_; lean_object* v_bs_x27_6467_; lean_object* v___x_6468_; size_t v___x_6469_; size_t v___x_6470_; lean_object* v___x_6471_; 
v_v_6465_ = lean_array_uget(v_bs_6463_, v_i_6462_);
v___x_6466_ = lean_unsigned_to_nat(0u);
v_bs_x27_6467_ = lean_array_uset(v_bs_6463_, v_i_6462_, v___x_6466_);
v___x_6468_ = l_Lean_Name_toString(v_v_6465_, v___x_6464_);
v___x_6469_ = ((size_t)1ULL);
v___x_6470_ = lean_usize_add(v_i_6462_, v___x_6469_);
v___x_6471_ = lean_array_uset(v_bs_x27_6467_, v_i_6462_, v___x_6468_);
v_i_6462_ = v___x_6470_;
v_bs_6463_ = v___x_6471_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1___boxed(lean_object* v_sz_6473_, lean_object* v_i_6474_, lean_object* v_bs_6475_){
_start:
{
size_t v_sz_boxed_6476_; size_t v_i_boxed_6477_; lean_object* v_res_6478_; 
v_sz_boxed_6476_ = lean_unbox_usize(v_sz_6473_);
lean_dec(v_sz_6473_);
v_i_boxed_6477_ = lean_unbox_usize(v_i_6474_);
lean_dec(v_i_6474_);
v_res_6478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(v_sz_boxed_6476_, v_i_boxed_6477_, v_bs_6475_);
return v_res_6478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(lean_object* v_completionInfoPos_6479_, lean_object* v_uri_6480_, lean_object* v_pos_6481_, size_t v_sz_6482_, size_t v_i_6483_, lean_object* v_bs_6484_){
_start:
{
uint8_t v___x_6485_; 
v___x_6485_ = lean_usize_dec_lt(v_i_6483_, v_sz_6482_);
if (v___x_6485_ == 0)
{
lean_dec_ref(v_pos_6481_);
lean_dec_ref(v_uri_6480_);
lean_dec(v_completionInfoPos_6479_);
return v_bs_6484_;
}
else
{
lean_object* v_v_6486_; lean_object* v___x_6487_; lean_object* v_bs_x27_6488_; lean_object* v___x_6489_; lean_object* v___x_6490_; lean_object* v___x_6491_; lean_object* v___x_6492_; lean_object* v___x_6493_; lean_object* v___x_6494_; size_t v___x_6495_; size_t v___x_6496_; lean_object* v___x_6497_; 
v_v_6486_ = lean_array_uget(v_bs_6484_, v_i_6483_);
v___x_6487_ = lean_unsigned_to_nat(0u);
v_bs_x27_6488_ = lean_array_uset(v_bs_6484_, v_i_6483_, v___x_6487_);
v___x_6489_ = lean_box(0);
v___x_6490_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2));
lean_inc(v_completionInfoPos_6479_);
v___x_6491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6491_, 0, v_completionInfoPos_6479_);
lean_inc_ref(v_pos_6481_);
lean_inc_ref(v_uri_6480_);
v___x_6492_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6492_, 0, v_uri_6480_);
lean_ctor_set(v___x_6492_, 1, v_pos_6481_);
lean_ctor_set(v___x_6492_, 2, v___x_6491_);
lean_ctor_set(v___x_6492_, 3, v___x_6489_);
v___x_6493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6493_, 0, v___x_6492_);
v___x_6494_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6494_, 0, v_v_6486_);
lean_ctor_set(v___x_6494_, 1, v___x_6489_);
lean_ctor_set(v___x_6494_, 2, v___x_6489_);
lean_ctor_set(v___x_6494_, 3, v___x_6490_);
lean_ctor_set(v___x_6494_, 4, v___x_6489_);
lean_ctor_set(v___x_6494_, 5, v___x_6489_);
lean_ctor_set(v___x_6494_, 6, v___x_6493_);
lean_ctor_set(v___x_6494_, 7, v___x_6489_);
v___x_6495_ = ((size_t)1ULL);
v___x_6496_ = lean_usize_add(v_i_6483_, v___x_6495_);
v___x_6497_ = lean_array_uset(v_bs_x27_6488_, v_i_6483_, v___x_6494_);
v_i_6483_ = v___x_6496_;
v_bs_6484_ = v___x_6497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0___boxed(lean_object* v_completionInfoPos_6499_, lean_object* v_uri_6500_, lean_object* v_pos_6501_, lean_object* v_sz_6502_, lean_object* v_i_6503_, lean_object* v_bs_6504_){
_start:
{
size_t v_sz_boxed_6505_; size_t v_i_boxed_6506_; lean_object* v_res_6507_; 
v_sz_boxed_6505_ = lean_unbox_usize(v_sz_6502_);
lean_dec(v_sz_6502_);
v_i_boxed_6506_ = lean_unbox_usize(v_i_6503_);
lean_dec(v_i_6503_);
v_res_6507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(v_completionInfoPos_6499_, v_uri_6500_, v_pos_6501_, v_sz_boxed_6505_, v_i_boxed_6506_, v_bs_6504_);
return v_res_6507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion(lean_object* v_uri_6509_, lean_object* v_pos_6510_, lean_object* v_completionInfoPos_6511_, lean_object* v_id_x3f_6512_, uint8_t v_danglingDot_6513_, lean_object* v_scopeNames_6514_){
_start:
{
lean_object* v___f_6516_; lean_object* v_idComponents_6518_; lean_object* v___y_6529_; 
v___f_6516_ = ((lean_object*)(l_Lean_Server_Completion_endSectionCompletion___closed__0));
if (lean_obj_tag(v_id_x3f_6512_) == 0)
{
lean_object* v___x_6532_; 
v___x_6532_ = ((lean_object*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0));
v___y_6529_ = v___x_6532_;
goto v___jp_6528_;
}
else
{
lean_object* v_val_6533_; lean_object* v___x_6534_; lean_object* v___x_6535_; size_t v_sz_6536_; size_t v___x_6537_; lean_object* v___x_6538_; 
v_val_6533_ = lean_ctor_get(v_id_x3f_6512_, 0);
lean_inc(v_val_6533_);
lean_dec_ref_known(v_id_x3f_6512_, 1);
v___x_6534_ = l_Lean_Name_components(v_val_6533_);
v___x_6535_ = lean_array_mk(v___x_6534_);
v_sz_6536_ = lean_array_size(v___x_6535_);
v___x_6537_ = ((size_t)0ULL);
v___x_6538_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(v_sz_6536_, v___x_6537_, v___x_6535_);
v___y_6529_ = v___x_6538_;
goto v___jp_6528_;
}
v___jp_6517_:
{
lean_object* v___x_6519_; lean_object* v___x_6520_; lean_object* v___x_6521_; lean_object* v_scopeNames_6522_; lean_object* v_candidates_6523_; size_t v_sz_6524_; size_t v___x_6525_; lean_object* v___x_6526_; lean_object* v___x_6527_; 
v___x_6519_ = lean_array_mk(v_scopeNames_6514_);
v___x_6520_ = lean_array_pop(v___x_6519_);
v___x_6521_ = l_Array_takeWhile___redArg(v___f_6516_, v___x_6520_);
lean_dec_ref(v___x_6520_);
v_scopeNames_6522_ = l_Array_reverse___redArg(v___x_6521_);
v_candidates_6523_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(v_idComponents_6518_, v_scopeNames_6522_);
lean_dec_ref(v_idComponents_6518_);
v_sz_6524_ = lean_array_size(v_candidates_6523_);
v___x_6525_ = ((size_t)0ULL);
v___x_6526_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(v_completionInfoPos_6511_, v_uri_6509_, v_pos_6510_, v_sz_6524_, v___x_6525_, v_candidates_6523_);
v___x_6527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6527_, 0, v___x_6526_);
return v___x_6527_;
}
v___jp_6528_:
{
if (v_danglingDot_6513_ == 0)
{
v_idComponents_6518_ = v___y_6529_;
goto v___jp_6517_;
}
else
{
lean_object* v___x_6530_; lean_object* v_idComponents_6531_; 
v___x_6530_ = ((lean_object*)(l_Lean_Server_Completion_fieldIdCompletion___closed__0));
v_idComponents_6531_ = lean_array_push(v___y_6529_, v___x_6530_);
v_idComponents_6518_ = v_idComponents_6531_;
goto v___jp_6517_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___boxed(lean_object* v_uri_6539_, lean_object* v_pos_6540_, lean_object* v_completionInfoPos_6541_, lean_object* v_id_x3f_6542_, lean_object* v_danglingDot_6543_, lean_object* v_scopeNames_6544_, lean_object* v_a_6545_){
_start:
{
uint8_t v_danglingDot_boxed_6546_; lean_object* v_res_6547_; 
v_danglingDot_boxed_6546_ = lean_unbox(v_danglingDot_6543_);
v_res_6547_ = l_Lean_Server_Completion_endSectionCompletion(v_uri_6539_, v_pos_6540_, v_completionInfoPos_6541_, v_id_x3f_6542_, v_danglingDot_boxed_6546_, v_scopeNames_6544_);
return v_res_6547_;
}
}
lean_object* runtime_initialize_Lean_Data_FuzzyMatching(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_EligibleHeaderDecls(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_RequestCancellation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_FuzzyMatching(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_EligibleHeaderDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_FuzzyMatching(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Doc(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_EligibleHeaderDecls(uint8_t builtin);
lean_object* initialize_Lean_Server_RequestCancellation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_FuzzyMatching(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_EligibleHeaderDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionCollectors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_CompletionCollectors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_CompletionCollectors(builtin);
}
#ifdef __cplusplus
}
#endif

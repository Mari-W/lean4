// Lean compiler output
// Module: Lean.DocString.Add
// Imports: import Lean.Elab.DocString public import Lean.DocString.DeferredCheck public import Lean.DocString.Types import Lean.DocString.Parser public import Lean.Elab.Term.TermElabM
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_Doc_deferredCheckExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Doc_Parser_BlockCtxt_forDocString(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_documentFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Doc_Parser_locateError(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabModSnippet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_execForModule___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object*);
lean_object* l_Lean_TSyntax_getVersoBlocks(lean_object*);
lean_object* l_Lean_getMainModuleDoc(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
extern lean_object* l_Lean_versoDocStringExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
lean_object* l_Lean_Core_setMessageLog___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_exec___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_instMonadEIO___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Doc_parseFailureKind;
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
uint8_t l_Lean_isVersoDocComment(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_removeBuiltinDocString(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_document_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_document_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_parseFailure_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_parseFailure_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_stx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_stx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringView_of(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoDocstringView_of___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "The "};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__0 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1;
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = " of this documentation comment has no source location, so it cannot be parsed."};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__2 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__2_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation(lean_object*);
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "closing delimiter"};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__0 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2;
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__3 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__3_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5;
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "opening delimiter"};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__6 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__6_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "This documentation comment has an unexpected structure, so it cannot be parsed."};
static const lean_object* l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__0 = (const lean_object*)&l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__1;
static lean_once_cell_t l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docStringRange(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docStringRange___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocStringAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocStringAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringOfText___closed__0 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__0_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringOfText___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__1 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__1_value;
static const lean_closure_object l_Lean_versoDocStringOfText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_documentFn, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__1_value)} };
static const lean_object* l_Lean_versoDocStringOfText___closed__2 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__2_value;
static const lean_array_object l_Lean_versoDocStringOfText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringOfText___closed__3 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__3_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__4 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__4_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__4_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__5 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_versoDocString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_versoDocString___closed__0 = (const lean_object*)&l_Lean_versoDocString___closed__0_value;
static const lean_string_object l_Lean_versoDocString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_versoDocString___closed__1 = (const lean_object*)&l_Lean_versoDocString___closed__1_value;
static const lean_string_object l_Lean_versoDocString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_versoDocString___closed__2 = (const lean_object*)&l_Lean_versoDocString___closed__2_value;
static const lean_string_object l_Lean_versoDocString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_versoDocString___closed__3 = (const lean_object*)&l_Lean_versoDocString___closed__3_value;
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_0),((lean_object*)&l_Lean_versoDocString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_1),((lean_object*)&l_Lean_versoDocString___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_2),((lean_object*)&l_Lean_versoDocString___closed__3_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l_Lean_versoDocString___closed__4 = (const lean_object*)&l_Lean_versoDocString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_versoDocStringFromString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringFromString___closed__0 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__0_value;
static const lean_string_object l_Lean_versoDocStringFromString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_versoDocStringFromString___closed__1 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__1_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__2 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__2_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__2_value),((lean_object*)&l_Lean_versoDocStringFromString___closed__0_value)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__3 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__2_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__3 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__3_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__4_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__5 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__5_value;
static const lean_closure_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__6 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__6_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__7 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__7_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__7_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__2_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__3_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__4_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__5_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__8 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__8_value),((lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__6_value)}};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration '"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0_value;
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' is in an imported module"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Error adding module docs: "};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "Can't add Verso-format module docs because there is already Markdown-format content present."};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1;
static const lean_string_object l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_makeDocStringVerso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Documentation for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__0 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__0_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__1;
static const lean_string_object l_Lean_makeDocStringVerso___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` is already in Verso format"};
static const lean_object* l_Lean_makeDocStringVerso___closed__2 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__2_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__3;
static const lean_string_object l_Lean_makeDocStringVerso___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "No documentation found for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__4 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__4_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__5;
static const lean_string_object l_Lean_makeDocStringVerso___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_makeDocStringVerso___closed__6 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__6_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__7;
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_____s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object* v___x_5_, lean_object* v_toPure_6_, lean_object* v_r_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
v___x_9_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object* v___y_10_, lean_object* v_str_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_inst_14_, lean_object* v_inst_15_, lean_object* v_toBind_16_, lean_object* v___f_17_, lean_object* v___f_18_, lean_object* v_a_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_fst_22_; 
v_fst_22_ = lean_ctor_get(v_a_19_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v___y_10_) == 1)
{
lean_object* v_snd_23_; lean_object* v_start_24_; lean_object* v_stop_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_48_; 
lean_dec(v___f_18_);
v_snd_23_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_23_);
lean_dec_ref(v_a_19_);
v_start_24_ = lean_ctor_get(v_fst_22_, 0);
v_stop_25_ = lean_ctor_get(v_fst_22_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_fst_22_);
if (v_isSharedCheck_48_ == 0)
{
v___x_27_ = v_fst_22_;
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_stop_25_);
lean_inc(v_start_24_);
lean_dec(v_fst_22_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_47_; 
v_val_29_ = lean_ctor_get(v___y_10_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___y_10_);
if (v_isSharedCheck_47_ == 0)
{
v___x_31_ = v___y_10_;
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___y_10_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_33_ = lean_nat_add(v_val_29_, v_start_24_);
v___x_34_ = lean_nat_add(v_val_29_, v_stop_25_);
lean_dec(v_val_29_);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_36_, 0, v___x_33_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_35_);
v___x_37_ = lean_string_utf8_extract(v_str_11_, v_start_24_, v_stop_25_);
lean_dec(v_stop_25_);
lean_dec(v_start_24_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 2);
lean_ctor_set(v___x_27_, 1, v___x_37_);
lean_ctor_set(v___x_27_, 0, v___x_36_);
v___x_39_ = v___x_27_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___x_37_);
v___x_39_ = v_reuseFailAlloc_46_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 3);
lean_ctor_set(v___x_31_, 0, v_snd_23_);
v___x_41_ = v___x_31_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_snd_23_);
v___x_41_ = v_reuseFailAlloc_45_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = l_Lean_MessageData_ofFormat(v___x_41_);
v___x_43_ = l_Lean_logErrorAt___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_39_, v___x_42_);
v___x_44_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_43_, v___f_17_);
return v___x_44_;
}
}
}
}
}
else
{
lean_object* v_snd_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_fst_22_);
lean_dec(v___f_17_);
lean_dec(v___y_10_);
v_snd_49_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v_a_19_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v_snd_49_);
v___x_51_ = l_Lean_MessageData_ofFormat(v___x_50_);
v___x_52_ = l_Lean_logError___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_51_);
v___x_53_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_52_, v___f_18_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object* v___y_54_, lean_object* v_str_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_toBind_60_, lean_object* v___f_61_, lean_object* v___f_62_, lean_object* v_a_63_, lean_object* v_x_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_validateDocComment___redArg___lam__3(v___y_54_, v_str_55_, v_inst_56_, v_inst_57_, v_inst_58_, v_inst_59_, v_toBind_60_, v___f_61_, v___f_62_, v_a_63_, v_x_64_, v___y_65_);
lean_dec_ref(v_str_55_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object* v_toPure_67_, lean_object* v___y_68_, lean_object* v_str_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_toBind_74_, lean_object* v___f_75_, lean_object* v_____x_76_){
_start:
{
lean_object* v_fst_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; size_t v_sz_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_fst_77_ = lean_ctor_get(v_____x_76_, 0);
lean_inc(v_fst_77_);
lean_dec_ref(v_____x_76_);
v___x_78_ = lean_box(0);
v___f_79_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__1), 3, 2);
lean_closure_set(v___f_79_, 0, v___x_78_);
lean_closure_set(v___f_79_, 1, v_toPure_67_);
lean_inc_ref(v___f_79_);
lean_inc(v_toBind_74_);
lean_inc_ref(v_inst_70_);
v___f_80_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__3___boxed), 12, 9);
lean_closure_set(v___f_80_, 0, v___y_68_);
lean_closure_set(v___f_80_, 1, v_str_69_);
lean_closure_set(v___f_80_, 2, v_inst_70_);
lean_closure_set(v___f_80_, 3, v_inst_71_);
lean_closure_set(v___f_80_, 4, v_inst_72_);
lean_closure_set(v___f_80_, 5, v_inst_73_);
lean_closure_set(v___f_80_, 6, v_toBind_74_);
lean_closure_set(v___f_80_, 7, v___f_79_);
lean_closure_set(v___f_80_, 8, v___f_79_);
v_sz_81_ = lean_array_size(v_fst_77_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_70_, v_fst_77_, v___f_80_, v_sz_81_, v___x_82_, v___x_78_);
v___x_84_ = lean_apply_4(v_toBind_74_, lean_box(0), lean_box(0), v___x_83_, v___f_75_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_inst_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_docstring_90_){
_start:
{
lean_object* v_toApplicative_91_; lean_object* v_toBind_92_; lean_object* v_toPure_93_; lean_object* v_str_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___y_100_; 
v_toApplicative_91_ = lean_ctor_get(v_inst_85_, 0);
v_toBind_92_ = lean_ctor_get(v_inst_85_, 1);
lean_inc(v_toBind_92_);
v_toPure_93_ = lean_ctor_get(v_toApplicative_91_, 1);
lean_inc_n(v_toPure_93_, 2);
v_str_94_ = l_Lean_TSyntax_getDocString(v_docstring_90_);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = l_Lean_Syntax_getArg(v_docstring_90_, v___x_95_);
v___x_97_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_96_);
lean_dec(v___x_96_);
v___f_98_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_98_, 0, v_toPure_93_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_box(0);
v___y_100_ = v___x_106_;
goto v___jp_99_;
}
else
{
lean_object* v_val_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v_val_107_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v___x_97_, 1);
v___x_108_ = 0;
v___x_109_ = l_Lean_SourceInfo_getPos_x3f(v_val_107_, v___x_108_);
lean_dec(v_val_107_);
v___y_100_ = v___x_109_;
goto v___jp_99_;
}
v___jp_99_:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_inc(v_toBind_92_);
lean_inc_ref(v_str_94_);
v___f_101_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__2), 10, 9);
lean_closure_set(v___f_101_, 0, v_toPure_93_);
lean_closure_set(v___f_101_, 1, v___y_100_);
lean_closure_set(v___f_101_, 2, v_str_94_);
lean_closure_set(v___f_101_, 3, v_inst_85_);
lean_closure_set(v___f_101_, 4, v_inst_87_);
lean_closure_set(v___f_101_, 5, v_inst_88_);
lean_closure_set(v___f_101_, 6, v_inst_89_);
lean_closure_set(v___f_101_, 7, v_toBind_92_);
lean_closure_set(v___f_101_, 8, v___f_98_);
v___x_102_ = l_Lean_rewriteManualLinksCore(v_str_94_);
v___x_103_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__5___boxed), 4, 3);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, lean_box(0));
lean_closure_set(v___x_103_, 2, v___x_102_);
v___x_104_ = lean_apply_2(v_inst_86_, lean_box(0), v___x_103_);
v___x_105_ = lean_apply_4(v_toBind_92_, lean_box(0), lean_box(0), v___x_104_, v___f_101_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_docstring_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_validateDocComment___redArg(v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_, v_inst_114_, v_docstring_115_);
lean_dec(v_docstring_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object* v_m_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_docstring_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_validateDocComment___redArg(v_inst_118_, v_inst_119_, v_inst_120_, v_inst_121_, v_inst_122_, v_docstring_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object* v_m_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_docstring_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_validateDocComment(v_m_125_, v_inst_126_, v_inst_127_, v_inst_128_, v_inst_129_, v_inst_130_, v_docstring_131_);
lean_dec(v_docstring_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage(lean_object* v_ictx_134_, lean_object* v_pos_135_, lean_object* v_e_136_){
_start:
{
lean_object* v___x_137_; lean_object* v_snd_138_; lean_object* v_fst_139_; lean_object* v_fst_140_; lean_object* v_snd_141_; lean_object* v_fileName_142_; lean_object* v_fileMap_143_; lean_object* v___x_144_; lean_object* v___y_146_; 
v___x_137_ = l_Lean_Doc_Parser_locateError(v_ictx_134_, v_pos_135_, v_e_136_);
v_snd_138_ = lean_ctor_get(v___x_137_, 1);
lean_inc(v_snd_138_);
v_fst_139_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_fst_139_);
lean_dec_ref(v___x_137_);
v_fst_140_ = lean_ctor_get(v_snd_138_, 0);
lean_inc(v_fst_140_);
v_snd_141_ = lean_ctor_get(v_snd_138_, 1);
lean_inc(v_snd_141_);
lean_dec(v_snd_138_);
v_fileName_142_ = lean_ctor_get(v_ictx_134_, 1);
lean_inc_ref(v_fileName_142_);
v_fileMap_143_ = lean_ctor_get(v_ictx_134_, 2);
lean_inc_ref_n(v_fileMap_143_, 2);
lean_dec_ref(v_ictx_134_);
v___x_144_ = l_Lean_FileMap_toPosition(v_fileMap_143_, v_fst_139_);
lean_dec(v_fst_139_);
if (lean_obj_tag(v_fst_140_) == 0)
{
lean_object* v___x_155_; 
lean_dec_ref(v_fileMap_143_);
v___x_155_ = lean_box(0);
v___y_146_ = v___x_155_;
goto v___jp_145_;
}
else
{
lean_object* v_val_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_164_; 
v_val_156_ = lean_ctor_get(v_fst_140_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v_fst_140_);
if (v_isSharedCheck_164_ == 0)
{
v___x_158_ = v_fst_140_;
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_val_156_);
lean_dec(v_fst_140_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = l_Lean_FileMap_toPosition(v_fileMap_143_, v_val_156_);
lean_dec(v_val_156_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_160_);
v___x_162_ = v___x_158_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
v___y_146_ = v___x_162_;
goto v___jp_145_;
}
}
}
v___jp_145_:
{
uint8_t v___x_147_; uint8_t v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_147_ = 1;
v___x_148_ = 2;
v___x_149_ = 0;
v___x_150_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0));
v___x_151_ = l_Lean_Parser_Error_toString(v_snd_141_);
v___x_152_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
v___x_153_ = l_Lean_MessageData_ofFormat(v___x_152_);
v___x_154_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_154_, 0, v_fileName_142_);
lean_ctor_set(v___x_154_, 1, v___x_144_);
lean_ctor_set(v___x_154_, 2, v___y_146_);
lean_ctor_set(v___x_154_, 3, v___x_150_);
lean_ctor_set(v___x_154_, 4, v___x_153_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*5, v___x_147_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*5 + 1, v___x_148_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*5 + 2, v___x_149_);
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorIdx___impl(lean_object* v_x_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_tag_nat(v_x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorIdx___impl___boxed(lean_object* v_x_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_VersoDocstringMarkup_ctorIdx___impl(v_x_167_);
lean_dec_ref(v_x_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim___redArg(lean_object* v_t_169_, lean_object* v_k_170_){
_start:
{
lean_object* v_doc_171_; lean_object* v___x_172_; 
v_doc_171_ = lean_ctor_get(v_t_169_, 0);
lean_inc(v_doc_171_);
lean_dec_ref(v_t_169_);
v___x_172_ = lean_apply_1(v_k_170_, v_doc_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim(lean_object* v_motive_173_, lean_object* v_ctorIdx_174_, lean_object* v_t_175_, lean_object* v_h_176_, lean_object* v_k_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_175_, v_k_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_ctorElim___boxed(lean_object* v_motive_179_, lean_object* v_ctorIdx_180_, lean_object* v_t_181_, lean_object* v_h_182_, lean_object* v_k_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_VersoDocstringMarkup_ctorElim(v_motive_179_, v_ctorIdx_180_, v_t_181_, v_h_182_, v_k_183_);
lean_dec(v_ctorIdx_180_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_document_elim___redArg(lean_object* v_t_185_, lean_object* v_document_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_185_, v_document_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_document_elim(lean_object* v_motive_188_, lean_object* v_t_189_, lean_object* v_h_190_, lean_object* v_document_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_189_, v_document_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_parseFailure_elim___redArg(lean_object* v_t_193_, lean_object* v_parseFailure_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_193_, v_parseFailure_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_parseFailure_elim(lean_object* v_motive_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_parseFailure_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_VersoDocstringMarkup_ctorElim___redArg(v_t_197_, v_parseFailure_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_stx(lean_object* v_x_201_){
_start:
{
lean_object* v_doc_202_; 
v_doc_202_ = lean_ctor_get(v_x_201_, 0);
lean_inc(v_doc_202_);
return v_doc_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringMarkup_stx___boxed(lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_VersoDocstringMarkup_stx(v_x_203_);
lean_dec_ref(v_x_203_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringView_of(lean_object* v_docComment_205_){
_start:
{
lean_object* v___x_206_; lean_object* v_body_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___y_211_; lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_206_ = lean_unsigned_to_nat(1u);
v_body_207_ = l_Lean_Syntax_getArg(v_docComment_205_, v___x_206_);
v___x_208_ = lean_unsigned_to_nat(0u);
v___x_209_ = l_Lean_Syntax_getArg(v_docComment_205_, v___x_208_);
v___x_214_ = l_Lean_Syntax_getArg(v_body_207_, v___x_208_);
v___x_215_ = l_Lean_Doc_parseFailureKind;
lean_inc(v___x_214_);
v___x_216_ = l_Lean_Syntax_isOfKind(v___x_214_, v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; 
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_214_);
v___y_211_ = v___x_217_;
goto v___jp_210_;
}
else
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = l_Lean_Syntax_getArg(v___x_214_, v___x_208_);
lean_dec(v___x_214_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___y_211_ = v___x_219_;
goto v___jp_210_;
}
v___jp_210_:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = l_Lean_Syntax_getArg(v_body_207_, v___x_206_);
lean_dec(v_body_207_);
v___x_213_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_213_, 0, v___x_209_);
lean_ctor_set(v___x_213_, 1, v___y_211_);
lean_ctor_set(v___x_213_, 2, v___x_212_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoDocstringView_of___boxed(lean_object* v_docComment_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_VersoDocstringView_of(v_docComment_220_);
lean_dec(v_docComment_220_);
return v_res_221_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__0));
v___x_224_ = l_Lean_stringToMessageData(v___x_223_);
return v___x_224_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__2));
v___x_227_ = l_Lean_stringToMessageData(v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_noSourceLocation(lean_object* v_what_228_){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_229_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1, &l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1_once, _init_l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__1);
v___x_230_ = l_Lean_stringToMessageData(v_what_228_);
v___x_231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3, &l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3_once, _init_l___private_Lean_DocString_Add_0__Lean_noSourceLocation___closed__3);
v___x_233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
return v___x_233_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__0));
v___x_236_ = l___private_Lean_DocString_Add_0__Lean_noSourceLocation(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__1);
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
return v___x_238_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__3));
v___x_241_ = l___private_Lean_DocString_Add_0__Lean_noSourceLocation(v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__4);
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__6));
v___x_246_ = l___private_Lean_DocString_Add_0__Lean_noSourceLocation(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__7);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange(lean_object* v_view_249_){
_start:
{
lean_object* v_opener_250_; lean_object* v_markup_251_; lean_object* v_closer_252_; uint8_t v___x_253_; lean_object* v___x_254_; 
v_opener_250_ = lean_ctor_get(v_view_249_, 0);
v_markup_251_ = lean_ctor_get(v_view_249_, 1);
v_closer_252_ = lean_ctor_get(v_view_249_, 2);
v___x_253_ = 1;
v___x_254_ = l_Lean_Syntax_getPos_x3f(v_opener_250_, v___x_253_);
if (lean_obj_tag(v___x_254_) == 1)
{
lean_object* v_val_255_; lean_object* v___y_257_; lean_object* v_doc_273_; 
v_val_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_val_255_);
lean_dec_ref_known(v___x_254_, 1);
v_doc_273_ = lean_ctor_get(v_markup_251_, 0);
v___y_257_ = v_doc_273_;
goto v___jp_256_;
v___jp_256_:
{
lean_object* v___x_258_; 
v___x_258_ = l_Lean_Syntax_getPos_x3f(v___y_257_, v___x_253_);
if (lean_obj_tag(v___x_258_) == 1)
{
lean_object* v_val_259_; lean_object* v___x_260_; 
v_val_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_val_259_);
lean_dec_ref_known(v___x_258_, 1);
v___x_260_ = l_Lean_Syntax_getPos_x3f(v_closer_252_, v___x_253_);
if (lean_obj_tag(v___x_260_) == 1)
{
lean_object* v_val_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_270_; 
v_val_261_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_270_ == 0)
{
v___x_263_ = v___x_260_;
v_isShared_264_ = v_isSharedCheck_270_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_val_261_);
lean_dec(v___x_260_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_270_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v_val_259_);
lean_ctor_set(v___x_265_, 1, v_val_261_);
v___x_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_266_, 0, v_val_255_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_266_);
v___x_268_ = v___x_263_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
else
{
lean_object* v___x_271_; 
lean_dec(v___x_260_);
lean_dec(v_val_259_);
lean_dec(v_val_255_);
v___x_271_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2);
return v___x_271_;
}
}
else
{
lean_object* v___x_272_; 
lean_dec(v___x_258_);
lean_dec(v_val_255_);
v___x_272_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5);
return v___x_272_;
}
}
}
else
{
lean_object* v___x_274_; 
lean_dec(v___x_254_);
v___x_274_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docCommentRange___boxed(lean_object* v_view_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l___private_Lean_DocString_Add_0__Lean_docCommentRange(v_view_275_);
lean_dec_ref(v_view_275_);
return v_res_276_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__1(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__0));
v___x_279_ = l_Lean_stringToMessageData(v___x_278_);
return v___x_279_;
}
}
static lean_object* _init_l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__2(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__1, &l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__1_once, _init_l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__1);
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docStringRange(lean_object* v_docComment_282_){
_start:
{
if (lean_obj_tag(v_docComment_282_) == 1)
{
lean_object* v_args_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_args_285_ = lean_ctor_get(v_docComment_282_, 2);
v___x_286_ = lean_array_get_size(v_args_285_);
v___x_287_ = lean_unsigned_to_nat(2u);
v___x_288_ = lean_nat_dec_eq(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
goto v___jp_283_;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(1u);
v___x_290_ = lean_array_fget_borrowed(v_args_285_, v___x_289_);
if (lean_obj_tag(v___x_290_) == 1)
{
lean_object* v_args_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_args_291_ = lean_ctor_get(v___x_290_, 2);
v___x_292_ = lean_array_get_size(v_args_291_);
v___x_293_ = lean_nat_dec_eq(v___x_292_, v___x_287_);
if (v___x_293_ == 0)
{
goto v___jp_283_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = lean_array_fget_borrowed(v_args_285_, v___x_294_);
v___x_296_ = l_Lean_Syntax_getPos_x3f(v___x_295_, v___x_293_);
if (lean_obj_tag(v___x_296_) == 1)
{
lean_object* v_val_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_val_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_val_297_);
lean_dec_ref_known(v___x_296_, 1);
v___x_298_ = lean_array_fget_borrowed(v_args_291_, v___x_294_);
v___x_299_ = l_Lean_Syntax_getPos_x3f(v___x_298_, v___x_293_);
if (lean_obj_tag(v___x_299_) == 1)
{
lean_object* v_val_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_val_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_val_300_);
lean_dec_ref_known(v___x_299_, 1);
v___x_301_ = lean_array_fget_borrowed(v_args_291_, v___x_289_);
v___x_302_ = l_Lean_Syntax_getPos_x3f(v___x_301_, v___x_293_);
if (lean_obj_tag(v___x_302_) == 1)
{
lean_object* v_val_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_312_; 
v_val_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_312_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_312_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_val_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_312_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_310_; 
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v_val_300_);
lean_ctor_set(v___x_307_, 1, v_val_303_);
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_val_297_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_308_);
v___x_310_ = v___x_305_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_308_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
else
{
lean_object* v___x_313_; 
lean_dec(v___x_302_);
lean_dec(v_val_300_);
lean_dec(v_val_297_);
v___x_313_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__2);
return v___x_313_;
}
}
else
{
lean_object* v___x_314_; 
lean_dec(v___x_299_);
lean_dec(v_val_297_);
v___x_314_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__5);
return v___x_314_;
}
}
else
{
lean_object* v___x_315_; 
lean_dec(v___x_296_);
v___x_315_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8, &l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8_once, _init_l___private_Lean_DocString_Add_0__Lean_docCommentRange___closed__8);
return v___x_315_;
}
}
}
else
{
goto v___jp_283_;
}
}
}
else
{
goto v___jp_283_;
}
v___jp_283_:
{
lean_object* v___x_284_; 
v___x_284_ = lean_obj_once(&l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__2, &l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__2_once, _init_l___private_Lean_DocString_Add_0__Lean_docStringRange___closed__2);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_docStringRange___boxed(lean_object* v_docComment_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l___private_Lean_DocString_Add_0__Lean_docStringRange(v_docComment_316_);
lean_dec(v_docComment_316_);
return v_res_317_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0(uint8_t v_suppressElabErrors_326_, uint8_t v___x_327_, lean_object* v_x_328_){
_start:
{
if (lean_obj_tag(v_x_328_) == 1)
{
lean_object* v_pre_329_; 
v_pre_329_ = lean_ctor_get(v_x_328_, 0);
switch(lean_obj_tag(v_pre_329_))
{
case 1:
{
lean_object* v_pre_330_; 
v_pre_330_ = lean_ctor_get(v_pre_329_, 0);
switch(lean_obj_tag(v_pre_330_))
{
case 0:
{
lean_object* v_str_331_; lean_object* v_str_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v_str_331_ = lean_ctor_get(v_x_328_, 1);
v_str_332_ = lean_ctor_get(v_pre_329_, 1);
v___x_333_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0));
v___x_334_ = lean_string_dec_eq(v_str_332_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1));
v___x_336_ = lean_string_dec_eq(v_str_332_, v___x_335_);
if (v___x_336_ == 0)
{
return v___x_336_;
}
else
{
lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_337_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2));
v___x_338_ = lean_string_dec_eq(v_str_331_, v___x_337_);
if (v___x_338_ == 0)
{
return v___x_338_;
}
else
{
return v_suppressElabErrors_326_;
}
}
}
else
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3));
v___x_340_ = lean_string_dec_eq(v_str_331_, v___x_339_);
if (v___x_340_ == 0)
{
return v___x_340_;
}
else
{
return v_suppressElabErrors_326_;
}
}
}
case 1:
{
lean_object* v_pre_341_; 
v_pre_341_ = lean_ctor_get(v_pre_330_, 0);
if (lean_obj_tag(v_pre_341_) == 0)
{
lean_object* v_str_342_; lean_object* v_str_343_; lean_object* v_str_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v_str_342_ = lean_ctor_get(v_x_328_, 1);
v_str_343_ = lean_ctor_get(v_pre_329_, 1);
v_str_344_ = lean_ctor_get(v_pre_330_, 1);
v___x_345_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4));
v___x_346_ = lean_string_dec_eq(v_str_344_, v___x_345_);
if (v___x_346_ == 0)
{
return v___x_346_;
}
else
{
lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_347_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5));
v___x_348_ = lean_string_dec_eq(v_str_343_, v___x_347_);
if (v___x_348_ == 0)
{
return v___x_348_;
}
else
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6));
v___x_350_ = lean_string_dec_eq(v_str_342_, v___x_349_);
if (v___x_350_ == 0)
{
return v___x_350_;
}
else
{
return v_suppressElabErrors_326_;
}
}
}
}
else
{
return v___x_327_;
}
}
default: 
{
return v___x_327_;
}
}
}
case 0:
{
lean_object* v_str_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v_str_351_ = lean_ctor_get(v_x_328_, 1);
v___x_352_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7));
v___x_353_ = lean_string_dec_eq(v_str_351_, v___x_352_);
if (v___x_353_ == 0)
{
return v___x_353_;
}
else
{
return v_suppressElabErrors_326_;
}
}
default: 
{
return v___x_327_;
}
}
}
else
{
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___boxed(lean_object* v_suppressElabErrors_354_, lean_object* v___x_355_, lean_object* v_x_356_){
_start:
{
uint8_t v_suppressElabErrors_boxed_357_; uint8_t v___x_3724__boxed_358_; uint8_t v_res_359_; lean_object* v_r_360_; 
v_suppressElabErrors_boxed_357_ = lean_unbox(v_suppressElabErrors_354_);
v___x_3724__boxed_358_ = lean_unbox(v___x_355_);
v_res_359_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0(v_suppressElabErrors_boxed_357_, v___x_3724__boxed_358_, v_x_356_);
lean_dec(v_x_356_);
v_r_360_ = lean_box(v_res_359_);
return v_r_360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0(lean_object* v___x_361_, lean_object* v___x_362_, lean_object* v_as_363_, size_t v_sz_364_, size_t v_i_365_, lean_object* v_b_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_a_371_; uint8_t v___x_375_; 
v___x_375_ = lean_usize_dec_lt(v_i_365_, v_sz_364_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; 
lean_dec_ref(v___x_361_);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v_b_366_);
return v___x_376_;
}
else
{
lean_object* v_a_377_; lean_object* v_snd_378_; lean_object* v_fst_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_446_; 
v_a_377_ = lean_array_uget(v_as_363_, v_i_365_);
v_snd_378_ = lean_ctor_get(v_a_377_, 1);
v_fst_379_ = lean_ctor_get(v_a_377_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v_a_377_);
if (v_isSharedCheck_446_ == 0)
{
v___x_381_ = v_a_377_;
v_isShared_382_ = v_isSharedCheck_446_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_snd_378_);
lean_inc(v_fst_379_);
lean_dec(v_a_377_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_446_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v_snd_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_444_; 
v_snd_383_ = lean_ctor_get(v_snd_378_, 1);
v_isSharedCheck_444_ = !lean_is_exclusive(v_snd_378_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; 
v_unused_445_ = lean_ctor_get(v_snd_378_, 0);
lean_dec(v_unused_445_);
v___x_385_ = v_snd_378_;
v_isShared_386_ = v_isSharedCheck_444_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_snd_383_);
lean_dec(v_snd_378_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_444_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
uint8_t v_suppressElabErrors_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___y_391_; lean_object* v___y_392_; 
v_suppressElabErrors_387_ = lean_ctor_get_uint8(v___y_367_, sizeof(void*)*3 + 2);
v___x_388_ = lean_box(0);
lean_inc_ref(v___x_361_);
v___x_389_ = l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage(v___x_361_, v_fst_379_, v_snd_383_);
if (v_suppressElabErrors_387_ == 0)
{
v___y_391_ = v___y_367_;
v___y_392_ = v___y_368_;
goto v___jp_390_;
}
else
{
lean_object* v_data_437_; lean_object* v___x_438_; uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___f_442_; uint8_t v___x_443_; 
v_data_437_ = lean_ctor_get(v___x_389_, 4);
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = lean_nat_dec_eq(v___x_362_, v___x_438_);
v___x_440_ = lean_box(v_suppressElabErrors_387_);
v___x_441_ = lean_box(v___x_439_);
v___f_442_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_442_, 0, v___x_440_);
lean_closure_set(v___f_442_, 1, v___x_441_);
lean_inc(v_data_437_);
v___x_443_ = l_Lean_MessageData_hasTag(v___f_442_, v_data_437_);
if (v___x_443_ == 0)
{
lean_dec_ref(v___x_389_);
lean_del_object(v___x_385_);
lean_del_object(v___x_381_);
v_a_371_ = v___x_388_;
goto v___jp_370_;
}
else
{
v___y_391_ = v___y_367_;
v___y_392_ = v___y_368_;
goto v___jp_390_;
}
}
v___jp_390_:
{
lean_object* v_toCold_393_; lean_object* v_fileName_394_; lean_object* v_pos_395_; lean_object* v_endPos_396_; uint8_t v_keepFullRange_397_; uint8_t v_severity_398_; uint8_t v_isSilent_399_; lean_object* v_caption_400_; lean_object* v_data_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_436_; 
v_toCold_393_ = lean_ctor_get(v___y_391_, 0);
v_fileName_394_ = lean_ctor_get(v___x_389_, 0);
v_pos_395_ = lean_ctor_get(v___x_389_, 1);
v_endPos_396_ = lean_ctor_get(v___x_389_, 2);
v_keepFullRange_397_ = lean_ctor_get_uint8(v___x_389_, sizeof(void*)*5);
v_severity_398_ = lean_ctor_get_uint8(v___x_389_, sizeof(void*)*5 + 1);
v_isSilent_399_ = lean_ctor_get_uint8(v___x_389_, sizeof(void*)*5 + 2);
v_caption_400_ = lean_ctor_get(v___x_389_, 3);
v_data_401_ = lean_ctor_get(v___x_389_, 4);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_436_ == 0)
{
v___x_403_ = v___x_389_;
v_isShared_404_ = v_isSharedCheck_436_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_data_401_);
lean_inc(v_caption_400_);
lean_inc(v_endPos_396_);
lean_inc(v_pos_395_);
lean_inc(v_fileName_394_);
lean_dec(v___x_389_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_436_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v_currNamespace_405_; lean_object* v_openDecls_406_; lean_object* v___x_408_; 
v_currNamespace_405_ = lean_ctor_get(v_toCold_393_, 4);
v_openDecls_406_ = lean_ctor_get(v_toCold_393_, 5);
lean_inc(v_openDecls_406_);
lean_inc(v_currNamespace_405_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v_openDecls_406_);
lean_ctor_set(v___x_385_, 0, v_currNamespace_405_);
v___x_408_ = v___x_385_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_currNamespace_405_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_openDecls_406_);
v___x_408_ = v_reuseFailAlloc_435_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
lean_object* v___x_410_; 
if (v_isShared_382_ == 0)
{
lean_ctor_set_tag(v___x_381_, 4);
lean_ctor_set(v___x_381_, 1, v_data_401_);
lean_ctor_set(v___x_381_, 0, v___x_408_);
v___x_410_ = v___x_381_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_408_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_data_401_);
v___x_410_ = v_reuseFailAlloc_434_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_412_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 4, v___x_410_);
v___x_412_ = v___x_403_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_fileName_394_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_pos_395_);
lean_ctor_set(v_reuseFailAlloc_433_, 2, v_endPos_396_);
lean_ctor_set(v_reuseFailAlloc_433_, 3, v_caption_400_);
lean_ctor_set(v_reuseFailAlloc_433_, 4, v___x_410_);
lean_ctor_set_uint8(v_reuseFailAlloc_433_, sizeof(void*)*5, v_keepFullRange_397_);
lean_ctor_set_uint8(v_reuseFailAlloc_433_, sizeof(void*)*5 + 1, v_severity_398_);
lean_ctor_set_uint8(v_reuseFailAlloc_433_, sizeof(void*)*5 + 2, v_isSilent_399_);
v___x_412_ = v_reuseFailAlloc_433_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
lean_object* v___x_413_; lean_object* v_env_414_; lean_object* v_nextMacroScope_415_; lean_object* v_ngen_416_; lean_object* v_auxDeclNGen_417_; lean_object* v_traceState_418_; lean_object* v_cache_419_; lean_object* v_recordedDeps_420_; lean_object* v_messages_421_; lean_object* v_infoState_422_; lean_object* v_snapshotTasks_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_432_; 
v___x_413_ = lean_st_ref_take(v___y_392_);
v_env_414_ = lean_ctor_get(v___x_413_, 0);
v_nextMacroScope_415_ = lean_ctor_get(v___x_413_, 1);
v_ngen_416_ = lean_ctor_get(v___x_413_, 2);
v_auxDeclNGen_417_ = lean_ctor_get(v___x_413_, 3);
v_traceState_418_ = lean_ctor_get(v___x_413_, 4);
v_cache_419_ = lean_ctor_get(v___x_413_, 5);
v_recordedDeps_420_ = lean_ctor_get(v___x_413_, 6);
v_messages_421_ = lean_ctor_get(v___x_413_, 7);
v_infoState_422_ = lean_ctor_get(v___x_413_, 8);
v_snapshotTasks_423_ = lean_ctor_get(v___x_413_, 9);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_432_ == 0)
{
v___x_425_ = v___x_413_;
v_isShared_426_ = v_isSharedCheck_432_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_snapshotTasks_423_);
lean_inc(v_infoState_422_);
lean_inc(v_messages_421_);
lean_inc(v_recordedDeps_420_);
lean_inc(v_cache_419_);
lean_inc(v_traceState_418_);
lean_inc(v_auxDeclNGen_417_);
lean_inc(v_ngen_416_);
lean_inc(v_nextMacroScope_415_);
lean_inc(v_env_414_);
lean_dec(v___x_413_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_432_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = l_Lean_MessageLog_add(v___x_412_, v_messages_421_);
if (v_isShared_426_ == 0)
{
lean_ctor_set(v___x_425_, 7, v___x_427_);
v___x_429_ = v___x_425_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_env_414_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_nextMacroScope_415_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v_ngen_416_);
lean_ctor_set(v_reuseFailAlloc_431_, 3, v_auxDeclNGen_417_);
lean_ctor_set(v_reuseFailAlloc_431_, 4, v_traceState_418_);
lean_ctor_set(v_reuseFailAlloc_431_, 5, v_cache_419_);
lean_ctor_set(v_reuseFailAlloc_431_, 6, v_recordedDeps_420_);
lean_ctor_set(v_reuseFailAlloc_431_, 7, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_431_, 8, v_infoState_422_);
lean_ctor_set(v_reuseFailAlloc_431_, 9, v_snapshotTasks_423_);
v___x_429_ = v_reuseFailAlloc_431_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_430_; 
v___x_430_ = lean_st_ref_put(v___y_392_, v___x_429_);
v_a_371_ = v___x_388_;
goto v___jp_370_;
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
v___jp_370_:
{
size_t v___x_372_; size_t v___x_373_; 
v___x_372_ = ((size_t)1ULL);
v___x_373_ = lean_usize_add(v_i_365_, v___x_372_);
v_i_365_ = v___x_373_;
v_b_366_ = v_a_371_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___boxed(lean_object* v___x_447_, lean_object* v___x_448_, lean_object* v_as_449_, lean_object* v_sz_450_, lean_object* v_i_451_, lean_object* v_b_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
size_t v_sz_boxed_456_; size_t v_i_boxed_457_; lean_object* v_res_458_; 
v_sz_boxed_456_ = lean_unbox_usize(v_sz_450_);
lean_dec(v_sz_450_);
v_i_boxed_457_ = lean_unbox_usize(v_i_451_);
lean_dec(v_i_451_);
v_res_458_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0(v___x_447_, v___x_448_, v_as_449_, v_sz_boxed_456_, v_i_boxed_457_, v_b_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec_ref(v_as_449_);
lean_dec(v___x_448_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocStringAt(lean_object* v_openPos_459_, lean_object* v_startPos_460_, lean_object* v_endPos_461_, lean_object* v_a_462_, lean_object* v_a_463_){
_start:
{
lean_object* v_toCold_465_; lean_object* v_fileMap_466_; lean_object* v_fileName_467_; lean_object* v_currNamespace_468_; lean_object* v_openDecls_469_; lean_object* v_source_470_; lean_object* v___y_472_; lean_object* v___x_513_; uint8_t v___x_514_; 
v_toCold_465_ = lean_ctor_get(v_a_462_, 0);
v_fileMap_466_ = lean_ctor_get(v_toCold_465_, 1);
v_fileName_467_ = lean_ctor_get(v_toCold_465_, 0);
v_currNamespace_468_ = lean_ctor_get(v_toCold_465_, 4);
v_openDecls_469_ = lean_ctor_get(v_toCold_465_, 5);
v_source_470_ = lean_ctor_get(v_fileMap_466_, 0);
v___x_513_ = lean_string_utf8_byte_size(v_source_470_);
v___x_514_ = lean_nat_dec_le(v_endPos_461_, v___x_513_);
if (v___x_514_ == 0)
{
lean_dec(v_endPos_461_);
v___y_472_ = v___x_513_;
goto v___jp_471_;
}
else
{
v___y_472_ = v_endPos_461_;
goto v___jp_471_;
}
v___jp_471_:
{
lean_object* v___x_473_; lean_object* v_env_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_473_ = lean_st_ref_get(v_a_463_);
v_env_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc_ref_n(v_env_474_, 2);
lean_dec(v___x_473_);
lean_inc(v___y_472_);
lean_inc_ref_n(v_fileMap_466_, 2);
lean_inc_ref(v_fileName_467_);
lean_inc_ref(v_source_470_);
v___x_475_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_475_, 0, v_source_470_);
lean_ctor_set(v___x_475_, 1, v_fileName_467_);
lean_ctor_set(v___x_475_, 2, v_fileMap_466_);
lean_ctor_set(v___x_475_, 3, v___y_472_);
v___x_476_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_462_);
lean_inc(v_openDecls_469_);
lean_inc(v_currNamespace_468_);
v___x_477_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_477_, 0, v_env_474_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
lean_ctor_set(v___x_477_, 2, v_currNamespace_468_);
lean_ctor_set(v___x_477_, 3, v_openDecls_469_);
lean_inc(v_startPos_460_);
v___x_478_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_fileMap_466_, v_openPos_459_, v_startPos_460_, v___y_472_);
v___x_479_ = l_Lean_Parser_mkParserState(v_source_470_);
v___x_480_ = l_Lean_Parser_ParserState_setPos(v___x_479_, v_startPos_460_);
v___x_481_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_documentFn), 3, 1);
lean_closure_set(v___x_481_, 0, v___x_478_);
v___x_482_ = l_Lean_Parser_getTokenTable(v_env_474_);
lean_inc_ref(v___x_475_);
v___x_483_ = l_Lean_Parser_ParserFn_run(v___x_481_, v___x_475_, v___x_477_, v___x_482_, v___x_480_);
lean_inc_ref(v___x_483_);
v___x_484_ = l_Lean_Parser_ParserState_allErrors(v___x_483_);
v___x_485_ = lean_array_get_size(v___x_484_);
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = lean_nat_dec_eq(v___x_485_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; size_t v_sz_489_; size_t v___x_490_; lean_object* v___x_491_; 
lean_dec_ref(v___x_483_);
v___x_488_ = lean_box(0);
v_sz_489_ = lean_array_size(v___x_484_);
v___x_490_ = ((size_t)0ULL);
v___x_491_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0(v___x_475_, v___x_485_, v___x_484_, v_sz_489_, v___x_490_, v___x_488_, v_a_462_, v_a_463_);
lean_dec_ref(v___x_484_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_499_; 
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_499_ == 0)
{
lean_object* v_unused_500_; 
v_unused_500_ = lean_ctor_get(v___x_491_, 0);
lean_dec(v_unused_500_);
v___x_493_ = v___x_491_;
v_isShared_494_ = v_isSharedCheck_499_;
goto v_resetjp_492_;
}
else
{
lean_dec(v___x_491_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_499_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_495_; lean_object* v___x_497_; 
v___x_495_ = lean_box(0);
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v___x_495_);
v___x_497_ = v___x_493_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___x_495_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
v_a_501_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_491_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_491_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
lean_object* v_stxStack_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
lean_dec_ref(v___x_484_);
lean_dec_ref_known(v___x_475_, 4);
v_stxStack_509_ = lean_ctor_get(v___x_483_, 0);
lean_inc_ref(v_stxStack_509_);
lean_dec_ref(v___x_483_);
v___x_510_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_509_);
lean_dec_ref(v_stxStack_509_);
v___x_511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocStringAt___boxed(lean_object* v_openPos_515_, lean_object* v_startPos_516_, lean_object* v_endPos_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_parseVersoDocStringAt(v_openPos_515_, v_startPos_516_, v_endPos_517_, v_a_518_, v_a_519_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_openPos_515_);
return v_res_521_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_522_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0);
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_525_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_526_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1);
v___x_527_ = lean_unsigned_to_nat(0u);
v___x_528_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
lean_ctor_set(v___x_528_, 2, v___x_527_);
lean_ctor_set(v___x_528_, 3, v___x_527_);
lean_ctor_set(v___x_528_, 4, v___x_526_);
lean_ctor_set(v___x_528_, 5, v___x_526_);
lean_ctor_set(v___x_528_, 6, v___x_526_);
lean_ctor_set(v___x_528_, 7, v___x_526_);
lean_ctor_set(v___x_528_, 8, v___x_526_);
lean_ctor_set(v___x_528_, 9, v___x_526_);
lean_ctor_set(v___x_528_, 10, v___x_526_);
lean_ctor_set(v___x_528_, 11, v___x_525_);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_unsigned_to_nat(32u);
v___x_530_ = lean_mk_empty_array_with_capacity(v___x_529_);
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_532_ = ((size_t)5ULL);
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = lean_unsigned_to_nat(32u);
v___x_535_ = lean_mk_empty_array_with_capacity(v___x_534_);
v___x_536_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__3);
v___x_537_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v___x_535_);
lean_ctor_set(v___x_537_, 2, v___x_533_);
lean_ctor_set(v___x_537_, 3, v___x_533_);
lean_ctor_set_usize(v___x_537_, 4, v___x_532_);
return v___x_537_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_538_ = lean_box(1);
v___x_539_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__4);
v___x_540_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__1);
v___x_541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v___x_539_);
lean_ctor_set(v___x_541_, 2, v___x_538_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0(lean_object* v_msgData_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
lean_object* v___x_546_; lean_object* v_toCold_547_; lean_object* v_env_548_; lean_object* v_options_549_; uint8_t v___x_550_; lean_object* v_env_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_546_ = lean_st_ref_get(v___y_544_);
v_toCold_547_ = lean_ctor_get(v___y_543_, 0);
v_env_548_ = lean_ctor_get(v___x_546_, 0);
lean_inc_ref(v_env_548_);
lean_dec(v___x_546_);
v_options_549_ = lean_ctor_get(v_toCold_547_, 2);
v___x_550_ = 0;
v_env_551_ = l_Lean_Environment_setRecordingDeps(v_env_548_, v___x_550_);
v___x_552_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__2);
v___x_553_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_549_);
v___x_554_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_554_, 0, v_env_551_);
lean_ctor_set(v___x_554_, 1, v___x_552_);
lean_ctor_set(v___x_554_, 2, v___x_553_);
lean_ctor_set(v___x_554_, 3, v_options_549_);
v___x_555_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v_msgData_542_);
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___boxed(lean_object* v_msgData_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0(v_msgData_557_, v___y_558_, v___y_559_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(lean_object* v_msg_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_ref_566_; lean_object* v___x_567_; lean_object* v_a_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_576_; 
v_ref_566_ = lean_ctor_get(v___y_563_, 2);
v___x_567_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0(v_msg_562_, v___y_563_, v___y_564_);
v_a_568_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_576_ == 0)
{
v___x_570_ = v___x_567_;
v_isShared_571_ = v_isSharedCheck_576_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_a_568_);
lean_dec(v___x_567_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_576_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_572_; lean_object* v___x_574_; 
lean_inc(v_ref_566_);
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v_ref_566_);
lean_ctor_set(v___x_572_, 1, v_a_568_);
if (v_isShared_571_ == 0)
{
lean_ctor_set_tag(v___x_570_, 1);
lean_ctor_set(v___x_570_, 0, v___x_572_);
v___x_574_ = v___x_570_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg___boxed(lean_object* v_msg_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(v_msg_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object* v_docComment_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v_____x_587_; lean_object* v___y_588_; lean_object* v___y_589_; lean_object* v___x_595_; 
v___x_595_ = l___private_Lean_DocString_Add_0__Lean_docStringRange(v_docComment_582_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_597_; lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_605_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref_known(v___x_595_, 1);
v___x_597_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(v_a_596_, v_a_583_, v_a_584_);
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_605_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_605_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_601_ == 0)
{
v___x_603_ = v___x_600_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_598_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
else
{
lean_object* v_a_606_; 
v_a_606_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_606_);
lean_dec_ref_known(v___x_595_, 1);
v_____x_587_ = v_a_606_;
v___y_588_ = v_a_583_;
v___y_589_ = v_a_584_;
goto v___jp_586_;
}
v___jp_586_:
{
lean_object* v_snd_590_; lean_object* v_fst_591_; lean_object* v_fst_592_; lean_object* v_snd_593_; lean_object* v___x_594_; 
v_snd_590_ = lean_ctor_get(v_____x_587_, 1);
lean_inc(v_snd_590_);
v_fst_591_ = lean_ctor_get(v_____x_587_, 0);
lean_inc(v_fst_591_);
lean_dec_ref(v_____x_587_);
v_fst_592_ = lean_ctor_get(v_snd_590_, 0);
lean_inc(v_fst_592_);
v_snd_593_ = lean_ctor_get(v_snd_590_, 1);
lean_inc(v_snd_593_);
lean_dec(v_snd_590_);
v___x_594_ = l_Lean_parseVersoDocStringAt(v_fst_591_, v_fst_592_, v_snd_593_, v___y_588_, v___y_589_);
lean_dec(v_fst_591_);
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___boxed(lean_object* v_docComment_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lean_parseVersoDocString(v_docComment_607_, v_a_608_, v_a_609_);
lean_dec(v_a_609_);
lean_dec_ref(v_a_608_);
lean_dec(v_docComment_607_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0(lean_object* v_00_u03b1_612_, lean_object* v_msg_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(v_msg_613_, v___y_614_, v___y_615_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___boxed(lean_object* v_00_u03b1_618_, lean_object* v_msg_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0(v_00_u03b1_618_, v_msg_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object* v_view_624_, lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
lean_object* v_____x_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___x_654_; 
v___x_654_ = l___private_Lean_DocString_Add_0__Lean_docCommentRange(v_view_624_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_656_; lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_a_655_);
lean_dec_ref_known(v___x_654_, 1);
v___x_656_ = l_Lean_throwError___at___00Lean_parseVersoDocString_spec__0___redArg(v_a_655_, v_a_625_, v_a_626_);
v_a_657_ = lean_ctor_get(v___x_656_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_656_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_656_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
else
{
lean_object* v_a_665_; 
v_a_665_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_654_, 1);
v_____x_629_ = v_a_665_;
v___y_630_ = v_a_625_;
v___y_631_ = v_a_626_;
goto v___jp_628_;
}
v___jp_628_:
{
lean_object* v_snd_632_; lean_object* v_fst_633_; lean_object* v_fst_634_; lean_object* v_snd_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v_snd_632_ = lean_ctor_get(v_____x_629_, 1);
lean_inc(v_snd_632_);
v_fst_633_ = lean_ctor_get(v_____x_629_, 0);
lean_inc(v_fst_633_);
lean_dec_ref(v_____x_629_);
v_fst_634_ = lean_ctor_get(v_snd_632_, 0);
lean_inc(v_fst_634_);
v_snd_635_ = lean_ctor_get(v_snd_632_, 1);
lean_inc(v_snd_635_);
lean_dec(v_snd_632_);
v___x_636_ = lean_box(0);
v___x_637_ = l_Lean_parseVersoDocStringAt(v_fst_633_, v_fst_634_, v_snd_635_, v___y_630_, v___y_631_);
lean_dec(v_fst_633_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_644_ == 0)
{
lean_object* v_unused_645_; 
v_unused_645_ = lean_ctor_get(v___x_637_, 0);
lean_dec(v_unused_645_);
v___x_639_ = v___x_637_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_dec(v___x_637_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 0, v___x_636_);
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_636_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
v_a_646_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_637_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_637_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object* v_view_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_reportVersoParseFailure(v_view_666_, v_a_667_, v_a_668_);
lean_dec(v_a_668_);
lean_dec_ref(v_a_667_);
lean_dec_ref(v_view_666_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object* v_fileMap_x3f_671_, lean_object* v_declName_672_, lean_object* v_binders_673_, lean_object* v___x_674_, uint8_t v___x_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
if (lean_obj_tag(v_fileMap_x3f_671_) == 0)
{
lean_object* v___x_683_; 
v___x_683_ = l_Lean_Doc_DocM_exec___redArg(v_declName_672_, v_binders_673_, v___x_674_, v___x_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
return v___x_683_;
}
else
{
lean_object* v_toCold_684_; lean_object* v_val_685_; lean_object* v_currRecDepth_686_; lean_object* v_ref_687_; uint16_t v_optionFlags_688_; uint8_t v_suppressElabErrors_689_; uint8_t v_isRecordingDeps_690_; lean_object* v_fileName_691_; lean_object* v_options_692_; lean_object* v_maxRecDepth_693_; lean_object* v_currNamespace_694_; lean_object* v_openDecls_695_; lean_object* v_initHeartbeats_696_; lean_object* v_maxHeartbeats_697_; lean_object* v_quotContext_698_; lean_object* v_currMacroScope_699_; lean_object* v_cancelTk_x3f_700_; lean_object* v_inheritedTraceOptions_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v_toCold_684_ = lean_ctor_get(v___y_680_, 0);
v_val_685_ = lean_ctor_get(v_fileMap_x3f_671_, 0);
v_currRecDepth_686_ = lean_ctor_get(v___y_680_, 1);
v_ref_687_ = lean_ctor_get(v___y_680_, 2);
v_optionFlags_688_ = lean_ctor_get_uint16(v___y_680_, sizeof(void*)*3);
v_suppressElabErrors_689_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*3 + 2);
v_isRecordingDeps_690_ = lean_ctor_get_uint8(v___y_680_, sizeof(void*)*3 + 3);
v_fileName_691_ = lean_ctor_get(v_toCold_684_, 0);
v_options_692_ = lean_ctor_get(v_toCold_684_, 2);
v_maxRecDepth_693_ = lean_ctor_get(v_toCold_684_, 3);
v_currNamespace_694_ = lean_ctor_get(v_toCold_684_, 4);
v_openDecls_695_ = lean_ctor_get(v_toCold_684_, 5);
v_initHeartbeats_696_ = lean_ctor_get(v_toCold_684_, 6);
v_maxHeartbeats_697_ = lean_ctor_get(v_toCold_684_, 7);
v_quotContext_698_ = lean_ctor_get(v_toCold_684_, 8);
v_currMacroScope_699_ = lean_ctor_get(v_toCold_684_, 9);
v_cancelTk_x3f_700_ = lean_ctor_get(v_toCold_684_, 10);
v_inheritedTraceOptions_701_ = lean_ctor_get(v_toCold_684_, 11);
lean_inc_ref(v_inheritedTraceOptions_701_);
lean_inc(v_cancelTk_x3f_700_);
lean_inc(v_currMacroScope_699_);
lean_inc(v_quotContext_698_);
lean_inc(v_maxHeartbeats_697_);
lean_inc(v_initHeartbeats_696_);
lean_inc(v_openDecls_695_);
lean_inc(v_currNamespace_694_);
lean_inc(v_maxRecDepth_693_);
lean_inc_ref(v_options_692_);
lean_inc(v_val_685_);
lean_inc_ref(v_fileName_691_);
v___x_702_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_702_, 0, v_fileName_691_);
lean_ctor_set(v___x_702_, 1, v_val_685_);
lean_ctor_set(v___x_702_, 2, v_options_692_);
lean_ctor_set(v___x_702_, 3, v_maxRecDepth_693_);
lean_ctor_set(v___x_702_, 4, v_currNamespace_694_);
lean_ctor_set(v___x_702_, 5, v_openDecls_695_);
lean_ctor_set(v___x_702_, 6, v_initHeartbeats_696_);
lean_ctor_set(v___x_702_, 7, v_maxHeartbeats_697_);
lean_ctor_set(v___x_702_, 8, v_quotContext_698_);
lean_ctor_set(v___x_702_, 9, v_currMacroScope_699_);
lean_ctor_set(v___x_702_, 10, v_cancelTk_x3f_700_);
lean_ctor_set(v___x_702_, 11, v_inheritedTraceOptions_701_);
lean_inc(v_ref_687_);
lean_inc(v_currRecDepth_686_);
v___x_703_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_703_, 0, v___x_702_);
lean_ctor_set(v___x_703_, 1, v_currRecDepth_686_);
lean_ctor_set(v___x_703_, 2, v_ref_687_);
lean_ctor_set_uint16(v___x_703_, sizeof(void*)*3, v_optionFlags_688_);
lean_ctor_set_uint8(v___x_703_, sizeof(void*)*3 + 2, v_suppressElabErrors_689_);
lean_ctor_set_uint8(v___x_703_, sizeof(void*)*3 + 3, v_isRecordingDeps_690_);
v___x_704_ = l_Lean_Doc_DocM_exec___redArg(v_declName_672_, v_binders_673_, v___x_674_, v___x_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___x_703_, v___y_681_);
lean_dec_ref_known(v___x_703_, 3);
return v___x_704_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object* v_fileMap_x3f_705_, lean_object* v_declName_706_, lean_object* v_binders_707_, lean_object* v___x_708_, lean_object* v___x_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
uint8_t v___x_9892__boxed_717_; lean_object* v_res_718_; 
v___x_9892__boxed_717_ = lean_unbox(v___x_709_);
v_res_718_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(v_fileMap_x3f_705_, v_declName_706_, v_binders_707_, v___x_708_, v___x_9892__boxed_717_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v_fileMap_x3f_705_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t v_sz_719_, size_t v_i_720_, lean_object* v_bs_721_){
_start:
{
uint8_t v___x_722_; 
v___x_722_ = lean_usize_dec_lt(v_i_720_, v_sz_719_);
if (v___x_722_ == 0)
{
return v_bs_721_;
}
else
{
lean_object* v_v_723_; lean_object* v___x_724_; lean_object* v_bs_x27_725_; size_t v___x_726_; size_t v___x_727_; lean_object* v___x_728_; 
v_v_723_ = lean_array_uget(v_bs_721_, v_i_720_);
v___x_724_ = lean_unsigned_to_nat(0u);
v_bs_x27_725_ = lean_array_uset(v_bs_721_, v_i_720_, v___x_724_);
v___x_726_ = ((size_t)1ULL);
v___x_727_ = lean_usize_add(v_i_720_, v___x_726_);
v___x_728_ = lean_array_uset(v_bs_x27_725_, v_i_720_, v_v_723_);
v_i_720_ = v___x_727_;
v_bs_721_ = v___x_728_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object* v_sz_730_, lean_object* v_i_731_, lean_object* v_bs_732_){
_start:
{
size_t v_sz_boxed_733_; size_t v_i_boxed_734_; lean_object* v_res_735_; 
v_sz_boxed_733_ = lean_unbox_usize(v_sz_730_);
lean_dec(v_sz_730_);
v_i_boxed_734_ = lean_unbox_usize(v_i_731_);
lean_dec(v_i_731_);
v_res_735_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_boxed_733_, v_i_boxed_734_, v_bs_732_);
return v_res_735_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object* v_opts_736_, lean_object* v_opt_737_){
_start:
{
lean_object* v_name_738_; lean_object* v_defValue_739_; lean_object* v_map_740_; lean_object* v___x_741_; 
v_name_738_ = lean_ctor_get(v_opt_737_, 0);
v_defValue_739_ = lean_ctor_get(v_opt_737_, 1);
v_map_740_ = lean_ctor_get(v_opts_736_, 0);
v___x_741_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_740_, v_name_738_);
if (lean_obj_tag(v___x_741_) == 0)
{
uint8_t v___x_742_; 
v___x_742_ = lean_unbox(v_defValue_739_);
return v___x_742_;
}
else
{
lean_object* v_val_743_; 
v_val_743_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_val_743_);
lean_dec_ref_known(v___x_741_, 1);
if (lean_obj_tag(v_val_743_) == 1)
{
uint8_t v_v_744_; 
v_v_744_ = lean_ctor_get_uint8(v_val_743_, 0);
lean_dec_ref_known(v_val_743_, 0);
return v_v_744_;
}
else
{
uint8_t v___x_745_; 
lean_dec(v_val_743_);
v___x_745_ = lean_unbox(v_defValue_739_);
return v___x_745_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object* v_opts_746_, lean_object* v_opt_747_){
_start:
{
uint8_t v_res_748_; lean_object* v_r_749_; 
v_res_748_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_opts_746_, v_opt_747_);
lean_dec_ref(v_opt_747_);
lean_dec_ref(v_opts_746_);
v_r_749_ = lean_box(v_res_748_);
return v_r_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object* v_msgData_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___x_756_; lean_object* v_env_757_; uint8_t v___x_758_; lean_object* v_env_759_; lean_object* v___x_760_; lean_object* v_toCold_761_; lean_object* v_mctx_762_; lean_object* v_lctx_763_; lean_object* v_options_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_756_ = lean_st_ref_get(v___y_754_);
v_env_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc_ref(v_env_757_);
lean_dec(v___x_756_);
v___x_758_ = 0;
v_env_759_ = l_Lean_Environment_setRecordingDeps(v_env_757_, v___x_758_);
v___x_760_ = lean_st_ref_get(v___y_752_);
v_toCold_761_ = lean_ctor_get(v___y_753_, 0);
v_mctx_762_ = lean_ctor_get(v___x_760_, 0);
lean_inc_ref(v_mctx_762_);
lean_dec(v___x_760_);
v_lctx_763_ = lean_ctor_get(v___y_751_, 2);
v_options_764_ = lean_ctor_get(v_toCold_761_, 2);
lean_inc_ref(v_options_764_);
lean_inc_ref(v_lctx_763_);
v___x_765_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_765_, 0, v_env_759_);
lean_ctor_set(v___x_765_, 1, v_mctx_762_);
lean_ctor_set(v___x_765_, 2, v_lctx_763_);
lean_ctor_set(v___x_765_, 3, v_options_764_);
v___x_766_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
lean_ctor_set(v___x_766_, 1, v_msgData_750_);
v___x_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object* v_msgData_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msgData_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
return v_res_774_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t v_suppressElabErrors_775_, lean_object* v_x_776_){
_start:
{
if (lean_obj_tag(v_x_776_) == 1)
{
lean_object* v_pre_777_; 
v_pre_777_ = lean_ctor_get(v_x_776_, 0);
switch(lean_obj_tag(v_pre_777_))
{
case 1:
{
lean_object* v_pre_778_; 
v_pre_778_ = lean_ctor_get(v_pre_777_, 0);
switch(lean_obj_tag(v_pre_778_))
{
case 0:
{
lean_object* v_str_779_; lean_object* v_str_780_; lean_object* v___x_781_; uint8_t v___x_782_; 
v_str_779_ = lean_ctor_get(v_x_776_, 1);
v_str_780_ = lean_ctor_get(v_pre_777_, 1);
v___x_781_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__0));
v___x_782_ = lean_string_dec_eq(v_str_780_, v___x_781_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_783_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__1));
v___x_784_ = lean_string_dec_eq(v_str_780_, v___x_783_);
if (v___x_784_ == 0)
{
return v___x_784_;
}
else
{
lean_object* v___x_785_; uint8_t v___x_786_; 
v___x_785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__2));
v___x_786_ = lean_string_dec_eq(v_str_779_, v___x_785_);
if (v___x_786_ == 0)
{
return v___x_786_;
}
else
{
return v_suppressElabErrors_775_;
}
}
}
else
{
lean_object* v___x_787_; uint8_t v___x_788_; 
v___x_787_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__3));
v___x_788_ = lean_string_dec_eq(v_str_779_, v___x_787_);
if (v___x_788_ == 0)
{
return v___x_788_;
}
else
{
return v_suppressElabErrors_775_;
}
}
}
case 1:
{
lean_object* v_pre_789_; 
v_pre_789_ = lean_ctor_get(v_pre_778_, 0);
if (lean_obj_tag(v_pre_789_) == 0)
{
lean_object* v_str_790_; lean_object* v_str_791_; lean_object* v_str_792_; lean_object* v___x_793_; uint8_t v___x_794_; 
v_str_790_ = lean_ctor_get(v_x_776_, 1);
v_str_791_ = lean_ctor_get(v_pre_777_, 1);
v_str_792_ = lean_ctor_get(v_pre_778_, 1);
v___x_793_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__4));
v___x_794_ = lean_string_dec_eq(v_str_792_, v___x_793_);
if (v___x_794_ == 0)
{
return v___x_794_;
}
else
{
lean_object* v___x_795_; uint8_t v___x_796_; 
v___x_795_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__5));
v___x_796_ = lean_string_dec_eq(v_str_791_, v___x_795_);
if (v___x_796_ == 0)
{
return v___x_796_;
}
else
{
lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_797_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__6));
v___x_798_ = lean_string_dec_eq(v_str_790_, v___x_797_);
if (v___x_798_ == 0)
{
return v___x_798_;
}
else
{
return v_suppressElabErrors_775_;
}
}
}
}
else
{
uint8_t v___x_799_; 
v___x_799_ = 0;
return v___x_799_;
}
}
default: 
{
uint8_t v___x_800_; 
v___x_800_ = 0;
return v___x_800_;
}
}
}
case 0:
{
lean_object* v_str_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v_str_801_ = lean_ctor_get(v_x_776_, 1);
v___x_802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocStringAt_spec__0___lam__0___closed__7));
v___x_803_ = lean_string_dec_eq(v_str_801_, v___x_802_);
if (v___x_803_ == 0)
{
return v___x_803_;
}
else
{
return v_suppressElabErrors_775_;
}
}
default: 
{
uint8_t v___x_804_; 
v___x_804_ = 0;
return v___x_804_;
}
}
}
else
{
uint8_t v___x_805_; 
v___x_805_ = 0;
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_806_, lean_object* v_x_807_){
_start:
{
uint8_t v_suppressElabErrors_boxed_808_; uint8_t v_res_809_; lean_object* v_r_810_; 
v_suppressElabErrors_boxed_808_ = lean_unbox(v_suppressElabErrors_806_);
v_res_809_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(v_suppressElabErrors_boxed_808_, v_x_807_);
lean_dec(v_x_807_);
v_r_810_ = lean_box(v_res_809_);
return v_r_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object* v_ref_811_, lean_object* v_msgData_812_, uint8_t v_severity_813_, uint8_t v_isSilent_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v___y_821_; uint8_t v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; uint8_t v___y_827_; lean_object* v_toCold_828_; lean_object* v___y_829_; lean_object* v___y_858_; lean_object* v___y_859_; uint8_t v___y_860_; lean_object* v___y_861_; uint8_t v___y_862_; lean_object* v___y_863_; uint8_t v___y_864_; lean_object* v___y_865_; uint8_t v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___y_888_; uint8_t v___y_889_; uint8_t v___y_890_; lean_object* v___y_891_; uint8_t v___y_895_; uint8_t v___y_896_; uint8_t v___x_906_; uint8_t v___y_908_; uint8_t v___x_914_; 
v___x_906_ = 2;
v___x_914_ = l_Lean_instBEqMessageSeverity_beq(v_severity_813_, v___x_906_);
if (v___x_914_ == 0)
{
v___y_908_ = v___x_914_;
goto v___jp_907_;
}
else
{
uint8_t v___x_915_; 
lean_inc_ref(v_msgData_812_);
v___x_915_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_812_);
if (v___x_915_ == 0)
{
v___y_908_ = v___x_915_;
goto v___jp_907_;
}
else
{
lean_object* v___x_916_; lean_object* v___x_917_; 
lean_dec_ref(v_msgData_812_);
v___x_916_ = lean_box(0);
v___x_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
return v___x_917_;
}
}
v___jp_820_:
{
lean_object* v_currNamespace_830_; lean_object* v_openDecls_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v_env_836_; lean_object* v_nextMacroScope_837_; lean_object* v_ngen_838_; lean_object* v_auxDeclNGen_839_; lean_object* v_traceState_840_; lean_object* v_cache_841_; lean_object* v_recordedDeps_842_; lean_object* v_messages_843_; lean_object* v_infoState_844_; lean_object* v_snapshotTasks_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_856_; 
v_currNamespace_830_ = lean_ctor_get(v_toCold_828_, 4);
v_openDecls_831_ = lean_ctor_get(v_toCold_828_, 5);
lean_inc(v_openDecls_831_);
lean_inc(v_currNamespace_830_);
v___x_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_832_, 0, v_currNamespace_830_);
lean_ctor_set(v___x_832_, 1, v_openDecls_831_);
v___x_833_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
lean_ctor_set(v___x_833_, 1, v___y_823_);
lean_inc_ref(v___y_826_);
lean_inc_ref(v___y_821_);
v___x_834_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_834_, 0, v___y_821_);
lean_ctor_set(v___x_834_, 1, v___y_825_);
lean_ctor_set(v___x_834_, 2, v___y_824_);
lean_ctor_set(v___x_834_, 3, v___y_826_);
lean_ctor_set(v___x_834_, 4, v___x_833_);
lean_ctor_set_uint8(v___x_834_, sizeof(void*)*5, v___y_822_);
lean_ctor_set_uint8(v___x_834_, sizeof(void*)*5 + 1, v___y_827_);
lean_ctor_set_uint8(v___x_834_, sizeof(void*)*5 + 2, v_isSilent_814_);
v___x_835_ = lean_st_ref_take(v___y_829_);
v_env_836_ = lean_ctor_get(v___x_835_, 0);
v_nextMacroScope_837_ = lean_ctor_get(v___x_835_, 1);
v_ngen_838_ = lean_ctor_get(v___x_835_, 2);
v_auxDeclNGen_839_ = lean_ctor_get(v___x_835_, 3);
v_traceState_840_ = lean_ctor_get(v___x_835_, 4);
v_cache_841_ = lean_ctor_get(v___x_835_, 5);
v_recordedDeps_842_ = lean_ctor_get(v___x_835_, 6);
v_messages_843_ = lean_ctor_get(v___x_835_, 7);
v_infoState_844_ = lean_ctor_get(v___x_835_, 8);
v_snapshotTasks_845_ = lean_ctor_get(v___x_835_, 9);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_856_ == 0)
{
v___x_847_ = v___x_835_;
v_isShared_848_ = v_isSharedCheck_856_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_snapshotTasks_845_);
lean_inc(v_infoState_844_);
lean_inc(v_messages_843_);
lean_inc(v_recordedDeps_842_);
lean_inc(v_cache_841_);
lean_inc(v_traceState_840_);
lean_inc(v_auxDeclNGen_839_);
lean_inc(v_ngen_838_);
lean_inc(v_nextMacroScope_837_);
lean_inc(v_env_836_);
lean_dec(v___x_835_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_856_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_849_ = lean_box(0);
v___x_850_ = l_Lean_MessageLog_add(v___x_834_, v_messages_843_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 7, v___x_850_);
v___x_852_ = v___x_847_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_env_836_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v_nextMacroScope_837_);
lean_ctor_set(v_reuseFailAlloc_855_, 2, v_ngen_838_);
lean_ctor_set(v_reuseFailAlloc_855_, 3, v_auxDeclNGen_839_);
lean_ctor_set(v_reuseFailAlloc_855_, 4, v_traceState_840_);
lean_ctor_set(v_reuseFailAlloc_855_, 5, v_cache_841_);
lean_ctor_set(v_reuseFailAlloc_855_, 6, v_recordedDeps_842_);
lean_ctor_set(v_reuseFailAlloc_855_, 7, v___x_850_);
lean_ctor_set(v_reuseFailAlloc_855_, 8, v_infoState_844_);
lean_ctor_set(v_reuseFailAlloc_855_, 9, v_snapshotTasks_845_);
v___x_852_ = v_reuseFailAlloc_855_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_st_ref_put(v___y_829_, v___x_852_);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_849_);
return v___x_854_;
}
}
}
v___jp_857_:
{
lean_object* v_fileName_866_; lean_object* v_fileMap_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_883_; 
v_fileName_866_ = lean_ctor_get(v___y_861_, 0);
v_fileMap_867_ = lean_ctor_get(v___y_861_, 1);
v___x_868_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_812_);
v___x_869_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v___x_868_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
v_a_870_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_883_ == 0)
{
v___x_872_ = v___x_869_;
v_isShared_873_ = v_isSharedCheck_883_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_869_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_883_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
lean_inc_ref_n(v_fileMap_867_, 2);
v___x_874_ = l_Lean_FileMap_toPosition(v_fileMap_867_, v___y_863_);
lean_dec(v___y_863_);
v___x_875_ = l_Lean_FileMap_toPosition(v_fileMap_867_, v___y_865_);
lean_dec(v___y_865_);
v___x_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
v___x_877_ = ((lean_object*)(l___private_Lean_DocString_Add_0__Lean_mkVersoParseMessage___closed__0));
if (v___y_860_ == 0)
{
lean_del_object(v___x_872_);
lean_dec_ref(v___y_859_);
v___y_821_ = v_fileName_866_;
v___y_822_ = v___y_862_;
v___y_823_ = v_a_870_;
v___y_824_ = v___x_876_;
v___y_825_ = v___x_874_;
v___y_826_ = v___x_877_;
v___y_827_ = v___y_864_;
v_toCold_828_ = v___y_858_;
v___y_829_ = v___y_818_;
goto v___jp_820_;
}
else
{
uint8_t v___x_878_; 
lean_inc(v_a_870_);
v___x_878_ = l_Lean_MessageData_hasTag(v___y_859_, v_a_870_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; lean_object* v___x_881_; 
lean_dec_ref_known(v___x_876_, 1);
lean_dec_ref(v___x_874_);
lean_dec(v_a_870_);
v___x_879_ = lean_box(0);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 0, v___x_879_);
v___x_881_ = v___x_872_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
else
{
lean_del_object(v___x_872_);
v___y_821_ = v_fileName_866_;
v___y_822_ = v___y_862_;
v___y_823_ = v_a_870_;
v___y_824_ = v___x_876_;
v___y_825_ = v___x_874_;
v___y_826_ = v___x_877_;
v___y_827_ = v___y_864_;
v_toCold_828_ = v___y_858_;
v___y_829_ = v___y_818_;
goto v___jp_820_;
}
}
}
}
v___jp_884_:
{
lean_object* v___x_892_; 
v___x_892_ = l_Lean_Syntax_getTailPos_x3f(v___y_888_, v___y_889_);
lean_dec(v___y_888_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_inc(v___y_891_);
v___y_858_ = v___y_886_;
v___y_859_ = v___y_887_;
v___y_860_ = v___y_885_;
v___y_861_ = v___y_886_;
v___y_862_ = v___y_889_;
v___y_863_ = v___y_891_;
v___y_864_ = v___y_890_;
v___y_865_ = v___y_891_;
goto v___jp_857_;
}
else
{
lean_object* v_val_893_; 
v_val_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_val_893_);
lean_dec_ref_known(v___x_892_, 1);
v___y_858_ = v___y_886_;
v___y_859_ = v___y_887_;
v___y_860_ = v___y_885_;
v___y_861_ = v___y_886_;
v___y_862_ = v___y_889_;
v___y_863_ = v___y_891_;
v___y_864_ = v___y_890_;
v___y_865_ = v_val_893_;
goto v___jp_857_;
}
}
v___jp_894_:
{
lean_object* v_toCold_897_; lean_object* v_ref_898_; uint8_t v_suppressElabErrors_899_; lean_object* v___x_900_; lean_object* v___f_901_; lean_object* v_ref_902_; lean_object* v___x_903_; 
v_toCold_897_ = lean_ctor_get(v___y_817_, 0);
v_ref_898_ = lean_ctor_get(v___y_817_, 2);
v_suppressElabErrors_899_ = lean_ctor_get_uint8(v___y_817_, sizeof(void*)*3 + 2);
v___x_900_ = lean_box(v_suppressElabErrors_899_);
v___f_901_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_901_, 0, v___x_900_);
v_ref_902_ = l_Lean_replaceRef(v_ref_811_, v_ref_898_);
v___x_903_ = l_Lean_Syntax_getPos_x3f(v_ref_902_, v___y_895_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v___x_904_; 
v___x_904_ = lean_unsigned_to_nat(0u);
v___y_885_ = v_suppressElabErrors_899_;
v___y_886_ = v_toCold_897_;
v___y_887_ = v___f_901_;
v___y_888_ = v_ref_902_;
v___y_889_ = v___y_895_;
v___y_890_ = v___y_896_;
v___y_891_ = v___x_904_;
goto v___jp_884_;
}
else
{
lean_object* v_val_905_; 
v_val_905_ = lean_ctor_get(v___x_903_, 0);
lean_inc(v_val_905_);
lean_dec_ref_known(v___x_903_, 1);
v___y_885_ = v_suppressElabErrors_899_;
v___y_886_ = v_toCold_897_;
v___y_887_ = v___f_901_;
v___y_888_ = v_ref_902_;
v___y_889_ = v___y_895_;
v___y_890_ = v___y_896_;
v___y_891_ = v_val_905_;
goto v___jp_884_;
}
}
v___jp_907_:
{
uint8_t v___x_909_; uint8_t v___x_910_; 
v___x_909_ = 1;
v___x_910_ = l_Lean_instBEqMessageSeverity_beq(v_severity_813_, v___x_909_);
if (v___x_910_ == 0)
{
v___y_895_ = v___y_908_;
v___y_896_ = v_severity_813_;
goto v___jp_894_;
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_911_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_817_);
v___x_912_ = l_Lean_warningAsError;
v___x_913_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v___x_911_, v___x_912_);
lean_dec_ref(v___x_911_);
if (v___x_913_ == 0)
{
v___y_895_ = v___y_908_;
v___y_896_ = v_severity_813_;
goto v___jp_894_;
}
else
{
v___y_895_ = v___y_908_;
v___y_896_ = v___x_906_;
goto v___jp_894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object* v_ref_918_, lean_object* v_msgData_919_, lean_object* v_severity_920_, lean_object* v_isSilent_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
uint8_t v_severity_boxed_927_; uint8_t v_isSilent_boxed_928_; lean_object* v_res_929_; 
v_severity_boxed_927_ = lean_unbox(v_severity_920_);
v_isSilent_boxed_928_ = lean_unbox(v_isSilent_921_);
v_res_929_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_918_, v_msgData_919_, v_severity_boxed_927_, v_isSilent_boxed_928_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v_ref_918_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object* v_as_930_, size_t v_sz_931_, size_t v_i_932_, lean_object* v_b_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
uint8_t v___x_941_; 
v___x_941_ = lean_usize_dec_lt(v_i_932_, v_sz_931_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; 
v___x_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_942_, 0, v_b_933_);
return v___x_942_;
}
else
{
lean_object* v_ref_943_; lean_object* v_a_944_; uint8_t v_severity_945_; uint8_t v_isSilent_946_; lean_object* v_data_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v_ref_943_ = lean_ctor_get(v___y_938_, 2);
v_a_944_ = lean_array_uget_borrowed(v_as_930_, v_i_932_);
v_severity_945_ = lean_ctor_get_uint8(v_a_944_, sizeof(void*)*5 + 1);
v_isSilent_946_ = lean_ctor_get_uint8(v_a_944_, sizeof(void*)*5 + 2);
v_data_947_ = lean_ctor_get(v_a_944_, 4);
v___x_948_ = lean_box(0);
lean_inc(v_data_947_);
v___x_949_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_943_, v_data_947_, v_severity_945_, v_isSilent_946_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_949_) == 0)
{
size_t v___x_950_; size_t v___x_951_; 
lean_dec_ref_known(v___x_949_, 1);
v___x_950_ = ((size_t)1ULL);
v___x_951_ = lean_usize_add(v_i_932_, v___x_950_);
v_i_932_ = v___x_951_;
v_b_933_ = v___x_948_;
goto _start;
}
else
{
return v___x_949_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object* v_as_953_, lean_object* v_sz_954_, lean_object* v_i_955_, lean_object* v_b_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
size_t v_sz_boxed_964_; size_t v_i_boxed_965_; lean_object* v_res_966_; 
v_sz_boxed_964_ = lean_unbox_usize(v_sz_954_);
lean_dec(v_sz_954_);
v_i_boxed_965_ = lean_unbox_usize(v_i_955_);
lean_dec(v_i_955_);
v_res_966_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v_as_953_, v_sz_boxed_964_, v_i_boxed_965_, v_b_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec_ref(v_as_953_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t v_flag_967_, lean_object* v___y_968_){
_start:
{
lean_object* v___x_970_; lean_object* v_infoState_971_; lean_object* v_env_972_; lean_object* v_nextMacroScope_973_; lean_object* v_ngen_974_; lean_object* v_auxDeclNGen_975_; lean_object* v_traceState_976_; lean_object* v_cache_977_; lean_object* v_recordedDeps_978_; lean_object* v_messages_979_; lean_object* v_snapshotTasks_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_1000_; 
v___x_970_ = lean_st_ref_take(v___y_968_);
v_infoState_971_ = lean_ctor_get(v___x_970_, 8);
v_env_972_ = lean_ctor_get(v___x_970_, 0);
v_nextMacroScope_973_ = lean_ctor_get(v___x_970_, 1);
v_ngen_974_ = lean_ctor_get(v___x_970_, 2);
v_auxDeclNGen_975_ = lean_ctor_get(v___x_970_, 3);
v_traceState_976_ = lean_ctor_get(v___x_970_, 4);
v_cache_977_ = lean_ctor_get(v___x_970_, 5);
v_recordedDeps_978_ = lean_ctor_get(v___x_970_, 6);
v_messages_979_ = lean_ctor_get(v___x_970_, 7);
v_snapshotTasks_980_ = lean_ctor_get(v___x_970_, 9);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_982_ = v___x_970_;
v_isShared_983_ = v_isSharedCheck_1000_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_snapshotTasks_980_);
lean_inc(v_infoState_971_);
lean_inc(v_messages_979_);
lean_inc(v_recordedDeps_978_);
lean_inc(v_cache_977_);
lean_inc(v_traceState_976_);
lean_inc(v_auxDeclNGen_975_);
lean_inc(v_ngen_974_);
lean_inc(v_nextMacroScope_973_);
lean_inc(v_env_972_);
lean_dec(v___x_970_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_1000_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_assignment_984_; lean_object* v_lazyAssignment_985_; lean_object* v_trees_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_999_; 
v_assignment_984_ = lean_ctor_get(v_infoState_971_, 0);
v_lazyAssignment_985_ = lean_ctor_get(v_infoState_971_, 1);
v_trees_986_ = lean_ctor_get(v_infoState_971_, 2);
v_isSharedCheck_999_ = !lean_is_exclusive(v_infoState_971_);
if (v_isSharedCheck_999_ == 0)
{
v___x_988_ = v_infoState_971_;
v_isShared_989_ = v_isSharedCheck_999_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_trees_986_);
lean_inc(v_lazyAssignment_985_);
lean_inc(v_assignment_984_);
lean_dec(v_infoState_971_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_999_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; lean_object* v___x_992_; 
v___x_990_ = lean_box(0);
if (v_isShared_989_ == 0)
{
v___x_992_ = v___x_988_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_assignment_984_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v_lazyAssignment_985_);
lean_ctor_set(v_reuseFailAlloc_998_, 2, v_trees_986_);
v___x_992_ = v_reuseFailAlloc_998_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
lean_object* v___x_994_; 
lean_ctor_set_uint8(v___x_992_, sizeof(void*)*3, v_flag_967_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 8, v___x_992_);
v___x_994_ = v___x_982_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_env_972_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_nextMacroScope_973_);
lean_ctor_set(v_reuseFailAlloc_997_, 2, v_ngen_974_);
lean_ctor_set(v_reuseFailAlloc_997_, 3, v_auxDeclNGen_975_);
lean_ctor_set(v_reuseFailAlloc_997_, 4, v_traceState_976_);
lean_ctor_set(v_reuseFailAlloc_997_, 5, v_cache_977_);
lean_ctor_set(v_reuseFailAlloc_997_, 6, v_recordedDeps_978_);
lean_ctor_set(v_reuseFailAlloc_997_, 7, v_messages_979_);
lean_ctor_set(v_reuseFailAlloc_997_, 8, v___x_992_);
lean_ctor_set(v_reuseFailAlloc_997_, 9, v_snapshotTasks_980_);
v___x_994_ = v_reuseFailAlloc_997_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_st_ref_put(v___y_968_, v___x_994_);
v___x_996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_996_, 0, v___x_990_);
return v___x_996_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object* v_flag_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v_flag_boxed_1004_; lean_object* v_res_1005_; 
v_flag_boxed_1004_ = lean_unbox(v_flag_1001_);
v_res_1005_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_boxed_1004_, v___y_1002_);
lean_dec(v___y_1002_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t v_flag_1006_, lean_object* v_x_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v_infoState_1016_; uint8_t v_enabled_1017_; lean_object* v_a_1019_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1015_ = lean_st_ref_get(v___y_1013_);
v_infoState_1016_ = lean_ctor_get(v___x_1015_, 8);
lean_inc_ref(v_infoState_1016_);
lean_dec(v___x_1015_);
v_enabled_1017_ = lean_ctor_get_uint8(v_infoState_1016_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1016_);
v___x_1029_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1006_, v___y_1013_);
lean_dec_ref(v___x_1029_);
lean_inc(v___y_1013_);
lean_inc_ref(v___y_1012_);
lean_inc(v___y_1011_);
lean_inc_ref(v___y_1010_);
lean_inc(v___y_1009_);
lean_inc_ref(v___y_1008_);
v___x_1030_ = lean_apply_7(v_x_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, lean_box(0));
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v___x_1030_, 1);
v___x_1032_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1017_, v___y_1013_);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v___x_1032_, 0);
lean_dec(v_unused_1040_);
v___x_1034_ = v___x_1032_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_dec(v___x_1032_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v_a_1031_);
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1031_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
else
{
lean_object* v_a_1041_; 
v_a_1041_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1030_, 1);
v_a_1019_ = v_a_1041_;
goto v___jp_1018_;
}
v___jp_1018_:
{
lean_object* v___x_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
v___x_1020_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1017_, v___y_1013_);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1027_ == 0)
{
lean_object* v_unused_1028_; 
v_unused_1028_ = lean_ctor_get(v___x_1020_, 0);
lean_dec(v_unused_1028_);
v___x_1022_ = v___x_1020_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_dec(v___x_1020_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
lean_ctor_set_tag(v___x_1022_, 1);
lean_ctor_set(v___x_1022_, 0, v_a_1019_);
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1019_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object* v_flag_1042_, lean_object* v_x_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
uint8_t v_flag_boxed_1051_; lean_object* v_res_1052_; 
v_flag_boxed_1051_ = lean_unbox(v_flag_1042_);
v_res_1052_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_boxed_1051_, v_x_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object* v_declName_1053_, lean_object* v_binders_1054_, lean_object* v_blocks_1055_, lean_object* v_fileMap_x3f_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_1062_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; lean_object* v_a_1067_; size_t v_sz_1085_; size_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___y_1091_; uint8_t v___x_1092_; lean_object* v___x_1093_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
lean_inc(v_a_1065_);
lean_dec_ref_known(v___x_1064_, 1);
v_sz_1085_ = lean_array_size(v_blocks_1055_);
v___x_1086_ = ((size_t)0ULL);
v___x_1087_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_1085_, v___x_1086_, v_blocks_1055_);
v___x_1088_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1088_, 0, v___x_1087_);
v___x_1089_ = 1;
v___x_1090_ = lean_box(v___x_1089_);
v___y_1091_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed), 12, 5);
lean_closure_set(v___y_1091_, 0, v_fileMap_x3f_1056_);
lean_closure_set(v___y_1091_, 1, v_declName_1053_);
lean_closure_set(v___y_1091_, 2, v_binders_1054_);
lean_closure_set(v___y_1091_, 3, v___x_1088_);
lean_closure_set(v___y_1091_, 4, v___x_1090_);
v___x_1092_ = 0;
v___x_1093_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v___x_1092_, v___y_1091_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1095_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1094_);
lean_dec_ref_known(v___x_1093_, 1);
v___x_1095_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_1062_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1097_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1097_ = l_Lean_Core_setMessageLog___redArg(v_a_1065_, v_a_1062_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v___x_1098_; lean_object* v___x_1099_; size_t v_sz_1100_; lean_object* v___x_1101_; 
lean_dec_ref_known(v___x_1097_, 1);
v___x_1098_ = l_Lean_MessageLog_toArray(v_a_1096_);
lean_dec(v_a_1096_);
v___x_1099_ = lean_box(0);
v_sz_1100_ = lean_array_size(v___x_1098_);
v___x_1101_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v___x_1098_, v_sz_1100_, v___x_1086_, v___x_1099_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_);
lean_dec_ref(v___x_1098_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1126_; 
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1126_ == 0)
{
lean_object* v_unused_1127_; 
v_unused_1127_ = lean_ctor_get(v___x_1101_, 0);
lean_dec(v_unused_1127_);
v___x_1103_ = v___x_1101_;
v_isShared_1104_ = v_isSharedCheck_1126_;
goto v_resetjp_1102_;
}
else
{
lean_dec(v___x_1101_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1126_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v_fst_1105_; lean_object* v_snd_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1125_; 
v_fst_1105_ = lean_ctor_get(v_a_1094_, 0);
v_snd_1106_ = lean_ctor_get(v_a_1094_, 1);
v_isSharedCheck_1125_ = !lean_is_exclusive(v_a_1094_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1108_ = v_a_1094_;
v_isShared_1109_ = v_isSharedCheck_1125_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_snd_1106_);
lean_inc(v_fst_1105_);
lean_dec(v_a_1094_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1125_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v_fst_1110_; lean_object* v_snd_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1124_; 
v_fst_1110_ = lean_ctor_get(v_fst_1105_, 0);
v_snd_1111_ = lean_ctor_get(v_fst_1105_, 1);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_fst_1105_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1113_ = v_fst_1105_;
v_isShared_1114_ = v_isSharedCheck_1124_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_snd_1111_);
lean_inc(v_fst_1110_);
lean_dec(v_fst_1105_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1124_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_fst_1110_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v_snd_1111_);
v___x_1116_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1118_; 
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1116_);
v___x_1118_ = v___x_1108_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1116_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v_snd_1106_);
v___x_1118_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
lean_object* v___x_1120_; 
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 0, v___x_1118_);
v___x_1120_ = v___x_1103_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v___x_1118_);
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
}
}
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec(v_a_1094_);
v_a_1128_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1101_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1101_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec(v_a_1096_);
lean_dec(v_a_1094_);
v_a_1136_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1097_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1097_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
else
{
lean_object* v_a_1144_; 
lean_dec(v_a_1094_);
v_a_1144_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1144_);
lean_dec_ref_known(v___x_1095_, 1);
v_a_1067_ = v_a_1144_;
goto v___jp_1066_;
}
}
else
{
lean_object* v_a_1145_; 
v_a_1145_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1093_, 1);
v_a_1067_ = v_a_1145_;
goto v___jp_1066_;
}
v___jp_1066_:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_Core_setMessageLog___redArg(v_a_1065_, v_a_1062_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; 
v_unused_1076_ = lean_ctor_get(v___x_1068_, 0);
lean_dec(v_unused_1076_);
v___x_1070_ = v___x_1068_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_dec(v___x_1068_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
lean_ctor_set_tag(v___x_1070_, 1);
lean_ctor_set(v___x_1070_, 0, v_a_1067_);
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1067_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
lean_dec_ref(v_a_1067_);
v_a_1077_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1068_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1068_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
lean_dec(v_fileMap_x3f_1056_);
lean_dec_ref(v_blocks_1055_);
lean_dec(v_binders_1054_);
lean_dec(v_declName_1053_);
v_a_1146_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1064_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1064_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object* v_declName_1154_, lean_object* v_binders_1155_, lean_object* v_blocks_1156_, lean_object* v_fileMap_x3f_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1154_, v_binders_1155_, v_blocks_1156_, v_fileMap_x3f_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_);
lean_dec(v_a_1163_);
lean_dec_ref(v_a_1162_);
lean_dec(v_a_1161_);
lean_dec_ref(v_a_1160_);
lean_dec(v_a_1159_);
lean_dec_ref(v_a_1158_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t v_flag_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v___x_1174_; 
v___x_1174_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1166_, v___y_1172_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object* v_flag_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
uint8_t v_flag_boxed_1183_; lean_object* v_res_1184_; 
v_flag_boxed_1183_ = lean_unbox(v_flag_1175_);
v_res_1184_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(v_flag_boxed_1183_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object* v_00_u03b1_1185_, uint8_t v_flag_1186_, lean_object* v_x_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_1186_, v_x_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object* v_00_u03b1_1196_, lean_object* v_flag_1197_, lean_object* v_x_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
uint8_t v_flag_boxed_1206_; lean_object* v_res_1207_; 
v_flag_boxed_1206_ = lean_unbox(v_flag_1197_);
v_res_1207_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(v_00_u03b1_1196_, v_flag_boxed_1206_, v_x_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object* v_ref_1208_, lean_object* v_msgData_1209_, uint8_t v_severity_1210_, uint8_t v_isSilent_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1208_, v_msgData_1209_, v_severity_1210_, v_isSilent_1211_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object* v_ref_1220_, lean_object* v_msgData_1221_, lean_object* v_severity_1222_, lean_object* v_isSilent_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
uint8_t v_severity_boxed_1231_; uint8_t v_isSilent_boxed_1232_; lean_object* v_res_1233_; 
v_severity_boxed_1231_ = lean_unbox(v_severity_1222_);
v_isSilent_boxed_1232_ = lean_unbox(v_isSilent_1223_);
v_res_1233_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(v_ref_1220_, v_msgData_1221_, v_severity_boxed_1231_, v_isSilent_boxed_1232_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v_ref_1220_);
return v_res_1233_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object* v_msgData_1234_, uint8_t v_severity_1235_, uint8_t v_isSilent_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_ref_1242_; lean_object* v___x_1243_; 
v_ref_1242_ = lean_ctor_get(v___y_1239_, 2);
v___x_1243_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1242_, v_msgData_1234_, v_severity_1235_, v_isSilent_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_1244_, lean_object* v_severity_1245_, lean_object* v_isSilent_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_){
_start:
{
uint8_t v_severity_boxed_1252_; uint8_t v_isSilent_boxed_1253_; lean_object* v_res_1254_; 
v_severity_boxed_1252_ = lean_unbox(v_severity_1245_);
v_isSilent_boxed_1253_ = lean_unbox(v_isSilent_1246_);
v_res_1254_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1244_, v_severity_boxed_1252_, v_isSilent_boxed_1253_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object* v_msgData_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v___x_1263_; uint8_t v___x_1264_; lean_object* v___x_1265_; 
v___x_1263_ = 2;
v___x_1264_ = 0;
v___x_1265_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1255_, v___x_1263_, v___x_1264_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object* v_msgData_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v_msgData_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object* v_as_1275_, size_t v_sz_1276_, size_t v_i_1277_, lean_object* v_b_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
uint8_t v___x_1286_; 
v___x_1286_ = lean_usize_dec_lt(v_i_1277_, v_sz_1276_);
if (v___x_1286_ == 0)
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1287_, 0, v_b_1278_);
return v___x_1287_;
}
else
{
lean_object* v_a_1288_; lean_object* v_snd_1289_; lean_object* v_snd_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v_a_1288_ = lean_array_uget_borrowed(v_as_1275_, v_i_1277_);
v_snd_1289_ = lean_ctor_get(v_a_1288_, 1);
v_snd_1290_ = lean_ctor_get(v_snd_1289_, 1);
v___x_1291_ = lean_box(0);
lean_inc(v_snd_1290_);
v___x_1292_ = l_Lean_Parser_Error_toString(v_snd_1290_);
v___x_1293_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
v___x_1294_ = l_Lean_MessageData_ofFormat(v___x_1293_);
v___x_1295_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_1294_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
if (lean_obj_tag(v___x_1295_) == 0)
{
size_t v___x_1296_; size_t v___x_1297_; 
lean_dec_ref_known(v___x_1295_, 1);
v___x_1296_ = ((size_t)1ULL);
v___x_1297_ = lean_usize_add(v_i_1277_, v___x_1296_);
v_i_1277_ = v___x_1297_;
v_b_1278_ = v___x_1291_;
goto _start;
}
else
{
return v___x_1295_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object* v_as_1299_, lean_object* v_sz_1300_, lean_object* v_i_1301_, lean_object* v_b_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_){
_start:
{
size_t v_sz_boxed_1310_; size_t v_i_boxed_1311_; lean_object* v_res_1312_; 
v_sz_boxed_1310_ = lean_unbox_usize(v_sz_1300_);
lean_dec(v_sz_1300_);
v_i_boxed_1311_ = lean_unbox_usize(v_i_1301_);
lean_dec(v_i_1301_);
v_res_1312_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v_as_1299_, v_sz_boxed_1310_, v_i_boxed_1311_, v_b_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec_ref(v_as_1299_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object* v_declName_1331_, lean_object* v_binders_1332_, lean_object* v_docComment_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v___x_1341_; lean_object* v_toCold_1342_; lean_object* v_env_1343_; lean_object* v_fileName_1344_; lean_object* v_currNamespace_1345_; lean_object* v_openDecls_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1341_ = lean_st_ref_get(v_a_1339_);
v_toCold_1342_ = lean_ctor_get(v_a_1338_, 0);
v_env_1343_ = lean_ctor_get(v___x_1341_, 0);
lean_inc_ref_n(v_env_1343_, 2);
lean_dec(v___x_1341_);
v_fileName_1344_ = lean_ctor_get(v_toCold_1342_, 0);
v_currNamespace_1345_ = lean_ctor_get(v_toCold_1342_, 4);
v_openDecls_1346_ = lean_ctor_get(v_toCold_1342_, 5);
v___x_1347_ = lean_string_utf8_byte_size(v_docComment_1333_);
lean_inc_ref_n(v_docComment_1333_, 2);
v___x_1348_ = l_Lean_FileMap_ofString(v_docComment_1333_);
lean_inc_ref(v___x_1348_);
lean_inc_ref(v_fileName_1344_);
v___x_1349_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1349_, 0, v_docComment_1333_);
lean_ctor_set(v___x_1349_, 1, v_fileName_1344_);
lean_ctor_set(v___x_1349_, 2, v___x_1348_);
lean_ctor_set(v___x_1349_, 3, v___x_1347_);
v___x_1350_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_1338_);
lean_inc(v_openDecls_1346_);
lean_inc(v_currNamespace_1345_);
v___x_1351_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1351_, 0, v_env_1343_);
lean_ctor_set(v___x_1351_, 1, v___x_1350_);
lean_ctor_set(v___x_1351_, 2, v_currNamespace_1345_);
lean_ctor_set(v___x_1351_, 3, v_openDecls_1346_);
v___x_1352_ = l_Lean_Parser_mkParserState(v_docComment_1333_);
lean_dec_ref(v_docComment_1333_);
v___x_1353_ = lean_unsigned_to_nat(0u);
v___x_1354_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__2));
v___x_1355_ = l_Lean_Parser_getTokenTable(v_env_1343_);
v___x_1356_ = l_Lean_Parser_ParserFn_run(v___x_1354_, v___x_1349_, v___x_1351_, v___x_1355_, v___x_1352_);
lean_inc_ref(v___x_1356_);
v___x_1357_ = l_Lean_Parser_ParserState_allErrors(v___x_1356_);
v___x_1358_ = lean_array_get_size(v___x_1357_);
v___x_1359_ = lean_nat_dec_eq(v___x_1358_, v___x_1353_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; size_t v_sz_1361_; size_t v___x_1362_; lean_object* v___x_1363_; 
lean_dec_ref(v___x_1356_);
lean_dec_ref(v___x_1348_);
lean_dec(v_binders_1332_);
lean_dec(v_declName_1331_);
v___x_1360_ = lean_box(0);
v_sz_1361_ = lean_array_size(v___x_1357_);
v___x_1362_ = ((size_t)0ULL);
v___x_1363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v___x_1357_, v_sz_1361_, v___x_1362_, v___x_1360_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_);
lean_dec_ref(v___x_1357_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1371_; 
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1371_ == 0)
{
lean_object* v_unused_1372_; 
v_unused_1372_ = lean_ctor_get(v___x_1363_, 0);
lean_dec(v_unused_1372_);
v___x_1365_ = v___x_1363_;
v_isShared_1366_ = v_isSharedCheck_1371_;
goto v_resetjp_1364_;
}
else
{
lean_dec(v___x_1363_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1371_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1367_; lean_object* v___x_1369_; 
v___x_1367_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__5));
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1367_);
v___x_1369_ = v___x_1365_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
v_a_1373_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1363_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1363_);
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
else
{
lean_object* v_stxStack_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
lean_dec_ref(v___x_1357_);
v_stxStack_1381_ = lean_ctor_get(v___x_1356_, 0);
lean_inc_ref(v_stxStack_1381_);
lean_dec_ref(v___x_1356_);
v___x_1382_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1381_);
lean_dec_ref(v_stxStack_1381_);
v___x_1383_ = l_Lean_TSyntax_getVersoBlocks(v___x_1382_);
lean_dec(v___x_1382_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1348_);
v___x_1385_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1331_, v_binders_1332_, v___x_1383_, v___x_1384_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_);
return v___x_1385_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object* v_declName_1386_, lean_object* v_binders_1387_, lean_object* v_docComment_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_versoDocStringOfText(v_declName_1386_, v_binders_1387_, v_docComment_1388_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
lean_dec(v_a_1392_);
lean_dec_ref(v_a_1391_);
lean_dec(v_a_1390_);
lean_dec_ref(v_a_1389_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object* v_msgData_1397_, uint8_t v_severity_1398_, uint8_t v_isSilent_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1397_, v_severity_1398_, v_isSilent_1399_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object* v_msgData_1408_, lean_object* v_severity_1409_, lean_object* v_isSilent_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
uint8_t v_severity_boxed_1418_; uint8_t v_isSilent_boxed_1419_; lean_object* v_res_1420_; 
v_severity_boxed_1418_ = lean_unbox(v_severity_1409_);
v_isSilent_boxed_1419_ = lean_unbox(v_isSilent_1410_);
v_res_1420_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(v_msgData_1408_, v_severity_boxed_1418_, v_isSilent_boxed_1419_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
lean_dec(v___y_1416_);
lean_dec_ref(v___y_1415_);
lean_dec(v___y_1414_);
lean_dec_ref(v___y_1413_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object* v_declName_1430_, lean_object* v_binders_1431_, lean_object* v_docComment_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v___x_1440_; 
v___x_1440_ = l___private_Lean_DocString_Add_0__Lean_docStringRange(v_docComment_1432_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v___x_1441_; lean_object* v_body_1442_; lean_object* v___x_1443_; uint8_t v___x_1444_; 
lean_dec_ref_known(v___x_1440_, 1);
v___x_1441_ = lean_unsigned_to_nat(1u);
v_body_1442_ = l_Lean_Syntax_getArg(v_docComment_1432_, v___x_1441_);
v___x_1443_ = ((lean_object*)(l_Lean_versoDocString___closed__4));
v___x_1444_ = l_Lean_Syntax_isOfKind(v_body_1442_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = l_Lean_TSyntax_getDocString(v_docComment_1432_);
v___x_1446_ = l_Lean_versoDocStringOfText(v_declName_1430_, v_binders_1431_, v___x_1445_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
return v___x_1446_;
}
else
{
lean_object* v___x_1447_; lean_object* v_markup_1448_; 
v___x_1447_ = l_Lean_VersoDocstringView_of(v_docComment_1432_);
v_markup_1448_ = lean_ctor_get(v___x_1447_, 1);
lean_inc_ref(v_markup_1448_);
lean_dec_ref(v___x_1447_);
if (lean_obj_tag(v_markup_1448_) == 0)
{
lean_object* v_doc_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_doc_1449_ = lean_ctor_get(v_markup_1448_, 0);
lean_inc(v_doc_1449_);
lean_dec_ref_known(v_markup_1448_, 1);
v___x_1450_ = l_Lean_TSyntax_getVersoBlocks(v_doc_1449_);
lean_dec(v_doc_1449_);
v___x_1451_ = lean_box(0);
v___x_1452_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1430_, v_binders_1431_, v___x_1450_, v___x_1451_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
return v___x_1452_;
}
else
{
lean_object* v_text_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_text_1453_ = lean_ctor_get(v_markup_1448_, 0);
lean_inc(v_text_1453_);
lean_dec_ref_known(v_markup_1448_, 1);
v___x_1454_ = l_Lean_Syntax_getAtomVal(v_text_1453_);
lean_dec(v_text_1453_);
v___x_1455_ = l_Lean_versoDocStringOfText(v_declName_1430_, v_binders_1431_, v___x_1454_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
return v___x_1455_;
}
}
}
else
{
lean_object* v___x_1456_; 
lean_dec_ref_known(v___x_1440_, 1);
v___x_1456_ = l_Lean_parseVersoDocString(v_docComment_1432_, v_a_1437_, v_a_1438_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1504_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1459_ = v___x_1456_;
v_isShared_1460_ = v_isSharedCheck_1504_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1456_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1504_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
if (lean_obj_tag(v_a_1457_) == 1)
{
lean_object* v_val_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; uint8_t v___x_1464_; lean_object* v___x_1465_; 
lean_del_object(v___x_1459_);
v_val_1461_ = lean_ctor_get(v_a_1457_, 0);
lean_inc(v_val_1461_);
lean_dec_ref_known(v_a_1457_, 1);
v___x_1462_ = l_Lean_TSyntax_getVersoBlocks(v_val_1461_);
lean_dec(v_val_1461_);
v___x_1463_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1463_, 0, v___x_1462_);
v___x_1464_ = 0;
v___x_1465_ = l_Lean_Doc_DocM_exec___redArg(v_declName_1430_, v_binders_1431_, v___x_1463_, v___x_1464_, v_a_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1491_; 
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1468_ = v___x_1465_;
v_isShared_1469_ = v_isSharedCheck_1491_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1465_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1491_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v_fst_1470_; lean_object* v_snd_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1490_; 
v_fst_1470_ = lean_ctor_get(v_a_1466_, 0);
v_snd_1471_ = lean_ctor_get(v_a_1466_, 1);
v_isSharedCheck_1490_ = !lean_is_exclusive(v_a_1466_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1473_ = v_a_1466_;
v_isShared_1474_ = v_isSharedCheck_1490_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_snd_1471_);
lean_inc(v_fst_1470_);
lean_dec(v_a_1466_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1490_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v_fst_1475_; lean_object* v_snd_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1489_; 
v_fst_1475_ = lean_ctor_get(v_fst_1470_, 0);
v_snd_1476_ = lean_ctor_get(v_fst_1470_, 1);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_fst_1470_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1478_ = v_fst_1470_;
v_isShared_1479_ = v_isSharedCheck_1489_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_snd_1476_);
lean_inc(v_fst_1475_);
lean_dec(v_fst_1470_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1489_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_fst_1475_);
lean_ctor_set(v_reuseFailAlloc_1488_, 1, v_snd_1476_);
v___x_1481_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1483_; 
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1481_);
v___x_1483_ = v___x_1473_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_snd_1471_);
v___x_1483_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; 
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 0, v___x_1483_);
v___x_1485_ = v___x_1468_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
v_a_1492_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1465_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1465_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1502_; 
lean_dec(v_a_1457_);
lean_dec(v_binders_1431_);
lean_dec(v_declName_1430_);
v___x_1500_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__5));
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v___x_1500_);
v___x_1502_ = v___x_1459_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec(v_binders_1431_);
lean_dec(v_declName_1430_);
v_a_1505_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1456_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1456_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object* v_declName_1513_, lean_object* v_binders_1514_, lean_object* v_docComment_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_versoDocString(v_declName_1513_, v_binders_1514_, v_docComment_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
lean_dec(v_a_1521_);
lean_dec_ref(v_a_1520_);
lean_dec(v_a_1519_);
lean_dec_ref(v_a_1518_);
lean_dec(v_a_1517_);
lean_dec_ref(v_a_1516_);
lean_dec(v_docComment_1515_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object* v_range_1524_, lean_object* v_doc_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_){
_start:
{
lean_object* v___x_1533_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v_env_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1533_ = lean_st_ref_get(v_a_1531_);
v_env_1540_ = lean_ctor_get(v___x_1533_, 0);
lean_inc_ref(v_env_1540_);
lean_dec(v___x_1533_);
v___x_1541_ = l_Lean_getMainVersoModuleDocs(v_env_1540_);
v___x_1542_ = l_Lean_VersoModuleDocs_terminalNesting(v___x_1541_);
lean_dec_ref(v___x_1541_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
v___x_1543_ = l_Lean_TSyntax_getVersoBlocks(v_doc_1525_);
v___x_1544_ = lean_unsigned_to_nat(0u);
v___y_1535_ = v___x_1543_;
v___y_1536_ = v___x_1544_;
goto v___jp_1534_;
}
else
{
lean_object* v_val_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
v_val_1545_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_val_1545_);
lean_dec_ref_known(v___x_1542_, 1);
v___x_1546_ = lean_unsigned_to_nat(1u);
v___x_1547_ = lean_nat_add(v_val_1545_, v___x_1546_);
lean_dec(v_val_1545_);
v___x_1548_ = l_Lean_TSyntax_getVersoBlocks(v_doc_1525_);
v___y_1535_ = v___x_1548_;
v___y_1536_ = v___x_1547_;
goto v___jp_1534_;
}
v___jp_1534_:
{
lean_object* v___x_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; 
v___x_1537_ = lean_alloc_closure((void*)(l_Lean_Doc_elabModSnippet___boxed), 13, 3);
lean_closure_set(v___x_1537_, 0, v_range_1524_);
lean_closure_set(v___x_1537_, 1, v___y_1535_);
lean_closure_set(v___x_1537_, 2, v___y_1536_);
v___x_1538_ = 0;
v___x_1539_ = l_Lean_Doc_DocM_execForModule___redArg(v___x_1537_, v___x_1538_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
return v___x_1539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object* v_range_1549_, lean_object* v_doc_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Lean_versoModDocString(v_range_1549_, v_doc_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_);
lean_dec(v_a_1556_);
lean_dec_ref(v_a_1555_);
lean_dec(v_a_1554_);
lean_dec_ref(v_a_1553_);
lean_dec(v_a_1552_);
lean_dec_ref(v_a_1551_);
lean_dec(v_doc_1550_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object* v_declName_1568_, lean_object* v_docComment_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = ((lean_object*)(l_Lean_versoDocStringFromString___closed__3));
v___x_1578_ = l_Lean_versoDocStringOfText(v_declName_1568_, v___x_1577_, v_docComment_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object* v_declName_1579_, lean_object* v_docComment_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Lean_versoDocStringFromString(v_declName_1579_, v_docComment_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_);
lean_dec(v_a_1586_);
lean_dec_ref(v_a_1585_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
lean_dec(v_a_1582_);
lean_dec_ref(v_a_1581_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object* v_docString_1589_, lean_object* v_declName_1590_, uint8_t v___x_1591_, lean_object* v_env_1592_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1593_ = l_Lean_docStringExt;
v___x_1594_ = l_String_removeLeadingSpaces(v_docString_1589_);
v___x_1595_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1593_, v_env_1592_, v_declName_1590_, v___x_1594_, v___x_1591_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0___boxed(lean_object* v_docString_1596_, lean_object* v_declName_1597_, lean_object* v___x_1598_, lean_object* v_env_1599_){
_start:
{
uint8_t v___x_198__boxed_1600_; lean_object* v_res_1601_; 
v___x_198__boxed_1600_ = lean_unbox(v___x_1598_);
v_res_1601_ = l_Lean_addMarkdownDocString___redArg___lam__0(v_docString_1596_, v_declName_1597_, v___x_198__boxed_1600_, v_env_1599_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object* v_declName_1602_, uint8_t v___x_1603_, lean_object* v_modifyEnv_1604_, lean_object* v_docString_1605_){
_start:
{
lean_object* v___x_1606_; lean_object* v___f_1607_; lean_object* v___x_1608_; 
v___x_1606_ = lean_box(v___x_1603_);
v___f_1607_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1607_, 0, v_docString_1605_);
lean_closure_set(v___f_1607_, 1, v_declName_1602_);
lean_closure_set(v___f_1607_, 2, v___x_1606_);
v___x_1608_ = lean_apply_1(v_modifyEnv_1604_, v___f_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1___boxed(lean_object* v_declName_1609_, lean_object* v___x_1610_, lean_object* v_modifyEnv_1611_, lean_object* v_docString_1612_){
_start:
{
uint8_t v___x_207__boxed_1613_; lean_object* v_res_1614_; 
v___x_207__boxed_1613_ = lean_unbox(v___x_1610_);
v_res_1614_ = l_Lean_addMarkdownDocString___redArg___lam__1(v_declName_1609_, v___x_207__boxed_1613_, v_modifyEnv_1611_, v_docString_1612_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object* v_inst_1615_, lean_object* v_inst_1616_, lean_object* v_docComment_1617_, lean_object* v_toBind_1618_, lean_object* v___f_1619_, lean_object* v_____r_1620_){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1621_ = l_Lean_getDocStringText___redArg(v_inst_1615_, v_inst_1616_, v_docComment_1617_);
v___x_1622_ = lean_apply_4(v_toBind_1618_, lean_box(0), lean_box(0), v___x_1621_, v___f_1619_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object* v_inst_1623_, lean_object* v_inst_1624_, lean_object* v_inst_1625_, lean_object* v_inst_1626_, lean_object* v_inst_1627_, lean_object* v_docComment_1628_, lean_object* v_toBind_1629_, lean_object* v___f_1630_, lean_object* v_____r_1631_){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = l_Lean_validateDocComment___redArg(v_inst_1623_, v_inst_1624_, v_inst_1625_, v_inst_1626_, v_inst_1627_, v_docComment_1628_);
v___x_1633_ = lean_apply_4(v_toBind_1629_, lean_box(0), lean_box(0), v___x_1632_, v___f_1630_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object* v_inst_1634_, lean_object* v_inst_1635_, lean_object* v_inst_1636_, lean_object* v_inst_1637_, lean_object* v_inst_1638_, lean_object* v_docComment_1639_, lean_object* v_toBind_1640_, lean_object* v___f_1641_, lean_object* v_____r_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l_Lean_addMarkdownDocString___redArg___lam__3(v_inst_1634_, v_inst_1635_, v_inst_1636_, v_inst_1637_, v_inst_1638_, v_docComment_1639_, v_toBind_1640_, v___f_1641_, v_____r_1642_);
lean_dec(v_docComment_1639_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object* v___f_1644_, lean_object* v_____r_1645_){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = lean_apply_1(v___f_1644_, v_____r_1645_);
return v___x_1646_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1648_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__0));
v___x_1649_ = l_Lean_stringToMessageData(v___x_1648_);
return v___x_1649_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__2));
v___x_1652_ = l_Lean_stringToMessageData(v___x_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object* v_declName_1653_, lean_object* v___f_1654_, uint8_t v___x_1655_, lean_object* v_inst_1656_, lean_object* v_inst_1657_, lean_object* v_toBind_1658_, lean_object* v___f_1659_, lean_object* v_____do__lift_1660_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1660_, v_declName_1653_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
lean_dec(v___f_1659_);
lean_dec(v_toBind_1658_);
lean_dec_ref(v_inst_1657_);
lean_dec_ref(v_inst_1656_);
lean_dec(v_declName_1653_);
v___x_1662_ = lean_box(0);
v___x_1663_ = lean_apply_1(v___f_1654_, v___x_1662_);
return v___x_1663_;
}
else
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
lean_dec_ref_known(v___x_1661_, 1);
lean_dec(v___f_1654_);
v___x_1664_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_1665_ = l_Lean_MessageData_ofConstName(v_declName_1653_, v___x_1655_);
v___x_1666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_1668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = l_Lean_throwError___redArg(v_inst_1656_, v_inst_1657_, v___x_1668_);
v___x_1670_ = lean_apply_4(v_toBind_1658_, lean_box(0), lean_box(0), v___x_1669_, v___f_1659_);
return v___x_1670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object* v_declName_1671_, lean_object* v___f_1672_, lean_object* v___x_1673_, lean_object* v_inst_1674_, lean_object* v_inst_1675_, lean_object* v_toBind_1676_, lean_object* v___f_1677_, lean_object* v_____do__lift_1678_){
_start:
{
uint8_t v___x_272__boxed_1679_; lean_object* v_res_1680_; 
v___x_272__boxed_1679_ = lean_unbox(v___x_1673_);
v_res_1680_ = l_Lean_addMarkdownDocString___redArg___lam__5(v_declName_1671_, v___f_1672_, v___x_272__boxed_1679_, v_inst_1674_, v_inst_1675_, v_toBind_1676_, v___f_1677_, v_____do__lift_1678_);
lean_dec_ref(v_____do__lift_1678_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object* v_inst_1681_, lean_object* v_inst_1682_, lean_object* v_inst_1683_, lean_object* v_inst_1684_, lean_object* v_inst_1685_, lean_object* v_inst_1686_, lean_object* v_inst_1687_, lean_object* v_declName_1688_, lean_object* v_docComment_1689_){
_start:
{
lean_object* v_toApplicative_1690_; lean_object* v_toBind_1691_; lean_object* v_toPure_1692_; uint8_t v___x_1693_; 
v_toApplicative_1690_ = lean_ctor_get(v_inst_1681_, 0);
v_toBind_1691_ = lean_ctor_get(v_inst_1681_, 1);
lean_inc(v_toBind_1691_);
v_toPure_1692_ = lean_ctor_get(v_toApplicative_1690_, 1);
v___x_1693_ = l_Lean_Name_isAnonymous(v_declName_1688_);
if (v___x_1693_ == 0)
{
lean_object* v_getEnv_1694_; lean_object* v_modifyEnv_1695_; uint8_t v___x_1696_; lean_object* v___x_1697_; lean_object* v___f_1698_; lean_object* v___f_1699_; lean_object* v___f_1700_; lean_object* v___f_1701_; lean_object* v___x_1702_; lean_object* v___f_1703_; lean_object* v___x_1704_; 
v_getEnv_1694_ = lean_ctor_get(v_inst_1684_, 0);
lean_inc(v_getEnv_1694_);
v_modifyEnv_1695_ = lean_ctor_get(v_inst_1684_, 1);
lean_inc(v_modifyEnv_1695_);
lean_dec_ref(v_inst_1684_);
v___x_1696_ = 1;
v___x_1697_ = lean_box(v___x_1696_);
lean_inc(v_declName_1688_);
v___f_1698_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1698_, 0, v_declName_1688_);
lean_closure_set(v___f_1698_, 1, v___x_1697_);
lean_closure_set(v___f_1698_, 2, v_modifyEnv_1695_);
lean_inc_n(v_toBind_1691_, 3);
lean_inc(v_docComment_1689_);
lean_inc_ref(v_inst_1685_);
lean_inc_ref_n(v_inst_1681_, 2);
v___f_1699_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__2), 6, 5);
lean_closure_set(v___f_1699_, 0, v_inst_1681_);
lean_closure_set(v___f_1699_, 1, v_inst_1685_);
lean_closure_set(v___f_1699_, 2, v_docComment_1689_);
lean_closure_set(v___f_1699_, 3, v_toBind_1691_);
lean_closure_set(v___f_1699_, 4, v___f_1698_);
v___f_1700_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_1700_, 0, v_inst_1681_);
lean_closure_set(v___f_1700_, 1, v_inst_1682_);
lean_closure_set(v___f_1700_, 2, v_inst_1686_);
lean_closure_set(v___f_1700_, 3, v_inst_1687_);
lean_closure_set(v___f_1700_, 4, v_inst_1683_);
lean_closure_set(v___f_1700_, 5, v_docComment_1689_);
lean_closure_set(v___f_1700_, 6, v_toBind_1691_);
lean_closure_set(v___f_1700_, 7, v___f_1699_);
lean_inc_ref(v___f_1700_);
v___f_1701_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__4), 2, 1);
lean_closure_set(v___f_1701_, 0, v___f_1700_);
v___x_1702_ = lean_box(v___x_1693_);
v___f_1703_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_1703_, 0, v_declName_1688_);
lean_closure_set(v___f_1703_, 1, v___f_1700_);
lean_closure_set(v___f_1703_, 2, v___x_1702_);
lean_closure_set(v___f_1703_, 3, v_inst_1681_);
lean_closure_set(v___f_1703_, 4, v_inst_1685_);
lean_closure_set(v___f_1703_, 5, v_toBind_1691_);
lean_closure_set(v___f_1703_, 6, v___f_1701_);
v___x_1704_ = lean_apply_4(v_toBind_1691_, lean_box(0), lean_box(0), v_getEnv_1694_, v___f_1703_);
return v___x_1704_;
}
else
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
lean_inc(v_toPure_1692_);
lean_dec(v_toBind_1691_);
lean_dec(v_docComment_1689_);
lean_dec(v_declName_1688_);
lean_dec(v_inst_1687_);
lean_dec_ref(v_inst_1686_);
lean_dec_ref(v_inst_1685_);
lean_dec_ref(v_inst_1684_);
lean_dec_ref(v_inst_1683_);
lean_dec(v_inst_1682_);
lean_dec_ref(v_inst_1681_);
v___x_1705_ = lean_box(0);
v___x_1706_ = lean_apply_2(v_toPure_1692_, lean_box(0), v___x_1705_);
return v___x_1706_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object* v_m_1707_, lean_object* v_inst_1708_, lean_object* v_inst_1709_, lean_object* v_inst_1710_, lean_object* v_inst_1711_, lean_object* v_inst_1712_, lean_object* v_inst_1713_, lean_object* v_inst_1714_, lean_object* v_declName_1715_, lean_object* v_docComment_1716_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = l_Lean_addMarkdownDocString___redArg(v_inst_1708_, v_inst_1709_, v_inst_1710_, v_inst_1711_, v_inst_1712_, v_inst_1713_, v_inst_1714_, v_declName_1715_, v_docComment_1716_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object* v_addEntryFn_1718_, lean_object* v___x_1719_, lean_object* v_s_1720_){
_start:
{
lean_object* v_importedEntries_1721_; lean_object* v_state_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1730_; 
v_importedEntries_1721_ = lean_ctor_get(v_s_1720_, 0);
v_state_1722_ = lean_ctor_get(v_s_1720_, 1);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_s_1720_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1724_ = v_s_1720_;
v_isShared_1725_ = v_isSharedCheck_1730_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_state_1722_);
lean_inc(v_importedEntries_1721_);
lean_dec(v_s_1720_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1730_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v_state_1726_; lean_object* v___x_1728_; 
v_state_1726_ = lean_apply_2(v_addEntryFn_1718_, v_state_1722_, v___x_1719_);
if (v_isShared_1725_ == 0)
{
lean_ctor_set(v___x_1724_, 1, v_state_1726_);
v___x_1728_ = v___x_1724_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_importedEntries_1721_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_state_1726_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object* v_declName_1731_, lean_object* v_x1_1732_, lean_object* v_x2_1733_){
_start:
{
lean_object* v_index_1734_; lean_object* v_sourceString_1735_; lean_object* v_imports_1736_; lean_object* v_currNamespace_1737_; lean_object* v_openDecls_1738_; lean_object* v_options_1739_; lean_object* v_check_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1759_; 
v_index_1734_ = lean_ctor_get(v_x2_1733_, 1);
v_sourceString_1735_ = lean_ctor_get(v_x2_1733_, 2);
v_imports_1736_ = lean_ctor_get(v_x2_1733_, 3);
v_currNamespace_1737_ = lean_ctor_get(v_x2_1733_, 4);
v_openDecls_1738_ = lean_ctor_get(v_x2_1733_, 5);
v_options_1739_ = lean_ctor_get(v_x2_1733_, 6);
v_check_1740_ = lean_ctor_get(v_x2_1733_, 7);
v_isSharedCheck_1759_ = !lean_is_exclusive(v_x2_1733_);
if (v_isSharedCheck_1759_ == 0)
{
lean_object* v_unused_1760_; 
v_unused_1760_ = lean_ctor_get(v_x2_1733_, 0);
lean_dec(v_unused_1760_);
v___x_1742_ = v_x2_1733_;
v_isShared_1743_ = v_isSharedCheck_1759_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_check_1740_);
lean_inc(v_options_1739_);
lean_inc(v_openDecls_1738_);
lean_inc(v_currNamespace_1737_);
lean_inc(v_imports_1736_);
lean_inc(v_sourceString_1735_);
lean_inc(v_index_1734_);
lean_dec(v_x2_1733_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1759_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; lean_object* v_toEnvExtension_1745_; lean_object* v_addEntryFn_1746_; lean_object* v_asyncMode_1747_; uint8_t v_logWrites_1748_; lean_object* v___x_1749_; lean_object* v___x_1751_; 
v___x_1744_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_1745_ = lean_ctor_get(v___x_1744_, 0);
v_addEntryFn_1746_ = lean_ctor_get(v___x_1744_, 3);
v_asyncMode_1747_ = lean_ctor_get(v_toEnvExtension_1745_, 2);
v_logWrites_1748_ = lean_ctor_get_uint8(v_toEnvExtension_1745_, sizeof(void*)*6);
v___x_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1749_, 0, v_declName_1731_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v___x_1749_);
v___x_1751_ = v___x_1742_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1749_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v_index_1734_);
lean_ctor_set(v_reuseFailAlloc_1758_, 2, v_sourceString_1735_);
lean_ctor_set(v_reuseFailAlloc_1758_, 3, v_imports_1736_);
lean_ctor_set(v_reuseFailAlloc_1758_, 4, v_currNamespace_1737_);
lean_ctor_set(v_reuseFailAlloc_1758_, 5, v_openDecls_1738_);
lean_ctor_set(v_reuseFailAlloc_1758_, 6, v_options_1739_);
lean_ctor_set(v_reuseFailAlloc_1758_, 7, v_check_1740_);
v___x_1751_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
lean_object* v___f_1752_; lean_object* v___x_1753_; uint8_t v___x_1754_; 
lean_inc(v_addEntryFn_1746_);
v___f_1752_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1752_, 0, v_addEntryFn_1746_);
lean_closure_set(v___f_1752_, 1, v___x_1751_);
v___x_1753_ = lean_box(0);
v___x_1754_ = 1;
if (v_logWrites_1748_ == 0)
{
lean_object* v___x_1755_; 
lean_inc_ref(v_toEnvExtension_1745_);
v___x_1755_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1745_, v_x1_1732_, v___f_1752_, v_asyncMode_1747_, v___x_1753_, v___x_1754_);
return v___x_1755_;
}
else
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
lean_inc_ref_n(v_toEnvExtension_1745_, 2);
v___x_1756_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1745_, v_x1_1732_);
lean_dec_ref(v_x1_1732_);
v___x_1757_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1745_, v___x_1756_, v___f_1752_, v_asyncMode_1747_, v___x_1753_, v___x_1754_);
return v___x_1757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object* v_declName_1780_, lean_object* v_docs_1781_, uint8_t v___x_1782_, lean_object* v_deferred_1783_, lean_object* v___f_1784_, lean_object* v_env_1785_){
_start:
{
lean_object* v___x_1786_; lean_object* v_env_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v___x_1786_ = l_Lean_versoDocStringExt;
v_env_1787_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1786_, v_env_1785_, v_declName_1780_, v_docs_1781_, v___x_1782_);
v___x_1788_ = lean_unsigned_to_nat(0u);
v___x_1789_ = lean_array_get_size(v_deferred_1783_);
v___x_1790_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9));
v___x_1791_ = lean_nat_dec_lt(v___x_1788_, v___x_1789_);
if (v___x_1791_ == 0)
{
lean_dec_ref(v___f_1784_);
lean_dec_ref(v_deferred_1783_);
return v_env_1787_;
}
else
{
size_t v___x_1792_; size_t v___x_1793_; lean_object* v___x_1794_; 
v___x_1792_ = ((size_t)0ULL);
v___x_1793_ = lean_usize_of_nat(v___x_1789_);
v___x_1794_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1790_, v___f_1784_, v_deferred_1783_, v___x_1792_, v___x_1793_, v_env_1787_);
return v___x_1794_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___boxed(lean_object* v_declName_1795_, lean_object* v_docs_1796_, lean_object* v___x_1797_, lean_object* v_deferred_1798_, lean_object* v___f_1799_, lean_object* v_env_1800_){
_start:
{
uint8_t v___x_385__boxed_1801_; lean_object* v_res_1802_; 
v___x_385__boxed_1801_ = lean_unbox(v___x_1797_);
v_res_1802_ = l_Lean_addVersoDocStringCore___redArg___lam__2(v_declName_1795_, v_docs_1796_, v___x_385__boxed_1801_, v_deferred_1798_, v___f_1799_, v_env_1800_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__3(lean_object* v_modifyEnv_1803_, lean_object* v___f_1804_, lean_object* v_____r_1805_){
_start:
{
lean_object* v___x_1806_; 
v___x_1806_ = lean_apply_1(v_modifyEnv_1803_, v___f_1804_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4(lean_object* v_declName_1809_, lean_object* v_modifyEnv_1810_, lean_object* v___f_1811_, uint8_t v___x_1812_, lean_object* v_inst_1813_, lean_object* v_inst_1814_, lean_object* v_toBind_1815_, lean_object* v___f_1816_, lean_object* v_____do__lift_1817_){
_start:
{
lean_object* v___x_1818_; 
v___x_1818_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1817_, v_declName_1809_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v___x_1819_; 
lean_dec(v___f_1816_);
lean_dec(v_toBind_1815_);
lean_dec_ref(v_inst_1814_);
lean_dec_ref(v_inst_1813_);
lean_dec(v_declName_1809_);
v___x_1819_ = lean_apply_1(v_modifyEnv_1810_, v___f_1811_);
return v___x_1819_;
}
else
{
lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1834_; 
lean_dec_ref(v___f_1811_);
lean_dec(v_modifyEnv_1810_);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1834_ == 0)
{
lean_object* v_unused_1835_; 
v_unused_1835_ = lean_ctor_get(v___x_1818_, 0);
lean_dec(v_unused_1835_);
v___x_1821_ = v___x_1818_;
v_isShared_1822_ = v_isSharedCheck_1834_;
goto v_resetjp_1820_;
}
else
{
lean_dec(v___x_1818_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1834_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1829_; 
v___x_1823_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0));
v___x_1824_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_1809_, v___x_1812_);
v___x_1825_ = lean_string_append(v___x_1823_, v___x_1824_);
lean_dec_ref(v___x_1824_);
v___x_1826_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1));
v___x_1827_ = lean_string_append(v___x_1825_, v___x_1826_);
if (v_isShared_1822_ == 0)
{
lean_ctor_set_tag(v___x_1821_, 3);
lean_ctor_set(v___x_1821_, 0, v___x_1827_);
v___x_1829_ = v___x_1821_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1827_);
v___x_1829_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1830_ = l_Lean_MessageData_ofFormat(v___x_1829_);
v___x_1831_ = l_Lean_throwError___redArg(v_inst_1813_, v_inst_1814_, v___x_1830_);
v___x_1832_ = lean_apply_4(v_toBind_1815_, lean_box(0), lean_box(0), v___x_1831_, v___f_1816_);
return v___x_1832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__4___boxed(lean_object* v_declName_1836_, lean_object* v_modifyEnv_1837_, lean_object* v___f_1838_, lean_object* v___x_1839_, lean_object* v_inst_1840_, lean_object* v_inst_1841_, lean_object* v_toBind_1842_, lean_object* v___f_1843_, lean_object* v_____do__lift_1844_){
_start:
{
uint8_t v___x_437__boxed_1845_; lean_object* v_res_1846_; 
v___x_437__boxed_1845_ = lean_unbox(v___x_1839_);
v_res_1846_ = l_Lean_addVersoDocStringCore___redArg___lam__4(v_declName_1836_, v_modifyEnv_1837_, v___f_1838_, v___x_437__boxed_1845_, v_inst_1840_, v_inst_1841_, v_toBind_1842_, v___f_1843_, v_____do__lift_1844_);
lean_dec_ref(v_____do__lift_1844_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object* v_inst_1847_, lean_object* v_inst_1848_, lean_object* v_inst_1849_, lean_object* v_declName_1850_, lean_object* v_docs_1851_, lean_object* v_deferred_1852_){
_start:
{
lean_object* v_toApplicative_1853_; lean_object* v_toBind_1854_; lean_object* v_toPure_1855_; uint8_t v___x_1856_; 
v_toApplicative_1853_ = lean_ctor_get(v_inst_1847_, 0);
v_toBind_1854_ = lean_ctor_get(v_inst_1847_, 1);
lean_inc(v_toBind_1854_);
v_toPure_1855_ = lean_ctor_get(v_toApplicative_1853_, 1);
v___x_1856_ = l_Lean_Name_isAnonymous(v_declName_1850_);
if (v___x_1856_ == 0)
{
lean_object* v_getEnv_1857_; lean_object* v_modifyEnv_1858_; lean_object* v___f_1859_; uint8_t v___x_1860_; lean_object* v___x_1861_; lean_object* v___f_1862_; lean_object* v___f_1863_; lean_object* v___x_1864_; lean_object* v___f_1865_; lean_object* v___x_1866_; 
v_getEnv_1857_ = lean_ctor_get(v_inst_1848_, 0);
lean_inc(v_getEnv_1857_);
v_modifyEnv_1858_ = lean_ctor_get(v_inst_1848_, 1);
lean_inc_n(v_modifyEnv_1858_, 2);
lean_dec_ref(v_inst_1848_);
lean_inc_n(v_declName_1850_, 2);
v___f_1859_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__1), 3, 1);
lean_closure_set(v___f_1859_, 0, v_declName_1850_);
v___x_1860_ = 1;
v___x_1861_ = lean_box(v___x_1860_);
v___f_1862_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_1862_, 0, v_declName_1850_);
lean_closure_set(v___f_1862_, 1, v_docs_1851_);
lean_closure_set(v___f_1862_, 2, v___x_1861_);
lean_closure_set(v___f_1862_, 3, v_deferred_1852_);
lean_closure_set(v___f_1862_, 4, v___f_1859_);
lean_inc_ref(v___f_1862_);
v___f_1863_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__3), 3, 2);
lean_closure_set(v___f_1863_, 0, v_modifyEnv_1858_);
lean_closure_set(v___f_1863_, 1, v___f_1862_);
v___x_1864_ = lean_box(v___x_1860_);
lean_inc(v_toBind_1854_);
v___f_1865_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__4___boxed), 9, 8);
lean_closure_set(v___f_1865_, 0, v_declName_1850_);
lean_closure_set(v___f_1865_, 1, v_modifyEnv_1858_);
lean_closure_set(v___f_1865_, 2, v___f_1862_);
lean_closure_set(v___f_1865_, 3, v___x_1864_);
lean_closure_set(v___f_1865_, 4, v_inst_1847_);
lean_closure_set(v___f_1865_, 5, v_inst_1849_);
lean_closure_set(v___f_1865_, 6, v_toBind_1854_);
lean_closure_set(v___f_1865_, 7, v___f_1863_);
v___x_1866_ = lean_apply_4(v_toBind_1854_, lean_box(0), lean_box(0), v_getEnv_1857_, v___f_1865_);
return v___x_1866_;
}
else
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
lean_inc(v_toPure_1855_);
lean_dec(v_toBind_1854_);
lean_dec_ref(v_deferred_1852_);
lean_dec_ref(v_docs_1851_);
lean_dec(v_declName_1850_);
lean_dec_ref(v_inst_1849_);
lean_dec_ref(v_inst_1848_);
lean_dec_ref(v_inst_1847_);
v___x_1867_ = lean_box(0);
v___x_1868_ = lean_apply_2(v_toPure_1855_, lean_box(0), v___x_1867_);
return v___x_1868_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object* v_m_1869_, lean_object* v_inst_1870_, lean_object* v_inst_1871_, lean_object* v_inst_1872_, lean_object* v_inst_1873_, lean_object* v_declName_1874_, lean_object* v_docs_1875_, lean_object* v_deferred_1876_){
_start:
{
lean_object* v___x_1877_; 
v___x_1877_ = l_Lean_addVersoDocStringCore___redArg(v_inst_1870_, v_inst_1871_, v_inst_1873_, v_declName_1874_, v_docs_1875_, v_deferred_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object* v_m_1878_, lean_object* v_inst_1879_, lean_object* v_inst_1880_, lean_object* v_inst_1881_, lean_object* v_inst_1882_, lean_object* v_declName_1883_, lean_object* v_docs_1884_, lean_object* v_deferred_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lean_addVersoDocStringCore(v_m_1878_, v_inst_1879_, v_inst_1880_, v_inst_1881_, v_inst_1882_, v_declName_1883_, v_docs_1884_, v_deferred_1885_);
lean_dec(v_inst_1881_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object* v_size_1887_, uint8_t v___x_1888_, lean_object* v_x1_1889_, lean_object* v_x2_1890_){
_start:
{
lean_object* v_index_1891_; lean_object* v_sourceString_1892_; lean_object* v_imports_1893_; lean_object* v_currNamespace_1894_; lean_object* v_openDecls_1895_; lean_object* v_options_1896_; lean_object* v_check_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1915_; 
v_index_1891_ = lean_ctor_get(v_x2_1890_, 1);
v_sourceString_1892_ = lean_ctor_get(v_x2_1890_, 2);
v_imports_1893_ = lean_ctor_get(v_x2_1890_, 3);
v_currNamespace_1894_ = lean_ctor_get(v_x2_1890_, 4);
v_openDecls_1895_ = lean_ctor_get(v_x2_1890_, 5);
v_options_1896_ = lean_ctor_get(v_x2_1890_, 6);
v_check_1897_ = lean_ctor_get(v_x2_1890_, 7);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_x2_1890_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v_x2_1890_, 0);
lean_dec(v_unused_1916_);
v___x_1899_ = v_x2_1890_;
v_isShared_1900_ = v_isSharedCheck_1915_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_check_1897_);
lean_inc(v_options_1896_);
lean_inc(v_openDecls_1895_);
lean_inc(v_currNamespace_1894_);
lean_inc(v_imports_1893_);
lean_inc(v_sourceString_1892_);
lean_inc(v_index_1891_);
lean_dec(v_x2_1890_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1915_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1901_; lean_object* v_toEnvExtension_1902_; lean_object* v_addEntryFn_1903_; lean_object* v_asyncMode_1904_; uint8_t v_logWrites_1905_; lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1901_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_1902_ = lean_ctor_get(v___x_1901_, 0);
v_addEntryFn_1903_ = lean_ctor_get(v___x_1901_, 3);
v_asyncMode_1904_ = lean_ctor_get(v_toEnvExtension_1902_, 2);
v_logWrites_1905_ = lean_ctor_get_uint8(v_toEnvExtension_1902_, sizeof(void*)*6);
v___x_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1906_, 0, v_size_1887_);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 0, v___x_1906_);
v___x_1908_ = v___x_1899_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1906_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v_index_1891_);
lean_ctor_set(v_reuseFailAlloc_1914_, 2, v_sourceString_1892_);
lean_ctor_set(v_reuseFailAlloc_1914_, 3, v_imports_1893_);
lean_ctor_set(v_reuseFailAlloc_1914_, 4, v_currNamespace_1894_);
lean_ctor_set(v_reuseFailAlloc_1914_, 5, v_openDecls_1895_);
lean_ctor_set(v_reuseFailAlloc_1914_, 6, v_options_1896_);
lean_ctor_set(v_reuseFailAlloc_1914_, 7, v_check_1897_);
v___x_1908_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
lean_object* v___f_1909_; lean_object* v___x_1910_; 
lean_inc(v_addEntryFn_1903_);
v___f_1909_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1909_, 0, v_addEntryFn_1903_);
lean_closure_set(v___f_1909_, 1, v___x_1908_);
v___x_1910_ = lean_box(0);
if (v_logWrites_1905_ == 0)
{
lean_object* v___x_1911_; 
lean_inc_ref(v_toEnvExtension_1902_);
v___x_1911_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1902_, v_x1_1889_, v___f_1909_, v_asyncMode_1904_, v___x_1910_, v___x_1888_);
return v___x_1911_;
}
else
{
lean_object* v___x_1912_; lean_object* v___x_1913_; 
lean_inc_ref_n(v_toEnvExtension_1902_, 2);
v___x_1912_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1902_, v_x1_1889_);
lean_dec_ref(v_x1_1889_);
v___x_1913_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1902_, v___x_1912_, v___f_1909_, v_asyncMode_1904_, v___x_1910_, v___x_1888_);
return v___x_1913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___boxed(lean_object* v_size_1917_, lean_object* v___x_1918_, lean_object* v_x1_1919_, lean_object* v_x2_1920_){
_start:
{
uint8_t v___x_305__boxed_1921_; lean_object* v_res_1922_; 
v___x_305__boxed_1921_ = lean_unbox(v___x_1918_);
v_res_1922_ = l_Lean_addVersoModDocStringCore___redArg___lam__1(v_size_1917_, v___x_305__boxed_1921_, v_x1_1919_, v_x2_1920_);
return v_res_1922_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1924_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0));
v___x_1925_ = l_Lean_stringToMessageData(v___x_1924_);
return v___x_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object* v_docs_1926_, lean_object* v_inst_1927_, lean_object* v_inst_1928_, lean_object* v_deferred_1929_, lean_object* v_inst_1930_, lean_object* v___f_1931_, lean_object* v_____do__lift_1932_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = l_Lean_addVersoModuleDocSnippet(v_____do__lift_1932_, v_docs_1926_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
lean_dec_ref(v___f_1931_);
lean_dec_ref(v_inst_1930_);
lean_dec_ref(v_deferred_1929_);
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1934_);
lean_dec_ref_known(v___x_1933_, 1);
v___x_1935_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_1936_ = l_Lean_stringToMessageData(v_a_1934_);
v___x_1937_ = l_Lean_indentD(v___x_1936_);
v___x_1938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1935_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = l_Lean_throwError___redArg(v_inst_1927_, v_inst_1928_, v___x_1938_);
return v___x_1939_;
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; uint8_t v___x_1944_; 
lean_dec_ref(v_inst_1928_);
lean_dec_ref(v_inst_1927_);
v_a_1940_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1933_, 1);
v___x_1941_ = lean_unsigned_to_nat(0u);
v___x_1942_ = lean_array_get_size(v_deferred_1929_);
v___x_1943_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__9));
v___x_1944_ = lean_nat_dec_lt(v___x_1941_, v___x_1942_);
if (v___x_1944_ == 0)
{
lean_object* v___x_1945_; 
lean_dec_ref(v___f_1931_);
lean_dec_ref(v_deferred_1929_);
v___x_1945_ = l_Lean_setEnv___redArg(v_inst_1930_, v_a_1940_);
return v___x_1945_;
}
else
{
size_t v___x_1946_; size_t v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1946_ = ((size_t)0ULL);
v___x_1947_ = lean_usize_of_nat(v___x_1942_);
v___x_1948_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1943_, v___f_1931_, v_deferred_1929_, v___x_1946_, v___x_1947_, v_a_1940_);
v___x_1949_ = l_Lean_setEnv___redArg(v_inst_1930_, v___x_1948_);
return v___x_1949_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2(uint8_t v___x_1950_, lean_object* v_docs_1951_, lean_object* v_inst_1952_, lean_object* v_inst_1953_, lean_object* v_deferred_1954_, lean_object* v_inst_1955_, lean_object* v_toBind_1956_, lean_object* v_getEnv_1957_, lean_object* v_____do__lift_1958_){
_start:
{
lean_object* v___x_1959_; lean_object* v_size_1960_; lean_object* v___x_1961_; lean_object* v___f_1962_; lean_object* v___f_1963_; lean_object* v___x_1964_; 
v___x_1959_ = l_Lean_getMainVersoModuleDocs(v_____do__lift_1958_);
v_size_1960_ = lean_ctor_get(v___x_1959_, 2);
lean_inc(v_size_1960_);
lean_dec_ref(v___x_1959_);
v___x_1961_ = lean_box(v___x_1950_);
v___f_1962_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1962_, 0, v_size_1960_);
lean_closure_set(v___f_1962_, 1, v___x_1961_);
v___f_1963_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__0), 7, 6);
lean_closure_set(v___f_1963_, 0, v_docs_1951_);
lean_closure_set(v___f_1963_, 1, v_inst_1952_);
lean_closure_set(v___f_1963_, 2, v_inst_1953_);
lean_closure_set(v___f_1963_, 3, v_deferred_1954_);
lean_closure_set(v___f_1963_, 4, v_inst_1955_);
lean_closure_set(v___f_1963_, 5, v___f_1962_);
v___x_1964_ = lean_apply_4(v_toBind_1956_, lean_box(0), lean_box(0), v_getEnv_1957_, v___f_1963_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__2___boxed(lean_object* v___x_1965_, lean_object* v_docs_1966_, lean_object* v_inst_1967_, lean_object* v_inst_1968_, lean_object* v_deferred_1969_, lean_object* v_inst_1970_, lean_object* v_toBind_1971_, lean_object* v_getEnv_1972_, lean_object* v_____do__lift_1973_){
_start:
{
uint8_t v___x_416__boxed_1974_; lean_object* v_res_1975_; 
v___x_416__boxed_1974_ = lean_unbox(v___x_1965_);
v_res_1975_ = l_Lean_addVersoModDocStringCore___redArg___lam__2(v___x_416__boxed_1974_, v_docs_1966_, v_inst_1967_, v_inst_1968_, v_deferred_1969_, v_inst_1970_, v_toBind_1971_, v_getEnv_1972_, v_____do__lift_1973_);
return v_res_1975_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__0));
v___x_1978_ = l_Lean_stringToMessageData(v___x_1977_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__3(lean_object* v_inst_1979_, lean_object* v_inst_1980_, lean_object* v_docs_1981_, lean_object* v_deferred_1982_, lean_object* v_inst_1983_, lean_object* v_toBind_1984_, lean_object* v_getEnv_1985_, lean_object* v_____do__lift_1986_){
_start:
{
lean_object* v___x_1987_; uint8_t v___x_1988_; 
v___x_1987_ = l_Lean_getMainModuleDoc(v_____do__lift_1986_);
v___x_1988_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_1987_);
lean_dec_ref(v___x_1987_);
if (v___x_1988_ == 0)
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
lean_dec(v_getEnv_1985_);
lean_dec(v_toBind_1984_);
lean_dec_ref(v_inst_1983_);
lean_dec_ref(v_deferred_1982_);
lean_dec_ref(v_docs_1981_);
v___x_1989_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1);
v___x_1990_ = l_Lean_throwError___redArg(v_inst_1979_, v_inst_1980_, v___x_1989_);
return v___x_1990_;
}
else
{
lean_object* v___x_1991_; lean_object* v___f_1992_; lean_object* v___x_1993_; 
v___x_1991_ = lean_box(v___x_1988_);
lean_inc(v_getEnv_1985_);
lean_inc(v_toBind_1984_);
v___f_1992_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_1992_, 0, v___x_1991_);
lean_closure_set(v___f_1992_, 1, v_docs_1981_);
lean_closure_set(v___f_1992_, 2, v_inst_1979_);
lean_closure_set(v___f_1992_, 3, v_inst_1980_);
lean_closure_set(v___f_1992_, 4, v_deferred_1982_);
lean_closure_set(v___f_1992_, 5, v_inst_1983_);
lean_closure_set(v___f_1992_, 6, v_toBind_1984_);
lean_closure_set(v___f_1992_, 7, v_getEnv_1985_);
v___x_1993_ = lean_apply_4(v_toBind_1984_, lean_box(0), lean_box(0), v_getEnv_1985_, v___f_1992_);
return v___x_1993_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object* v_inst_1994_, lean_object* v_inst_1995_, lean_object* v_inst_1996_, lean_object* v_docs_1997_, lean_object* v_deferred_1998_){
_start:
{
lean_object* v_toBind_1999_; lean_object* v_getEnv_2000_; lean_object* v___f_2001_; lean_object* v___x_2002_; 
v_toBind_1999_ = lean_ctor_get(v_inst_1994_, 1);
lean_inc_n(v_toBind_1999_, 2);
v_getEnv_2000_ = lean_ctor_get(v_inst_1995_, 0);
lean_inc_n(v_getEnv_2000_, 2);
v___f_2001_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__3), 8, 7);
lean_closure_set(v___f_2001_, 0, v_inst_1994_);
lean_closure_set(v___f_2001_, 1, v_inst_1996_);
lean_closure_set(v___f_2001_, 2, v_docs_1997_);
lean_closure_set(v___f_2001_, 3, v_deferred_1998_);
lean_closure_set(v___f_2001_, 4, v_inst_1995_);
lean_closure_set(v___f_2001_, 5, v_toBind_1999_);
lean_closure_set(v___f_2001_, 6, v_getEnv_2000_);
v___x_2002_ = lean_apply_4(v_toBind_1999_, lean_box(0), lean_box(0), v_getEnv_2000_, v___f_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object* v_m_2003_, lean_object* v_inst_2004_, lean_object* v_inst_2005_, lean_object* v_inst_2006_, lean_object* v_inst_2007_, lean_object* v_docs_2008_, lean_object* v_deferred_2009_){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lean_addVersoModDocStringCore___redArg(v_inst_2004_, v_inst_2005_, v_inst_2007_, v_docs_2008_, v_deferred_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object* v_m_2011_, lean_object* v_inst_2012_, lean_object* v_inst_2013_, lean_object* v_inst_2014_, lean_object* v_inst_2015_, lean_object* v_docs_2016_, lean_object* v_deferred_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l_Lean_addVersoModDocStringCore(v_m_2011_, v_inst_2012_, v_inst_2013_, v_inst_2014_, v_inst_2015_, v_docs_2016_, v_deferred_2017_);
lean_dec(v_inst_2014_);
return v_res_2018_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_box(1);
v___x_2020_ = l_Lean_MessageData_ofFormat(v___x_2019_);
return v___x_2020_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2024_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__2));
v___x_2025_ = l_Lean_MessageData_ofFormat(v___x_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3(lean_object* v_x_2026_, lean_object* v_x_2027_){
_start:
{
if (lean_obj_tag(v_x_2027_) == 0)
{
return v_x_2026_;
}
else
{
lean_object* v_head_2028_; lean_object* v_tail_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2051_; 
v_head_2028_ = lean_ctor_get(v_x_2027_, 0);
v_tail_2029_ = lean_ctor_get(v_x_2027_, 1);
v_isSharedCheck_2051_ = !lean_is_exclusive(v_x_2027_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2031_ = v_x_2027_;
v_isShared_2032_ = v_isSharedCheck_2051_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_tail_2029_);
lean_inc(v_head_2028_);
lean_dec(v_x_2027_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2051_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v_before_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2049_; 
v_before_2033_ = lean_ctor_get(v_head_2028_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v_head_2028_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; 
v_unused_2050_ = lean_ctor_get(v_head_2028_, 1);
lean_dec(v_unused_2050_);
v___x_2035_ = v_head_2028_;
v_isShared_2036_ = v_isSharedCheck_2049_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_before_2033_);
lean_dec(v_head_2028_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2049_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; lean_object* v___x_2039_; 
v___x_2037_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0);
if (v_isShared_2036_ == 0)
{
lean_ctor_set_tag(v___x_2035_, 7);
lean_ctor_set(v___x_2035_, 1, v___x_2037_);
lean_ctor_set(v___x_2035_, 0, v_x_2026_);
v___x_2039_ = v___x_2035_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_x_2026_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v___x_2037_);
v___x_2039_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
lean_object* v___x_2040_; lean_object* v___x_2042_; 
v___x_2040_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__3);
if (v_isShared_2032_ == 0)
{
lean_ctor_set_tag(v___x_2031_, 7);
lean_ctor_set(v___x_2031_, 1, v___x_2040_);
lean_ctor_set(v___x_2031_, 0, v___x_2039_);
v___x_2042_ = v___x_2031_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2039_);
lean_ctor_set(v_reuseFailAlloc_2047_, 1, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = l_Lean_MessageData_ofSyntax(v_before_2033_);
v___x_2044_ = l_Lean_indentD(v___x_2043_);
v___x_2045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2042_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
v_x_2026_ = v___x_2045_;
v_x_2027_ = v_tail_2029_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2055_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__1));
v___x_2056_ = l_Lean_MessageData_ofFormat(v___x_2055_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg(lean_object* v_msgData_2057_, lean_object* v_macroStack_2058_, lean_object* v___y_2059_){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; uint8_t v___x_2063_; 
v___x_2061_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2059_);
v___x_2062_ = l_Lean_Elab_pp_macroStack;
v___x_2063_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v___x_2061_, v___x_2062_);
lean_dec_ref(v___x_2061_);
if (v___x_2063_ == 0)
{
lean_object* v___x_2064_; 
lean_dec(v_macroStack_2058_);
v___x_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2064_, 0, v_msgData_2057_);
return v___x_2064_;
}
else
{
if (lean_obj_tag(v_macroStack_2058_) == 0)
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2065_, 0, v_msgData_2057_);
return v___x_2065_;
}
else
{
lean_object* v_head_2066_; lean_object* v_after_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2082_; 
v_head_2066_ = lean_ctor_get(v_macroStack_2058_, 0);
lean_inc(v_head_2066_);
v_after_2067_ = lean_ctor_get(v_head_2066_, 1);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_head_2066_);
if (v_isSharedCheck_2082_ == 0)
{
lean_object* v_unused_2083_; 
v_unused_2083_ = lean_ctor_get(v_head_2066_, 0);
lean_dec(v_unused_2083_);
v___x_2069_ = v_head_2066_;
v_isShared_2070_ = v_isSharedCheck_2082_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_after_2067_);
lean_dec(v_head_2066_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2082_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2071_; lean_object* v___x_2073_; 
v___x_2071_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3___closed__0);
if (v_isShared_2070_ == 0)
{
lean_ctor_set_tag(v___x_2069_, 7);
lean_ctor_set(v___x_2069_, 1, v___x_2071_);
lean_ctor_set(v___x_2069_, 0, v_msgData_2057_);
v___x_2073_ = v___x_2069_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_msgData_2057_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v___x_2071_);
v___x_2073_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v_msgData_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2074_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___closed__2);
v___x_2075_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2073_);
lean_ctor_set(v___x_2075_, 1, v___x_2074_);
v___x_2076_ = l_Lean_MessageData_ofSyntax(v_after_2067_);
v___x_2077_ = l_Lean_indentD(v___x_2076_);
v_msgData_2078_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2078_, 0, v___x_2075_);
lean_ctor_set(v_msgData_2078_, 1, v___x_2077_);
v___x_2079_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2_spec__3(v_msgData_2078_, v_macroStack_2058_);
v___x_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
return v___x_2080_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_2084_, lean_object* v_macroStack_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg(v_msgData_2084_, v_macroStack_2085_, v___y_2086_);
lean_dec_ref(v___y_2086_);
return v_res_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(lean_object* v_msg_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v_ref_2097_; lean_object* v_macroStack_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v_a_2101_; lean_object* v___x_2102_; lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2111_; 
v_ref_2097_ = lean_ctor_get(v___y_2094_, 2);
v_macroStack_2098_ = lean_ctor_get(v___y_2090_, 1);
v___x_2099_ = l_Lean_Elab_getBetterRef(v_ref_2097_, v_macroStack_2098_);
v___x_2100_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msg_2089_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_);
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref(v___x_2100_);
lean_inc(v_macroStack_2098_);
v___x_2102_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg(v_a_2101_, v_macroStack_2098_, v___y_2094_);
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2105_ = v___x_2102_;
v_isShared_2106_ = v_isSharedCheck_2111_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2102_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2111_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2099_);
lean_ctor_set(v___x_2107_, 1, v_a_2103_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 1);
lean_ctor_set(v___x_2105_, 0, v___x_2107_);
v___x_2109_ = v___x_2105_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg___boxed(lean_object* v_msg_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v_msg_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_);
lean_dec(v___y_2118_);
lean_dec_ref(v___y_2117_);
lean_dec(v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2114_);
lean_dec_ref(v___y_2113_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___lam__0(lean_object* v_addEntryFn_2121_, lean_object* v___x_2122_, lean_object* v_s_2123_){
_start:
{
lean_object* v_importedEntries_2124_; lean_object* v_state_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2133_; 
v_importedEntries_2124_ = lean_ctor_get(v_s_2123_, 0);
v_state_2125_ = lean_ctor_get(v_s_2123_, 1);
v_isSharedCheck_2133_ = !lean_is_exclusive(v_s_2123_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2127_ = v_s_2123_;
v_isShared_2128_ = v_isSharedCheck_2133_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_state_2125_);
lean_inc(v_importedEntries_2124_);
lean_dec(v_s_2123_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2133_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v_state_2129_; lean_object* v___x_2131_; 
v_state_2129_ = lean_apply_2(v_addEntryFn_2121_, v_state_2125_, v___x_2122_);
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 1, v_state_2129_);
v___x_2131_ = v___x_2127_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_importedEntries_2124_);
lean_ctor_set(v_reuseFailAlloc_2132_, 1, v_state_2129_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(lean_object* v_declName_2134_, lean_object* v_as_2135_, size_t v_i_2136_, size_t v_stop_2137_, lean_object* v_b_2138_){
_start:
{
lean_object* v___y_2140_; uint8_t v___x_2144_; 
v___x_2144_ = lean_usize_dec_eq(v_i_2136_, v_stop_2137_);
if (v___x_2144_ == 0)
{
lean_object* v___x_2145_; lean_object* v_index_2146_; lean_object* v_sourceString_2147_; lean_object* v_imports_2148_; lean_object* v_currNamespace_2149_; lean_object* v_openDecls_2150_; lean_object* v_options_2151_; lean_object* v_check_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2171_; 
v___x_2145_ = lean_array_uget(v_as_2135_, v_i_2136_);
v_index_2146_ = lean_ctor_get(v___x_2145_, 1);
v_sourceString_2147_ = lean_ctor_get(v___x_2145_, 2);
v_imports_2148_ = lean_ctor_get(v___x_2145_, 3);
v_currNamespace_2149_ = lean_ctor_get(v___x_2145_, 4);
v_openDecls_2150_ = lean_ctor_get(v___x_2145_, 5);
v_options_2151_ = lean_ctor_get(v___x_2145_, 6);
v_check_2152_ = lean_ctor_get(v___x_2145_, 7);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2171_ == 0)
{
lean_object* v_unused_2172_; 
v_unused_2172_ = lean_ctor_get(v___x_2145_, 0);
lean_dec(v_unused_2172_);
v___x_2154_ = v___x_2145_;
v_isShared_2155_ = v_isSharedCheck_2171_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_check_2152_);
lean_inc(v_options_2151_);
lean_inc(v_openDecls_2150_);
lean_inc(v_currNamespace_2149_);
lean_inc(v_imports_2148_);
lean_inc(v_sourceString_2147_);
lean_inc(v_index_2146_);
lean_dec(v___x_2145_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2171_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2156_; lean_object* v_toEnvExtension_2157_; lean_object* v_addEntryFn_2158_; lean_object* v_asyncMode_2159_; uint8_t v_logWrites_2160_; lean_object* v___x_2161_; lean_object* v___x_2163_; 
v___x_2156_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_2157_ = lean_ctor_get(v___x_2156_, 0);
v_addEntryFn_2158_ = lean_ctor_get(v___x_2156_, 3);
v_asyncMode_2159_ = lean_ctor_get(v_toEnvExtension_2157_, 2);
v_logWrites_2160_ = lean_ctor_get_uint8(v_toEnvExtension_2157_, sizeof(void*)*6);
lean_inc(v_declName_2134_);
v___x_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2161_, 0, v_declName_2134_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2161_);
v___x_2163_ = v___x_2154_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v___x_2161_);
lean_ctor_set(v_reuseFailAlloc_2170_, 1, v_index_2146_);
lean_ctor_set(v_reuseFailAlloc_2170_, 2, v_sourceString_2147_);
lean_ctor_set(v_reuseFailAlloc_2170_, 3, v_imports_2148_);
lean_ctor_set(v_reuseFailAlloc_2170_, 4, v_currNamespace_2149_);
lean_ctor_set(v_reuseFailAlloc_2170_, 5, v_openDecls_2150_);
lean_ctor_set(v_reuseFailAlloc_2170_, 6, v_options_2151_);
lean_ctor_set(v_reuseFailAlloc_2170_, 7, v_check_2152_);
v___x_2163_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___f_2164_; lean_object* v___x_2165_; uint8_t v___x_2166_; 
lean_inc(v_addEntryFn_2158_);
v___f_2164_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_2164_, 0, v_addEntryFn_2158_);
lean_closure_set(v___f_2164_, 1, v___x_2163_);
v___x_2165_ = lean_box(0);
v___x_2166_ = 1;
if (v_logWrites_2160_ == 0)
{
lean_object* v___x_2167_; 
lean_inc_ref(v_toEnvExtension_2157_);
v___x_2167_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2157_, v_b_2138_, v___f_2164_, v_asyncMode_2159_, v___x_2165_, v___x_2166_);
v___y_2140_ = v___x_2167_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2168_; lean_object* v___x_2169_; 
lean_inc_ref_n(v_toEnvExtension_2157_, 2);
v___x_2168_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2157_, v_b_2138_);
lean_dec_ref(v_b_2138_);
v___x_2169_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2157_, v___x_2168_, v___f_2164_, v_asyncMode_2159_, v___x_2165_, v___x_2166_);
v___y_2140_ = v___x_2169_;
goto v___jp_2139_;
}
}
}
}
else
{
lean_dec(v_declName_2134_);
return v_b_2138_;
}
v___jp_2139_:
{
size_t v___x_2141_; size_t v___x_2142_; 
v___x_2141_ = ((size_t)1ULL);
v___x_2142_ = lean_usize_add(v_i_2136_, v___x_2141_);
v_i_2136_ = v___x_2142_;
v_b_2138_ = v___y_2140_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___boxed(lean_object* v_declName_2173_, lean_object* v_as_2174_, lean_object* v_i_2175_, lean_object* v_stop_2176_, lean_object* v_b_2177_){
_start:
{
size_t v_i_boxed_2178_; size_t v_stop_boxed_2179_; lean_object* v_res_2180_; 
v_i_boxed_2178_ = lean_unbox_usize(v_i_2175_);
lean_dec(v_i_2175_);
v_stop_boxed_2179_ = lean_unbox_usize(v_stop_2176_);
lean_dec(v_stop_2176_);
v_res_2180_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(v_declName_2173_, v_as_2174_, v_i_boxed_2178_, v_stop_boxed_2179_, v_b_2177_);
lean_dec_ref(v_as_2174_);
return v_res_2180_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2181_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_parseVersoDocString_spec__0_spec__0___closed__0);
v___x_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
return v___x_2182_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2183_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
return v___x_2184_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2185_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2186_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
lean_ctor_set(v___x_2186_, 2, v___x_2185_);
lean_ctor_set(v___x_2186_, 3, v___x_2185_);
lean_ctor_set(v___x_2186_, 4, v___x_2185_);
lean_ctor_set(v___x_2186_, 5, v___x_2185_);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object* v_declName_2187_, lean_object* v_docs_2188_, lean_object* v_deferred_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_){
_start:
{
lean_object* v___y_2198_; lean_object* v___y_2199_; lean_object* v___y_2200_; lean_object* v___y_2201_; lean_object* v___y_2202_; lean_object* v___y_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2206_; lean_object* v___y_2207_; lean_object* v___y_2208_; uint8_t v___x_2230_; 
v___x_2230_ = l_Lean_Name_isAnonymous(v_declName_2187_);
if (v___x_2230_ == 0)
{
uint8_t v___x_2231_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___x_2253_; lean_object* v_env_2254_; lean_object* v___x_2255_; 
v___x_2231_ = 1;
v___x_2253_ = lean_st_ref_get(v___y_2195_);
v_env_2254_ = lean_ctor_get(v___x_2253_, 0);
lean_inc_ref(v_env_2254_);
lean_dec(v___x_2253_);
v___x_2255_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2254_, v_declName_2187_);
lean_dec_ref(v_env_2254_);
if (lean_obj_tag(v___x_2255_) == 0)
{
v___y_2233_ = v___y_2193_;
v___y_2234_ = v___y_2195_;
goto v___jp_2232_;
}
else
{
lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2269_; 
lean_dec_ref(v_docs_2188_);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2269_ == 0)
{
lean_object* v_unused_2270_; 
v_unused_2270_ = lean_ctor_get(v___x_2255_, 0);
lean_dec(v_unused_2270_);
v___x_2257_ = v___x_2255_;
v_isShared_2258_ = v_isSharedCheck_2269_;
goto v_resetjp_2256_;
}
else
{
lean_dec(v___x_2255_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2269_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2259_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0));
v___x_2260_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2187_, v___x_2231_);
v___x_2261_ = lean_string_append(v___x_2259_, v___x_2260_);
lean_dec_ref(v___x_2260_);
v___x_2262_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1));
v___x_2263_ = lean_string_append(v___x_2261_, v___x_2262_);
if (v_isShared_2258_ == 0)
{
lean_ctor_set_tag(v___x_2257_, 3);
lean_ctor_set(v___x_2257_, 0, v___x_2263_);
v___x_2265_ = v___x_2257_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = l_Lean_MessageData_ofFormat(v___x_2265_);
v___x_2267_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_2266_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
return v___x_2267_;
}
}
}
v___jp_2232_:
{
lean_object* v___x_2235_; lean_object* v_env_2236_; lean_object* v_nextMacroScope_2237_; lean_object* v_ngen_2238_; lean_object* v_auxDeclNGen_2239_; lean_object* v_traceState_2240_; lean_object* v_recordedDeps_2241_; lean_object* v_messages_2242_; lean_object* v_infoState_2243_; lean_object* v_snapshotTasks_2244_; lean_object* v___x_2245_; lean_object* v_env_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; uint8_t v___x_2249_; 
v___x_2235_ = lean_st_ref_take(v___y_2234_);
v_env_2236_ = lean_ctor_get(v___x_2235_, 0);
lean_inc_ref(v_env_2236_);
v_nextMacroScope_2237_ = lean_ctor_get(v___x_2235_, 1);
lean_inc(v_nextMacroScope_2237_);
v_ngen_2238_ = lean_ctor_get(v___x_2235_, 2);
lean_inc_ref(v_ngen_2238_);
v_auxDeclNGen_2239_ = lean_ctor_get(v___x_2235_, 3);
lean_inc_ref(v_auxDeclNGen_2239_);
v_traceState_2240_ = lean_ctor_get(v___x_2235_, 4);
lean_inc_ref(v_traceState_2240_);
v_recordedDeps_2241_ = lean_ctor_get(v___x_2235_, 6);
lean_inc_ref(v_recordedDeps_2241_);
v_messages_2242_ = lean_ctor_get(v___x_2235_, 7);
lean_inc_ref(v_messages_2242_);
v_infoState_2243_ = lean_ctor_get(v___x_2235_, 8);
lean_inc_ref(v_infoState_2243_);
v_snapshotTasks_2244_ = lean_ctor_get(v___x_2235_, 9);
lean_inc_ref(v_snapshotTasks_2244_);
lean_dec(v___x_2235_);
v___x_2245_ = l_Lean_versoDocStringExt;
lean_inc(v_declName_2187_);
v_env_2246_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2245_, v_env_2236_, v_declName_2187_, v_docs_2188_, v___x_2231_);
v___x_2247_ = lean_unsigned_to_nat(0u);
v___x_2248_ = lean_array_get_size(v_deferred_2189_);
v___x_2249_ = lean_nat_dec_lt(v___x_2247_, v___x_2248_);
if (v___x_2249_ == 0)
{
lean_dec(v_declName_2187_);
v___y_2198_ = v_auxDeclNGen_2239_;
v___y_2199_ = v_messages_2242_;
v___y_2200_ = v_nextMacroScope_2237_;
v___y_2201_ = v_snapshotTasks_2244_;
v___y_2202_ = v_traceState_2240_;
v___y_2203_ = v___y_2233_;
v___y_2204_ = v___y_2234_;
v___y_2205_ = v_ngen_2238_;
v___y_2206_ = v_infoState_2243_;
v___y_2207_ = v_recordedDeps_2241_;
v___y_2208_ = v_env_2246_;
goto v___jp_2197_;
}
else
{
size_t v___x_2250_; size_t v___x_2251_; lean_object* v___x_2252_; 
v___x_2250_ = ((size_t)0ULL);
v___x_2251_ = lean_usize_of_nat(v___x_2248_);
v___x_2252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0(v_declName_2187_, v_deferred_2189_, v___x_2250_, v___x_2251_, v_env_2246_);
v___y_2198_ = v_auxDeclNGen_2239_;
v___y_2199_ = v_messages_2242_;
v___y_2200_ = v_nextMacroScope_2237_;
v___y_2201_ = v_snapshotTasks_2244_;
v___y_2202_ = v_traceState_2240_;
v___y_2203_ = v___y_2233_;
v___y_2204_ = v___y_2234_;
v___y_2205_ = v_ngen_2238_;
v___y_2206_ = v_infoState_2243_;
v___y_2207_ = v_recordedDeps_2241_;
v___y_2208_ = v___x_2252_;
goto v___jp_2197_;
}
}
}
else
{
lean_object* v___x_2271_; lean_object* v___x_2272_; 
lean_dec_ref(v_docs_2188_);
lean_dec(v_declName_2187_);
v___x_2271_ = lean_box(0);
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
return v___x_2272_;
}
v___jp_2197_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v_mctx_2213_; lean_object* v_zetaDeltaFVarIds_2214_; lean_object* v_postponed_2215_; lean_object* v_diag_2216_; lean_object* v_rewriteFires_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2228_; 
v___x_2209_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2210_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2210_, 0, v___y_2208_);
lean_ctor_set(v___x_2210_, 1, v___y_2200_);
lean_ctor_set(v___x_2210_, 2, v___y_2205_);
lean_ctor_set(v___x_2210_, 3, v___y_2198_);
lean_ctor_set(v___x_2210_, 4, v___y_2202_);
lean_ctor_set(v___x_2210_, 5, v___x_2209_);
lean_ctor_set(v___x_2210_, 6, v___y_2207_);
lean_ctor_set(v___x_2210_, 7, v___y_2199_);
lean_ctor_set(v___x_2210_, 8, v___y_2206_);
lean_ctor_set(v___x_2210_, 9, v___y_2201_);
v___x_2211_ = lean_st_ref_put(v___y_2204_, v___x_2210_);
v___x_2212_ = lean_st_ref_take(v___y_2203_);
v_mctx_2213_ = lean_ctor_get(v___x_2212_, 0);
v_zetaDeltaFVarIds_2214_ = lean_ctor_get(v___x_2212_, 2);
v_postponed_2215_ = lean_ctor_get(v___x_2212_, 3);
v_diag_2216_ = lean_ctor_get(v___x_2212_, 4);
v_rewriteFires_2217_ = lean_ctor_get(v___x_2212_, 5);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2228_ == 0)
{
lean_object* v_unused_2229_; 
v_unused_2229_ = lean_ctor_get(v___x_2212_, 1);
lean_dec(v_unused_2229_);
v___x_2219_ = v___x_2212_;
v_isShared_2220_ = v_isSharedCheck_2228_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_rewriteFires_2217_);
lean_inc(v_diag_2216_);
lean_inc(v_postponed_2215_);
lean_inc(v_zetaDeltaFVarIds_2214_);
lean_inc(v_mctx_2213_);
lean_dec(v___x_2212_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2228_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2224_; 
v___x_2221_ = lean_box(0);
v___x_2222_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2222_);
v___x_2224_ = v___x_2219_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_mctx_2213_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v___x_2222_);
lean_ctor_set(v_reuseFailAlloc_2227_, 2, v_zetaDeltaFVarIds_2214_);
lean_ctor_set(v_reuseFailAlloc_2227_, 3, v_postponed_2215_);
lean_ctor_set(v_reuseFailAlloc_2227_, 4, v_diag_2216_);
lean_ctor_set(v_reuseFailAlloc_2227_, 5, v_rewriteFires_2217_);
v___x_2224_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2225_ = lean_st_ref_put(v___y_2203_, v___x_2224_);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2221_);
return v___x_2226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object* v_declName_2273_, lean_object* v_docs_2274_, lean_object* v_deferred_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2273_, v_docs_2274_, v_deferred_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec_ref(v_deferred_2275_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object* v_declName_2284_, lean_object* v_binders_2285_, lean_object* v_docComment_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v___y_2295_; lean_object* v___y_2296_; lean_object* v___y_2297_; lean_object* v___y_2298_; lean_object* v___y_2299_; lean_object* v___y_2300_; lean_object* v___x_2314_; lean_object* v_env_2315_; lean_object* v___x_2316_; 
v___x_2314_ = lean_st_ref_get(v_a_2292_);
v_env_2315_ = lean_ctor_get(v___x_2314_, 0);
lean_inc_ref(v_env_2315_);
lean_dec(v___x_2314_);
v___x_2316_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2315_, v_declName_2284_);
lean_dec_ref(v_env_2315_);
if (lean_obj_tag(v___x_2316_) == 0)
{
v___y_2295_ = v_a_2287_;
v___y_2296_ = v_a_2288_;
v___y_2297_ = v_a_2289_;
v___y_2298_ = v_a_2290_;
v___y_2299_ = v_a_2291_;
v___y_2300_ = v_a_2292_;
goto v___jp_2294_;
}
else
{
lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2331_; 
lean_dec(v_binders_2285_);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2331_ == 0)
{
lean_object* v_unused_2332_; 
v_unused_2332_ = lean_ctor_get(v___x_2316_, 0);
lean_dec(v_unused_2332_);
v___x_2318_ = v___x_2316_;
v_isShared_2319_ = v_isSharedCheck_2331_;
goto v_resetjp_2317_;
}
else
{
lean_dec(v___x_2316_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2331_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2320_; uint8_t v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2327_; 
v___x_2320_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0));
v___x_2321_ = 1;
v___x_2322_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2284_, v___x_2321_);
v___x_2323_ = lean_string_append(v___x_2320_, v___x_2322_);
lean_dec_ref(v___x_2322_);
v___x_2324_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1));
v___x_2325_ = lean_string_append(v___x_2323_, v___x_2324_);
if (v_isShared_2319_ == 0)
{
lean_ctor_set_tag(v___x_2318_, 3);
lean_ctor_set(v___x_2318_, 0, v___x_2325_);
v___x_2327_ = v___x_2318_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v___x_2325_);
v___x_2327_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = l_Lean_MessageData_ofFormat(v___x_2327_);
v___x_2329_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_2328_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_, v_a_2292_);
return v___x_2329_;
}
}
}
v___jp_2294_:
{
lean_object* v___x_2301_; 
lean_inc(v_declName_2284_);
v___x_2301_ = l_Lean_versoDocString(v_declName_2284_, v_binders_2285_, v_docComment_2286_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v_a_2302_; lean_object* v_toVersoDocString_2303_; lean_object* v_deferredChecks_2304_; lean_object* v___x_2305_; 
v_a_2302_ = lean_ctor_get(v___x_2301_, 0);
lean_inc(v_a_2302_);
lean_dec_ref_known(v___x_2301_, 1);
v_toVersoDocString_2303_ = lean_ctor_get(v_a_2302_, 0);
lean_inc_ref(v_toVersoDocString_2303_);
v_deferredChecks_2304_ = lean_ctor_get(v_a_2302_, 1);
lean_inc_ref(v_deferredChecks_2304_);
lean_dec(v_a_2302_);
v___x_2305_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2284_, v_toVersoDocString_2303_, v_deferredChecks_2304_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec_ref(v_deferredChecks_2304_);
return v___x_2305_;
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec(v_declName_2284_);
v_a_2306_ = lean_ctor_get(v___x_2301_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2301_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2301_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object* v_declName_2333_, lean_object* v_binders_2334_, lean_object* v_docComment_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Lean_addVersoDocString(v_declName_2333_, v_binders_2334_, v_docComment_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_);
lean_dec(v_a_2341_);
lean_dec_ref(v_a_2340_);
lean_dec(v_a_2339_);
lean_dec_ref(v_a_2338_);
lean_dec(v_a_2337_);
lean_dec_ref(v_a_2336_);
lean_dec(v_docComment_2335_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1(lean_object* v_00_u03b1_2344_, lean_object* v_msg_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_){
_start:
{
lean_object* v___x_2353_; 
v___x_2353_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v_msg_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___boxed(lean_object* v_00_u03b1_2354_, lean_object* v_msg_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1(v_00_u03b1_2354_, v_msg_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2(lean_object* v_msgData_2364_, lean_object* v_macroStack_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_){
_start:
{
lean_object* v___x_2373_; 
v___x_2373_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___redArg(v_msgData_2364_, v_macroStack_2365_, v___y_2370_);
return v___x_2373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2___boxed(lean_object* v_msgData_2374_, lean_object* v_macroStack_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_addVersoDocString_spec__1_spec__2(v_msgData_2374_, v_macroStack_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec_ref(v___y_2378_);
lean_dec(v___y_2377_);
lean_dec_ref(v___y_2376_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object* v_declName_2384_, lean_object* v_docComment_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_){
_start:
{
lean_object* v___y_2394_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___x_2413_; lean_object* v_env_2414_; lean_object* v___x_2415_; 
v___x_2413_ = lean_st_ref_get(v_a_2391_);
v_env_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc_ref(v_env_2414_);
lean_dec(v___x_2413_);
v___x_2415_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2414_, v_declName_2384_);
lean_dec_ref(v_env_2414_);
if (lean_obj_tag(v___x_2415_) == 0)
{
v___y_2394_ = v_a_2386_;
v___y_2395_ = v_a_2387_;
v___y_2396_ = v_a_2388_;
v___y_2397_ = v_a_2389_;
v___y_2398_ = v_a_2390_;
v___y_2399_ = v_a_2391_;
goto v___jp_2393_;
}
else
{
lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2430_; 
lean_dec_ref(v_docComment_2385_);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2430_ == 0)
{
lean_object* v_unused_2431_; 
v_unused_2431_ = lean_ctor_get(v___x_2415_, 0);
lean_dec(v_unused_2431_);
v___x_2417_ = v___x_2415_;
v_isShared_2418_ = v_isSharedCheck_2430_;
goto v_resetjp_2416_;
}
else
{
lean_dec(v___x_2415_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2430_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2419_; uint8_t v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2426_; 
v___x_2419_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__0));
v___x_2420_ = 1;
v___x_2421_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2384_, v___x_2420_);
v___x_2422_ = lean_string_append(v___x_2419_, v___x_2421_);
lean_dec_ref(v___x_2421_);
v___x_2423_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__4___closed__1));
v___x_2424_ = lean_string_append(v___x_2422_, v___x_2423_);
if (v_isShared_2418_ == 0)
{
lean_ctor_set_tag(v___x_2417_, 3);
lean_ctor_set(v___x_2417_, 0, v___x_2424_);
v___x_2426_ = v___x_2417_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v___x_2424_);
v___x_2426_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = l_Lean_MessageData_ofFormat(v___x_2426_);
v___x_2428_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_2427_, v_a_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_, v_a_2391_);
return v___x_2428_;
}
}
}
v___jp_2393_:
{
lean_object* v___x_2400_; 
lean_inc(v_declName_2384_);
v___x_2400_ = l_Lean_versoDocStringFromString(v_declName_2384_, v_docComment_2385_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v_a_2401_; lean_object* v_toVersoDocString_2402_; lean_object* v_deferredChecks_2403_; lean_object* v___x_2404_; 
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
lean_dec_ref_known(v___x_2400_, 1);
v_toVersoDocString_2402_ = lean_ctor_get(v_a_2401_, 0);
lean_inc_ref(v_toVersoDocString_2402_);
v_deferredChecks_2403_ = lean_ctor_get(v_a_2401_, 1);
lean_inc_ref(v_deferredChecks_2403_);
lean_dec(v_a_2401_);
v___x_2404_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2384_, v_toVersoDocString_2402_, v_deferredChecks_2403_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
lean_dec_ref(v_deferredChecks_2403_);
return v___x_2404_;
}
else
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2412_; 
lean_dec(v_declName_2384_);
v_a_2405_ = lean_ctor_get(v___x_2400_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2407_ = v___x_2400_;
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2400_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2410_; 
if (v_isShared_2408_ == 0)
{
v___x_2410_ = v___x_2407_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_a_2405_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
return v___x_2410_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object* v_declName_2432_, lean_object* v_docComment_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Lean_addVersoDocStringFromString(v_declName_2432_, v_docComment_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_);
lean_dec(v_a_2439_);
lean_dec_ref(v_a_2438_);
lean_dec(v_a_2437_);
lean_dec_ref(v_a_2436_);
lean_dec(v_a_2435_);
lean_dec_ref(v_a_2434_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2442_, lean_object* v_msgData_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
uint8_t v___x_2449_; uint8_t v___x_2450_; lean_object* v___x_2451_; 
v___x_2449_ = 2;
v___x_2450_ = 0;
v___x_2451_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_2442_, v_msgData_2443_, v___x_2449_, v___x_2450_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2452_, lean_object* v_msgData_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_2452_, v_msgData_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v_ref_2452_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object* v___y_2460_, lean_object* v_str_2461_, lean_object* v_as_2462_, size_t v_sz_2463_, size_t v_i_2464_, lean_object* v_b_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v_a_2474_; uint8_t v___x_2478_; 
v___x_2478_ = lean_usize_dec_lt(v_i_2464_, v_sz_2463_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; 
v___x_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2479_, 0, v_b_2465_);
return v___x_2479_;
}
else
{
lean_object* v_a_2480_; lean_object* v_fst_2481_; lean_object* v_snd_2482_; lean_object* v_start_2483_; lean_object* v_stop_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2504_; 
v_a_2480_ = lean_array_uget_borrowed(v_as_2462_, v_i_2464_);
v_fst_2481_ = lean_ctor_get(v_a_2480_, 0);
lean_inc(v_fst_2481_);
v_snd_2482_ = lean_ctor_get(v_a_2480_, 1);
v_start_2483_ = lean_ctor_get(v_fst_2481_, 0);
v_stop_2484_ = lean_ctor_get(v_fst_2481_, 1);
v_isSharedCheck_2504_ = !lean_is_exclusive(v_fst_2481_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2486_ = v_fst_2481_;
v_isShared_2487_ = v_isSharedCheck_2504_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_stop_2484_);
lean_inc(v_start_2483_);
lean_dec(v_fst_2481_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2504_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; 
v___x_2488_ = lean_box(0);
if (lean_obj_tag(v___y_2460_) == 1)
{
lean_object* v_val_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; uint8_t v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2496_; 
v_val_2489_ = lean_ctor_get(v___y_2460_, 0);
v___x_2490_ = lean_nat_add(v_val_2489_, v_start_2483_);
v___x_2491_ = lean_nat_add(v_val_2489_, v_stop_2484_);
v___x_2492_ = 0;
v___x_2493_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2493_, 0, v___x_2490_);
lean_ctor_set(v___x_2493_, 1, v___x_2491_);
lean_ctor_set_uint8(v___x_2493_, sizeof(void*)*2, v___x_2492_);
v___x_2494_ = lean_string_utf8_extract(v_str_2461_, v_start_2483_, v_stop_2484_);
lean_dec(v_stop_2484_);
lean_dec(v_start_2483_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set_tag(v___x_2486_, 2);
lean_ctor_set(v___x_2486_, 1, v___x_2494_);
lean_ctor_set(v___x_2486_, 0, v___x_2493_);
v___x_2496_ = v___x_2486_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v___x_2493_);
lean_ctor_set(v_reuseFailAlloc_2500_, 1, v___x_2494_);
v___x_2496_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
lean_inc(v_snd_2482_);
v___x_2497_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2497_, 0, v_snd_2482_);
v___x_2498_ = l_Lean_MessageData_ofFormat(v___x_2497_);
v___x_2499_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v___x_2496_, v___x_2498_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
lean_dec_ref(v___x_2496_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_dec_ref_known(v___x_2499_, 1);
v_a_2474_ = v___x_2488_;
goto v___jp_2473_;
}
else
{
return v___x_2499_;
}
}
}
else
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
lean_del_object(v___x_2486_);
lean_dec(v_stop_2484_);
lean_dec(v_start_2483_);
lean_inc(v_snd_2482_);
v___x_2501_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2501_, 0, v_snd_2482_);
v___x_2502_ = l_Lean_MessageData_ofFormat(v___x_2501_);
v___x_2503_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_2502_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_dec_ref_known(v___x_2503_, 1);
v_a_2474_ = v___x_2488_;
goto v___jp_2473_;
}
else
{
return v___x_2503_;
}
}
}
}
v___jp_2473_:
{
size_t v___x_2475_; size_t v___x_2476_; 
v___x_2475_ = ((size_t)1ULL);
v___x_2476_ = lean_usize_add(v_i_2464_, v___x_2475_);
v_i_2464_ = v___x_2476_;
v_b_2465_ = v_a_2474_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object* v___y_2505_, lean_object* v_str_2506_, lean_object* v_as_2507_, lean_object* v_sz_2508_, lean_object* v_i_2509_, lean_object* v_b_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
size_t v_sz_boxed_2518_; size_t v_i_boxed_2519_; lean_object* v_res_2520_; 
v_sz_boxed_2518_ = lean_unbox_usize(v_sz_2508_);
lean_dec(v_sz_2508_);
v_i_boxed_2519_ = lean_unbox_usize(v_i_2509_);
lean_dec(v_i_2509_);
v_res_2520_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2505_, v_str_2506_, v_as_2507_, v_sz_boxed_2518_, v_i_boxed_2519_, v_b_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec_ref(v_as_2507_);
lean_dec_ref(v_str_2506_);
lean_dec(v___y_2505_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object* v_docstring_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v_str_2529_; lean_object* v___y_2531_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v_str_2529_ = l_Lean_TSyntax_getDocString(v_docstring_2521_);
v___x_2546_ = lean_unsigned_to_nat(1u);
v___x_2547_ = l_Lean_Syntax_getArg(v_docstring_2521_, v___x_2546_);
v___x_2548_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_2547_);
lean_dec(v___x_2547_);
if (lean_obj_tag(v___x_2548_) == 0)
{
lean_object* v___x_2549_; 
v___x_2549_ = lean_box(0);
v___y_2531_ = v___x_2549_;
goto v___jp_2530_;
}
else
{
lean_object* v_val_2550_; uint8_t v___x_2551_; lean_object* v___x_2552_; 
v_val_2550_ = lean_ctor_get(v___x_2548_, 0);
lean_inc(v_val_2550_);
lean_dec_ref_known(v___x_2548_, 1);
v___x_2551_ = 0;
v___x_2552_ = l_Lean_SourceInfo_getPos_x3f(v_val_2550_, v___x_2551_);
lean_dec(v_val_2550_);
v___y_2531_ = v___x_2552_;
goto v___jp_2530_;
}
v___jp_2530_:
{
lean_object* v___x_2532_; lean_object* v_fst_2533_; lean_object* v___x_2534_; size_t v_sz_2535_; size_t v___x_2536_; lean_object* v___x_2537_; 
lean_inc_ref(v_str_2529_);
v___x_2532_ = l_Lean_rewriteManualLinksCore(v_str_2529_);
v_fst_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_fst_2533_);
lean_dec_ref(v___x_2532_);
v___x_2534_ = lean_box(0);
v_sz_2535_ = lean_array_size(v_fst_2533_);
v___x_2536_ = ((size_t)0ULL);
v___x_2537_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2531_, v_str_2529_, v_fst_2533_, v_sz_2535_, v___x_2536_, v___x_2534_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
lean_dec(v_fst_2533_);
lean_dec_ref(v_str_2529_);
lean_dec(v___y_2531_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2544_; 
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2544_ == 0)
{
lean_object* v_unused_2545_; 
v_unused_2545_ = lean_ctor_get(v___x_2537_, 0);
lean_dec(v_unused_2545_);
v___x_2539_ = v___x_2537_;
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
else
{
lean_dec(v___x_2537_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2542_; 
if (v_isShared_2540_ == 0)
{
lean_ctor_set(v___x_2539_, 0, v___x_2534_);
v___x_2542_ = v___x_2539_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2534_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
else
{
return v___x_2537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object* v_docstring_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docstring_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec(v_docstring_2553_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_2562_, lean_object* v_msg_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_){
_start:
{
lean_object* v_toCold_2571_; lean_object* v_currRecDepth_2572_; lean_object* v_ref_2573_; uint16_t v_optionFlags_2574_; uint8_t v_suppressElabErrors_2575_; uint8_t v_isRecordingDeps_2576_; lean_object* v_ref_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v_toCold_2571_ = lean_ctor_get(v___y_2568_, 0);
v_currRecDepth_2572_ = lean_ctor_get(v___y_2568_, 1);
v_ref_2573_ = lean_ctor_get(v___y_2568_, 2);
v_optionFlags_2574_ = lean_ctor_get_uint16(v___y_2568_, sizeof(void*)*3);
v_suppressElabErrors_2575_ = lean_ctor_get_uint8(v___y_2568_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2576_ = lean_ctor_get_uint8(v___y_2568_, sizeof(void*)*3 + 3);
v_ref_2577_ = l_Lean_replaceRef(v_ref_2562_, v_ref_2573_);
lean_inc(v_currRecDepth_2572_);
lean_inc_ref(v_toCold_2571_);
v___x_2578_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_2578_, 0, v_toCold_2571_);
lean_ctor_set(v___x_2578_, 1, v_currRecDepth_2572_);
lean_ctor_set(v___x_2578_, 2, v_ref_2577_);
lean_ctor_set_uint16(v___x_2578_, sizeof(void*)*3, v_optionFlags_2574_);
lean_ctor_set_uint8(v___x_2578_, sizeof(void*)*3 + 2, v_suppressElabErrors_2575_);
lean_ctor_set_uint8(v___x_2578_, sizeof(void*)*3 + 3, v_isRecordingDeps_2576_);
v___x_2579_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v_msg_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___x_2578_, v___y_2569_);
lean_dec_ref_known(v___x_2578_, 3);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_2580_, lean_object* v_msg_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(v_ref_2580_, v_msg_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v_ref_2580_);
return v_res_2589_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0));
v___x_2592_ = l_Lean_stringToMessageData(v___x_2591_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object* v_stx_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; 
v___x_2608_ = lean_unsigned_to_nat(1u);
v___x_2609_ = l_Lean_Syntax_getArg(v_stx_2594_, v___x_2608_);
if (lean_obj_tag(v___x_2609_) == 1)
{
lean_object* v_kind_2610_; 
v_kind_2610_ = lean_ctor_get(v___x_2609_, 1);
lean_inc(v_kind_2610_);
if (lean_obj_tag(v_kind_2610_) == 1)
{
lean_object* v_pre_2611_; 
v_pre_2611_ = lean_ctor_get(v_kind_2610_, 0);
lean_inc(v_pre_2611_);
if (lean_obj_tag(v_pre_2611_) == 1)
{
lean_object* v_pre_2612_; 
v_pre_2612_ = lean_ctor_get(v_pre_2611_, 0);
lean_inc(v_pre_2612_);
if (lean_obj_tag(v_pre_2612_) == 1)
{
lean_object* v_pre_2613_; 
v_pre_2613_ = lean_ctor_get(v_pre_2612_, 0);
lean_inc(v_pre_2613_);
if (lean_obj_tag(v_pre_2613_) == 1)
{
lean_object* v_pre_2614_; 
v_pre_2614_ = lean_ctor_get(v_pre_2613_, 0);
if (lean_obj_tag(v_pre_2614_) == 0)
{
lean_object* v_args_2615_; lean_object* v_str_2616_; lean_object* v_str_2617_; lean_object* v_str_2618_; lean_object* v_str_2619_; lean_object* v___x_2620_; uint8_t v___x_2621_; 
v_args_2615_ = lean_ctor_get(v___x_2609_, 2);
lean_inc_ref(v_args_2615_);
lean_dec_ref_known(v___x_2609_, 3);
v_str_2616_ = lean_ctor_get(v_kind_2610_, 1);
lean_inc_ref(v_str_2616_);
lean_dec_ref_known(v_kind_2610_, 2);
v_str_2617_ = lean_ctor_get(v_pre_2611_, 1);
lean_inc_ref(v_str_2617_);
lean_dec_ref_known(v_pre_2611_, 2);
v_str_2618_ = lean_ctor_get(v_pre_2612_, 1);
lean_inc_ref(v_str_2618_);
lean_dec_ref_known(v_pre_2612_, 2);
v_str_2619_ = lean_ctor_get(v_pre_2613_, 1);
lean_inc_ref(v_str_2619_);
lean_dec_ref_known(v_pre_2613_, 2);
v___x_2620_ = ((lean_object*)(l_Lean_versoDocString___closed__0));
v___x_2621_ = lean_string_dec_eq(v_str_2619_, v___x_2620_);
lean_dec_ref(v_str_2619_);
if (v___x_2621_ == 0)
{
lean_dec_ref(v_str_2618_);
lean_dec_ref(v_str_2617_);
lean_dec_ref(v_str_2616_);
lean_dec_ref(v_args_2615_);
goto v___jp_2602_;
}
else
{
lean_object* v___x_2622_; uint8_t v___x_2623_; 
v___x_2622_ = ((lean_object*)(l_Lean_versoDocString___closed__1));
v___x_2623_ = lean_string_dec_eq(v_str_2618_, v___x_2622_);
lean_dec_ref(v_str_2618_);
if (v___x_2623_ == 0)
{
lean_dec_ref(v_str_2617_);
lean_dec_ref(v_str_2616_);
lean_dec_ref(v_args_2615_);
goto v___jp_2602_;
}
else
{
lean_object* v___x_2624_; uint8_t v___x_2625_; 
v___x_2624_ = ((lean_object*)(l_Lean_versoDocString___closed__2));
v___x_2625_ = lean_string_dec_eq(v_str_2617_, v___x_2624_);
lean_dec_ref(v_str_2617_);
if (v___x_2625_ == 0)
{
lean_dec_ref(v_str_2616_);
lean_dec_ref(v_args_2615_);
goto v___jp_2602_;
}
else
{
lean_object* v___x_2626_; uint8_t v___x_2627_; 
v___x_2626_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__2));
v___x_2627_ = lean_string_dec_eq(v_str_2616_, v___x_2626_);
lean_dec_ref(v_str_2616_);
if (v___x_2627_ == 0)
{
lean_dec_ref(v_args_2615_);
goto v___jp_2602_;
}
else
{
lean_object* v___x_2628_; lean_object* v___x_2629_; uint8_t v___x_2630_; 
v___x_2628_ = lean_array_get_size(v_args_2615_);
v___x_2629_ = lean_unsigned_to_nat(2u);
v___x_2630_ = lean_nat_dec_eq(v___x_2628_, v___x_2629_);
if (v___x_2630_ == 0)
{
lean_dec_ref(v_args_2615_);
goto v___jp_2602_;
}
else
{
lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2631_ = lean_unsigned_to_nat(0u);
v___x_2632_ = lean_array_fget(v_args_2615_, v___x_2631_);
lean_dec_ref(v_args_2615_);
if (lean_obj_tag(v___x_2632_) == 2)
{
lean_object* v_val_2633_; lean_object* v___x_2634_; 
lean_dec(v_stx_2594_);
v_val_2633_ = lean_ctor_get(v___x_2632_, 1);
lean_inc_ref(v_val_2633_);
lean_dec_ref_known(v___x_2632_, 2);
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v_val_2633_);
return v___x_2634_;
}
else
{
lean_dec(v___x_2632_);
goto v___jp_2602_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2613_, 2);
lean_dec_ref_known(v_pre_2612_, 2);
lean_dec_ref_known(v_pre_2611_, 2);
lean_dec_ref_known(v_kind_2610_, 2);
lean_dec_ref_known(v___x_2609_, 3);
goto v___jp_2602_;
}
}
else
{
lean_dec(v_pre_2613_);
lean_dec_ref_known(v_pre_2612_, 2);
lean_dec_ref_known(v_pre_2611_, 2);
lean_dec_ref_known(v_kind_2610_, 2);
lean_dec_ref_known(v___x_2609_, 3);
goto v___jp_2602_;
}
}
else
{
lean_dec(v_pre_2612_);
lean_dec_ref_known(v_pre_2611_, 2);
lean_dec_ref_known(v_kind_2610_, 2);
lean_dec_ref_known(v___x_2609_, 3);
goto v___jp_2602_;
}
}
else
{
lean_dec_ref_known(v_kind_2610_, 2);
lean_dec(v_pre_2611_);
lean_dec_ref_known(v___x_2609_, 3);
goto v___jp_2602_;
}
}
else
{
lean_dec(v_kind_2610_);
lean_dec_ref_known(v___x_2609_, 3);
goto v___jp_2602_;
}
}
else
{
lean_dec(v___x_2609_);
goto v___jp_2602_;
}
v___jp_2602_:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2603_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_2594_);
v___x_2604_ = l_Lean_MessageData_ofSyntax(v_stx_2594_);
v___x_2605_ = l_Lean_indentD(v___x_2604_);
v___x_2606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2603_);
lean_ctor_set(v___x_2606_, 1, v___x_2605_);
v___x_2607_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(v_stx_2594_, v___x_2606_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_);
lean_dec(v_stx_2594_);
return v___x_2607_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object* v_stx_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_stx_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
lean_dec(v___y_2641_);
lean_dec_ref(v___y_2640_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object* v_declName_2644_, lean_object* v_docComment_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
uint8_t v___x_2653_; 
v___x_2653_ = l_Lean_Name_isAnonymous(v_declName_2644_);
if (v___x_2653_ == 0)
{
uint8_t v___x_2654_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; lean_object* v___x_2720_; lean_object* v_env_2721_; lean_object* v___x_2722_; 
v___x_2654_ = 1;
v___x_2720_ = lean_st_ref_get(v___y_2651_);
v_env_2721_ = lean_ctor_get(v___x_2720_, 0);
lean_inc_ref(v_env_2721_);
lean_dec(v___x_2720_);
v___x_2722_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2721_, v_declName_2644_);
lean_dec_ref(v_env_2721_);
if (lean_obj_tag(v___x_2722_) == 0)
{
v___y_2656_ = v___y_2646_;
v___y_2657_ = v___y_2647_;
v___y_2658_ = v___y_2648_;
v___y_2659_ = v___y_2649_;
v___y_2660_ = v___y_2650_;
v___y_2661_ = v___y_2651_;
goto v___jp_2655_;
}
else
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
lean_dec_ref_known(v___x_2722_, 1);
lean_dec(v_docComment_2645_);
v___x_2723_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_2724_ = l_Lean_MessageData_ofConstName(v_declName_2644_, v___x_2653_);
v___x_2725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2723_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_2727_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2725_);
lean_ctor_set(v___x_2727_, 1, v___x_2726_);
v___x_2728_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_2727_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_);
return v___x_2728_;
}
v___jp_2655_:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docComment_2645_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v___x_2663_; 
lean_dec_ref_known(v___x_2662_, 1);
v___x_2663_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_docComment_2645_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2711_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2666_ = v___x_2663_;
v_isShared_2667_ = v_isSharedCheck_2711_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2663_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2711_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2668_; lean_object* v_env_2669_; lean_object* v_nextMacroScope_2670_; lean_object* v_ngen_2671_; lean_object* v_auxDeclNGen_2672_; lean_object* v_traceState_2673_; lean_object* v_recordedDeps_2674_; lean_object* v_messages_2675_; lean_object* v_infoState_2676_; lean_object* v_snapshotTasks_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2709_; 
v___x_2668_ = lean_st_ref_take(v___y_2661_);
v_env_2669_ = lean_ctor_get(v___x_2668_, 0);
v_nextMacroScope_2670_ = lean_ctor_get(v___x_2668_, 1);
v_ngen_2671_ = lean_ctor_get(v___x_2668_, 2);
v_auxDeclNGen_2672_ = lean_ctor_get(v___x_2668_, 3);
v_traceState_2673_ = lean_ctor_get(v___x_2668_, 4);
v_recordedDeps_2674_ = lean_ctor_get(v___x_2668_, 6);
v_messages_2675_ = lean_ctor_get(v___x_2668_, 7);
v_infoState_2676_ = lean_ctor_get(v___x_2668_, 8);
v_snapshotTasks_2677_ = lean_ctor_get(v___x_2668_, 9);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2709_ == 0)
{
lean_object* v_unused_2710_; 
v_unused_2710_ = lean_ctor_get(v___x_2668_, 5);
lean_dec(v_unused_2710_);
v___x_2679_ = v___x_2668_;
v_isShared_2680_ = v_isSharedCheck_2709_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_snapshotTasks_2677_);
lean_inc(v_infoState_2676_);
lean_inc(v_messages_2675_);
lean_inc(v_recordedDeps_2674_);
lean_inc(v_traceState_2673_);
lean_inc(v_auxDeclNGen_2672_);
lean_inc(v_ngen_2671_);
lean_inc(v_nextMacroScope_2670_);
lean_inc(v_env_2669_);
lean_dec(v___x_2668_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2709_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2686_; 
v___x_2681_ = l_Lean_docStringExt;
v___x_2682_ = l_String_removeLeadingSpaces(v_a_2664_);
v___x_2683_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2681_, v_env_2669_, v_declName_2644_, v___x_2682_, v___x_2654_);
v___x_2684_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 5, v___x_2684_);
lean_ctor_set(v___x_2679_, 0, v___x_2683_);
v___x_2686_ = v___x_2679_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2708_, 1, v_nextMacroScope_2670_);
lean_ctor_set(v_reuseFailAlloc_2708_, 2, v_ngen_2671_);
lean_ctor_set(v_reuseFailAlloc_2708_, 3, v_auxDeclNGen_2672_);
lean_ctor_set(v_reuseFailAlloc_2708_, 4, v_traceState_2673_);
lean_ctor_set(v_reuseFailAlloc_2708_, 5, v___x_2684_);
lean_ctor_set(v_reuseFailAlloc_2708_, 6, v_recordedDeps_2674_);
lean_ctor_set(v_reuseFailAlloc_2708_, 7, v_messages_2675_);
lean_ctor_set(v_reuseFailAlloc_2708_, 8, v_infoState_2676_);
lean_ctor_set(v_reuseFailAlloc_2708_, 9, v_snapshotTasks_2677_);
v___x_2686_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v_mctx_2689_; lean_object* v_zetaDeltaFVarIds_2690_; lean_object* v_postponed_2691_; lean_object* v_diag_2692_; lean_object* v_rewriteFires_2693_; lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2706_; 
v___x_2687_ = lean_st_ref_put(v___y_2661_, v___x_2686_);
v___x_2688_ = lean_st_ref_take(v___y_2659_);
v_mctx_2689_ = lean_ctor_get(v___x_2688_, 0);
v_zetaDeltaFVarIds_2690_ = lean_ctor_get(v___x_2688_, 2);
v_postponed_2691_ = lean_ctor_get(v___x_2688_, 3);
v_diag_2692_ = lean_ctor_get(v___x_2688_, 4);
v_rewriteFires_2693_ = lean_ctor_get(v___x_2688_, 5);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2706_ == 0)
{
lean_object* v_unused_2707_; 
v_unused_2707_ = lean_ctor_get(v___x_2688_, 1);
lean_dec(v_unused_2707_);
v___x_2695_ = v___x_2688_;
v_isShared_2696_ = v_isSharedCheck_2706_;
goto v_resetjp_2694_;
}
else
{
lean_inc(v_rewriteFires_2693_);
lean_inc(v_diag_2692_);
lean_inc(v_postponed_2691_);
lean_inc(v_zetaDeltaFVarIds_2690_);
lean_inc(v_mctx_2689_);
lean_dec(v___x_2688_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2706_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2700_; 
v___x_2697_ = lean_box(0);
v___x_2698_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_2696_ == 0)
{
lean_ctor_set(v___x_2695_, 1, v___x_2698_);
v___x_2700_ = v___x_2695_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_mctx_2689_);
lean_ctor_set(v_reuseFailAlloc_2705_, 1, v___x_2698_);
lean_ctor_set(v_reuseFailAlloc_2705_, 2, v_zetaDeltaFVarIds_2690_);
lean_ctor_set(v_reuseFailAlloc_2705_, 3, v_postponed_2691_);
lean_ctor_set(v_reuseFailAlloc_2705_, 4, v_diag_2692_);
lean_ctor_set(v_reuseFailAlloc_2705_, 5, v_rewriteFires_2693_);
v___x_2700_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2701_ = lean_st_ref_put(v___y_2659_, v___x_2700_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 0, v___x_2697_);
v___x_2703_ = v___x_2666_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2697_);
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
}
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2719_; 
lean_dec(v_declName_2644_);
v_a_2712_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2714_ = v___x_2663_;
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2663_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2717_; 
if (v_isShared_2715_ == 0)
{
v___x_2717_ = v___x_2714_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2712_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
else
{
lean_dec(v_docComment_2645_);
lean_dec(v_declName_2644_);
return v___x_2662_;
}
}
}
else
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
lean_dec(v_docComment_2645_);
lean_dec(v_declName_2644_);
v___x_2729_ = lean_box(0);
v___x_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2729_);
return v___x_2730_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object* v_declName_2731_, lean_object* v_docComment_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_2731_, v_docComment_2732_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec(v___y_2736_);
lean_dec_ref(v___y_2735_);
lean_dec(v___y_2734_);
lean_dec_ref(v___y_2733_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t v_isVerso_2741_, lean_object* v_declName_2742_, lean_object* v_binders_2743_, lean_object* v_docComment_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_){
_start:
{
if (v_isVerso_2741_ == 0)
{
lean_object* v___x_2752_; 
lean_dec(v_binders_2743_);
v___x_2752_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_2742_, v_docComment_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
return v___x_2752_;
}
else
{
lean_object* v___x_2753_; 
v___x_2753_ = l_Lean_addVersoDocString(v_declName_2742_, v_binders_2743_, v_docComment_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_, v_a_2750_);
lean_dec(v_docComment_2744_);
return v___x_2753_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object* v_isVerso_2754_, lean_object* v_declName_2755_, lean_object* v_binders_2756_, lean_object* v_docComment_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_){
_start:
{
uint8_t v_isVerso_boxed_2765_; lean_object* v_res_2766_; 
v_isVerso_boxed_2765_ = lean_unbox(v_isVerso_2754_);
v_res_2766_ = l_Lean_addDocStringOf(v_isVerso_boxed_2765_, v_declName_2755_, v_binders_2756_, v_docComment_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_);
lean_dec(v_a_2763_);
lean_dec_ref(v_a_2762_);
lean_dec(v_a_2761_);
lean_dec_ref(v_a_2760_);
lean_dec(v_a_2759_);
lean_dec_ref(v_a_2758_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object* v_ref_2767_, lean_object* v_msgData_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_){
_start:
{
lean_object* v___x_2776_; 
v___x_2776_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_2767_, v_msgData_2768_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_2777_, lean_object* v_msgData_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(v_ref_2777_, v_msgData_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
lean_dec(v___y_2780_);
lean_dec_ref(v___y_2779_);
lean_dec(v_ref_2777_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_2787_, lean_object* v_ref_2788_, lean_object* v_msg_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_){
_start:
{
lean_object* v___x_2797_; 
v___x_2797_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___redArg(v_ref_2788_, v_msg_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_2798_, lean_object* v_ref_2799_, lean_object* v_msg_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_Lean_throwErrorAt___at___00Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1_spec__4(v_00_u03b1_2798_, v_ref_2799_, v_msg_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
lean_dec(v_ref_2799_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object* v_k_2809_, lean_object* v_t_2810_){
_start:
{
if (lean_obj_tag(v_t_2810_) == 0)
{
lean_object* v_k_2811_; lean_object* v_v_2812_; lean_object* v_l_2813_; lean_object* v_r_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_3468_; 
v_k_2811_ = lean_ctor_get(v_t_2810_, 1);
v_v_2812_ = lean_ctor_get(v_t_2810_, 2);
v_l_2813_ = lean_ctor_get(v_t_2810_, 3);
v_r_2814_ = lean_ctor_get(v_t_2810_, 4);
v_isSharedCheck_3468_ = !lean_is_exclusive(v_t_2810_);
if (v_isSharedCheck_3468_ == 0)
{
lean_object* v_unused_3469_; 
v_unused_3469_ = lean_ctor_get(v_t_2810_, 0);
lean_dec(v_unused_3469_);
v___x_2816_ = v_t_2810_;
v_isShared_2817_ = v_isSharedCheck_3468_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_r_2814_);
lean_inc(v_l_2813_);
lean_inc(v_v_2812_);
lean_inc(v_k_2811_);
lean_dec(v_t_2810_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_3468_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
uint8_t v___x_2818_; 
v___x_2818_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2809_, v_k_2811_);
switch(v___x_2818_)
{
case 0:
{
lean_object* v_impl_2819_; lean_object* v___x_2820_; 
v_impl_2819_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_2809_, v_l_2813_);
v___x_2820_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_2819_) == 0)
{
if (lean_obj_tag(v_r_2814_) == 0)
{
lean_object* v_size_2821_; lean_object* v_size_2822_; lean_object* v_k_2823_; lean_object* v_v_2824_; lean_object* v_l_2825_; lean_object* v_r_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; uint8_t v___x_2829_; 
v_size_2821_ = lean_ctor_get(v_impl_2819_, 0);
v_size_2822_ = lean_ctor_get(v_r_2814_, 0);
v_k_2823_ = lean_ctor_get(v_r_2814_, 1);
v_v_2824_ = lean_ctor_get(v_r_2814_, 2);
v_l_2825_ = lean_ctor_get(v_r_2814_, 3);
lean_inc(v_l_2825_);
v_r_2826_ = lean_ctor_get(v_r_2814_, 4);
v___x_2827_ = lean_unsigned_to_nat(3u);
v___x_2828_ = lean_nat_mul(v___x_2827_, v_size_2821_);
v___x_2829_ = lean_nat_dec_lt(v___x_2828_, v_size_2822_);
lean_dec(v___x_2828_);
if (v___x_2829_ == 0)
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2833_; 
lean_dec(v_l_2825_);
v___x_2830_ = lean_nat_add(v___x_2820_, v_size_2821_);
v___x_2831_ = lean_nat_add(v___x_2830_, v_size_2822_);
lean_dec(v___x_2830_);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 3, v_impl_2819_);
lean_ctor_set(v___x_2816_, 0, v___x_2831_);
v___x_2833_ = v___x_2816_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v___x_2831_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2834_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2834_, 3, v_impl_2819_);
lean_ctor_set(v_reuseFailAlloc_2834_, 4, v_r_2814_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
else
{
lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2898_; 
lean_inc(v_r_2826_);
lean_inc(v_v_2824_);
lean_inc(v_k_2823_);
lean_inc(v_size_2822_);
v_isSharedCheck_2898_ = !lean_is_exclusive(v_r_2814_);
if (v_isSharedCheck_2898_ == 0)
{
lean_object* v_unused_2899_; lean_object* v_unused_2900_; lean_object* v_unused_2901_; lean_object* v_unused_2902_; lean_object* v_unused_2903_; 
v_unused_2899_ = lean_ctor_get(v_r_2814_, 4);
lean_dec(v_unused_2899_);
v_unused_2900_ = lean_ctor_get(v_r_2814_, 3);
lean_dec(v_unused_2900_);
v_unused_2901_ = lean_ctor_get(v_r_2814_, 2);
lean_dec(v_unused_2901_);
v_unused_2902_ = lean_ctor_get(v_r_2814_, 1);
lean_dec(v_unused_2902_);
v_unused_2903_ = lean_ctor_get(v_r_2814_, 0);
lean_dec(v_unused_2903_);
v___x_2836_ = v_r_2814_;
v_isShared_2837_ = v_isSharedCheck_2898_;
goto v_resetjp_2835_;
}
else
{
lean_dec(v_r_2814_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2898_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v_size_2838_; lean_object* v_k_2839_; lean_object* v_v_2840_; lean_object* v_l_2841_; lean_object* v_r_2842_; lean_object* v_size_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; uint8_t v___x_2846_; 
v_size_2838_ = lean_ctor_get(v_l_2825_, 0);
v_k_2839_ = lean_ctor_get(v_l_2825_, 1);
v_v_2840_ = lean_ctor_get(v_l_2825_, 2);
v_l_2841_ = lean_ctor_get(v_l_2825_, 3);
v_r_2842_ = lean_ctor_get(v_l_2825_, 4);
v_size_2843_ = lean_ctor_get(v_r_2826_, 0);
v___x_2844_ = lean_unsigned_to_nat(2u);
v___x_2845_ = lean_nat_mul(v___x_2844_, v_size_2843_);
v___x_2846_ = lean_nat_dec_lt(v_size_2838_, v___x_2845_);
lean_dec(v___x_2845_);
if (v___x_2846_ == 0)
{
lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2874_; 
lean_inc(v_r_2842_);
lean_inc(v_l_2841_);
lean_inc(v_v_2840_);
lean_inc(v_k_2839_);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_l_2825_);
if (v_isSharedCheck_2874_ == 0)
{
lean_object* v_unused_2875_; lean_object* v_unused_2876_; lean_object* v_unused_2877_; lean_object* v_unused_2878_; lean_object* v_unused_2879_; 
v_unused_2875_ = lean_ctor_get(v_l_2825_, 4);
lean_dec(v_unused_2875_);
v_unused_2876_ = lean_ctor_get(v_l_2825_, 3);
lean_dec(v_unused_2876_);
v_unused_2877_ = lean_ctor_get(v_l_2825_, 2);
lean_dec(v_unused_2877_);
v_unused_2878_ = lean_ctor_get(v_l_2825_, 1);
lean_dec(v_unused_2878_);
v_unused_2879_ = lean_ctor_get(v_l_2825_, 0);
lean_dec(v_unused_2879_);
v___x_2848_ = v_l_2825_;
v_isShared_2849_ = v_isSharedCheck_2874_;
goto v_resetjp_2847_;
}
else
{
lean_dec(v_l_2825_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2874_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2855_; lean_object* v___y_2864_; 
v___x_2850_ = lean_nat_add(v___x_2820_, v_size_2821_);
v___x_2851_ = lean_nat_add(v___x_2850_, v_size_2822_);
lean_dec(v_size_2822_);
if (lean_obj_tag(v_l_2841_) == 0)
{
lean_object* v_size_2872_; 
v_size_2872_ = lean_ctor_get(v_l_2841_, 0);
lean_inc(v_size_2872_);
v___y_2864_ = v_size_2872_;
goto v___jp_2863_;
}
else
{
lean_object* v___x_2873_; 
v___x_2873_ = lean_unsigned_to_nat(0u);
v___y_2864_ = v___x_2873_;
goto v___jp_2863_;
}
v___jp_2852_:
{
lean_object* v___x_2856_; lean_object* v___x_2858_; 
v___x_2856_ = lean_nat_add(v___y_2853_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec(v___y_2853_);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 4, v_r_2826_);
lean_ctor_set(v___x_2848_, 3, v_r_2842_);
lean_ctor_set(v___x_2848_, 2, v_v_2824_);
lean_ctor_set(v___x_2848_, 1, v_k_2823_);
lean_ctor_set(v___x_2848_, 0, v___x_2856_);
v___x_2858_ = v___x_2848_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v___x_2856_);
lean_ctor_set(v_reuseFailAlloc_2862_, 1, v_k_2823_);
lean_ctor_set(v_reuseFailAlloc_2862_, 2, v_v_2824_);
lean_ctor_set(v_reuseFailAlloc_2862_, 3, v_r_2842_);
lean_ctor_set(v_reuseFailAlloc_2862_, 4, v_r_2826_);
v___x_2858_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
lean_object* v___x_2860_; 
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 4, v___x_2858_);
lean_ctor_set(v___x_2836_, 3, v___y_2854_);
lean_ctor_set(v___x_2836_, 2, v_v_2840_);
lean_ctor_set(v___x_2836_, 1, v_k_2839_);
lean_ctor_set(v___x_2836_, 0, v___x_2851_);
v___x_2860_ = v___x_2836_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v___x_2851_);
lean_ctor_set(v_reuseFailAlloc_2861_, 1, v_k_2839_);
lean_ctor_set(v_reuseFailAlloc_2861_, 2, v_v_2840_);
lean_ctor_set(v_reuseFailAlloc_2861_, 3, v___y_2854_);
lean_ctor_set(v_reuseFailAlloc_2861_, 4, v___x_2858_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
v___jp_2863_:
{
lean_object* v___x_2865_; lean_object* v___x_2867_; 
v___x_2865_ = lean_nat_add(v___x_2850_, v___y_2864_);
lean_dec(v___y_2864_);
lean_dec(v___x_2850_);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_l_2841_);
lean_ctor_set(v___x_2816_, 3, v_impl_2819_);
lean_ctor_set(v___x_2816_, 0, v___x_2865_);
v___x_2867_ = v___x_2816_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v___x_2865_);
lean_ctor_set(v_reuseFailAlloc_2871_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2871_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2871_, 3, v_impl_2819_);
lean_ctor_set(v_reuseFailAlloc_2871_, 4, v_l_2841_);
v___x_2867_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
lean_object* v___x_2868_; 
v___x_2868_ = lean_nat_add(v___x_2820_, v_size_2843_);
if (lean_obj_tag(v_r_2842_) == 0)
{
lean_object* v_size_2869_; 
v_size_2869_ = lean_ctor_get(v_r_2842_, 0);
lean_inc(v_size_2869_);
v___y_2853_ = v___x_2868_;
v___y_2854_ = v___x_2867_;
v___y_2855_ = v_size_2869_;
goto v___jp_2852_;
}
else
{
lean_object* v___x_2870_; 
v___x_2870_ = lean_unsigned_to_nat(0u);
v___y_2853_ = v___x_2868_;
v___y_2854_ = v___x_2867_;
v___y_2855_ = v___x_2870_;
goto v___jp_2852_;
}
}
}
}
}
else
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2884_; 
lean_del_object(v___x_2816_);
v___x_2880_ = lean_nat_add(v___x_2820_, v_size_2821_);
v___x_2881_ = lean_nat_add(v___x_2880_, v_size_2822_);
lean_dec(v_size_2822_);
v___x_2882_ = lean_nat_add(v___x_2880_, v_size_2838_);
lean_dec(v___x_2880_);
lean_inc_ref(v_impl_2819_);
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 4, v_l_2825_);
lean_ctor_set(v___x_2836_, 3, v_impl_2819_);
lean_ctor_set(v___x_2836_, 2, v_v_2812_);
lean_ctor_set(v___x_2836_, 1, v_k_2811_);
lean_ctor_set(v___x_2836_, 0, v___x_2882_);
v___x_2884_ = v___x_2836_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v___x_2882_);
lean_ctor_set(v_reuseFailAlloc_2897_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2897_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2897_, 3, v_impl_2819_);
lean_ctor_set(v_reuseFailAlloc_2897_, 4, v_l_2825_);
v___x_2884_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
v_isSharedCheck_2891_ = !lean_is_exclusive(v_impl_2819_);
if (v_isSharedCheck_2891_ == 0)
{
lean_object* v_unused_2892_; lean_object* v_unused_2893_; lean_object* v_unused_2894_; lean_object* v_unused_2895_; lean_object* v_unused_2896_; 
v_unused_2892_ = lean_ctor_get(v_impl_2819_, 4);
lean_dec(v_unused_2892_);
v_unused_2893_ = lean_ctor_get(v_impl_2819_, 3);
lean_dec(v_unused_2893_);
v_unused_2894_ = lean_ctor_get(v_impl_2819_, 2);
lean_dec(v_unused_2894_);
v_unused_2895_ = lean_ctor_get(v_impl_2819_, 1);
lean_dec(v_unused_2895_);
v_unused_2896_ = lean_ctor_get(v_impl_2819_, 0);
lean_dec(v_unused_2896_);
v___x_2886_ = v_impl_2819_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_dec(v_impl_2819_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 4, v_r_2826_);
lean_ctor_set(v___x_2886_, 3, v___x_2884_);
lean_ctor_set(v___x_2886_, 2, v_v_2824_);
lean_ctor_set(v___x_2886_, 1, v_k_2823_);
lean_ctor_set(v___x_2886_, 0, v___x_2881_);
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v___x_2881_);
lean_ctor_set(v_reuseFailAlloc_2890_, 1, v_k_2823_);
lean_ctor_set(v_reuseFailAlloc_2890_, 2, v_v_2824_);
lean_ctor_set(v_reuseFailAlloc_2890_, 3, v___x_2884_);
lean_ctor_set(v_reuseFailAlloc_2890_, 4, v_r_2826_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_2904_; lean_object* v___x_2905_; lean_object* v___x_2907_; 
v_size_2904_ = lean_ctor_get(v_impl_2819_, 0);
v___x_2905_ = lean_nat_add(v___x_2820_, v_size_2904_);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 3, v_impl_2819_);
lean_ctor_set(v___x_2816_, 0, v___x_2905_);
v___x_2907_ = v___x_2816_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2905_);
lean_ctor_set(v_reuseFailAlloc_2908_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2908_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2908_, 3, v_impl_2819_);
lean_ctor_set(v_reuseFailAlloc_2908_, 4, v_r_2814_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
else
{
if (lean_obj_tag(v_r_2814_) == 0)
{
lean_object* v_l_2909_; 
v_l_2909_ = lean_ctor_get(v_r_2814_, 3);
lean_inc(v_l_2909_);
if (lean_obj_tag(v_l_2909_) == 0)
{
lean_object* v_r_2910_; 
v_r_2910_ = lean_ctor_get(v_r_2814_, 4);
lean_inc(v_r_2910_);
if (lean_obj_tag(v_r_2910_) == 0)
{
lean_object* v_size_2911_; lean_object* v_k_2912_; lean_object* v_v_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2926_; 
v_size_2911_ = lean_ctor_get(v_r_2814_, 0);
v_k_2912_ = lean_ctor_get(v_r_2814_, 1);
v_v_2913_ = lean_ctor_get(v_r_2814_, 2);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_r_2814_);
if (v_isSharedCheck_2926_ == 0)
{
lean_object* v_unused_2927_; lean_object* v_unused_2928_; 
v_unused_2927_ = lean_ctor_get(v_r_2814_, 4);
lean_dec(v_unused_2927_);
v_unused_2928_ = lean_ctor_get(v_r_2814_, 3);
lean_dec(v_unused_2928_);
v___x_2915_ = v_r_2814_;
v_isShared_2916_ = v_isSharedCheck_2926_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_v_2913_);
lean_inc(v_k_2912_);
lean_inc(v_size_2911_);
lean_dec(v_r_2814_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2926_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v_size_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2921_; 
v_size_2917_ = lean_ctor_get(v_l_2909_, 0);
v___x_2918_ = lean_nat_add(v___x_2820_, v_size_2911_);
lean_dec(v_size_2911_);
v___x_2919_ = lean_nat_add(v___x_2820_, v_size_2917_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 4, v_l_2909_);
lean_ctor_set(v___x_2915_, 3, v_impl_2819_);
lean_ctor_set(v___x_2915_, 2, v_v_2812_);
lean_ctor_set(v___x_2915_, 1, v_k_2811_);
lean_ctor_set(v___x_2915_, 0, v___x_2919_);
v___x_2921_ = v___x_2915_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2919_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2925_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2925_, 3, v_impl_2819_);
lean_ctor_set(v_reuseFailAlloc_2925_, 4, v_l_2909_);
v___x_2921_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
lean_object* v___x_2923_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_r_2910_);
lean_ctor_set(v___x_2816_, 3, v___x_2921_);
lean_ctor_set(v___x_2816_, 2, v_v_2913_);
lean_ctor_set(v___x_2816_, 1, v_k_2912_);
lean_ctor_set(v___x_2816_, 0, v___x_2918_);
v___x_2923_ = v___x_2816_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v___x_2918_);
lean_ctor_set(v_reuseFailAlloc_2924_, 1, v_k_2912_);
lean_ctor_set(v_reuseFailAlloc_2924_, 2, v_v_2913_);
lean_ctor_set(v_reuseFailAlloc_2924_, 3, v___x_2921_);
lean_ctor_set(v_reuseFailAlloc_2924_, 4, v_r_2910_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
else
{
lean_object* v_k_2929_; lean_object* v_v_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2953_; 
v_k_2929_ = lean_ctor_get(v_r_2814_, 1);
v_v_2930_ = lean_ctor_get(v_r_2814_, 2);
v_isSharedCheck_2953_ = !lean_is_exclusive(v_r_2814_);
if (v_isSharedCheck_2953_ == 0)
{
lean_object* v_unused_2954_; lean_object* v_unused_2955_; lean_object* v_unused_2956_; 
v_unused_2954_ = lean_ctor_get(v_r_2814_, 4);
lean_dec(v_unused_2954_);
v_unused_2955_ = lean_ctor_get(v_r_2814_, 3);
lean_dec(v_unused_2955_);
v_unused_2956_ = lean_ctor_get(v_r_2814_, 0);
lean_dec(v_unused_2956_);
v___x_2932_ = v_r_2814_;
v_isShared_2933_ = v_isSharedCheck_2953_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_v_2930_);
lean_inc(v_k_2929_);
lean_dec(v_r_2814_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2953_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v_k_2934_; lean_object* v_v_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2949_; 
v_k_2934_ = lean_ctor_get(v_l_2909_, 1);
v_v_2935_ = lean_ctor_get(v_l_2909_, 2);
v_isSharedCheck_2949_ = !lean_is_exclusive(v_l_2909_);
if (v_isSharedCheck_2949_ == 0)
{
lean_object* v_unused_2950_; lean_object* v_unused_2951_; lean_object* v_unused_2952_; 
v_unused_2950_ = lean_ctor_get(v_l_2909_, 4);
lean_dec(v_unused_2950_);
v_unused_2951_ = lean_ctor_get(v_l_2909_, 3);
lean_dec(v_unused_2951_);
v_unused_2952_ = lean_ctor_get(v_l_2909_, 0);
lean_dec(v_unused_2952_);
v___x_2937_ = v_l_2909_;
v_isShared_2938_ = v_isSharedCheck_2949_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_v_2935_);
lean_inc(v_k_2934_);
lean_dec(v_l_2909_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2949_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2939_; lean_object* v___x_2941_; 
v___x_2939_ = lean_unsigned_to_nat(3u);
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 4, v_r_2910_);
lean_ctor_set(v___x_2937_, 3, v_r_2910_);
lean_ctor_set(v___x_2937_, 2, v_v_2812_);
lean_ctor_set(v___x_2937_, 1, v_k_2811_);
lean_ctor_set(v___x_2937_, 0, v___x_2820_);
v___x_2941_ = v___x_2937_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v___x_2820_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2948_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2948_, 3, v_r_2910_);
lean_ctor_set(v_reuseFailAlloc_2948_, 4, v_r_2910_);
v___x_2941_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2943_; 
if (v_isShared_2933_ == 0)
{
lean_ctor_set(v___x_2932_, 3, v_r_2910_);
lean_ctor_set(v___x_2932_, 0, v___x_2820_);
v___x_2943_ = v___x_2932_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v___x_2820_);
lean_ctor_set(v_reuseFailAlloc_2947_, 1, v_k_2929_);
lean_ctor_set(v_reuseFailAlloc_2947_, 2, v_v_2930_);
lean_ctor_set(v_reuseFailAlloc_2947_, 3, v_r_2910_);
lean_ctor_set(v_reuseFailAlloc_2947_, 4, v_r_2910_);
v___x_2943_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2945_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v___x_2943_);
lean_ctor_set(v___x_2816_, 3, v___x_2941_);
lean_ctor_set(v___x_2816_, 2, v_v_2935_);
lean_ctor_set(v___x_2816_, 1, v_k_2934_);
lean_ctor_set(v___x_2816_, 0, v___x_2939_);
v___x_2945_ = v___x_2816_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v___x_2939_);
lean_ctor_set(v_reuseFailAlloc_2946_, 1, v_k_2934_);
lean_ctor_set(v_reuseFailAlloc_2946_, 2, v_v_2935_);
lean_ctor_set(v_reuseFailAlloc_2946_, 3, v___x_2941_);
lean_ctor_set(v_reuseFailAlloc_2946_, 4, v___x_2943_);
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
}
}
else
{
lean_object* v_r_2957_; 
v_r_2957_ = lean_ctor_get(v_r_2814_, 4);
lean_inc(v_r_2957_);
if (lean_obj_tag(v_r_2957_) == 0)
{
lean_object* v_k_2958_; lean_object* v_v_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2970_; 
v_k_2958_ = lean_ctor_get(v_r_2814_, 1);
v_v_2959_ = lean_ctor_get(v_r_2814_, 2);
v_isSharedCheck_2970_ = !lean_is_exclusive(v_r_2814_);
if (v_isSharedCheck_2970_ == 0)
{
lean_object* v_unused_2971_; lean_object* v_unused_2972_; lean_object* v_unused_2973_; 
v_unused_2971_ = lean_ctor_get(v_r_2814_, 4);
lean_dec(v_unused_2971_);
v_unused_2972_ = lean_ctor_get(v_r_2814_, 3);
lean_dec(v_unused_2972_);
v_unused_2973_ = lean_ctor_get(v_r_2814_, 0);
lean_dec(v_unused_2973_);
v___x_2961_ = v_r_2814_;
v_isShared_2962_ = v_isSharedCheck_2970_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_v_2959_);
lean_inc(v_k_2958_);
lean_dec(v_r_2814_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2970_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2963_; lean_object* v___x_2965_; 
v___x_2963_ = lean_unsigned_to_nat(3u);
if (v_isShared_2962_ == 0)
{
lean_ctor_set(v___x_2961_, 4, v_l_2909_);
lean_ctor_set(v___x_2961_, 2, v_v_2812_);
lean_ctor_set(v___x_2961_, 1, v_k_2811_);
lean_ctor_set(v___x_2961_, 0, v___x_2820_);
v___x_2965_ = v___x_2961_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___x_2820_);
lean_ctor_set(v_reuseFailAlloc_2969_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2969_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2969_, 3, v_l_2909_);
lean_ctor_set(v_reuseFailAlloc_2969_, 4, v_l_2909_);
v___x_2965_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2967_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_r_2957_);
lean_ctor_set(v___x_2816_, 3, v___x_2965_);
lean_ctor_set(v___x_2816_, 2, v_v_2959_);
lean_ctor_set(v___x_2816_, 1, v_k_2958_);
lean_ctor_set(v___x_2816_, 0, v___x_2963_);
v___x_2967_ = v___x_2816_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v___x_2963_);
lean_ctor_set(v_reuseFailAlloc_2968_, 1, v_k_2958_);
lean_ctor_set(v_reuseFailAlloc_2968_, 2, v_v_2959_);
lean_ctor_set(v_reuseFailAlloc_2968_, 3, v___x_2965_);
lean_ctor_set(v_reuseFailAlloc_2968_, 4, v_r_2957_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
else
{
lean_object* v_size_2974_; lean_object* v_k_2975_; lean_object* v_v_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2987_; 
v_size_2974_ = lean_ctor_get(v_r_2814_, 0);
v_k_2975_ = lean_ctor_get(v_r_2814_, 1);
v_v_2976_ = lean_ctor_get(v_r_2814_, 2);
v_isSharedCheck_2987_ = !lean_is_exclusive(v_r_2814_);
if (v_isSharedCheck_2987_ == 0)
{
lean_object* v_unused_2988_; lean_object* v_unused_2989_; 
v_unused_2988_ = lean_ctor_get(v_r_2814_, 4);
lean_dec(v_unused_2988_);
v_unused_2989_ = lean_ctor_get(v_r_2814_, 3);
lean_dec(v_unused_2989_);
v___x_2978_ = v_r_2814_;
v_isShared_2979_ = v_isSharedCheck_2987_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_v_2976_);
lean_inc(v_k_2975_);
lean_inc(v_size_2974_);
lean_dec(v_r_2814_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2987_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2981_; 
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 3, v_r_2957_);
v___x_2981_ = v___x_2978_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_size_2974_);
lean_ctor_set(v_reuseFailAlloc_2986_, 1, v_k_2975_);
lean_ctor_set(v_reuseFailAlloc_2986_, 2, v_v_2976_);
lean_ctor_set(v_reuseFailAlloc_2986_, 3, v_r_2957_);
lean_ctor_set(v_reuseFailAlloc_2986_, 4, v_r_2957_);
v___x_2981_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
lean_object* v___x_2982_; lean_object* v___x_2984_; 
v___x_2982_ = lean_unsigned_to_nat(2u);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v___x_2981_);
lean_ctor_set(v___x_2816_, 3, v_r_2957_);
lean_ctor_set(v___x_2816_, 0, v___x_2982_);
v___x_2984_ = v___x_2816_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v___x_2982_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2985_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2985_, 3, v_r_2957_);
lean_ctor_set(v_reuseFailAlloc_2985_, 4, v___x_2981_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
return v___x_2984_;
}
}
}
}
}
}
else
{
lean_object* v___x_2991_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 3, v_r_2814_);
lean_ctor_set(v___x_2816_, 0, v___x_2820_);
v___x_2991_ = v___x_2816_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2820_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_2992_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_2992_, 3, v_r_2814_);
lean_ctor_set(v_reuseFailAlloc_2992_, 4, v_r_2814_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
case 1:
{
lean_del_object(v___x_2816_);
lean_dec(v_v_2812_);
lean_dec(v_k_2811_);
if (lean_obj_tag(v_l_2813_) == 0)
{
if (lean_obj_tag(v_r_2814_) == 0)
{
lean_object* v_size_2993_; lean_object* v_k_2994_; lean_object* v_v_2995_; lean_object* v_l_2996_; lean_object* v_r_2997_; lean_object* v_size_2998_; lean_object* v_k_2999_; lean_object* v_v_3000_; lean_object* v_l_3001_; lean_object* v_r_3002_; lean_object* v___x_3003_; uint8_t v___x_3004_; 
v_size_2993_ = lean_ctor_get(v_l_2813_, 0);
v_k_2994_ = lean_ctor_get(v_l_2813_, 1);
v_v_2995_ = lean_ctor_get(v_l_2813_, 2);
v_l_2996_ = lean_ctor_get(v_l_2813_, 3);
v_r_2997_ = lean_ctor_get(v_l_2813_, 4);
lean_inc(v_r_2997_);
v_size_2998_ = lean_ctor_get(v_r_2814_, 0);
v_k_2999_ = lean_ctor_get(v_r_2814_, 1);
v_v_3000_ = lean_ctor_get(v_r_2814_, 2);
v_l_3001_ = lean_ctor_get(v_r_2814_, 3);
lean_inc(v_l_3001_);
v_r_3002_ = lean_ctor_get(v_r_2814_, 4);
v___x_3003_ = lean_unsigned_to_nat(1u);
v___x_3004_ = lean_nat_dec_lt(v_size_2993_, v_size_2998_);
if (v___x_3004_ == 0)
{
lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3140_; 
lean_inc(v_l_2996_);
lean_inc(v_v_2995_);
lean_inc(v_k_2994_);
v_isSharedCheck_3140_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_3140_ == 0)
{
lean_object* v_unused_3141_; lean_object* v_unused_3142_; lean_object* v_unused_3143_; lean_object* v_unused_3144_; lean_object* v_unused_3145_; 
v_unused_3141_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_3141_);
v_unused_3142_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_3142_);
v_unused_3143_ = lean_ctor_get(v_l_2813_, 2);
lean_dec(v_unused_3143_);
v_unused_3144_ = lean_ctor_get(v_l_2813_, 1);
lean_dec(v_unused_3144_);
v_unused_3145_ = lean_ctor_get(v_l_2813_, 0);
lean_dec(v_unused_3145_);
v___x_3006_ = v_l_2813_;
v_isShared_3007_ = v_isSharedCheck_3140_;
goto v_resetjp_3005_;
}
else
{
lean_dec(v_l_2813_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3140_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3008_; lean_object* v_tree_3009_; 
v___x_3008_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_2994_, v_v_2995_, v_l_2996_, v_r_2997_);
v_tree_3009_ = lean_ctor_get(v___x_3008_, 2);
if (lean_obj_tag(v_tree_3009_) == 0)
{
lean_object* v_k_3010_; lean_object* v_v_3011_; lean_object* v_size_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; uint8_t v___x_3015_; 
lean_inc_ref(v_tree_3009_);
v_k_3010_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_k_3010_);
v_v_3011_ = lean_ctor_get(v___x_3008_, 1);
lean_inc(v_v_3011_);
lean_dec_ref(v___x_3008_);
v_size_3012_ = lean_ctor_get(v_tree_3009_, 0);
v___x_3013_ = lean_unsigned_to_nat(3u);
v___x_3014_ = lean_nat_mul(v___x_3013_, v_size_3012_);
v___x_3015_ = lean_nat_dec_lt(v___x_3014_, v_size_2998_);
lean_dec(v___x_3014_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3019_; 
lean_dec(v_l_3001_);
v___x_3016_ = lean_nat_add(v___x_3003_, v_size_3012_);
v___x_3017_ = lean_nat_add(v___x_3016_, v_size_2998_);
lean_dec(v___x_3016_);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 4, v_r_2814_);
lean_ctor_set(v___x_3006_, 3, v_tree_3009_);
lean_ctor_set(v___x_3006_, 2, v_v_3011_);
lean_ctor_set(v___x_3006_, 1, v_k_3010_);
lean_ctor_set(v___x_3006_, 0, v___x_3017_);
v___x_3019_ = v___x_3006_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v___x_3017_);
lean_ctor_set(v_reuseFailAlloc_3020_, 1, v_k_3010_);
lean_ctor_set(v_reuseFailAlloc_3020_, 2, v_v_3011_);
lean_ctor_set(v_reuseFailAlloc_3020_, 3, v_tree_3009_);
lean_ctor_set(v_reuseFailAlloc_3020_, 4, v_r_2814_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
else
{
lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3075_; 
lean_inc(v_r_3002_);
lean_inc(v_v_3000_);
lean_inc(v_k_2999_);
lean_inc(v_size_2998_);
v_isSharedCheck_3075_ = !lean_is_exclusive(v_r_2814_);
if (v_isSharedCheck_3075_ == 0)
{
lean_object* v_unused_3076_; lean_object* v_unused_3077_; lean_object* v_unused_3078_; lean_object* v_unused_3079_; lean_object* v_unused_3080_; 
v_unused_3076_ = lean_ctor_get(v_r_2814_, 4);
lean_dec(v_unused_3076_);
v_unused_3077_ = lean_ctor_get(v_r_2814_, 3);
lean_dec(v_unused_3077_);
v_unused_3078_ = lean_ctor_get(v_r_2814_, 2);
lean_dec(v_unused_3078_);
v_unused_3079_ = lean_ctor_get(v_r_2814_, 1);
lean_dec(v_unused_3079_);
v_unused_3080_ = lean_ctor_get(v_r_2814_, 0);
lean_dec(v_unused_3080_);
v___x_3022_ = v_r_2814_;
v_isShared_3023_ = v_isSharedCheck_3075_;
goto v_resetjp_3021_;
}
else
{
lean_dec(v_r_2814_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3075_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v_size_3024_; lean_object* v_k_3025_; lean_object* v_v_3026_; lean_object* v_l_3027_; lean_object* v_r_3028_; lean_object* v_size_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; uint8_t v___x_3032_; 
v_size_3024_ = lean_ctor_get(v_l_3001_, 0);
v_k_3025_ = lean_ctor_get(v_l_3001_, 1);
v_v_3026_ = lean_ctor_get(v_l_3001_, 2);
v_l_3027_ = lean_ctor_get(v_l_3001_, 3);
v_r_3028_ = lean_ctor_get(v_l_3001_, 4);
v_size_3029_ = lean_ctor_get(v_r_3002_, 0);
v___x_3030_ = lean_unsigned_to_nat(2u);
v___x_3031_ = lean_nat_mul(v___x_3030_, v_size_3029_);
v___x_3032_ = lean_nat_dec_lt(v_size_3024_, v___x_3031_);
lean_dec(v___x_3031_);
if (v___x_3032_ == 0)
{
lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3060_; 
lean_inc(v_r_3028_);
lean_inc(v_l_3027_);
lean_inc(v_v_3026_);
lean_inc(v_k_3025_);
v_isSharedCheck_3060_ = !lean_is_exclusive(v_l_3001_);
if (v_isSharedCheck_3060_ == 0)
{
lean_object* v_unused_3061_; lean_object* v_unused_3062_; lean_object* v_unused_3063_; lean_object* v_unused_3064_; lean_object* v_unused_3065_; 
v_unused_3061_ = lean_ctor_get(v_l_3001_, 4);
lean_dec(v_unused_3061_);
v_unused_3062_ = lean_ctor_get(v_l_3001_, 3);
lean_dec(v_unused_3062_);
v_unused_3063_ = lean_ctor_get(v_l_3001_, 2);
lean_dec(v_unused_3063_);
v_unused_3064_ = lean_ctor_get(v_l_3001_, 1);
lean_dec(v_unused_3064_);
v_unused_3065_ = lean_ctor_get(v_l_3001_, 0);
lean_dec(v_unused_3065_);
v___x_3034_ = v_l_3001_;
v_isShared_3035_ = v_isSharedCheck_3060_;
goto v_resetjp_3033_;
}
else
{
lean_dec(v_l_3001_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3060_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3050_; 
v___x_3036_ = lean_nat_add(v___x_3003_, v_size_3012_);
v___x_3037_ = lean_nat_add(v___x_3036_, v_size_2998_);
lean_dec(v_size_2998_);
if (lean_obj_tag(v_l_3027_) == 0)
{
lean_object* v_size_3058_; 
v_size_3058_ = lean_ctor_get(v_l_3027_, 0);
lean_inc(v_size_3058_);
v___y_3050_ = v_size_3058_;
goto v___jp_3049_;
}
else
{
lean_object* v___x_3059_; 
v___x_3059_ = lean_unsigned_to_nat(0u);
v___y_3050_ = v___x_3059_;
goto v___jp_3049_;
}
v___jp_3038_:
{
lean_object* v___x_3042_; lean_object* v___x_3044_; 
v___x_3042_ = lean_nat_add(v___y_3039_, v___y_3041_);
lean_dec(v___y_3041_);
lean_dec(v___y_3039_);
if (v_isShared_3035_ == 0)
{
lean_ctor_set(v___x_3034_, 4, v_r_3002_);
lean_ctor_set(v___x_3034_, 3, v_r_3028_);
lean_ctor_set(v___x_3034_, 2, v_v_3000_);
lean_ctor_set(v___x_3034_, 1, v_k_2999_);
lean_ctor_set(v___x_3034_, 0, v___x_3042_);
v___x_3044_ = v___x_3034_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v___x_3042_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v_k_2999_);
lean_ctor_set(v_reuseFailAlloc_3048_, 2, v_v_3000_);
lean_ctor_set(v_reuseFailAlloc_3048_, 3, v_r_3028_);
lean_ctor_set(v_reuseFailAlloc_3048_, 4, v_r_3002_);
v___x_3044_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
lean_object* v___x_3046_; 
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 4, v___x_3044_);
lean_ctor_set(v___x_3022_, 3, v___y_3040_);
lean_ctor_set(v___x_3022_, 2, v_v_3026_);
lean_ctor_set(v___x_3022_, 1, v_k_3025_);
lean_ctor_set(v___x_3022_, 0, v___x_3037_);
v___x_3046_ = v___x_3022_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v___x_3037_);
lean_ctor_set(v_reuseFailAlloc_3047_, 1, v_k_3025_);
lean_ctor_set(v_reuseFailAlloc_3047_, 2, v_v_3026_);
lean_ctor_set(v_reuseFailAlloc_3047_, 3, v___y_3040_);
lean_ctor_set(v_reuseFailAlloc_3047_, 4, v___x_3044_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
}
v___jp_3049_:
{
lean_object* v___x_3051_; lean_object* v___x_3053_; 
v___x_3051_ = lean_nat_add(v___x_3036_, v___y_3050_);
lean_dec(v___y_3050_);
lean_dec(v___x_3036_);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 4, v_l_3027_);
lean_ctor_set(v___x_3006_, 3, v_tree_3009_);
lean_ctor_set(v___x_3006_, 2, v_v_3011_);
lean_ctor_set(v___x_3006_, 1, v_k_3010_);
lean_ctor_set(v___x_3006_, 0, v___x_3051_);
v___x_3053_ = v___x_3006_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v___x_3051_);
lean_ctor_set(v_reuseFailAlloc_3057_, 1, v_k_3010_);
lean_ctor_set(v_reuseFailAlloc_3057_, 2, v_v_3011_);
lean_ctor_set(v_reuseFailAlloc_3057_, 3, v_tree_3009_);
lean_ctor_set(v_reuseFailAlloc_3057_, 4, v_l_3027_);
v___x_3053_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3054_; 
v___x_3054_ = lean_nat_add(v___x_3003_, v_size_3029_);
if (lean_obj_tag(v_r_3028_) == 0)
{
lean_object* v_size_3055_; 
v_size_3055_ = lean_ctor_get(v_r_3028_, 0);
lean_inc(v_size_3055_);
v___y_3039_ = v___x_3054_;
v___y_3040_ = v___x_3053_;
v___y_3041_ = v_size_3055_;
goto v___jp_3038_;
}
else
{
lean_object* v___x_3056_; 
v___x_3056_ = lean_unsigned_to_nat(0u);
v___y_3039_ = v___x_3054_;
v___y_3040_ = v___x_3053_;
v___y_3041_ = v___x_3056_;
goto v___jp_3038_;
}
}
}
}
}
else
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3070_; 
v___x_3066_ = lean_nat_add(v___x_3003_, v_size_3012_);
v___x_3067_ = lean_nat_add(v___x_3066_, v_size_2998_);
lean_dec(v_size_2998_);
v___x_3068_ = lean_nat_add(v___x_3066_, v_size_3024_);
lean_dec(v___x_3066_);
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 4, v_l_3001_);
lean_ctor_set(v___x_3022_, 3, v_tree_3009_);
lean_ctor_set(v___x_3022_, 2, v_v_3011_);
lean_ctor_set(v___x_3022_, 1, v_k_3010_);
lean_ctor_set(v___x_3022_, 0, v___x_3068_);
v___x_3070_ = v___x_3022_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v___x_3068_);
lean_ctor_set(v_reuseFailAlloc_3074_, 1, v_k_3010_);
lean_ctor_set(v_reuseFailAlloc_3074_, 2, v_v_3011_);
lean_ctor_set(v_reuseFailAlloc_3074_, 3, v_tree_3009_);
lean_ctor_set(v_reuseFailAlloc_3074_, 4, v_l_3001_);
v___x_3070_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
lean_object* v___x_3072_; 
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 4, v_r_3002_);
lean_ctor_set(v___x_3006_, 3, v___x_3070_);
lean_ctor_set(v___x_3006_, 2, v_v_3000_);
lean_ctor_set(v___x_3006_, 1, v_k_2999_);
lean_ctor_set(v___x_3006_, 0, v___x_3067_);
v___x_3072_ = v___x_3006_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v___x_3067_);
lean_ctor_set(v_reuseFailAlloc_3073_, 1, v_k_2999_);
lean_ctor_set(v_reuseFailAlloc_3073_, 2, v_v_3000_);
lean_ctor_set(v_reuseFailAlloc_3073_, 3, v___x_3070_);
lean_ctor_set(v_reuseFailAlloc_3073_, 4, v_r_3002_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
}
}
else
{
lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3134_; 
lean_inc(v_r_3002_);
lean_inc(v_v_3000_);
lean_inc(v_k_2999_);
lean_inc(v_size_2998_);
v_isSharedCheck_3134_ = !lean_is_exclusive(v_r_2814_);
if (v_isSharedCheck_3134_ == 0)
{
lean_object* v_unused_3135_; lean_object* v_unused_3136_; lean_object* v_unused_3137_; lean_object* v_unused_3138_; lean_object* v_unused_3139_; 
v_unused_3135_ = lean_ctor_get(v_r_2814_, 4);
lean_dec(v_unused_3135_);
v_unused_3136_ = lean_ctor_get(v_r_2814_, 3);
lean_dec(v_unused_3136_);
v_unused_3137_ = lean_ctor_get(v_r_2814_, 2);
lean_dec(v_unused_3137_);
v_unused_3138_ = lean_ctor_get(v_r_2814_, 1);
lean_dec(v_unused_3138_);
v_unused_3139_ = lean_ctor_get(v_r_2814_, 0);
lean_dec(v_unused_3139_);
v___x_3082_ = v_r_2814_;
v_isShared_3083_ = v_isSharedCheck_3134_;
goto v_resetjp_3081_;
}
else
{
lean_dec(v_r_2814_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3134_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
if (lean_obj_tag(v_l_3001_) == 0)
{
if (lean_obj_tag(v_r_3002_) == 0)
{
lean_object* v_k_3084_; lean_object* v_v_3085_; lean_object* v_size_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3090_; 
lean_inc(v_tree_3009_);
v_k_3084_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_k_3084_);
v_v_3085_ = lean_ctor_get(v___x_3008_, 1);
lean_inc(v_v_3085_);
lean_dec_ref(v___x_3008_);
v_size_3086_ = lean_ctor_get(v_l_3001_, 0);
v___x_3087_ = lean_nat_add(v___x_3003_, v_size_2998_);
lean_dec(v_size_2998_);
v___x_3088_ = lean_nat_add(v___x_3003_, v_size_3086_);
if (v_isShared_3083_ == 0)
{
lean_ctor_set(v___x_3082_, 4, v_l_3001_);
lean_ctor_set(v___x_3082_, 3, v_tree_3009_);
lean_ctor_set(v___x_3082_, 2, v_v_3085_);
lean_ctor_set(v___x_3082_, 1, v_k_3084_);
lean_ctor_set(v___x_3082_, 0, v___x_3088_);
v___x_3090_ = v___x_3082_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3088_);
lean_ctor_set(v_reuseFailAlloc_3094_, 1, v_k_3084_);
lean_ctor_set(v_reuseFailAlloc_3094_, 2, v_v_3085_);
lean_ctor_set(v_reuseFailAlloc_3094_, 3, v_tree_3009_);
lean_ctor_set(v_reuseFailAlloc_3094_, 4, v_l_3001_);
v___x_3090_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
lean_object* v___x_3092_; 
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 4, v_r_3002_);
lean_ctor_set(v___x_3006_, 3, v___x_3090_);
lean_ctor_set(v___x_3006_, 2, v_v_3000_);
lean_ctor_set(v___x_3006_, 1, v_k_2999_);
lean_ctor_set(v___x_3006_, 0, v___x_3087_);
v___x_3092_ = v___x_3006_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v___x_3087_);
lean_ctor_set(v_reuseFailAlloc_3093_, 1, v_k_2999_);
lean_ctor_set(v_reuseFailAlloc_3093_, 2, v_v_3000_);
lean_ctor_set(v_reuseFailAlloc_3093_, 3, v___x_3090_);
lean_ctor_set(v_reuseFailAlloc_3093_, 4, v_r_3002_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
}
else
{
lean_object* v_k_3095_; lean_object* v_v_3096_; lean_object* v_k_3097_; lean_object* v_v_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3112_; 
lean_dec(v_size_2998_);
v_k_3095_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_k_3095_);
v_v_3096_ = lean_ctor_get(v___x_3008_, 1);
lean_inc(v_v_3096_);
lean_dec_ref(v___x_3008_);
v_k_3097_ = lean_ctor_get(v_l_3001_, 1);
v_v_3098_ = lean_ctor_get(v_l_3001_, 2);
v_isSharedCheck_3112_ = !lean_is_exclusive(v_l_3001_);
if (v_isSharedCheck_3112_ == 0)
{
lean_object* v_unused_3113_; lean_object* v_unused_3114_; lean_object* v_unused_3115_; 
v_unused_3113_ = lean_ctor_get(v_l_3001_, 4);
lean_dec(v_unused_3113_);
v_unused_3114_ = lean_ctor_get(v_l_3001_, 3);
lean_dec(v_unused_3114_);
v_unused_3115_ = lean_ctor_get(v_l_3001_, 0);
lean_dec(v_unused_3115_);
v___x_3100_ = v_l_3001_;
v_isShared_3101_ = v_isSharedCheck_3112_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_v_3098_);
lean_inc(v_k_3097_);
lean_dec(v_l_3001_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3112_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3102_; lean_object* v___x_3104_; 
v___x_3102_ = lean_unsigned_to_nat(3u);
if (v_isShared_3101_ == 0)
{
lean_ctor_set(v___x_3100_, 4, v_r_3002_);
lean_ctor_set(v___x_3100_, 3, v_r_3002_);
lean_ctor_set(v___x_3100_, 2, v_v_3096_);
lean_ctor_set(v___x_3100_, 1, v_k_3095_);
lean_ctor_set(v___x_3100_, 0, v___x_3003_);
v___x_3104_ = v___x_3100_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v_k_3095_);
lean_ctor_set(v_reuseFailAlloc_3111_, 2, v_v_3096_);
lean_ctor_set(v_reuseFailAlloc_3111_, 3, v_r_3002_);
lean_ctor_set(v_reuseFailAlloc_3111_, 4, v_r_3002_);
v___x_3104_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
lean_object* v___x_3106_; 
if (v_isShared_3083_ == 0)
{
lean_ctor_set(v___x_3082_, 3, v_r_3002_);
lean_ctor_set(v___x_3082_, 0, v___x_3003_);
v___x_3106_ = v___x_3082_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v_k_2999_);
lean_ctor_set(v_reuseFailAlloc_3110_, 2, v_v_3000_);
lean_ctor_set(v_reuseFailAlloc_3110_, 3, v_r_3002_);
lean_ctor_set(v_reuseFailAlloc_3110_, 4, v_r_3002_);
v___x_3106_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
lean_object* v___x_3108_; 
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 4, v___x_3106_);
lean_ctor_set(v___x_3006_, 3, v___x_3104_);
lean_ctor_set(v___x_3006_, 2, v_v_3098_);
lean_ctor_set(v___x_3006_, 1, v_k_3097_);
lean_ctor_set(v___x_3006_, 0, v___x_3102_);
v___x_3108_ = v___x_3006_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v___x_3102_);
lean_ctor_set(v_reuseFailAlloc_3109_, 1, v_k_3097_);
lean_ctor_set(v_reuseFailAlloc_3109_, 2, v_v_3098_);
lean_ctor_set(v_reuseFailAlloc_3109_, 3, v___x_3104_);
lean_ctor_set(v_reuseFailAlloc_3109_, 4, v___x_3106_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3002_) == 0)
{
lean_object* v_k_3116_; lean_object* v_v_3117_; lean_object* v___x_3118_; lean_object* v___x_3120_; 
lean_dec(v_size_2998_);
v_k_3116_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_k_3116_);
v_v_3117_ = lean_ctor_get(v___x_3008_, 1);
lean_inc(v_v_3117_);
lean_dec_ref(v___x_3008_);
v___x_3118_ = lean_unsigned_to_nat(3u);
if (v_isShared_3083_ == 0)
{
lean_ctor_set(v___x_3082_, 4, v_l_3001_);
lean_ctor_set(v___x_3082_, 2, v_v_3117_);
lean_ctor_set(v___x_3082_, 1, v_k_3116_);
lean_ctor_set(v___x_3082_, 0, v___x_3003_);
v___x_3120_ = v___x_3082_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3124_, 1, v_k_3116_);
lean_ctor_set(v_reuseFailAlloc_3124_, 2, v_v_3117_);
lean_ctor_set(v_reuseFailAlloc_3124_, 3, v_l_3001_);
lean_ctor_set(v_reuseFailAlloc_3124_, 4, v_l_3001_);
v___x_3120_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
lean_object* v___x_3122_; 
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 4, v_r_3002_);
lean_ctor_set(v___x_3006_, 3, v___x_3120_);
lean_ctor_set(v___x_3006_, 2, v_v_3000_);
lean_ctor_set(v___x_3006_, 1, v_k_2999_);
lean_ctor_set(v___x_3006_, 0, v___x_3118_);
v___x_3122_ = v___x_3006_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3118_);
lean_ctor_set(v_reuseFailAlloc_3123_, 1, v_k_2999_);
lean_ctor_set(v_reuseFailAlloc_3123_, 2, v_v_3000_);
lean_ctor_set(v_reuseFailAlloc_3123_, 3, v___x_3120_);
lean_ctor_set(v_reuseFailAlloc_3123_, 4, v_r_3002_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
else
{
lean_object* v_k_3125_; lean_object* v_v_3126_; lean_object* v___x_3128_; 
v_k_3125_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_k_3125_);
v_v_3126_ = lean_ctor_get(v___x_3008_, 1);
lean_inc(v_v_3126_);
lean_dec_ref(v___x_3008_);
if (v_isShared_3083_ == 0)
{
lean_ctor_set(v___x_3082_, 3, v_r_3002_);
v___x_3128_ = v___x_3082_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_size_2998_);
lean_ctor_set(v_reuseFailAlloc_3133_, 1, v_k_2999_);
lean_ctor_set(v_reuseFailAlloc_3133_, 2, v_v_3000_);
lean_ctor_set(v_reuseFailAlloc_3133_, 3, v_r_3002_);
lean_ctor_set(v_reuseFailAlloc_3133_, 4, v_r_3002_);
v___x_3128_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
lean_object* v___x_3129_; lean_object* v___x_3131_; 
v___x_3129_ = lean_unsigned_to_nat(2u);
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 4, v___x_3128_);
lean_ctor_set(v___x_3006_, 3, v_r_3002_);
lean_ctor_set(v___x_3006_, 2, v_v_3126_);
lean_ctor_set(v___x_3006_, 1, v_k_3125_);
lean_ctor_set(v___x_3006_, 0, v___x_3129_);
v___x_3131_ = v___x_3006_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v___x_3129_);
lean_ctor_set(v_reuseFailAlloc_3132_, 1, v_k_3125_);
lean_ctor_set(v_reuseFailAlloc_3132_, 2, v_v_3126_);
lean_ctor_set(v_reuseFailAlloc_3132_, 3, v_r_3002_);
lean_ctor_set(v_reuseFailAlloc_3132_, 4, v___x_3128_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
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
lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3298_; 
lean_inc(v_r_3002_);
lean_inc(v_v_3000_);
lean_inc(v_k_2999_);
v_isSharedCheck_3298_ = !lean_is_exclusive(v_r_2814_);
if (v_isSharedCheck_3298_ == 0)
{
lean_object* v_unused_3299_; lean_object* v_unused_3300_; lean_object* v_unused_3301_; lean_object* v_unused_3302_; lean_object* v_unused_3303_; 
v_unused_3299_ = lean_ctor_get(v_r_2814_, 4);
lean_dec(v_unused_3299_);
v_unused_3300_ = lean_ctor_get(v_r_2814_, 3);
lean_dec(v_unused_3300_);
v_unused_3301_ = lean_ctor_get(v_r_2814_, 2);
lean_dec(v_unused_3301_);
v_unused_3302_ = lean_ctor_get(v_r_2814_, 1);
lean_dec(v_unused_3302_);
v_unused_3303_ = lean_ctor_get(v_r_2814_, 0);
lean_dec(v_unused_3303_);
v___x_3147_ = v_r_2814_;
v_isShared_3148_ = v_isSharedCheck_3298_;
goto v_resetjp_3146_;
}
else
{
lean_dec(v_r_2814_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3298_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3149_; lean_object* v_tree_3150_; 
v___x_3149_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_2999_, v_v_3000_, v_l_3001_, v_r_3002_);
v_tree_3150_ = lean_ctor_get(v___x_3149_, 2);
lean_inc(v_tree_3150_);
if (lean_obj_tag(v_tree_3150_) == 0)
{
lean_object* v_k_3151_; lean_object* v_v_3152_; lean_object* v_size_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; uint8_t v___x_3156_; 
v_k_3151_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_k_3151_);
v_v_3152_ = lean_ctor_get(v___x_3149_, 1);
lean_inc(v_v_3152_);
lean_dec_ref(v___x_3149_);
v_size_3153_ = lean_ctor_get(v_tree_3150_, 0);
v___x_3154_ = lean_unsigned_to_nat(3u);
v___x_3155_ = lean_nat_mul(v___x_3154_, v_size_3153_);
v___x_3156_ = lean_nat_dec_lt(v___x_3155_, v_size_2993_);
lean_dec(v___x_3155_);
if (v___x_3156_ == 0)
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3160_; 
lean_dec(v_r_2997_);
v___x_3157_ = lean_nat_add(v___x_3003_, v_size_2993_);
v___x_3158_ = lean_nat_add(v___x_3157_, v_size_3153_);
lean_dec(v___x_3157_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 4, v_tree_3150_);
lean_ctor_set(v___x_3147_, 3, v_l_2813_);
lean_ctor_set(v___x_3147_, 2, v_v_3152_);
lean_ctor_set(v___x_3147_, 1, v_k_3151_);
lean_ctor_set(v___x_3147_, 0, v___x_3158_);
v___x_3160_ = v___x_3147_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v___x_3158_);
lean_ctor_set(v_reuseFailAlloc_3161_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3161_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3161_, 3, v_l_2813_);
lean_ctor_set(v_reuseFailAlloc_3161_, 4, v_tree_3150_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
else
{
lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3227_; 
lean_inc(v_l_2996_);
lean_inc(v_v_2995_);
lean_inc(v_k_2994_);
lean_inc(v_size_2993_);
v_isSharedCheck_3227_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_3227_ == 0)
{
lean_object* v_unused_3228_; lean_object* v_unused_3229_; lean_object* v_unused_3230_; lean_object* v_unused_3231_; lean_object* v_unused_3232_; 
v_unused_3228_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_3228_);
v_unused_3229_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_3229_);
v_unused_3230_ = lean_ctor_get(v_l_2813_, 2);
lean_dec(v_unused_3230_);
v_unused_3231_ = lean_ctor_get(v_l_2813_, 1);
lean_dec(v_unused_3231_);
v_unused_3232_ = lean_ctor_get(v_l_2813_, 0);
lean_dec(v_unused_3232_);
v___x_3163_ = v_l_2813_;
v_isShared_3164_ = v_isSharedCheck_3227_;
goto v_resetjp_3162_;
}
else
{
lean_dec(v_l_2813_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3227_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v_size_3165_; lean_object* v_size_3166_; lean_object* v_k_3167_; lean_object* v_v_3168_; lean_object* v_l_3169_; lean_object* v_r_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; uint8_t v___x_3173_; 
v_size_3165_ = lean_ctor_get(v_l_2996_, 0);
v_size_3166_ = lean_ctor_get(v_r_2997_, 0);
v_k_3167_ = lean_ctor_get(v_r_2997_, 1);
v_v_3168_ = lean_ctor_get(v_r_2997_, 2);
v_l_3169_ = lean_ctor_get(v_r_2997_, 3);
v_r_3170_ = lean_ctor_get(v_r_2997_, 4);
v___x_3171_ = lean_unsigned_to_nat(2u);
v___x_3172_ = lean_nat_mul(v___x_3171_, v_size_3165_);
v___x_3173_ = lean_nat_dec_lt(v_size_3166_, v___x_3172_);
lean_dec(v___x_3172_);
if (v___x_3173_ == 0)
{
lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3211_; 
lean_inc(v_r_3170_);
lean_inc(v_l_3169_);
lean_inc(v_v_3168_);
lean_inc(v_k_3167_);
lean_del_object(v___x_3163_);
v_isSharedCheck_3211_ = !lean_is_exclusive(v_r_2997_);
if (v_isSharedCheck_3211_ == 0)
{
lean_object* v_unused_3212_; lean_object* v_unused_3213_; lean_object* v_unused_3214_; lean_object* v_unused_3215_; lean_object* v_unused_3216_; 
v_unused_3212_ = lean_ctor_get(v_r_2997_, 4);
lean_dec(v_unused_3212_);
v_unused_3213_ = lean_ctor_get(v_r_2997_, 3);
lean_dec(v_unused_3213_);
v_unused_3214_ = lean_ctor_get(v_r_2997_, 2);
lean_dec(v_unused_3214_);
v_unused_3215_ = lean_ctor_get(v_r_2997_, 1);
lean_dec(v_unused_3215_);
v_unused_3216_ = lean_ctor_get(v_r_2997_, 0);
lean_dec(v_unused_3216_);
v___x_3175_ = v_r_2997_;
v_isShared_3176_ = v_isSharedCheck_3211_;
goto v_resetjp_3174_;
}
else
{
lean_dec(v_r_2997_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3211_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___y_3180_; lean_object* v___y_3181_; lean_object* v___y_3182_; lean_object* v___x_3199_; lean_object* v___y_3201_; 
v___x_3177_ = lean_nat_add(v___x_3003_, v_size_2993_);
lean_dec(v_size_2993_);
v___x_3178_ = lean_nat_add(v___x_3177_, v_size_3153_);
lean_dec(v___x_3177_);
v___x_3199_ = lean_nat_add(v___x_3003_, v_size_3165_);
if (lean_obj_tag(v_l_3169_) == 0)
{
lean_object* v_size_3209_; 
v_size_3209_ = lean_ctor_get(v_l_3169_, 0);
lean_inc(v_size_3209_);
v___y_3201_ = v_size_3209_;
goto v___jp_3200_;
}
else
{
lean_object* v___x_3210_; 
v___x_3210_ = lean_unsigned_to_nat(0u);
v___y_3201_ = v___x_3210_;
goto v___jp_3200_;
}
v___jp_3179_:
{
lean_object* v___x_3183_; lean_object* v___x_3185_; 
v___x_3183_ = lean_nat_add(v___y_3180_, v___y_3182_);
lean_dec(v___y_3182_);
lean_dec(v___y_3180_);
lean_inc_ref(v_tree_3150_);
if (v_isShared_3176_ == 0)
{
lean_ctor_set(v___x_3175_, 4, v_tree_3150_);
lean_ctor_set(v___x_3175_, 3, v_r_3170_);
lean_ctor_set(v___x_3175_, 2, v_v_3152_);
lean_ctor_set(v___x_3175_, 1, v_k_3151_);
lean_ctor_set(v___x_3175_, 0, v___x_3183_);
v___x_3185_ = v___x_3175_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v___x_3183_);
lean_ctor_set(v_reuseFailAlloc_3198_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3198_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3198_, 3, v_r_3170_);
lean_ctor_set(v_reuseFailAlloc_3198_, 4, v_tree_3150_);
v___x_3185_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3192_; 
v_isSharedCheck_3192_ = !lean_is_exclusive(v_tree_3150_);
if (v_isSharedCheck_3192_ == 0)
{
lean_object* v_unused_3193_; lean_object* v_unused_3194_; lean_object* v_unused_3195_; lean_object* v_unused_3196_; lean_object* v_unused_3197_; 
v_unused_3193_ = lean_ctor_get(v_tree_3150_, 4);
lean_dec(v_unused_3193_);
v_unused_3194_ = lean_ctor_get(v_tree_3150_, 3);
lean_dec(v_unused_3194_);
v_unused_3195_ = lean_ctor_get(v_tree_3150_, 2);
lean_dec(v_unused_3195_);
v_unused_3196_ = lean_ctor_get(v_tree_3150_, 1);
lean_dec(v_unused_3196_);
v_unused_3197_ = lean_ctor_get(v_tree_3150_, 0);
lean_dec(v_unused_3197_);
v___x_3187_ = v_tree_3150_;
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
else
{
lean_dec(v_tree_3150_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___x_3190_; 
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 4, v___x_3185_);
lean_ctor_set(v___x_3187_, 3, v___y_3181_);
lean_ctor_set(v___x_3187_, 2, v_v_3168_);
lean_ctor_set(v___x_3187_, 1, v_k_3167_);
lean_ctor_set(v___x_3187_, 0, v___x_3178_);
v___x_3190_ = v___x_3187_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v___x_3178_);
lean_ctor_set(v_reuseFailAlloc_3191_, 1, v_k_3167_);
lean_ctor_set(v_reuseFailAlloc_3191_, 2, v_v_3168_);
lean_ctor_set(v_reuseFailAlloc_3191_, 3, v___y_3181_);
lean_ctor_set(v_reuseFailAlloc_3191_, 4, v___x_3185_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
}
v___jp_3200_:
{
lean_object* v___x_3202_; lean_object* v___x_3204_; 
v___x_3202_ = lean_nat_add(v___x_3199_, v___y_3201_);
lean_dec(v___y_3201_);
lean_dec(v___x_3199_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 4, v_l_3169_);
lean_ctor_set(v___x_3147_, 3, v_l_2996_);
lean_ctor_set(v___x_3147_, 2, v_v_2995_);
lean_ctor_set(v___x_3147_, 1, v_k_2994_);
lean_ctor_set(v___x_3147_, 0, v___x_3202_);
v___x_3204_ = v___x_3147_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3202_);
lean_ctor_set(v_reuseFailAlloc_3208_, 1, v_k_2994_);
lean_ctor_set(v_reuseFailAlloc_3208_, 2, v_v_2995_);
lean_ctor_set(v_reuseFailAlloc_3208_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3208_, 4, v_l_3169_);
v___x_3204_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
lean_object* v___x_3205_; 
v___x_3205_ = lean_nat_add(v___x_3003_, v_size_3153_);
if (lean_obj_tag(v_r_3170_) == 0)
{
lean_object* v_size_3206_; 
v_size_3206_ = lean_ctor_get(v_r_3170_, 0);
lean_inc(v_size_3206_);
v___y_3180_ = v___x_3205_;
v___y_3181_ = v___x_3204_;
v___y_3182_ = v_size_3206_;
goto v___jp_3179_;
}
else
{
lean_object* v___x_3207_; 
v___x_3207_ = lean_unsigned_to_nat(0u);
v___y_3180_ = v___x_3205_;
v___y_3181_ = v___x_3204_;
v___y_3182_ = v___x_3207_;
goto v___jp_3179_;
}
}
}
}
}
else
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3222_; 
v___x_3217_ = lean_nat_add(v___x_3003_, v_size_2993_);
lean_dec(v_size_2993_);
v___x_3218_ = lean_nat_add(v___x_3217_, v_size_3153_);
lean_dec(v___x_3217_);
v___x_3219_ = lean_nat_add(v___x_3003_, v_size_3153_);
v___x_3220_ = lean_nat_add(v___x_3219_, v_size_3166_);
lean_dec(v___x_3219_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 4, v_tree_3150_);
lean_ctor_set(v___x_3147_, 3, v_r_2997_);
lean_ctor_set(v___x_3147_, 2, v_v_3152_);
lean_ctor_set(v___x_3147_, 1, v_k_3151_);
lean_ctor_set(v___x_3147_, 0, v___x_3220_);
v___x_3222_ = v___x_3147_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___x_3220_);
lean_ctor_set(v_reuseFailAlloc_3226_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3226_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3226_, 3, v_r_2997_);
lean_ctor_set(v_reuseFailAlloc_3226_, 4, v_tree_3150_);
v___x_3222_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
lean_object* v___x_3224_; 
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 4, v___x_3222_);
lean_ctor_set(v___x_3163_, 0, v___x_3218_);
v___x_3224_ = v___x_3163_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3225_; 
v_reuseFailAlloc_3225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3225_, 0, v___x_3218_);
lean_ctor_set(v_reuseFailAlloc_3225_, 1, v_k_2994_);
lean_ctor_set(v_reuseFailAlloc_3225_, 2, v_v_2995_);
lean_ctor_set(v_reuseFailAlloc_3225_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3225_, 4, v___x_3222_);
v___x_3224_ = v_reuseFailAlloc_3225_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
return v___x_3224_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_2996_) == 0)
{
lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3256_; 
lean_inc_ref(v_l_2996_);
lean_inc(v_v_2995_);
lean_inc(v_k_2994_);
lean_inc(v_size_2993_);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_3256_ == 0)
{
lean_object* v_unused_3257_; lean_object* v_unused_3258_; lean_object* v_unused_3259_; lean_object* v_unused_3260_; lean_object* v_unused_3261_; 
v_unused_3257_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_3257_);
v_unused_3258_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_3258_);
v_unused_3259_ = lean_ctor_get(v_l_2813_, 2);
lean_dec(v_unused_3259_);
v_unused_3260_ = lean_ctor_get(v_l_2813_, 1);
lean_dec(v_unused_3260_);
v_unused_3261_ = lean_ctor_get(v_l_2813_, 0);
lean_dec(v_unused_3261_);
v___x_3234_ = v_l_2813_;
v_isShared_3235_ = v_isSharedCheck_3256_;
goto v_resetjp_3233_;
}
else
{
lean_dec(v_l_2813_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3256_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
if (lean_obj_tag(v_r_2997_) == 0)
{
lean_object* v_k_3236_; lean_object* v_v_3237_; lean_object* v_size_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3242_; 
v_k_3236_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_k_3236_);
v_v_3237_ = lean_ctor_get(v___x_3149_, 1);
lean_inc(v_v_3237_);
lean_dec_ref(v___x_3149_);
v_size_3238_ = lean_ctor_get(v_r_2997_, 0);
v___x_3239_ = lean_nat_add(v___x_3003_, v_size_2993_);
lean_dec(v_size_2993_);
v___x_3240_ = lean_nat_add(v___x_3003_, v_size_3238_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 4, v_tree_3150_);
lean_ctor_set(v___x_3147_, 3, v_r_2997_);
lean_ctor_set(v___x_3147_, 2, v_v_3237_);
lean_ctor_set(v___x_3147_, 1, v_k_3236_);
lean_ctor_set(v___x_3147_, 0, v___x_3240_);
v___x_3242_ = v___x_3147_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3240_);
lean_ctor_set(v_reuseFailAlloc_3246_, 1, v_k_3236_);
lean_ctor_set(v_reuseFailAlloc_3246_, 2, v_v_3237_);
lean_ctor_set(v_reuseFailAlloc_3246_, 3, v_r_2997_);
lean_ctor_set(v_reuseFailAlloc_3246_, 4, v_tree_3150_);
v___x_3242_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
lean_object* v___x_3244_; 
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 4, v___x_3242_);
lean_ctor_set(v___x_3234_, 0, v___x_3239_);
v___x_3244_ = v___x_3234_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3239_);
lean_ctor_set(v_reuseFailAlloc_3245_, 1, v_k_2994_);
lean_ctor_set(v_reuseFailAlloc_3245_, 2, v_v_2995_);
lean_ctor_set(v_reuseFailAlloc_3245_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3245_, 4, v___x_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
else
{
lean_object* v_k_3247_; lean_object* v_v_3248_; lean_object* v___x_3249_; lean_object* v___x_3251_; 
lean_dec(v_size_2993_);
v_k_3247_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_k_3247_);
v_v_3248_ = lean_ctor_get(v___x_3149_, 1);
lean_inc(v_v_3248_);
lean_dec_ref(v___x_3149_);
v___x_3249_ = lean_unsigned_to_nat(3u);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 4, v_r_2997_);
lean_ctor_set(v___x_3147_, 3, v_r_2997_);
lean_ctor_set(v___x_3147_, 2, v_v_3248_);
lean_ctor_set(v___x_3147_, 1, v_k_3247_);
lean_ctor_set(v___x_3147_, 0, v___x_3003_);
v___x_3251_ = v___x_3147_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3255_, 1, v_k_3247_);
lean_ctor_set(v_reuseFailAlloc_3255_, 2, v_v_3248_);
lean_ctor_set(v_reuseFailAlloc_3255_, 3, v_r_2997_);
lean_ctor_set(v_reuseFailAlloc_3255_, 4, v_r_2997_);
v___x_3251_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
lean_object* v___x_3253_; 
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 4, v___x_3251_);
lean_ctor_set(v___x_3234_, 0, v___x_3249_);
v___x_3253_ = v___x_3234_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v___x_3249_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v_k_2994_);
lean_ctor_set(v_reuseFailAlloc_3254_, 2, v_v_2995_);
lean_ctor_set(v_reuseFailAlloc_3254_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3254_, 4, v___x_3251_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_2997_) == 0)
{
lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3286_; 
lean_inc(v_l_2996_);
lean_inc(v_v_2995_);
lean_inc(v_k_2994_);
v_isSharedCheck_3286_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_3286_ == 0)
{
lean_object* v_unused_3287_; lean_object* v_unused_3288_; lean_object* v_unused_3289_; lean_object* v_unused_3290_; lean_object* v_unused_3291_; 
v_unused_3287_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_3287_);
v_unused_3288_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_3288_);
v_unused_3289_ = lean_ctor_get(v_l_2813_, 2);
lean_dec(v_unused_3289_);
v_unused_3290_ = lean_ctor_get(v_l_2813_, 1);
lean_dec(v_unused_3290_);
v_unused_3291_ = lean_ctor_get(v_l_2813_, 0);
lean_dec(v_unused_3291_);
v___x_3263_ = v_l_2813_;
v_isShared_3264_ = v_isSharedCheck_3286_;
goto v_resetjp_3262_;
}
else
{
lean_dec(v_l_2813_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3286_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v_k_3265_; lean_object* v_v_3266_; lean_object* v_k_3267_; lean_object* v_v_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3282_; 
v_k_3265_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_k_3265_);
v_v_3266_ = lean_ctor_get(v___x_3149_, 1);
lean_inc(v_v_3266_);
lean_dec_ref(v___x_3149_);
v_k_3267_ = lean_ctor_get(v_r_2997_, 1);
v_v_3268_ = lean_ctor_get(v_r_2997_, 2);
v_isSharedCheck_3282_ = !lean_is_exclusive(v_r_2997_);
if (v_isSharedCheck_3282_ == 0)
{
lean_object* v_unused_3283_; lean_object* v_unused_3284_; lean_object* v_unused_3285_; 
v_unused_3283_ = lean_ctor_get(v_r_2997_, 4);
lean_dec(v_unused_3283_);
v_unused_3284_ = lean_ctor_get(v_r_2997_, 3);
lean_dec(v_unused_3284_);
v_unused_3285_ = lean_ctor_get(v_r_2997_, 0);
lean_dec(v_unused_3285_);
v___x_3270_ = v_r_2997_;
v_isShared_3271_ = v_isSharedCheck_3282_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_v_3268_);
lean_inc(v_k_3267_);
lean_dec(v_r_2997_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3282_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3272_; lean_object* v___x_3274_; 
v___x_3272_ = lean_unsigned_to_nat(3u);
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 4, v_l_2996_);
lean_ctor_set(v___x_3270_, 3, v_l_2996_);
lean_ctor_set(v___x_3270_, 2, v_v_2995_);
lean_ctor_set(v___x_3270_, 1, v_k_2994_);
lean_ctor_set(v___x_3270_, 0, v___x_3003_);
v___x_3274_ = v___x_3270_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3281_, 1, v_k_2994_);
lean_ctor_set(v_reuseFailAlloc_3281_, 2, v_v_2995_);
lean_ctor_set(v_reuseFailAlloc_3281_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3281_, 4, v_l_2996_);
v___x_3274_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
lean_object* v___x_3276_; 
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 4, v_l_2996_);
lean_ctor_set(v___x_3147_, 3, v_l_2996_);
lean_ctor_set(v___x_3147_, 2, v_v_3266_);
lean_ctor_set(v___x_3147_, 1, v_k_3265_);
lean_ctor_set(v___x_3147_, 0, v___x_3003_);
v___x_3276_ = v___x_3147_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3280_, 1, v_k_3265_);
lean_ctor_set(v_reuseFailAlloc_3280_, 2, v_v_3266_);
lean_ctor_set(v_reuseFailAlloc_3280_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3280_, 4, v_l_2996_);
v___x_3276_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
lean_object* v___x_3278_; 
if (v_isShared_3264_ == 0)
{
lean_ctor_set(v___x_3263_, 4, v___x_3276_);
lean_ctor_set(v___x_3263_, 3, v___x_3274_);
lean_ctor_set(v___x_3263_, 2, v_v_3268_);
lean_ctor_set(v___x_3263_, 1, v_k_3267_);
lean_ctor_set(v___x_3263_, 0, v___x_3272_);
v___x_3278_ = v___x_3263_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3272_);
lean_ctor_set(v_reuseFailAlloc_3279_, 1, v_k_3267_);
lean_ctor_set(v_reuseFailAlloc_3279_, 2, v_v_3268_);
lean_ctor_set(v_reuseFailAlloc_3279_, 3, v___x_3274_);
lean_ctor_set(v_reuseFailAlloc_3279_, 4, v___x_3276_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
}
}
else
{
lean_object* v_k_3292_; lean_object* v_v_3293_; lean_object* v___x_3294_; lean_object* v___x_3296_; 
v_k_3292_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_k_3292_);
v_v_3293_ = lean_ctor_get(v___x_3149_, 1);
lean_inc(v_v_3293_);
lean_dec_ref(v___x_3149_);
v___x_3294_ = lean_unsigned_to_nat(2u);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 4, v_r_2997_);
lean_ctor_set(v___x_3147_, 3, v_l_2813_);
lean_ctor_set(v___x_3147_, 2, v_v_3293_);
lean_ctor_set(v___x_3147_, 1, v_k_3292_);
lean_ctor_set(v___x_3147_, 0, v___x_3294_);
v___x_3296_ = v___x_3147_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v___x_3294_);
lean_ctor_set(v_reuseFailAlloc_3297_, 1, v_k_3292_);
lean_ctor_set(v_reuseFailAlloc_3297_, 2, v_v_3293_);
lean_ctor_set(v_reuseFailAlloc_3297_, 3, v_l_2813_);
lean_ctor_set(v_reuseFailAlloc_3297_, 4, v_r_2997_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
}
}
}
}
}
else
{
return v_l_2813_;
}
}
else
{
return v_r_2814_;
}
}
default: 
{
lean_object* v_impl_3304_; lean_object* v___x_3305_; 
v_impl_3304_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_2809_, v_r_2814_);
v___x_3305_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3304_) == 0)
{
if (lean_obj_tag(v_l_2813_) == 0)
{
lean_object* v_size_3306_; lean_object* v_size_3307_; lean_object* v_k_3308_; lean_object* v_v_3309_; lean_object* v_l_3310_; lean_object* v_r_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; uint8_t v___x_3314_; 
v_size_3306_ = lean_ctor_get(v_impl_3304_, 0);
v_size_3307_ = lean_ctor_get(v_l_2813_, 0);
v_k_3308_ = lean_ctor_get(v_l_2813_, 1);
v_v_3309_ = lean_ctor_get(v_l_2813_, 2);
v_l_3310_ = lean_ctor_get(v_l_2813_, 3);
v_r_3311_ = lean_ctor_get(v_l_2813_, 4);
lean_inc(v_r_3311_);
v___x_3312_ = lean_unsigned_to_nat(3u);
v___x_3313_ = lean_nat_mul(v___x_3312_, v_size_3306_);
v___x_3314_ = lean_nat_dec_lt(v___x_3313_, v_size_3307_);
lean_dec(v___x_3313_);
if (v___x_3314_ == 0)
{
lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3318_; 
lean_dec(v_r_3311_);
v___x_3315_ = lean_nat_add(v___x_3305_, v_size_3307_);
v___x_3316_ = lean_nat_add(v___x_3315_, v_size_3306_);
lean_dec(v___x_3315_);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_impl_3304_);
lean_ctor_set(v___x_2816_, 0, v___x_3316_);
v___x_3318_ = v___x_2816_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v___x_3316_);
lean_ctor_set(v_reuseFailAlloc_3319_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3319_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3319_, 3, v_l_2813_);
lean_ctor_set(v_reuseFailAlloc_3319_, 4, v_impl_3304_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
else
{
lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3385_; 
lean_inc(v_l_3310_);
lean_inc(v_v_3309_);
lean_inc(v_k_3308_);
lean_inc(v_size_3307_);
v_isSharedCheck_3385_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_3385_ == 0)
{
lean_object* v_unused_3386_; lean_object* v_unused_3387_; lean_object* v_unused_3388_; lean_object* v_unused_3389_; lean_object* v_unused_3390_; 
v_unused_3386_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_3386_);
v_unused_3387_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_3387_);
v_unused_3388_ = lean_ctor_get(v_l_2813_, 2);
lean_dec(v_unused_3388_);
v_unused_3389_ = lean_ctor_get(v_l_2813_, 1);
lean_dec(v_unused_3389_);
v_unused_3390_ = lean_ctor_get(v_l_2813_, 0);
lean_dec(v_unused_3390_);
v___x_3321_ = v_l_2813_;
v_isShared_3322_ = v_isSharedCheck_3385_;
goto v_resetjp_3320_;
}
else
{
lean_dec(v_l_2813_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3385_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v_size_3323_; lean_object* v_size_3324_; lean_object* v_k_3325_; lean_object* v_v_3326_; lean_object* v_l_3327_; lean_object* v_r_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; uint8_t v___x_3331_; 
v_size_3323_ = lean_ctor_get(v_l_3310_, 0);
v_size_3324_ = lean_ctor_get(v_r_3311_, 0);
v_k_3325_ = lean_ctor_get(v_r_3311_, 1);
v_v_3326_ = lean_ctor_get(v_r_3311_, 2);
v_l_3327_ = lean_ctor_get(v_r_3311_, 3);
v_r_3328_ = lean_ctor_get(v_r_3311_, 4);
v___x_3329_ = lean_unsigned_to_nat(2u);
v___x_3330_ = lean_nat_mul(v___x_3329_, v_size_3323_);
v___x_3331_ = lean_nat_dec_lt(v_size_3324_, v___x_3330_);
lean_dec(v___x_3330_);
if (v___x_3331_ == 0)
{
lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3360_; 
lean_inc(v_r_3328_);
lean_inc(v_l_3327_);
lean_inc(v_v_3326_);
lean_inc(v_k_3325_);
v_isSharedCheck_3360_ = !lean_is_exclusive(v_r_3311_);
if (v_isSharedCheck_3360_ == 0)
{
lean_object* v_unused_3361_; lean_object* v_unused_3362_; lean_object* v_unused_3363_; lean_object* v_unused_3364_; lean_object* v_unused_3365_; 
v_unused_3361_ = lean_ctor_get(v_r_3311_, 4);
lean_dec(v_unused_3361_);
v_unused_3362_ = lean_ctor_get(v_r_3311_, 3);
lean_dec(v_unused_3362_);
v_unused_3363_ = lean_ctor_get(v_r_3311_, 2);
lean_dec(v_unused_3363_);
v_unused_3364_ = lean_ctor_get(v_r_3311_, 1);
lean_dec(v_unused_3364_);
v_unused_3365_ = lean_ctor_get(v_r_3311_, 0);
lean_dec(v_unused_3365_);
v___x_3333_ = v_r_3311_;
v_isShared_3334_ = v_isSharedCheck_3360_;
goto v_resetjp_3332_;
}
else
{
lean_dec(v_r_3311_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3360_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___x_3348_; lean_object* v___y_3350_; 
v___x_3335_ = lean_nat_add(v___x_3305_, v_size_3307_);
lean_dec(v_size_3307_);
v___x_3336_ = lean_nat_add(v___x_3335_, v_size_3306_);
lean_dec(v___x_3335_);
v___x_3348_ = lean_nat_add(v___x_3305_, v_size_3323_);
if (lean_obj_tag(v_l_3327_) == 0)
{
lean_object* v_size_3358_; 
v_size_3358_ = lean_ctor_get(v_l_3327_, 0);
lean_inc(v_size_3358_);
v___y_3350_ = v_size_3358_;
goto v___jp_3349_;
}
else
{
lean_object* v___x_3359_; 
v___x_3359_ = lean_unsigned_to_nat(0u);
v___y_3350_ = v___x_3359_;
goto v___jp_3349_;
}
v___jp_3337_:
{
lean_object* v___x_3341_; lean_object* v___x_3343_; 
v___x_3341_ = lean_nat_add(v___y_3339_, v___y_3340_);
lean_dec(v___y_3340_);
lean_dec(v___y_3339_);
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 4, v_impl_3304_);
lean_ctor_set(v___x_3333_, 3, v_r_3328_);
lean_ctor_set(v___x_3333_, 2, v_v_2812_);
lean_ctor_set(v___x_3333_, 1, v_k_2811_);
lean_ctor_set(v___x_3333_, 0, v___x_3341_);
v___x_3343_ = v___x_3333_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v___x_3341_);
lean_ctor_set(v_reuseFailAlloc_3347_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3347_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3347_, 3, v_r_3328_);
lean_ctor_set(v_reuseFailAlloc_3347_, 4, v_impl_3304_);
v___x_3343_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
lean_object* v___x_3345_; 
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 4, v___x_3343_);
lean_ctor_set(v___x_3321_, 3, v___y_3338_);
lean_ctor_set(v___x_3321_, 2, v_v_3326_);
lean_ctor_set(v___x_3321_, 1, v_k_3325_);
lean_ctor_set(v___x_3321_, 0, v___x_3336_);
v___x_3345_ = v___x_3321_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v___x_3336_);
lean_ctor_set(v_reuseFailAlloc_3346_, 1, v_k_3325_);
lean_ctor_set(v_reuseFailAlloc_3346_, 2, v_v_3326_);
lean_ctor_set(v_reuseFailAlloc_3346_, 3, v___y_3338_);
lean_ctor_set(v_reuseFailAlloc_3346_, 4, v___x_3343_);
v___x_3345_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
return v___x_3345_;
}
}
}
v___jp_3349_:
{
lean_object* v___x_3351_; lean_object* v___x_3353_; 
v___x_3351_ = lean_nat_add(v___x_3348_, v___y_3350_);
lean_dec(v___y_3350_);
lean_dec(v___x_3348_);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_l_3327_);
lean_ctor_set(v___x_2816_, 3, v_l_3310_);
lean_ctor_set(v___x_2816_, 2, v_v_3309_);
lean_ctor_set(v___x_2816_, 1, v_k_3308_);
lean_ctor_set(v___x_2816_, 0, v___x_3351_);
v___x_3353_ = v___x_2816_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v___x_3351_);
lean_ctor_set(v_reuseFailAlloc_3357_, 1, v_k_3308_);
lean_ctor_set(v_reuseFailAlloc_3357_, 2, v_v_3309_);
lean_ctor_set(v_reuseFailAlloc_3357_, 3, v_l_3310_);
lean_ctor_set(v_reuseFailAlloc_3357_, 4, v_l_3327_);
v___x_3353_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
lean_object* v___x_3354_; 
v___x_3354_ = lean_nat_add(v___x_3305_, v_size_3306_);
if (lean_obj_tag(v_r_3328_) == 0)
{
lean_object* v_size_3355_; 
v_size_3355_ = lean_ctor_get(v_r_3328_, 0);
lean_inc(v_size_3355_);
v___y_3338_ = v___x_3353_;
v___y_3339_ = v___x_3354_;
v___y_3340_ = v_size_3355_;
goto v___jp_3337_;
}
else
{
lean_object* v___x_3356_; 
v___x_3356_ = lean_unsigned_to_nat(0u);
v___y_3338_ = v___x_3353_;
v___y_3339_ = v___x_3354_;
v___y_3340_ = v___x_3356_;
goto v___jp_3337_;
}
}
}
}
}
else
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3371_; 
lean_del_object(v___x_2816_);
v___x_3366_ = lean_nat_add(v___x_3305_, v_size_3307_);
lean_dec(v_size_3307_);
v___x_3367_ = lean_nat_add(v___x_3366_, v_size_3306_);
lean_dec(v___x_3366_);
v___x_3368_ = lean_nat_add(v___x_3305_, v_size_3306_);
v___x_3369_ = lean_nat_add(v___x_3368_, v_size_3324_);
lean_dec(v___x_3368_);
lean_inc_ref(v_impl_3304_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 4, v_impl_3304_);
lean_ctor_set(v___x_3321_, 3, v_r_3311_);
lean_ctor_set(v___x_3321_, 2, v_v_2812_);
lean_ctor_set(v___x_3321_, 1, v_k_2811_);
lean_ctor_set(v___x_3321_, 0, v___x_3369_);
v___x_3371_ = v___x_3321_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3369_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3384_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3384_, 3, v_r_3311_);
lean_ctor_set(v_reuseFailAlloc_3384_, 4, v_impl_3304_);
v___x_3371_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
v_isSharedCheck_3378_ = !lean_is_exclusive(v_impl_3304_);
if (v_isSharedCheck_3378_ == 0)
{
lean_object* v_unused_3379_; lean_object* v_unused_3380_; lean_object* v_unused_3381_; lean_object* v_unused_3382_; lean_object* v_unused_3383_; 
v_unused_3379_ = lean_ctor_get(v_impl_3304_, 4);
lean_dec(v_unused_3379_);
v_unused_3380_ = lean_ctor_get(v_impl_3304_, 3);
lean_dec(v_unused_3380_);
v_unused_3381_ = lean_ctor_get(v_impl_3304_, 2);
lean_dec(v_unused_3381_);
v_unused_3382_ = lean_ctor_get(v_impl_3304_, 1);
lean_dec(v_unused_3382_);
v_unused_3383_ = lean_ctor_get(v_impl_3304_, 0);
lean_dec(v_unused_3383_);
v___x_3373_ = v_impl_3304_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_dec(v_impl_3304_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
lean_ctor_set(v___x_3373_, 4, v___x_3371_);
lean_ctor_set(v___x_3373_, 3, v_l_3310_);
lean_ctor_set(v___x_3373_, 2, v_v_3309_);
lean_ctor_set(v___x_3373_, 1, v_k_3308_);
lean_ctor_set(v___x_3373_, 0, v___x_3367_);
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v___x_3367_);
lean_ctor_set(v_reuseFailAlloc_3377_, 1, v_k_3308_);
lean_ctor_set(v_reuseFailAlloc_3377_, 2, v_v_3309_);
lean_ctor_set(v_reuseFailAlloc_3377_, 3, v_l_3310_);
lean_ctor_set(v_reuseFailAlloc_3377_, 4, v___x_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3391_; lean_object* v___x_3392_; lean_object* v___x_3394_; 
v_size_3391_ = lean_ctor_get(v_impl_3304_, 0);
v___x_3392_ = lean_nat_add(v___x_3305_, v_size_3391_);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_impl_3304_);
lean_ctor_set(v___x_2816_, 0, v___x_3392_);
v___x_3394_ = v___x_2816_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v___x_3392_);
lean_ctor_set(v_reuseFailAlloc_3395_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3395_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3395_, 3, v_l_2813_);
lean_ctor_set(v_reuseFailAlloc_3395_, 4, v_impl_3304_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
else
{
if (lean_obj_tag(v_l_2813_) == 0)
{
lean_object* v_l_3396_; 
v_l_3396_ = lean_ctor_get(v_l_2813_, 3);
if (lean_obj_tag(v_l_3396_) == 0)
{
lean_object* v_r_3397_; 
lean_inc_ref(v_l_3396_);
v_r_3397_ = lean_ctor_get(v_l_2813_, 4);
lean_inc(v_r_3397_);
if (lean_obj_tag(v_r_3397_) == 0)
{
lean_object* v_size_3398_; lean_object* v_k_3399_; lean_object* v_v_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3413_; 
v_size_3398_ = lean_ctor_get(v_l_2813_, 0);
v_k_3399_ = lean_ctor_get(v_l_2813_, 1);
v_v_3400_ = lean_ctor_get(v_l_2813_, 2);
v_isSharedCheck_3413_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_3413_ == 0)
{
lean_object* v_unused_3414_; lean_object* v_unused_3415_; 
v_unused_3414_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_3414_);
v_unused_3415_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_3415_);
v___x_3402_ = v_l_2813_;
v_isShared_3403_ = v_isSharedCheck_3413_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_v_3400_);
lean_inc(v_k_3399_);
lean_inc(v_size_3398_);
lean_dec(v_l_2813_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3413_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v_size_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3408_; 
v_size_3404_ = lean_ctor_get(v_r_3397_, 0);
v___x_3405_ = lean_nat_add(v___x_3305_, v_size_3398_);
lean_dec(v_size_3398_);
v___x_3406_ = lean_nat_add(v___x_3305_, v_size_3404_);
if (v_isShared_3403_ == 0)
{
lean_ctor_set(v___x_3402_, 4, v_impl_3304_);
lean_ctor_set(v___x_3402_, 3, v_r_3397_);
lean_ctor_set(v___x_3402_, 2, v_v_2812_);
lean_ctor_set(v___x_3402_, 1, v_k_2811_);
lean_ctor_set(v___x_3402_, 0, v___x_3406_);
v___x_3408_ = v___x_3402_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v___x_3406_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3412_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3412_, 3, v_r_3397_);
lean_ctor_set(v_reuseFailAlloc_3412_, 4, v_impl_3304_);
v___x_3408_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
lean_object* v___x_3410_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v___x_3408_);
lean_ctor_set(v___x_2816_, 3, v_l_3396_);
lean_ctor_set(v___x_2816_, 2, v_v_3400_);
lean_ctor_set(v___x_2816_, 1, v_k_3399_);
lean_ctor_set(v___x_2816_, 0, v___x_3405_);
v___x_3410_ = v___x_2816_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v___x_3405_);
lean_ctor_set(v_reuseFailAlloc_3411_, 1, v_k_3399_);
lean_ctor_set(v_reuseFailAlloc_3411_, 2, v_v_3400_);
lean_ctor_set(v_reuseFailAlloc_3411_, 3, v_l_3396_);
lean_ctor_set(v_reuseFailAlloc_3411_, 4, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
}
else
{
lean_object* v_k_3416_; lean_object* v_v_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3428_; 
v_k_3416_ = lean_ctor_get(v_l_2813_, 1);
v_v_3417_ = lean_ctor_get(v_l_2813_, 2);
v_isSharedCheck_3428_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_3428_ == 0)
{
lean_object* v_unused_3429_; lean_object* v_unused_3430_; lean_object* v_unused_3431_; 
v_unused_3429_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_3429_);
v_unused_3430_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_3430_);
v_unused_3431_ = lean_ctor_get(v_l_2813_, 0);
lean_dec(v_unused_3431_);
v___x_3419_ = v_l_2813_;
v_isShared_3420_ = v_isSharedCheck_3428_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_v_3417_);
lean_inc(v_k_3416_);
lean_dec(v_l_2813_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3428_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3421_; lean_object* v___x_3423_; 
v___x_3421_ = lean_unsigned_to_nat(3u);
if (v_isShared_3420_ == 0)
{
lean_ctor_set(v___x_3419_, 3, v_r_3397_);
lean_ctor_set(v___x_3419_, 2, v_v_2812_);
lean_ctor_set(v___x_3419_, 1, v_k_2811_);
lean_ctor_set(v___x_3419_, 0, v___x_3305_);
v___x_3423_ = v___x_3419_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3427_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3427_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3427_, 3, v_r_3397_);
lean_ctor_set(v_reuseFailAlloc_3427_, 4, v_r_3397_);
v___x_3423_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
lean_object* v___x_3425_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v___x_3423_);
lean_ctor_set(v___x_2816_, 3, v_l_3396_);
lean_ctor_set(v___x_2816_, 2, v_v_3417_);
lean_ctor_set(v___x_2816_, 1, v_k_3416_);
lean_ctor_set(v___x_2816_, 0, v___x_3421_);
v___x_3425_ = v___x_2816_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v___x_3421_);
lean_ctor_set(v_reuseFailAlloc_3426_, 1, v_k_3416_);
lean_ctor_set(v_reuseFailAlloc_3426_, 2, v_v_3417_);
lean_ctor_set(v_reuseFailAlloc_3426_, 3, v_l_3396_);
lean_ctor_set(v_reuseFailAlloc_3426_, 4, v___x_3423_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
}
else
{
lean_object* v_r_3432_; 
v_r_3432_ = lean_ctor_get(v_l_2813_, 4);
lean_inc(v_r_3432_);
if (lean_obj_tag(v_r_3432_) == 0)
{
lean_object* v_k_3433_; lean_object* v_v_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3457_; 
lean_inc(v_l_3396_);
v_k_3433_ = lean_ctor_get(v_l_2813_, 1);
v_v_3434_ = lean_ctor_get(v_l_2813_, 2);
v_isSharedCheck_3457_ = !lean_is_exclusive(v_l_2813_);
if (v_isSharedCheck_3457_ == 0)
{
lean_object* v_unused_3458_; lean_object* v_unused_3459_; lean_object* v_unused_3460_; 
v_unused_3458_ = lean_ctor_get(v_l_2813_, 4);
lean_dec(v_unused_3458_);
v_unused_3459_ = lean_ctor_get(v_l_2813_, 3);
lean_dec(v_unused_3459_);
v_unused_3460_ = lean_ctor_get(v_l_2813_, 0);
lean_dec(v_unused_3460_);
v___x_3436_ = v_l_2813_;
v_isShared_3437_ = v_isSharedCheck_3457_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_v_3434_);
lean_inc(v_k_3433_);
lean_dec(v_l_2813_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3457_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v_k_3438_; lean_object* v_v_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3453_; 
v_k_3438_ = lean_ctor_get(v_r_3432_, 1);
v_v_3439_ = lean_ctor_get(v_r_3432_, 2);
v_isSharedCheck_3453_ = !lean_is_exclusive(v_r_3432_);
if (v_isSharedCheck_3453_ == 0)
{
lean_object* v_unused_3454_; lean_object* v_unused_3455_; lean_object* v_unused_3456_; 
v_unused_3454_ = lean_ctor_get(v_r_3432_, 4);
lean_dec(v_unused_3454_);
v_unused_3455_ = lean_ctor_get(v_r_3432_, 3);
lean_dec(v_unused_3455_);
v_unused_3456_ = lean_ctor_get(v_r_3432_, 0);
lean_dec(v_unused_3456_);
v___x_3441_ = v_r_3432_;
v_isShared_3442_ = v_isSharedCheck_3453_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_v_3439_);
lean_inc(v_k_3438_);
lean_dec(v_r_3432_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3453_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; lean_object* v___x_3445_; 
v___x_3443_ = lean_unsigned_to_nat(3u);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 4, v_l_3396_);
lean_ctor_set(v___x_3441_, 3, v_l_3396_);
lean_ctor_set(v___x_3441_, 2, v_v_3434_);
lean_ctor_set(v___x_3441_, 1, v_k_3433_);
lean_ctor_set(v___x_3441_, 0, v___x_3305_);
v___x_3445_ = v___x_3441_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v_k_3433_);
lean_ctor_set(v_reuseFailAlloc_3452_, 2, v_v_3434_);
lean_ctor_set(v_reuseFailAlloc_3452_, 3, v_l_3396_);
lean_ctor_set(v_reuseFailAlloc_3452_, 4, v_l_3396_);
v___x_3445_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
lean_object* v___x_3447_; 
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 4, v_l_3396_);
lean_ctor_set(v___x_3436_, 2, v_v_2812_);
lean_ctor_set(v___x_3436_, 1, v_k_2811_);
lean_ctor_set(v___x_3436_, 0, v___x_3305_);
v___x_3447_ = v___x_3436_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3451_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3451_, 3, v_l_3396_);
lean_ctor_set(v_reuseFailAlloc_3451_, 4, v_l_3396_);
v___x_3447_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
lean_object* v___x_3449_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v___x_3447_);
lean_ctor_set(v___x_2816_, 3, v___x_3445_);
lean_ctor_set(v___x_2816_, 2, v_v_3439_);
lean_ctor_set(v___x_2816_, 1, v_k_3438_);
lean_ctor_set(v___x_2816_, 0, v___x_3443_);
v___x_3449_ = v___x_2816_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3443_);
lean_ctor_set(v_reuseFailAlloc_3450_, 1, v_k_3438_);
lean_ctor_set(v_reuseFailAlloc_3450_, 2, v_v_3439_);
lean_ctor_set(v_reuseFailAlloc_3450_, 3, v___x_3445_);
lean_ctor_set(v_reuseFailAlloc_3450_, 4, v___x_3447_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
}
}
else
{
lean_object* v___x_3461_; lean_object* v___x_3463_; 
v___x_3461_ = lean_unsigned_to_nat(2u);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_r_3432_);
lean_ctor_set(v___x_2816_, 0, v___x_3461_);
v___x_3463_ = v___x_2816_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3461_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3464_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3464_, 3, v_l_2813_);
lean_ctor_set(v_reuseFailAlloc_3464_, 4, v_r_3432_);
v___x_3463_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
return v___x_3463_;
}
}
}
}
else
{
lean_object* v___x_3466_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_l_2813_);
lean_ctor_set(v___x_2816_, 0, v___x_3305_);
v___x_3466_ = v___x_2816_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3467_, 1, v_k_2811_);
lean_ctor_set(v_reuseFailAlloc_3467_, 2, v_v_2812_);
lean_ctor_set(v_reuseFailAlloc_3467_, 3, v_l_2813_);
lean_ctor_set(v_reuseFailAlloc_3467_, 4, v_l_2813_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
}
}
}
else
{
return v_t_2810_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object* v_k_3470_, lean_object* v_t_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3470_, v_t_3471_);
lean_dec(v_k_3470_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object* v_declName_3473_, lean_object* v_ps_3474_){
_start:
{
lean_object* v_importedEntries_3475_; lean_object* v_state_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3484_; 
v_importedEntries_3475_ = lean_ctor_get(v_ps_3474_, 0);
v_state_3476_ = lean_ctor_get(v_ps_3474_, 1);
v_isSharedCheck_3484_ = !lean_is_exclusive(v_ps_3474_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3478_ = v_ps_3474_;
v_isShared_3479_ = v_isSharedCheck_3484_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_state_3476_);
lean_inc(v_importedEntries_3475_);
lean_dec(v_ps_3474_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3484_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3480_; lean_object* v___x_3482_; 
v___x_3480_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_declName_3473_, v_state_3476_);
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 1, v___x_3480_);
v___x_3482_ = v___x_3478_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_importedEntries_3475_);
lean_ctor_set(v_reuseFailAlloc_3483_, 1, v___x_3480_);
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
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object* v_declName_3485_, lean_object* v_ps_3486_){
_start:
{
lean_object* v_res_3487_; 
v_res_3487_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(v_declName_3485_, v_ps_3486_);
lean_dec(v_declName_3485_);
return v_res_3487_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3489_ = ((lean_object*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0));
v___x_3490_ = l_Lean_stringToMessageData(v___x_3489_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object* v_declName_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_){
_start:
{
lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v___f_3532_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___x_3555_; lean_object* v_env_3556_; lean_object* v___x_3557_; 
lean_inc(v_declName_3491_);
v___f_3532_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3532_, 0, v_declName_3491_);
v___x_3555_ = lean_st_ref_get(v___y_3497_);
v_env_3556_ = lean_ctor_get(v___x_3555_, 0);
lean_inc_ref(v_env_3556_);
lean_dec(v___x_3555_);
v___x_3557_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3556_, v_declName_3491_);
lean_dec_ref(v_env_3556_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_dec(v_declName_3491_);
v___y_3534_ = v___y_3495_;
v___y_3535_ = v___y_3497_;
goto v___jp_3533_;
}
else
{
uint8_t v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
lean_dec_ref_known(v___x_3557_, 1);
lean_dec_ref(v___f_3532_);
v___x_3558_ = 0;
v___x_3559_ = lean_obj_once(&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1, &l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once, _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1);
v___x_3560_ = l_Lean_MessageData_ofConstName(v_declName_3491_, v___x_3558_);
v___x_3561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3559_);
lean_ctor_set(v___x_3561_, 1, v___x_3560_);
v___x_3562_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3561_);
lean_ctor_set(v___x_3563_, 1, v___x_3562_);
v___x_3564_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3563_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_);
return v___x_3564_;
}
v___jp_3499_:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v_mctx_3515_; lean_object* v_zetaDeltaFVarIds_3516_; lean_object* v_postponed_3517_; lean_object* v_diag_3518_; lean_object* v_rewriteFires_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3530_; 
v___x_3511_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_3512_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3512_, 0, v___y_3510_);
lean_ctor_set(v___x_3512_, 1, v___y_3509_);
lean_ctor_set(v___x_3512_, 2, v___y_3501_);
lean_ctor_set(v___x_3512_, 3, v___y_3503_);
lean_ctor_set(v___x_3512_, 4, v___y_3507_);
lean_ctor_set(v___x_3512_, 5, v___x_3511_);
lean_ctor_set(v___x_3512_, 6, v___y_3505_);
lean_ctor_set(v___x_3512_, 7, v___y_3504_);
lean_ctor_set(v___x_3512_, 8, v___y_3502_);
lean_ctor_set(v___x_3512_, 9, v___y_3506_);
v___x_3513_ = lean_st_ref_put(v___y_3508_, v___x_3512_);
v___x_3514_ = lean_st_ref_take(v___y_3500_);
v_mctx_3515_ = lean_ctor_get(v___x_3514_, 0);
v_zetaDeltaFVarIds_3516_ = lean_ctor_get(v___x_3514_, 2);
v_postponed_3517_ = lean_ctor_get(v___x_3514_, 3);
v_diag_3518_ = lean_ctor_get(v___x_3514_, 4);
v_rewriteFires_3519_ = lean_ctor_get(v___x_3514_, 5);
v_isSharedCheck_3530_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3530_ == 0)
{
lean_object* v_unused_3531_; 
v_unused_3531_ = lean_ctor_get(v___x_3514_, 1);
lean_dec(v_unused_3531_);
v___x_3521_ = v___x_3514_;
v_isShared_3522_ = v_isSharedCheck_3530_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_rewriteFires_3519_);
lean_inc(v_diag_3518_);
lean_inc(v_postponed_3517_);
lean_inc(v_zetaDeltaFVarIds_3516_);
lean_inc(v_mctx_3515_);
lean_dec(v___x_3514_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3530_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3526_; 
v___x_3523_ = lean_box(0);
v___x_3524_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3522_ == 0)
{
lean_ctor_set(v___x_3521_, 1, v___x_3524_);
v___x_3526_ = v___x_3521_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_mctx_3515_);
lean_ctor_set(v_reuseFailAlloc_3529_, 1, v___x_3524_);
lean_ctor_set(v_reuseFailAlloc_3529_, 2, v_zetaDeltaFVarIds_3516_);
lean_ctor_set(v_reuseFailAlloc_3529_, 3, v_postponed_3517_);
lean_ctor_set(v_reuseFailAlloc_3529_, 4, v_diag_3518_);
lean_ctor_set(v_reuseFailAlloc_3529_, 5, v_rewriteFires_3519_);
v___x_3526_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3527_ = lean_st_ref_put(v___y_3500_, v___x_3526_);
v___x_3528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3523_);
return v___x_3528_;
}
}
}
v___jp_3533_:
{
lean_object* v___x_3536_; lean_object* v_env_3537_; lean_object* v_nextMacroScope_3538_; lean_object* v_ngen_3539_; lean_object* v_auxDeclNGen_3540_; lean_object* v_traceState_3541_; lean_object* v_recordedDeps_3542_; lean_object* v_messages_3543_; lean_object* v_infoState_3544_; lean_object* v_snapshotTasks_3545_; lean_object* v___x_3546_; lean_object* v_toEnvExtension_3547_; uint8_t v_logWrites_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; uint8_t v___x_3551_; 
v___x_3536_ = lean_st_ref_take(v___y_3535_);
v_env_3537_ = lean_ctor_get(v___x_3536_, 0);
lean_inc_ref(v_env_3537_);
v_nextMacroScope_3538_ = lean_ctor_get(v___x_3536_, 1);
lean_inc(v_nextMacroScope_3538_);
v_ngen_3539_ = lean_ctor_get(v___x_3536_, 2);
lean_inc_ref(v_ngen_3539_);
v_auxDeclNGen_3540_ = lean_ctor_get(v___x_3536_, 3);
lean_inc_ref(v_auxDeclNGen_3540_);
v_traceState_3541_ = lean_ctor_get(v___x_3536_, 4);
lean_inc_ref(v_traceState_3541_);
v_recordedDeps_3542_ = lean_ctor_get(v___x_3536_, 6);
lean_inc_ref(v_recordedDeps_3542_);
v_messages_3543_ = lean_ctor_get(v___x_3536_, 7);
lean_inc_ref(v_messages_3543_);
v_infoState_3544_ = lean_ctor_get(v___x_3536_, 8);
lean_inc_ref(v_infoState_3544_);
v_snapshotTasks_3545_ = lean_ctor_get(v___x_3536_, 9);
lean_inc_ref(v_snapshotTasks_3545_);
lean_dec(v___x_3536_);
v___x_3546_ = l_Lean_docStringExt;
v_toEnvExtension_3547_ = lean_ctor_get(v___x_3546_, 0);
v_logWrites_3548_ = lean_ctor_get_uint8(v_toEnvExtension_3547_, sizeof(void*)*6);
v___x_3549_ = lean_box(2);
v___x_3550_ = lean_box(0);
v___x_3551_ = 1;
if (v_logWrites_3548_ == 0)
{
lean_object* v___x_3552_; 
lean_inc_ref(v_toEnvExtension_3547_);
v___x_3552_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3547_, v_env_3537_, v___f_3532_, v___x_3549_, v___x_3550_, v___x_3551_);
v___y_3500_ = v___y_3534_;
v___y_3501_ = v_ngen_3539_;
v___y_3502_ = v_infoState_3544_;
v___y_3503_ = v_auxDeclNGen_3540_;
v___y_3504_ = v_messages_3543_;
v___y_3505_ = v_recordedDeps_3542_;
v___y_3506_ = v_snapshotTasks_3545_;
v___y_3507_ = v_traceState_3541_;
v___y_3508_ = v___y_3535_;
v___y_3509_ = v_nextMacroScope_3538_;
v___y_3510_ = v___x_3552_;
goto v___jp_3499_;
}
else
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
lean_inc_ref_n(v_toEnvExtension_3547_, 2);
v___x_3553_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3547_, v_env_3537_);
lean_dec_ref(v_env_3537_);
v___x_3554_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3547_, v___x_3553_, v___f_3532_, v___x_3549_, v___x_3550_, v___x_3551_);
v___y_3500_ = v___y_3534_;
v___y_3501_ = v_ngen_3539_;
v___y_3502_ = v_infoState_3544_;
v___y_3503_ = v_auxDeclNGen_3540_;
v___y_3504_ = v_messages_3543_;
v___y_3505_ = v_recordedDeps_3542_;
v___y_3506_ = v_snapshotTasks_3545_;
v___y_3507_ = v_traceState_3541_;
v___y_3508_ = v___y_3535_;
v___y_3509_ = v_nextMacroScope_3538_;
v___y_3510_ = v___x_3554_;
goto v___jp_3499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object* v_declName_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3565_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_);
lean_dec(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec(v___y_3569_);
lean_dec_ref(v___y_3568_);
lean_dec(v___y_3567_);
lean_dec_ref(v___y_3566_);
return v_res_3573_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__1(void){
_start:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3575_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__0));
v___x_3576_ = l_Lean_stringToMessageData(v___x_3575_);
return v___x_3576_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__3(void){
_start:
{
lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3578_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__2));
v___x_3579_ = l_Lean_stringToMessageData(v___x_3578_);
return v___x_3579_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__5(void){
_start:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3581_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__4));
v___x_3582_ = l_Lean_stringToMessageData(v___x_3581_);
return v___x_3582_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__7(void){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__6));
v___x_3585_ = l_Lean_stringToMessageData(v___x_3584_);
return v___x_3585_;
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object* v_declName_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_){
_start:
{
lean_object* v___x_3594_; lean_object* v_env_3595_; lean_object* v_ref_3596_; uint8_t v___x_3597_; lean_object* v___x_3598_; 
v___x_3594_ = lean_st_ref_get(v_a_3592_);
v_env_3595_ = lean_ctor_get(v___x_3594_, 0);
lean_inc_ref(v_env_3595_);
lean_dec(v___x_3594_);
v_ref_3596_ = lean_ctor_get(v_a_3591_, 2);
v___x_3597_ = 1;
lean_inc(v_declName_3586_);
v___x_3598_ = l_Lean_findInternalDocString_x3f(v_env_3595_, v_declName_3586_, v___x_3597_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v_a_3599_; 
v_a_3599_ = lean_ctor_get(v___x_3598_, 0);
lean_inc(v_a_3599_);
lean_dec_ref_known(v___x_3598_, 1);
if (lean_obj_tag(v_a_3599_) == 1)
{
lean_object* v_val_3600_; 
v_val_3600_ = lean_ctor_get(v_a_3599_, 0);
lean_inc(v_val_3600_);
lean_dec_ref_known(v_a_3599_, 1);
if (lean_obj_tag(v_val_3600_) == 0)
{
lean_object* v_val_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3622_; 
v_val_3601_ = lean_ctor_get(v_val_3600_, 0);
v_isSharedCheck_3622_ = !lean_is_exclusive(v_val_3600_);
if (v_isSharedCheck_3622_ == 0)
{
v___x_3603_ = v_val_3600_;
v_isShared_3604_ = v_isSharedCheck_3622_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_val_3601_);
lean_dec(v_val_3600_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3622_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___x_3605_; 
v___x_3605_ = l_Lean_removeBuiltinDocString(v_declName_3586_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_object* v___x_3606_; 
lean_dec_ref_known(v___x_3605_, 1);
lean_del_object(v___x_3603_);
lean_inc(v_declName_3586_);
v___x_3606_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3586_, v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v___x_3607_; 
lean_dec_ref_known(v___x_3606_, 1);
v___x_3607_ = l_Lean_addVersoDocStringFromString(v_declName_3586_, v_val_3601_, v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_);
return v___x_3607_;
}
else
{
lean_dec(v_val_3601_);
lean_dec(v_declName_3586_);
return v___x_3606_;
}
}
else
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3621_; 
lean_dec(v_val_3601_);
lean_dec(v_declName_3586_);
v_a_3608_ = lean_ctor_get(v___x_3605_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3605_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3610_ = v___x_3605_;
v_isShared_3611_ = v_isSharedCheck_3621_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3605_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3621_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3612_; lean_object* v___x_3614_; 
v___x_3612_ = lean_io_error_to_string(v_a_3608_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set_tag(v___x_3603_, 3);
lean_ctor_set(v___x_3603_, 0, v___x_3612_);
v___x_3614_ = v___x_3603_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v___x_3612_);
v___x_3614_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3618_; 
v___x_3615_ = l_Lean_MessageData_ofFormat(v___x_3614_);
lean_inc(v_ref_3596_);
v___x_3616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3616_, 0, v_ref_3596_);
lean_ctor_set(v___x_3616_, 1, v___x_3615_);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 0, v___x_3616_);
v___x_3618_ = v___x_3610_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3616_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
}
}
else
{
lean_object* v___x_3623_; uint8_t v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; 
lean_dec(v_val_3600_);
v___x_3623_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__1, &l_Lean_makeDocStringVerso___closed__1_once, _init_l_Lean_makeDocStringVerso___closed__1);
v___x_3624_ = 0;
v___x_3625_ = l_Lean_MessageData_ofConstName(v_declName_3586_, v___x_3624_);
v___x_3626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3623_);
lean_ctor_set(v___x_3626_, 1, v___x_3625_);
v___x_3627_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__3, &l_Lean_makeDocStringVerso___closed__3_once, _init_l_Lean_makeDocStringVerso___closed__3);
v___x_3628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3626_);
lean_ctor_set(v___x_3628_, 1, v___x_3627_);
v___x_3629_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3628_, v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_);
return v___x_3629_;
}
}
else
{
lean_object* v___x_3630_; uint8_t v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
lean_dec(v_a_3599_);
v___x_3630_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__5, &l_Lean_makeDocStringVerso___closed__5_once, _init_l_Lean_makeDocStringVerso___closed__5);
v___x_3631_ = 0;
v___x_3632_ = l_Lean_MessageData_ofConstName(v_declName_3586_, v___x_3631_);
v___x_3633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3633_, 0, v___x_3630_);
lean_ctor_set(v___x_3633_, 1, v___x_3632_);
v___x_3634_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__7, &l_Lean_makeDocStringVerso___closed__7_once, _init_l_Lean_makeDocStringVerso___closed__7);
v___x_3635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3633_);
lean_ctor_set(v___x_3635_, 1, v___x_3634_);
v___x_3636_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3635_, v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_);
return v___x_3636_;
}
}
else
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3648_; 
lean_dec(v_declName_3586_);
v_a_3637_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3639_ = v___x_3598_;
v_isShared_3640_ = v_isSharedCheck_3648_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3598_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3648_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3646_; 
v___x_3641_ = lean_io_error_to_string(v_a_3637_);
v___x_3642_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
v___x_3643_ = l_Lean_MessageData_ofFormat(v___x_3642_);
lean_inc(v_ref_3596_);
v___x_3644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3644_, 0, v_ref_3596_);
lean_ctor_set(v___x_3644_, 1, v___x_3643_);
if (v_isShared_3640_ == 0)
{
lean_ctor_set(v___x_3639_, 0, v___x_3644_);
v___x_3646_ = v___x_3639_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v___x_3644_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object* v_declName_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_, lean_object* v_a_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_, lean_object* v_a_3655_, lean_object* v_a_3656_){
_start:
{
lean_object* v_res_3657_; 
v_res_3657_ = l_Lean_makeDocStringVerso(v_declName_3649_, v_a_3650_, v_a_3651_, v_a_3652_, v_a_3653_, v_a_3654_, v_a_3655_);
lean_dec(v_a_3655_);
lean_dec_ref(v_a_3654_);
lean_dec(v_a_3653_);
lean_dec_ref(v_a_3652_);
lean_dec(v_a_3651_);
lean_dec_ref(v_a_3650_);
return v_res_3657_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object* v_00_u03b2_3658_, lean_object* v_k_3659_, lean_object* v_t_3660_, lean_object* v_h_3661_){
_start:
{
lean_object* v___x_3662_; 
v___x_3662_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3659_, v_t_3660_);
return v___x_3662_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3663_, lean_object* v_k_3664_, lean_object* v_t_3665_, lean_object* v_h_3666_){
_start:
{
lean_object* v_res_3667_; 
v_res_3667_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(v_00_u03b2_3663_, v_k_3664_, v_t_3665_, v_h_3666_);
lean_dec(v_k_3664_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object* v_declName_3668_, lean_object* v_binders_3669_, lean_object* v_docComment_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_){
_start:
{
uint8_t v___x_3678_; lean_object* v___x_3679_; 
v___x_3678_ = l_Lean_isVersoDocComment(v_docComment_3670_);
v___x_3679_ = l_Lean_addDocStringOf(v___x_3678_, v_declName_3668_, v_binders_3669_, v_docComment_3670_, v_a_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object* v_declName_3680_, lean_object* v_binders_3681_, lean_object* v_docComment_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_, lean_object* v_a_3687_, lean_object* v_a_3688_, lean_object* v_a_3689_){
_start:
{
lean_object* v_res_3690_; 
v_res_3690_ = l_Lean_addDocString(v_declName_3680_, v_binders_3681_, v_docComment_3682_, v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_, v_a_3687_, v_a_3688_);
lean_dec(v_a_3688_);
lean_dec_ref(v_a_3687_);
lean_dec(v_a_3686_);
lean_dec_ref(v_a_3685_);
lean_dec(v_a_3684_);
lean_dec_ref(v_a_3683_);
return v_res_3690_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object* v_declName_3691_, lean_object* v_binders_3692_, lean_object* v_docString_x3f_3693_, lean_object* v_a_3694_, lean_object* v_a_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_, lean_object* v_a_3698_, lean_object* v_a_3699_){
_start:
{
if (lean_obj_tag(v_docString_x3f_3693_) == 0)
{
lean_object* v___x_3701_; lean_object* v___x_3702_; 
lean_dec(v_binders_3692_);
lean_dec(v_declName_3691_);
v___x_3701_ = lean_box(0);
v___x_3702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3701_);
return v___x_3702_;
}
else
{
lean_object* v_val_3703_; lean_object* v___x_3704_; 
v_val_3703_ = lean_ctor_get(v_docString_x3f_3693_, 0);
lean_inc(v_val_3703_);
lean_dec_ref_known(v_docString_x3f_3693_, 1);
v___x_3704_ = l_Lean_addDocString(v_declName_3691_, v_binders_3692_, v_val_3703_, v_a_3694_, v_a_3695_, v_a_3696_, v_a_3697_, v_a_3698_, v_a_3699_);
return v___x_3704_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object* v_declName_3705_, lean_object* v_binders_3706_, lean_object* v_docString_x3f_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_, lean_object* v_a_3713_, lean_object* v_a_3714_){
_start:
{
lean_object* v_res_3715_; 
v_res_3715_ = l_Lean_addDocString_x27(v_declName_3705_, v_binders_3706_, v_docString_x3f_3707_, v_a_3708_, v_a_3709_, v_a_3710_, v_a_3711_, v_a_3712_, v_a_3713_);
lean_dec(v_a_3713_);
lean_dec_ref(v_a_3712_);
lean_dec(v_a_3711_);
lean_dec_ref(v_a_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_a_3708_);
return v_res_3715_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object* v_env_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
lean_object* v___x_3720_; lean_object* v_nextMacroScope_3721_; lean_object* v_ngen_3722_; lean_object* v_auxDeclNGen_3723_; lean_object* v_traceState_3724_; lean_object* v_recordedDeps_3725_; lean_object* v_messages_3726_; lean_object* v_infoState_3727_; lean_object* v_snapshotTasks_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3755_; 
v___x_3720_ = lean_st_ref_take(v___y_3718_);
v_nextMacroScope_3721_ = lean_ctor_get(v___x_3720_, 1);
v_ngen_3722_ = lean_ctor_get(v___x_3720_, 2);
v_auxDeclNGen_3723_ = lean_ctor_get(v___x_3720_, 3);
v_traceState_3724_ = lean_ctor_get(v___x_3720_, 4);
v_recordedDeps_3725_ = lean_ctor_get(v___x_3720_, 6);
v_messages_3726_ = lean_ctor_get(v___x_3720_, 7);
v_infoState_3727_ = lean_ctor_get(v___x_3720_, 8);
v_snapshotTasks_3728_ = lean_ctor_get(v___x_3720_, 9);
v_isSharedCheck_3755_ = !lean_is_exclusive(v___x_3720_);
if (v_isSharedCheck_3755_ == 0)
{
lean_object* v_unused_3756_; lean_object* v_unused_3757_; 
v_unused_3756_ = lean_ctor_get(v___x_3720_, 5);
lean_dec(v_unused_3756_);
v_unused_3757_ = lean_ctor_get(v___x_3720_, 0);
lean_dec(v_unused_3757_);
v___x_3730_ = v___x_3720_;
v_isShared_3731_ = v_isSharedCheck_3755_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_snapshotTasks_3728_);
lean_inc(v_infoState_3727_);
lean_inc(v_messages_3726_);
lean_inc(v_recordedDeps_3725_);
lean_inc(v_traceState_3724_);
lean_inc(v_auxDeclNGen_3723_);
lean_inc(v_ngen_3722_);
lean_inc(v_nextMacroScope_3721_);
lean_dec(v___x_3720_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3755_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3732_; lean_object* v___x_3734_; 
v___x_3732_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
if (v_isShared_3731_ == 0)
{
lean_ctor_set(v___x_3730_, 5, v___x_3732_);
lean_ctor_set(v___x_3730_, 0, v_env_3716_);
v___x_3734_ = v___x_3730_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v_env_3716_);
lean_ctor_set(v_reuseFailAlloc_3754_, 1, v_nextMacroScope_3721_);
lean_ctor_set(v_reuseFailAlloc_3754_, 2, v_ngen_3722_);
lean_ctor_set(v_reuseFailAlloc_3754_, 3, v_auxDeclNGen_3723_);
lean_ctor_set(v_reuseFailAlloc_3754_, 4, v_traceState_3724_);
lean_ctor_set(v_reuseFailAlloc_3754_, 5, v___x_3732_);
lean_ctor_set(v_reuseFailAlloc_3754_, 6, v_recordedDeps_3725_);
lean_ctor_set(v_reuseFailAlloc_3754_, 7, v_messages_3726_);
lean_ctor_set(v_reuseFailAlloc_3754_, 8, v_infoState_3727_);
lean_ctor_set(v_reuseFailAlloc_3754_, 9, v_snapshotTasks_3728_);
v___x_3734_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v_mctx_3737_; lean_object* v_zetaDeltaFVarIds_3738_; lean_object* v_postponed_3739_; lean_object* v_diag_3740_; lean_object* v_rewriteFires_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3752_; 
v___x_3735_ = lean_st_ref_put(v___y_3718_, v___x_3734_);
v___x_3736_ = lean_st_ref_take(v___y_3717_);
v_mctx_3737_ = lean_ctor_get(v___x_3736_, 0);
v_zetaDeltaFVarIds_3738_ = lean_ctor_get(v___x_3736_, 2);
v_postponed_3739_ = lean_ctor_get(v___x_3736_, 3);
v_diag_3740_ = lean_ctor_get(v___x_3736_, 4);
v_rewriteFires_3741_ = lean_ctor_get(v___x_3736_, 5);
v_isSharedCheck_3752_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3752_ == 0)
{
lean_object* v_unused_3753_; 
v_unused_3753_ = lean_ctor_get(v___x_3736_, 1);
lean_dec(v_unused_3753_);
v___x_3743_ = v___x_3736_;
v_isShared_3744_ = v_isSharedCheck_3752_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_rewriteFires_3741_);
lean_inc(v_diag_3740_);
lean_inc(v_postponed_3739_);
lean_inc(v_zetaDeltaFVarIds_3738_);
lean_inc(v_mctx_3737_);
lean_dec(v___x_3736_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3752_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3748_; 
v___x_3745_ = lean_box(0);
v___x_3746_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3744_ == 0)
{
lean_ctor_set(v___x_3743_, 1, v___x_3746_);
v___x_3748_ = v___x_3743_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_mctx_3737_);
lean_ctor_set(v_reuseFailAlloc_3751_, 1, v___x_3746_);
lean_ctor_set(v_reuseFailAlloc_3751_, 2, v_zetaDeltaFVarIds_3738_);
lean_ctor_set(v_reuseFailAlloc_3751_, 3, v_postponed_3739_);
lean_ctor_set(v_reuseFailAlloc_3751_, 4, v_diag_3740_);
lean_ctor_set(v_reuseFailAlloc_3751_, 5, v_rewriteFires_3741_);
v___x_3748_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; 
v___x_3749_ = lean_st_ref_put(v___y_3717_, v___x_3748_);
v___x_3750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3745_);
return v___x_3750_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object* v_env_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_){
_start:
{
lean_object* v_res_3762_; 
v_res_3762_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_3758_, v___y_3759_, v___y_3760_);
lean_dec(v___y_3760_);
lean_dec(v___y_3759_);
return v_res_3762_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(lean_object* v_n_3763_, uint8_t v___x_3764_, lean_object* v_as_3765_, size_t v_i_3766_, size_t v_stop_3767_, lean_object* v_b_3768_){
_start:
{
lean_object* v___y_3770_; uint8_t v___x_3774_; 
v___x_3774_ = lean_usize_dec_eq(v_i_3766_, v_stop_3767_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3775_; lean_object* v_index_3776_; lean_object* v_sourceString_3777_; lean_object* v_imports_3778_; lean_object* v_currNamespace_3779_; lean_object* v_openDecls_3780_; lean_object* v_options_3781_; lean_object* v_check_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3800_; 
v___x_3775_ = lean_array_uget(v_as_3765_, v_i_3766_);
v_index_3776_ = lean_ctor_get(v___x_3775_, 1);
v_sourceString_3777_ = lean_ctor_get(v___x_3775_, 2);
v_imports_3778_ = lean_ctor_get(v___x_3775_, 3);
v_currNamespace_3779_ = lean_ctor_get(v___x_3775_, 4);
v_openDecls_3780_ = lean_ctor_get(v___x_3775_, 5);
v_options_3781_ = lean_ctor_get(v___x_3775_, 6);
v_check_3782_ = lean_ctor_get(v___x_3775_, 7);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3775_);
if (v_isSharedCheck_3800_ == 0)
{
lean_object* v_unused_3801_; 
v_unused_3801_ = lean_ctor_get(v___x_3775_, 0);
lean_dec(v_unused_3801_);
v___x_3784_ = v___x_3775_;
v_isShared_3785_ = v_isSharedCheck_3800_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_check_3782_);
lean_inc(v_options_3781_);
lean_inc(v_openDecls_3780_);
lean_inc(v_currNamespace_3779_);
lean_inc(v_imports_3778_);
lean_inc(v_sourceString_3777_);
lean_inc(v_index_3776_);
lean_dec(v___x_3775_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3800_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3786_; lean_object* v_toEnvExtension_3787_; lean_object* v_addEntryFn_3788_; lean_object* v_asyncMode_3789_; uint8_t v_logWrites_3790_; lean_object* v___x_3791_; lean_object* v___x_3793_; 
v___x_3786_ = l_Lean_Doc_deferredCheckExt;
v_toEnvExtension_3787_ = lean_ctor_get(v___x_3786_, 0);
v_addEntryFn_3788_ = lean_ctor_get(v___x_3786_, 3);
v_asyncMode_3789_ = lean_ctor_get(v_toEnvExtension_3787_, 2);
v_logWrites_3790_ = lean_ctor_get_uint8(v_toEnvExtension_3787_, sizeof(void*)*6);
lean_inc(v_n_3763_);
v___x_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3791_, 0, v_n_3763_);
if (v_isShared_3785_ == 0)
{
lean_ctor_set(v___x_3784_, 0, v___x_3791_);
v___x_3793_ = v___x_3784_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v___x_3791_);
lean_ctor_set(v_reuseFailAlloc_3799_, 1, v_index_3776_);
lean_ctor_set(v_reuseFailAlloc_3799_, 2, v_sourceString_3777_);
lean_ctor_set(v_reuseFailAlloc_3799_, 3, v_imports_3778_);
lean_ctor_set(v_reuseFailAlloc_3799_, 4, v_currNamespace_3779_);
lean_ctor_set(v_reuseFailAlloc_3799_, 5, v_openDecls_3780_);
lean_ctor_set(v_reuseFailAlloc_3799_, 6, v_options_3781_);
lean_ctor_set(v_reuseFailAlloc_3799_, 7, v_check_3782_);
v___x_3793_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
lean_object* v___f_3794_; lean_object* v___x_3795_; 
lean_inc(v_addEntryFn_3788_);
v___f_3794_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_3794_, 0, v_addEntryFn_3788_);
lean_closure_set(v___f_3794_, 1, v___x_3793_);
v___x_3795_ = lean_box(0);
if (v_logWrites_3790_ == 0)
{
lean_object* v___x_3796_; 
lean_inc_ref(v_toEnvExtension_3787_);
v___x_3796_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3787_, v_b_3768_, v___f_3794_, v_asyncMode_3789_, v___x_3795_, v___x_3764_);
v___y_3770_ = v___x_3796_;
goto v___jp_3769_;
}
else
{
lean_object* v___x_3797_; lean_object* v___x_3798_; 
lean_inc_ref_n(v_toEnvExtension_3787_, 2);
v___x_3797_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3787_, v_b_3768_);
lean_dec_ref(v_b_3768_);
v___x_3798_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3787_, v___x_3797_, v___f_3794_, v_asyncMode_3789_, v___x_3795_, v___x_3764_);
v___y_3770_ = v___x_3798_;
goto v___jp_3769_;
}
}
}
}
else
{
lean_dec(v_n_3763_);
return v_b_3768_;
}
v___jp_3769_:
{
size_t v___x_3771_; size_t v___x_3772_; 
v___x_3771_ = ((size_t)1ULL);
v___x_3772_ = lean_usize_add(v_i_3766_, v___x_3771_);
v_i_3766_ = v___x_3772_;
v_b_3768_ = v___y_3770_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1___boxed(lean_object* v_n_3802_, lean_object* v___x_3803_, lean_object* v_as_3804_, lean_object* v_i_3805_, lean_object* v_stop_3806_, lean_object* v_b_3807_){
_start:
{
uint8_t v___x_1354__boxed_3808_; size_t v_i_boxed_3809_; size_t v_stop_boxed_3810_; lean_object* v_res_3811_; 
v___x_1354__boxed_3808_ = lean_unbox(v___x_3803_);
v_i_boxed_3809_ = lean_unbox_usize(v_i_3805_);
lean_dec(v_i_3805_);
v_stop_boxed_3810_ = lean_unbox_usize(v_stop_3806_);
lean_dec(v_stop_3806_);
v_res_3811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(v_n_3802_, v___x_1354__boxed_3808_, v_as_3804_, v_i_boxed_3809_, v_stop_boxed_3810_, v_b_3807_);
lean_dec_ref(v_as_3804_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object* v_docs_3812_, lean_object* v_deferred_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
lean_object* v___x_3821_; lean_object* v_env_3822_; lean_object* v___x_3823_; uint8_t v___x_3824_; 
v___x_3821_ = lean_st_ref_get(v___y_3819_);
v_env_3822_ = lean_ctor_get(v___x_3821_, 0);
lean_inc_ref(v_env_3822_);
lean_dec(v___x_3821_);
v___x_3823_ = l_Lean_getMainModuleDoc(v_env_3822_);
v___x_3824_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_3823_);
lean_dec_ref(v___x_3823_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3825_; lean_object* v___x_3826_; 
lean_dec_ref(v_docs_3812_);
v___x_3825_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__3___closed__1);
v___x_3826_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3825_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_);
return v___x_3826_;
}
else
{
lean_object* v___x_3827_; lean_object* v_env_3828_; lean_object* v___x_3829_; lean_object* v_size_3830_; lean_object* v___x_3831_; lean_object* v_env_3832_; lean_object* v___x_3833_; 
v___x_3827_ = lean_st_ref_get(v___y_3819_);
v_env_3828_ = lean_ctor_get(v___x_3827_, 0);
lean_inc_ref(v_env_3828_);
lean_dec(v___x_3827_);
v___x_3829_ = l_Lean_getMainVersoModuleDocs(v_env_3828_);
v_size_3830_ = lean_ctor_get(v___x_3829_, 2);
lean_inc(v_size_3830_);
lean_dec_ref(v___x_3829_);
v___x_3831_ = lean_st_ref_get(v___y_3819_);
v_env_3832_ = lean_ctor_get(v___x_3831_, 0);
lean_inc_ref(v_env_3832_);
lean_dec(v___x_3831_);
v___x_3833_ = l_Lean_addVersoModuleDocSnippet(v_env_3832_, v_docs_3812_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; 
lean_dec(v_size_3830_);
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3834_);
lean_dec_ref_known(v___x_3833_, 1);
v___x_3835_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_3836_ = l_Lean_stringToMessageData(v_a_3834_);
v___x_3837_ = l_Lean_indentD(v___x_3836_);
v___x_3838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3835_);
lean_ctor_set(v___x_3838_, 1, v___x_3837_);
v___x_3839_ = l_Lean_throwError___at___00Lean_addVersoDocString_spec__1___redArg(v___x_3838_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_);
return v___x_3839_;
}
else
{
lean_object* v_a_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; uint8_t v___x_3843_; 
v_a_3840_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3840_);
lean_dec_ref_known(v___x_3833_, 1);
v___x_3841_ = lean_unsigned_to_nat(0u);
v___x_3842_ = lean_array_get_size(v_deferred_3813_);
v___x_3843_ = lean_nat_dec_lt(v___x_3841_, v___x_3842_);
if (v___x_3843_ == 0)
{
lean_object* v___x_3844_; 
lean_dec(v_size_3830_);
v___x_3844_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_a_3840_, v___y_3817_, v___y_3819_);
return v___x_3844_;
}
else
{
size_t v___x_3845_; size_t v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
v___x_3845_ = ((size_t)0ULL);
v___x_3846_ = lean_usize_of_nat(v___x_3842_);
v___x_3847_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__1(v_size_3830_, v___x_3824_, v_deferred_3813_, v___x_3845_, v___x_3846_, v_a_3840_);
v___x_3848_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v___x_3847_, v___y_3817_, v___y_3819_);
return v___x_3848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object* v_docs_3849_, lean_object* v_deferred_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_){
_start:
{
lean_object* v_res_3858_; 
v_res_3858_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_docs_3849_, v_deferred_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_);
lean_dec(v___y_3856_);
lean_dec_ref(v___y_3855_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec_ref(v_deferred_3850_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object* v_range_3859_, lean_object* v_doc_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v___x_3868_; 
v___x_3868_ = l_Lean_versoModDocString(v_range_3859_, v_doc_3860_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
if (lean_obj_tag(v___x_3868_) == 0)
{
lean_object* v_a_3869_; lean_object* v_fst_3870_; lean_object* v_snd_3871_; lean_object* v___x_3872_; 
v_a_3869_ = lean_ctor_get(v___x_3868_, 0);
lean_inc(v_a_3869_);
lean_dec_ref_known(v___x_3868_, 1);
v_fst_3870_ = lean_ctor_get(v_a_3869_, 0);
lean_inc(v_fst_3870_);
v_snd_3871_ = lean_ctor_get(v_a_3869_, 1);
lean_inc(v_snd_3871_);
lean_dec(v_a_3869_);
v___x_3872_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_fst_3870_, v_snd_3871_, v_a_3861_, v_a_3862_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_);
lean_dec(v_snd_3871_);
return v___x_3872_;
}
else
{
lean_object* v_a_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3880_; 
v_a_3873_ = lean_ctor_get(v___x_3868_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3868_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3875_ = v___x_3868_;
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_a_3873_);
lean_dec(v___x_3868_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3878_; 
if (v_isShared_3876_ == 0)
{
v___x_3878_ = v___x_3875_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_a_3873_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object* v_range_3881_, lean_object* v_doc_3882_, lean_object* v_a_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_, lean_object* v_a_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l_Lean_addVersoModDocString(v_range_3881_, v_doc_3882_, v_a_3883_, v_a_3884_, v_a_3885_, v_a_3886_, v_a_3887_, v_a_3888_);
lean_dec(v_a_3888_);
lean_dec_ref(v_a_3887_);
lean_dec(v_a_3886_);
lean_dec_ref(v_a_3885_);
lean_dec(v_a_3884_);
lean_dec_ref(v_a_3883_);
lean_dec(v_doc_3882_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object* v_env_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_){
_start:
{
lean_object* v___x_3899_; 
v___x_3899_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_3891_, v___y_3895_, v___y_3897_);
return v___x_3899_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object* v_env_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_){
_start:
{
lean_object* v_res_3908_; 
v_res_3908_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(v_env_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_, v___y_3906_);
lean_dec(v___y_3906_);
lean_dec_ref(v___y_3905_);
lean_dec(v___y_3904_);
lean_dec_ref(v___y_3903_);
lean_dec(v___y_3902_);
lean_dec_ref(v___y_3901_);
return v_res_3908_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Add(builtin);
}
#ifdef __cplusplus
}
#endif

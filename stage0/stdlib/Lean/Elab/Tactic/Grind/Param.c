// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.Param
// Imports: public import Lean.Elab.Tactic.Grind.Basic import Lean.Meta.Tactic.Grind.ForallProp import Lean.Elab.Tactic.Grind.Anchor import Lean.Elab.SyntheticMVars
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
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MacroScopesView_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_mkEmpty___redArg();
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Meta_Grind_CasesTypes_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Expr_eta(lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Grind_isMatchEqLikeDeclName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_elabAnchorRef(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_Grind_EMatchTheorems_getKindsFor(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchEqTheoremsForDef_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_EMatchTheoremKind_isEqLhs(lean_object*);
uint8_t l_Lean_Meta_Grind_EMatchTheoremKind_isDefault(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremForDecl(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_backward_grind_inferPattern;
lean_object* l_Lean_Meta_Grind_mkEMatchTheoremAndSuggest(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_insert(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Meta_Grind_grindExt;
lean_object* l_Lean_Meta_Grind_Extension_getEMatchTheorems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_find___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_AsyncConstantInfo_toConstantVal(lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_checkDeprecatedCore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SymbolPriorities_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_erase(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Theorems_contains___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_erase___redArg(lean_object*, lean_object*);
uint8_t l_Lean_wasOriginallyTheorem(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_assertExtra___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_runParserCategory(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "this parameter is redundant, environment already contains `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` annotated with `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindMod"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 252, 83, 80, 136, 168, 19, 119)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<input>"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unexpected modifier "};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "redundant modifier `!` in `grind` parameter"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "failed to generate equation theorems for `"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "invalid `grind` parameter, `"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "` is a definition, the only acceptable (and redundant) modifier is '='"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "` is a reducible definition, `grind` automatically unfolds them"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_addEMatchTheorem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "` is not a theorem, definition, or inductive type"};
static const lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_addEMatchTheorem___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_addEMatchTheorem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 8}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_addFact(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_addFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 87, .m_capacity = 87, .m_length = 86, .m_data = "invalid `grind` parameter, only global declarations are allowed when `+revert` is used"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "extra"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 97, 194, 195, 68, 28, 219, 173)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "invalid `grind` parameter, failed to infer patterns"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "invalid `grind` parameter, parameter type is not a `forall` and is universe polymorphic"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "invalid `grind` parameter, modifier is redundant since the parameter type is not a `forall`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid `grind` parameter, proof term expected"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "invalid `grind` parameter, only global declarations are allowed with this kind of modifier"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "invalid use of `usr` modifier, `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` does not have patterns specified with the command `grind_pattern`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`cases` parameter is not supported here"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "invalid use of `intro` modifier, `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` is not an inductive predicate"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "`[grind ext]` cannot be set using parameters"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "normalization theorems should be registered using the `@[grind norm]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "declarations to be unfolded during normalization should be registered using the `@[grind unfold]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "homomorphism rules should be registered using the `@[grind hom]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "homomorphism predicates should be registered using the `@[grind hom_pred]` attribute"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid use of modifier in `grind` attribute `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "redundant parameter `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "`, `grind` uses local hypotheses automatically"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindParam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(16, 144, 208, 205, 52, 106, 220, 83)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "unexpected `grind` parameter"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindErase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(171, 172, 113, 174, 15, 5, 26, 121)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindLemma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(185, 180, 24, 243, 113, 54, 79, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "grindLemmaMin"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(65, 124, 255, 191, 121, 182, 88, 219)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "anchor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(168, 155, 228, 98, 168, 72, 115, 174)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "invalid anchor, `only` modifier expected"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "invalid `-` occurrence, it can only be used at the `grind` tactic entry point"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(uint8_t, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Grind_getPreservedParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Grind_getPreservedParams___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_getPreservedParams___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getPreservedParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getPreservedParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed(lean_object**);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(lean_object* v_params_1_, lean_object* v_declName_2_, uint8_t v_eager_3_){
_start:
{
lean_object* v_config_4_; lean_object* v_extensions_5_; lean_object* v_extra_6_; lean_object* v_extraInj_7_; lean_object* v_extraFacts_8_; lean_object* v_symPrios_9_; lean_object* v_norm_10_; lean_object* v_normProcs_11_; lean_object* v_anchorRefs_x3f_12_; lean_object* v___x_13_; lean_object* v___x_14_; uint8_t v___x_15_; 
v_config_4_ = lean_ctor_get(v_params_1_, 0);
v_extensions_5_ = lean_ctor_get(v_params_1_, 1);
v_extra_6_ = lean_ctor_get(v_params_1_, 2);
v_extraInj_7_ = lean_ctor_get(v_params_1_, 3);
v_extraFacts_8_ = lean_ctor_get(v_params_1_, 4);
v_symPrios_9_ = lean_ctor_get(v_params_1_, 5);
v_norm_10_ = lean_ctor_get(v_params_1_, 6);
v_normProcs_11_ = lean_ctor_get(v_params_1_, 7);
v_anchorRefs_x3f_12_ = lean_ctor_get(v_params_1_, 8);
v___x_13_ = lean_unsigned_to_nat(0u);
v___x_14_ = lean_array_get_size(v_extensions_5_);
v___x_15_ = lean_nat_dec_lt(v___x_13_, v___x_14_);
if (v___x_15_ == 0)
{
lean_dec(v_declName_2_);
return v_params_1_;
}
else
{
lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_39_; 
lean_inc(v_anchorRefs_x3f_12_);
lean_inc_ref(v_normProcs_11_);
lean_inc_ref(v_norm_10_);
lean_inc_ref(v_symPrios_9_);
lean_inc_ref(v_extraFacts_8_);
lean_inc_ref(v_extraInj_7_);
lean_inc_ref(v_extra_6_);
lean_inc_ref(v_extensions_5_);
lean_inc_ref(v_config_4_);
v_isSharedCheck_39_ = !lean_is_exclusive(v_params_1_);
if (v_isSharedCheck_39_ == 0)
{
lean_object* v_unused_40_; lean_object* v_unused_41_; lean_object* v_unused_42_; lean_object* v_unused_43_; lean_object* v_unused_44_; lean_object* v_unused_45_; lean_object* v_unused_46_; lean_object* v_unused_47_; lean_object* v_unused_48_; 
v_unused_40_ = lean_ctor_get(v_params_1_, 8);
lean_dec(v_unused_40_);
v_unused_41_ = lean_ctor_get(v_params_1_, 7);
lean_dec(v_unused_41_);
v_unused_42_ = lean_ctor_get(v_params_1_, 6);
lean_dec(v_unused_42_);
v_unused_43_ = lean_ctor_get(v_params_1_, 5);
lean_dec(v_unused_43_);
v_unused_44_ = lean_ctor_get(v_params_1_, 4);
lean_dec(v_unused_44_);
v_unused_45_ = lean_ctor_get(v_params_1_, 3);
lean_dec(v_unused_45_);
v_unused_46_ = lean_ctor_get(v_params_1_, 2);
lean_dec(v_unused_46_);
v_unused_47_ = lean_ctor_get(v_params_1_, 1);
lean_dec(v_unused_47_);
v_unused_48_ = lean_ctor_get(v_params_1_, 0);
lean_dec(v_unused_48_);
v___x_17_ = v_params_1_;
v_isShared_18_ = v_isSharedCheck_39_;
goto v_resetjp_16_;
}
else
{
lean_dec(v_params_1_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_39_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v_v_19_; lean_object* v_casesTypes_20_; lean_object* v_extThms_21_; lean_object* v_funCC_22_; lean_object* v_ematch_23_; lean_object* v_inj_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_38_; 
v_v_19_ = lean_array_fget(v_extensions_5_, v___x_13_);
v_casesTypes_20_ = lean_ctor_get(v_v_19_, 0);
v_extThms_21_ = lean_ctor_get(v_v_19_, 1);
v_funCC_22_ = lean_ctor_get(v_v_19_, 2);
v_ematch_23_ = lean_ctor_get(v_v_19_, 3);
v_inj_24_ = lean_ctor_get(v_v_19_, 4);
v_isSharedCheck_38_ = !lean_is_exclusive(v_v_19_);
if (v_isSharedCheck_38_ == 0)
{
v___x_26_ = v_v_19_;
v_isShared_27_ = v_isSharedCheck_38_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_inj_24_);
lean_inc(v_ematch_23_);
lean_inc(v_funCC_22_);
lean_inc(v_extThms_21_);
lean_inc(v_casesTypes_20_);
lean_dec(v_v_19_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_38_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_28_; lean_object* v_xs_x27_29_; lean_object* v___x_30_; lean_object* v___x_32_; 
v___x_28_ = lean_box(0);
v_xs_x27_29_ = lean_array_fset(v_extensions_5_, v___x_13_, v___x_28_);
v___x_30_ = l_Lean_Meta_Grind_CasesTypes_insert(v_casesTypes_20_, v_declName_2_, v_eager_3_);
if (v_isShared_27_ == 0)
{
lean_ctor_set(v___x_26_, 0, v___x_30_);
v___x_32_ = v___x_26_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v___x_30_);
lean_ctor_set(v_reuseFailAlloc_37_, 1, v_extThms_21_);
lean_ctor_set(v_reuseFailAlloc_37_, 2, v_funCC_22_);
lean_ctor_set(v_reuseFailAlloc_37_, 3, v_ematch_23_);
lean_ctor_set(v_reuseFailAlloc_37_, 4, v_inj_24_);
v___x_32_ = v_reuseFailAlloc_37_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = lean_array_fset(v_xs_x27_29_, v___x_13_, v___x_32_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v___x_33_);
v___x_35_ = v___x_17_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_config_4_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_33_);
lean_ctor_set(v_reuseFailAlloc_36_, 2, v_extra_6_);
lean_ctor_set(v_reuseFailAlloc_36_, 3, v_extraInj_7_);
lean_ctor_set(v_reuseFailAlloc_36_, 4, v_extraFacts_8_);
lean_ctor_set(v_reuseFailAlloc_36_, 5, v_symPrios_9_);
lean_ctor_set(v_reuseFailAlloc_36_, 6, v_norm_10_);
lean_ctor_set(v_reuseFailAlloc_36_, 7, v_normProcs_11_);
lean_ctor_set(v_reuseFailAlloc_36_, 8, v_anchorRefs_x3f_12_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes___boxed(lean_object* v_params_49_, lean_object* v_declName_50_, lean_object* v_eager_51_){
_start:
{
uint8_t v_eager_boxed_52_; lean_object* v_res_53_; 
v_eager_boxed_52_ = lean_unbox(v_eager_51_);
v_res_53_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_49_, v_declName_50_, v_eager_boxed_52_);
return v_res_53_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(lean_object* v_declName_54_, lean_object* v_as_55_, size_t v_i_56_, size_t v_stop_57_){
_start:
{
uint8_t v___x_58_; 
v___x_58_ = lean_usize_dec_eq(v_i_56_, v_stop_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v_casesTypes_60_; uint8_t v___x_61_; 
v___x_59_ = lean_array_uget_borrowed(v_as_55_, v_i_56_);
v_casesTypes_60_ = lean_ctor_get(v___x_59_, 0);
v___x_61_ = l_Lean_Meta_Grind_CasesTypes_contains(v_casesTypes_60_, v_declName_54_);
if (v___x_61_ == 0)
{
size_t v___x_62_; size_t v___x_63_; 
v___x_62_ = ((size_t)1ULL);
v___x_63_ = lean_usize_add(v_i_56_, v___x_62_);
v_i_56_ = v___x_63_;
goto _start;
}
else
{
return v___x_61_;
}
}
else
{
uint8_t v___x_65_; 
v___x_65_ = 0;
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0___boxed(lean_object* v_declName_66_, lean_object* v_as_67_, lean_object* v_i_68_, lean_object* v_stop_69_){
_start:
{
size_t v_i_boxed_70_; size_t v_stop_boxed_71_; uint8_t v_res_72_; lean_object* v_r_73_; 
v_i_boxed_70_ = lean_unbox_usize(v_i_68_);
lean_dec(v_i_68_);
v_stop_boxed_71_ = lean_unbox_usize(v_stop_69_);
lean_dec(v_stop_69_);
v_res_72_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(v_declName_66_, v_as_67_, v_i_boxed_70_, v_stop_boxed_71_);
lean_dec_ref(v_as_67_);
lean_dec(v_declName_66_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(lean_object* v_params_74_, lean_object* v_declName_75_, lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
lean_object* v___y_80_; lean_object* v___y_81_; lean_object* v___y_82_; lean_object* v___y_83_; lean_object* v___y_84_; lean_object* v___y_85_; lean_object* v___y_86_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v_config_91_; lean_object* v_extensions_92_; lean_object* v_extra_93_; lean_object* v_extraInj_94_; lean_object* v_extraFacts_95_; lean_object* v_symPrios_96_; lean_object* v_norm_97_; lean_object* v_normProcs_98_; lean_object* v_anchorRefs_x3f_99_; lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v_config_91_ = lean_ctor_get(v_params_74_, 0);
lean_inc_ref(v_config_91_);
v_extensions_92_ = lean_ctor_get(v_params_74_, 1);
lean_inc_ref(v_extensions_92_);
v_extra_93_ = lean_ctor_get(v_params_74_, 2);
lean_inc_ref(v_extra_93_);
v_extraInj_94_ = lean_ctor_get(v_params_74_, 3);
lean_inc_ref(v_extraInj_94_);
v_extraFacts_95_ = lean_ctor_get(v_params_74_, 4);
lean_inc_ref(v_extraFacts_95_);
v_symPrios_96_ = lean_ctor_get(v_params_74_, 5);
lean_inc_ref(v_symPrios_96_);
v_norm_97_ = lean_ctor_get(v_params_74_, 6);
lean_inc_ref(v_norm_97_);
v_normProcs_98_ = lean_ctor_get(v_params_74_, 7);
lean_inc_ref(v_normProcs_98_);
v_anchorRefs_x3f_99_ = lean_ctor_get(v_params_74_, 8);
lean_inc(v_anchorRefs_x3f_99_);
lean_dec_ref(v_params_74_);
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_array_get_size(v_extensions_92_);
v___x_133_ = lean_nat_dec_lt(v___x_131_, v___x_132_);
if (v___x_133_ == 0)
{
goto v___jp_121_;
}
else
{
if (v___x_133_ == 0)
{
goto v___jp_121_;
}
else
{
size_t v___x_134_; size_t v___x_135_; uint8_t v___x_136_; 
v___x_134_ = ((size_t)0ULL);
v___x_135_ = lean_usize_of_nat(v___x_132_);
v___x_136_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes_spec__0(v_declName_75_, v_extensions_92_, v___x_134_, v___x_135_);
if (v___x_136_ == 0)
{
goto v___jp_121_;
}
else
{
goto v___jp_100_;
}
}
}
v___jp_79_:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_89_, 0, v___y_82_);
lean_ctor_set(v___x_89_, 1, v___y_88_);
lean_ctor_set(v___x_89_, 2, v___y_83_);
lean_ctor_set(v___x_89_, 3, v___y_87_);
lean_ctor_set(v___x_89_, 4, v___y_86_);
lean_ctor_set(v___x_89_, 5, v___y_85_);
lean_ctor_set(v___x_89_, 6, v___y_81_);
lean_ctor_set(v___x_89_, 7, v___y_84_);
lean_ctor_set(v___x_89_, 8, v___y_80_);
v___x_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
v___jp_100_:
{
lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_101_ = lean_unsigned_to_nat(0u);
v___x_102_ = lean_array_get_size(v_extensions_92_);
v___x_103_ = lean_nat_dec_lt(v___x_101_, v___x_102_);
if (v___x_103_ == 0)
{
lean_dec(v_declName_75_);
v___y_80_ = v_anchorRefs_x3f_99_;
v___y_81_ = v_norm_97_;
v___y_82_ = v_config_91_;
v___y_83_ = v_extra_93_;
v___y_84_ = v_normProcs_98_;
v___y_85_ = v_symPrios_96_;
v___y_86_ = v_extraFacts_95_;
v___y_87_ = v_extraInj_94_;
v___y_88_ = v_extensions_92_;
goto v___jp_79_;
}
else
{
lean_object* v_v_104_; lean_object* v_casesTypes_105_; lean_object* v_extThms_106_; lean_object* v_funCC_107_; lean_object* v_ematch_108_; lean_object* v_inj_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_120_; 
v_v_104_ = lean_array_fget(v_extensions_92_, v___x_101_);
v_casesTypes_105_ = lean_ctor_get(v_v_104_, 0);
v_extThms_106_ = lean_ctor_get(v_v_104_, 1);
v_funCC_107_ = lean_ctor_get(v_v_104_, 2);
v_ematch_108_ = lean_ctor_get(v_v_104_, 3);
v_inj_109_ = lean_ctor_get(v_v_104_, 4);
v_isSharedCheck_120_ = !lean_is_exclusive(v_v_104_);
if (v_isSharedCheck_120_ == 0)
{
v___x_111_ = v_v_104_;
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_inj_109_);
lean_inc(v_ematch_108_);
lean_inc(v_funCC_107_);
lean_inc(v_extThms_106_);
lean_inc(v_casesTypes_105_);
lean_dec(v_v_104_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_120_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v_xs_x27_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_113_ = lean_box(0);
v_xs_x27_114_ = lean_array_fset(v_extensions_92_, v___x_101_, v___x_113_);
v___x_115_ = l_Lean_Meta_Grind_CasesTypes_erase(v_casesTypes_105_, v_declName_75_);
lean_dec(v_declName_75_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_115_);
v___x_117_ = v___x_111_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_extThms_106_);
lean_ctor_set(v_reuseFailAlloc_119_, 2, v_funCC_107_);
lean_ctor_set(v_reuseFailAlloc_119_, 3, v_ematch_108_);
lean_ctor_set(v_reuseFailAlloc_119_, 4, v_inj_109_);
v___x_117_ = v_reuseFailAlloc_119_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; 
v___x_118_ = lean_array_fset(v_xs_x27_114_, v___x_101_, v___x_117_);
v___y_80_ = v_anchorRefs_x3f_99_;
v___y_81_ = v_norm_97_;
v___y_82_ = v_config_91_;
v___y_83_ = v_extra_93_;
v___y_84_ = v_normProcs_98_;
v___y_85_ = v_symPrios_96_;
v___y_86_ = v_extraFacts_95_;
v___y_87_ = v_extraInj_94_;
v___y_88_ = v___x_118_;
goto v___jp_79_;
}
}
}
}
v___jp_121_:
{
lean_object* v___x_122_; 
lean_inc(v_declName_75_);
v___x_122_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_75_, v_a_76_, v_a_77_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_dec_ref_known(v___x_122_, 1);
goto v___jp_100_;
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec(v_anchorRefs_x3f_99_);
lean_dec_ref(v_normProcs_98_);
lean_dec_ref(v_norm_97_);
lean_dec_ref(v_symPrios_96_);
lean_dec_ref(v_extraFacts_95_);
lean_dec_ref(v_extraInj_94_);
lean_dec_ref(v_extra_93_);
lean_dec_ref(v_extensions_92_);
lean_dec_ref(v_config_91_);
lean_dec(v_declName_75_);
v_a_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes___boxed(lean_object* v_params_137_, lean_object* v_declName_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(v_params_137_, v_declName_138_, v_a_139_, v_a_140_);
lean_dec(v_a_140_);
lean_dec_ref(v_a_139_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(lean_object* v_params_143_, lean_object* v_declName_144_){
_start:
{
lean_object* v_config_145_; lean_object* v_extensions_146_; lean_object* v_extra_147_; lean_object* v_extraInj_148_; lean_object* v_extraFacts_149_; lean_object* v_symPrios_150_; lean_object* v_norm_151_; lean_object* v_normProcs_152_; lean_object* v_anchorRefs_x3f_153_; lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v_config_145_ = lean_ctor_get(v_params_143_, 0);
v_extensions_146_ = lean_ctor_get(v_params_143_, 1);
v_extra_147_ = lean_ctor_get(v_params_143_, 2);
v_extraInj_148_ = lean_ctor_get(v_params_143_, 3);
v_extraFacts_149_ = lean_ctor_get(v_params_143_, 4);
v_symPrios_150_ = lean_ctor_get(v_params_143_, 5);
v_norm_151_ = lean_ctor_get(v_params_143_, 6);
v_normProcs_152_ = lean_ctor_get(v_params_143_, 7);
v_anchorRefs_x3f_153_ = lean_ctor_get(v_params_143_, 8);
v___x_154_ = lean_unsigned_to_nat(0u);
v___x_155_ = lean_array_get_size(v_extensions_146_);
v___x_156_ = lean_nat_dec_lt(v___x_154_, v___x_155_);
if (v___x_156_ == 0)
{
lean_dec(v_declName_144_);
return v_params_143_;
}
else
{
lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_180_; 
lean_inc(v_anchorRefs_x3f_153_);
lean_inc_ref(v_normProcs_152_);
lean_inc_ref(v_norm_151_);
lean_inc_ref(v_symPrios_150_);
lean_inc_ref(v_extraFacts_149_);
lean_inc_ref(v_extraInj_148_);
lean_inc_ref(v_extra_147_);
lean_inc_ref(v_extensions_146_);
lean_inc_ref(v_config_145_);
v_isSharedCheck_180_ = !lean_is_exclusive(v_params_143_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; lean_object* v_unused_182_; lean_object* v_unused_183_; lean_object* v_unused_184_; lean_object* v_unused_185_; lean_object* v_unused_186_; lean_object* v_unused_187_; lean_object* v_unused_188_; lean_object* v_unused_189_; 
v_unused_181_ = lean_ctor_get(v_params_143_, 8);
lean_dec(v_unused_181_);
v_unused_182_ = lean_ctor_get(v_params_143_, 7);
lean_dec(v_unused_182_);
v_unused_183_ = lean_ctor_get(v_params_143_, 6);
lean_dec(v_unused_183_);
v_unused_184_ = lean_ctor_get(v_params_143_, 5);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_params_143_, 4);
lean_dec(v_unused_185_);
v_unused_186_ = lean_ctor_get(v_params_143_, 3);
lean_dec(v_unused_186_);
v_unused_187_ = lean_ctor_get(v_params_143_, 2);
lean_dec(v_unused_187_);
v_unused_188_ = lean_ctor_get(v_params_143_, 1);
lean_dec(v_unused_188_);
v_unused_189_ = lean_ctor_get(v_params_143_, 0);
lean_dec(v_unused_189_);
v___x_158_ = v_params_143_;
v_isShared_159_ = v_isSharedCheck_180_;
goto v_resetjp_157_;
}
else
{
lean_dec(v_params_143_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_180_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v_v_160_; lean_object* v_casesTypes_161_; lean_object* v_extThms_162_; lean_object* v_funCC_163_; lean_object* v_ematch_164_; lean_object* v_inj_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_179_; 
v_v_160_ = lean_array_fget(v_extensions_146_, v___x_154_);
v_casesTypes_161_ = lean_ctor_get(v_v_160_, 0);
v_extThms_162_ = lean_ctor_get(v_v_160_, 1);
v_funCC_163_ = lean_ctor_get(v_v_160_, 2);
v_ematch_164_ = lean_ctor_get(v_v_160_, 3);
v_inj_165_ = lean_ctor_get(v_v_160_, 4);
v_isSharedCheck_179_ = !lean_is_exclusive(v_v_160_);
if (v_isSharedCheck_179_ == 0)
{
v___x_167_ = v_v_160_;
v_isShared_168_ = v_isSharedCheck_179_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_inj_165_);
lean_inc(v_ematch_164_);
lean_inc(v_funCC_163_);
lean_inc(v_extThms_162_);
lean_inc(v_casesTypes_161_);
lean_dec(v_v_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_179_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v_xs_x27_170_; lean_object* v___x_171_; lean_object* v___x_173_; 
v___x_169_ = lean_box(0);
v_xs_x27_170_ = lean_array_fset(v_extensions_146_, v___x_154_, v___x_169_);
v___x_171_ = l_Lean_NameSet_insert(v_funCC_163_, v_declName_144_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 2, v___x_171_);
v___x_173_ = v___x_167_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_casesTypes_161_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_extThms_162_);
lean_ctor_set(v_reuseFailAlloc_178_, 2, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_178_, 3, v_ematch_164_);
lean_ctor_set(v_reuseFailAlloc_178_, 4, v_inj_165_);
v___x_173_ = v_reuseFailAlloc_178_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_174_ = lean_array_fset(v_xs_x27_170_, v___x_154_, v___x_173_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v___x_174_);
v___x_176_ = v___x_158_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_config_145_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_177_, 2, v_extra_147_);
lean_ctor_set(v_reuseFailAlloc_177_, 3, v_extraInj_148_);
lean_ctor_set(v_reuseFailAlloc_177_, 4, v_extraFacts_149_);
lean_ctor_set(v_reuseFailAlloc_177_, 5, v_symPrios_150_);
lean_ctor_set(v_reuseFailAlloc_177_, 6, v_norm_151_);
lean_ctor_set(v_reuseFailAlloc_177_, 7, v_normProcs_152_);
lean_ctor_set(v_reuseFailAlloc_177_, 8, v_anchorRefs_x3f_153_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(lean_object* v_declName_190_, lean_object* v_as_191_, size_t v_i_192_, size_t v_stop_193_){
_start:
{
uint8_t v___x_194_; 
v___x_194_ = lean_usize_dec_eq(v_i_192_, v_stop_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; lean_object* v_ematch_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_195_ = lean_array_uget_borrowed(v_as_191_, v_i_192_);
v_ematch_196_ = lean_ctor_get(v___x_195_, 3);
lean_inc(v_declName_190_);
v___x_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_197_, 0, v_declName_190_);
v___x_198_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_ematch_196_, v___x_197_);
lean_dec_ref_known(v___x_197_, 1);
if (v___x_198_ == 0)
{
size_t v___x_199_; size_t v___x_200_; 
v___x_199_ = ((size_t)1ULL);
v___x_200_ = lean_usize_add(v_i_192_, v___x_199_);
v_i_192_ = v___x_200_;
goto _start;
}
else
{
lean_dec(v_declName_190_);
return v___x_198_;
}
}
else
{
uint8_t v___x_202_; 
lean_dec(v_declName_190_);
v___x_202_ = 0;
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0___boxed(lean_object* v_declName_203_, lean_object* v_as_204_, lean_object* v_i_205_, lean_object* v_stop_206_){
_start:
{
size_t v_i_boxed_207_; size_t v_stop_boxed_208_; uint8_t v_res_209_; lean_object* v_r_210_; 
v_i_boxed_207_ = lean_unbox_usize(v_i_205_);
lean_dec(v_i_205_);
v_stop_boxed_208_ = lean_unbox_usize(v_stop_206_);
lean_dec(v_stop_206_);
v_res_209_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(v_declName_203_, v_as_204_, v_i_boxed_207_, v_stop_boxed_208_);
lean_dec_ref(v_as_204_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(lean_object* v_params_211_, lean_object* v_declName_212_){
_start:
{
lean_object* v_extensions_213_; lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v_extensions_213_ = lean_ctor_get(v_params_211_, 1);
v___x_214_ = lean_unsigned_to_nat(0u);
v___x_215_ = lean_array_get_size(v_extensions_213_);
v___x_216_ = lean_nat_dec_lt(v___x_214_, v___x_215_);
if (v___x_216_ == 0)
{
lean_dec(v_declName_212_);
return v___x_216_;
}
else
{
if (v___x_216_ == 0)
{
lean_dec(v_declName_212_);
return v___x_216_;
}
else
{
size_t v___x_217_; size_t v___x_218_; uint8_t v___x_219_; 
v___x_217_ = ((size_t)0ULL);
v___x_218_ = lean_usize_of_nat(v___x_215_);
v___x_219_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch_spec__0(v_declName_212_, v_extensions_213_, v___x_217_, v___x_218_);
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch___boxed(lean_object* v_params_220_, lean_object* v_declName_221_){
_start:
{
uint8_t v_res_222_; lean_object* v_r_223_; 
v_res_222_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_220_, v_declName_221_);
lean_dec_ref(v_params_220_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(lean_object* v_declName_224_, lean_object* v_as_225_, size_t v_i_226_, size_t v_stop_227_){
_start:
{
uint8_t v___x_228_; 
v___x_228_ = lean_usize_dec_eq(v_i_226_, v_stop_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; lean_object* v_inj_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_229_ = lean_array_uget_borrowed(v_as_225_, v_i_226_);
v_inj_230_ = lean_ctor_get(v___x_229_, 4);
lean_inc(v_declName_224_);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v_declName_224_);
v___x_232_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_inj_230_, v___x_231_);
lean_dec_ref_known(v___x_231_, 1);
if (v___x_232_ == 0)
{
size_t v___x_233_; size_t v___x_234_; 
v___x_233_ = ((size_t)1ULL);
v___x_234_ = lean_usize_add(v_i_226_, v___x_233_);
v_i_226_ = v___x_234_;
goto _start;
}
else
{
lean_dec(v_declName_224_);
return v___x_232_;
}
}
else
{
uint8_t v___x_236_; 
lean_dec(v_declName_224_);
v___x_236_ = 0;
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0___boxed(lean_object* v_declName_237_, lean_object* v_as_238_, lean_object* v_i_239_, lean_object* v_stop_240_){
_start:
{
size_t v_i_boxed_241_; size_t v_stop_boxed_242_; uint8_t v_res_243_; lean_object* v_r_244_; 
v_i_boxed_241_ = lean_unbox_usize(v_i_239_);
lean_dec(v_i_239_);
v_stop_boxed_242_ = lean_unbox_usize(v_stop_240_);
lean_dec(v_stop_240_);
v_res_243_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(v_declName_237_, v_as_238_, v_i_boxed_241_, v_stop_boxed_242_);
lean_dec_ref(v_as_238_);
v_r_244_ = lean_box(v_res_243_);
return v_r_244_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(lean_object* v_params_245_, lean_object* v_declName_246_){
_start:
{
lean_object* v_extensions_247_; lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___x_250_; 
v_extensions_247_ = lean_ctor_get(v_params_245_, 1);
v___x_248_ = lean_unsigned_to_nat(0u);
v___x_249_ = lean_array_get_size(v_extensions_247_);
v___x_250_ = lean_nat_dec_lt(v___x_248_, v___x_249_);
if (v___x_250_ == 0)
{
lean_dec(v_declName_246_);
return v___x_250_;
}
else
{
if (v___x_250_ == 0)
{
lean_dec(v_declName_246_);
return v___x_250_;
}
else
{
size_t v___x_251_; size_t v___x_252_; uint8_t v___x_253_; 
v___x_251_ = ((size_t)0ULL);
v___x_252_ = lean_usize_of_nat(v___x_249_);
v___x_253_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem_spec__0(v_declName_246_, v_extensions_247_, v___x_251_, v___x_252_);
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem___boxed(lean_object* v_params_254_, lean_object* v_declName_255_){
_start:
{
uint8_t v_res_256_; lean_object* v_r_257_; 
v_res_256_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(v_params_254_, v_declName_255_);
lean_dec_ref(v_params_254_);
v_r_257_ = lean_box(v_res_256_);
return v_r_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(lean_object* v_params_258_, lean_object* v_declName_259_){
_start:
{
lean_object* v_config_260_; lean_object* v_extensions_261_; lean_object* v_extra_262_; lean_object* v_extraInj_263_; lean_object* v_extraFacts_264_; lean_object* v_symPrios_265_; lean_object* v_norm_266_; lean_object* v_normProcs_267_; lean_object* v_anchorRefs_x3f_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_config_260_ = lean_ctor_get(v_params_258_, 0);
v_extensions_261_ = lean_ctor_get(v_params_258_, 1);
v_extra_262_ = lean_ctor_get(v_params_258_, 2);
v_extraInj_263_ = lean_ctor_get(v_params_258_, 3);
v_extraFacts_264_ = lean_ctor_get(v_params_258_, 4);
v_symPrios_265_ = lean_ctor_get(v_params_258_, 5);
v_norm_266_ = lean_ctor_get(v_params_258_, 6);
v_normProcs_267_ = lean_ctor_get(v_params_258_, 7);
v_anchorRefs_x3f_268_ = lean_ctor_get(v_params_258_, 8);
v___x_269_ = lean_unsigned_to_nat(0u);
v___x_270_ = lean_array_get_size(v_extensions_261_);
v___x_271_ = lean_nat_dec_lt(v___x_269_, v___x_270_);
if (v___x_271_ == 0)
{
lean_dec(v_declName_259_);
return v_params_258_;
}
else
{
lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_296_; 
lean_inc(v_anchorRefs_x3f_268_);
lean_inc_ref(v_normProcs_267_);
lean_inc_ref(v_norm_266_);
lean_inc_ref(v_symPrios_265_);
lean_inc_ref(v_extraFacts_264_);
lean_inc_ref(v_extraInj_263_);
lean_inc_ref(v_extra_262_);
lean_inc_ref(v_extensions_261_);
lean_inc_ref(v_config_260_);
v_isSharedCheck_296_ = !lean_is_exclusive(v_params_258_);
if (v_isSharedCheck_296_ == 0)
{
lean_object* v_unused_297_; lean_object* v_unused_298_; lean_object* v_unused_299_; lean_object* v_unused_300_; lean_object* v_unused_301_; lean_object* v_unused_302_; lean_object* v_unused_303_; lean_object* v_unused_304_; lean_object* v_unused_305_; 
v_unused_297_ = lean_ctor_get(v_params_258_, 8);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_params_258_, 7);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_params_258_, 6);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_params_258_, 5);
lean_dec(v_unused_300_);
v_unused_301_ = lean_ctor_get(v_params_258_, 4);
lean_dec(v_unused_301_);
v_unused_302_ = lean_ctor_get(v_params_258_, 3);
lean_dec(v_unused_302_);
v_unused_303_ = lean_ctor_get(v_params_258_, 2);
lean_dec(v_unused_303_);
v_unused_304_ = lean_ctor_get(v_params_258_, 1);
lean_dec(v_unused_304_);
v_unused_305_ = lean_ctor_get(v_params_258_, 0);
lean_dec(v_unused_305_);
v___x_273_ = v_params_258_;
v_isShared_274_ = v_isSharedCheck_296_;
goto v_resetjp_272_;
}
else
{
lean_dec(v_params_258_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_296_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v_v_275_; lean_object* v_casesTypes_276_; lean_object* v_extThms_277_; lean_object* v_funCC_278_; lean_object* v_ematch_279_; lean_object* v_inj_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_295_; 
v_v_275_ = lean_array_fget(v_extensions_261_, v___x_269_);
v_casesTypes_276_ = lean_ctor_get(v_v_275_, 0);
v_extThms_277_ = lean_ctor_get(v_v_275_, 1);
v_funCC_278_ = lean_ctor_get(v_v_275_, 2);
v_ematch_279_ = lean_ctor_get(v_v_275_, 3);
v_inj_280_ = lean_ctor_get(v_v_275_, 4);
v_isSharedCheck_295_ = !lean_is_exclusive(v_v_275_);
if (v_isSharedCheck_295_ == 0)
{
v___x_282_ = v_v_275_;
v_isShared_283_ = v_isSharedCheck_295_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_inj_280_);
lean_inc(v_ematch_279_);
lean_inc(v_funCC_278_);
lean_inc(v_extThms_277_);
lean_inc(v_casesTypes_276_);
lean_dec(v_v_275_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_295_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v_xs_x27_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_284_ = lean_box(0);
v_xs_x27_285_ = lean_array_fset(v_extensions_261_, v___x_269_, v___x_284_);
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v_declName_259_);
v___x_287_ = l_Lean_Meta_Grind_Theorems_erase___redArg(v_ematch_279_, v___x_286_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 3, v___x_287_);
v___x_289_ = v___x_282_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_casesTypes_276_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_extThms_277_);
lean_ctor_set(v_reuseFailAlloc_294_, 2, v_funCC_278_);
lean_ctor_set(v_reuseFailAlloc_294_, 3, v___x_287_);
lean_ctor_set(v_reuseFailAlloc_294_, 4, v_inj_280_);
v___x_289_ = v_reuseFailAlloc_294_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_290_ = lean_array_fset(v_xs_x27_285_, v___x_269_, v___x_289_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v___x_290_);
v___x_292_ = v___x_273_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_config_260_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v___x_290_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v_extra_262_);
lean_ctor_set(v_reuseFailAlloc_293_, 3, v_extraInj_263_);
lean_ctor_set(v_reuseFailAlloc_293_, 4, v_extraFacts_264_);
lean_ctor_set(v_reuseFailAlloc_293_, 5, v_symPrios_265_);
lean_ctor_set(v_reuseFailAlloc_293_, 6, v_norm_266_);
lean_ctor_set(v_reuseFailAlloc_293_, 7, v_normProcs_267_);
lean_ctor_set(v_reuseFailAlloc_293_, 8, v_anchorRefs_x3f_268_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(lean_object* v_params_306_, uint8_t v___x_307_, lean_object* v_as_308_, size_t v_i_309_, size_t v_stop_310_){
_start:
{
uint8_t v___x_311_; 
v___x_311_ = lean_usize_dec_eq(v_i_309_, v_stop_310_);
if (v___x_311_ == 0)
{
uint8_t v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v___x_312_ = 1;
v___x_313_ = lean_array_uget_borrowed(v_as_308_, v_i_309_);
lean_inc(v___x_313_);
v___x_314_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_306_, v___x_313_);
if (v___x_314_ == 0)
{
return v___x_312_;
}
else
{
if (v___x_307_ == 0)
{
size_t v___x_315_; size_t v___x_316_; 
v___x_315_ = ((size_t)1ULL);
v___x_316_ = lean_usize_add(v_i_309_, v___x_315_);
v_i_309_ = v___x_316_;
goto _start;
}
else
{
return v___x_312_;
}
}
}
else
{
uint8_t v___x_318_; 
v___x_318_ = 0;
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1___boxed(lean_object* v_params_319_, lean_object* v___x_320_, lean_object* v_as_321_, lean_object* v_i_322_, lean_object* v_stop_323_){
_start:
{
uint8_t v___x_1647__boxed_324_; size_t v_i_boxed_325_; size_t v_stop_boxed_326_; uint8_t v_res_327_; lean_object* v_r_328_; 
v___x_1647__boxed_324_ = lean_unbox(v___x_320_);
v_i_boxed_325_ = lean_unbox_usize(v_i_322_);
lean_dec(v_i_322_);
v_stop_boxed_326_ = lean_unbox_usize(v_stop_323_);
lean_dec(v_stop_323_);
v_res_327_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(v_params_319_, v___x_1647__boxed_324_, v_as_321_, v_i_boxed_325_, v_stop_boxed_326_);
lean_dec_ref(v_as_321_);
lean_dec_ref(v_params_319_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(lean_object* v_as_329_, size_t v_i_330_, size_t v_stop_331_, lean_object* v_b_332_){
_start:
{
uint8_t v___x_333_; 
v___x_333_ = lean_usize_dec_eq(v_i_330_, v_stop_331_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; size_t v___x_336_; size_t v___x_337_; 
v___x_334_ = lean_array_uget_borrowed(v_as_329_, v_i_330_);
lean_inc(v___x_334_);
v___x_335_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(v_b_332_, v___x_334_);
v___x_336_ = ((size_t)1ULL);
v___x_337_ = lean_usize_add(v_i_330_, v___x_336_);
v_i_330_ = v___x_337_;
v_b_332_ = v___x_335_;
goto _start;
}
else
{
return v_b_332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0___boxed(lean_object* v_as_339_, lean_object* v_i_340_, lean_object* v_stop_341_, lean_object* v_b_342_){
_start:
{
size_t v_i_boxed_343_; size_t v_stop_boxed_344_; lean_object* v_res_345_; 
v_i_boxed_343_ = lean_unbox_usize(v_i_340_);
lean_dec(v_i_340_);
v_stop_boxed_344_ = lean_unbox_usize(v_stop_341_);
lean_dec(v_stop_341_);
v_res_345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(v_as_339_, v_i_boxed_343_, v_stop_boxed_344_, v_b_342_);
lean_dec_ref(v_as_339_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(lean_object* v_params_346_, lean_object* v_declName_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v___x_356_; lean_object* v_env_357_; uint8_t v___x_358_; 
v___x_356_ = lean_st_ref_get(v_a_351_);
v_env_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc_ref(v_env_357_);
lean_dec(v___x_356_);
lean_inc(v_declName_347_);
v___x_358_ = l_Lean_wasOriginallyTheorem(v_env_357_, v_declName_347_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; 
lean_inc(v_declName_347_);
v___x_359_ = l_Lean_Meta_getEqnsFor_x3f(v_declName_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_394_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_394_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_394_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_394_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
if (lean_obj_tag(v_a_360_) == 1)
{
lean_object* v_val_364_; lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
v_val_364_ = lean_ctor_get(v_a_360_, 0);
lean_inc(v_val_364_);
lean_dec_ref_known(v_a_360_, 1);
v___x_378_ = lean_unsigned_to_nat(0u);
v___x_379_ = lean_array_get_size(v_val_364_);
v___x_380_ = lean_nat_dec_lt(v___x_378_, v___x_379_);
if (v___x_380_ == 0)
{
lean_dec(v_declName_347_);
goto v___jp_365_;
}
else
{
if (v___x_380_ == 0)
{
lean_dec(v_declName_347_);
goto v___jp_365_;
}
else
{
size_t v___x_381_; size_t v___x_382_; uint8_t v___x_383_; 
v___x_381_ = ((size_t)0ULL);
v___x_382_ = lean_usize_of_nat(v___x_379_);
v___x_383_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__1(v_params_346_, v___x_358_, v_val_364_, v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec(v_declName_347_);
goto v___jp_365_;
}
else
{
lean_object* v___x_384_; 
v___x_384_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_347_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_dec_ref_known(v___x_384_, 1);
goto v___jp_365_;
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_dec(v_val_364_);
lean_del_object(v___x_362_);
lean_dec_ref(v_params_346_);
v_a_385_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_384_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_384_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
}
v___jp_365_:
{
lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_366_ = lean_unsigned_to_nat(0u);
v___x_367_ = lean_array_get_size(v_val_364_);
v___x_368_ = lean_nat_dec_lt(v___x_366_, v___x_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_370_; 
lean_dec(v_val_364_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v_params_346_);
v___x_370_ = v___x_362_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_params_346_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
else
{
size_t v___x_372_; size_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_372_ = ((size_t)0ULL);
v___x_373_ = lean_usize_of_nat(v___x_367_);
v___x_374_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch_spec__0(v_val_364_, v___x_372_, v___x_373_, v_params_346_);
lean_dec(v_val_364_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_374_);
v___x_376_ = v___x_362_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_374_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
}
else
{
lean_object* v___x_393_; 
lean_del_object(v___x_362_);
lean_dec(v_a_360_);
lean_dec_ref(v_params_346_);
v___x_393_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_347_, v_a_350_, v_a_351_);
return v___x_393_;
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_declName_347_);
lean_dec_ref(v_params_346_);
v_a_395_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_359_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_359_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
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
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
uint8_t v___x_403_; 
lean_inc(v_declName_347_);
v___x_403_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_containsEMatch(v_params_346_, v_declName_347_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; 
lean_inc(v_declName_347_);
v___x_404_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_347_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_dec_ref_known(v___x_404_, 1);
goto v___jp_353_;
}
else
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
lean_dec(v_declName_347_);
lean_dec_ref(v_params_346_);
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
else
{
goto v___jp_353_;
}
}
v___jp_353_:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatchCore(v_params_346_, v_declName_347_);
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch___boxed(lean_object* v_params_413_, lean_object* v_declName_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(v_params_413_, v_declName_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_);
lean_dec(v_a_418_);
lean_dec_ref(v_a_417_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(lean_object* v_params_421_, lean_object* v_declName_422_){
_start:
{
lean_object* v_config_423_; lean_object* v_extensions_424_; lean_object* v_extra_425_; lean_object* v_extraInj_426_; lean_object* v_extraFacts_427_; lean_object* v_symPrios_428_; lean_object* v_norm_429_; lean_object* v_normProcs_430_; lean_object* v_anchorRefs_x3f_431_; lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_config_423_ = lean_ctor_get(v_params_421_, 0);
v_extensions_424_ = lean_ctor_get(v_params_421_, 1);
v_extra_425_ = lean_ctor_get(v_params_421_, 2);
v_extraInj_426_ = lean_ctor_get(v_params_421_, 3);
v_extraFacts_427_ = lean_ctor_get(v_params_421_, 4);
v_symPrios_428_ = lean_ctor_get(v_params_421_, 5);
v_norm_429_ = lean_ctor_get(v_params_421_, 6);
v_normProcs_430_ = lean_ctor_get(v_params_421_, 7);
v_anchorRefs_x3f_431_ = lean_ctor_get(v_params_421_, 8);
v___x_432_ = lean_unsigned_to_nat(0u);
v___x_433_ = lean_array_get_size(v_extensions_424_);
v___x_434_ = lean_nat_dec_lt(v___x_432_, v___x_433_);
if (v___x_434_ == 0)
{
lean_dec(v_declName_422_);
return v_params_421_;
}
else
{
lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_459_; 
lean_inc(v_anchorRefs_x3f_431_);
lean_inc_ref(v_normProcs_430_);
lean_inc_ref(v_norm_429_);
lean_inc_ref(v_symPrios_428_);
lean_inc_ref(v_extraFacts_427_);
lean_inc_ref(v_extraInj_426_);
lean_inc_ref(v_extra_425_);
lean_inc_ref(v_extensions_424_);
lean_inc_ref(v_config_423_);
v_isSharedCheck_459_ = !lean_is_exclusive(v_params_421_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; lean_object* v_unused_461_; lean_object* v_unused_462_; lean_object* v_unused_463_; lean_object* v_unused_464_; lean_object* v_unused_465_; lean_object* v_unused_466_; lean_object* v_unused_467_; lean_object* v_unused_468_; 
v_unused_460_ = lean_ctor_get(v_params_421_, 8);
lean_dec(v_unused_460_);
v_unused_461_ = lean_ctor_get(v_params_421_, 7);
lean_dec(v_unused_461_);
v_unused_462_ = lean_ctor_get(v_params_421_, 6);
lean_dec(v_unused_462_);
v_unused_463_ = lean_ctor_get(v_params_421_, 5);
lean_dec(v_unused_463_);
v_unused_464_ = lean_ctor_get(v_params_421_, 4);
lean_dec(v_unused_464_);
v_unused_465_ = lean_ctor_get(v_params_421_, 3);
lean_dec(v_unused_465_);
v_unused_466_ = lean_ctor_get(v_params_421_, 2);
lean_dec(v_unused_466_);
v_unused_467_ = lean_ctor_get(v_params_421_, 1);
lean_dec(v_unused_467_);
v_unused_468_ = lean_ctor_get(v_params_421_, 0);
lean_dec(v_unused_468_);
v___x_436_ = v_params_421_;
v_isShared_437_ = v_isSharedCheck_459_;
goto v_resetjp_435_;
}
else
{
lean_dec(v_params_421_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_459_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v_v_438_; lean_object* v_casesTypes_439_; lean_object* v_extThms_440_; lean_object* v_funCC_441_; lean_object* v_ematch_442_; lean_object* v_inj_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_458_; 
v_v_438_ = lean_array_fget(v_extensions_424_, v___x_432_);
v_casesTypes_439_ = lean_ctor_get(v_v_438_, 0);
v_extThms_440_ = lean_ctor_get(v_v_438_, 1);
v_funCC_441_ = lean_ctor_get(v_v_438_, 2);
v_ematch_442_ = lean_ctor_get(v_v_438_, 3);
v_inj_443_ = lean_ctor_get(v_v_438_, 4);
v_isSharedCheck_458_ = !lean_is_exclusive(v_v_438_);
if (v_isSharedCheck_458_ == 0)
{
v___x_445_ = v_v_438_;
v_isShared_446_ = v_isSharedCheck_458_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_inj_443_);
lean_inc(v_ematch_442_);
lean_inc(v_funCC_441_);
lean_inc(v_extThms_440_);
lean_inc(v_casesTypes_439_);
lean_dec(v_v_438_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_458_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_447_; lean_object* v_xs_x27_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_452_; 
v___x_447_ = lean_box(0);
v_xs_x27_448_ = lean_array_fset(v_extensions_424_, v___x_432_, v___x_447_);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v_declName_422_);
v___x_450_ = l_Lean_Meta_Grind_Theorems_erase___redArg(v_inj_443_, v___x_449_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 4, v___x_450_);
v___x_452_ = v___x_445_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_casesTypes_439_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_extThms_440_);
lean_ctor_set(v_reuseFailAlloc_457_, 2, v_funCC_441_);
lean_ctor_set(v_reuseFailAlloc_457_, 3, v_ematch_442_);
lean_ctor_set(v_reuseFailAlloc_457_, 4, v___x_450_);
v___x_452_ = v_reuseFailAlloc_457_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; lean_object* v___x_455_; 
v___x_453_ = lean_array_fset(v_xs_x27_448_, v___x_432_, v___x_452_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 1, v___x_453_);
v___x_455_ = v___x_436_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_config_423_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v___x_453_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v_extra_425_);
lean_ctor_set(v_reuseFailAlloc_456_, 3, v_extraInj_426_);
lean_ctor_set(v_reuseFailAlloc_456_, 4, v_extraFacts_427_);
lean_ctor_set(v_reuseFailAlloc_456_, 5, v_symPrios_428_);
lean_ctor_set(v_reuseFailAlloc_456_, 6, v_norm_429_);
lean_ctor_set(v_reuseFailAlloc_456_, 7, v_normProcs_430_);
lean_ctor_set(v_reuseFailAlloc_456_, 8, v_anchorRefs_x3f_431_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(lean_object* v_origin_469_, lean_object* v_as_470_, size_t v_sz_471_, size_t v_i_472_, lean_object* v_b_473_){
_start:
{
lean_object* v_a_475_; uint8_t v___x_479_; 
v___x_479_ = lean_usize_dec_lt(v_i_472_, v_sz_471_);
if (v___x_479_ == 0)
{
return v_b_473_;
}
else
{
lean_object* v_a_480_; lean_object* v_ematch_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v_a_480_ = lean_array_uget_borrowed(v_as_470_, v_i_472_);
v_ematch_481_ = lean_ctor_get(v_a_480_, 3);
v___x_482_ = l_Lean_Meta_Grind_EMatchTheorems_getKindsFor(v_ematch_481_, v_origin_469_);
v___x_483_ = l_List_isEmpty___redArg(v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
v___x_484_ = l_List_appendTR___redArg(v_b_473_, v___x_482_);
v_a_475_ = v___x_484_;
goto v___jp_474_;
}
else
{
lean_dec(v___x_482_);
v_a_475_ = v_b_473_;
goto v___jp_474_;
}
}
v___jp_474_:
{
size_t v___x_476_; size_t v___x_477_; 
v___x_476_ = ((size_t)1ULL);
v___x_477_ = lean_usize_add(v_i_472_, v___x_476_);
v_i_472_ = v___x_477_;
v_b_473_ = v_a_475_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0___boxed(lean_object* v_origin_485_, lean_object* v_as_486_, lean_object* v_sz_487_, lean_object* v_i_488_, lean_object* v_b_489_){
_start:
{
size_t v_sz_boxed_490_; size_t v_i_boxed_491_; lean_object* v_res_492_; 
v_sz_boxed_490_ = lean_unbox_usize(v_sz_487_);
lean_dec(v_sz_487_);
v_i_boxed_491_ = lean_unbox_usize(v_i_488_);
lean_dec(v_i_488_);
v_res_492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(v_origin_485_, v_as_486_, v_sz_boxed_490_, v_i_boxed_491_, v_b_489_);
lean_dec_ref(v_as_486_);
lean_dec_ref(v_origin_485_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(lean_object* v_s_493_, lean_object* v_origin_494_){
_start:
{
lean_object* v_result_495_; size_t v_sz_496_; size_t v___x_497_; lean_object* v___x_498_; 
v_result_495_ = lean_box(0);
v_sz_496_ = lean_array_size(v_s_493_);
v___x_497_ = ((size_t)0ULL);
v___x_498_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor_spec__0(v_origin_494_, v_s_493_, v_sz_496_, v___x_497_, v_result_495_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor___boxed(lean_object* v_s_499_, lean_object* v_origin_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(v_s_499_, v_origin_500_);
lean_dec_ref(v_origin_500_);
lean_dec_ref(v_s_499_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(lean_object* v_upperBound_502_, lean_object* v_s_503_, lean_object* v_origin_504_, lean_object* v_a_505_, lean_object* v_b_506_){
_start:
{
lean_object* v_a_508_; uint8_t v___x_512_; 
v___x_512_ = lean_nat_dec_lt(v_a_505_, v_upperBound_502_);
if (v___x_512_ == 0)
{
lean_dec(v_a_505_);
return v_b_506_;
}
else
{
lean_object* v___x_513_; lean_object* v_ematch_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v___x_513_ = lean_array_fget_borrowed(v_s_503_, v_a_505_);
v_ematch_514_ = lean_ctor_get(v___x_513_, 3);
v___x_515_ = l_Lean_Meta_Grind_Theorems_find___redArg(v_ematch_514_, v_origin_504_);
v___x_516_ = l_List_isEmpty___redArg(v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
v___x_517_ = l_List_appendTR___redArg(v_b_506_, v___x_515_);
v_a_508_ = v___x_517_;
goto v___jp_507_;
}
else
{
lean_dec(v___x_515_);
v_a_508_ = v_b_506_;
goto v___jp_507_;
}
}
v___jp_507_:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_unsigned_to_nat(1u);
v___x_510_ = lean_nat_add(v_a_505_, v___x_509_);
lean_dec(v_a_505_);
v_a_505_ = v___x_510_;
v_b_506_ = v_a_508_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg___boxed(lean_object* v_upperBound_518_, lean_object* v_s_519_, lean_object* v_origin_520_, lean_object* v_a_521_, lean_object* v_b_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v_upperBound_518_, v_s_519_, v_origin_520_, v_a_521_, v_b_522_);
lean_dec_ref(v_origin_520_);
lean_dec_ref(v_s_519_);
lean_dec(v_upperBound_518_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find(lean_object* v_s_524_, lean_object* v_origin_525_){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v_r_528_; lean_object* v___x_529_; 
v___x_526_ = lean_array_get_size(v_s_524_);
v___x_527_ = lean_unsigned_to_nat(0u);
v_r_528_ = lean_box(0);
v___x_529_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v___x_526_, v_s_524_, v_origin_525_, v___x_527_, v_r_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_ExtensionStateArray_find___boxed(lean_object* v_s_530_, lean_object* v_origin_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lean_Meta_Grind_ExtensionStateArray_find(v_s_530_, v_origin_531_);
lean_dec_ref(v_origin_531_);
lean_dec_ref(v_s_530_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(lean_object* v_upperBound_533_, lean_object* v_s_534_, lean_object* v_origin_535_, lean_object* v_inst_536_, lean_object* v_R_537_, lean_object* v_a_538_, lean_object* v_b_539_, lean_object* v_c_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___redArg(v_upperBound_533_, v_s_534_, v_origin_535_, v_a_538_, v_b_539_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0___boxed(lean_object* v_upperBound_542_, lean_object* v_s_543_, lean_object* v_origin_544_, lean_object* v_inst_545_, lean_object* v_R_546_, lean_object* v_a_547_, lean_object* v_b_548_, lean_object* v_c_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Grind_ExtensionStateArray_find_spec__0(v_upperBound_542_, v_s_543_, v_origin_544_, v_inst_545_, v_R_546_, v_a_547_, v_b_548_, v_c_549_);
lean_dec_ref(v_origin_544_);
lean_dec_ref(v_s_543_);
lean_dec(v_upperBound_542_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(lean_object* v_msgData_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v___x_557_; lean_object* v_env_558_; uint8_t v___x_559_; lean_object* v_env_560_; lean_object* v___x_561_; lean_object* v_toCold_562_; lean_object* v_mctx_563_; lean_object* v_lctx_564_; lean_object* v_options_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_557_ = lean_st_ref_get(v___y_555_);
v_env_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc_ref(v_env_558_);
lean_dec(v___x_557_);
v___x_559_ = 0;
v_env_560_ = l_Lean_Environment_setRecordingDeps(v_env_558_, v___x_559_);
v___x_561_ = lean_st_ref_get(v___y_553_);
v_toCold_562_ = lean_ctor_get(v___y_554_, 0);
v_mctx_563_ = lean_ctor_get(v___x_561_, 0);
lean_inc_ref(v_mctx_563_);
lean_dec(v___x_561_);
v_lctx_564_ = lean_ctor_get(v___y_552_, 2);
v_options_565_ = lean_ctor_get(v_toCold_562_, 2);
lean_inc_ref(v_options_565_);
lean_inc_ref(v_lctx_564_);
v___x_566_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_566_, 0, v_env_560_);
lean_ctor_set(v___x_566_, 1, v_mctx_563_);
lean_ctor_set(v___x_566_, 2, v_lctx_564_);
lean_ctor_set(v___x_566_, 3, v_options_565_);
v___x_567_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
lean_ctor_set(v___x_567_, 1, v_msgData_551_);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_msgData_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msgData_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
return v_res_575_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(lean_object* v_opts_576_, lean_object* v_opt_577_){
_start:
{
lean_object* v_name_578_; lean_object* v_defValue_579_; lean_object* v_map_580_; lean_object* v___x_581_; 
v_name_578_ = lean_ctor_get(v_opt_577_, 0);
v_defValue_579_ = lean_ctor_get(v_opt_577_, 1);
v_map_580_ = lean_ctor_get(v_opts_576_, 0);
v___x_581_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_580_, v_name_578_);
if (lean_obj_tag(v___x_581_) == 0)
{
uint8_t v___x_582_; 
v___x_582_ = lean_unbox(v_defValue_579_);
return v___x_582_;
}
else
{
lean_object* v_val_583_; 
v_val_583_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_val_583_);
lean_dec_ref_known(v___x_581_, 1);
if (lean_obj_tag(v_val_583_) == 1)
{
uint8_t v_v_584_; 
v_v_584_ = lean_ctor_get_uint8(v_val_583_, 0);
lean_dec_ref_known(v_val_583_, 0);
return v_v_584_;
}
else
{
uint8_t v___x_585_; 
lean_dec(v_val_583_);
v___x_585_ = lean_unbox(v_defValue_579_);
return v___x_585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_opts_586_, lean_object* v_opt_587_){
_start:
{
uint8_t v_res_588_; lean_object* v_r_589_; 
v_res_588_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v_opts_586_, v_opt_587_);
lean_dec_ref(v_opt_587_);
lean_dec_ref(v_opts_586_);
v_r_589_ = lean_box(v_res_588_);
return v_r_589_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(uint8_t v_suppressElabErrors_598_, lean_object* v_x_599_){
_start:
{
if (lean_obj_tag(v_x_599_) == 1)
{
lean_object* v_pre_600_; 
v_pre_600_ = lean_ctor_get(v_x_599_, 0);
switch(lean_obj_tag(v_pre_600_))
{
case 1:
{
lean_object* v_pre_601_; 
v_pre_601_ = lean_ctor_get(v_pre_600_, 0);
switch(lean_obj_tag(v_pre_601_))
{
case 0:
{
lean_object* v_str_602_; lean_object* v_str_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v_str_602_ = lean_ctor_get(v_x_599_, 1);
v_str_603_ = lean_ctor_get(v_pre_600_, 1);
v___x_604_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_605_ = lean_string_dec_eq(v_str_603_, v___x_604_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_606_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_607_ = lean_string_dec_eq(v_str_603_, v___x_606_);
if (v___x_607_ == 0)
{
return v___x_607_;
}
else
{
lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_608_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_609_ = lean_string_dec_eq(v_str_602_, v___x_608_);
if (v___x_609_ == 0)
{
return v___x_609_;
}
else
{
return v_suppressElabErrors_598_;
}
}
}
else
{
lean_object* v___x_610_; uint8_t v___x_611_; 
v___x_610_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_611_ = lean_string_dec_eq(v_str_602_, v___x_610_);
if (v___x_611_ == 0)
{
return v___x_611_;
}
else
{
return v_suppressElabErrors_598_;
}
}
}
case 1:
{
lean_object* v_pre_612_; 
v_pre_612_ = lean_ctor_get(v_pre_601_, 0);
if (lean_obj_tag(v_pre_612_) == 0)
{
lean_object* v_str_613_; lean_object* v_str_614_; lean_object* v_str_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
v_str_613_ = lean_ctor_get(v_x_599_, 1);
v_str_614_ = lean_ctor_get(v_pre_600_, 1);
v_str_615_ = lean_ctor_get(v_pre_601_, 1);
v___x_616_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_617_ = lean_string_dec_eq(v_str_615_, v___x_616_);
if (v___x_617_ == 0)
{
return v___x_617_;
}
else
{
lean_object* v___x_618_; uint8_t v___x_619_; 
v___x_618_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_619_ = lean_string_dec_eq(v_str_614_, v___x_618_);
if (v___x_619_ == 0)
{
return v___x_619_;
}
else
{
lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_620_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_621_ = lean_string_dec_eq(v_str_613_, v___x_620_);
if (v___x_621_ == 0)
{
return v___x_621_;
}
else
{
return v_suppressElabErrors_598_;
}
}
}
}
else
{
uint8_t v___x_622_; 
v___x_622_ = 0;
return v___x_622_;
}
}
default: 
{
uint8_t v___x_623_; 
v___x_623_ = 0;
return v___x_623_;
}
}
}
case 0:
{
lean_object* v_str_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v_str_624_ = lean_ctor_get(v_x_599_, 1);
v___x_625_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___closed__7));
v___x_626_ = lean_string_dec_eq(v_str_624_, v___x_625_);
if (v___x_626_ == 0)
{
return v___x_626_;
}
else
{
return v_suppressElabErrors_598_;
}
}
default: 
{
uint8_t v___x_627_; 
v___x_627_ = 0;
return v___x_627_;
}
}
}
else
{
uint8_t v___x_628_; 
v___x_628_ = 0;
return v___x_628_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_suppressElabErrors_629_, lean_object* v_x_630_){
_start:
{
uint8_t v_suppressElabErrors_boxed_631_; uint8_t v_res_632_; lean_object* v_r_633_; 
v_suppressElabErrors_boxed_631_ = lean_unbox(v_suppressElabErrors_629_);
v_res_632_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0(v_suppressElabErrors_boxed_631_, v_x_630_);
lean_dec(v_x_630_);
v_r_633_ = lean_box(v_res_632_);
return v_r_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(lean_object* v_ref_635_, lean_object* v_msgData_636_, uint8_t v_severity_637_, uint8_t v_isSilent_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v___y_645_; uint8_t v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; uint8_t v___y_651_; lean_object* v_toCold_652_; lean_object* v___y_653_; lean_object* v___y_682_; lean_object* v___y_683_; lean_object* v___y_684_; uint8_t v___y_685_; uint8_t v___y_686_; lean_object* v___y_687_; uint8_t v___y_688_; lean_object* v___y_689_; lean_object* v___y_709_; lean_object* v___y_710_; uint8_t v___y_711_; uint8_t v___y_712_; lean_object* v___y_713_; uint8_t v___y_714_; lean_object* v___y_715_; uint8_t v___y_719_; uint8_t v___y_720_; uint8_t v___x_730_; uint8_t v___y_732_; uint8_t v___x_738_; 
v___x_730_ = 2;
v___x_738_ = l_Lean_instBEqMessageSeverity_beq(v_severity_637_, v___x_730_);
if (v___x_738_ == 0)
{
v___y_732_ = v___x_738_;
goto v___jp_731_;
}
else
{
uint8_t v___x_739_; 
lean_inc_ref(v_msgData_636_);
v___x_739_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_636_);
if (v___x_739_ == 0)
{
v___y_732_ = v___x_739_;
goto v___jp_731_;
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; 
lean_dec_ref(v_msgData_636_);
v___x_740_ = lean_box(0);
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
return v___x_741_;
}
}
v___jp_644_:
{
lean_object* v_currNamespace_654_; lean_object* v_openDecls_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v_env_660_; lean_object* v_nextMacroScope_661_; lean_object* v_ngen_662_; lean_object* v_auxDeclNGen_663_; lean_object* v_traceState_664_; lean_object* v_cache_665_; lean_object* v_recordedDeps_666_; lean_object* v_messages_667_; lean_object* v_infoState_668_; lean_object* v_snapshotTasks_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_680_; 
v_currNamespace_654_ = lean_ctor_get(v_toCold_652_, 4);
v_openDecls_655_ = lean_ctor_get(v_toCold_652_, 5);
lean_inc(v_openDecls_655_);
lean_inc(v_currNamespace_654_);
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v_currNamespace_654_);
lean_ctor_set(v___x_656_, 1, v_openDecls_655_);
v___x_657_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set(v___x_657_, 1, v___y_648_);
lean_inc_ref(v___y_650_);
lean_inc_ref(v___y_649_);
v___x_658_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_658_, 0, v___y_649_);
lean_ctor_set(v___x_658_, 1, v___y_647_);
lean_ctor_set(v___x_658_, 2, v___y_645_);
lean_ctor_set(v___x_658_, 3, v___y_650_);
lean_ctor_set(v___x_658_, 4, v___x_657_);
lean_ctor_set_uint8(v___x_658_, sizeof(void*)*5, v___y_651_);
lean_ctor_set_uint8(v___x_658_, sizeof(void*)*5 + 1, v___y_646_);
lean_ctor_set_uint8(v___x_658_, sizeof(void*)*5 + 2, v_isSilent_638_);
v___x_659_ = lean_st_ref_take(v___y_653_);
v_env_660_ = lean_ctor_get(v___x_659_, 0);
v_nextMacroScope_661_ = lean_ctor_get(v___x_659_, 1);
v_ngen_662_ = lean_ctor_get(v___x_659_, 2);
v_auxDeclNGen_663_ = lean_ctor_get(v___x_659_, 3);
v_traceState_664_ = lean_ctor_get(v___x_659_, 4);
v_cache_665_ = lean_ctor_get(v___x_659_, 5);
v_recordedDeps_666_ = lean_ctor_get(v___x_659_, 6);
v_messages_667_ = lean_ctor_get(v___x_659_, 7);
v_infoState_668_ = lean_ctor_get(v___x_659_, 8);
v_snapshotTasks_669_ = lean_ctor_get(v___x_659_, 9);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_680_ == 0)
{
v___x_671_ = v___x_659_;
v_isShared_672_ = v_isSharedCheck_680_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_snapshotTasks_669_);
lean_inc(v_infoState_668_);
lean_inc(v_messages_667_);
lean_inc(v_recordedDeps_666_);
lean_inc(v_cache_665_);
lean_inc(v_traceState_664_);
lean_inc(v_auxDeclNGen_663_);
lean_inc(v_ngen_662_);
lean_inc(v_nextMacroScope_661_);
lean_inc(v_env_660_);
lean_dec(v___x_659_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_680_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_673_ = lean_box(0);
v___x_674_ = l_Lean_MessageLog_add(v___x_658_, v_messages_667_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 7, v___x_674_);
v___x_676_ = v___x_671_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_env_660_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v_nextMacroScope_661_);
lean_ctor_set(v_reuseFailAlloc_679_, 2, v_ngen_662_);
lean_ctor_set(v_reuseFailAlloc_679_, 3, v_auxDeclNGen_663_);
lean_ctor_set(v_reuseFailAlloc_679_, 4, v_traceState_664_);
lean_ctor_set(v_reuseFailAlloc_679_, 5, v_cache_665_);
lean_ctor_set(v_reuseFailAlloc_679_, 6, v_recordedDeps_666_);
lean_ctor_set(v_reuseFailAlloc_679_, 7, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_679_, 8, v_infoState_668_);
lean_ctor_set(v_reuseFailAlloc_679_, 9, v_snapshotTasks_669_);
v___x_676_ = v_reuseFailAlloc_679_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_st_ref_put(v___y_653_, v___x_676_);
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_673_);
return v___x_678_;
}
}
}
v___jp_681_:
{
lean_object* v_fileName_690_; lean_object* v_fileMap_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_707_; 
v_fileName_690_ = lean_ctor_get(v___y_684_, 0);
v_fileMap_691_ = lean_ctor_get(v___y_684_, 1);
v___x_692_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_636_);
v___x_693_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v___x_692_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
v_a_694_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_707_ == 0)
{
v___x_696_ = v___x_693_;
v_isShared_697_ = v_isSharedCheck_707_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_693_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_707_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
lean_inc_ref_n(v_fileMap_691_, 2);
v___x_698_ = l_Lean_FileMap_toPosition(v_fileMap_691_, v___y_687_);
lean_dec(v___y_687_);
v___x_699_ = l_Lean_FileMap_toPosition(v_fileMap_691_, v___y_689_);
lean_dec(v___y_689_);
v___x_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
v___x_701_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0));
if (v___y_686_ == 0)
{
lean_del_object(v___x_696_);
lean_dec_ref(v___y_683_);
v___y_645_ = v___x_700_;
v___y_646_ = v___y_685_;
v___y_647_ = v___x_698_;
v___y_648_ = v_a_694_;
v___y_649_ = v_fileName_690_;
v___y_650_ = v___x_701_;
v___y_651_ = v___y_688_;
v_toCold_652_ = v___y_682_;
v___y_653_ = v___y_642_;
goto v___jp_644_;
}
else
{
uint8_t v___x_702_; 
lean_inc(v_a_694_);
v___x_702_ = l_Lean_MessageData_hasTag(v___y_683_, v_a_694_);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; lean_object* v___x_705_; 
lean_dec_ref_known(v___x_700_, 1);
lean_dec_ref(v___x_698_);
lean_dec(v_a_694_);
v___x_703_ = lean_box(0);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_703_);
v___x_705_ = v___x_696_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
else
{
lean_del_object(v___x_696_);
v___y_645_ = v___x_700_;
v___y_646_ = v___y_685_;
v___y_647_ = v___x_698_;
v___y_648_ = v_a_694_;
v___y_649_ = v_fileName_690_;
v___y_650_ = v___x_701_;
v___y_651_ = v___y_688_;
v_toCold_652_ = v___y_682_;
v___y_653_ = v___y_642_;
goto v___jp_644_;
}
}
}
}
v___jp_708_:
{
lean_object* v___x_716_; 
v___x_716_ = l_Lean_Syntax_getTailPos_x3f(v___y_713_, v___y_714_);
lean_dec(v___y_713_);
if (lean_obj_tag(v___x_716_) == 0)
{
lean_inc(v___y_715_);
v___y_682_ = v___y_709_;
v___y_683_ = v___y_710_;
v___y_684_ = v___y_709_;
v___y_685_ = v___y_712_;
v___y_686_ = v___y_711_;
v___y_687_ = v___y_715_;
v___y_688_ = v___y_714_;
v___y_689_ = v___y_715_;
goto v___jp_681_;
}
else
{
lean_object* v_val_717_; 
v_val_717_ = lean_ctor_get(v___x_716_, 0);
lean_inc(v_val_717_);
lean_dec_ref_known(v___x_716_, 1);
v___y_682_ = v___y_709_;
v___y_683_ = v___y_710_;
v___y_684_ = v___y_709_;
v___y_685_ = v___y_712_;
v___y_686_ = v___y_711_;
v___y_687_ = v___y_715_;
v___y_688_ = v___y_714_;
v___y_689_ = v_val_717_;
goto v___jp_681_;
}
}
v___jp_718_:
{
lean_object* v_toCold_721_; lean_object* v_ref_722_; uint8_t v_suppressElabErrors_723_; lean_object* v___x_724_; lean_object* v___f_725_; lean_object* v_ref_726_; lean_object* v___x_727_; 
v_toCold_721_ = lean_ctor_get(v___y_641_, 0);
v_ref_722_ = lean_ctor_get(v___y_641_, 2);
v_suppressElabErrors_723_ = lean_ctor_get_uint8(v___y_641_, sizeof(void*)*3 + 2);
v___x_724_ = lean_box(v_suppressElabErrors_723_);
v___f_725_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_725_, 0, v___x_724_);
v_ref_726_ = l_Lean_replaceRef(v_ref_635_, v_ref_722_);
v___x_727_ = l_Lean_Syntax_getPos_x3f(v_ref_726_, v___y_719_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v___x_728_; 
v___x_728_ = lean_unsigned_to_nat(0u);
v___y_709_ = v_toCold_721_;
v___y_710_ = v___f_725_;
v___y_711_ = v_suppressElabErrors_723_;
v___y_712_ = v___y_720_;
v___y_713_ = v_ref_726_;
v___y_714_ = v___y_719_;
v___y_715_ = v___x_728_;
goto v___jp_708_;
}
else
{
lean_object* v_val_729_; 
v_val_729_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_val_729_);
lean_dec_ref_known(v___x_727_, 1);
v___y_709_ = v_toCold_721_;
v___y_710_ = v___f_725_;
v___y_711_ = v_suppressElabErrors_723_;
v___y_712_ = v___y_720_;
v___y_713_ = v_ref_726_;
v___y_714_ = v___y_719_;
v___y_715_ = v_val_729_;
goto v___jp_708_;
}
}
v___jp_731_:
{
uint8_t v___x_733_; uint8_t v___x_734_; 
v___x_733_ = 1;
v___x_734_ = l_Lean_instBEqMessageSeverity_beq(v_severity_637_, v___x_733_);
if (v___x_734_ == 0)
{
v___y_719_ = v___y_732_;
v___y_720_ = v_severity_637_;
goto v___jp_718_;
}
else
{
lean_object* v___x_735_; lean_object* v___x_736_; uint8_t v___x_737_; 
v___x_735_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_641_);
v___x_736_ = l_Lean_warningAsError;
v___x_737_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v___x_735_, v___x_736_);
lean_dec_ref(v___x_735_);
if (v___x_737_ == 0)
{
v___y_719_ = v___y_732_;
v___y_720_ = v_severity_637_;
goto v___jp_718_;
}
else
{
v___y_719_ = v___y_732_;
v___y_720_ = v___x_730_;
goto v___jp_718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_742_, lean_object* v_msgData_743_, lean_object* v_severity_744_, lean_object* v_isSilent_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
uint8_t v_severity_boxed_751_; uint8_t v_isSilent_boxed_752_; lean_object* v_res_753_; 
v_severity_boxed_751_ = lean_unbox(v_severity_744_);
v_isSilent_boxed_752_ = lean_unbox(v_isSilent_745_);
v_res_753_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(v_ref_742_, v_msgData_743_, v_severity_boxed_751_, v_isSilent_boxed_752_, v___y_746_, v___y_747_, v___y_748_, v___y_749_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v_ref_742_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(lean_object* v_msgData_754_, uint8_t v_severity_755_, uint8_t v_isSilent_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_ref_762_; lean_object* v___x_763_; 
v_ref_762_ = lean_ctor_get(v___y_759_, 2);
v___x_763_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1(v_ref_762_, v_msgData_754_, v_severity_755_, v_isSilent_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0___boxed(lean_object* v_msgData_764_, lean_object* v_severity_765_, lean_object* v_isSilent_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
uint8_t v_severity_boxed_772_; uint8_t v_isSilent_boxed_773_; lean_object* v_res_774_; 
v_severity_boxed_772_ = lean_unbox(v_severity_765_);
v_isSilent_boxed_773_ = lean_unbox(v_isSilent_766_);
v_res_774_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(v_msgData_764_, v_severity_boxed_772_, v_isSilent_boxed_773_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(lean_object* v_msgData_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
uint8_t v___x_781_; uint8_t v___x_782_; lean_object* v___x_783_; 
v___x_781_ = 1;
v___x_782_ = 0;
v___x_783_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0(v_msgData_775_, v___x_781_, v___x_782_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0___boxed(lean_object* v_msgData_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(v_msgData_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
return v_res_790_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1(void){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_792_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__0));
v___x_793_ = l_Lean_stringToMessageData(v___x_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
if (lean_obj_tag(v_a_794_) == 0)
{
lean_object* v___x_796_; 
v___x_796_ = l_List_reverse___redArg(v_a_795_);
return v___x_796_;
}
else
{
lean_object* v_head_797_; lean_object* v_tail_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_811_; 
v_head_797_ = lean_ctor_get(v_a_794_, 0);
v_tail_798_ = lean_ctor_get(v_a_794_, 1);
v_isSharedCheck_811_ = !lean_is_exclusive(v_a_794_);
if (v_isSharedCheck_811_ == 0)
{
v___x_800_ = v_a_794_;
v_isShared_801_ = v_isSharedCheck_811_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_tail_798_);
lean_inc(v_head_797_);
lean_dec(v_a_794_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_811_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
uint8_t v_minIndexable_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_808_; 
v_minIndexable_802_ = 0;
v___x_803_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_804_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v_head_797_, v_minIndexable_802_);
lean_dec(v_head_797_);
v___x_805_ = l_Lean_stringToMessageData(v___x_804_);
v___x_806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_803_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 1, v_a_795_);
lean_ctor_set(v___x_800_, 0, v___x_806_);
v___x_808_ = v___x_800_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_806_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_a_795_);
v___x_808_ = v_reuseFailAlloc_810_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
v_a_794_ = v_tail_798_;
v_a_795_ = v___x_808_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(lean_object* v_a_812_, lean_object* v_a_813_){
_start:
{
if (lean_obj_tag(v_a_812_) == 0)
{
lean_object* v___x_814_; 
v___x_814_ = l_List_reverse___redArg(v_a_813_);
return v___x_814_;
}
else
{
lean_object* v_head_815_; lean_object* v_tail_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_824_; 
v_head_815_ = lean_ctor_get(v_a_812_, 0);
v_tail_816_ = lean_ctor_get(v_a_812_, 1);
v_isSharedCheck_824_ = !lean_is_exclusive(v_a_812_);
if (v_isSharedCheck_824_ == 0)
{
v___x_818_ = v_a_812_;
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_tail_816_);
lean_inc(v_head_815_);
lean_dec(v_a_812_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_824_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 1, v_a_813_);
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_head_815_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v_a_813_);
v___x_821_ = v_reuseFailAlloc_823_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
v_a_812_ = v_tail_816_;
v_a_813_ = v___x_821_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__0));
v___x_827_ = l_Lean_stringToMessageData(v___x_826_);
return v___x_827_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__2));
v___x_830_ = l_Lean_stringToMessageData(v___x_829_);
return v___x_830_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__4));
v___x_833_ = l_Lean_stringToMessageData(v___x_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(lean_object* v_s_834_, lean_object* v_declName_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
lean_object* v_kinds_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v_ks_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___x_866_; lean_object* v___x_867_; 
lean_inc(v_declName_835_);
v___x_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_866_, 0, v_declName_835_);
v___x_867_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_ExtensionStateArray_getKindsFor(v_s_834_, v___x_866_);
lean_dec_ref_known(v___x_866_, 1);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec(v_declName_835_);
v___x_868_ = lean_box(0);
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
return v___x_869_;
}
else
{
lean_object* v_head_870_; lean_object* v_tail_871_; uint8_t v_minIndexable_872_; uint8_t v_gen_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; 
v_head_870_ = lean_ctor_get(v___x_867_, 0);
v_tail_871_ = lean_ctor_get(v___x_867_, 1);
v_minIndexable_872_ = 0;
if (lean_obj_tag(v_tail_871_) == 0)
{
lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_893_; 
lean_inc(v_head_870_);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; lean_object* v_unused_895_; 
v_unused_894_ = lean_ctor_get(v___x_867_, 1);
lean_dec(v_unused_894_);
v_unused_895_ = lean_ctor_get(v___x_867_, 0);
lean_dec(v_unused_895_);
v___x_885_ = v___x_867_;
v_isShared_886_ = v_isSharedCheck_893_;
goto v_resetjp_884_;
}
else
{
lean_dec(v___x_867_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_893_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_887_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_888_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v_head_870_, v_minIndexable_872_);
lean_dec(v_head_870_);
v___x_889_ = l_Lean_stringToMessageData(v___x_888_);
if (v_isShared_886_ == 0)
{
lean_ctor_set_tag(v___x_885_, 7);
lean_ctor_set(v___x_885_, 1, v___x_889_);
lean_ctor_set(v___x_885_, 0, v___x_887_);
v___x_891_ = v___x_885_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_887_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
v_kinds_842_ = v___x_891_;
v___y_843_ = v_a_836_;
v___y_844_ = v_a_837_;
v___y_845_ = v_a_838_;
v___y_846_ = v_a_839_;
goto v___jp_841_;
}
}
}
else
{
lean_object* v_head_896_; 
v_head_896_ = lean_ctor_get(v_tail_871_, 0);
switch(lean_obj_tag(v_head_896_))
{
case 1:
{
lean_object* v_tail_897_; 
v_tail_897_ = lean_ctor_get(v_tail_871_, 1);
if (lean_obj_tag(v_tail_897_) == 0)
{
if (lean_obj_tag(v_head_870_) == 0)
{
uint8_t v_gen_898_; 
lean_inc_ref(v_head_870_);
lean_dec_ref_known(v___x_867_, 2);
v_gen_898_ = lean_ctor_get_uint8(v_head_870_, 0);
lean_dec_ref_known(v_head_870_, 0);
v_gen_874_ = v_gen_898_;
v___y_875_ = v_a_836_;
v___y_876_ = v_a_837_;
v___y_877_ = v_a_838_;
v___y_878_ = v_a_839_;
goto v___jp_873_;
}
else
{
v_ks_857_ = v___x_867_;
v___y_858_ = v_a_836_;
v___y_859_ = v_a_837_;
v___y_860_ = v_a_838_;
v___y_861_ = v_a_839_;
goto v___jp_856_;
}
}
else
{
v_ks_857_ = v___x_867_;
v___y_858_ = v_a_836_;
v___y_859_ = v_a_837_;
v___y_860_ = v_a_838_;
v___y_861_ = v_a_839_;
goto v___jp_856_;
}
}
case 0:
{
lean_object* v_tail_899_; 
v_tail_899_ = lean_ctor_get(v_tail_871_, 1);
if (lean_obj_tag(v_tail_899_) == 0)
{
if (lean_obj_tag(v_head_870_) == 1)
{
uint8_t v_gen_900_; 
lean_inc_ref(v_head_870_);
lean_dec_ref_known(v___x_867_, 2);
v_gen_900_ = lean_ctor_get_uint8(v_head_870_, 0);
lean_dec_ref_known(v_head_870_, 0);
v_gen_874_ = v_gen_900_;
v___y_875_ = v_a_836_;
v___y_876_ = v_a_837_;
v___y_877_ = v_a_838_;
v___y_878_ = v_a_839_;
goto v___jp_873_;
}
else
{
v_ks_857_ = v___x_867_;
v___y_858_ = v_a_836_;
v___y_859_ = v_a_837_;
v___y_860_ = v_a_838_;
v___y_861_ = v_a_839_;
goto v___jp_856_;
}
}
else
{
v_ks_857_ = v___x_867_;
v___y_858_ = v_a_836_;
v___y_859_ = v_a_837_;
v___y_860_ = v_a_838_;
v___y_861_ = v_a_839_;
goto v___jp_856_;
}
}
default: 
{
v_ks_857_ = v___x_867_;
v___y_858_ = v_a_836_;
v___y_859_ = v_a_837_;
v___y_860_ = v_a_838_;
v___y_861_ = v_a_839_;
goto v___jp_856_;
}
}
}
v___jp_873_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_879_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1, &l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1_once, _init_l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1___closed__1);
v___x_880_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_880_, 0, v_gen_874_);
v___x_881_ = l_Lean_Meta_Grind_EMatchTheoremKind_toAttribute(v___x_880_, v_minIndexable_872_);
lean_dec_ref_known(v___x_880_, 0);
v___x_882_ = l_Lean_stringToMessageData(v___x_881_);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_879_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v_kinds_842_ = v___x_883_;
v___y_843_ = v___y_875_;
v___y_844_ = v___y_876_;
v___y_845_ = v___y_877_;
v___y_846_ = v___y_878_;
goto v___jp_841_;
}
}
v___jp_841_:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_847_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__1);
v___x_848_ = l_Lean_MessageData_ofName(v_declName_835_);
v___x_849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_847_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
v___x_850_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__3);
v___x_851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_849_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
v___x_852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
lean_ctor_set(v___x_852_, 1, v_kinds_842_);
v___x_853_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_852_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
v___x_855_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0(v___x_854_, v___y_843_, v___y_844_, v___y_845_, v___y_846_);
return v___x_855_;
}
v___jp_856_:
{
lean_object* v___x_862_; lean_object* v_ks_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_862_ = lean_box(0);
v_ks_863_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__1(v_ks_857_, v___x_862_);
v___x_864_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__2(v_ks_863_, v___x_862_);
v___x_865_ = l_Lean_MessageData_ofList(v___x_864_);
v_kinds_842_ = v___x_865_;
v___y_843_ = v___y_858_;
v___y_844_ = v___y_859_;
v___y_845_ = v___y_860_;
v___y_846_ = v___y_861_;
goto v___jp_841_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___boxed(lean_object* v_s_901_, lean_object* v_declName_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_s_901_, v_declName_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_a_904_);
lean_dec_ref(v_a_903_);
lean_dec_ref(v_s_901_);
return v_res_908_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_909_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0);
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_912_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_913_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1);
v___x_914_ = lean_unsigned_to_nat(0u);
v___x_915_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
lean_ctor_set(v___x_915_, 2, v___x_914_);
lean_ctor_set(v___x_915_, 3, v___x_914_);
lean_ctor_set(v___x_915_, 4, v___x_913_);
lean_ctor_set(v___x_915_, 5, v___x_913_);
lean_ctor_set(v___x_915_, 6, v___x_913_);
lean_ctor_set(v___x_915_, 7, v___x_913_);
lean_ctor_set(v___x_915_, 8, v___x_913_);
lean_ctor_set(v___x_915_, 9, v___x_913_);
lean_ctor_set(v___x_915_, 10, v___x_913_);
lean_ctor_set(v___x_915_, 11, v___x_912_);
return v___x_915_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_916_ = lean_unsigned_to_nat(32u);
v___x_917_ = lean_mk_empty_array_with_capacity(v___x_916_);
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
return v___x_918_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_919_ = ((size_t)5ULL);
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = lean_unsigned_to_nat(32u);
v___x_922_ = lean_mk_empty_array_with_capacity(v___x_921_);
v___x_923_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__3);
v___x_924_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_924_, 0, v___x_923_);
lean_ctor_set(v___x_924_, 1, v___x_922_);
lean_ctor_set(v___x_924_, 2, v___x_920_);
lean_ctor_set(v___x_924_, 3, v___x_920_);
lean_ctor_set_usize(v___x_924_, 4, v___x_919_);
return v___x_924_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_925_ = lean_box(1);
v___x_926_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__4);
v___x_927_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__1);
v___x_928_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
lean_ctor_set(v___x_928_, 1, v___x_926_);
lean_ctor_set(v___x_928_, 2, v___x_925_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(lean_object* v_msgData_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v___x_933_; lean_object* v_toCold_934_; lean_object* v_env_935_; lean_object* v_options_936_; uint8_t v___x_937_; lean_object* v_env_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_933_ = lean_st_ref_get(v___y_931_);
v_toCold_934_ = lean_ctor_get(v___y_930_, 0);
v_env_935_ = lean_ctor_get(v___x_933_, 0);
lean_inc_ref(v_env_935_);
lean_dec(v___x_933_);
v_options_936_ = lean_ctor_get(v_toCold_934_, 2);
v___x_937_ = 0;
v_env_938_ = l_Lean_Environment_setRecordingDeps(v_env_935_, v___x_937_);
v___x_939_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2);
v___x_940_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_936_);
v___x_941_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_941_, 0, v_env_938_);
lean_ctor_set(v___x_941_, 1, v___x_939_);
lean_ctor_set(v___x_941_, 2, v___x_940_);
lean_ctor_set(v___x_941_, 3, v_options_936_);
v___x_942_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
lean_ctor_set(v___x_942_, 1, v_msgData_929_);
v___x_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___boxed(lean_object* v_msgData_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(v_msgData_944_, v___y_945_, v___y_946_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(lean_object* v_msg_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v_ref_953_; lean_object* v___x_954_; lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_963_; 
v_ref_953_ = lean_ctor_get(v___y_950_, 2);
v___x_954_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0(v_msg_949_, v___y_950_, v___y_951_);
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_963_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_963_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_963_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; lean_object* v___x_961_; 
lean_inc(v_ref_953_);
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v_ref_953_);
lean_ctor_set(v___x_959_, 1, v_a_955_);
if (v_isShared_958_ == 0)
{
lean_ctor_set_tag(v___x_957_, 1);
lean_ctor_set(v___x_957_, 0, v___x_959_);
v___x_961_ = v___x_957_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg___boxed(lean_object* v_msg_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v_msg_964_, v___y_965_, v___y_966_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
return v_res_968_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__6));
v___x_981_ = l_Lean_stringToMessageData(v___x_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(lean_object* v_s_982_, lean_object* v_a_983_, lean_object* v_a_984_){
_start:
{
lean_object* v___x_986_; lean_object* v_env_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_986_ = lean_st_ref_get(v_a_984_);
v_env_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc_ref(v_env_987_);
lean_dec(v___x_986_);
v___x_988_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
v___x_989_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__5));
lean_inc_ref(v_s_982_);
v___x_990_ = l_Lean_Parser_runParserCategory(v_env_987_, v___x_988_, v_s_982_, v___x_989_);
if (lean_obj_tag(v___x_990_) == 1)
{
lean_object* v_a_991_; lean_object* v___x_992_; 
lean_dec_ref(v_s_982_);
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_990_, 1);
v___x_992_ = l_Lean_Meta_Grind_getAttrKindCore(v_a_991_, v_a_983_, v_a_984_);
return v___x_992_;
}
else
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
lean_dec_ref(v___x_990_);
v___x_993_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__7);
v___x_994_ = l_Lean_stringToMessageData(v_s_982_);
v___x_995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_993_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v___x_995_, v_a_983_, v_a_984_);
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___boxed(lean_object* v_s_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier(v_s_997_, v_a_998_, v_a_999_);
lean_dec(v_a_999_);
lean_dec_ref(v_a_998_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(lean_object* v_00_u03b1_1002_, lean_object* v_msg_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v___x_1007_; 
v___x_1007_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v_msg_1003_, v___y_1004_, v___y_1005_);
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___boxed(lean_object* v_00_u03b1_1008_, lean_object* v_msg_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0(v_00_u03b1_1008_, v_msg_1009_, v___y_1010_, v___y_1011_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(lean_object* v_msg_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_ref_1020_; lean_object* v___x_1021_; lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1030_; 
v_ref_1020_ = lean_ctor_get(v___y_1017_, 2);
v___x_1021_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msg_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1030_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1030_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1026_; lean_object* v___x_1028_; 
lean_inc(v_ref_1020_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v_ref_1020_);
lean_ctor_set(v___x_1026_, 1, v_a_1022_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set_tag(v___x_1024_, 1);
lean_ctor_set(v___x_1024_, 0, v___x_1026_);
v___x_1028_ = v___x_1024_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg___boxed(lean_object* v_msg_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
return v_res_1037_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__0));
v___x_1040_ = l_Lean_stringToMessageData(v___x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(uint8_t v_minIndexable_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
if (v_minIndexable_1041_ == 0)
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = lean_box(0);
v___x_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
return v___x_1048_;
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___closed__1);
v___x_1050_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1049_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable___boxed(lean_object* v_minIndexable_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_){
_start:
{
uint8_t v_minIndexable_boxed_1057_; lean_object* v_res_1058_; 
v_minIndexable_boxed_1057_ = lean_unbox(v_minIndexable_1051_);
v_res_1058_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_boxed_1057_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
lean_dec(v_a_1053_);
lean_dec_ref(v_a_1052_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(lean_object* v_00_u03b1_1059_, lean_object* v_msg_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___boxed(lean_object* v_00_u03b1_1067_, lean_object* v_msg_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0(v_00_u03b1_1067_, v_msg_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
return v_res_1074_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__0));
v___x_1077_ = l_Lean_stringToMessageData(v___x_1076_);
return v___x_1077_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__2));
v___x_1080_ = l_Lean_stringToMessageData(v___x_1079_);
return v___x_1080_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__4));
v___x_1083_ = l_Lean_stringToMessageData(v___x_1082_);
return v___x_1083_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1085_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__6));
v___x_1086_ = l_Lean_stringToMessageData(v___x_1085_);
return v___x_1086_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__8));
v___x_1089_ = l_Lean_stringToMessageData(v___x_1088_);
return v___x_1089_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__10));
v___x_1092_ = l_Lean_stringToMessageData(v___x_1091_);
return v___x_1092_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13(void){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__12));
v___x_1095_ = l_Lean_stringToMessageData(v___x_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_msg_1096_, lean_object* v_declHint_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v_env_1102_; uint8_t v___x_1103_; 
v___x_1100_ = lean_box(0);
v___x_1101_ = lean_st_ref_get(v___y_1098_);
v_env_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc_ref(v_env_1102_);
lean_dec(v___x_1101_);
v___x_1103_ = l_Lean_Name_isAnonymous(v_declHint_1097_);
if (v___x_1103_ == 0)
{
uint8_t v_isExporting_1104_; 
v_isExporting_1104_ = lean_ctor_get_uint8(v_env_1102_, sizeof(void*)*13);
if (v_isExporting_1104_ == 0)
{
lean_object* v___x_1105_; 
lean_dec_ref(v_env_1102_);
lean_dec(v_declHint_1097_);
v___x_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1105_, 0, v_msg_1096_);
return v___x_1105_;
}
else
{
lean_object* v___x_1106_; uint8_t v___x_1107_; 
lean_inc_ref(v_env_1102_);
v___x_1106_ = l_Lean_Environment_setExporting(v_env_1102_, v___x_1103_);
lean_inc(v_declHint_1097_);
lean_inc_ref(v___x_1106_);
v___x_1107_ = l_Lean_Environment_contains(v___x_1106_, v_declHint_1097_, v_isExporting_1104_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; 
lean_dec_ref(v___x_1106_);
lean_dec_ref(v_env_1102_);
lean_dec(v_declHint_1097_);
v___x_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1108_, 0, v_msg_1096_);
return v___x_1108_;
}
else
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v_c_1114_; lean_object* v___x_1115_; 
v___x_1109_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__2);
v___x_1110_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__5);
v___x_1111_ = l_Lean_Options_empty;
v___x_1112_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1106_);
lean_ctor_set(v___x_1112_, 1, v___x_1109_);
lean_ctor_set(v___x_1112_, 2, v___x_1110_);
lean_ctor_set(v___x_1112_, 3, v___x_1111_);
lean_inc(v_declHint_1097_);
v___x_1113_ = l_Lean_MessageData_ofConstName(v_declHint_1097_, v___x_1103_);
v_c_1114_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1114_, 0, v___x_1112_);
lean_ctor_set(v_c_1114_, 1, v___x_1113_);
v___x_1115_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1102_, v_declHint_1097_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
lean_dec_ref(v_env_1102_);
lean_dec(v_declHint_1097_);
v___x_1116_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1116_);
lean_ctor_set(v___x_1117_, 1, v_c_1114_);
v___x_1118_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__3);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = l_Lean_MessageData_note(v___x_1119_);
v___x_1121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1121_, 0, v_msg_1096_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
return v___x_1122_;
}
else
{
lean_object* v_val_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1157_; 
v_val_1123_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1125_ = v___x_1115_;
v_isShared_1126_ = v_isSharedCheck_1157_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_val_1123_);
lean_dec(v___x_1115_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1157_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v_moduleNames_1128_; lean_object* v_mod_1129_; uint8_t v___x_1130_; 
v___x_1127_ = l_Lean_Environment_header(v_env_1102_);
lean_dec_ref(v_env_1102_);
v_moduleNames_1128_ = lean_ctor_get(v___x_1127_, 4);
lean_inc_ref(v_moduleNames_1128_);
lean_dec_ref(v___x_1127_);
v_mod_1129_ = lean_array_get(v___x_1100_, v_moduleNames_1128_, v_val_1123_);
lean_dec(v_val_1123_);
lean_dec_ref(v_moduleNames_1128_);
v___x_1130_ = l_Lean_isPrivateName(v_declHint_1097_);
lean_dec(v_declHint_1097_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1142_; 
v___x_1131_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__5);
v___x_1132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v_c_1114_);
v___x_1133_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__7);
v___x_1134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1132_);
lean_ctor_set(v___x_1134_, 1, v___x_1133_);
v___x_1135_ = l_Lean_MessageData_ofName(v_mod_1129_);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1134_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__9);
v___x_1138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1136_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = l_Lean_MessageData_note(v___x_1138_);
v___x_1140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1140_, 0, v_msg_1096_);
lean_ctor_set(v___x_1140_, 1, v___x_1139_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set_tag(v___x_1125_, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1140_);
v___x_1142_ = v___x_1125_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1155_; 
v___x_1144_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__1);
v___x_1145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
lean_ctor_set(v___x_1145_, 1, v_c_1114_);
v___x_1146_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__11);
v___x_1147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = l_Lean_MessageData_ofName(v_mod_1129_);
v___x_1149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1147_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___closed__13);
v___x_1151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = l_Lean_MessageData_note(v___x_1151_);
v___x_1153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1153_, 0, v_msg_1096_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set_tag(v___x_1125_, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1153_);
v___x_1155_ = v___x_1125_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1153_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1158_; 
lean_dec_ref(v_env_1102_);
lean_dec(v_declHint_1097_);
v___x_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1158_, 0, v_msg_1096_);
return v___x_1158_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg___boxed(lean_object* v_msg_1159_, lean_object* v_declHint_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1159_, v_declHint_1160_, v___y_1161_);
lean_dec(v___y_1161_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_msg_1164_, lean_object* v_declHint_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v___x_1171_; lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1181_; 
v___x_1171_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1164_, v_declHint_1165_, v___y_1169_);
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1174_ = v___x_1171_;
v_isShared_1175_ = v_isSharedCheck_1181_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1171_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1181_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1179_; 
v___x_1176_ = l_Lean_unknownIdentifierMessageTag;
v___x_1177_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v_a_1172_);
if (v_isShared_1175_ == 0)
{
lean_ctor_set(v___x_1174_, 0, v___x_1177_);
v___x_1179_ = v___x_1174_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5___boxed(lean_object* v_msg_1182_, lean_object* v_declHint_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_1182_, v_declHint_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(lean_object* v_ref_1190_, lean_object* v_msg_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_toCold_1197_; lean_object* v_currRecDepth_1198_; lean_object* v_ref_1199_; uint16_t v_optionFlags_1200_; uint8_t v_suppressElabErrors_1201_; uint8_t v_isRecordingDeps_1202_; lean_object* v_ref_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v_toCold_1197_ = lean_ctor_get(v___y_1194_, 0);
v_currRecDepth_1198_ = lean_ctor_get(v___y_1194_, 1);
v_ref_1199_ = lean_ctor_get(v___y_1194_, 2);
v_optionFlags_1200_ = lean_ctor_get_uint16(v___y_1194_, sizeof(void*)*3);
v_suppressElabErrors_1201_ = lean_ctor_get_uint8(v___y_1194_, sizeof(void*)*3 + 2);
v_isRecordingDeps_1202_ = lean_ctor_get_uint8(v___y_1194_, sizeof(void*)*3 + 3);
v_ref_1203_ = l_Lean_replaceRef(v_ref_1190_, v_ref_1199_);
lean_inc(v_currRecDepth_1198_);
lean_inc_ref(v_toCold_1197_);
v___x_1204_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_1204_, 0, v_toCold_1197_);
lean_ctor_set(v___x_1204_, 1, v_currRecDepth_1198_);
lean_ctor_set(v___x_1204_, 2, v_ref_1203_);
lean_ctor_set_uint16(v___x_1204_, sizeof(void*)*3, v_optionFlags_1200_);
lean_ctor_set_uint8(v___x_1204_, sizeof(void*)*3 + 2, v_suppressElabErrors_1201_);
lean_ctor_set_uint8(v___x_1204_, sizeof(void*)*3 + 3, v_isRecordingDeps_1202_);
v___x_1205_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v_msg_1191_, v___y_1192_, v___y_1193_, v___x_1204_, v___y_1195_);
lean_dec_ref_known(v___x_1204_, 3);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_ref_1206_, lean_object* v_msg_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1206_, v_msg_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v_ref_1206_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_ref_1214_, lean_object* v_msg_1215_, lean_object* v_declHint_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v___x_1222_; lean_object* v_a_1223_; lean_object* v___x_1224_; 
v___x_1222_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5(v_msg_1215_, v_declHint_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_a_1223_);
lean_dec_ref(v___x_1222_);
v___x_1224_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1214_, v_a_1223_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1225_, lean_object* v_msg_1226_, lean_object* v_declHint_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v_res_1233_; 
v_res_1233_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1225_, v_msg_1226_, v_declHint_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v_ref_1225_);
return v_res_1233_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1236_ = l_Lean_stringToMessageData(v___x_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1237_, lean_object* v_constName_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v___x_1244_; uint8_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1244_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1245_ = 0;
lean_inc(v_constName_1238_);
v___x_1246_ = l_Lean_MessageData_ofConstName(v_constName_1238_, v___x_1245_);
v___x_1247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1244_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
v___x_1248_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1247_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
v___x_1250_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1237_, v___x_1249_, v_constName_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1251_, lean_object* v_constName_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1251_, v_constName_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v_ref_1251_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(lean_object* v_constName_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v_ref_1265_; lean_object* v___x_1266_; 
v_ref_1265_ = lean_ctor_get(v___y_1262_, 2);
v___x_1266_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1265_, v_constName_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(lean_object* v_constName_1274_, uint8_t v_skipRealize_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v___x_1281_; lean_object* v_env_1282_; lean_object* v___x_1283_; 
v___x_1281_ = lean_st_ref_get(v___y_1279_);
v_env_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc_ref(v_env_1282_);
lean_dec(v___x_1281_);
lean_inc(v_constName_1274_);
v___x_1283_ = l_Lean_Environment_findAsync_x3f(v_env_1282_, v_constName_1274_, v_skipRealize_1275_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1274_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
return v___x_1284_;
}
else
{
lean_object* v_val_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
lean_dec(v_constName_1274_);
v_val_1285_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1283_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_val_1285_);
lean_dec(v___x_1283_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
lean_ctor_set_tag(v___x_1287_, 0);
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_val_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0___boxed(lean_object* v_constName_1293_, lean_object* v_skipRealize_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
uint8_t v_skipRealize_boxed_1300_; lean_object* v_res_1301_; 
v_skipRealize_boxed_1300_ = lean_unbox(v_skipRealize_1294_);
v_res_1301_ = l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(v_constName_1293_, v_skipRealize_boxed_1300_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(lean_object* v_declName_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v___x_1305_; lean_object* v_env_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1305_ = lean_st_ref_get(v___y_1303_);
v_env_1306_ = lean_ctor_get(v___x_1305_, 0);
lean_inc_ref(v_env_1306_);
lean_dec(v___x_1305_);
v___x_1307_ = l_Lean_getReducibilityStatusCore(v_env_1306_, v_declName_1302_);
v___x_1308_ = lean_box(v___x_1307_);
v___x_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg___boxed(lean_object* v_declName_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1310_, v___y_1311_);
lean_dec(v___y_1311_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(lean_object* v_declName_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v___x_1320_; lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1336_; 
v___x_1320_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1314_, v___y_1318_);
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1323_ = v___x_1320_;
v_isShared_1324_ = v_isSharedCheck_1336_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1320_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1336_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
uint8_t v___x_1325_; 
v___x_1325_ = lean_unbox(v_a_1321_);
lean_dec(v_a_1321_);
if (v___x_1325_ == 0)
{
uint8_t v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1329_; 
v___x_1326_ = 1;
v___x_1327_ = lean_box(v___x_1326_);
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 0, v___x_1327_);
v___x_1329_ = v___x_1323_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1327_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
else
{
uint8_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1331_ = 0;
v___x_1332_ = lean_box(v___x_1331_);
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 0, v___x_1332_);
v___x_1334_ = v___x_1323_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___x_1332_);
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
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1___boxed(lean_object* v_declName_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(v_declName_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
return v_res_1343_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__1(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__0));
v___x_1346_ = l_Lean_stringToMessageData(v___x_1345_);
return v___x_1346_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__2));
v___x_1349_ = l_Lean_stringToMessageData(v___x_1348_);
return v___x_1349_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__5(void){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__4));
v___x_1352_ = l_Lean_stringToMessageData(v___x_1351_);
return v___x_1352_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__7(void){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__6));
v___x_1355_ = l_Lean_stringToMessageData(v___x_1354_);
return v___x_1355_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__9(void){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = ((lean_object*)(l_Lean_Elab_Tactic_addEMatchTheorem___closed__8));
v___x_1358_ = l_Lean_stringToMessageData(v___x_1357_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem(lean_object* v_params_1359_, lean_object* v_id_1360_, lean_object* v_declName_1361_, lean_object* v_kind_1362_, uint8_t v_minIndexable_1363_, uint8_t v_suggest_1364_, uint8_t v_warn_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_){
_start:
{
lean_object* v___y_1372_; lean_object* v_thm_1392_; lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1396_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; uint8_t v___x_1427_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1506_; lean_object* v___y_1507_; lean_object* v___y_1508_; lean_object* v___y_1509_; lean_object* v___y_1522_; lean_object* v___y_1523_; lean_object* v___y_1524_; lean_object* v___y_1525_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1555_; lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___x_1624_; 
v___x_1427_ = 0;
lean_inc(v_declName_1361_);
v___x_1624_ = l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(v_declName_1361_, v___x_1427_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v_a_1625_; uint8_t v_kind_1626_; 
v_a_1625_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_a_1625_);
lean_dec_ref_known(v___x_1624_, 1);
v_kind_1626_ = lean_ctor_get_uint8(v_a_1625_, sizeof(void*)*3);
lean_dec(v_a_1625_);
switch(v_kind_1626_)
{
case 1:
{
v___y_1555_ = v_a_1366_;
v___y_1556_ = v_a_1367_;
v___y_1557_ = v_a_1368_;
v___y_1558_ = v_a_1369_;
goto v___jp_1554_;
}
case 2:
{
v___y_1555_ = v_a_1366_;
v___y_1556_ = v_a_1367_;
v___y_1557_ = v_a_1368_;
v___y_1558_ = v_a_1369_;
goto v___jp_1554_;
}
case 6:
{
v___y_1555_ = v_a_1366_;
v___y_1556_ = v_a_1367_;
v___y_1557_ = v_a_1368_;
v___y_1558_ = v_a_1369_;
goto v___jp_1554_;
}
case 0:
{
lean_object* v___x_1627_; 
lean_dec(v_id_1360_);
lean_inc(v_declName_1361_);
v___x_1627_ = l_Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1(v_declName_1361_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; uint8_t v___x_1629_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v___x_1629_ = lean_unbox(v_a_1628_);
lean_dec(v_a_1628_);
if (v___x_1629_ == 0)
{
v___y_1485_ = v_a_1366_;
v___y_1486_ = v_a_1367_;
v___y_1487_ = v_a_1368_;
v___y_1488_ = v_a_1369_;
goto v___jp_1484_;
}
else
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec(v_kind_1362_);
lean_dec_ref(v_params_1359_);
v___x_1630_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1631_ = l_Lean_MessageData_ofConstName(v_declName_1361_, v___x_1427_);
v___x_1632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1630_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
v___x_1633_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__7, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__7_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__7);
v___x_1634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1632_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
v___x_1635_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1634_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
lean_dec(v_kind_1362_);
lean_dec(v_declName_1361_);
lean_dec_ref(v_params_1359_);
v_a_1644_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1627_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1627_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
default: 
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
lean_dec(v_kind_1362_);
lean_dec(v_id_1360_);
lean_dec_ref(v_params_1359_);
v___x_1652_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__3, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3);
v___x_1653_ = l_Lean_MessageData_ofConstName(v_declName_1361_, v___x_1427_);
v___x_1654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1652_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
v___x_1655_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__9, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__9_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__9);
v___x_1656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1656_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_);
return v___x_1657_;
}
}
}
else
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1665_; 
lean_dec(v_kind_1362_);
lean_dec(v_declName_1361_);
lean_dec(v_id_1360_);
lean_dec_ref(v_params_1359_);
v_a_1658_ = lean_ctor_get(v___x_1624_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1624_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1660_ = v___x_1624_;
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___x_1624_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1665_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v___x_1663_; 
if (v_isShared_1661_ == 0)
{
v___x_1663_ = v___x_1660_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_a_1658_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
v___jp_1371_:
{
lean_object* v_config_1373_; lean_object* v_extensions_1374_; lean_object* v_extra_1375_; lean_object* v_extraInj_1376_; lean_object* v_extraFacts_1377_; lean_object* v_symPrios_1378_; lean_object* v_norm_1379_; lean_object* v_normProcs_1380_; lean_object* v_anchorRefs_x3f_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1390_; 
v_config_1373_ = lean_ctor_get(v_params_1359_, 0);
v_extensions_1374_ = lean_ctor_get(v_params_1359_, 1);
v_extra_1375_ = lean_ctor_get(v_params_1359_, 2);
v_extraInj_1376_ = lean_ctor_get(v_params_1359_, 3);
v_extraFacts_1377_ = lean_ctor_get(v_params_1359_, 4);
v_symPrios_1378_ = lean_ctor_get(v_params_1359_, 5);
v_norm_1379_ = lean_ctor_get(v_params_1359_, 6);
v_normProcs_1380_ = lean_ctor_get(v_params_1359_, 7);
v_anchorRefs_x3f_1381_ = lean_ctor_get(v_params_1359_, 8);
v_isSharedCheck_1390_ = !lean_is_exclusive(v_params_1359_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1383_ = v_params_1359_;
v_isShared_1384_ = v_isSharedCheck_1390_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_anchorRefs_x3f_1381_);
lean_inc(v_normProcs_1380_);
lean_inc(v_norm_1379_);
lean_inc(v_symPrios_1378_);
lean_inc(v_extraFacts_1377_);
lean_inc(v_extraInj_1376_);
lean_inc(v_extra_1375_);
lean_inc(v_extensions_1374_);
lean_inc(v_config_1373_);
lean_dec(v_params_1359_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1390_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1385_ = l_Lean_PersistentArray_push___redArg(v_extra_1375_, v___y_1372_);
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 2, v___x_1385_);
v___x_1387_ = v___x_1383_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_config_1373_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v_extensions_1374_);
lean_ctor_set(v_reuseFailAlloc_1389_, 2, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1389_, 3, v_extraInj_1376_);
lean_ctor_set(v_reuseFailAlloc_1389_, 4, v_extraFacts_1377_);
lean_ctor_set(v_reuseFailAlloc_1389_, 5, v_symPrios_1378_);
lean_ctor_set(v_reuseFailAlloc_1389_, 6, v_norm_1379_);
lean_ctor_set(v_reuseFailAlloc_1389_, 7, v_normProcs_1380_);
lean_ctor_set(v_reuseFailAlloc_1389_, 8, v_anchorRefs_x3f_1381_);
v___x_1387_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v___x_1388_; 
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
return v___x_1388_;
}
}
}
v___jp_1391_:
{
if (v_warn_1365_ == 0)
{
lean_dec(v_declName_1361_);
v___y_1372_ = v_thm_1392_;
goto v___jp_1371_;
}
else
{
lean_object* v_extensions_1397_; lean_object* v_patterns_1398_; lean_object* v_origin_1399_; lean_object* v_cnstrs_1400_; uint8_t v___x_1401_; 
v_extensions_1397_ = lean_ctor_get(v_params_1359_, 1);
v_patterns_1398_ = lean_ctor_get(v_thm_1392_, 3);
v_origin_1399_ = lean_ctor_get(v_thm_1392_, 5);
v_cnstrs_1400_ = lean_ctor_get(v_thm_1392_, 7);
v___x_1401_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1397_, v_origin_1399_, v_patterns_1398_, v_cnstrs_1400_);
if (v___x_1401_ == 0)
{
lean_dec(v_declName_1361_);
v___y_1372_ = v_thm_1392_;
goto v___jp_1371_;
}
else
{
lean_object* v___x_1402_; 
v___x_1402_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_extensions_1397_, v_declName_1361_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_dec_ref_known(v___x_1402_, 1);
v___y_1372_ = v_thm_1392_;
goto v___jp_1371_;
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1410_; 
lean_dec_ref(v_thm_1392_);
lean_dec_ref(v_params_1359_);
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1405_ = v___x_1402_;
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1402_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
if (v_isShared_1406_ == 0)
{
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_a_1403_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
}
}
}
v___jp_1411_:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1423_ = l_Lean_PersistentArray_push___redArg(v___y_1420_, v___y_1415_);
v___x_1424_ = l_Lean_PersistentArray_push___redArg(v___x_1423_, v___y_1417_);
v___x_1425_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1425_, 0, v___y_1418_);
lean_ctor_set(v___x_1425_, 1, v___y_1419_);
lean_ctor_set(v___x_1425_, 2, v___x_1424_);
lean_ctor_set(v___x_1425_, 3, v___y_1413_);
lean_ctor_set(v___x_1425_, 4, v___y_1412_);
lean_ctor_set(v___x_1425_, 5, v___y_1414_);
lean_ctor_set(v___x_1425_, 6, v___y_1422_);
lean_ctor_set(v___x_1425_, 7, v___y_1421_);
lean_ctor_set(v___x_1425_, 8, v___y_1416_);
v___x_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
return v___x_1426_;
}
v___jp_1428_:
{
lean_object* v___x_1433_; 
v___x_1433_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1363_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v___x_1434_; 
lean_dec_ref_known(v___x_1433_, 1);
lean_inc(v_declName_1361_);
v___x_1434_ = l_Lean_Meta_Grind_mkEMatchEqTheoremsForDef_x3f(v_declName_1361_, v___x_1427_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1467_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1467_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1467_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
if (lean_obj_tag(v_a_1435_) == 1)
{
lean_object* v_val_1439_; lean_object* v_config_1440_; lean_object* v_extensions_1441_; lean_object* v_extra_1442_; lean_object* v_extraInj_1443_; lean_object* v_extraFacts_1444_; lean_object* v_symPrios_1445_; lean_object* v_norm_1446_; lean_object* v_normProcs_1447_; lean_object* v_anchorRefs_x3f_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1460_; 
lean_dec(v_declName_1361_);
v_val_1439_ = lean_ctor_get(v_a_1435_, 0);
lean_inc(v_val_1439_);
lean_dec_ref_known(v_a_1435_, 1);
v_config_1440_ = lean_ctor_get(v_params_1359_, 0);
v_extensions_1441_ = lean_ctor_get(v_params_1359_, 1);
v_extra_1442_ = lean_ctor_get(v_params_1359_, 2);
v_extraInj_1443_ = lean_ctor_get(v_params_1359_, 3);
v_extraFacts_1444_ = lean_ctor_get(v_params_1359_, 4);
v_symPrios_1445_ = lean_ctor_get(v_params_1359_, 5);
v_norm_1446_ = lean_ctor_get(v_params_1359_, 6);
v_normProcs_1447_ = lean_ctor_get(v_params_1359_, 7);
v_anchorRefs_x3f_1448_ = lean_ctor_get(v_params_1359_, 8);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_params_1359_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1450_ = v_params_1359_;
v_isShared_1451_ = v_isSharedCheck_1460_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_anchorRefs_x3f_1448_);
lean_inc(v_normProcs_1447_);
lean_inc(v_norm_1446_);
lean_inc(v_symPrios_1445_);
lean_inc(v_extraFacts_1444_);
lean_inc(v_extraInj_1443_);
lean_inc(v_extra_1442_);
lean_inc(v_extensions_1441_);
lean_inc(v_config_1440_);
lean_dec(v_params_1359_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1460_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1452_ = l_Lean_Array_toPArray_x27___redArg(v_val_1439_);
lean_dec(v_val_1439_);
v___x_1453_ = l_Lean_PersistentArray_append___redArg(v_extra_1442_, v___x_1452_);
lean_dec_ref(v___x_1452_);
if (v_isShared_1451_ == 0)
{
lean_ctor_set(v___x_1450_, 2, v___x_1453_);
v___x_1455_ = v___x_1450_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_config_1440_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_extensions_1441_);
lean_ctor_set(v_reuseFailAlloc_1459_, 2, v___x_1453_);
lean_ctor_set(v_reuseFailAlloc_1459_, 3, v_extraInj_1443_);
lean_ctor_set(v_reuseFailAlloc_1459_, 4, v_extraFacts_1444_);
lean_ctor_set(v_reuseFailAlloc_1459_, 5, v_symPrios_1445_);
lean_ctor_set(v_reuseFailAlloc_1459_, 6, v_norm_1446_);
lean_ctor_set(v_reuseFailAlloc_1459_, 7, v_normProcs_1447_);
lean_ctor_set(v_reuseFailAlloc_1459_, 8, v_anchorRefs_x3f_1448_);
v___x_1455_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
lean_object* v___x_1457_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1455_);
v___x_1457_ = v___x_1437_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v___x_1455_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
else
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
lean_del_object(v___x_1437_);
lean_dec(v_a_1435_);
lean_dec_ref(v_params_1359_);
v___x_1461_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__1, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__1_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__1);
v___x_1462_ = l_Lean_MessageData_ofConstName(v_declName_1361_, v___x_1427_);
v___x_1463_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1461_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_1465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1465_, 0, v___x_1463_);
lean_ctor_set(v___x_1465_, 1, v___x_1464_);
v___x_1466_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1465_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
return v___x_1466_;
}
}
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1475_; 
lean_dec(v_declName_1361_);
lean_dec_ref(v_params_1359_);
v_a_1468_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1470_ = v___x_1434_;
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1434_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1468_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
}
else
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
lean_dec(v_declName_1361_);
lean_dec_ref(v_params_1359_);
v_a_1476_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1478_ = v___x_1433_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1433_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
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
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1476_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
v___jp_1484_:
{
uint8_t v___x_1489_; 
v___x_1489_ = l_Lean_Meta_Grind_EMatchTheoremKind_isEqLhs(v_kind_1362_);
if (v___x_1489_ == 0)
{
uint8_t v___x_1490_; 
v___x_1490_ = l_Lean_Meta_Grind_EMatchTheoremKind_isDefault(v_kind_1362_);
lean_dec(v_kind_1362_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_dec_ref(v_params_1359_);
v___x_1491_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__3, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__3_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__3);
v___x_1492_ = l_Lean_MessageData_ofConstName(v_declName_1361_, v___x_1427_);
v___x_1493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1491_);
lean_ctor_set(v___x_1493_, 1, v___x_1492_);
v___x_1494_ = lean_obj_once(&l_Lean_Elab_Tactic_addEMatchTheorem___closed__5, &l_Lean_Elab_Tactic_addEMatchTheorem___closed__5_once, _init_l_Lean_Elab_Tactic_addEMatchTheorem___closed__5);
v___x_1495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1493_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
v___x_1496_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_1495_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1496_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1496_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
else
{
v___y_1429_ = v___y_1485_;
v___y_1430_ = v___y_1486_;
v___y_1431_ = v___y_1487_;
v___y_1432_ = v___y_1488_;
goto v___jp_1428_;
}
}
else
{
lean_dec(v_kind_1362_);
v___y_1429_ = v___y_1485_;
v___y_1430_ = v___y_1486_;
v___y_1431_ = v___y_1487_;
v___y_1432_ = v___y_1488_;
goto v___jp_1428_;
}
}
v___jp_1505_:
{
lean_object* v_symPrios_1510_; lean_object* v___x_1511_; 
v_symPrios_1510_ = lean_ctor_get(v_params_1359_, 5);
lean_inc_ref(v_symPrios_1510_);
lean_inc(v_declName_1361_);
v___x_1511_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1361_, v_kind_1362_, v_symPrios_1510_, v___x_1427_, v_minIndexable_1363_, v___y_1506_, v___y_1508_, v___y_1507_, v___y_1509_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_object* v_a_1512_; 
v_a_1512_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_a_1512_);
lean_dec_ref_known(v___x_1511_, 1);
v_thm_1392_ = v_a_1512_;
v___y_1393_ = v___y_1506_;
v___y_1394_ = v___y_1508_;
v___y_1395_ = v___y_1507_;
v___y_1396_ = v___y_1509_;
goto v___jp_1391_;
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec(v_declName_1361_);
lean_dec_ref(v_params_1359_);
v_a_1513_ = lean_ctor_get(v___x_1511_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1511_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1511_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
v___jp_1521_:
{
if (v_suggest_1364_ == 0)
{
lean_dec(v_id_1360_);
v___y_1506_ = v___y_1522_;
v___y_1507_ = v___y_1524_;
v___y_1508_ = v___y_1523_;
v___y_1509_ = v___y_1525_;
goto v___jp_1505_;
}
else
{
lean_object* v___x_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v___x_1526_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1524_);
v___x_1527_ = l_Lean_Meta_Grind_backward_grind_inferPattern;
v___x_1528_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v___x_1526_, v___x_1527_);
lean_dec_ref(v___x_1526_);
if (v___x_1528_ == 0)
{
lean_object* v_symPrios_1529_; lean_object* v___x_1530_; 
lean_dec(v_kind_1362_);
v_symPrios_1529_ = lean_ctor_get(v_params_1359_, 5);
lean_inc_ref(v_symPrios_1529_);
lean_inc(v_declName_1361_);
v___x_1530_ = l_Lean_Meta_Grind_mkEMatchTheoremAndSuggest(v_id_1360_, v_declName_1361_, v_symPrios_1529_, v_minIndexable_1363_, v_suggest_1364_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v_thm_1392_ = v_a_1531_;
v___y_1393_ = v___y_1522_;
v___y_1394_ = v___y_1523_;
v___y_1395_ = v___y_1524_;
v___y_1396_ = v___y_1525_;
goto v___jp_1391_;
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec(v_declName_1361_);
lean_dec_ref(v_params_1359_);
v_a_1532_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1530_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1530_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_dec(v_id_1360_);
v___y_1506_ = v___y_1522_;
v___y_1507_ = v___y_1524_;
v___y_1508_ = v___y_1523_;
v___y_1509_ = v___y_1525_;
goto v___jp_1505_;
}
}
}
v___jp_1540_:
{
lean_object* v___x_1545_; 
v___x_1545_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1363_, v___y_1542_, v___y_1544_, v___y_1541_, v___y_1543_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_dec_ref_known(v___x_1545_, 1);
v___y_1522_ = v___y_1542_;
v___y_1523_ = v___y_1544_;
v___y_1524_ = v___y_1541_;
v___y_1525_ = v___y_1543_;
goto v___jp_1521_;
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec(v_kind_1362_);
lean_dec(v_declName_1361_);
lean_dec(v_id_1360_);
lean_dec_ref(v_params_1359_);
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1545_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1545_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
v___jp_1554_:
{
if (lean_obj_tag(v_kind_1362_) == 2)
{
uint8_t v_gen_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1623_; 
lean_dec(v_id_1360_);
v_gen_1559_ = lean_ctor_get_uint8(v_kind_1362_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_kind_1362_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1561_ = v_kind_1362_;
v_isShared_1562_ = v_isSharedCheck_1623_;
goto v_resetjp_1560_;
}
else
{
lean_dec(v_kind_1362_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1623_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1563_; 
v___x_1563_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1363_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v_config_1564_; lean_object* v_extensions_1565_; lean_object* v_extra_1566_; lean_object* v_extraInj_1567_; lean_object* v_extraFacts_1568_; lean_object* v_symPrios_1569_; lean_object* v_norm_1570_; lean_object* v_normProcs_1571_; lean_object* v_anchorRefs_x3f_1572_; lean_object* v___x_1574_; 
lean_dec_ref_known(v___x_1563_, 1);
v_config_1564_ = lean_ctor_get(v_params_1359_, 0);
lean_inc_ref(v_config_1564_);
v_extensions_1565_ = lean_ctor_get(v_params_1359_, 1);
lean_inc_ref(v_extensions_1565_);
v_extra_1566_ = lean_ctor_get(v_params_1359_, 2);
lean_inc_ref(v_extra_1566_);
v_extraInj_1567_ = lean_ctor_get(v_params_1359_, 3);
lean_inc_ref(v_extraInj_1567_);
v_extraFacts_1568_ = lean_ctor_get(v_params_1359_, 4);
lean_inc_ref(v_extraFacts_1568_);
v_symPrios_1569_ = lean_ctor_get(v_params_1359_, 5);
lean_inc_ref(v_symPrios_1569_);
v_norm_1570_ = lean_ctor_get(v_params_1359_, 6);
lean_inc_ref(v_norm_1570_);
v_normProcs_1571_ = lean_ctor_get(v_params_1359_, 7);
lean_inc_ref(v_normProcs_1571_);
v_anchorRefs_x3f_1572_ = lean_ctor_get(v_params_1359_, 8);
lean_inc(v_anchorRefs_x3f_1572_);
lean_dec_ref(v_params_1359_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set_tag(v___x_1561_, 0);
v___x_1574_ = v___x_1561_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1614_, 0, v_gen_1559_);
v___x_1574_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v___x_1575_; 
lean_inc_ref(v_symPrios_1569_);
lean_inc(v_declName_1361_);
v___x_1575_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1361_, v___x_1574_, v_symPrios_1569_, v___x_1427_, v___x_1427_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
lean_inc(v_a_1576_);
lean_dec_ref_known(v___x_1575_, 1);
v___x_1577_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1577_, 0, v_gen_1559_);
lean_inc_ref(v_symPrios_1569_);
lean_inc(v_declName_1361_);
v___x_1578_ = l_Lean_Meta_Grind_mkEMatchTheoremForDecl(v_declName_1361_, v___x_1577_, v_symPrios_1569_, v___x_1427_, v___x_1427_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
if (lean_obj_tag(v___x_1578_) == 0)
{
if (v_warn_1365_ == 0)
{
lean_object* v_a_1579_; 
lean_dec(v_declName_1361_);
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
v___y_1412_ = v_extraFacts_1568_;
v___y_1413_ = v_extraInj_1567_;
v___y_1414_ = v_symPrios_1569_;
v___y_1415_ = v_a_1576_;
v___y_1416_ = v_anchorRefs_x3f_1572_;
v___y_1417_ = v_a_1579_;
v___y_1418_ = v_config_1564_;
v___y_1419_ = v_extensions_1565_;
v___y_1420_ = v_extra_1566_;
v___y_1421_ = v_normProcs_1571_;
v___y_1422_ = v_norm_1570_;
goto v___jp_1411_;
}
else
{
lean_object* v_a_1580_; lean_object* v_patterns_1581_; lean_object* v_origin_1582_; lean_object* v_cnstrs_1583_; uint8_t v___x_1584_; 
v_a_1580_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1580_);
lean_dec_ref_known(v___x_1578_, 1);
v_patterns_1581_ = lean_ctor_get(v_a_1576_, 3);
v_origin_1582_ = lean_ctor_get(v_a_1576_, 5);
v_cnstrs_1583_ = lean_ctor_get(v_a_1576_, 7);
v___x_1584_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1565_, v_origin_1582_, v_patterns_1581_, v_cnstrs_1583_);
if (v___x_1584_ == 0)
{
lean_dec(v_declName_1361_);
v___y_1412_ = v_extraFacts_1568_;
v___y_1413_ = v_extraInj_1567_;
v___y_1414_ = v_symPrios_1569_;
v___y_1415_ = v_a_1576_;
v___y_1416_ = v_anchorRefs_x3f_1572_;
v___y_1417_ = v_a_1580_;
v___y_1418_ = v_config_1564_;
v___y_1419_ = v_extensions_1565_;
v___y_1420_ = v_extra_1566_;
v___y_1421_ = v_normProcs_1571_;
v___y_1422_ = v_norm_1570_;
goto v___jp_1411_;
}
else
{
lean_object* v_patterns_1585_; lean_object* v_origin_1586_; lean_object* v_cnstrs_1587_; uint8_t v___x_1588_; 
v_patterns_1585_ = lean_ctor_get(v_a_1580_, 3);
v_origin_1586_ = lean_ctor_get(v_a_1580_, 5);
v_cnstrs_1587_ = lean_ctor_get(v_a_1580_, 7);
v___x_1588_ = l_Lean_Meta_Grind_ExtensionStateArray_containsWithSamePatterns(v_extensions_1565_, v_origin_1586_, v_patterns_1585_, v_cnstrs_1587_);
if (v___x_1588_ == 0)
{
lean_dec(v_declName_1361_);
v___y_1412_ = v_extraFacts_1568_;
v___y_1413_ = v_extraInj_1567_;
v___y_1414_ = v_symPrios_1569_;
v___y_1415_ = v_a_1576_;
v___y_1416_ = v_anchorRefs_x3f_1572_;
v___y_1417_ = v_a_1580_;
v___y_1418_ = v_config_1564_;
v___y_1419_ = v_extensions_1565_;
v___y_1420_ = v_extra_1566_;
v___y_1421_ = v_normProcs_1571_;
v___y_1422_ = v_norm_1570_;
goto v___jp_1411_;
}
else
{
lean_object* v___x_1589_; 
v___x_1589_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg(v_extensions_1565_, v_declName_1361_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_dec_ref_known(v___x_1589_, 1);
v___y_1412_ = v_extraFacts_1568_;
v___y_1413_ = v_extraInj_1567_;
v___y_1414_ = v_symPrios_1569_;
v___y_1415_ = v_a_1576_;
v___y_1416_ = v_anchorRefs_x3f_1572_;
v___y_1417_ = v_a_1580_;
v___y_1418_ = v_config_1564_;
v___y_1419_ = v_extensions_1565_;
v___y_1420_ = v_extra_1566_;
v___y_1421_ = v_normProcs_1571_;
v___y_1422_ = v_norm_1570_;
goto v___jp_1411_;
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
lean_dec(v_a_1580_);
lean_dec(v_a_1576_);
lean_dec(v_anchorRefs_x3f_1572_);
lean_dec_ref(v_normProcs_1571_);
lean_dec_ref(v_norm_1570_);
lean_dec_ref(v_symPrios_1569_);
lean_dec_ref(v_extraFacts_1568_);
lean_dec_ref(v_extraInj_1567_);
lean_dec_ref(v_extra_1566_);
lean_dec_ref(v_extensions_1565_);
lean_dec_ref(v_config_1564_);
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1589_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1589_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec(v_a_1576_);
lean_dec(v_anchorRefs_x3f_1572_);
lean_dec_ref(v_normProcs_1571_);
lean_dec_ref(v_norm_1570_);
lean_dec_ref(v_symPrios_1569_);
lean_dec_ref(v_extraFacts_1568_);
lean_dec_ref(v_extraInj_1567_);
lean_dec_ref(v_extra_1566_);
lean_dec_ref(v_extensions_1565_);
lean_dec_ref(v_config_1564_);
lean_dec(v_declName_1361_);
v_a_1598_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1578_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1578_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_dec(v_anchorRefs_x3f_1572_);
lean_dec_ref(v_normProcs_1571_);
lean_dec_ref(v_norm_1570_);
lean_dec_ref(v_symPrios_1569_);
lean_dec_ref(v_extraFacts_1568_);
lean_dec_ref(v_extraInj_1567_);
lean_dec_ref(v_extra_1566_);
lean_dec_ref(v_extensions_1565_);
lean_dec_ref(v_config_1564_);
lean_dec(v_declName_1361_);
v_a_1606_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1575_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1575_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1622_; 
lean_del_object(v___x_1561_);
lean_dec(v_declName_1361_);
lean_dec_ref(v_params_1359_);
v_a_1615_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1617_ = v___x_1563_;
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1563_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1618_ == 0)
{
v___x_1620_ = v___x_1617_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1615_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
}
}
else
{
switch(lean_obj_tag(v_kind_1362_))
{
case 0:
{
v___y_1541_ = v___y_1557_;
v___y_1542_ = v___y_1555_;
v___y_1543_ = v___y_1558_;
v___y_1544_ = v___y_1556_;
goto v___jp_1540_;
}
case 1:
{
v___y_1541_ = v___y_1557_;
v___y_1542_ = v___y_1555_;
v___y_1543_ = v___y_1558_;
v___y_1544_ = v___y_1556_;
goto v___jp_1540_;
}
default: 
{
v___y_1522_ = v___y_1555_;
v___y_1523_ = v___y_1556_;
v___y_1524_ = v___y_1557_;
v___y_1525_ = v___y_1558_;
goto v___jp_1521_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_addEMatchTheorem___boxed(lean_object* v_params_1666_, lean_object* v_id_1667_, lean_object* v_declName_1668_, lean_object* v_kind_1669_, lean_object* v_minIndexable_1670_, lean_object* v_suggest_1671_, lean_object* v_warn_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_){
_start:
{
uint8_t v_minIndexable_boxed_1678_; uint8_t v_suggest_boxed_1679_; uint8_t v_warn_boxed_1680_; lean_object* v_res_1681_; 
v_minIndexable_boxed_1678_ = lean_unbox(v_minIndexable_1670_);
v_suggest_boxed_1679_ = lean_unbox(v_suggest_1671_);
v_warn_boxed_1680_ = lean_unbox(v_warn_1672_);
v_res_1681_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_1666_, v_id_1667_, v_declName_1668_, v_kind_1669_, v_minIndexable_boxed_1678_, v_suggest_boxed_1679_, v_warn_boxed_1680_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
lean_dec(v_a_1676_);
lean_dec_ref(v_a_1675_);
lean_dec(v_a_1674_);
lean_dec_ref(v_a_1673_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(lean_object* v_declName_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v___x_1688_; 
v___x_1688_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___redArg(v_declName_1682_, v___y_1686_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2___boxed(lean_object* v_declName_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__1_spec__2(v_declName_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(lean_object* v_00_u03b1_1696_, lean_object* v_constName_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v___x_1703_; 
v___x_1703_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___redArg(v_constName_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1704_, lean_object* v_constName_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0(v_00_u03b1_1704_, v_constName_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1712_, lean_object* v_ref_1713_, lean_object* v_constName_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___redArg(v_ref_1713_, v_constName_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1721_, lean_object* v_ref_1722_, lean_object* v_constName_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1(v_00_u03b1_1721_, v_ref_1722_, v_constName_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v_ref_1722_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_1730_, lean_object* v_ref_1731_, lean_object* v_msg_1732_, lean_object* v_declHint_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___redArg(v_ref_1731_, v_msg_1732_, v_declHint_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1740_, lean_object* v_ref_1741_, lean_object* v_msg_1742_, lean_object* v_declHint_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_1740_, v_ref_1741_, v_msg_1742_, v_declHint_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v_ref_1741_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_msg_1750_, lean_object* v_declHint_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_msg_1750_, v_declHint_1751_, v___y_1755_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6___boxed(lean_object* v_msg_1758_, lean_object* v_declHint_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__5_spec__6(v_msg_1758_, v_declHint_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_1766_, lean_object* v_ref_1767_, lean_object* v_msg_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___redArg(v_ref_1767_, v_msg_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1775_, lean_object* v_ref_1776_, lean_object* v_msg_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0_spec__0_spec__1_spec__4_spec__6(v_00_u03b1_1775_, v_ref_1776_, v_msg_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v_ref_1776_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl(lean_object* v_declName_1788_, lean_object* v_symPrios_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_){
_start:
{
uint8_t v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = 0;
lean_inc(v_declName_1788_);
v___x_1796_ = l_Lean_getAsyncConstInfo___at___00Lean_Elab_Tactic_addEMatchTheorem_spec__0(v_declName_1788_, v___x_1795_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1869_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1799_ = v___x_1796_;
v_isShared_1800_ = v_isSharedCheck_1869_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_a_1797_);
lean_dec(v___x_1796_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1869_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
uint8_t v_kind_1866_; 
v_kind_1866_ = lean_ctor_get_uint8(v_a_1797_, sizeof(void*)*3);
switch(v_kind_1866_)
{
case 1:
{
goto v___jp_1801_;
}
case 2:
{
goto v___jp_1801_;
}
case 6:
{
goto v___jp_1801_;
}
default: 
{
lean_object* v___x_1867_; lean_object* v___x_1868_; 
lean_del_object(v___x_1799_);
lean_dec(v_a_1797_);
lean_dec_ref(v_symPrios_1789_);
lean_dec(v_declName_1788_);
v___x_1867_ = lean_box(v___x_1795_);
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
return v___x_1868_;
}
}
v___jp_1801_:
{
lean_object* v___x_1802_; lean_object* v_levelParams_1803_; lean_object* v_type_1804_; uint8_t v___x_1805_; 
v___x_1802_ = l_Lean_AsyncConstantInfo_toConstantVal(v_a_1797_);
v_levelParams_1803_ = lean_ctor_get(v___x_1802_, 1);
lean_inc(v_levelParams_1803_);
v_type_1804_ = lean_ctor_get(v___x_1802_, 2);
lean_inc_ref(v_type_1804_);
lean_dec_ref(v___x_1802_);
v___x_1805_ = l_List_isEmpty___redArg(v_levelParams_1803_);
lean_dec(v_levelParams_1803_);
if (v___x_1805_ == 0)
{
lean_object* v___x_1806_; lean_object* v___x_1808_; 
lean_dec_ref(v_type_1804_);
lean_dec_ref(v_symPrios_1789_);
lean_dec(v_declName_1788_);
v___x_1806_ = lean_box(v___x_1795_);
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 0, v___x_1806_);
v___x_1808_ = v___x_1799_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v___x_1806_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
else
{
lean_object* v___x_1810_; 
lean_del_object(v___x_1799_);
lean_inc_ref(v_type_1804_);
v___x_1810_ = l_Lean_Meta_whnfR(v_type_1804_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1857_; 
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1813_ = v___x_1810_;
v_isShared_1814_ = v_isSharedCheck_1857_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1810_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1857_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
uint8_t v___x_1815_; 
v___x_1815_ = l_Lean_Expr_isForall(v_a_1811_);
lean_dec(v_a_1811_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; 
lean_del_object(v___x_1813_);
v___x_1816_ = l_Lean_Meta_isProp(v_type_1804_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1852_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1852_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1852_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
uint8_t v___x_1821_; 
v___x_1821_ = lean_unbox(v_a_1817_);
if (v___x_1821_ == 0)
{
lean_object* v___x_1822_; lean_object* v___x_1824_; 
lean_dec(v_a_1817_);
lean_dec_ref(v_symPrios_1789_);
lean_dec(v_declName_1788_);
v___x_1822_ = lean_box(v___x_1795_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1822_);
v___x_1824_ = v___x_1819_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
else
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_del_object(v___x_1819_);
lean_inc(v_declName_1788_);
v___x_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1826_, 0, v_declName_1788_);
v___x_1827_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__0));
v___x_1828_ = lean_box(0);
v___x_1829_ = l_Lean_mkConst(v_declName_1788_, v___x_1828_);
v___x_1830_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__1));
v___x_1831_ = l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(v___x_1826_, v___x_1827_, v___x_1829_, v___x_1830_, v_symPrios_1789_, v___x_1805_, v___x_1795_, v___x_1795_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1843_; 
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1834_ = v___x_1831_;
v_isShared_1835_ = v_isSharedCheck_1843_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1831_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1843_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
if (lean_obj_tag(v_a_1832_) == 0)
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v_a_1817_);
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1817_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
else
{
lean_object* v___x_1839_; lean_object* v___x_1841_; 
lean_dec_ref_known(v_a_1832_, 1);
lean_dec(v_a_1817_);
v___x_1839_ = lean_box(v___x_1815_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1839_);
v___x_1841_ = v___x_1834_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
lean_dec(v_a_1817_);
v_a_1844_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1831_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1831_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_symPrios_1789_);
lean_dec(v_declName_1788_);
return v___x_1816_;
}
}
else
{
lean_object* v___x_1853_; lean_object* v___x_1855_; 
lean_dec_ref(v_type_1804_);
lean_dec_ref(v_symPrios_1789_);
lean_dec(v_declName_1788_);
v___x_1853_ = lean_box(v___x_1795_);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1853_);
v___x_1855_ = v___x_1813_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v___x_1853_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
lean_dec_ref(v_type_1804_);
lean_dec_ref(v_symPrios_1789_);
lean_dec(v_declName_1788_);
v_a_1858_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1810_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1810_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
lean_dec_ref(v_symPrios_1789_);
lean_dec(v_declName_1788_);
v_a_1870_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1796_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1796_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___boxed(lean_object* v_declName_1878_, lean_object* v_symPrios_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl(v_declName_1878_, v_symPrios_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_);
lean_dec(v_a_1883_);
lean_dec_ref(v_a_1882_);
lean_dec(v_a_1881_);
lean_dec_ref(v_a_1880_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_addFact(lean_object* v_params_1886_, lean_object* v_declName_1887_, uint8_t v_minIndexable_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_1888_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1920_; 
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1920_ == 0)
{
lean_object* v_unused_1921_; 
v_unused_1921_ = lean_ctor_get(v___x_1894_, 0);
lean_dec(v_unused_1921_);
v___x_1896_ = v___x_1894_;
v_isShared_1897_ = v_isSharedCheck_1920_;
goto v_resetjp_1895_;
}
else
{
lean_dec(v___x_1894_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1920_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v_config_1898_; lean_object* v_extensions_1899_; lean_object* v_extra_1900_; lean_object* v_extraInj_1901_; lean_object* v_extraFacts_1902_; lean_object* v_symPrios_1903_; lean_object* v_norm_1904_; lean_object* v_normProcs_1905_; lean_object* v_anchorRefs_x3f_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1919_; 
v_config_1898_ = lean_ctor_get(v_params_1886_, 0);
v_extensions_1899_ = lean_ctor_get(v_params_1886_, 1);
v_extra_1900_ = lean_ctor_get(v_params_1886_, 2);
v_extraInj_1901_ = lean_ctor_get(v_params_1886_, 3);
v_extraFacts_1902_ = lean_ctor_get(v_params_1886_, 4);
v_symPrios_1903_ = lean_ctor_get(v_params_1886_, 5);
v_norm_1904_ = lean_ctor_get(v_params_1886_, 6);
v_normProcs_1905_ = lean_ctor_get(v_params_1886_, 7);
v_anchorRefs_x3f_1906_ = lean_ctor_get(v_params_1886_, 8);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_params_1886_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1908_ = v_params_1886_;
v_isShared_1909_ = v_isSharedCheck_1919_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_anchorRefs_x3f_1906_);
lean_inc(v_normProcs_1905_);
lean_inc(v_norm_1904_);
lean_inc(v_symPrios_1903_);
lean_inc(v_extraFacts_1902_);
lean_inc(v_extraInj_1901_);
lean_inc(v_extra_1900_);
lean_inc(v_extensions_1899_);
lean_inc(v_config_1898_);
lean_dec(v_params_1886_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1919_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1914_; 
v___x_1910_ = lean_box(0);
v___x_1911_ = l_Lean_mkConst(v_declName_1887_, v___x_1910_);
v___x_1912_ = l_Lean_PersistentArray_push___redArg(v_extraFacts_1902_, v___x_1911_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 4, v___x_1912_);
v___x_1914_ = v___x_1908_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_config_1898_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v_extensions_1899_);
lean_ctor_set(v_reuseFailAlloc_1918_, 2, v_extra_1900_);
lean_ctor_set(v_reuseFailAlloc_1918_, 3, v_extraInj_1901_);
lean_ctor_set(v_reuseFailAlloc_1918_, 4, v___x_1912_);
lean_ctor_set(v_reuseFailAlloc_1918_, 5, v_symPrios_1903_);
lean_ctor_set(v_reuseFailAlloc_1918_, 6, v_norm_1904_);
lean_ctor_set(v_reuseFailAlloc_1918_, 7, v_normProcs_1905_);
lean_ctor_set(v_reuseFailAlloc_1918_, 8, v_anchorRefs_x3f_1906_);
v___x_1914_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
lean_object* v___x_1916_; 
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 0, v___x_1914_);
v___x_1916_ = v___x_1896_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1914_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_dec(v_declName_1887_);
lean_dec_ref(v_params_1886_);
v_a_1922_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1894_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1894_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_addFact___boxed(lean_object* v_params_1930_, lean_object* v_declName_1931_, lean_object* v_minIndexable_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_){
_start:
{
uint8_t v_minIndexable_boxed_1938_; lean_object* v_res_1939_; 
v_minIndexable_boxed_1938_ = lean_unbox(v_minIndexable_1932_);
v_res_1939_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_addFact(v_params_1930_, v_declName_1931_, v_minIndexable_boxed_1938_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_);
lean_dec(v_a_1936_);
lean_dec_ref(v_a_1935_);
lean_dec(v_a_1934_);
lean_dec_ref(v_a_1933_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(lean_object* v_params_1942_, lean_object* v_val_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_){
_start:
{
lean_object* v_config_1947_; lean_object* v_extensions_1948_; lean_object* v_extra_1949_; lean_object* v_extraInj_1950_; lean_object* v_extraFacts_1951_; lean_object* v_symPrios_1952_; lean_object* v_norm_1953_; lean_object* v_normProcs_1954_; lean_object* v_anchorRefs_x3f_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1985_; 
v_config_1947_ = lean_ctor_get(v_params_1942_, 0);
v_extensions_1948_ = lean_ctor_get(v_params_1942_, 1);
v_extra_1949_ = lean_ctor_get(v_params_1942_, 2);
v_extraInj_1950_ = lean_ctor_get(v_params_1942_, 3);
v_extraFacts_1951_ = lean_ctor_get(v_params_1942_, 4);
v_symPrios_1952_ = lean_ctor_get(v_params_1942_, 5);
v_norm_1953_ = lean_ctor_get(v_params_1942_, 6);
v_normProcs_1954_ = lean_ctor_get(v_params_1942_, 7);
v_anchorRefs_x3f_1955_ = lean_ctor_get(v_params_1942_, 8);
v_isSharedCheck_1985_ = !lean_is_exclusive(v_params_1942_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1957_ = v_params_1942_;
v_isShared_1958_ = v_isSharedCheck_1985_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_anchorRefs_x3f_1955_);
lean_inc(v_normProcs_1954_);
lean_inc(v_norm_1953_);
lean_inc(v_symPrios_1952_);
lean_inc(v_extraFacts_1951_);
lean_inc(v_extraInj_1950_);
lean_inc(v_extra_1949_);
lean_inc(v_extensions_1948_);
lean_inc(v_config_1947_);
lean_dec(v_params_1942_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1985_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___y_1960_; 
if (lean_obj_tag(v_anchorRefs_x3f_1955_) == 0)
{
lean_object* v___x_1983_; 
v___x_1983_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___closed__0));
v___y_1960_ = v___x_1983_;
goto v___jp_1959_;
}
else
{
lean_object* v_val_1984_; 
v_val_1984_ = lean_ctor_get(v_anchorRefs_x3f_1955_, 0);
lean_inc(v_val_1984_);
lean_dec_ref_known(v_anchorRefs_x3f_1955_, 1);
v___y_1960_ = v_val_1984_;
goto v___jp_1959_;
}
v___jp_1959_:
{
lean_object* v___x_1961_; 
v___x_1961_ = l_Lean_Elab_Tactic_Grind_elabAnchorRef(v_val_1943_, v_a_1944_, v_a_1945_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1974_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1964_ = v___x_1961_;
v_isShared_1965_ = v_isSharedCheck_1974_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1961_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1974_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1969_; 
v___x_1966_ = lean_array_push(v___y_1960_, v_a_1962_);
v___x_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1966_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 8, v___x_1967_);
v___x_1969_ = v___x_1957_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_config_1947_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v_extensions_1948_);
lean_ctor_set(v_reuseFailAlloc_1973_, 2, v_extra_1949_);
lean_ctor_set(v_reuseFailAlloc_1973_, 3, v_extraInj_1950_);
lean_ctor_set(v_reuseFailAlloc_1973_, 4, v_extraFacts_1951_);
lean_ctor_set(v_reuseFailAlloc_1973_, 5, v_symPrios_1952_);
lean_ctor_set(v_reuseFailAlloc_1973_, 6, v_norm_1953_);
lean_ctor_set(v_reuseFailAlloc_1973_, 7, v_normProcs_1954_);
lean_ctor_set(v_reuseFailAlloc_1973_, 8, v___x_1967_);
v___x_1969_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
lean_object* v___x_1971_; 
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 0, v___x_1969_);
v___x_1971_ = v___x_1964_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
lean_dec_ref(v___y_1960_);
lean_del_object(v___x_1957_);
lean_dec_ref(v_normProcs_1954_);
lean_dec_ref(v_norm_1953_);
lean_dec_ref(v_symPrios_1952_);
lean_dec_ref(v_extraFacts_1951_);
lean_dec_ref(v_extraInj_1950_);
lean_dec_ref(v_extra_1949_);
lean_dec_ref(v_extensions_1948_);
lean_dec_ref(v_config_1947_);
v_a_1975_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1961_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1961_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor___boxed(lean_object* v_params_1986_, lean_object* v_val_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(v_params_1986_, v_val_1987_, v_a_1988_, v_a_1989_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1988_);
lean_dec(v_val_1987_);
return v_res_1991_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1(void){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__0));
v___x_1994_ = l_Lean_stringToMessageData(v___x_1993_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(lean_object* v_params_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_){
_start:
{
lean_object* v_config_1999_; uint8_t v_revert_2000_; 
v_config_1999_ = lean_ctor_get(v_params_1995_, 0);
v_revert_2000_ = lean_ctor_get_uint8(v_config_1999_, sizeof(void*)*14 + 31);
if (v_revert_2000_ == 0)
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2001_ = lean_box(0);
v___x_2002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2002_, 0, v___x_2001_);
return v___x_2002_;
}
else
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2003_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___closed__1);
v___x_2004_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0___redArg(v___x_2003_, v_a_1996_, v_a_1997_);
return v___x_2004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert___boxed(lean_object* v_params_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(v_params_2005_, v_a_2006_, v_a_2007_);
lean_dec(v_a_2007_);
lean_dec_ref(v_a_2006_);
lean_dec_ref(v_params_2005_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(lean_object* v_e_2010_, lean_object* v___y_2011_){
_start:
{
uint8_t v___x_2013_; 
v___x_2013_ = l_Lean_Expr_hasMVar(v_e_2010_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; 
v___x_2014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2014_, 0, v_e_2010_);
return v___x_2014_;
}
else
{
lean_object* v___x_2015_; lean_object* v_mctx_2016_; lean_object* v___x_2017_; lean_object* v_fst_2018_; lean_object* v_snd_2019_; lean_object* v___x_2020_; lean_object* v_cache_2021_; lean_object* v_zetaDeltaFVarIds_2022_; lean_object* v_postponed_2023_; lean_object* v_diag_2024_; lean_object* v_rewriteFires_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2034_; 
v___x_2015_ = lean_st_ref_get(v___y_2011_);
v_mctx_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc_ref(v_mctx_2016_);
lean_dec(v___x_2015_);
v___x_2017_ = l_Lean_instantiateMVarsCore(v_mctx_2016_, v_e_2010_);
v_fst_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_fst_2018_);
v_snd_2019_ = lean_ctor_get(v___x_2017_, 1);
lean_inc(v_snd_2019_);
lean_dec_ref(v___x_2017_);
v___x_2020_ = lean_st_ref_take(v___y_2011_);
v_cache_2021_ = lean_ctor_get(v___x_2020_, 1);
v_zetaDeltaFVarIds_2022_ = lean_ctor_get(v___x_2020_, 2);
v_postponed_2023_ = lean_ctor_get(v___x_2020_, 3);
v_diag_2024_ = lean_ctor_get(v___x_2020_, 4);
v_rewriteFires_2025_ = lean_ctor_get(v___x_2020_, 5);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2034_ == 0)
{
lean_object* v_unused_2035_; 
v_unused_2035_ = lean_ctor_get(v___x_2020_, 0);
lean_dec(v_unused_2035_);
v___x_2027_ = v___x_2020_;
v_isShared_2028_ = v_isSharedCheck_2034_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_rewriteFires_2025_);
lean_inc(v_diag_2024_);
lean_inc(v_postponed_2023_);
lean_inc(v_zetaDeltaFVarIds_2022_);
lean_inc(v_cache_2021_);
lean_dec(v___x_2020_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2034_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v_snd_2019_);
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_snd_2019_);
lean_ctor_set(v_reuseFailAlloc_2033_, 1, v_cache_2021_);
lean_ctor_set(v_reuseFailAlloc_2033_, 2, v_zetaDeltaFVarIds_2022_);
lean_ctor_set(v_reuseFailAlloc_2033_, 3, v_postponed_2023_);
lean_ctor_set(v_reuseFailAlloc_2033_, 4, v_diag_2024_);
lean_ctor_set(v_reuseFailAlloc_2033_, 5, v_rewriteFires_2025_);
v___x_2030_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = lean_st_ref_put(v___y_2011_, v___x_2030_);
v___x_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2032_, 0, v_fst_2018_);
return v___x_2032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg___boxed(lean_object* v_e_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_e_2036_, v___y_2037_);
lean_dec(v___y_2037_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(lean_object* v_e_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_e_2040_, v___y_2044_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___boxed(lean_object* v_e_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v_res_2057_; 
v_res_2057_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0(v_e_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
lean_dec(v___y_2053_);
lean_dec_ref(v___y_2052_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(uint8_t v___x_2058_, uint8_t v___x_2059_, uint8_t v_____do__lift_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
if (v_____do__lift_2060_ == 0)
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = lean_box(v___x_2058_);
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
return v___x_2069_;
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_box(v___x_2059_);
v___x_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
return v___x_2071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0___boxed(lean_object* v___x_2072_, lean_object* v___x_2073_, lean_object* v_____do__lift_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
uint8_t v___x_14843__boxed_2082_; uint8_t v___x_14844__boxed_2083_; uint8_t v_____do__lift_14845__boxed_2084_; lean_object* v_res_2085_; 
v___x_14843__boxed_2082_ = lean_unbox(v___x_2072_);
v___x_14844__boxed_2083_ = lean_unbox(v___x_2073_);
v_____do__lift_14845__boxed_2084_ = lean_unbox(v_____do__lift_2074_);
v_res_2085_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(v___x_14843__boxed_2082_, v___x_14844__boxed_2083_, v_____do__lift_14845__boxed_2084_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(uint8_t v___x_2086_, uint8_t v___x_2087_, lean_object* v_as_2088_, size_t v_i_2089_, size_t v_stop_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
uint8_t v___x_2096_; 
v___x_2096_ = lean_usize_dec_eq(v_i_2089_, v_stop_2090_);
if (v___x_2096_ == 0)
{
uint8_t v___x_2097_; uint8_t v_a_2099_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2097_ = 1;
v___x_2105_ = lean_array_uget_borrowed(v_as_2088_, v_i_2089_);
lean_inc(v___x_2105_);
v___x_2106_ = l_Lean_Meta_isProof(v___x_2105_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v_a_2107_; uint8_t v___x_2108_; 
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_a_2107_);
lean_dec_ref_known(v___x_2106_, 1);
v___x_2108_ = lean_unbox(v_a_2107_);
lean_dec(v_a_2107_);
if (v___x_2108_ == 0)
{
v_a_2099_ = v___x_2086_;
goto v___jp_2098_;
}
else
{
v_a_2099_ = v___x_2087_;
goto v___jp_2098_;
}
}
else
{
return v___x_2106_;
}
v___jp_2098_:
{
if (v_a_2099_ == 0)
{
size_t v___x_2100_; size_t v___x_2101_; 
v___x_2100_ = ((size_t)1ULL);
v___x_2101_ = lean_usize_add(v_i_2089_, v___x_2100_);
v_i_2089_ = v___x_2101_;
goto _start;
}
else
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_box(v___x_2097_);
v___x_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2103_);
return v___x_2104_;
}
}
}
else
{
uint8_t v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2109_ = 0;
v___x_2110_ = lean_box(v___x_2109_);
v___x_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
return v___x_2111_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg___boxed(lean_object* v___x_2112_, lean_object* v___x_2113_, lean_object* v_as_2114_, lean_object* v_i_2115_, lean_object* v_stop_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
uint8_t v___x_14881__boxed_2122_; uint8_t v___x_14882__boxed_2123_; size_t v_i_boxed_2124_; size_t v_stop_boxed_2125_; lean_object* v_res_2126_; 
v___x_14881__boxed_2122_ = lean_unbox(v___x_2112_);
v___x_14882__boxed_2123_ = lean_unbox(v___x_2113_);
v_i_boxed_2124_ = lean_unbox_usize(v_i_2115_);
lean_dec(v_i_2115_);
v_stop_boxed_2125_ = lean_unbox_usize(v_stop_2116_);
lean_dec(v_stop_2116_);
v_res_2126_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_14881__boxed_2122_, v___x_14882__boxed_2123_, v_as_2114_, v_i_boxed_2124_, v_stop_boxed_2125_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
lean_dec(v___y_2118_);
lean_dec_ref(v___y_2117_);
lean_dec_ref(v_as_2114_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(lean_object* v_p_2127_, lean_object* v_term_2128_, lean_object* v___x_2129_, uint8_t v___x_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_){
_start:
{
lean_object* v_toCold_2138_; lean_object* v_currRecDepth_2139_; lean_object* v_ref_2140_; uint16_t v_optionFlags_2141_; uint8_t v_suppressElabErrors_2142_; uint8_t v_isRecordingDeps_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2240_; 
v_toCold_2138_ = lean_ctor_get(v___y_2135_, 0);
v_currRecDepth_2139_ = lean_ctor_get(v___y_2135_, 1);
v_ref_2140_ = lean_ctor_get(v___y_2135_, 2);
v_optionFlags_2141_ = lean_ctor_get_uint16(v___y_2135_, sizeof(void*)*3);
v_suppressElabErrors_2142_ = lean_ctor_get_uint8(v___y_2135_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2143_ = lean_ctor_get_uint8(v___y_2135_, sizeof(void*)*3 + 3);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___y_2135_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2145_ = v___y_2135_;
v_isShared_2146_ = v_isSharedCheck_2240_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_ref_2140_);
lean_inc(v_currRecDepth_2139_);
lean_inc(v_toCold_2138_);
lean_dec(v___y_2135_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2240_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v_ref_2147_; lean_object* v___x_2149_; 
v_ref_2147_ = l_Lean_replaceRef(v_p_2127_, v_ref_2140_);
lean_dec(v_ref_2140_);
if (v_isShared_2146_ == 0)
{
lean_ctor_set(v___x_2145_, 2, v_ref_2147_);
v___x_2149_ = v___x_2145_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_toCold_2138_);
lean_ctor_set(v_reuseFailAlloc_2239_, 1, v_currRecDepth_2139_);
lean_ctor_set(v_reuseFailAlloc_2239_, 2, v_ref_2147_);
lean_ctor_set_uint16(v_reuseFailAlloc_2239_, sizeof(void*)*3, v_optionFlags_2141_);
lean_ctor_set_uint8(v_reuseFailAlloc_2239_, sizeof(void*)*3 + 2, v_suppressElabErrors_2142_);
lean_ctor_set_uint8(v_reuseFailAlloc_2239_, sizeof(void*)*3 + 3, v_isRecordingDeps_2143_);
v___x_2149_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lean_Elab_Term_elabTerm(v_term_2128_, v___x_2129_, v___x_2130_, v___x_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___x_2149_, v___y_2136_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v_a_2151_; uint8_t v___x_2152_; lean_object* v___x_2153_; 
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc(v_a_2151_);
lean_dec_ref_known(v___x_2150_, 1);
v___x_2152_ = 1;
v___x_2153_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_2152_, v___x_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___x_2149_, v___y_2136_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v___x_2154_; lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2222_; 
lean_dec_ref_known(v___x_2153_, 1);
v___x_2154_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__0___redArg(v_a_2151_, v___y_2134_);
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2157_ = v___x_2154_;
v_isShared_2158_ = v_isSharedCheck_2222_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2154_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2222_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
uint8_t v___x_2159_; 
v___x_2159_ = l_Lean_Expr_hasSyntheticSorry(v_a_2155_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; uint8_t v___x_2161_; 
v___x_2160_ = l_Lean_Expr_eta(v_a_2155_);
v___x_2161_ = l_Lean_Expr_hasMVar(v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2168_; 
lean_dec_ref(v___x_2149_);
v___x_2162_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__0));
v___x_2163_ = lean_box(v___x_2161_);
v___x_2164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2160_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
v___x_2165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2162_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v___x_2166_);
v___x_2168_ = v___x_2157_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v___x_2166_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
else
{
lean_object* v___x_2170_; 
lean_del_object(v___x_2157_);
v___x_2170_ = l_Lean_Meta_abstractMVars(v___x_2160_, v___x_2130_, v___y_2133_, v___y_2134_, v___x_2149_, v___y_2136_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2209_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2209_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2209_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v_paramNames_2175_; lean_object* v_mvars_2176_; lean_object* v_expr_2177_; uint8_t v_a_2179_; lean_object* v___y_2188_; lean_object* v___x_2191_; lean_object* v___x_2192_; uint8_t v___x_2193_; 
v_paramNames_2175_ = lean_ctor_get(v_a_2171_, 0);
lean_inc_ref(v_paramNames_2175_);
v_mvars_2176_ = lean_ctor_get(v_a_2171_, 1);
lean_inc_ref(v_mvars_2176_);
v_expr_2177_ = lean_ctor_get(v_a_2171_, 2);
lean_inc_ref(v_expr_2177_);
lean_dec(v_a_2171_);
v___x_2191_ = lean_unsigned_to_nat(0u);
v___x_2192_ = lean_array_get_size(v_mvars_2176_);
v___x_2193_ = lean_nat_dec_lt(v___x_2191_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; 
lean_dec_ref(v_mvars_2176_);
v___x_2194_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(v___x_2161_, v___x_2159_, v___x_2193_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___x_2149_, v___y_2136_);
lean_dec_ref(v___x_2149_);
v___y_2188_ = v___x_2194_;
goto v___jp_2187_;
}
else
{
if (v___x_2193_ == 0)
{
lean_dec_ref(v_mvars_2176_);
lean_dec_ref(v___x_2149_);
v_a_2179_ = v___x_2161_;
goto v___jp_2178_;
}
else
{
size_t v___x_2195_; size_t v___x_2196_; lean_object* v___x_2197_; 
v___x_2195_ = ((size_t)0ULL);
v___x_2196_ = lean_usize_of_nat(v___x_2192_);
v___x_2197_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2161_, v___x_2159_, v_mvars_2176_, v___x_2195_, v___x_2196_, v___y_2133_, v___y_2134_, v___x_2149_, v___y_2136_);
lean_dec_ref(v_mvars_2176_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; uint8_t v___x_2199_; lean_object* v___x_2200_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2197_, 1);
v___x_2199_ = lean_unbox(v_a_2198_);
lean_dec(v_a_2198_);
v___x_2200_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__0(v___x_2161_, v___x_2159_, v___x_2199_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___x_2149_, v___y_2136_);
lean_dec_ref(v___x_2149_);
v___y_2188_ = v___x_2200_;
goto v___jp_2187_;
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
lean_dec_ref(v_expr_2177_);
lean_dec_ref(v_paramNames_2175_);
lean_del_object(v___x_2173_);
lean_dec_ref(v___x_2149_);
v_a_2201_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2197_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2197_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
}
v___jp_2178_:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2185_; 
v___x_2180_ = lean_box(v_a_2179_);
v___x_2181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2181_, 0, v_expr_2177_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
v___x_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2182_, 0, v_paramNames_2175_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2183_);
v___x_2185_ = v___x_2173_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2183_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
v___jp_2187_:
{
lean_object* v_a_2189_; uint8_t v___x_2190_; 
v_a_2189_ = lean_ctor_get(v___y_2188_, 0);
lean_inc(v_a_2189_);
lean_dec_ref(v___y_2188_);
v___x_2190_ = lean_unbox(v_a_2189_);
lean_dec(v_a_2189_);
v_a_2179_ = v___x_2190_;
goto v___jp_2178_;
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec_ref(v___x_2149_);
v_a_2210_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2170_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2170_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
else
{
lean_object* v___x_2218_; lean_object* v___x_2220_; 
lean_dec(v_a_2155_);
lean_dec_ref(v___x_2149_);
v___x_2218_ = lean_box(0);
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v___x_2218_);
v___x_2220_ = v___x_2157_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
lean_dec(v_a_2151_);
lean_dec_ref(v___x_2149_);
v_a_2223_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2153_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2153_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec_ref(v___x_2149_);
v_a_2231_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2150_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2150_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed(lean_object* v_p_2241_, lean_object* v_term_2242_, lean_object* v___x_2243_, lean_object* v___x_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
uint8_t v___x_14938__boxed_2252_; lean_object* v_res_2253_; 
v___x_14938__boxed_2252_ = lean_unbox(v___x_2244_);
v_res_2253_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1(v_p_2241_, v_term_2242_, v___x_2243_, v___x_14938__boxed_2252_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v_p_2241_);
return v_res_2253_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__2));
v___x_2259_ = l_Lean_stringToMessageData(v___x_2258_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2(lean_object* v_params_2260_, lean_object* v_p_2261_, lean_object* v_fst_2262_, lean_object* v_fst_2263_, uint8_t v___x_2264_, uint8_t v_minIndexable_2265_, lean_object* v_kind_2266_, lean_object* v_idx_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_){
_start:
{
lean_object* v_symPrios_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; lean_object* v___x_2278_; 
v_symPrios_2273_ = lean_ctor_get(v_params_2260_, 5);
lean_inc_ref(v_symPrios_2273_);
lean_dec_ref(v_params_2260_);
v___x_2274_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__1));
v___x_2275_ = lean_name_append_index_after(v___x_2274_, v_idx_2267_);
v___x_2276_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v_p_2261_);
v___x_2277_ = 0;
v___x_2278_ = l_Lean_Meta_Grind_mkEMatchTheoremWithKind_x3f(v___x_2276_, v_fst_2262_, v_fst_2263_, v_kind_2266_, v_symPrios_2273_, v___x_2264_, v___x_2277_, v_minIndexable_2265_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2289_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2281_ = v___x_2278_;
v_isShared_2282_ = v_isSharedCheck_2289_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2278_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2289_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
if (lean_obj_tag(v_a_2279_) == 1)
{
lean_object* v_val_2283_; lean_object* v___x_2285_; 
v_val_2283_ = lean_ctor_get(v_a_2279_, 0);
lean_inc(v_val_2283_);
lean_dec_ref_known(v_a_2279_, 1);
if (v_isShared_2282_ == 0)
{
lean_ctor_set(v___x_2281_, 0, v_val_2283_);
v___x_2285_ = v___x_2281_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_val_2283_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
else
{
lean_object* v___x_2287_; lean_object* v___x_2288_; 
lean_del_object(v___x_2281_);
lean_dec(v_a_2279_);
v___x_2287_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___closed__3);
v___x_2288_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable_spec__0___redArg(v___x_2287_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_);
return v___x_2288_;
}
}
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2297_; 
v_a_2290_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2292_ = v___x_2278_;
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___x_2278_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_a_2290_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___boxed(lean_object* v_params_2298_, lean_object* v_p_2299_, lean_object* v_fst_2300_, lean_object* v_fst_2301_, lean_object* v___x_2302_, lean_object* v_minIndexable_2303_, lean_object* v_kind_2304_, lean_object* v_idx_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
uint8_t v___x_15168__boxed_2311_; uint8_t v_minIndexable_boxed_2312_; lean_object* v_res_2313_; 
v___x_15168__boxed_2311_ = lean_unbox(v___x_2302_);
v_minIndexable_boxed_2312_ = lean_unbox(v_minIndexable_2303_);
v_res_2313_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2(v_params_2298_, v_p_2299_, v_fst_2300_, v_fst_2301_, v___x_15168__boxed_2311_, v_minIndexable_boxed_2312_, v_kind_2304_, v_idx_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_);
lean_dec(v___y_2309_);
lean_dec_ref(v___y_2308_);
lean_dec(v___y_2307_);
lean_dec_ref(v___y_2306_);
return v_res_2313_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2314_ = lean_box(1);
v___x_2315_ = l_Lean_MessageData_ofFormat(v___x_2314_);
return v___x_2315_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__2));
v___x_2320_ = l_Lean_MessageData_ofFormat(v___x_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3(lean_object* v_x_2321_, lean_object* v_x_2322_){
_start:
{
if (lean_obj_tag(v_x_2322_) == 0)
{
return v_x_2321_;
}
else
{
lean_object* v_head_2323_; lean_object* v_tail_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2346_; 
v_head_2323_ = lean_ctor_get(v_x_2322_, 0);
v_tail_2324_ = lean_ctor_get(v_x_2322_, 1);
v_isSharedCheck_2346_ = !lean_is_exclusive(v_x_2322_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2326_ = v_x_2322_;
v_isShared_2327_ = v_isSharedCheck_2346_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_tail_2324_);
lean_inc(v_head_2323_);
lean_dec(v_x_2322_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2346_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v_before_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2344_; 
v_before_2328_ = lean_ctor_get(v_head_2323_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v_head_2323_);
if (v_isSharedCheck_2344_ == 0)
{
lean_object* v_unused_2345_; 
v_unused_2345_ = lean_ctor_get(v_head_2323_, 1);
lean_dec(v_unused_2345_);
v___x_2330_ = v_head_2323_;
v_isShared_2331_ = v_isSharedCheck_2344_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_before_2328_);
lean_dec(v_head_2323_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2344_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2332_; lean_object* v___x_2334_; 
v___x_2332_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0);
if (v_isShared_2331_ == 0)
{
lean_ctor_set_tag(v___x_2330_, 7);
lean_ctor_set(v___x_2330_, 1, v___x_2332_);
lean_ctor_set(v___x_2330_, 0, v_x_2321_);
v___x_2334_ = v___x_2330_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_x_2321_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v___x_2332_);
v___x_2334_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
lean_object* v___x_2335_; lean_object* v___x_2337_; 
v___x_2335_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__3);
if (v_isShared_2327_ == 0)
{
lean_ctor_set_tag(v___x_2326_, 7);
lean_ctor_set(v___x_2326_, 1, v___x_2335_);
lean_ctor_set(v___x_2326_, 0, v___x_2334_);
v___x_2337_ = v___x_2326_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v___x_2334_);
lean_ctor_set(v_reuseFailAlloc_2342_, 1, v___x_2335_);
v___x_2337_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2338_ = l_Lean_MessageData_ofSyntax(v_before_2328_);
v___x_2339_ = l_Lean_indentD(v___x_2338_);
v___x_2340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2337_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v_x_2321_ = v___x_2340_;
v_x_2322_ = v_tail_2324_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2350_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__1));
v___x_2351_ = l_Lean_MessageData_ofFormat(v___x_2350_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg(lean_object* v_msgData_2352_, lean_object* v_macroStack_2353_, lean_object* v___y_2354_){
_start:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; uint8_t v___x_2358_; 
v___x_2356_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2354_);
v___x_2357_ = l_Lean_Elab_pp_macroStack;
v___x_2358_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v___x_2356_, v___x_2357_);
lean_dec_ref(v___x_2356_);
if (v___x_2358_ == 0)
{
lean_object* v___x_2359_; 
lean_dec(v_macroStack_2353_);
v___x_2359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2359_, 0, v_msgData_2352_);
return v___x_2359_;
}
else
{
if (lean_obj_tag(v_macroStack_2353_) == 0)
{
lean_object* v___x_2360_; 
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v_msgData_2352_);
return v___x_2360_;
}
else
{
lean_object* v_head_2361_; lean_object* v_after_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2377_; 
v_head_2361_ = lean_ctor_get(v_macroStack_2353_, 0);
lean_inc(v_head_2361_);
v_after_2362_ = lean_ctor_get(v_head_2361_, 1);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_head_2361_);
if (v_isSharedCheck_2377_ == 0)
{
lean_object* v_unused_2378_; 
v_unused_2378_ = lean_ctor_get(v_head_2361_, 0);
lean_dec(v_unused_2378_);
v___x_2364_ = v_head_2361_;
v_isShared_2365_ = v_isSharedCheck_2377_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_after_2362_);
lean_dec(v_head_2361_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2377_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2366_; lean_object* v___x_2368_; 
v___x_2366_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3___closed__0);
if (v_isShared_2365_ == 0)
{
lean_ctor_set_tag(v___x_2364_, 7);
lean_ctor_set(v___x_2364_, 1, v___x_2366_);
lean_ctor_set(v___x_2364_, 0, v_msgData_2352_);
v___x_2368_ = v___x_2364_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_msgData_2352_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v_msgData_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2369_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___closed__2);
v___x_2370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2368_);
lean_ctor_set(v___x_2370_, 1, v___x_2369_);
v___x_2371_ = l_Lean_MessageData_ofSyntax(v_after_2362_);
v___x_2372_ = l_Lean_indentD(v___x_2371_);
v_msgData_2373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2373_, 0, v___x_2370_);
lean_ctor_set(v_msgData_2373_, 1, v___x_2372_);
v___x_2374_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2_spec__3(v_msgData_2373_, v_macroStack_2353_);
v___x_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
return v___x_2375_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg___boxed(lean_object* v_msgData_2379_, lean_object* v_macroStack_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg(v_msgData_2379_, v_macroStack_2380_, v___y_2381_);
lean_dec_ref(v___y_2381_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(lean_object* v_msg_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v_ref_2392_; lean_object* v_macroStack_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v_a_2396_; lean_object* v___x_2397_; lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2406_; 
v_ref_2392_ = lean_ctor_get(v___y_2389_, 2);
v_macroStack_2393_ = lean_ctor_get(v___y_2385_, 1);
v___x_2394_ = l_Lean_Elab_getBetterRef(v_ref_2392_, v_macroStack_2393_);
v___x_2395_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v_msg_2384_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2396_);
lean_dec_ref(v___x_2395_);
lean_inc(v_macroStack_2393_);
v___x_2397_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg(v_a_2396_, v_macroStack_2393_, v___y_2389_);
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2400_ = v___x_2397_;
v_isShared_2401_ = v_isSharedCheck_2406_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2397_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2406_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2402_; lean_object* v___x_2404_; 
v___x_2402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2394_);
lean_ctor_set(v___x_2402_, 1, v_a_2398_);
if (v_isShared_2401_ == 0)
{
lean_ctor_set_tag(v___x_2400_, 1);
lean_ctor_set(v___x_2400_, 0, v___x_2402_);
v___x_2404_ = v___x_2400_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v___x_2402_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg___boxed(lean_object* v_msg_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_){
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v_msg_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
lean_dec(v___y_2413_);
lean_dec_ref(v___y_2412_);
lean_dec(v___y_2411_);
lean_dec_ref(v___y_2410_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
return v_res_2415_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1(void){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__0));
v___x_2418_ = l_Lean_stringToMessageData(v___x_2417_);
return v___x_2418_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3(void){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__2));
v___x_2421_ = l_Lean_stringToMessageData(v___x_2420_);
return v___x_2421_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5(void){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__4));
v___x_2424_ = l_Lean_stringToMessageData(v___x_2423_);
return v___x_2424_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7(void){
_start:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2426_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__6));
v___x_2427_ = l_Lean_stringToMessageData(v___x_2426_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(lean_object* v_params_2428_, lean_object* v_p_2429_, lean_object* v_mod_x3f_2430_, lean_object* v_term_2431_, uint8_t v_minIndexable_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_, lean_object* v_a_2438_){
_start:
{
lean_object* v___y_2441_; lean_object* v___y_2461_; lean_object* v___y_2462_; lean_object* v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; lean_object* v___y_2486_; lean_object* v___y_2487_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2522_; lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2537_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; uint8_t v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; lean_object* v_kind_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v_toCold_2796_; lean_object* v_currRecDepth_2797_; lean_object* v_ref_2798_; uint16_t v_optionFlags_2799_; uint8_t v_suppressElabErrors_2800_; uint8_t v_isRecordingDeps_2801_; lean_object* v_ref_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v_toCold_2796_ = lean_ctor_get(v_a_2437_, 0);
v_currRecDepth_2797_ = lean_ctor_get(v_a_2437_, 1);
v_ref_2798_ = lean_ctor_get(v_a_2437_, 2);
v_optionFlags_2799_ = lean_ctor_get_uint16(v_a_2437_, sizeof(void*)*3);
v_suppressElabErrors_2800_ = lean_ctor_get_uint8(v_a_2437_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2801_ = lean_ctor_get_uint8(v_a_2437_, sizeof(void*)*3 + 3);
v_ref_2802_ = l_Lean_replaceRef(v_p_2429_, v_ref_2798_);
lean_inc(v_currRecDepth_2797_);
lean_inc_ref(v_toCold_2796_);
v___x_2803_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_2803_, 0, v_toCold_2796_);
lean_ctor_set(v___x_2803_, 1, v_currRecDepth_2797_);
lean_ctor_set(v___x_2803_, 2, v_ref_2802_);
lean_ctor_set_uint16(v___x_2803_, sizeof(void*)*3, v_optionFlags_2799_);
lean_ctor_set_uint8(v___x_2803_, sizeof(void*)*3 + 2, v_suppressElabErrors_2800_);
lean_ctor_set_uint8(v___x_2803_, sizeof(void*)*3 + 3, v_isRecordingDeps_2801_);
v___x_2804_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_checkNoRevert(v_params_2428_, v___x_2803_, v_a_2438_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_dec_ref_known(v___x_2804_, 1);
if (lean_obj_tag(v_mod_x3f_2430_) == 1)
{
lean_object* v_val_2805_; lean_object* v___x_2806_; 
v_val_2805_ = lean_ctor_get(v_mod_x3f_2430_, 0);
lean_inc(v_val_2805_);
v___x_2806_ = l_Lean_Meta_Grind_getAttrKindCore(v_val_2805_, v___x_2803_, v_a_2438_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v_a_2807_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_a_2807_);
lean_dec_ref_known(v___x_2806_, 1);
switch(lean_obj_tag(v_a_2807_))
{
case 0:
{
lean_object* v_k_2808_; 
v_k_2808_ = lean_ctor_get(v_a_2807_, 0);
lean_inc(v_k_2808_);
lean_dec_ref_known(v_a_2807_, 1);
if (lean_obj_tag(v_k_2808_) == 9)
{
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec(v_term_2431_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v___y_2755_ = v_a_2433_;
v___y_2756_ = v_a_2434_;
v___y_2757_ = v_a_2435_;
v___y_2758_ = v_a_2436_;
v___y_2759_ = v___x_2803_;
v___y_2760_ = v_a_2438_;
goto v___jp_2754_;
}
else
{
v_kind_2686_ = v_k_2808_;
v___y_2687_ = v_a_2433_;
v___y_2688_ = v_a_2434_;
v___y_2689_ = v_a_2435_;
v___y_2690_ = v_a_2436_;
v___y_2691_ = v___x_2803_;
v___y_2692_ = v_a_2438_;
goto v___jp_2685_;
}
}
case 1:
{
lean_dec_ref_known(v_a_2807_, 0);
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec(v_term_2431_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v___y_2772_ = v_a_2433_;
v___y_2773_ = v_a_2434_;
v___y_2774_ = v_a_2435_;
v___y_2775_ = v_a_2436_;
v___y_2776_ = v___x_2803_;
v___y_2777_ = v_a_2438_;
goto v___jp_2771_;
}
case 3:
{
v___y_2789_ = v_a_2433_;
v___y_2790_ = v_a_2434_;
v___y_2791_ = v_a_2435_;
v___y_2792_ = v_a_2436_;
v___y_2793_ = v___x_2803_;
v___y_2794_ = v_a_2438_;
goto v___jp_2788_;
}
case 5:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
lean_dec_ref_known(v_a_2807_, 1);
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec(v_term_2431_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v___x_2809_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2810_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_2809_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v___x_2803_, v_a_2438_);
lean_dec_ref_known(v___x_2803_, 3);
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v___x_2810_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2810_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
case 8:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v_a_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2828_; 
lean_dec_ref_known(v_a_2807_, 0);
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec(v_term_2431_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v___x_2819_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2820_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_2819_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v___x_2803_, v_a_2438_);
lean_dec_ref_known(v___x_2803_, 3);
v_a_2821_ = lean_ctor_get(v___x_2820_, 0);
v_isSharedCheck_2828_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2828_ == 0)
{
v___x_2823_ = v___x_2820_;
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_a_2821_);
lean_dec(v___x_2820_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2828_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2826_; 
if (v_isShared_2824_ == 0)
{
v___x_2826_ = v___x_2823_;
goto v_reusejp_2825_;
}
else
{
lean_object* v_reuseFailAlloc_2827_; 
v_reuseFailAlloc_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2827_, 0, v_a_2821_);
v___x_2826_ = v_reuseFailAlloc_2827_;
goto v_reusejp_2825_;
}
v_reusejp_2825_:
{
return v___x_2826_;
}
}
}
case 10:
{
lean_dec_ref_known(v_a_2807_, 0);
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec(v_term_2431_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v___y_2772_ = v_a_2433_;
v___y_2773_ = v_a_2434_;
v___y_2774_ = v_a_2435_;
v___y_2775_ = v_a_2436_;
v___y_2776_ = v___x_2803_;
v___y_2777_ = v_a_2438_;
goto v___jp_2771_;
}
default: 
{
lean_dec(v_a_2807_);
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec(v_term_2431_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v___y_2755_ = v_a_2433_;
v___y_2756_ = v_a_2434_;
v___y_2757_ = v_a_2435_;
v___y_2758_ = v_a_2436_;
v___y_2759_ = v___x_2803_;
v___y_2760_ = v_a_2438_;
goto v___jp_2754_;
}
}
}
else
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2836_; 
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec_ref_known(v___x_2803_, 3);
lean_dec(v_term_2431_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v_a_2829_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2836_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2836_ == 0)
{
v___x_2831_ = v___x_2806_;
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v___x_2806_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2836_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2834_; 
if (v_isShared_2832_ == 0)
{
v___x_2834_ = v___x_2831_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2835_; 
v_reuseFailAlloc_2835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2835_, 0, v_a_2829_);
v___x_2834_ = v_reuseFailAlloc_2835_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
return v___x_2834_;
}
}
}
}
else
{
v___y_2789_ = v_a_2433_;
v___y_2790_ = v_a_2434_;
v___y_2791_ = v_a_2435_;
v___y_2792_ = v_a_2436_;
v___y_2793_ = v___x_2803_;
v___y_2794_ = v_a_2438_;
goto v___jp_2788_;
}
}
else
{
lean_object* v_a_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2844_; 
lean_dec_ref_known(v___x_2803_, 3);
lean_dec(v_term_2431_);
lean_dec(v_mod_x3f_2430_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v_a_2837_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2839_ = v___x_2804_;
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_a_2837_);
lean_dec(v___x_2804_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2844_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
lean_object* v___x_2842_; 
if (v_isShared_2840_ == 0)
{
v___x_2842_ = v___x_2839_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_a_2837_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
v___jp_2440_:
{
lean_object* v_config_2442_; lean_object* v_extensions_2443_; lean_object* v_extra_2444_; lean_object* v_extraInj_2445_; lean_object* v_extraFacts_2446_; lean_object* v_symPrios_2447_; lean_object* v_norm_2448_; lean_object* v_normProcs_2449_; lean_object* v_anchorRefs_x3f_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2459_; 
v_config_2442_ = lean_ctor_get(v_params_2428_, 0);
v_extensions_2443_ = lean_ctor_get(v_params_2428_, 1);
v_extra_2444_ = lean_ctor_get(v_params_2428_, 2);
v_extraInj_2445_ = lean_ctor_get(v_params_2428_, 3);
v_extraFacts_2446_ = lean_ctor_get(v_params_2428_, 4);
v_symPrios_2447_ = lean_ctor_get(v_params_2428_, 5);
v_norm_2448_ = lean_ctor_get(v_params_2428_, 6);
v_normProcs_2449_ = lean_ctor_get(v_params_2428_, 7);
v_anchorRefs_x3f_2450_ = lean_ctor_get(v_params_2428_, 8);
v_isSharedCheck_2459_ = !lean_is_exclusive(v_params_2428_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2452_ = v_params_2428_;
v_isShared_2453_ = v_isSharedCheck_2459_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_anchorRefs_x3f_2450_);
lean_inc(v_normProcs_2449_);
lean_inc(v_norm_2448_);
lean_inc(v_symPrios_2447_);
lean_inc(v_extraFacts_2446_);
lean_inc(v_extraInj_2445_);
lean_inc(v_extra_2444_);
lean_inc(v_extensions_2443_);
lean_inc(v_config_2442_);
lean_dec(v_params_2428_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2459_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; lean_object* v___x_2456_; 
v___x_2454_ = l_Lean_PersistentArray_push___redArg(v_extraFacts_2446_, v___y_2441_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 4, v___x_2454_);
v___x_2456_ = v___x_2452_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_config_2442_);
lean_ctor_set(v_reuseFailAlloc_2458_, 1, v_extensions_2443_);
lean_ctor_set(v_reuseFailAlloc_2458_, 2, v_extra_2444_);
lean_ctor_set(v_reuseFailAlloc_2458_, 3, v_extraInj_2445_);
lean_ctor_set(v_reuseFailAlloc_2458_, 4, v___x_2454_);
lean_ctor_set(v_reuseFailAlloc_2458_, 5, v_symPrios_2447_);
lean_ctor_set(v_reuseFailAlloc_2458_, 6, v_norm_2448_);
lean_ctor_set(v_reuseFailAlloc_2458_, 7, v_normProcs_2449_);
lean_ctor_set(v_reuseFailAlloc_2458_, 8, v_anchorRefs_x3f_2450_);
v___x_2456_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
lean_object* v___x_2457_; 
v___x_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
return v___x_2457_;
}
}
}
v___jp_2460_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; uint8_t v___x_2472_; 
v___x_2470_ = lean_array_get_size(v___y_2461_);
lean_dec_ref(v___y_2461_);
v___x_2471_ = lean_unsigned_to_nat(0u);
v___x_2472_ = lean_nat_dec_eq(v___x_2470_, v___x_2471_);
if (v___x_2472_ == 0)
{
lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v_a_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2484_; 
lean_dec_ref(v___y_2462_);
lean_dec_ref(v_params_2428_);
v___x_2473_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__1);
v___x_2474_ = l_Lean_indentExpr(v___y_2463_);
v___x_2475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2475_, 0, v___x_2473_);
lean_ctor_set(v___x_2475_, 1, v___x_2474_);
v___x_2476_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_2475_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
lean_dec_ref(v___y_2468_);
v_a_2477_ = lean_ctor_get(v___x_2476_, 0);
v_isSharedCheck_2484_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2479_ = v___x_2476_;
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_a_2477_);
lean_dec(v___x_2476_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2484_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2482_; 
if (v_isShared_2480_ == 0)
{
v___x_2482_ = v___x_2479_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_a_2477_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
}
else
{
lean_dec_ref(v___y_2468_);
lean_dec_ref(v___y_2463_);
v___y_2441_ = v___y_2462_;
goto v___jp_2440_;
}
}
v___jp_2485_:
{
lean_object* v___x_2502_; 
lean_inc(v___y_2501_);
lean_inc(v___y_2499_);
lean_inc_ref(v___y_2498_);
v___x_2502_ = lean_apply_7(v___y_2491_, v___y_2488_, v___y_2494_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, lean_box(0));
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2512_; 
v_a_2503_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2505_ = v___x_2502_;
v_isShared_2506_ = v_isSharedCheck_2512_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2502_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2512_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2510_; 
v___x_2507_ = l_Lean_PersistentArray_push___redArg(v___y_2493_, v_a_2503_);
v___x_2508_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2508_, 0, v___y_2486_);
lean_ctor_set(v___x_2508_, 1, v___y_2489_);
lean_ctor_set(v___x_2508_, 2, v___x_2507_);
lean_ctor_set(v___x_2508_, 3, v___y_2497_);
lean_ctor_set(v___x_2508_, 4, v___y_2495_);
lean_ctor_set(v___x_2508_, 5, v___y_2490_);
lean_ctor_set(v___x_2508_, 6, v___y_2492_);
lean_ctor_set(v___x_2508_, 7, v___y_2487_);
lean_ctor_set(v___x_2508_, 8, v___y_2496_);
if (v_isShared_2506_ == 0)
{
lean_ctor_set(v___x_2505_, 0, v___x_2508_);
v___x_2510_ = v___x_2505_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2508_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
lean_dec_ref(v___y_2497_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
lean_dec_ref(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec_ref(v___y_2490_);
lean_dec_ref(v___y_2489_);
lean_dec_ref(v___y_2487_);
lean_dec_ref(v___y_2486_);
v_a_2513_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2515_ = v___x_2502_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2502_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2513_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
v___jp_2521_:
{
lean_object* v___x_2538_; 
v___x_2538_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_2432_, v___y_2524_, v___y_2533_, v___y_2526_, v___y_2527_);
if (lean_obj_tag(v___x_2538_) == 0)
{
lean_dec_ref_known(v___x_2538_, 1);
v___y_2486_ = v___y_2530_;
v___y_2487_ = v___y_2531_;
v___y_2488_ = v___y_2522_;
v___y_2489_ = v___y_2523_;
v___y_2490_ = v___y_2532_;
v___y_2491_ = v___y_2525_;
v___y_2492_ = v___y_2534_;
v___y_2493_ = v___y_2535_;
v___y_2494_ = v___y_2528_;
v___y_2495_ = v___y_2536_;
v___y_2496_ = v___y_2529_;
v___y_2497_ = v___y_2537_;
v___y_2498_ = v___y_2524_;
v___y_2499_ = v___y_2533_;
v___y_2500_ = v___y_2526_;
v___y_2501_ = v___y_2527_;
goto v___jp_2485_;
}
else
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2546_; 
lean_dec_ref(v___y_2537_);
lean_dec_ref(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec_ref(v___y_2534_);
lean_dec_ref(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
v_a_2539_ = lean_ctor_get(v___x_2538_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2538_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2541_ = v___x_2538_;
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2538_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_a_2539_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
v___jp_2547_:
{
lean_object* v_extra_2554_; 
v_extra_2554_ = lean_ctor_get(v_params_2428_, 2);
lean_inc_ref(v_extra_2554_);
if (lean_obj_tag(v___y_2548_) == 2)
{
lean_object* v_config_2555_; lean_object* v_extensions_2556_; lean_object* v_extraInj_2557_; lean_object* v_extraFacts_2558_; lean_object* v_symPrios_2559_; lean_object* v_norm_2560_; lean_object* v_normProcs_2561_; lean_object* v_anchorRefs_x3f_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2617_; 
v_config_2555_ = lean_ctor_get(v_params_2428_, 0);
v_extensions_2556_ = lean_ctor_get(v_params_2428_, 1);
v_extraInj_2557_ = lean_ctor_get(v_params_2428_, 3);
v_extraFacts_2558_ = lean_ctor_get(v_params_2428_, 4);
v_symPrios_2559_ = lean_ctor_get(v_params_2428_, 5);
v_norm_2560_ = lean_ctor_get(v_params_2428_, 6);
v_normProcs_2561_ = lean_ctor_get(v_params_2428_, 7);
v_anchorRefs_x3f_2562_ = lean_ctor_get(v_params_2428_, 8);
v_isSharedCheck_2617_ = !lean_is_exclusive(v_params_2428_);
if (v_isSharedCheck_2617_ == 0)
{
lean_object* v_unused_2618_; 
v_unused_2618_ = lean_ctor_get(v_params_2428_, 2);
lean_dec(v_unused_2618_);
v___x_2564_ = v_params_2428_;
v_isShared_2565_ = v_isSharedCheck_2617_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_anchorRefs_x3f_2562_);
lean_inc(v_normProcs_2561_);
lean_inc(v_norm_2560_);
lean_inc(v_symPrios_2559_);
lean_inc(v_extraFacts_2558_);
lean_inc(v_extraInj_2557_);
lean_inc(v_extensions_2556_);
lean_inc(v_config_2555_);
lean_dec(v_params_2428_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2617_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v_size_2566_; uint8_t v_gen_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2616_; 
v_size_2566_ = lean_ctor_get(v_extra_2554_, 2);
v_gen_2567_ = lean_ctor_get_uint8(v___y_2548_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___y_2548_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2569_ = v___y_2548_;
v_isShared_2570_ = v_isSharedCheck_2616_;
goto v_resetjp_2568_;
}
else
{
lean_dec(v___y_2548_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2616_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; 
v___x_2571_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_2432_, v___y_2550_, v___y_2549_, v___y_2553_, v___y_2552_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v___x_2573_; 
lean_dec_ref_known(v___x_2571_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
v___x_2573_ = v___x_2569_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_2607_, 0, v_gen_2567_);
v___x_2573_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
lean_object* v___x_2574_; 
lean_inc_ref(v___y_2551_);
lean_inc(v___y_2552_);
lean_inc_ref(v___y_2553_);
lean_inc(v___y_2549_);
lean_inc_ref(v___y_2550_);
lean_inc(v_size_2566_);
v___x_2574_ = lean_apply_7(v___y_2551_, v___x_2573_, v_size_2566_, v___y_2550_, v___y_2549_, v___y_2553_, v___y_2552_, lean_box(0));
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___x_2574_, 1);
v___x_2576_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2576_, 0, v_gen_2567_);
lean_inc(v___y_2552_);
lean_inc(v___y_2549_);
lean_inc_ref(v___y_2550_);
lean_inc(v_size_2566_);
v___x_2577_ = lean_apply_7(v___y_2551_, v___x_2576_, v_size_2566_, v___y_2550_, v___y_2549_, v___y_2553_, v___y_2552_, lean_box(0));
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; lean_object* v___x_2580_; uint8_t v_isShared_2581_; uint8_t v_isSharedCheck_2590_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2580_ = v___x_2577_;
v_isShared_2581_ = v_isSharedCheck_2590_;
goto v_resetjp_2579_;
}
else
{
lean_inc(v_a_2578_);
lean_dec(v___x_2577_);
v___x_2580_ = lean_box(0);
v_isShared_2581_ = v_isSharedCheck_2590_;
goto v_resetjp_2579_;
}
v_resetjp_2579_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2585_; 
v___x_2582_ = l_Lean_PersistentArray_push___redArg(v_extra_2554_, v_a_2575_);
v___x_2583_ = l_Lean_PersistentArray_push___redArg(v___x_2582_, v_a_2578_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 2, v___x_2583_);
v___x_2585_ = v___x_2564_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_config_2555_);
lean_ctor_set(v_reuseFailAlloc_2589_, 1, v_extensions_2556_);
lean_ctor_set(v_reuseFailAlloc_2589_, 2, v___x_2583_);
lean_ctor_set(v_reuseFailAlloc_2589_, 3, v_extraInj_2557_);
lean_ctor_set(v_reuseFailAlloc_2589_, 4, v_extraFacts_2558_);
lean_ctor_set(v_reuseFailAlloc_2589_, 5, v_symPrios_2559_);
lean_ctor_set(v_reuseFailAlloc_2589_, 6, v_norm_2560_);
lean_ctor_set(v_reuseFailAlloc_2589_, 7, v_normProcs_2561_);
lean_ctor_set(v_reuseFailAlloc_2589_, 8, v_anchorRefs_x3f_2562_);
v___x_2585_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
lean_object* v___x_2587_; 
if (v_isShared_2581_ == 0)
{
lean_ctor_set(v___x_2580_, 0, v___x_2585_);
v___x_2587_ = v___x_2580_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2585_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
else
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
lean_dec(v_a_2575_);
lean_del_object(v___x_2564_);
lean_dec(v_anchorRefs_x3f_2562_);
lean_dec_ref(v_normProcs_2561_);
lean_dec_ref(v_norm_2560_);
lean_dec_ref(v_symPrios_2559_);
lean_dec_ref(v_extraFacts_2558_);
lean_dec_ref(v_extraInj_2557_);
lean_dec_ref(v_extensions_2556_);
lean_dec_ref(v_config_2555_);
lean_dec_ref(v_extra_2554_);
v_a_2591_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2577_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2577_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_del_object(v___x_2564_);
lean_dec(v_anchorRefs_x3f_2562_);
lean_dec_ref(v_normProcs_2561_);
lean_dec_ref(v_norm_2560_);
lean_dec_ref(v_symPrios_2559_);
lean_dec_ref(v_extraFacts_2558_);
lean_dec_ref(v_extraInj_2557_);
lean_dec_ref(v_extensions_2556_);
lean_dec_ref(v_config_2555_);
lean_dec_ref(v_extra_2554_);
lean_dec_ref(v___y_2553_);
lean_dec_ref(v___y_2551_);
v_a_2599_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2574_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2574_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
lean_del_object(v___x_2569_);
lean_del_object(v___x_2564_);
lean_dec(v_anchorRefs_x3f_2562_);
lean_dec_ref(v_normProcs_2561_);
lean_dec_ref(v_norm_2560_);
lean_dec_ref(v_symPrios_2559_);
lean_dec_ref(v_extraFacts_2558_);
lean_dec_ref(v_extraInj_2557_);
lean_dec_ref(v_extensions_2556_);
lean_dec_ref(v_config_2555_);
lean_dec_ref(v_extra_2554_);
lean_dec_ref(v___y_2553_);
lean_dec_ref(v___y_2551_);
v_a_2608_ = lean_ctor_get(v___x_2571_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v___x_2571_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2571_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
}
else
{
switch(lean_obj_tag(v___y_2548_))
{
case 0:
{
lean_object* v_config_2619_; lean_object* v_extensions_2620_; lean_object* v_extraInj_2621_; lean_object* v_extraFacts_2622_; lean_object* v_symPrios_2623_; lean_object* v_norm_2624_; lean_object* v_normProcs_2625_; lean_object* v_anchorRefs_x3f_2626_; lean_object* v_size_2627_; 
v_config_2619_ = lean_ctor_get(v_params_2428_, 0);
lean_inc_ref(v_config_2619_);
v_extensions_2620_ = lean_ctor_get(v_params_2428_, 1);
lean_inc_ref(v_extensions_2620_);
v_extraInj_2621_ = lean_ctor_get(v_params_2428_, 3);
lean_inc_ref(v_extraInj_2621_);
v_extraFacts_2622_ = lean_ctor_get(v_params_2428_, 4);
lean_inc_ref(v_extraFacts_2622_);
v_symPrios_2623_ = lean_ctor_get(v_params_2428_, 5);
lean_inc_ref(v_symPrios_2623_);
v_norm_2624_ = lean_ctor_get(v_params_2428_, 6);
lean_inc_ref(v_norm_2624_);
v_normProcs_2625_ = lean_ctor_get(v_params_2428_, 7);
lean_inc_ref(v_normProcs_2625_);
v_anchorRefs_x3f_2626_ = lean_ctor_get(v_params_2428_, 8);
lean_inc(v_anchorRefs_x3f_2626_);
lean_dec_ref(v_params_2428_);
v_size_2627_ = lean_ctor_get(v_extra_2554_, 2);
lean_inc(v_size_2627_);
v___y_2522_ = v___y_2548_;
v___y_2523_ = v_extensions_2620_;
v___y_2524_ = v___y_2550_;
v___y_2525_ = v___y_2551_;
v___y_2526_ = v___y_2553_;
v___y_2527_ = v___y_2552_;
v___y_2528_ = v_size_2627_;
v___y_2529_ = v_anchorRefs_x3f_2626_;
v___y_2530_ = v_config_2619_;
v___y_2531_ = v_normProcs_2625_;
v___y_2532_ = v_symPrios_2623_;
v___y_2533_ = v___y_2549_;
v___y_2534_ = v_norm_2624_;
v___y_2535_ = v_extra_2554_;
v___y_2536_ = v_extraFacts_2622_;
v___y_2537_ = v_extraInj_2621_;
goto v___jp_2521_;
}
case 1:
{
lean_object* v_config_2628_; lean_object* v_extensions_2629_; lean_object* v_extraInj_2630_; lean_object* v_extraFacts_2631_; lean_object* v_symPrios_2632_; lean_object* v_norm_2633_; lean_object* v_normProcs_2634_; lean_object* v_anchorRefs_x3f_2635_; lean_object* v_size_2636_; 
v_config_2628_ = lean_ctor_get(v_params_2428_, 0);
lean_inc_ref(v_config_2628_);
v_extensions_2629_ = lean_ctor_get(v_params_2428_, 1);
lean_inc_ref(v_extensions_2629_);
v_extraInj_2630_ = lean_ctor_get(v_params_2428_, 3);
lean_inc_ref(v_extraInj_2630_);
v_extraFacts_2631_ = lean_ctor_get(v_params_2428_, 4);
lean_inc_ref(v_extraFacts_2631_);
v_symPrios_2632_ = lean_ctor_get(v_params_2428_, 5);
lean_inc_ref(v_symPrios_2632_);
v_norm_2633_ = lean_ctor_get(v_params_2428_, 6);
lean_inc_ref(v_norm_2633_);
v_normProcs_2634_ = lean_ctor_get(v_params_2428_, 7);
lean_inc_ref(v_normProcs_2634_);
v_anchorRefs_x3f_2635_ = lean_ctor_get(v_params_2428_, 8);
lean_inc(v_anchorRefs_x3f_2635_);
lean_dec_ref(v_params_2428_);
v_size_2636_ = lean_ctor_get(v_extra_2554_, 2);
lean_inc(v_size_2636_);
v___y_2522_ = v___y_2548_;
v___y_2523_ = v_extensions_2629_;
v___y_2524_ = v___y_2550_;
v___y_2525_ = v___y_2551_;
v___y_2526_ = v___y_2553_;
v___y_2527_ = v___y_2552_;
v___y_2528_ = v_size_2636_;
v___y_2529_ = v_anchorRefs_x3f_2635_;
v___y_2530_ = v_config_2628_;
v___y_2531_ = v_normProcs_2634_;
v___y_2532_ = v_symPrios_2632_;
v___y_2533_ = v___y_2549_;
v___y_2534_ = v_norm_2633_;
v___y_2535_ = v_extra_2554_;
v___y_2536_ = v_extraFacts_2631_;
v___y_2537_ = v_extraInj_2630_;
goto v___jp_2521_;
}
default: 
{
lean_object* v_config_2637_; lean_object* v_extensions_2638_; lean_object* v_extraInj_2639_; lean_object* v_extraFacts_2640_; lean_object* v_symPrios_2641_; lean_object* v_norm_2642_; lean_object* v_normProcs_2643_; lean_object* v_anchorRefs_x3f_2644_; lean_object* v_size_2645_; 
v_config_2637_ = lean_ctor_get(v_params_2428_, 0);
lean_inc_ref(v_config_2637_);
v_extensions_2638_ = lean_ctor_get(v_params_2428_, 1);
lean_inc_ref(v_extensions_2638_);
v_extraInj_2639_ = lean_ctor_get(v_params_2428_, 3);
lean_inc_ref(v_extraInj_2639_);
v_extraFacts_2640_ = lean_ctor_get(v_params_2428_, 4);
lean_inc_ref(v_extraFacts_2640_);
v_symPrios_2641_ = lean_ctor_get(v_params_2428_, 5);
lean_inc_ref(v_symPrios_2641_);
v_norm_2642_ = lean_ctor_get(v_params_2428_, 6);
lean_inc_ref(v_norm_2642_);
v_normProcs_2643_ = lean_ctor_get(v_params_2428_, 7);
lean_inc_ref(v_normProcs_2643_);
v_anchorRefs_x3f_2644_ = lean_ctor_get(v_params_2428_, 8);
lean_inc(v_anchorRefs_x3f_2644_);
lean_dec_ref(v_params_2428_);
v_size_2645_ = lean_ctor_get(v_extra_2554_, 2);
lean_inc(v_size_2645_);
v___y_2486_ = v_config_2637_;
v___y_2487_ = v_normProcs_2643_;
v___y_2488_ = v___y_2548_;
v___y_2489_ = v_extensions_2638_;
v___y_2490_ = v_symPrios_2641_;
v___y_2491_ = v___y_2551_;
v___y_2492_ = v_norm_2642_;
v___y_2493_ = v_extra_2554_;
v___y_2494_ = v_size_2645_;
v___y_2495_ = v_extraFacts_2640_;
v___y_2496_ = v_anchorRefs_x3f_2644_;
v___y_2497_ = v_extraInj_2639_;
v___y_2498_ = v___y_2550_;
v___y_2499_ = v___y_2549_;
v___y_2500_ = v___y_2553_;
v___y_2501_ = v___y_2552_;
goto v___jp_2485_;
}
}
}
}
v___jp_2646_:
{
if (lean_obj_tag(v_mod_x3f_2430_) == 0)
{
v___y_2461_ = v___y_2647_;
v___y_2462_ = v___y_2649_;
v___y_2463_ = v___y_2655_;
v___y_2464_ = v___y_2654_;
v___y_2465_ = v___y_2653_;
v___y_2466_ = v___y_2650_;
v___y_2467_ = v___y_2648_;
v___y_2468_ = v___y_2652_;
v___y_2469_ = v___y_2651_;
goto v___jp_2460_;
}
else
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_params_2428_);
v___x_2656_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__3);
v___x_2657_ = l_Lean_indentExpr(v___y_2655_);
v___x_2658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2656_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
v___x_2659_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_2658_, v___y_2654_, v___y_2653_, v___y_2650_, v___y_2648_, v___y_2652_, v___y_2651_);
lean_dec_ref(v___y_2652_);
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2659_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2659_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2660_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
v___jp_2668_:
{
uint8_t v___x_2681_; 
v___x_2681_ = l_Lean_Expr_isForall(v___y_2674_);
if (v___x_2681_ == 0)
{
lean_dec_ref(v___y_2673_);
lean_dec(v___y_2671_);
v___y_2647_ = v___y_2670_;
v___y_2648_ = v___y_2678_;
v___y_2649_ = v___y_2672_;
v___y_2650_ = v___y_2677_;
v___y_2651_ = v___y_2680_;
v___y_2652_ = v___y_2679_;
v___y_2653_ = v___y_2676_;
v___y_2654_ = v___y_2675_;
v___y_2655_ = v___y_2674_;
goto v___jp_2646_;
}
else
{
if (v___y_2669_ == 0)
{
lean_dec_ref(v___y_2674_);
lean_dec_ref(v___y_2672_);
lean_dec_ref(v___y_2670_);
lean_dec(v_mod_x3f_2430_);
v___y_2548_ = v___y_2671_;
v___y_2549_ = v___y_2678_;
v___y_2550_ = v___y_2677_;
v___y_2551_ = v___y_2673_;
v___y_2552_ = v___y_2680_;
v___y_2553_ = v___y_2679_;
goto v___jp_2547_;
}
else
{
lean_object* v___x_2682_; lean_object* v___x_2683_; uint8_t v___x_2684_; 
v___x_2682_ = lean_array_get_size(v___y_2670_);
v___x_2683_ = lean_unsigned_to_nat(0u);
v___x_2684_ = lean_nat_dec_eq(v___x_2682_, v___x_2683_);
if (v___x_2684_ == 0)
{
lean_dec_ref(v___y_2674_);
lean_dec_ref(v___y_2672_);
lean_dec_ref(v___y_2670_);
lean_dec(v_mod_x3f_2430_);
v___y_2548_ = v___y_2671_;
v___y_2549_ = v___y_2678_;
v___y_2550_ = v___y_2677_;
v___y_2551_ = v___y_2673_;
v___y_2552_ = v___y_2680_;
v___y_2553_ = v___y_2679_;
goto v___jp_2547_;
}
else
{
if (lean_obj_tag(v_mod_x3f_2430_) == 0)
{
lean_dec_ref(v___y_2673_);
lean_dec(v___y_2671_);
v___y_2647_ = v___y_2670_;
v___y_2648_ = v___y_2678_;
v___y_2649_ = v___y_2672_;
v___y_2650_ = v___y_2677_;
v___y_2651_ = v___y_2680_;
v___y_2652_ = v___y_2679_;
v___y_2653_ = v___y_2676_;
v___y_2654_ = v___y_2675_;
v___y_2655_ = v___y_2674_;
goto v___jp_2646_;
}
else
{
lean_dec_ref_known(v_mod_x3f_2430_, 1);
lean_dec_ref(v___y_2674_);
lean_dec_ref(v___y_2672_);
lean_dec_ref(v___y_2670_);
v___y_2548_ = v___y_2671_;
v___y_2549_ = v___y_2678_;
v___y_2550_ = v___y_2677_;
v___y_2551_ = v___y_2673_;
v___y_2552_ = v___y_2680_;
v___y_2553_ = v___y_2679_;
goto v___jp_2547_;
}
}
}
}
}
v___jp_2685_:
{
lean_object* v___x_2693_; uint8_t v___x_2694_; lean_object* v___x_2695_; lean_object* v___f_2696_; lean_object* v___x_2697_; 
v___x_2693_ = lean_box(0);
v___x_2694_ = 1;
v___x_2695_ = lean_box(v___x_2694_);
lean_inc(v_p_2429_);
v___f_2696_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__1___boxed), 11, 4);
lean_closure_set(v___f_2696_, 0, v_p_2429_);
lean_closure_set(v___f_2696_, 1, v_term_2431_);
lean_closure_set(v___f_2696_, 2, v___x_2693_);
lean_closure_set(v___f_2696_, 3, v___x_2695_);
v___x_2697_ = l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(v___f_2696_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2745_; 
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2700_ = v___x_2697_;
v_isShared_2701_ = v_isSharedCheck_2745_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2697_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2745_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
if (lean_obj_tag(v_a_2698_) == 1)
{
lean_object* v_val_2702_; lean_object* v_snd_2703_; lean_object* v_fst_2704_; lean_object* v_fst_2705_; lean_object* v_snd_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___f_2709_; lean_object* v___x_2710_; 
lean_del_object(v___x_2700_);
v_val_2702_ = lean_ctor_get(v_a_2698_, 0);
lean_inc(v_val_2702_);
lean_dec_ref_known(v_a_2698_, 1);
v_snd_2703_ = lean_ctor_get(v_val_2702_, 1);
lean_inc(v_snd_2703_);
v_fst_2704_ = lean_ctor_get(v_val_2702_, 0);
lean_inc_n(v_fst_2704_, 2);
lean_dec(v_val_2702_);
v_fst_2705_ = lean_ctor_get(v_snd_2703_, 0);
lean_inc_n(v_fst_2705_, 3);
v_snd_2706_ = lean_ctor_get(v_snd_2703_, 1);
lean_inc(v_snd_2706_);
lean_dec(v_snd_2703_);
v___x_2707_ = lean_box(v___x_2694_);
v___x_2708_ = lean_box(v_minIndexable_2432_);
lean_inc_ref(v_params_2428_);
v___f_2709_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___lam__2___boxed), 13, 6);
lean_closure_set(v___f_2709_, 0, v_params_2428_);
lean_closure_set(v___f_2709_, 1, v_p_2429_);
lean_closure_set(v___f_2709_, 2, v_fst_2704_);
lean_closure_set(v___f_2709_, 3, v_fst_2705_);
lean_closure_set(v___f_2709_, 4, v___x_2707_);
lean_closure_set(v___f_2709_, 5, v___x_2708_);
lean_inc(v___y_2692_);
lean_inc_ref(v___y_2691_);
lean_inc(v___y_2690_);
lean_inc_ref(v___y_2689_);
v___x_2710_ = lean_infer_type(v_fst_2705_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v_a_2711_; lean_object* v___x_2712_; 
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
lean_inc_n(v_a_2711_, 2);
lean_dec_ref_known(v___x_2710_, 1);
v___x_2712_ = l_Lean_Meta_isProp(v_a_2711_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v_a_2713_; uint8_t v___x_2714_; 
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
lean_inc(v_a_2713_);
lean_dec_ref_known(v___x_2712_, 1);
v___x_2714_ = lean_unbox(v_a_2713_);
lean_dec(v_a_2713_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_dec(v_a_2711_);
lean_dec_ref(v___f_2709_);
lean_dec(v_snd_2706_);
lean_dec(v_fst_2705_);
lean_dec(v_fst_2704_);
lean_dec(v_kind_2686_);
lean_dec(v_mod_x3f_2430_);
lean_dec_ref(v_params_2428_);
v___x_2715_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__5);
v___x_2716_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_2715_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
lean_dec_ref(v___y_2691_);
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2716_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2716_);
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
else
{
uint8_t v___x_2725_; 
v___x_2725_ = lean_unbox(v_snd_2706_);
lean_dec(v_snd_2706_);
v___y_2669_ = v___x_2725_;
v___y_2670_ = v_fst_2704_;
v___y_2671_ = v_kind_2686_;
v___y_2672_ = v_fst_2705_;
v___y_2673_ = v___f_2709_;
v___y_2674_ = v_a_2711_;
v___y_2675_ = v___y_2687_;
v___y_2676_ = v___y_2688_;
v___y_2677_ = v___y_2689_;
v___y_2678_ = v___y_2690_;
v___y_2679_ = v___y_2691_;
v___y_2680_ = v___y_2692_;
goto v___jp_2668_;
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec(v_a_2711_);
lean_dec_ref(v___f_2709_);
lean_dec(v_snd_2706_);
lean_dec(v_fst_2705_);
lean_dec(v_fst_2704_);
lean_dec_ref(v___y_2691_);
lean_dec(v_kind_2686_);
lean_dec(v_mod_x3f_2430_);
lean_dec_ref(v_params_2428_);
v_a_2726_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2712_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2712_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec_ref(v___f_2709_);
lean_dec(v_snd_2706_);
lean_dec(v_fst_2705_);
lean_dec(v_fst_2704_);
lean_dec_ref(v___y_2691_);
lean_dec(v_kind_2686_);
lean_dec(v_mod_x3f_2430_);
lean_dec_ref(v_params_2428_);
v_a_2734_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2710_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2710_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
else
{
lean_object* v___x_2743_; 
lean_dec(v_a_2698_);
lean_dec_ref(v___y_2691_);
lean_dec(v_kind_2686_);
lean_dec(v_mod_x3f_2430_);
lean_dec(v_p_2429_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 0, v_params_2428_);
v___x_2743_ = v___x_2700_;
goto v_reusejp_2742_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v_params_2428_);
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
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
lean_dec_ref(v___y_2691_);
lean_dec(v_kind_2686_);
lean_dec(v_mod_x3f_2430_);
lean_dec(v_p_2429_);
lean_dec_ref(v_params_2428_);
v_a_2746_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2697_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2697_);
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
v___jp_2754_:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
v___x_2761_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2762_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_2761_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec_ref(v___y_2759_);
v_a_2763_ = lean_ctor_get(v___x_2762_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___x_2762_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___x_2762_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
v___jp_2771_:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
v___x_2778_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___closed__7);
v___x_2779_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_2778_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
lean_dec_ref(v___y_2776_);
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2779_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2779_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
v___jp_2788_:
{
lean_object* v___x_2795_; 
v___x_2795_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__1));
v_kind_2686_ = v___x_2795_;
v___y_2687_ = v___y_2789_;
v___y_2688_ = v___y_2790_;
v___y_2689_ = v___y_2791_;
v___y_2690_ = v___y_2792_;
v___y_2691_ = v___y_2793_;
v___y_2692_ = v___y_2794_;
goto v___jp_2685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam___boxed(lean_object* v_params_2845_, lean_object* v_p_2846_, lean_object* v_mod_x3f_2847_, lean_object* v_term_2848_, lean_object* v_minIndexable_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_){
_start:
{
uint8_t v_minIndexable_boxed_2857_; lean_object* v_res_2858_; 
v_minIndexable_boxed_2857_ = lean_unbox(v_minIndexable_2849_);
v_res_2858_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_params_2845_, v_p_2846_, v_mod_x3f_2847_, v_term_2848_, v_minIndexable_boxed_2857_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_);
lean_dec(v_a_2855_);
lean_dec_ref(v_a_2854_);
lean_dec(v_a_2853_);
lean_dec_ref(v_a_2852_);
lean_dec(v_a_2851_);
lean_dec_ref(v_a_2850_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(uint8_t v___x_2859_, uint8_t v___x_2860_, lean_object* v_as_2861_, size_t v_i_2862_, size_t v_stop_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v___x_2871_; 
v___x_2871_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___redArg(v___x_2859_, v___x_2860_, v_as_2861_, v_i_2862_, v_stop_2863_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1___boxed(lean_object* v___x_2872_, lean_object* v___x_2873_, lean_object* v_as_2874_, lean_object* v_i_2875_, lean_object* v_stop_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_){
_start:
{
uint8_t v___x_16199__boxed_2884_; uint8_t v___x_16200__boxed_2885_; size_t v_i_boxed_2886_; size_t v_stop_boxed_2887_; lean_object* v_res_2888_; 
v___x_16199__boxed_2884_ = lean_unbox(v___x_2872_);
v___x_16200__boxed_2885_ = lean_unbox(v___x_2873_);
v_i_boxed_2886_ = lean_unbox_usize(v_i_2875_);
lean_dec(v_i_2875_);
v_stop_boxed_2887_ = lean_unbox_usize(v_stop_2876_);
lean_dec(v_stop_2876_);
v_res_2888_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__1(v___x_16199__boxed_2884_, v___x_16200__boxed_2885_, v_as_2874_, v_i_boxed_2886_, v_stop_boxed_2887_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec_ref(v_as_2874_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2(lean_object* v_00_u03b1_2889_, lean_object* v_msg_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v___x_2898_; 
v___x_2898_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v_msg_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
return v___x_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___boxed(lean_object* v_00_u03b1_2899_, lean_object* v_msg_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_){
_start:
{
lean_object* v_res_2908_; 
v_res_2908_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2(v_00_u03b1_2899_, v_msg_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2905_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2(lean_object* v_msgData_2909_, lean_object* v_macroStack_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v___x_2918_; 
v___x_2918_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___redArg(v_msgData_2909_, v_macroStack_2910_, v___y_2915_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2___boxed(lean_object* v_msgData_2919_, lean_object* v_macroStack_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2_spec__2(v_msgData_2919_, v_macroStack_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(lean_object* v_params_2929_, lean_object* v_val_2930_, lean_object* v___x_2931_, uint8_t v___x_2932_, lean_object* v_____r_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v___x_2941_; lean_object* v_ext_2942_; lean_object* v_toEnvExtension_2943_; lean_object* v_env_2944_; lean_object* v_config_2945_; lean_object* v_extensions_2946_; lean_object* v_extra_2947_; lean_object* v_extraInj_2948_; lean_object* v_extraFacts_2949_; lean_object* v_symPrios_2950_; lean_object* v_norm_2951_; lean_object* v_normProcs_2952_; lean_object* v_anchorRefs_x3f_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2965_; 
v___x_2941_ = lean_st_ref_get(v___y_2939_);
v_ext_2942_ = lean_ctor_get(v_val_2930_, 1);
v_toEnvExtension_2943_ = lean_ctor_get(v_ext_2942_, 0);
v_env_2944_ = lean_ctor_get(v___x_2941_, 0);
lean_inc_ref(v_env_2944_);
lean_dec(v___x_2941_);
v_config_2945_ = lean_ctor_get(v_params_2929_, 0);
v_extensions_2946_ = lean_ctor_get(v_params_2929_, 1);
v_extra_2947_ = lean_ctor_get(v_params_2929_, 2);
v_extraInj_2948_ = lean_ctor_get(v_params_2929_, 3);
v_extraFacts_2949_ = lean_ctor_get(v_params_2929_, 4);
v_symPrios_2950_ = lean_ctor_get(v_params_2929_, 5);
v_norm_2951_ = lean_ctor_get(v_params_2929_, 6);
v_normProcs_2952_ = lean_ctor_get(v_params_2929_, 7);
v_anchorRefs_x3f_2953_ = lean_ctor_get(v_params_2929_, 8);
v_isSharedCheck_2965_ = !lean_is_exclusive(v_params_2929_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2955_ = v_params_2929_;
v_isShared_2956_ = v_isSharedCheck_2965_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_anchorRefs_x3f_2953_);
lean_inc(v_normProcs_2952_);
lean_inc(v_norm_2951_);
lean_inc(v_symPrios_2950_);
lean_inc(v_extraFacts_2949_);
lean_inc(v_extraInj_2948_);
lean_inc(v_extra_2947_);
lean_inc(v_extensions_2946_);
lean_inc(v_config_2945_);
lean_dec(v_params_2929_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2965_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v_asyncMode_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2961_; 
v_asyncMode_2957_ = lean_ctor_get(v_toEnvExtension_2943_, 2);
v___x_2958_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2931_, v_val_2930_, v_env_2944_, v_asyncMode_2957_, v___x_2932_);
v___x_2959_ = lean_array_push(v_extensions_2946_, v___x_2958_);
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 1, v___x_2959_);
v___x_2961_ = v___x_2955_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_config_2945_);
lean_ctor_set(v_reuseFailAlloc_2964_, 1, v___x_2959_);
lean_ctor_set(v_reuseFailAlloc_2964_, 2, v_extra_2947_);
lean_ctor_set(v_reuseFailAlloc_2964_, 3, v_extraInj_2948_);
lean_ctor_set(v_reuseFailAlloc_2964_, 4, v_extraFacts_2949_);
lean_ctor_set(v_reuseFailAlloc_2964_, 5, v_symPrios_2950_);
lean_ctor_set(v_reuseFailAlloc_2964_, 6, v_norm_2951_);
lean_ctor_set(v_reuseFailAlloc_2964_, 7, v_normProcs_2952_);
lean_ctor_set(v_reuseFailAlloc_2964_, 8, v_anchorRefs_x3f_2953_);
v___x_2961_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
v___x_2963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
return v___x_2963_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0___boxed(lean_object* v_params_2966_, lean_object* v_val_2967_, lean_object* v___x_2968_, lean_object* v___x_2969_, lean_object* v_____r_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
uint8_t v___x_31690__boxed_2978_; lean_object* v_res_2979_; 
v___x_31690__boxed_2978_ = lean_unbox(v___x_2969_);
v_res_2979_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(v_params_2966_, v_val_2967_, v___x_2968_, v___x_31690__boxed_2978_, v_____r_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_);
lean_dec(v___y_2976_);
lean_dec_ref(v___y_2975_);
lean_dec(v___y_2974_);
lean_dec_ref(v___y_2973_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec_ref(v___x_2968_);
lean_dec_ref(v_val_2967_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(lean_object* v_p_2980_, lean_object* v_id_2981_, uint8_t v_minIndexable_2982_, lean_object* v_as_x27_2983_, lean_object* v_b_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_){
_start:
{
if (lean_obj_tag(v_as_x27_2983_) == 0)
{
lean_object* v___x_2990_; 
lean_dec(v_id_2981_);
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v_b_2984_);
return v___x_2990_;
}
else
{
lean_object* v_head_2991_; lean_object* v_tail_2992_; lean_object* v_toCold_2993_; lean_object* v_currRecDepth_2994_; lean_object* v_ref_2995_; uint16_t v_optionFlags_2996_; uint8_t v_suppressElabErrors_2997_; uint8_t v_isRecordingDeps_2998_; uint8_t v___x_2999_; lean_object* v___x_3000_; lean_object* v_ref_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v_head_2991_ = lean_ctor_get(v_as_x27_2983_, 0);
v_tail_2992_ = lean_ctor_get(v_as_x27_2983_, 1);
v_toCold_2993_ = lean_ctor_get(v___y_2987_, 0);
v_currRecDepth_2994_ = lean_ctor_get(v___y_2987_, 1);
v_ref_2995_ = lean_ctor_get(v___y_2987_, 2);
v_optionFlags_2996_ = lean_ctor_get_uint16(v___y_2987_, sizeof(void*)*3);
v_suppressElabErrors_2997_ = lean_ctor_get_uint8(v___y_2987_, sizeof(void*)*3 + 2);
v_isRecordingDeps_2998_ = lean_ctor_get_uint8(v___y_2987_, sizeof(void*)*3 + 3);
v___x_2999_ = 0;
v___x_3000_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__1));
v_ref_3001_ = l_Lean_replaceRef(v_p_2980_, v_ref_2995_);
lean_inc(v_currRecDepth_2994_);
lean_inc_ref(v_toCold_2993_);
v___x_3002_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3002_, 0, v_toCold_2993_);
lean_ctor_set(v___x_3002_, 1, v_currRecDepth_2994_);
lean_ctor_set(v___x_3002_, 2, v_ref_3001_);
lean_ctor_set_uint16(v___x_3002_, sizeof(void*)*3, v_optionFlags_2996_);
lean_ctor_set_uint8(v___x_3002_, sizeof(void*)*3 + 2, v_suppressElabErrors_2997_);
lean_ctor_set_uint8(v___x_3002_, sizeof(void*)*3 + 3, v_isRecordingDeps_2998_);
lean_inc(v_head_2991_);
lean_inc(v_id_2981_);
v___x_3003_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_b_2984_, v_id_2981_, v_head_2991_, v___x_3000_, v_minIndexable_2982_, v___x_2999_, v___x_2999_, v___y_2985_, v___y_2986_, v___x_3002_, v___y_2988_);
lean_dec_ref_known(v___x_3002_, 3);
if (lean_obj_tag(v___x_3003_) == 0)
{
lean_object* v_a_3004_; 
v_a_3004_ = lean_ctor_get(v___x_3003_, 0);
lean_inc(v_a_3004_);
lean_dec_ref_known(v___x_3003_, 1);
v_as_x27_2983_ = v_tail_2992_;
v_b_2984_ = v_a_3004_;
goto _start;
}
else
{
lean_dec(v_id_2981_);
return v___x_3003_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg___boxed(lean_object* v_p_3006_, lean_object* v_id_3007_, lean_object* v_minIndexable_3008_, lean_object* v_as_x27_3009_, lean_object* v_b_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
uint8_t v_minIndexable_boxed_3016_; lean_object* v_res_3017_; 
v_minIndexable_boxed_3016_ = lean_unbox(v_minIndexable_3008_);
v_res_3017_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_3006_, v_id_3007_, v_minIndexable_boxed_3016_, v_as_x27_3009_, v_b_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
lean_dec(v_as_x27_3009_);
lean_dec(v_p_3006_);
return v_res_3017_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(lean_object* v_k_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_){
_start:
{
if (lean_obj_tag(v_a_3019_) == 0)
{
lean_object* v___x_3021_; 
v___x_3021_ = l_List_reverse___redArg(v_a_3020_);
return v___x_3021_;
}
else
{
lean_object* v_head_3022_; lean_object* v_tail_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3034_; 
v_head_3022_ = lean_ctor_get(v_a_3019_, 0);
v_tail_3023_ = lean_ctor_get(v_a_3019_, 1);
v_isSharedCheck_3034_ = !lean_is_exclusive(v_a_3019_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3025_ = v_a_3019_;
v_isShared_3026_ = v_isSharedCheck_3034_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_tail_3023_);
lean_inc(v_head_3022_);
lean_dec(v_a_3019_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3034_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v_kind_3027_; uint8_t v___x_3028_; 
v_kind_3027_ = lean_ctor_get(v_head_3022_, 6);
v___x_3028_ = l_Lean_Meta_Grind_instBEqEMatchTheoremKind_beq(v_kind_3027_, v_k_3018_);
if (v___x_3028_ == 0)
{
lean_del_object(v___x_3025_);
lean_dec(v_head_3022_);
v_a_3019_ = v_tail_3023_;
goto _start;
}
else
{
lean_object* v___x_3031_; 
if (v_isShared_3026_ == 0)
{
lean_ctor_set(v___x_3025_, 1, v_a_3020_);
v___x_3031_ = v___x_3025_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_head_3022_);
lean_ctor_set(v_reuseFailAlloc_3033_, 1, v_a_3020_);
v___x_3031_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
v_a_3019_ = v_tail_3023_;
v_a_3020_ = v___x_3031_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1___boxed(lean_object* v_k_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(v_k_3035_, v_a_3036_, v_a_3037_);
lean_dec(v_k_3035_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(lean_object* v_ref_3039_, lean_object* v_msg_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_){
_start:
{
lean_object* v_toCold_3048_; lean_object* v_currRecDepth_3049_; lean_object* v_ref_3050_; uint16_t v_optionFlags_3051_; uint8_t v_suppressElabErrors_3052_; uint8_t v_isRecordingDeps_3053_; lean_object* v_ref_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v_toCold_3048_ = lean_ctor_get(v___y_3045_, 0);
v_currRecDepth_3049_ = lean_ctor_get(v___y_3045_, 1);
v_ref_3050_ = lean_ctor_get(v___y_3045_, 2);
v_optionFlags_3051_ = lean_ctor_get_uint16(v___y_3045_, sizeof(void*)*3);
v_suppressElabErrors_3052_ = lean_ctor_get_uint8(v___y_3045_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3053_ = lean_ctor_get_uint8(v___y_3045_, sizeof(void*)*3 + 3);
v_ref_3054_ = l_Lean_replaceRef(v_ref_3039_, v_ref_3050_);
lean_inc(v_currRecDepth_3049_);
lean_inc_ref(v_toCold_3048_);
v___x_3055_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3055_, 0, v_toCold_3048_);
lean_ctor_set(v___x_3055_, 1, v_currRecDepth_3049_);
lean_ctor_set(v___x_3055_, 2, v_ref_3054_);
lean_ctor_set_uint16(v___x_3055_, sizeof(void*)*3, v_optionFlags_3051_);
lean_ctor_set_uint8(v___x_3055_, sizeof(void*)*3 + 2, v_suppressElabErrors_3052_);
lean_ctor_set_uint8(v___x_3055_, sizeof(void*)*3 + 3, v_isRecordingDeps_3053_);
v___x_3056_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v_msg_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___x_3055_, v___y_3046_);
lean_dec_ref_known(v___x_3055_, 3);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg___boxed(lean_object* v_ref_3057_, lean_object* v_msg_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_){
_start:
{
lean_object* v_res_3066_; 
v_res_3066_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_ref_3057_, v_msg_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
lean_dec(v___y_3064_);
lean_dec_ref(v___y_3063_);
lean_dec(v___y_3062_);
lean_dec_ref(v___y_3061_);
lean_dec(v___y_3060_);
lean_dec_ref(v___y_3059_);
lean_dec(v_ref_3057_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(lean_object* v_p_3067_, lean_object* v_id_3068_, uint8_t v_minIndexable_3069_, lean_object* v_as_x27_3070_, lean_object* v_b_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_){
_start:
{
if (lean_obj_tag(v_as_x27_3070_) == 0)
{
lean_object* v___x_3077_; 
lean_dec(v_id_3068_);
v___x_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3077_, 0, v_b_3071_);
return v___x_3077_;
}
else
{
lean_object* v_head_3078_; lean_object* v_tail_3079_; lean_object* v_toCold_3080_; lean_object* v_currRecDepth_3081_; lean_object* v_ref_3082_; uint16_t v_optionFlags_3083_; uint8_t v_suppressElabErrors_3084_; uint8_t v_isRecordingDeps_3085_; uint8_t v___x_3086_; uint8_t v___x_3087_; lean_object* v___x_3088_; lean_object* v_ref_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v_head_3078_ = lean_ctor_get(v_as_x27_3070_, 0);
v_tail_3079_ = lean_ctor_get(v_as_x27_3070_, 1);
v_toCold_3080_ = lean_ctor_get(v___y_3074_, 0);
v_currRecDepth_3081_ = lean_ctor_get(v___y_3074_, 1);
v_ref_3082_ = lean_ctor_get(v___y_3074_, 2);
v_optionFlags_3083_ = lean_ctor_get_uint16(v___y_3074_, sizeof(void*)*3);
v_suppressElabErrors_3084_ = lean_ctor_get_uint8(v___y_3074_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3085_ = lean_ctor_get_uint8(v___y_3074_, sizeof(void*)*3 + 3);
v___x_3086_ = 0;
v___x_3087_ = 1;
v___x_3088_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__1));
v_ref_3089_ = l_Lean_replaceRef(v_p_3067_, v_ref_3082_);
lean_inc(v_currRecDepth_3081_);
lean_inc_ref(v_toCold_3080_);
v___x_3090_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3090_, 0, v_toCold_3080_);
lean_ctor_set(v___x_3090_, 1, v_currRecDepth_3081_);
lean_ctor_set(v___x_3090_, 2, v_ref_3089_);
lean_ctor_set_uint16(v___x_3090_, sizeof(void*)*3, v_optionFlags_3083_);
lean_ctor_set_uint8(v___x_3090_, sizeof(void*)*3 + 2, v_suppressElabErrors_3084_);
lean_ctor_set_uint8(v___x_3090_, sizeof(void*)*3 + 3, v_isRecordingDeps_3085_);
lean_inc(v_head_3078_);
lean_inc(v_id_3068_);
v___x_3091_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_b_3071_, v_id_3068_, v_head_3078_, v___x_3088_, v_minIndexable_3069_, v___x_3086_, v___x_3087_, v___y_3072_, v___y_3073_, v___x_3090_, v___y_3075_);
lean_dec_ref_known(v___x_3090_, 3);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_object* v_a_3092_; 
v_a_3092_ = lean_ctor_get(v___x_3091_, 0);
lean_inc(v_a_3092_);
lean_dec_ref_known(v___x_3091_, 1);
v_as_x27_3070_ = v_tail_3079_;
v_b_3071_ = v_a_3092_;
goto _start;
}
else
{
lean_dec(v_id_3068_);
return v___x_3091_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg___boxed(lean_object* v_p_3094_, lean_object* v_id_3095_, lean_object* v_minIndexable_3096_, lean_object* v_as_x27_3097_, lean_object* v_b_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_){
_start:
{
uint8_t v_minIndexable_boxed_3104_; lean_object* v_res_3105_; 
v_minIndexable_boxed_3104_ = lean_unbox(v_minIndexable_3096_);
v_res_3105_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_3094_, v_id_3095_, v_minIndexable_boxed_3104_, v_as_x27_3097_, v_b_3098_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec(v_as_x27_3097_);
lean_dec(v_p_3094_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16(lean_object* v_x_3106_){
_start:
{
if (lean_obj_tag(v_x_3106_) == 0)
{
lean_object* v___x_3107_; 
v___x_3107_ = lean_box(0);
return v___x_3107_;
}
else
{
lean_object* v_head_3108_; lean_object* v_tail_3109_; lean_object* v_fst_3110_; uint8_t v___x_3111_; 
v_head_3108_ = lean_ctor_get(v_x_3106_, 0);
v_tail_3109_ = lean_ctor_get(v_x_3106_, 1);
v_fst_3110_ = lean_ctor_get(v_head_3108_, 0);
v___x_3111_ = l_Lean_isPrivateName(v_fst_3110_);
if (v___x_3111_ == 0)
{
v_x_3106_ = v_tail_3109_;
goto _start;
}
else
{
lean_object* v___x_3113_; 
lean_inc(v_head_3108_);
v___x_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3113_, 0, v_head_3108_);
return v___x_3113_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16___boxed(lean_object* v_x_3114_){
_start:
{
lean_object* v_res_3115_; 
v_res_3115_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16(v_x_3114_);
lean_dec(v_x_3114_);
return v_res_3115_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(lean_object* v_ref_3116_, lean_object* v_msgData_3117_, uint8_t v_severity_3118_, uint8_t v_isSilent_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
uint8_t v___y_3126_; uint8_t v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v_toCold_3133_; lean_object* v___y_3134_; lean_object* v___y_3163_; lean_object* v___y_3164_; uint8_t v___y_3165_; uint8_t v___y_3166_; lean_object* v___y_3167_; uint8_t v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3190_; lean_object* v___y_3191_; uint8_t v___y_3192_; lean_object* v___y_3193_; uint8_t v___y_3194_; uint8_t v___y_3195_; lean_object* v___y_3196_; uint8_t v___y_3200_; uint8_t v___y_3201_; uint8_t v___x_3211_; uint8_t v___y_3213_; uint8_t v___x_3219_; 
v___x_3211_ = 2;
v___x_3219_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3118_, v___x_3211_);
if (v___x_3219_ == 0)
{
v___y_3213_ = v___x_3219_;
goto v___jp_3212_;
}
else
{
uint8_t v___x_3220_; 
lean_inc_ref(v_msgData_3117_);
v___x_3220_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3117_);
if (v___x_3220_ == 0)
{
v___y_3213_ = v___x_3220_;
goto v___jp_3212_;
}
else
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
lean_dec_ref(v_msgData_3117_);
v___x_3221_ = lean_box(0);
v___x_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
return v___x_3222_;
}
}
v___jp_3125_:
{
lean_object* v_currNamespace_3135_; lean_object* v_openDecls_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v_env_3141_; lean_object* v_nextMacroScope_3142_; lean_object* v_ngen_3143_; lean_object* v_auxDeclNGen_3144_; lean_object* v_traceState_3145_; lean_object* v_cache_3146_; lean_object* v_recordedDeps_3147_; lean_object* v_messages_3148_; lean_object* v_infoState_3149_; lean_object* v_snapshotTasks_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3161_; 
v_currNamespace_3135_ = lean_ctor_get(v_toCold_3133_, 4);
v_openDecls_3136_ = lean_ctor_get(v_toCold_3133_, 5);
lean_inc(v_openDecls_3136_);
lean_inc(v_currNamespace_3135_);
v___x_3137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3137_, 0, v_currNamespace_3135_);
lean_ctor_set(v___x_3137_, 1, v_openDecls_3136_);
v___x_3138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
lean_ctor_set(v___x_3138_, 1, v___y_3128_);
lean_inc_ref(v___y_3131_);
lean_inc_ref(v___y_3130_);
v___x_3139_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3139_, 0, v___y_3130_);
lean_ctor_set(v___x_3139_, 1, v___y_3129_);
lean_ctor_set(v___x_3139_, 2, v___y_3132_);
lean_ctor_set(v___x_3139_, 3, v___y_3131_);
lean_ctor_set(v___x_3139_, 4, v___x_3138_);
lean_ctor_set_uint8(v___x_3139_, sizeof(void*)*5, v___y_3127_);
lean_ctor_set_uint8(v___x_3139_, sizeof(void*)*5 + 1, v___y_3126_);
lean_ctor_set_uint8(v___x_3139_, sizeof(void*)*5 + 2, v_isSilent_3119_);
v___x_3140_ = lean_st_ref_take(v___y_3134_);
v_env_3141_ = lean_ctor_get(v___x_3140_, 0);
v_nextMacroScope_3142_ = lean_ctor_get(v___x_3140_, 1);
v_ngen_3143_ = lean_ctor_get(v___x_3140_, 2);
v_auxDeclNGen_3144_ = lean_ctor_get(v___x_3140_, 3);
v_traceState_3145_ = lean_ctor_get(v___x_3140_, 4);
v_cache_3146_ = lean_ctor_get(v___x_3140_, 5);
v_recordedDeps_3147_ = lean_ctor_get(v___x_3140_, 6);
v_messages_3148_ = lean_ctor_get(v___x_3140_, 7);
v_infoState_3149_ = lean_ctor_get(v___x_3140_, 8);
v_snapshotTasks_3150_ = lean_ctor_get(v___x_3140_, 9);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3152_ = v___x_3140_;
v_isShared_3153_ = v_isSharedCheck_3161_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_snapshotTasks_3150_);
lean_inc(v_infoState_3149_);
lean_inc(v_messages_3148_);
lean_inc(v_recordedDeps_3147_);
lean_inc(v_cache_3146_);
lean_inc(v_traceState_3145_);
lean_inc(v_auxDeclNGen_3144_);
lean_inc(v_ngen_3143_);
lean_inc(v_nextMacroScope_3142_);
lean_inc(v_env_3141_);
lean_dec(v___x_3140_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3161_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3157_; 
v___x_3154_ = lean_box(0);
v___x_3155_ = l_Lean_MessageLog_add(v___x_3139_, v_messages_3148_);
if (v_isShared_3153_ == 0)
{
lean_ctor_set(v___x_3152_, 7, v___x_3155_);
v___x_3157_ = v___x_3152_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_env_3141_);
lean_ctor_set(v_reuseFailAlloc_3160_, 1, v_nextMacroScope_3142_);
lean_ctor_set(v_reuseFailAlloc_3160_, 2, v_ngen_3143_);
lean_ctor_set(v_reuseFailAlloc_3160_, 3, v_auxDeclNGen_3144_);
lean_ctor_set(v_reuseFailAlloc_3160_, 4, v_traceState_3145_);
lean_ctor_set(v_reuseFailAlloc_3160_, 5, v_cache_3146_);
lean_ctor_set(v_reuseFailAlloc_3160_, 6, v_recordedDeps_3147_);
lean_ctor_set(v_reuseFailAlloc_3160_, 7, v___x_3155_);
lean_ctor_set(v_reuseFailAlloc_3160_, 8, v_infoState_3149_);
lean_ctor_set(v_reuseFailAlloc_3160_, 9, v_snapshotTasks_3150_);
v___x_3157_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3158_ = lean_st_ref_put(v___y_3134_, v___x_3157_);
v___x_3159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3154_);
return v___x_3159_;
}
}
}
v___jp_3162_:
{
lean_object* v_fileName_3171_; lean_object* v_fileMap_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3188_; 
v_fileName_3171_ = lean_ctor_get(v___y_3169_, 0);
v_fileMap_3172_ = lean_ctor_get(v___y_3169_, 1);
v___x_3173_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3117_);
v___x_3174_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__4(v___x_3173_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_);
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3177_ = v___x_3174_;
v_isShared_3178_ = v_isSharedCheck_3188_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3174_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3188_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
lean_inc_ref_n(v_fileMap_3172_, 2);
v___x_3179_ = l_Lean_FileMap_toPosition(v_fileMap_3172_, v___y_3167_);
lean_dec(v___y_3167_);
v___x_3180_ = l_Lean_FileMap_toPosition(v_fileMap_3172_, v___y_3170_);
lean_dec(v___y_3170_);
v___x_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3180_);
v___x_3182_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___closed__0));
if (v___y_3168_ == 0)
{
lean_del_object(v___x_3177_);
lean_dec_ref(v___y_3163_);
v___y_3126_ = v___y_3166_;
v___y_3127_ = v___y_3165_;
v___y_3128_ = v_a_3175_;
v___y_3129_ = v___x_3179_;
v___y_3130_ = v_fileName_3171_;
v___y_3131_ = v___x_3182_;
v___y_3132_ = v___x_3181_;
v_toCold_3133_ = v___y_3164_;
v___y_3134_ = v___y_3123_;
goto v___jp_3125_;
}
else
{
uint8_t v___x_3183_; 
lean_inc(v_a_3175_);
v___x_3183_ = l_Lean_MessageData_hasTag(v___y_3163_, v_a_3175_);
if (v___x_3183_ == 0)
{
lean_object* v___x_3184_; lean_object* v___x_3186_; 
lean_dec_ref_known(v___x_3181_, 1);
lean_dec_ref(v___x_3179_);
lean_dec(v_a_3175_);
v___x_3184_ = lean_box(0);
if (v_isShared_3178_ == 0)
{
lean_ctor_set(v___x_3177_, 0, v___x_3184_);
v___x_3186_ = v___x_3177_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v___x_3184_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
return v___x_3186_;
}
}
else
{
lean_del_object(v___x_3177_);
v___y_3126_ = v___y_3166_;
v___y_3127_ = v___y_3165_;
v___y_3128_ = v_a_3175_;
v___y_3129_ = v___x_3179_;
v___y_3130_ = v_fileName_3171_;
v___y_3131_ = v___x_3182_;
v___y_3132_ = v___x_3181_;
v_toCold_3133_ = v___y_3164_;
v___y_3134_ = v___y_3123_;
goto v___jp_3125_;
}
}
}
}
v___jp_3189_:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_Lean_Syntax_getTailPos_x3f(v___y_3193_, v___y_3195_);
lean_dec(v___y_3193_);
if (lean_obj_tag(v___x_3197_) == 0)
{
lean_inc(v___y_3196_);
v___y_3163_ = v___y_3190_;
v___y_3164_ = v___y_3191_;
v___y_3165_ = v___y_3195_;
v___y_3166_ = v___y_3194_;
v___y_3167_ = v___y_3196_;
v___y_3168_ = v___y_3192_;
v___y_3169_ = v___y_3191_;
v___y_3170_ = v___y_3196_;
goto v___jp_3162_;
}
else
{
lean_object* v_val_3198_; 
v_val_3198_ = lean_ctor_get(v___x_3197_, 0);
lean_inc(v_val_3198_);
lean_dec_ref_known(v___x_3197_, 1);
v___y_3163_ = v___y_3190_;
v___y_3164_ = v___y_3191_;
v___y_3165_ = v___y_3195_;
v___y_3166_ = v___y_3194_;
v___y_3167_ = v___y_3196_;
v___y_3168_ = v___y_3192_;
v___y_3169_ = v___y_3191_;
v___y_3170_ = v_val_3198_;
goto v___jp_3162_;
}
}
v___jp_3199_:
{
lean_object* v_toCold_3202_; lean_object* v_ref_3203_; uint8_t v_suppressElabErrors_3204_; lean_object* v___x_3205_; lean_object* v___f_3206_; lean_object* v_ref_3207_; lean_object* v___x_3208_; 
v_toCold_3202_ = lean_ctor_get(v___y_3122_, 0);
v_ref_3203_ = lean_ctor_get(v___y_3122_, 2);
v_suppressElabErrors_3204_ = lean_ctor_get_uint8(v___y_3122_, sizeof(void*)*3 + 2);
v___x_3205_ = lean_box(v_suppressElabErrors_3204_);
v___f_3206_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3206_, 0, v___x_3205_);
v_ref_3207_ = l_Lean_replaceRef(v_ref_3116_, v_ref_3203_);
v___x_3208_ = l_Lean_Syntax_getPos_x3f(v_ref_3207_, v___y_3200_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v___x_3209_; 
v___x_3209_ = lean_unsigned_to_nat(0u);
v___y_3190_ = v___f_3206_;
v___y_3191_ = v_toCold_3202_;
v___y_3192_ = v_suppressElabErrors_3204_;
v___y_3193_ = v_ref_3207_;
v___y_3194_ = v___y_3201_;
v___y_3195_ = v___y_3200_;
v___y_3196_ = v___x_3209_;
goto v___jp_3189_;
}
else
{
lean_object* v_val_3210_; 
v_val_3210_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_val_3210_);
lean_dec_ref_known(v___x_3208_, 1);
v___y_3190_ = v___f_3206_;
v___y_3191_ = v_toCold_3202_;
v___y_3192_ = v_suppressElabErrors_3204_;
v___y_3193_ = v_ref_3207_;
v___y_3194_ = v___y_3201_;
v___y_3195_ = v___y_3200_;
v___y_3196_ = v_val_3210_;
goto v___jp_3189_;
}
}
v___jp_3212_:
{
uint8_t v___x_3214_; uint8_t v___x_3215_; 
v___x_3214_ = 1;
v___x_3215_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3118_, v___x_3214_);
if (v___x_3215_ == 0)
{
v___y_3200_ = v___y_3213_;
v___y_3201_ = v_severity_3118_;
goto v___jp_3199_;
}
else
{
lean_object* v___x_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v___x_3216_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3122_);
v___x_3217_ = l_Lean_warningAsError;
v___x_3218_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v___x_3216_, v___x_3217_);
lean_dec_ref(v___x_3216_);
if (v___x_3218_ == 0)
{
v___y_3200_ = v___y_3213_;
v___y_3201_ = v_severity_3118_;
goto v___jp_3199_;
}
else
{
v___y_3200_ = v___y_3213_;
v___y_3201_ = v___x_3211_;
goto v___jp_3199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg___boxed(lean_object* v_ref_3223_, lean_object* v_msgData_3224_, lean_object* v_severity_3225_, lean_object* v_isSilent_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_){
_start:
{
uint8_t v_severity_boxed_3232_; uint8_t v_isSilent_boxed_3233_; lean_object* v_res_3234_; 
v_severity_boxed_3232_ = lean_unbox(v_severity_3225_);
v_isSilent_boxed_3233_ = lean_unbox(v_isSilent_3226_);
v_res_3234_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(v_ref_3223_, v_msgData_3224_, v_severity_boxed_3232_, v_isSilent_boxed_3233_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_);
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v_ref_3223_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21(lean_object* v_msgData_3235_, uint8_t v_severity_3236_, uint8_t v_isSilent_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_){
_start:
{
lean_object* v_ref_3245_; lean_object* v___x_3246_; 
v_ref_3245_ = lean_ctor_get(v___y_3242_, 2);
v___x_3246_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(v_ref_3245_, v_msgData_3235_, v_severity_3236_, v_isSilent_3237_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
return v___x_3246_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21___boxed(lean_object* v_msgData_3247_, lean_object* v_severity_3248_, lean_object* v_isSilent_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_){
_start:
{
uint8_t v_severity_boxed_3257_; uint8_t v_isSilent_boxed_3258_; lean_object* v_res_3259_; 
v_severity_boxed_3257_ = lean_unbox(v_severity_3248_);
v_isSilent_boxed_3258_ = lean_unbox(v_isSilent_3249_);
v_res_3259_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21(v_msgData_3247_, v_severity_boxed_3257_, v_isSilent_boxed_3258_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_);
lean_dec(v___y_3255_);
lean_dec_ref(v___y_3254_);
lean_dec(v___y_3253_);
lean_dec_ref(v___y_3252_);
lean_dec(v___y_3251_);
lean_dec_ref(v___y_3250_);
return v_res_3259_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19(lean_object* v_msgData_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_){
_start:
{
uint8_t v___x_3268_; uint8_t v___x_3269_; lean_object* v___x_3270_; 
v___x_3268_ = 1;
v___x_3269_ = 0;
v___x_3270_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21(v_msgData_3260_, v___x_3268_, v___x_3269_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19___boxed(lean_object* v_msgData_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19(v_msgData_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(lean_object* v_opt_3280_, lean_object* v___y_3281_){
_start:
{
lean_object* v___x_3283_; uint8_t v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3283_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3281_);
v___x_3284_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg_spec__0_spec__0_spec__1_spec__5(v___x_3283_, v_opt_3280_);
lean_dec_ref(v___x_3283_);
v___x_3285_ = lean_box(v___x_3284_);
v___x_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3285_);
return v___x_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg___boxed(lean_object* v_opt_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v_res_3290_; 
v_res_3290_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(v_opt_3287_, v___y_3288_);
lean_dec_ref(v___y_3288_);
lean_dec_ref(v_opt_3287_);
return v_res_3290_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1(void){
_start:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3292_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__0));
v___x_3293_ = l_Lean_stringToMessageData(v___x_3292_);
return v___x_3293_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3(void){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__2));
v___x_3296_ = l_Lean_stringToMessageData(v___x_3295_);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17(lean_object* v_id_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_){
_start:
{
lean_object* v___x_3305_; lean_object* v_env_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3328_; 
v___x_3305_ = lean_st_ref_get(v___y_3303_);
v_env_3306_ = lean_ctor_get(v___x_3305_, 0);
lean_inc_ref(v_env_3306_);
lean_dec(v___x_3305_);
v___x_3307_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_3308_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(v___x_3307_, v___y_3302_);
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3311_ = v___x_3308_;
v_isShared_3312_ = v_isSharedCheck_3328_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3328_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
uint8_t v_isExporting_3318_; 
v_isExporting_3318_ = lean_ctor_get_uint8(v_env_3306_, sizeof(void*)*13);
lean_dec_ref(v_env_3306_);
if (v_isExporting_3318_ == 0)
{
lean_dec(v_a_3309_);
lean_dec(v_id_3297_);
goto v___jp_3313_;
}
else
{
uint8_t v___x_3319_; 
v___x_3319_ = l_Lean_isPrivateName(v_id_3297_);
if (v___x_3319_ == 0)
{
lean_dec(v_a_3309_);
lean_dec(v_id_3297_);
goto v___jp_3313_;
}
else
{
uint8_t v___x_3320_; 
v___x_3320_ = lean_unbox(v_a_3309_);
lean_dec(v_a_3309_);
if (v___x_3320_ == 0)
{
lean_dec(v_id_3297_);
goto v___jp_3313_;
}
else
{
lean_object* v___x_3321_; uint8_t v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; 
lean_del_object(v___x_3311_);
v___x_3321_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__1);
v___x_3322_ = 0;
v___x_3323_ = l_Lean_MessageData_ofConstName(v_id_3297_, v___x_3322_);
v___x_3324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3321_);
lean_ctor_set(v___x_3324_, 1, v___x_3323_);
v___x_3325_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___closed__3);
v___x_3326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3324_);
lean_ctor_set(v___x_3326_, 1, v___x_3325_);
v___x_3327_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19(v___x_3326_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_);
return v___x_3327_;
}
}
}
v___jp_3313_:
{
lean_object* v___x_3314_; lean_object* v___x_3316_; 
v___x_3314_ = lean_box(0);
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 0, v___x_3314_);
v___x_3316_ = v___x_3311_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___x_3314_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17___boxed(lean_object* v_id_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17(v_id_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec(v___y_3333_);
lean_dec_ref(v___y_3332_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13(lean_object* v_id_3338_, uint8_t v_enableLog_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
lean_object* v___x_3347_; lean_object* v_toCold_3348_; lean_object* v_env_3349_; lean_object* v_currNamespace_3350_; lean_object* v_openDecls_3351_; lean_object* v___x_3352_; lean_object* v_res_3353_; lean_object* v___x_3354_; 
v___x_3347_ = lean_st_ref_get(v___y_3345_);
v_toCold_3348_ = lean_ctor_get(v___y_3344_, 0);
v_env_3349_ = lean_ctor_get(v___x_3347_, 0);
lean_inc_ref(v_env_3349_);
lean_dec(v___x_3347_);
v_currNamespace_3350_ = lean_ctor_get(v_toCold_3348_, 4);
v_openDecls_3351_ = lean_ctor_get(v_toCold_3348_, 5);
v___x_3352_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_3344_);
lean_inc(v_openDecls_3351_);
lean_inc(v_currNamespace_3350_);
v_res_3353_ = l_Lean_ResolveName_resolveGlobalName(v_env_3349_, v___x_3352_, v_currNamespace_3350_, v_openDecls_3351_, v_id_3338_);
lean_dec_ref(v___x_3352_);
v___x_3354_ = lean_st_ref_get(v___y_3345_);
if (v_enableLog_3339_ == 0)
{
lean_object* v___x_3355_; 
lean_dec(v___x_3354_);
v___x_3355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3355_, 0, v_res_3353_);
return v___x_3355_;
}
else
{
lean_object* v_env_3356_; uint8_t v_isExporting_3357_; 
v_env_3356_ = lean_ctor_get(v___x_3354_, 0);
lean_inc_ref(v_env_3356_);
lean_dec(v___x_3354_);
v_isExporting_3357_ = lean_ctor_get_uint8(v_env_3356_, sizeof(void*)*13);
lean_dec_ref(v_env_3356_);
if (v_isExporting_3357_ == 0)
{
lean_object* v___x_3358_; 
v___x_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3358_, 0, v_res_3353_);
return v___x_3358_;
}
else
{
lean_object* v___x_3359_; 
v___x_3359_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__16(v_res_3353_);
if (lean_obj_tag(v___x_3359_) == 1)
{
lean_object* v_val_3360_; lean_object* v_fst_3361_; lean_object* v___x_3362_; 
v_val_3360_ = lean_ctor_get(v___x_3359_, 0);
lean_inc(v_val_3360_);
lean_dec_ref_known(v___x_3359_, 1);
v_fst_3361_ = lean_ctor_get(v_val_3360_, 0);
lean_inc(v_fst_3361_);
lean_dec(v_val_3360_);
v___x_3362_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17(v_fst_3361_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3369_ == 0)
{
lean_object* v_unused_3370_; 
v_unused_3370_ = lean_ctor_get(v___x_3362_, 0);
lean_dec(v_unused_3370_);
v___x_3364_ = v___x_3362_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_dec(v___x_3362_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
lean_ctor_set(v___x_3364_, 0, v_res_3353_);
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_res_3353_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_dec(v_res_3353_);
v_a_3371_ = lean_ctor_get(v___x_3362_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3362_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3362_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
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
else
{
lean_object* v___x_3379_; 
lean_dec(v___x_3359_);
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v_res_3353_);
return v___x_3379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13___boxed(lean_object* v_id_3380_, lean_object* v_enableLog_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_){
_start:
{
uint8_t v_enableLog_boxed_3389_; lean_object* v_res_3390_; 
v_enableLog_boxed_3389_ = lean_unbox(v_enableLog_3381_);
v_res_3390_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13(v_id_3380_, v_enableLog_boxed_3389_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__14(lean_object* v_a_3391_, lean_object* v_a_3392_){
_start:
{
if (lean_obj_tag(v_a_3391_) == 0)
{
lean_object* v___x_3393_; 
v___x_3393_ = l_List_reverse___redArg(v_a_3392_);
return v___x_3393_;
}
else
{
lean_object* v_head_3394_; lean_object* v_tail_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3406_; 
v_head_3394_ = lean_ctor_get(v_a_3391_, 0);
v_tail_3395_ = lean_ctor_get(v_a_3391_, 1);
v_isSharedCheck_3406_ = !lean_is_exclusive(v_a_3391_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3397_ = v_a_3391_;
v_isShared_3398_ = v_isSharedCheck_3406_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_tail_3395_);
lean_inc(v_head_3394_);
lean_dec(v_a_3391_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3406_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v_snd_3399_; uint8_t v___x_3400_; 
v_snd_3399_ = lean_ctor_get(v_head_3394_, 1);
v___x_3400_ = l_List_isEmpty___redArg(v_snd_3399_);
if (v___x_3400_ == 0)
{
lean_del_object(v___x_3397_);
lean_dec(v_head_3394_);
v_a_3391_ = v_tail_3395_;
goto _start;
}
else
{
lean_object* v___x_3403_; 
if (v_isShared_3398_ == 0)
{
lean_ctor_set(v___x_3397_, 1, v_a_3392_);
v___x_3403_ = v___x_3397_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_head_3394_);
lean_ctor_set(v_reuseFailAlloc_3405_, 1, v_a_3392_);
v___x_3403_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
v_a_3391_ = v_tail_3395_;
v_a_3392_ = v___x_3403_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8(lean_object* v_view_3407_, lean_object* v_findLocalDecl_x3f_3408_, lean_object* v_n_3409_, lean_object* v_projs_3410_, uint8_t v_globalDeclFound_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
lean_object* v___y_3420_; lean_object* v___y_3421_; uint8_t v_globalDeclFoundNext_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v_imported_3431_; lean_object* v_ctx_3432_; lean_object* v_scopes_3433_; lean_object* v_givenNameView_3434_; uint8_t v___y_3436_; 
v_imported_3431_ = lean_ctor_get(v_view_3407_, 1);
v_ctx_3432_ = lean_ctor_get(v_view_3407_, 2);
v_scopes_3433_ = lean_ctor_get(v_view_3407_, 3);
lean_inc(v_scopes_3433_);
lean_inc(v_ctx_3432_);
lean_inc(v_imported_3431_);
lean_inc(v_n_3409_);
v_givenNameView_3434_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_givenNameView_3434_, 0, v_n_3409_);
lean_ctor_set(v_givenNameView_3434_, 1, v_imported_3431_);
lean_ctor_set(v_givenNameView_3434_, 2, v_ctx_3432_);
lean_ctor_set(v_givenNameView_3434_, 3, v_scopes_3433_);
if (v_globalDeclFound_3411_ == 0)
{
v___y_3436_ = v_globalDeclFound_3411_;
goto v___jp_3435_;
}
else
{
uint8_t v___x_3471_; 
v___x_3471_ = l_List_isEmpty___redArg(v_projs_3410_);
if (v___x_3471_ == 0)
{
v___y_3436_ = v_globalDeclFound_3411_;
goto v___jp_3435_;
}
else
{
uint8_t v___x_3472_; 
v___x_3472_ = 0;
v___y_3436_ = v___x_3472_;
goto v___jp_3435_;
}
}
v___jp_3419_:
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3429_, 0, v___y_3421_);
lean_ctor_set(v___x_3429_, 1, v_projs_3410_);
v_n_3409_ = v___y_3420_;
v_projs_3410_ = v___x_3429_;
v_globalDeclFound_3411_ = v_globalDeclFoundNext_3422_;
v___y_3412_ = v___y_3423_;
v___y_3413_ = v___y_3424_;
v___y_3414_ = v___y_3425_;
v___y_3415_ = v___y_3426_;
v___y_3416_ = v___y_3427_;
v___y_3417_ = v___y_3428_;
goto _start;
}
v___jp_3435_:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3437_ = lean_box(v___y_3436_);
lean_inc_ref(v_findLocalDecl_x3f_3408_);
lean_inc_ref(v_givenNameView_3434_);
v___x_3438_ = lean_apply_2(v_findLocalDecl_x3f_3408_, v_givenNameView_3434_, v___x_3437_);
if (lean_obj_tag(v___x_3438_) == 0)
{
if (lean_obj_tag(v_n_3409_) == 1)
{
if (v_globalDeclFound_3411_ == 0)
{
lean_object* v_pre_3439_; lean_object* v_str_3440_; uint8_t v_globalDeclFoundNext_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; 
v_pre_3439_ = lean_ctor_get(v_n_3409_, 0);
lean_inc(v_pre_3439_);
v_str_3440_ = lean_ctor_get(v_n_3409_, 1);
lean_inc_ref(v_str_3440_);
lean_dec_ref_known(v_n_3409_, 2);
v_globalDeclFoundNext_3441_ = 1;
v___x_3442_ = l_Lean_MacroScopesView_review(v_givenNameView_3434_);
v___x_3443_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13(v___x_3442_, v_globalDeclFound_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; lean_object* v___x_3445_; lean_object* v_r_3446_; uint8_t v___x_3447_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref_known(v___x_3443_, 1);
v___x_3445_ = lean_box(0);
v_r_3446_ = l_List_filterTR_loop___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__14(v_a_3444_, v___x_3445_);
v___x_3447_ = l_List_isEmpty___redArg(v_r_3446_);
lean_dec(v_r_3446_);
if (v___x_3447_ == 0)
{
v___y_3420_ = v_pre_3439_;
v___y_3421_ = v_str_3440_;
v_globalDeclFoundNext_3422_ = v_globalDeclFoundNext_3441_;
v___y_3423_ = v___y_3412_;
v___y_3424_ = v___y_3413_;
v___y_3425_ = v___y_3414_;
v___y_3426_ = v___y_3415_;
v___y_3427_ = v___y_3416_;
v___y_3428_ = v___y_3417_;
goto v___jp_3419_;
}
else
{
v___y_3420_ = v_pre_3439_;
v___y_3421_ = v_str_3440_;
v_globalDeclFoundNext_3422_ = v_globalDeclFound_3411_;
v___y_3423_ = v___y_3412_;
v___y_3424_ = v___y_3413_;
v___y_3425_ = v___y_3414_;
v___y_3426_ = v___y_3415_;
v___y_3427_ = v___y_3416_;
v___y_3428_ = v___y_3417_;
goto v___jp_3419_;
}
}
else
{
lean_object* v_a_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3455_; 
lean_dec_ref(v_str_3440_);
lean_dec(v_pre_3439_);
lean_dec(v_projs_3410_);
lean_dec_ref(v_findLocalDecl_x3f_3408_);
v_a_3448_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3450_ = v___x_3443_;
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_a_3448_);
lean_dec(v___x_3443_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_a_3448_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
return v___x_3453_;
}
}
}
}
else
{
lean_object* v_pre_3456_; lean_object* v_str_3457_; 
lean_dec_ref_known(v_givenNameView_3434_, 4);
v_pre_3456_ = lean_ctor_get(v_n_3409_, 0);
lean_inc(v_pre_3456_);
v_str_3457_ = lean_ctor_get(v_n_3409_, 1);
lean_inc_ref(v_str_3457_);
lean_dec_ref_known(v_n_3409_, 2);
v___y_3420_ = v_pre_3456_;
v___y_3421_ = v_str_3457_;
v_globalDeclFoundNext_3422_ = v_globalDeclFound_3411_;
v___y_3423_ = v___y_3412_;
v___y_3424_ = v___y_3413_;
v___y_3425_ = v___y_3414_;
v___y_3426_ = v___y_3415_;
v___y_3427_ = v___y_3416_;
v___y_3428_ = v___y_3417_;
goto v___jp_3419_;
}
}
else
{
lean_object* v___x_3458_; lean_object* v___x_3459_; 
lean_dec_ref_known(v_givenNameView_3434_, 4);
lean_dec(v_projs_3410_);
lean_dec(v_n_3409_);
lean_dec_ref(v_findLocalDecl_x3f_3408_);
v___x_3458_ = lean_box(0);
v___x_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3459_, 0, v___x_3458_);
return v___x_3459_;
}
}
else
{
lean_object* v_val_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3470_; 
lean_dec_ref_known(v_givenNameView_3434_, 4);
lean_dec(v_n_3409_);
lean_dec_ref(v_findLocalDecl_x3f_3408_);
v_val_3460_ = lean_ctor_get(v___x_3438_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3438_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3462_ = v___x_3438_;
v_isShared_3463_ = v_isSharedCheck_3470_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_val_3460_);
lean_dec(v___x_3438_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3470_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3467_; 
v___x_3464_ = l_Lean_LocalDecl_toExpr(v_val_3460_);
v___x_3465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3465_, 0, v___x_3464_);
lean_ctor_set(v___x_3465_, 1, v_projs_3410_);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v___x_3465_);
v___x_3467_ = v___x_3462_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v___x_3465_);
v___x_3467_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
lean_object* v___x_3468_; 
v___x_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3468_, 0, v___x_3467_);
return v___x_3468_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8___boxed(lean_object* v_view_3473_, lean_object* v_findLocalDecl_x3f_3474_, lean_object* v_n_3475_, lean_object* v_projs_3476_, lean_object* v_globalDeclFound_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_){
_start:
{
uint8_t v_globalDeclFound_boxed_3485_; lean_object* v_res_3486_; 
v_globalDeclFound_boxed_3485_ = lean_unbox(v_globalDeclFound_3477_);
v_res_3486_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8(v_view_3473_, v_findLocalDecl_x3f_3474_, v_n_3475_, v_projs_3476_, v_globalDeclFound_boxed_3485_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec_ref(v_view_3473_);
return v_res_3486_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(lean_object* v_localDecl_x3f_3487_, lean_object* v_givenName_3488_, lean_object* v_as_3489_, lean_object* v_i_3490_){
_start:
{
lean_object* v_zero_3491_; uint8_t v_isZero_3492_; 
v_zero_3491_ = lean_unsigned_to_nat(0u);
v_isZero_3492_ = lean_nat_dec_eq(v_i_3490_, v_zero_3491_);
if (v_isZero_3492_ == 1)
{
lean_object* v___x_3493_; 
lean_dec(v_i_3490_);
v___x_3493_ = lean_box(0);
return v___x_3493_;
}
else
{
lean_object* v_one_3494_; lean_object* v_n_3495_; lean_object* v___x_3496_; 
v_one_3494_ = lean_unsigned_to_nat(1u);
v_n_3495_ = lean_nat_sub(v_i_3490_, v_one_3494_);
lean_dec(v_i_3490_);
v___x_3496_ = lean_array_fget_borrowed(v_as_3489_, v_n_3495_);
if (lean_obj_tag(v___x_3496_) == 0)
{
v_i_3490_ = v_n_3495_;
goto _start;
}
else
{
lean_object* v_val_3498_; uint8_t v___x_3499_; 
v_val_3498_ = lean_ctor_get(v___x_3496_, 0);
v___x_3499_ = l_Lean_LocalDecl_isAuxDecl(v_val_3498_);
if (v___x_3499_ == 0)
{
if (lean_obj_tag(v_localDecl_x3f_3487_) == 0)
{
v_i_3490_ = v_n_3495_;
goto _start;
}
else
{
lean_dec(v_n_3495_);
lean_inc_ref(v_localDecl_x3f_3487_);
return v_localDecl_x3f_3487_;
}
}
else
{
lean_object* v___x_3501_; uint8_t v___x_3502_; 
v___x_3501_ = l_Lean_LocalDecl_userName(v_val_3498_);
v___x_3502_ = lean_name_eq(v___x_3501_, v_givenName_3488_);
lean_dec(v___x_3501_);
if (v___x_3502_ == 0)
{
v_i_3490_ = v_n_3495_;
goto _start;
}
else
{
lean_dec(v_n_3495_);
lean_inc_ref(v___x_3496_);
return v___x_3496_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg___boxed(lean_object* v_localDecl_x3f_3504_, lean_object* v_givenName_3505_, lean_object* v_as_3506_, lean_object* v_i_3507_){
_start:
{
lean_object* v_res_3508_; 
v_res_3508_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(v_localDecl_x3f_3504_, v_givenName_3505_, v_as_3506_, v_i_3507_);
lean_dec_ref(v_as_3506_);
lean_dec(v_givenName_3505_);
lean_dec(v_localDecl_x3f_3504_);
return v_res_3508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(lean_object* v_localDecl_x3f_3509_, lean_object* v_givenName_3510_, lean_object* v_as_3511_, lean_object* v_i_3512_){
_start:
{
lean_object* v_zero_3513_; uint8_t v_isZero_3514_; 
v_zero_3513_ = lean_unsigned_to_nat(0u);
v_isZero_3514_ = lean_nat_dec_eq(v_i_3512_, v_zero_3513_);
if (v_isZero_3514_ == 1)
{
lean_object* v___x_3515_; 
lean_dec(v_i_3512_);
v___x_3515_ = lean_box(0);
return v___x_3515_;
}
else
{
lean_object* v_one_3516_; lean_object* v_n_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v_one_3516_ = lean_unsigned_to_nat(1u);
v_n_3517_ = lean_nat_sub(v_i_3512_, v_one_3516_);
lean_dec(v_i_3512_);
v___x_3518_ = lean_array_fget_borrowed(v_as_3511_, v_n_3517_);
v___x_3519_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(v_localDecl_x3f_3509_, v_givenName_3510_, v___x_3518_);
if (lean_obj_tag(v___x_3519_) == 0)
{
v_i_3512_ = v_n_3517_;
goto _start;
}
else
{
lean_dec(v_n_3517_);
return v___x_3519_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(lean_object* v_localDecl_x3f_3521_, lean_object* v_givenName_3522_, lean_object* v_x_3523_){
_start:
{
if (lean_obj_tag(v_x_3523_) == 0)
{
lean_object* v_cs_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
v_cs_3524_ = lean_ctor_get(v_x_3523_, 0);
v___x_3525_ = lean_array_get_size(v_cs_3524_);
v___x_3526_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(v_localDecl_x3f_3521_, v_givenName_3522_, v_cs_3524_, v___x_3525_);
return v___x_3526_;
}
else
{
lean_object* v_vs_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
v_vs_3527_ = lean_ctor_get(v_x_3523_, 0);
v___x_3528_ = lean_array_get_size(v_vs_3527_);
v___x_3529_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(v_localDecl_x3f_3521_, v_givenName_3522_, v_vs_3527_, v___x_3528_);
return v___x_3529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11___boxed(lean_object* v_localDecl_x3f_3530_, lean_object* v_givenName_3531_, lean_object* v_x_3532_){
_start:
{
lean_object* v_res_3533_; 
v_res_3533_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(v_localDecl_x3f_3530_, v_givenName_3531_, v_x_3532_);
lean_dec_ref(v_x_3532_);
lean_dec(v_givenName_3531_);
lean_dec(v_localDecl_x3f_3530_);
return v_res_3533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg___boxed(lean_object* v_localDecl_x3f_3534_, lean_object* v_givenName_3535_, lean_object* v_as_3536_, lean_object* v_i_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(v_localDecl_x3f_3534_, v_givenName_3535_, v_as_3536_, v_i_3537_);
lean_dec_ref(v_as_3536_);
lean_dec(v_givenName_3535_);
lean_dec(v_localDecl_x3f_3534_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(lean_object* v_localDecl_x3f_3539_, lean_object* v_givenName_3540_, lean_object* v_t_3541_){
_start:
{
lean_object* v_root_3542_; lean_object* v_tail_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; 
v_root_3542_ = lean_ctor_get(v_t_3541_, 0);
v_tail_3543_ = lean_ctor_get(v_t_3541_, 1);
v___x_3544_ = lean_array_get_size(v_tail_3543_);
v___x_3545_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(v_localDecl_x3f_3539_, v_givenName_3540_, v_tail_3543_, v___x_3544_);
if (lean_obj_tag(v___x_3545_) == 0)
{
lean_object* v___x_3546_; 
v___x_3546_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11(v_localDecl_x3f_3539_, v_givenName_3540_, v_root_3542_);
return v___x_3546_;
}
else
{
return v___x_3545_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7___boxed(lean_object* v_localDecl_x3f_3547_, lean_object* v_givenName_3548_, lean_object* v_t_3549_){
_start:
{
lean_object* v_res_3550_; 
v_res_3550_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(v_localDecl_x3f_3547_, v_givenName_3548_, v_t_3549_);
lean_dec_ref(v_t_3549_);
lean_dec(v_givenName_3548_);
lean_dec(v_localDecl_x3f_3547_);
return v_res_3550_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(lean_object* v_t_3551_, lean_object* v_k_3552_){
_start:
{
if (lean_obj_tag(v_t_3551_) == 0)
{
lean_object* v_k_3553_; lean_object* v_v_3554_; lean_object* v_l_3555_; lean_object* v_r_3556_; uint8_t v___x_3557_; 
v_k_3553_ = lean_ctor_get(v_t_3551_, 1);
v_v_3554_ = lean_ctor_get(v_t_3551_, 2);
v_l_3555_ = lean_ctor_get(v_t_3551_, 3);
v_r_3556_ = lean_ctor_get(v_t_3551_, 4);
v___x_3557_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3552_, v_k_3553_);
switch(v___x_3557_)
{
case 0:
{
v_t_3551_ = v_l_3555_;
goto _start;
}
case 1:
{
lean_object* v___x_3559_; 
lean_inc(v_v_3554_);
v___x_3559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3559_, 0, v_v_3554_);
return v___x_3559_;
}
default: 
{
v_t_3551_ = v_r_3556_;
goto _start;
}
}
}
else
{
lean_object* v___x_3561_; 
v___x_3561_ = lean_box(0);
return v___x_3561_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg___boxed(lean_object* v_t_3562_, lean_object* v_k_3563_){
_start:
{
lean_object* v_res_3564_; 
v_res_3564_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(v_t_3562_, v_k_3563_);
lean_dec(v_k_3563_);
lean_dec(v_t_3562_);
return v_res_3564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(lean_object* v_localDecl_3565_, lean_object* v_givenName_3566_){
_start:
{
lean_object* v___x_3567_; uint8_t v___x_3568_; 
v___x_3567_ = l_Lean_LocalDecl_userName(v_localDecl_3565_);
v___x_3568_ = lean_name_eq(v___x_3567_, v_givenName_3566_);
lean_dec(v___x_3567_);
if (v___x_3568_ == 0)
{
lean_object* v___x_3569_; 
lean_dec_ref(v_localDecl_3565_);
v___x_3569_ = lean_box(0);
return v___x_3569_;
}
else
{
lean_object* v___x_3570_; 
v___x_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3570_, 0, v_localDecl_3565_);
return v___x_3570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0___boxed(lean_object* v_localDecl_3571_, lean_object* v_givenName_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(v_localDecl_3571_, v_givenName_3572_);
lean_dec(v_givenName_3572_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(lean_object* v_givenName_3574_, uint8_t v_skipAuxDecl_3575_, lean_object* v_auxDeclToFullName_3576_, lean_object* v___x_3577_, lean_object* v_givenNameView_3578_, lean_object* v_as_3579_, lean_object* v_i_3580_){
_start:
{
lean_object* v_zero_3581_; uint8_t v_isZero_3582_; 
v_zero_3581_ = lean_unsigned_to_nat(0u);
v_isZero_3582_ = lean_nat_dec_eq(v_i_3580_, v_zero_3581_);
if (v_isZero_3582_ == 1)
{
lean_object* v___x_3583_; 
lean_dec(v_i_3580_);
lean_dec_ref(v_givenNameView_3578_);
lean_dec(v___x_3577_);
v___x_3583_ = lean_box(0);
return v___x_3583_;
}
else
{
lean_object* v_one_3584_; lean_object* v_n_3585_; lean_object* v___y_3587_; lean_object* v___x_3589_; 
v_one_3584_ = lean_unsigned_to_nat(1u);
v_n_3585_ = lean_nat_sub(v_i_3580_, v_one_3584_);
lean_dec(v_i_3580_);
v___x_3589_ = lean_array_fget_borrowed(v_as_3579_, v_n_3585_);
if (lean_obj_tag(v___x_3589_) == 0)
{
v_i_3580_ = v_n_3585_;
goto _start;
}
else
{
lean_object* v_val_3591_; uint8_t v___x_3592_; 
v_val_3591_ = lean_ctor_get(v___x_3589_, 0);
v___x_3592_ = l_Lean_LocalDecl_isAuxDecl(v_val_3591_);
if (v___x_3592_ == 0)
{
lean_object* v___x_3593_; 
lean_inc(v_val_3591_);
v___x_3593_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(v_val_3591_, v_givenName_3574_);
v___y_3587_ = v___x_3593_;
goto v___jp_3586_;
}
else
{
if (v_skipAuxDecl_3575_ == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3594_ = l_Lean_LocalDecl_fvarId(v_val_3591_);
v___x_3595_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(v_auxDeclToFullName_3576_, v___x_3594_);
lean_dec(v___x_3594_);
if (lean_obj_tag(v___x_3595_) == 1)
{
lean_object* v_val_3596_; lean_object* v_fullDeclView_3597_; lean_object* v_name_3598_; lean_object* v_imported_3599_; lean_object* v_ctx_3600_; lean_object* v_scopes_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3621_; 
v_val_3596_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_val_3596_);
lean_dec_ref_known(v___x_3595_, 1);
v_fullDeclView_3597_ = l_Lean_extractMacroScopes(v_val_3596_);
v_name_3598_ = lean_ctor_get(v_fullDeclView_3597_, 0);
v_imported_3599_ = lean_ctor_get(v_fullDeclView_3597_, 1);
v_ctx_3600_ = lean_ctor_get(v_fullDeclView_3597_, 2);
v_scopes_3601_ = lean_ctor_get(v_fullDeclView_3597_, 3);
v_isSharedCheck_3621_ = !lean_is_exclusive(v_fullDeclView_3597_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3603_ = v_fullDeclView_3597_;
v_isShared_3604_ = v_isSharedCheck_3621_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_scopes_3601_);
lean_inc(v_ctx_3600_);
lean_inc(v_imported_3599_);
lean_inc(v_name_3598_);
lean_dec(v_fullDeclView_3597_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3621_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___y_3606_; lean_object* v___x_3619_; 
lean_inc(v_name_3598_);
v___x_3619_ = l_Lean_privateToUserName_x3f(v_name_3598_);
if (lean_obj_tag(v___x_3619_) == 0)
{
v___y_3606_ = v_name_3598_;
goto v___jp_3605_;
}
else
{
lean_object* v_val_3620_; 
lean_dec(v_name_3598_);
v_val_3620_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_val_3620_);
lean_dec_ref_known(v___x_3619_, 1);
v___y_3606_ = v_val_3620_;
goto v___jp_3605_;
}
v___jp_3605_:
{
lean_object* v_fullDeclView_3608_; 
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 0, v___y_3606_);
v_fullDeclView_3608_ = v___x_3603_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v___y_3606_);
lean_ctor_set(v_reuseFailAlloc_3618_, 1, v_imported_3599_);
lean_ctor_set(v_reuseFailAlloc_3618_, 2, v_ctx_3600_);
lean_ctor_set(v_reuseFailAlloc_3618_, 3, v_scopes_3601_);
v_fullDeclView_3608_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
lean_object* v_fullDeclName_3609_; uint8_t v___x_3610_; 
lean_inc_ref(v_fullDeclView_3608_);
v_fullDeclName_3609_ = l_Lean_MacroScopesView_review(v_fullDeclView_3608_);
v___x_3610_ = l_Lean_Name_isPrefixOf(v___x_3577_, v_fullDeclName_3609_);
if (v___x_3610_ == 0)
{
lean_object* v___x_3611_; 
lean_dec_ref(v_fullDeclView_3608_);
lean_inc(v___x_3577_);
lean_inc_ref(v_givenNameView_3578_);
lean_inc(v_val_3591_);
v___x_3611_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_go(v_val_3591_, v_givenNameView_3578_, v_fullDeclName_3609_, v___x_3577_);
lean_dec(v_fullDeclName_3609_);
v___y_3587_ = v___x_3611_;
goto v___jp_3586_;
}
else
{
lean_object* v___x_3612_; lean_object* v_localDeclNameView_3613_; uint8_t v___x_3614_; 
lean_dec(v_fullDeclName_3609_);
v___x_3612_ = l_Lean_LocalDecl_userName(v_val_3591_);
v_localDeclNameView_3613_ = l_Lean_extractMacroScopes(v___x_3612_);
v___x_3614_ = l_Lean_MacroScopesView_isSuffixOf(v_localDeclNameView_3613_, v_givenNameView_3578_);
lean_dec_ref(v_localDeclNameView_3613_);
if (v___x_3614_ == 0)
{
lean_dec_ref(v_fullDeclView_3608_);
v_i_3580_ = v_n_3585_;
goto _start;
}
else
{
uint8_t v___x_3616_; 
v___x_3616_ = l_Lean_MacroScopesView_isSuffixOf(v_givenNameView_3578_, v_fullDeclView_3608_);
lean_dec_ref(v_fullDeclView_3608_);
if (v___x_3616_ == 0)
{
v_i_3580_ = v_n_3585_;
goto _start;
}
else
{
lean_dec(v_n_3585_);
lean_dec_ref(v_givenNameView_3578_);
lean_dec(v___x_3577_);
lean_inc_ref(v___x_3589_);
return v___x_3589_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3622_; 
lean_dec(v___x_3595_);
lean_inc(v_val_3591_);
v___x_3622_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___lam__0(v_val_3591_, v_givenName_3574_);
v___y_3587_ = v___x_3622_;
goto v___jp_3586_;
}
}
else
{
v_i_3580_ = v_n_3585_;
goto _start;
}
}
}
v___jp_3586_:
{
if (lean_obj_tag(v___y_3587_) == 0)
{
v_i_3580_ = v_n_3585_;
goto _start;
}
else
{
lean_dec(v_n_3585_);
lean_dec_ref(v_givenNameView_3578_);
lean_dec(v___x_3577_);
return v___y_3587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_givenName_3624_, lean_object* v_skipAuxDecl_3625_, lean_object* v_auxDeclToFullName_3626_, lean_object* v___x_3627_, lean_object* v_givenNameView_3628_, lean_object* v_as_3629_, lean_object* v_i_3630_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3631_; lean_object* v_res_3632_; 
v_skipAuxDecl_boxed_3631_ = lean_unbox(v_skipAuxDecl_3625_);
v_res_3632_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(v_givenName_3624_, v_skipAuxDecl_boxed_3631_, v_auxDeclToFullName_3626_, v___x_3627_, v_givenNameView_3628_, v_as_3629_, v_i_3630_);
lean_dec_ref(v_as_3629_);
lean_dec(v_auxDeclToFullName_3626_);
lean_dec(v_givenName_3624_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(lean_object* v_givenName_3633_, uint8_t v_skipAuxDecl_3634_, lean_object* v_auxDeclToFullName_3635_, lean_object* v___x_3636_, lean_object* v_givenNameView_3637_, lean_object* v_as_3638_, lean_object* v_i_3639_){
_start:
{
lean_object* v_zero_3640_; uint8_t v_isZero_3641_; 
v_zero_3640_ = lean_unsigned_to_nat(0u);
v_isZero_3641_ = lean_nat_dec_eq(v_i_3639_, v_zero_3640_);
if (v_isZero_3641_ == 1)
{
lean_object* v___x_3642_; 
lean_dec(v_i_3639_);
lean_dec_ref(v_givenNameView_3637_);
lean_dec(v___x_3636_);
v___x_3642_ = lean_box(0);
return v___x_3642_;
}
else
{
lean_object* v_one_3643_; lean_object* v_n_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v_one_3643_ = lean_unsigned_to_nat(1u);
v_n_3644_ = lean_nat_sub(v_i_3639_, v_one_3643_);
lean_dec(v_i_3639_);
v___x_3645_ = lean_array_fget_borrowed(v_as_3638_, v_n_3644_);
lean_inc_ref(v_givenNameView_3637_);
lean_inc(v___x_3636_);
v___x_3646_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(v_givenName_3633_, v_skipAuxDecl_3634_, v_auxDeclToFullName_3635_, v___x_3636_, v_givenNameView_3637_, v___x_3645_);
if (lean_obj_tag(v___x_3646_) == 0)
{
v_i_3639_ = v_n_3644_;
goto _start;
}
else
{
lean_dec(v_n_3644_);
lean_dec_ref(v_givenNameView_3637_);
lean_dec(v___x_3636_);
return v___x_3646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(lean_object* v_givenName_3648_, uint8_t v_skipAuxDecl_3649_, lean_object* v_auxDeclToFullName_3650_, lean_object* v___x_3651_, lean_object* v_givenNameView_3652_, lean_object* v_x_3653_){
_start:
{
if (lean_obj_tag(v_x_3653_) == 0)
{
lean_object* v_cs_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v_cs_3654_ = lean_ctor_get(v_x_3653_, 0);
v___x_3655_ = lean_array_get_size(v_cs_3654_);
v___x_3656_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(v_givenName_3648_, v_skipAuxDecl_3649_, v_auxDeclToFullName_3650_, v___x_3651_, v_givenNameView_3652_, v_cs_3654_, v___x_3655_);
return v___x_3656_;
}
else
{
lean_object* v_vs_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; 
v_vs_3657_ = lean_ctor_get(v_x_3653_, 0);
v___x_3658_ = lean_array_get_size(v_vs_3657_);
v___x_3659_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(v_givenName_3648_, v_skipAuxDecl_3649_, v_auxDeclToFullName_3650_, v___x_3651_, v_givenNameView_3652_, v_vs_3657_, v___x_3658_);
return v___x_3659_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8___boxed(lean_object* v_givenName_3660_, lean_object* v_skipAuxDecl_3661_, lean_object* v_auxDeclToFullName_3662_, lean_object* v___x_3663_, lean_object* v_givenNameView_3664_, lean_object* v_x_3665_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3666_; lean_object* v_res_3667_; 
v_skipAuxDecl_boxed_3666_ = lean_unbox(v_skipAuxDecl_3661_);
v_res_3667_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(v_givenName_3660_, v_skipAuxDecl_boxed_3666_, v_auxDeclToFullName_3662_, v___x_3663_, v_givenNameView_3664_, v_x_3665_);
lean_dec_ref(v_x_3665_);
lean_dec(v_auxDeclToFullName_3662_);
lean_dec(v_givenName_3660_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg___boxed(lean_object* v_givenName_3668_, lean_object* v_skipAuxDecl_3669_, lean_object* v_auxDeclToFullName_3670_, lean_object* v___x_3671_, lean_object* v_givenNameView_3672_, lean_object* v_as_3673_, lean_object* v_i_3674_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3675_; lean_object* v_res_3676_; 
v_skipAuxDecl_boxed_3675_ = lean_unbox(v_skipAuxDecl_3669_);
v_res_3676_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(v_givenName_3668_, v_skipAuxDecl_boxed_3675_, v_auxDeclToFullName_3670_, v___x_3671_, v_givenNameView_3672_, v_as_3673_, v_i_3674_);
lean_dec_ref(v_as_3673_);
lean_dec(v_auxDeclToFullName_3670_);
lean_dec(v_givenName_3668_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(lean_object* v_givenName_3677_, uint8_t v_skipAuxDecl_3678_, lean_object* v_auxDeclToFullName_3679_, lean_object* v___x_3680_, lean_object* v_givenNameView_3681_, lean_object* v_t_3682_){
_start:
{
lean_object* v_root_3683_; lean_object* v_tail_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v_root_3683_ = lean_ctor_get(v_t_3682_, 0);
v_tail_3684_ = lean_ctor_get(v_t_3682_, 1);
v___x_3685_ = lean_array_get_size(v_tail_3684_);
lean_inc_ref(v_givenNameView_3681_);
lean_inc(v___x_3680_);
v___x_3686_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(v_givenName_3677_, v_skipAuxDecl_3678_, v_auxDeclToFullName_3679_, v___x_3680_, v_givenNameView_3681_, v_tail_3684_, v___x_3685_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v___x_3687_; 
v___x_3687_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8(v_givenName_3677_, v_skipAuxDecl_3678_, v_auxDeclToFullName_3679_, v___x_3680_, v_givenNameView_3681_, v_root_3683_);
return v___x_3687_;
}
else
{
lean_dec_ref(v_givenNameView_3681_);
lean_dec(v___x_3680_);
return v___x_3686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6___boxed(lean_object* v_givenName_3688_, lean_object* v_skipAuxDecl_3689_, lean_object* v_auxDeclToFullName_3690_, lean_object* v___x_3691_, lean_object* v_givenNameView_3692_, lean_object* v_t_3693_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3694_; lean_object* v_res_3695_; 
v_skipAuxDecl_boxed_3694_ = lean_unbox(v_skipAuxDecl_3689_);
v_res_3695_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(v_givenName_3688_, v_skipAuxDecl_boxed_3694_, v_auxDeclToFullName_3690_, v___x_3691_, v_givenNameView_3692_, v_t_3693_);
lean_dec_ref(v_t_3693_);
lean_dec(v_auxDeclToFullName_3690_);
lean_dec(v_givenName_3688_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(lean_object* v_auxDeclToFullName_3696_, lean_object* v_currNamespace_3697_, lean_object* v_decls_3698_, lean_object* v_givenNameView_3699_, uint8_t v_skipAuxDecl_3700_){
_start:
{
lean_object* v_givenName_3701_; lean_object* v_localDecl_x3f_3702_; 
lean_inc_ref(v_givenNameView_3699_);
v_givenName_3701_ = l_Lean_MacroScopesView_review(v_givenNameView_3699_);
v_localDecl_x3f_3702_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6(v_givenName_3701_, v_skipAuxDecl_3700_, v_auxDeclToFullName_3696_, v_currNamespace_3697_, v_givenNameView_3699_, v_decls_3698_);
if (lean_obj_tag(v_localDecl_x3f_3702_) == 0)
{
if (v_skipAuxDecl_3700_ == 0)
{
lean_object* v___x_3703_; 
v___x_3703_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7(v_localDecl_x3f_3702_, v_givenName_3701_, v_decls_3698_);
lean_dec(v_givenName_3701_);
return v___x_3703_;
}
else
{
lean_dec(v_givenName_3701_);
return v_localDecl_x3f_3702_;
}
}
else
{
lean_dec(v_givenName_3701_);
return v_localDecl_x3f_3702_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed(lean_object* v_auxDeclToFullName_3704_, lean_object* v_currNamespace_3705_, lean_object* v_decls_3706_, lean_object* v_givenNameView_3707_, lean_object* v_skipAuxDecl_3708_){
_start:
{
uint8_t v_skipAuxDecl_boxed_3709_; lean_object* v_res_3710_; 
v_skipAuxDecl_boxed_3709_ = lean_unbox(v_skipAuxDecl_3708_);
v_res_3710_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0(v_auxDeclToFullName_3704_, v_currNamespace_3705_, v_decls_3706_, v_givenNameView_3707_, v_skipAuxDecl_boxed_3709_);
lean_dec_ref(v_decls_3706_);
lean_dec(v_auxDeclToFullName_3704_);
return v_res_3710_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(lean_object* v_n_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_){
_start:
{
lean_object* v_lctx_3719_; lean_object* v_toCold_3720_; lean_object* v_decls_3721_; lean_object* v_auxDeclToFullName_3722_; lean_object* v_currNamespace_3723_; lean_object* v_view_3724_; lean_object* v_name_3725_; lean_object* v_findLocalDecl_x3f_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; lean_object* v___x_3729_; 
v_lctx_3719_ = lean_ctor_get(v___y_3714_, 2);
v_toCold_3720_ = lean_ctor_get(v___y_3716_, 0);
v_decls_3721_ = lean_ctor_get(v_lctx_3719_, 1);
v_auxDeclToFullName_3722_ = lean_ctor_get(v_lctx_3719_, 2);
v_currNamespace_3723_ = lean_ctor_get(v_toCold_3720_, 4);
v_view_3724_ = l_Lean_extractMacroScopes(v_n_3711_);
v_name_3725_ = lean_ctor_get(v_view_3724_, 0);
lean_inc(v_name_3725_);
lean_inc_ref(v_decls_3721_);
lean_inc(v_currNamespace_3723_);
lean_inc(v_auxDeclToFullName_3722_);
v_findLocalDecl_x3f_3726_ = lean_alloc_closure((void*)(l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___lam__0___boxed), 5, 3);
lean_closure_set(v_findLocalDecl_x3f_3726_, 0, v_auxDeclToFullName_3722_);
lean_closure_set(v_findLocalDecl_x3f_3726_, 1, v_currNamespace_3723_);
lean_closure_set(v_findLocalDecl_x3f_3726_, 2, v_decls_3721_);
v___x_3727_ = lean_box(0);
v___x_3728_ = 0;
v___x_3729_ = l___private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8(v_view_3724_, v_findLocalDecl_x3f_3726_, v_name_3725_, v___x_3727_, v___x_3728_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_);
lean_dec_ref(v_view_3724_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5___boxed(lean_object* v_n_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v_res_3738_; 
v_res_3738_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v_n_3730_, v___y_3731_, v___y_3732_, v___y_3733_, v___y_3734_, v___y_3735_, v___y_3736_);
lean_dec(v___y_3736_);
lean_dec_ref(v___y_3735_);
lean_dec(v___y_3734_);
lean_dec_ref(v___y_3733_);
lean_dec(v___y_3732_);
lean_dec_ref(v___y_3731_);
return v_res_3738_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(lean_object* v_as_x27_3739_, lean_object* v_b_3740_){
_start:
{
if (lean_obj_tag(v_as_x27_3739_) == 0)
{
lean_object* v___x_3742_; 
v___x_3742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3742_, 0, v_b_3740_);
return v___x_3742_;
}
else
{
lean_object* v_head_3743_; lean_object* v_tail_3744_; lean_object* v_config_3745_; lean_object* v_extensions_3746_; lean_object* v_extra_3747_; lean_object* v_extraInj_3748_; lean_object* v_extraFacts_3749_; lean_object* v_symPrios_3750_; lean_object* v_norm_3751_; lean_object* v_normProcs_3752_; lean_object* v_anchorRefs_x3f_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3762_; 
v_head_3743_ = lean_ctor_get(v_as_x27_3739_, 0);
v_tail_3744_ = lean_ctor_get(v_as_x27_3739_, 1);
v_config_3745_ = lean_ctor_get(v_b_3740_, 0);
v_extensions_3746_ = lean_ctor_get(v_b_3740_, 1);
v_extra_3747_ = lean_ctor_get(v_b_3740_, 2);
v_extraInj_3748_ = lean_ctor_get(v_b_3740_, 3);
v_extraFacts_3749_ = lean_ctor_get(v_b_3740_, 4);
v_symPrios_3750_ = lean_ctor_get(v_b_3740_, 5);
v_norm_3751_ = lean_ctor_get(v_b_3740_, 6);
v_normProcs_3752_ = lean_ctor_get(v_b_3740_, 7);
v_anchorRefs_x3f_3753_ = lean_ctor_get(v_b_3740_, 8);
v_isSharedCheck_3762_ = !lean_is_exclusive(v_b_3740_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3755_ = v_b_3740_;
v_isShared_3756_ = v_isSharedCheck_3762_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_anchorRefs_x3f_3753_);
lean_inc(v_normProcs_3752_);
lean_inc(v_norm_3751_);
lean_inc(v_symPrios_3750_);
lean_inc(v_extraFacts_3749_);
lean_inc(v_extraInj_3748_);
lean_inc(v_extra_3747_);
lean_inc(v_extensions_3746_);
lean_inc(v_config_3745_);
lean_dec(v_b_3740_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3762_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v___x_3757_; lean_object* v___x_3759_; 
lean_inc(v_head_3743_);
v___x_3757_ = l_Lean_PersistentArray_push___redArg(v_extra_3747_, v_head_3743_);
if (v_isShared_3756_ == 0)
{
lean_ctor_set(v___x_3755_, 2, v___x_3757_);
v___x_3759_ = v___x_3755_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v_config_3745_);
lean_ctor_set(v_reuseFailAlloc_3761_, 1, v_extensions_3746_);
lean_ctor_set(v_reuseFailAlloc_3761_, 2, v___x_3757_);
lean_ctor_set(v_reuseFailAlloc_3761_, 3, v_extraInj_3748_);
lean_ctor_set(v_reuseFailAlloc_3761_, 4, v_extraFacts_3749_);
lean_ctor_set(v_reuseFailAlloc_3761_, 5, v_symPrios_3750_);
lean_ctor_set(v_reuseFailAlloc_3761_, 6, v_norm_3751_);
lean_ctor_set(v_reuseFailAlloc_3761_, 7, v_normProcs_3752_);
lean_ctor_set(v_reuseFailAlloc_3761_, 8, v_anchorRefs_x3f_3753_);
v___x_3759_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
v_as_x27_3739_ = v_tail_3744_;
v_b_3740_ = v___x_3759_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg___boxed(lean_object* v_as_x27_3763_, lean_object* v_b_3764_, lean_object* v___y_3765_){
_start:
{
lean_object* v_res_3766_; 
v_res_3766_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v_as_x27_3763_, v_b_3764_);
lean_dec(v_as_x27_3763_);
return v_res_3766_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1(void){
_start:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3768_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__0));
v___x_3769_ = l_Lean_stringToMessageData(v___x_3768_);
return v___x_3769_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3(void){
_start:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3771_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__2));
v___x_3772_ = l_Lean_stringToMessageData(v___x_3771_);
return v___x_3772_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5(void){
_start:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3774_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__4));
v___x_3775_ = l_Lean_stringToMessageData(v___x_3774_);
return v___x_3775_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7(void){
_start:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3777_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__6));
v___x_3778_ = l_Lean_stringToMessageData(v___x_3777_);
return v___x_3778_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9(void){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3780_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__8));
v___x_3781_ = l_Lean_stringToMessageData(v___x_3780_);
return v___x_3781_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11(void){
_start:
{
lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___x_3783_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__10));
v___x_3784_ = l_Lean_stringToMessageData(v___x_3783_);
return v___x_3784_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13(void){
_start:
{
lean_object* v___x_3786_; lean_object* v___x_3787_; 
v___x_3786_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__12));
v___x_3787_ = l_Lean_stringToMessageData(v___x_3786_);
return v___x_3787_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15(void){
_start:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; 
v___x_3789_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__14));
v___x_3790_ = l_Lean_stringToMessageData(v___x_3789_);
return v___x_3790_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17(void){
_start:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; 
v___x_3792_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__16));
v___x_3793_ = l_Lean_stringToMessageData(v___x_3792_);
return v___x_3793_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19(void){
_start:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3795_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__18));
v___x_3796_ = l_Lean_stringToMessageData(v___x_3795_);
return v___x_3796_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21(void){
_start:
{
lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3798_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__20));
v___x_3799_ = l_Lean_stringToMessageData(v___x_3798_);
return v___x_3799_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23(void){
_start:
{
lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3801_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__22));
v___x_3802_ = l_Lean_stringToMessageData(v___x_3801_);
return v___x_3802_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25(void){
_start:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3804_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__24));
v___x_3805_ = l_Lean_stringToMessageData(v___x_3804_);
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(lean_object* v_params_3806_, lean_object* v_p_3807_, lean_object* v_mod_x3f_3808_, lean_object* v_id_3809_, uint8_t v_minIndexable_3810_, uint8_t v_only_3811_, uint8_t v_incremental_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_){
_start:
{
lean_object* v___y_3821_; lean_object* v___y_3822_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v___y_3826_; lean_object* v___y_3827_; lean_object* v___y_3831_; uint8_t v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___y_3836_; lean_object* v___y_3873_; lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v___y_3880_; uint8_t v___y_3923_; lean_object* v___y_3924_; lean_object* v___y_3925_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; lean_object* v_a_3996_; lean_object* v___y_4221_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; 
v___x_4232_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_4233_ = lean_box(0);
lean_inc(v_id_3809_);
v___x_4234_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_id_3809_, v___x_4233_, v_a_3817_, v_a_3818_);
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v_a_4235_; 
v_a_4235_ = lean_ctor_get(v___x_4234_, 0);
lean_inc(v_a_4235_);
lean_dec_ref_known(v___x_4234_, 1);
v_a_3996_ = v_a_4235_;
goto v___jp_3995_;
}
else
{
lean_object* v_a_4236_; lean_object* v___x_4238_; uint8_t v_isShared_4239_; uint8_t v_isSharedCheck_4311_; 
v_a_4236_ = lean_ctor_get(v___x_4234_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4234_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4238_ = v___x_4234_;
v_isShared_4239_ = v_isSharedCheck_4311_;
goto v_resetjp_4237_;
}
else
{
lean_inc(v_a_4236_);
lean_dec(v___x_4234_);
v___x_4238_ = lean_box(0);
v_isShared_4239_ = v_isSharedCheck_4311_;
goto v_resetjp_4237_;
}
v_resetjp_4237_:
{
uint8_t v___x_4240_; 
v___x_4240_ = l_Lean_Exception_isInterrupt(v_a_4236_);
if (v___x_4240_ == 0)
{
uint8_t v___x_4241_; 
lean_inc(v_a_4236_);
v___x_4241_ = l_Lean_Exception_isRuntime(v_a_4236_);
if (v___x_4241_ == 0)
{
lean_object* v___x_4242_; lean_object* v___x_4243_; 
lean_del_object(v___x_4238_);
v___x_4242_ = l_Lean_TSyntax_getId(v_id_3809_);
lean_inc(v___x_4242_);
v___x_4243_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_4242_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
if (lean_obj_tag(v___x_4243_) == 0)
{
lean_object* v_a_4244_; 
v_a_4244_ = lean_ctor_get(v___x_4243_, 0);
lean_inc(v_a_4244_);
lean_dec_ref_known(v___x_4243_, 1);
if (lean_obj_tag(v_a_4244_) == 0)
{
lean_object* v___x_4245_; 
v___x_4245_ = l_Lean_Meta_Grind_getExtension_x3f(v___x_4242_, v_a_3817_, v_a_3818_);
if (lean_obj_tag(v___x_4245_) == 0)
{
lean_object* v_a_4246_; lean_object* v___x_4248_; uint8_t v_isShared_4249_; uint8_t v_isSharedCheck_4274_; 
v_a_4246_ = lean_ctor_get(v___x_4245_, 0);
v_isSharedCheck_4274_ = !lean_is_exclusive(v___x_4245_);
if (v_isSharedCheck_4274_ == 0)
{
v___x_4248_ = v___x_4245_;
v_isShared_4249_ = v_isSharedCheck_4274_;
goto v_resetjp_4247_;
}
else
{
lean_inc(v_a_4246_);
lean_dec(v___x_4245_);
v___x_4248_ = lean_box(0);
v_isShared_4249_ = v_isSharedCheck_4274_;
goto v_resetjp_4247_;
}
v_resetjp_4247_:
{
if (lean_obj_tag(v_a_4246_) == 1)
{
lean_del_object(v___x_4248_);
lean_dec(v_a_4236_);
if (lean_obj_tag(v_mod_x3f_3808_) == 1)
{
lean_object* v_val_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v_a_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4264_; 
lean_dec_ref_known(v_a_4246_, 1);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_val_4250_ = lean_ctor_get(v_mod_x3f_3808_, 0);
lean_inc(v_val_4250_);
lean_dec_ref_known(v_mod_x3f_3808_, 1);
v___x_4251_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__21);
v___x_4252_ = l_Lean_MessageData_ofName(v___x_4242_);
v___x_4253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4253_, 0, v___x_4251_);
lean_ctor_set(v___x_4253_, 1, v___x_4252_);
v___x_4254_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_warnRedundantEMatchArg___closed__5);
v___x_4255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4255_, 0, v___x_4253_);
lean_ctor_set(v___x_4255_, 1, v___x_4254_);
v___x_4256_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_val_4250_, v___x_4255_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
lean_dec(v_val_4250_);
v_a_4257_ = lean_ctor_get(v___x_4256_, 0);
v_isSharedCheck_4264_ = !lean_is_exclusive(v___x_4256_);
if (v_isSharedCheck_4264_ == 0)
{
v___x_4259_ = v___x_4256_;
v_isShared_4260_ = v_isSharedCheck_4264_;
goto v_resetjp_4258_;
}
else
{
lean_inc(v_a_4257_);
lean_dec(v___x_4256_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4264_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
lean_object* v___x_4262_; 
if (v_isShared_4260_ == 0)
{
v___x_4262_ = v___x_4259_;
goto v_reusejp_4261_;
}
else
{
lean_object* v_reuseFailAlloc_4263_; 
v_reuseFailAlloc_4263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4263_, 0, v_a_4257_);
v___x_4262_ = v_reuseFailAlloc_4263_;
goto v_reusejp_4261_;
}
v_reusejp_4261_:
{
return v___x_4262_;
}
}
}
else
{
lean_object* v_val_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; 
lean_dec(v___x_4242_);
v_val_4265_ = lean_ctor_get(v_a_4246_, 0);
lean_inc(v_val_4265_);
lean_dec_ref_known(v_a_4246_, 1);
v___x_4266_ = lean_box(0);
lean_inc_ref(v_params_3806_);
v___x_4267_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___lam__0(v_params_3806_, v_val_4265_, v___x_4232_, v___x_4241_, v___x_4266_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
lean_dec(v_val_4265_);
v___y_4221_ = v___x_4267_;
goto v___jp_4220_;
}
}
else
{
lean_object* v___x_4268_; uint8_t v___x_4269_; 
lean_dec(v_a_4246_);
v___x_4268_ = l_Lean_Name_getPrefix(v___x_4242_);
lean_dec(v___x_4242_);
v___x_4269_ = l_Lean_Name_isAnonymous(v___x_4268_);
lean_dec(v___x_4268_);
if (v___x_4269_ == 0)
{
lean_object* v___x_4270_; 
lean_del_object(v___x_4248_);
lean_dec(v_a_4236_);
v___x_4270_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_params_3806_, v_p_3807_, v_mod_x3f_3808_, v_id_3809_, v_minIndexable_3810_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
return v___x_4270_;
}
else
{
lean_object* v___x_4272_; 
lean_dec(v_id_3809_);
lean_dec(v_mod_x3f_3808_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
if (v_isShared_4249_ == 0)
{
lean_ctor_set_tag(v___x_4248_, 1);
lean_ctor_set(v___x_4248_, 0, v_a_4236_);
v___x_4272_ = v___x_4248_;
goto v_reusejp_4271_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v_a_4236_);
v___x_4272_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4271_;
}
v_reusejp_4271_:
{
return v___x_4272_;
}
}
}
}
}
else
{
lean_object* v_a_4275_; lean_object* v___x_4277_; uint8_t v_isShared_4278_; uint8_t v_isSharedCheck_4282_; 
lean_dec(v___x_4242_);
lean_dec(v_a_4236_);
lean_dec(v_id_3809_);
lean_dec(v_mod_x3f_3808_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_4275_ = lean_ctor_get(v___x_4245_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4245_);
if (v_isSharedCheck_4282_ == 0)
{
v___x_4277_ = v___x_4245_;
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
else
{
lean_inc(v_a_4275_);
lean_dec(v___x_4245_);
v___x_4277_ = lean_box(0);
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
v_resetjp_4276_:
{
lean_object* v___x_4280_; 
if (v_isShared_4278_ == 0)
{
v___x_4280_ = v___x_4277_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v_a_4275_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
return v___x_4280_;
}
}
}
}
else
{
lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v_a_4289_; lean_object* v___x_4291_; uint8_t v_isShared_4292_; uint8_t v_isSharedCheck_4296_; 
lean_dec_ref_known(v_a_4244_, 1);
lean_dec(v___x_4242_);
lean_dec(v_a_4236_);
lean_dec(v_mod_x3f_3808_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4283_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__23);
lean_inc(v_id_3809_);
v___x_4284_ = l_Lean_MessageData_ofSyntax(v_id_3809_);
v___x_4285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4283_);
lean_ctor_set(v___x_4285_, 1, v___x_4284_);
v___x_4286_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__25);
v___x_4287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4285_);
lean_ctor_set(v___x_4287_, 1, v___x_4286_);
v___x_4288_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_id_3809_, v___x_4287_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
lean_dec(v_id_3809_);
v_a_4289_ = lean_ctor_get(v___x_4288_, 0);
v_isSharedCheck_4296_ = !lean_is_exclusive(v___x_4288_);
if (v_isSharedCheck_4296_ == 0)
{
v___x_4291_ = v___x_4288_;
v_isShared_4292_ = v_isSharedCheck_4296_;
goto v_resetjp_4290_;
}
else
{
lean_inc(v_a_4289_);
lean_dec(v___x_4288_);
v___x_4291_ = lean_box(0);
v_isShared_4292_ = v_isSharedCheck_4296_;
goto v_resetjp_4290_;
}
v_resetjp_4290_:
{
lean_object* v___x_4294_; 
if (v_isShared_4292_ == 0)
{
v___x_4294_ = v___x_4291_;
goto v_reusejp_4293_;
}
else
{
lean_object* v_reuseFailAlloc_4295_; 
v_reuseFailAlloc_4295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4295_, 0, v_a_4289_);
v___x_4294_ = v_reuseFailAlloc_4295_;
goto v_reusejp_4293_;
}
v_reusejp_4293_:
{
return v___x_4294_;
}
}
}
}
else
{
lean_object* v_a_4297_; lean_object* v___x_4299_; uint8_t v_isShared_4300_; uint8_t v_isSharedCheck_4304_; 
lean_dec(v___x_4242_);
lean_dec(v_a_4236_);
lean_dec(v_id_3809_);
lean_dec(v_mod_x3f_3808_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_4297_ = lean_ctor_get(v___x_4243_, 0);
v_isSharedCheck_4304_ = !lean_is_exclusive(v___x_4243_);
if (v_isSharedCheck_4304_ == 0)
{
v___x_4299_ = v___x_4243_;
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
else
{
lean_inc(v_a_4297_);
lean_dec(v___x_4243_);
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
}
else
{
lean_object* v___x_4306_; 
lean_dec(v_id_3809_);
lean_dec(v_mod_x3f_3808_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
if (v_isShared_4239_ == 0)
{
v___x_4306_ = v___x_4238_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4307_; 
v_reuseFailAlloc_4307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4307_, 0, v_a_4236_);
v___x_4306_ = v_reuseFailAlloc_4307_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
return v___x_4306_;
}
}
}
else
{
lean_object* v___x_4309_; 
lean_dec(v_id_3809_);
lean_dec(v_mod_x3f_3808_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
if (v_isShared_4239_ == 0)
{
v___x_4309_ = v___x_4238_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_a_4236_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
}
v___jp_3820_:
{
lean_object* v_ctors_3828_; lean_object* v___x_3829_; 
v_ctors_3828_ = lean_ctor_get(v___y_3821_, 4);
lean_inc(v_ctors_3828_);
lean_dec_ref(v___y_3821_);
v___x_3829_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_3807_, v_id_3809_, v_minIndexable_3810_, v_ctors_3828_, v_params_3806_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_);
lean_dec(v_ctors_3828_);
lean_dec(v_p_3807_);
return v___x_3829_;
}
v___jp_3830_:
{
lean_object* v___x_3837_; 
v___x_3837_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3810_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v_toCold_3838_; lean_object* v_currRecDepth_3839_; lean_object* v_ref_3840_; uint16_t v_optionFlags_3841_; uint8_t v_suppressElabErrors_3842_; uint8_t v_isRecordingDeps_3843_; lean_object* v_ref_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; 
lean_dec_ref_known(v___x_3837_, 1);
v_toCold_3838_ = lean_ctor_get(v___y_3835_, 0);
v_currRecDepth_3839_ = lean_ctor_get(v___y_3835_, 1);
v_ref_3840_ = lean_ctor_get(v___y_3835_, 2);
v_optionFlags_3841_ = lean_ctor_get_uint16(v___y_3835_, sizeof(void*)*3);
v_suppressElabErrors_3842_ = lean_ctor_get_uint8(v___y_3835_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3843_ = lean_ctor_get_uint8(v___y_3835_, sizeof(void*)*3 + 3);
v_ref_3844_ = l_Lean_replaceRef(v_p_3807_, v_ref_3840_);
lean_dec(v_p_3807_);
lean_inc(v_currRecDepth_3839_);
lean_inc_ref(v_toCold_3838_);
v___x_3845_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3845_, 0, v_toCold_3838_);
lean_ctor_set(v___x_3845_, 1, v_currRecDepth_3839_);
lean_ctor_set(v___x_3845_, 2, v_ref_3844_);
lean_ctor_set_uint16(v___x_3845_, sizeof(void*)*3, v_optionFlags_3841_);
lean_ctor_set_uint8(v___x_3845_, sizeof(void*)*3 + 2, v_suppressElabErrors_3842_);
lean_ctor_set_uint8(v___x_3845_, sizeof(void*)*3 + 3, v_isRecordingDeps_3843_);
lean_inc(v___y_3831_);
v___x_3846_ = l_Lean_Meta_Grind_validateCasesAttr(v___y_3831_, v___y_3832_, v___x_3845_, v___y_3836_);
lean_dec_ref_known(v___x_3845_, 3);
if (lean_obj_tag(v___x_3846_) == 0)
{
lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3854_; 
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3854_ == 0)
{
lean_object* v_unused_3855_; 
v_unused_3855_ = lean_ctor_get(v___x_3846_, 0);
lean_dec(v_unused_3855_);
v___x_3848_ = v___x_3846_;
v_isShared_3849_ = v_isSharedCheck_3854_;
goto v_resetjp_3847_;
}
else
{
lean_dec(v___x_3846_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3854_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3850_; lean_object* v___x_3852_; 
v___x_3850_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_3806_, v___y_3831_, v___y_3832_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 0, v___x_3850_);
v___x_3852_ = v___x_3848_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v___x_3850_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
else
{
lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3863_; 
lean_dec(v___y_3831_);
lean_dec_ref(v_params_3806_);
v_a_3856_ = lean_ctor_get(v___x_3846_, 0);
v_isSharedCheck_3863_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3858_ = v___x_3846_;
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_dec(v___x_3846_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3861_; 
if (v_isShared_3859_ == 0)
{
v___x_3861_ = v___x_3858_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3856_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
}
else
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3871_; 
lean_dec(v___y_3831_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_3864_ = lean_ctor_get(v___x_3837_, 0);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3837_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3866_ = v___x_3837_;
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v___x_3837_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3867_ == 0)
{
v___x_3869_ = v___x_3866_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_a_3864_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
}
v___jp_3872_:
{
lean_object* v___x_3881_; 
v___x_3881_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3810_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_);
if (lean_obj_tag(v___x_3881_) == 0)
{
lean_object* v___x_3882_; lean_object* v___x_3883_; 
lean_dec_ref_known(v___x_3881_, 1);
v___x_3882_ = l_Lean_Meta_Grind_grindExt;
v___x_3883_ = l_Lean_Meta_Grind_Extension_getEMatchTheorems___redArg(v___x_3882_, v___y_3880_);
if (lean_obj_tag(v___x_3883_) == 0)
{
lean_object* v_a_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; uint8_t v___x_3889_; 
v_a_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc(v_a_3884_);
lean_dec_ref_known(v___x_3883_, 1);
lean_inc(v___y_3874_);
v___x_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3885_, 0, v___y_3874_);
v___x_3886_ = l_Lean_Meta_Grind_Theorems_find___redArg(v_a_3884_, v___x_3885_);
lean_dec_ref_known(v___x_3885_, 1);
lean_dec(v_a_3884_);
v___x_3887_ = lean_box(0);
v___x_3888_ = l_List_filterTR_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__1(v___y_3873_, v___x_3886_, v___x_3887_);
lean_dec(v___y_3873_);
v___x_3889_ = l_List_isEmpty___redArg(v___x_3888_);
if (v___x_3889_ == 0)
{
lean_object* v___x_3890_; 
lean_dec(v___y_3874_);
lean_dec(v_p_3807_);
v___x_3890_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v___x_3888_, v_params_3806_);
lean_dec(v___x_3888_);
return v___x_3890_;
}
else
{
lean_object* v___x_3891_; uint8_t v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
lean_dec(v___x_3888_);
lean_dec_ref(v_params_3806_);
v___x_3891_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__1);
v___x_3892_ = 0;
v___x_3893_ = l_Lean_MessageData_ofConstName(v___y_3874_, v___x_3892_);
v___x_3894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3891_);
lean_ctor_set(v___x_3894_, 1, v___x_3893_);
v___x_3895_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__3);
v___x_3896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3894_);
lean_ctor_set(v___x_3896_, 1, v___x_3895_);
v___x_3897_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_p_3807_, v___x_3896_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_);
lean_dec(v_p_3807_);
v_a_3898_ = lean_ctor_get(v___x_3897_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3897_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3897_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3897_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
}
else
{
lean_object* v_a_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3913_; 
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_3906_ = lean_ctor_get(v___x_3883_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3883_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3908_ = v___x_3883_;
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_a_3906_);
lean_dec(v___x_3883_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3911_; 
if (v_isShared_3909_ == 0)
{
v___x_3911_ = v___x_3908_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_a_3906_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
}
else
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3921_; 
lean_dec(v___y_3874_);
lean_dec(v___y_3873_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_3914_ = lean_ctor_get(v___x_3881_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3881_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3916_ = v___x_3881_;
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3881_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
lean_object* v___x_3919_; 
if (v_isShared_3917_ == 0)
{
v___x_3919_ = v___x_3916_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3914_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
}
v___jp_3922_:
{
uint8_t v___x_3931_; lean_object* v___x_3932_; 
v___x_3931_ = 0;
lean_inc(v___y_3924_);
v___x_3932_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v___y_3924_, v___x_3931_, v___y_3929_, v___y_3930_);
if (lean_obj_tag(v___x_3932_) == 0)
{
lean_object* v_a_3933_; 
v_a_3933_ = lean_ctor_get(v___x_3932_, 0);
lean_inc(v_a_3933_);
lean_dec_ref_known(v___x_3932_, 1);
if (lean_obj_tag(v_a_3933_) == 1)
{
lean_object* v_val_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; 
lean_dec(v___y_3924_);
v_val_3934_ = lean_ctor_get(v_a_3933_, 0);
lean_inc_n(v_val_3934_, 2);
lean_dec_ref_known(v_a_3933_, 1);
v___x_3935_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertCasesTypes(v_params_3806_, v_val_3934_, v___x_3931_);
v___x_3936_ = l_Lean_Meta_isInductivePredicate_x3f(v_val_3934_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3947_; 
v_a_3937_ = lean_ctor_get(v___x_3936_, 0);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3936_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3939_ = v___x_3936_;
v_isShared_3940_ = v_isSharedCheck_3947_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3936_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3947_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
if (lean_obj_tag(v_a_3937_) == 1)
{
lean_object* v_val_3941_; lean_object* v_ctors_3942_; lean_object* v___x_3943_; 
lean_del_object(v___x_3939_);
v_val_3941_ = lean_ctor_get(v_a_3937_, 0);
lean_inc(v_val_3941_);
lean_dec_ref_known(v_a_3937_, 1);
v_ctors_3942_ = lean_ctor_get(v_val_3941_, 4);
lean_inc(v_ctors_3942_);
lean_dec(v_val_3941_);
v___x_3943_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_3807_, v_id_3809_, v_minIndexable_3810_, v_ctors_3942_, v___x_3935_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
lean_dec(v_ctors_3942_);
lean_dec(v_p_3807_);
return v___x_3943_;
}
else
{
lean_object* v___x_3945_; 
lean_dec(v_a_3937_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
if (v_isShared_3940_ == 0)
{
lean_ctor_set(v___x_3939_, 0, v___x_3935_);
v___x_3945_ = v___x_3939_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v___x_3935_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
else
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3955_; 
lean_dec_ref(v___x_3935_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
v_a_3948_ = lean_ctor_get(v___x_3936_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3936_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3950_ = v___x_3936_;
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3936_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3953_; 
if (v_isShared_3951_ == 0)
{
v___x_3953_ = v___x_3950_;
goto v_reusejp_3952_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v_a_3948_);
v___x_3953_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3952_;
}
v_reusejp_3952_:
{
return v___x_3953_;
}
}
}
}
else
{
lean_object* v_symPrios_3956_; lean_object* v___x_3957_; 
lean_dec(v_a_3933_);
v_symPrios_3956_ = lean_ctor_get(v_params_3806_, 5);
lean_inc_ref(v_symPrios_3956_);
lean_inc(v___y_3924_);
v___x_3957_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl(v___y_3924_, v_symPrios_3956_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; uint8_t v___x_3959_; 
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
lean_inc(v_a_3958_);
lean_dec_ref_known(v___x_3957_, 1);
v___x_3959_ = lean_unbox(v_a_3958_);
lean_dec(v_a_3958_);
if (v___x_3959_ == 0)
{
lean_object* v_toCold_3960_; lean_object* v_currRecDepth_3961_; lean_object* v_ref_3962_; uint16_t v_optionFlags_3963_; uint8_t v_suppressElabErrors_3964_; uint8_t v_isRecordingDeps_3965_; lean_object* v___x_3966_; lean_object* v_ref_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v_toCold_3960_ = lean_ctor_get(v___y_3929_, 0);
v_currRecDepth_3961_ = lean_ctor_get(v___y_3929_, 1);
v_ref_3962_ = lean_ctor_get(v___y_3929_, 2);
v_optionFlags_3963_ = lean_ctor_get_uint16(v___y_3929_, sizeof(void*)*3);
v_suppressElabErrors_3964_ = lean_ctor_get_uint8(v___y_3929_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3965_ = lean_ctor_get_uint8(v___y_3929_, sizeof(void*)*3 + 3);
v___x_3966_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl___closed__1));
v_ref_3967_ = l_Lean_replaceRef(v_p_3807_, v_ref_3962_);
lean_dec(v_p_3807_);
lean_inc(v_currRecDepth_3961_);
lean_inc_ref(v_toCold_3960_);
v___x_3968_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3968_, 0, v_toCold_3960_);
lean_ctor_set(v___x_3968_, 1, v_currRecDepth_3961_);
lean_ctor_set(v___x_3968_, 2, v_ref_3967_);
lean_ctor_set_uint16(v___x_3968_, sizeof(void*)*3, v_optionFlags_3963_);
lean_ctor_set_uint8(v___x_3968_, sizeof(void*)*3 + 2, v_suppressElabErrors_3964_);
lean_ctor_set_uint8(v___x_3968_, sizeof(void*)*3 + 3, v_isRecordingDeps_3965_);
v___x_3969_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_3806_, v_id_3809_, v___y_3924_, v___x_3966_, v_minIndexable_3810_, v___y_3923_, v___y_3923_, v___y_3927_, v___y_3928_, v___x_3968_, v___y_3930_);
lean_dec_ref_known(v___x_3968_, 3);
return v___x_3969_;
}
else
{
lean_object* v_toCold_3970_; lean_object* v_currRecDepth_3971_; lean_object* v_ref_3972_; uint16_t v_optionFlags_3973_; uint8_t v_suppressElabErrors_3974_; uint8_t v_isRecordingDeps_3975_; lean_object* v_ref_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; 
lean_dec(v_id_3809_);
v_toCold_3970_ = lean_ctor_get(v___y_3929_, 0);
v_currRecDepth_3971_ = lean_ctor_get(v___y_3929_, 1);
v_ref_3972_ = lean_ctor_get(v___y_3929_, 2);
v_optionFlags_3973_ = lean_ctor_get_uint16(v___y_3929_, sizeof(void*)*3);
v_suppressElabErrors_3974_ = lean_ctor_get_uint8(v___y_3929_, sizeof(void*)*3 + 2);
v_isRecordingDeps_3975_ = lean_ctor_get_uint8(v___y_3929_, sizeof(void*)*3 + 3);
v_ref_3976_ = l_Lean_replaceRef(v_p_3807_, v_ref_3972_);
lean_dec(v_p_3807_);
lean_inc(v_currRecDepth_3971_);
lean_inc_ref(v_toCold_3970_);
v___x_3977_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_3977_, 0, v_toCold_3970_);
lean_ctor_set(v___x_3977_, 1, v_currRecDepth_3971_);
lean_ctor_set(v___x_3977_, 2, v_ref_3976_);
lean_ctor_set_uint16(v___x_3977_, sizeof(void*)*3, v_optionFlags_3973_);
lean_ctor_set_uint8(v___x_3977_, sizeof(void*)*3 + 2, v_suppressElabErrors_3974_);
lean_ctor_set_uint8(v___x_3977_, sizeof(void*)*3 + 3, v_isRecordingDeps_3975_);
v___x_3978_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_addFact(v_params_3806_, v___y_3924_, v_minIndexable_3810_, v___y_3927_, v___y_3928_, v___x_3977_, v___y_3930_);
lean_dec_ref_known(v___x_3977_, 3);
return v___x_3978_;
}
}
else
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3986_; 
lean_dec(v___y_3924_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_3979_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3981_ = v___x_3957_;
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3957_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v___x_3984_; 
if (v_isShared_3982_ == 0)
{
v___x_3984_ = v___x_3981_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_a_3979_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
}
}
}
else
{
lean_object* v_a_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_3994_; 
lean_dec(v___y_3924_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_3987_ = lean_ctor_get(v___x_3932_, 0);
v_isSharedCheck_3994_ = !lean_is_exclusive(v___x_3932_);
if (v_isSharedCheck_3994_ == 0)
{
v___x_3989_ = v___x_3932_;
v_isShared_3990_ = v_isSharedCheck_3994_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_a_3987_);
lean_dec(v___x_3932_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_3994_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v___x_3992_; 
if (v_isShared_3990_ == 0)
{
v___x_3992_ = v___x_3989_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v_a_3987_);
v___x_3992_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
return v___x_3992_;
}
}
}
}
v___jp_3995_:
{
uint8_t v___x_3997_; lean_object* v___x_3998_; 
v___x_3997_ = 1;
lean_inc(v_a_3996_);
v___x_3998_ = l_Lean_Elab_Term_checkDeprecatedCore___redArg(v_a_3996_, v___x_3997_, v_a_3813_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_dec_ref_known(v___x_3998_, 1);
if (lean_obj_tag(v_mod_x3f_3808_) == 1)
{
lean_object* v_val_3999_; lean_object* v___x_4000_; 
v_val_3999_ = lean_ctor_get(v_mod_x3f_3808_, 0);
lean_inc(v_val_3999_);
lean_dec_ref_known(v_mod_x3f_3808_, 1);
v___x_4000_ = l_Lean_Meta_Grind_getAttrKindCore(v_val_3999_, v_a_3817_, v_a_3818_);
if (lean_obj_tag(v___x_4000_) == 0)
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4203_; 
v_a_4001_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4203_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4203_ == 0)
{
v___x_4003_ = v___x_4000_;
v_isShared_4004_ = v_isSharedCheck_4203_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v___x_4000_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4203_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
switch(lean_obj_tag(v_a_4001_))
{
case 0:
{
lean_object* v_k_4005_; 
lean_del_object(v___x_4003_);
v_k_4005_ = lean_ctor_get(v_a_4001_, 0);
lean_inc(v_k_4005_);
lean_dec_ref_known(v_a_4001_, 1);
if (lean_obj_tag(v_k_4005_) == 9)
{
lean_dec(v_id_3809_);
if (v_only_3811_ == 0)
{
lean_object* v_toCold_4006_; lean_object* v_currRecDepth_4007_; lean_object* v_ref_4008_; uint16_t v_optionFlags_4009_; uint8_t v_suppressElabErrors_4010_; uint8_t v_isRecordingDeps_4011_; lean_object* v_ref_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v_toCold_4006_ = lean_ctor_get(v_a_3817_, 0);
v_currRecDepth_4007_ = lean_ctor_get(v_a_3817_, 1);
v_ref_4008_ = lean_ctor_get(v_a_3817_, 2);
v_optionFlags_4009_ = lean_ctor_get_uint16(v_a_3817_, sizeof(void*)*3);
v_suppressElabErrors_4010_ = lean_ctor_get_uint8(v_a_3817_, sizeof(void*)*3 + 2);
v_isRecordingDeps_4011_ = lean_ctor_get_uint8(v_a_3817_, sizeof(void*)*3 + 3);
v_ref_4012_ = l_Lean_replaceRef(v_p_3807_, v_ref_4008_);
lean_inc(v_currRecDepth_4007_);
lean_inc_ref(v_toCold_4006_);
v___x_4013_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_4013_, 0, v_toCold_4006_);
lean_ctor_set(v___x_4013_, 1, v_currRecDepth_4007_);
lean_ctor_set(v___x_4013_, 2, v_ref_4012_);
lean_ctor_set_uint16(v___x_4013_, sizeof(void*)*3, v_optionFlags_4009_);
lean_ctor_set_uint8(v___x_4013_, sizeof(void*)*3 + 2, v_suppressElabErrors_4010_);
lean_ctor_set_uint8(v___x_4013_, sizeof(void*)*3 + 3, v_isRecordingDeps_4011_);
v___x_4014_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v___x_4013_, v_a_3818_);
lean_dec_ref_known(v___x_4013_, 3);
if (lean_obj_tag(v___x_4014_) == 0)
{
lean_dec_ref_known(v___x_4014_, 1);
v___y_3873_ = v_k_4005_;
v___y_3874_ = v_a_3996_;
v___y_3875_ = v_a_3813_;
v___y_3876_ = v_a_3814_;
v___y_3877_ = v_a_3815_;
v___y_3878_ = v_a_3816_;
v___y_3879_ = v_a_3817_;
v___y_3880_ = v_a_3818_;
goto v___jp_3872_;
}
else
{
lean_object* v_a_4015_; lean_object* v___x_4017_; uint8_t v_isShared_4018_; uint8_t v_isSharedCheck_4022_; 
lean_dec(v_a_3996_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_4015_ = lean_ctor_get(v___x_4014_, 0);
v_isSharedCheck_4022_ = !lean_is_exclusive(v___x_4014_);
if (v_isSharedCheck_4022_ == 0)
{
v___x_4017_ = v___x_4014_;
v_isShared_4018_ = v_isSharedCheck_4022_;
goto v_resetjp_4016_;
}
else
{
lean_inc(v_a_4015_);
lean_dec(v___x_4014_);
v___x_4017_ = lean_box(0);
v_isShared_4018_ = v_isSharedCheck_4022_;
goto v_resetjp_4016_;
}
v_resetjp_4016_:
{
lean_object* v___x_4020_; 
if (v_isShared_4018_ == 0)
{
v___x_4020_ = v___x_4017_;
goto v_reusejp_4019_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v_a_4015_);
v___x_4020_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4019_;
}
v_reusejp_4019_:
{
return v___x_4020_;
}
}
}
}
else
{
v___y_3873_ = v_k_4005_;
v___y_3874_ = v_a_3996_;
v___y_3875_ = v_a_3813_;
v___y_3876_ = v_a_3814_;
v___y_3877_ = v_a_3815_;
v___y_3878_ = v_a_3816_;
v___y_3879_ = v_a_3817_;
v___y_3880_ = v_a_3818_;
goto v___jp_3872_;
}
}
else
{
lean_object* v_toCold_4023_; lean_object* v_currRecDepth_4024_; lean_object* v_ref_4025_; uint16_t v_optionFlags_4026_; uint8_t v_suppressElabErrors_4027_; uint8_t v_isRecordingDeps_4028_; uint8_t v___x_4029_; lean_object* v_ref_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
v_toCold_4023_ = lean_ctor_get(v_a_3817_, 0);
v_currRecDepth_4024_ = lean_ctor_get(v_a_3817_, 1);
v_ref_4025_ = lean_ctor_get(v_a_3817_, 2);
v_optionFlags_4026_ = lean_ctor_get_uint16(v_a_3817_, sizeof(void*)*3);
v_suppressElabErrors_4027_ = lean_ctor_get_uint8(v_a_3817_, sizeof(void*)*3 + 2);
v_isRecordingDeps_4028_ = lean_ctor_get_uint8(v_a_3817_, sizeof(void*)*3 + 3);
v___x_4029_ = 0;
v_ref_4030_ = l_Lean_replaceRef(v_p_3807_, v_ref_4025_);
lean_dec(v_p_3807_);
lean_inc(v_currRecDepth_4024_);
lean_inc_ref(v_toCold_4023_);
v___x_4031_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_4031_, 0, v_toCold_4023_);
lean_ctor_set(v___x_4031_, 1, v_currRecDepth_4024_);
lean_ctor_set(v___x_4031_, 2, v_ref_4030_);
lean_ctor_set_uint16(v___x_4031_, sizeof(void*)*3, v_optionFlags_4026_);
lean_ctor_set_uint8(v___x_4031_, sizeof(void*)*3 + 2, v_suppressElabErrors_4027_);
lean_ctor_set_uint8(v___x_4031_, sizeof(void*)*3 + 3, v_isRecordingDeps_4028_);
v___x_4032_ = l_Lean_Elab_Tactic_addEMatchTheorem(v_params_3806_, v_id_3809_, v_a_3996_, v_k_4005_, v_minIndexable_3810_, v___x_4029_, v___x_3997_, v_a_3815_, v_a_3816_, v___x_4031_, v_a_3818_);
lean_dec_ref_known(v___x_4031_, 3);
return v___x_4032_;
}
}
case 1:
{
lean_del_object(v___x_4003_);
lean_dec(v_id_3809_);
if (v_incremental_3812_ == 0)
{
uint8_t v_eager_4033_; 
v_eager_4033_ = lean_ctor_get_uint8(v_a_4001_, 0);
lean_dec_ref_known(v_a_4001_, 0);
v___y_3831_ = v_a_3996_;
v___y_3832_ = v_eager_4033_;
v___y_3833_ = v_a_3815_;
v___y_3834_ = v_a_3816_;
v___y_3835_ = v_a_3817_;
v___y_3836_ = v_a_3818_;
goto v___jp_3830_;
}
else
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v_a_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4043_; 
lean_dec_ref_known(v_a_4001_, 0);
lean_dec(v_a_3996_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4034_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5);
v___x_4035_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_4034_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
v_a_4036_ = lean_ctor_get(v___x_4035_, 0);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_4035_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4038_ = v___x_4035_;
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_a_4036_);
lean_dec(v___x_4035_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
lean_object* v___x_4041_; 
if (v_isShared_4039_ == 0)
{
v___x_4041_ = v___x_4038_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_a_4036_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
}
}
case 2:
{
uint8_t v___x_4044_; lean_object* v___x_4045_; 
lean_del_object(v___x_4003_);
v___x_4044_ = 0;
lean_inc(v_a_3996_);
v___x_4045_ = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(v_a_3996_, v___x_4044_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
if (lean_obj_tag(v___x_4045_) == 0)
{
lean_object* v_a_4046_; 
v_a_4046_ = lean_ctor_get(v___x_4045_, 0);
lean_inc(v_a_4046_);
lean_dec_ref_known(v___x_4045_, 1);
if (lean_obj_tag(v_a_4046_) == 1)
{
lean_dec(v_a_3996_);
if (v_incremental_3812_ == 0)
{
lean_object* v_val_4047_; 
v_val_4047_ = lean_ctor_get(v_a_4046_, 0);
lean_inc(v_val_4047_);
lean_dec_ref_known(v_a_4046_, 1);
v___y_3821_ = v_val_4047_;
v___y_3822_ = v_a_3813_;
v___y_3823_ = v_a_3814_;
v___y_3824_ = v_a_3815_;
v___y_3825_ = v_a_3816_;
v___y_3826_ = v_a_3817_;
v___y_3827_ = v_a_3818_;
goto v___jp_3820_;
}
else
{
lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v_a_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4057_; 
lean_dec_ref_known(v_a_4046_, 1);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4048_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__5);
v___x_4049_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_4048_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
v_a_4050_ = lean_ctor_get(v___x_4049_, 0);
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4049_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4052_ = v___x_4049_;
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_a_4050_);
lean_dec(v___x_4049_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4055_; 
if (v_isShared_4053_ == 0)
{
v___x_4055_ = v___x_4052_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4050_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
return v___x_4055_;
}
}
}
}
else
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v_a_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4071_; 
lean_dec(v_a_4046_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4058_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__7);
v___x_4059_ = l_Lean_MessageData_ofConstName(v_a_3996_, v___x_4044_);
v___x_4060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4058_);
lean_ctor_set(v___x_4060_, 1, v___x_4059_);
v___x_4061_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__9);
v___x_4062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4060_);
lean_ctor_set(v___x_4062_, 1, v___x_4061_);
v___x_4063_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_4062_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
v_a_4064_ = lean_ctor_get(v___x_4063_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v___x_4063_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4066_ = v___x_4063_;
v_isShared_4067_ = v_isSharedCheck_4071_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_a_4064_);
lean_dec(v___x_4063_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4071_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
lean_object* v___x_4069_; 
if (v_isShared_4067_ == 0)
{
v___x_4069_ = v___x_4066_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v_a_4064_);
v___x_4069_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
return v___x_4069_;
}
}
}
}
else
{
lean_object* v_a_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4079_; 
lean_dec(v_a_3996_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_4072_ = lean_ctor_get(v___x_4045_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4045_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4074_ = v___x_4045_;
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_a_4072_);
lean_dec(v___x_4045_);
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
case 3:
{
lean_del_object(v___x_4003_);
v___y_3923_ = v___x_3997_;
v___y_3924_ = v_a_3996_;
v___y_3925_ = v_a_3813_;
v___y_3926_ = v_a_3814_;
v___y_3927_ = v_a_3815_;
v___y_3928_ = v_a_3816_;
v___y_3929_ = v_a_3817_;
v___y_3930_ = v_a_3818_;
goto v___jp_3922_;
}
case 4:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v_a_4082_; lean_object* v___x_4084_; uint8_t v_isShared_4085_; uint8_t v_isSharedCheck_4089_; 
lean_del_object(v___x_4003_);
lean_dec(v_a_3996_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4080_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__11);
v___x_4081_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_4080_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
v_a_4082_ = lean_ctor_get(v___x_4081_, 0);
v_isSharedCheck_4089_ = !lean_is_exclusive(v___x_4081_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_4084_ = v___x_4081_;
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
else
{
lean_inc(v_a_4082_);
lean_dec(v___x_4081_);
v___x_4084_ = lean_box(0);
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
v_resetjp_4083_:
{
lean_object* v___x_4087_; 
if (v_isShared_4085_ == 0)
{
v___x_4087_ = v___x_4084_;
goto v_reusejp_4086_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v_a_4082_);
v___x_4087_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4086_;
}
v_reusejp_4086_:
{
return v___x_4087_;
}
}
}
case 5:
{
lean_object* v_prio_4090_; lean_object* v___x_4091_; 
lean_del_object(v___x_4003_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
v_prio_4090_ = lean_ctor_get(v_a_4001_, 0);
lean_inc(v_prio_4090_);
lean_dec_ref_known(v_a_4001_, 1);
v___x_4091_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_ensureNoMinIndexable(v_minIndexable_3810_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v___x_4093_; uint8_t v_isShared_4094_; uint8_t v_isSharedCheck_4115_; 
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4115_ == 0)
{
lean_object* v_unused_4116_; 
v_unused_4116_ = lean_ctor_get(v___x_4091_, 0);
lean_dec(v_unused_4116_);
v___x_4093_ = v___x_4091_;
v_isShared_4094_ = v_isSharedCheck_4115_;
goto v_resetjp_4092_;
}
else
{
lean_dec(v___x_4091_);
v___x_4093_ = lean_box(0);
v_isShared_4094_ = v_isSharedCheck_4115_;
goto v_resetjp_4092_;
}
v_resetjp_4092_:
{
lean_object* v_config_4095_; lean_object* v_extensions_4096_; lean_object* v_extra_4097_; lean_object* v_extraInj_4098_; lean_object* v_extraFacts_4099_; lean_object* v_symPrios_4100_; lean_object* v_norm_4101_; lean_object* v_normProcs_4102_; lean_object* v_anchorRefs_x3f_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4114_; 
v_config_4095_ = lean_ctor_get(v_params_3806_, 0);
v_extensions_4096_ = lean_ctor_get(v_params_3806_, 1);
v_extra_4097_ = lean_ctor_get(v_params_3806_, 2);
v_extraInj_4098_ = lean_ctor_get(v_params_3806_, 3);
v_extraFacts_4099_ = lean_ctor_get(v_params_3806_, 4);
v_symPrios_4100_ = lean_ctor_get(v_params_3806_, 5);
v_norm_4101_ = lean_ctor_get(v_params_3806_, 6);
v_normProcs_4102_ = lean_ctor_get(v_params_3806_, 7);
v_anchorRefs_x3f_4103_ = lean_ctor_get(v_params_3806_, 8);
v_isSharedCheck_4114_ = !lean_is_exclusive(v_params_3806_);
if (v_isSharedCheck_4114_ == 0)
{
v___x_4105_ = v_params_3806_;
v_isShared_4106_ = v_isSharedCheck_4114_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_anchorRefs_x3f_4103_);
lean_inc(v_normProcs_4102_);
lean_inc(v_norm_4101_);
lean_inc(v_symPrios_4100_);
lean_inc(v_extraFacts_4099_);
lean_inc(v_extraInj_4098_);
lean_inc(v_extra_4097_);
lean_inc(v_extensions_4096_);
lean_inc(v_config_4095_);
lean_dec(v_params_3806_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4114_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4107_; lean_object* v___x_4109_; 
v___x_4107_ = l_Lean_Meta_Grind_SymbolPriorities_insert(v_symPrios_4100_, v_a_3996_, v_prio_4090_);
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 5, v___x_4107_);
v___x_4109_ = v___x_4105_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v_config_4095_);
lean_ctor_set(v_reuseFailAlloc_4113_, 1, v_extensions_4096_);
lean_ctor_set(v_reuseFailAlloc_4113_, 2, v_extra_4097_);
lean_ctor_set(v_reuseFailAlloc_4113_, 3, v_extraInj_4098_);
lean_ctor_set(v_reuseFailAlloc_4113_, 4, v_extraFacts_4099_);
lean_ctor_set(v_reuseFailAlloc_4113_, 5, v___x_4107_);
lean_ctor_set(v_reuseFailAlloc_4113_, 6, v_norm_4101_);
lean_ctor_set(v_reuseFailAlloc_4113_, 7, v_normProcs_4102_);
lean_ctor_set(v_reuseFailAlloc_4113_, 8, v_anchorRefs_x3f_4103_);
v___x_4109_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
lean_object* v___x_4111_; 
if (v_isShared_4094_ == 0)
{
lean_ctor_set(v___x_4093_, 0, v___x_4109_);
v___x_4111_ = v___x_4093_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v___x_4109_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
}
}
else
{
lean_object* v_a_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4124_; 
lean_dec(v_prio_4090_);
lean_dec(v_a_3996_);
lean_dec_ref(v_params_3806_);
v_a_4117_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4119_ = v___x_4091_;
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_a_4117_);
lean_dec(v___x_4091_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
lean_object* v___x_4122_; 
if (v_isShared_4120_ == 0)
{
v___x_4122_ = v___x_4119_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4117_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
}
case 6:
{
lean_object* v___x_4125_; 
lean_del_object(v___x_4003_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
v___x_4125_ = l_Lean_Meta_Grind_mkInjectiveTheorem(v_a_3996_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v_a_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4150_; 
v_a_4126_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4128_ = v___x_4125_;
v_isShared_4129_ = v_isSharedCheck_4150_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_a_4126_);
lean_dec(v___x_4125_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4150_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v_config_4130_; lean_object* v_extensions_4131_; lean_object* v_extra_4132_; lean_object* v_extraInj_4133_; lean_object* v_extraFacts_4134_; lean_object* v_symPrios_4135_; lean_object* v_norm_4136_; lean_object* v_normProcs_4137_; lean_object* v_anchorRefs_x3f_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4149_; 
v_config_4130_ = lean_ctor_get(v_params_3806_, 0);
v_extensions_4131_ = lean_ctor_get(v_params_3806_, 1);
v_extra_4132_ = lean_ctor_get(v_params_3806_, 2);
v_extraInj_4133_ = lean_ctor_get(v_params_3806_, 3);
v_extraFacts_4134_ = lean_ctor_get(v_params_3806_, 4);
v_symPrios_4135_ = lean_ctor_get(v_params_3806_, 5);
v_norm_4136_ = lean_ctor_get(v_params_3806_, 6);
v_normProcs_4137_ = lean_ctor_get(v_params_3806_, 7);
v_anchorRefs_x3f_4138_ = lean_ctor_get(v_params_3806_, 8);
v_isSharedCheck_4149_ = !lean_is_exclusive(v_params_3806_);
if (v_isSharedCheck_4149_ == 0)
{
v___x_4140_ = v_params_3806_;
v_isShared_4141_ = v_isSharedCheck_4149_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_anchorRefs_x3f_4138_);
lean_inc(v_normProcs_4137_);
lean_inc(v_norm_4136_);
lean_inc(v_symPrios_4135_);
lean_inc(v_extraFacts_4134_);
lean_inc(v_extraInj_4133_);
lean_inc(v_extra_4132_);
lean_inc(v_extensions_4131_);
lean_inc(v_config_4130_);
lean_dec(v_params_3806_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4149_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4142_; lean_object* v___x_4144_; 
v___x_4142_ = l_Lean_PersistentArray_push___redArg(v_extraInj_4133_, v_a_4126_);
if (v_isShared_4141_ == 0)
{
lean_ctor_set(v___x_4140_, 3, v___x_4142_);
v___x_4144_ = v___x_4140_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_config_4130_);
lean_ctor_set(v_reuseFailAlloc_4148_, 1, v_extensions_4131_);
lean_ctor_set(v_reuseFailAlloc_4148_, 2, v_extra_4132_);
lean_ctor_set(v_reuseFailAlloc_4148_, 3, v___x_4142_);
lean_ctor_set(v_reuseFailAlloc_4148_, 4, v_extraFacts_4134_);
lean_ctor_set(v_reuseFailAlloc_4148_, 5, v_symPrios_4135_);
lean_ctor_set(v_reuseFailAlloc_4148_, 6, v_norm_4136_);
lean_ctor_set(v_reuseFailAlloc_4148_, 7, v_normProcs_4137_);
lean_ctor_set(v_reuseFailAlloc_4148_, 8, v_anchorRefs_x3f_4138_);
v___x_4144_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
lean_object* v___x_4146_; 
if (v_isShared_4129_ == 0)
{
lean_ctor_set(v___x_4128_, 0, v___x_4144_);
v___x_4146_ = v___x_4128_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v___x_4144_);
v___x_4146_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
return v___x_4146_;
}
}
}
}
}
else
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4158_; 
lean_dec_ref(v_params_3806_);
v_a_4151_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4158_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4158_ == 0)
{
v___x_4153_ = v___x_4125_;
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___x_4125_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
return v___x_4156_;
}
}
}
}
case 7:
{
lean_object* v___x_4159_; lean_object* v___x_4161_; 
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
v___x_4159_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_insertFunCC(v_params_3806_, v_a_3996_);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 0, v___x_4159_);
v___x_4161_ = v___x_4003_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v___x_4159_);
v___x_4161_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
return v___x_4161_;
}
}
case 8:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v_a_4165_; lean_object* v___x_4167_; uint8_t v_isShared_4168_; uint8_t v_isSharedCheck_4172_; 
lean_dec_ref_known(v_a_4001_, 0);
lean_del_object(v___x_4003_);
lean_dec(v_a_3996_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4163_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__13);
v___x_4164_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_4163_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
v_isSharedCheck_4172_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4172_ == 0)
{
v___x_4167_ = v___x_4164_;
v_isShared_4168_ = v_isSharedCheck_4172_;
goto v_resetjp_4166_;
}
else
{
lean_inc(v_a_4165_);
lean_dec(v___x_4164_);
v___x_4167_ = lean_box(0);
v_isShared_4168_ = v_isSharedCheck_4172_;
goto v_resetjp_4166_;
}
v_resetjp_4166_:
{
lean_object* v___x_4170_; 
if (v_isShared_4168_ == 0)
{
v___x_4170_ = v___x_4167_;
goto v_reusejp_4169_;
}
else
{
lean_object* v_reuseFailAlloc_4171_; 
v_reuseFailAlloc_4171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4171_, 0, v_a_4165_);
v___x_4170_ = v_reuseFailAlloc_4171_;
goto v_reusejp_4169_;
}
v_reusejp_4169_:
{
return v___x_4170_;
}
}
}
case 9:
{
lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4182_; 
lean_del_object(v___x_4003_);
lean_dec(v_a_3996_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4173_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__15);
v___x_4174_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_4173_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
v_a_4175_ = lean_ctor_get(v___x_4174_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___x_4174_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4177_ = v___x_4174_;
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_dec(v___x_4174_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4180_; 
if (v_isShared_4178_ == 0)
{
v___x_4180_ = v___x_4177_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4175_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
return v___x_4180_;
}
}
}
case 10:
{
lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_dec_ref_known(v_a_4001_, 0);
lean_del_object(v___x_4003_);
lean_dec(v_a_3996_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4183_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__17);
v___x_4184_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_4183_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
v_a_4185_ = lean_ctor_get(v___x_4184_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4184_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4184_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4184_);
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
default: 
{
lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4202_; 
lean_del_object(v___x_4003_);
lean_dec(v_a_3996_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v___x_4193_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___closed__19);
v___x_4194_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_4193_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
v_a_4195_ = lean_ctor_get(v___x_4194_, 0);
v_isSharedCheck_4202_ = !lean_is_exclusive(v___x_4194_);
if (v_isSharedCheck_4202_ == 0)
{
v___x_4197_ = v___x_4194_;
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4194_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4202_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4198_ == 0)
{
v___x_4200_ = v___x_4197_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4201_; 
v_reuseFailAlloc_4201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4201_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4201_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
return v___x_4200_;
}
}
}
}
}
}
else
{
lean_object* v_a_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4211_; 
lean_dec(v_a_3996_);
lean_dec(v_id_3809_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_4204_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4211_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4211_ == 0)
{
v___x_4206_ = v___x_4000_;
v_isShared_4207_ = v_isSharedCheck_4211_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_a_4204_);
lean_dec(v___x_4000_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4211_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
lean_object* v___x_4209_; 
if (v_isShared_4207_ == 0)
{
v___x_4209_ = v___x_4206_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_a_4204_);
v___x_4209_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
return v___x_4209_;
}
}
}
}
else
{
lean_dec(v_mod_x3f_3808_);
v___y_3923_ = v___x_3997_;
v___y_3924_ = v_a_3996_;
v___y_3925_ = v_a_3813_;
v___y_3926_ = v_a_3814_;
v___y_3927_ = v_a_3815_;
v___y_3928_ = v_a_3816_;
v___y_3929_ = v_a_3817_;
v___y_3930_ = v_a_3818_;
goto v___jp_3922_;
}
}
else
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4219_; 
lean_dec(v_a_3996_);
lean_dec(v_id_3809_);
lean_dec(v_mod_x3f_3808_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_4212_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4219_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4214_ = v___x_3998_;
v_isShared_4215_ = v_isSharedCheck_4219_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v___x_3998_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4219_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
lean_object* v___x_4217_; 
if (v_isShared_4215_ == 0)
{
v___x_4217_ = v___x_4214_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v_a_4212_);
v___x_4217_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
return v___x_4217_;
}
}
}
}
v___jp_4220_:
{
lean_object* v_a_4222_; lean_object* v___x_4224_; uint8_t v_isShared_4225_; uint8_t v_isSharedCheck_4231_; 
v_a_4222_ = lean_ctor_get(v___y_4221_, 0);
v_isSharedCheck_4231_ = !lean_is_exclusive(v___y_4221_);
if (v_isSharedCheck_4231_ == 0)
{
v___x_4224_ = v___y_4221_;
v_isShared_4225_ = v_isSharedCheck_4231_;
goto v_resetjp_4223_;
}
else
{
lean_inc(v_a_4222_);
lean_dec(v___y_4221_);
v___x_4224_ = lean_box(0);
v_isShared_4225_ = v_isSharedCheck_4231_;
goto v_resetjp_4223_;
}
v_resetjp_4223_:
{
if (lean_obj_tag(v_a_4222_) == 0)
{
lean_object* v_a_4226_; lean_object* v___x_4228_; 
lean_dec(v_id_3809_);
lean_dec(v_mod_x3f_3808_);
lean_dec(v_p_3807_);
lean_dec_ref(v_params_3806_);
v_a_4226_ = lean_ctor_get(v_a_4222_, 0);
lean_inc(v_a_4226_);
lean_dec_ref_known(v_a_4222_, 1);
if (v_isShared_4225_ == 0)
{
lean_ctor_set(v___x_4224_, 0, v_a_4226_);
v___x_4228_ = v___x_4224_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v_a_4226_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
return v___x_4228_;
}
}
else
{
lean_object* v_a_4230_; 
lean_del_object(v___x_4224_);
v_a_4230_ = lean_ctor_get(v_a_4222_, 0);
lean_inc(v_a_4230_);
lean_dec_ref_known(v_a_4222_, 1);
v_a_3996_ = v_a_4230_;
goto v___jp_3995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam___boxed(lean_object* v_params_4312_, lean_object* v_p_4313_, lean_object* v_mod_x3f_4314_, lean_object* v_id_4315_, lean_object* v_minIndexable_4316_, lean_object* v_only_4317_, lean_object* v_incremental_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_){
_start:
{
uint8_t v_minIndexable_boxed_4326_; uint8_t v_only_boxed_4327_; uint8_t v_incremental_boxed_4328_; lean_object* v_res_4329_; 
v_minIndexable_boxed_4326_ = lean_unbox(v_minIndexable_4316_);
v_only_boxed_4327_ = lean_unbox(v_only_4317_);
v_incremental_boxed_4328_ = lean_unbox(v_incremental_4318_);
v_res_4329_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_params_4312_, v_p_4313_, v_mod_x3f_4314_, v_id_4315_, v_minIndexable_boxed_4326_, v_only_boxed_4327_, v_incremental_boxed_4328_, v_a_4319_, v_a_4320_, v_a_4321_, v_a_4322_, v_a_4323_, v_a_4324_);
lean_dec(v_a_4324_);
lean_dec_ref(v_a_4323_);
lean_dec(v_a_4322_);
lean_dec_ref(v_a_4321_);
lean_dec(v_a_4320_);
lean_dec_ref(v_a_4319_);
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(lean_object* v_p_4330_, lean_object* v_id_4331_, uint8_t v_minIndexable_4332_, lean_object* v_as_4333_, lean_object* v_as_x27_4334_, lean_object* v_b_4335_, lean_object* v_a_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_){
_start:
{
lean_object* v___x_4344_; 
v___x_4344_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___redArg(v_p_4330_, v_id_4331_, v_minIndexable_4332_, v_as_x27_4334_, v_b_4335_, v___y_4339_, v___y_4340_, v___y_4341_, v___y_4342_);
return v___x_4344_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0___boxed(lean_object* v_p_4345_, lean_object* v_id_4346_, lean_object* v_minIndexable_4347_, lean_object* v_as_4348_, lean_object* v_as_x27_4349_, lean_object* v_b_4350_, lean_object* v_a_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_){
_start:
{
uint8_t v_minIndexable_boxed_4359_; lean_object* v_res_4360_; 
v_minIndexable_boxed_4359_ = lean_unbox(v_minIndexable_4347_);
v_res_4360_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__0(v_p_4345_, v_id_4346_, v_minIndexable_boxed_4359_, v_as_4348_, v_as_x27_4349_, v_b_4350_, v_a_4351_, v___y_4352_, v___y_4353_, v___y_4354_, v___y_4355_, v___y_4356_, v___y_4357_);
lean_dec(v___y_4357_);
lean_dec_ref(v___y_4356_);
lean_dec(v___y_4355_);
lean_dec_ref(v___y_4354_);
lean_dec(v___y_4353_);
lean_dec_ref(v___y_4352_);
lean_dec(v_as_x27_4349_);
lean_dec(v_as_4348_);
lean_dec(v_p_4345_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(lean_object* v_as_4361_, lean_object* v_as_x27_4362_, lean_object* v_b_4363_, lean_object* v_a_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_){
_start:
{
lean_object* v___x_4372_; 
v___x_4372_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___redArg(v_as_x27_4362_, v_b_4363_);
return v___x_4372_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2___boxed(lean_object* v_as_4373_, lean_object* v_as_x27_4374_, lean_object* v_b_4375_, lean_object* v_a_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_){
_start:
{
lean_object* v_res_4384_; 
v_res_4384_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__2(v_as_4373_, v_as_x27_4374_, v_b_4375_, v_a_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
lean_dec(v___y_4382_);
lean_dec_ref(v___y_4381_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4379_);
lean_dec(v___y_4378_);
lean_dec_ref(v___y_4377_);
lean_dec(v_as_x27_4374_);
lean_dec(v_as_4373_);
return v_res_4384_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(lean_object* v_00_u03b1_4385_, lean_object* v_ref_4386_, lean_object* v_msg_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_){
_start:
{
lean_object* v___x_4395_; 
v___x_4395_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_ref_4386_, v_msg_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_, v___y_4393_);
return v___x_4395_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___boxed(lean_object* v_00_u03b1_4396_, lean_object* v_ref_4397_, lean_object* v_msg_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_){
_start:
{
lean_object* v_res_4406_; 
v_res_4406_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3(v_00_u03b1_4396_, v_ref_4397_, v_msg_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_, v___y_4403_, v___y_4404_);
lean_dec(v___y_4404_);
lean_dec_ref(v___y_4403_);
lean_dec(v___y_4402_);
lean_dec_ref(v___y_4401_);
lean_dec(v___y_4400_);
lean_dec_ref(v___y_4399_);
lean_dec(v_ref_4397_);
return v_res_4406_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(lean_object* v_p_4407_, lean_object* v_id_4408_, uint8_t v_minIndexable_4409_, lean_object* v_as_4410_, lean_object* v_as_x27_4411_, lean_object* v_b_4412_, lean_object* v_a_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_){
_start:
{
lean_object* v___x_4421_; 
v___x_4421_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___redArg(v_p_4407_, v_id_4408_, v_minIndexable_4409_, v_as_x27_4411_, v_b_4412_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_);
return v___x_4421_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4___boxed(lean_object* v_p_4422_, lean_object* v_id_4423_, lean_object* v_minIndexable_4424_, lean_object* v_as_4425_, lean_object* v_as_x27_4426_, lean_object* v_b_4427_, lean_object* v_a_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
uint8_t v_minIndexable_boxed_4436_; lean_object* v_res_4437_; 
v_minIndexable_boxed_4436_ = lean_unbox(v_minIndexable_4424_);
v_res_4437_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__4(v_p_4422_, v_id_4423_, v_minIndexable_boxed_4436_, v_as_4425_, v_as_x27_4426_, v_b_4427_, v_a_4428_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_, v___y_4434_);
lean_dec(v___y_4434_);
lean_dec_ref(v___y_4433_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
lean_dec(v___y_4430_);
lean_dec_ref(v___y_4429_);
lean_dec(v_as_x27_4426_);
lean_dec(v_as_4425_);
lean_dec(v_p_4422_);
return v_res_4437_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(lean_object* v_00_u03b4_4438_, lean_object* v_t_4439_, lean_object* v_k_4440_){
_start:
{
lean_object* v___x_4441_; 
v___x_4441_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___redArg(v_t_4439_, v_k_4440_);
return v___x_4441_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5___boxed(lean_object* v_00_u03b4_4442_, lean_object* v_t_4443_, lean_object* v_k_4444_){
_start:
{
lean_object* v_res_4445_; 
v_res_4445_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__5(v_00_u03b4_4442_, v_t_4443_, v_k_4444_);
lean_dec(v_k_4444_);
lean_dec(v_t_4443_);
return v_res_4445_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7(lean_object* v_givenName_4446_, uint8_t v_skipAuxDecl_4447_, lean_object* v_auxDeclToFullName_4448_, lean_object* v___x_4449_, lean_object* v_givenNameView_4450_, lean_object* v_as_4451_, lean_object* v_i_4452_, lean_object* v_a_4453_){
_start:
{
lean_object* v___x_4454_; 
v___x_4454_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___redArg(v_givenName_4446_, v_skipAuxDecl_4447_, v_auxDeclToFullName_4448_, v___x_4449_, v_givenNameView_4450_, v_as_4451_, v_i_4452_);
return v___x_4454_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7___boxed(lean_object* v_givenName_4455_, lean_object* v_skipAuxDecl_4456_, lean_object* v_auxDeclToFullName_4457_, lean_object* v___x_4458_, lean_object* v_givenNameView_4459_, lean_object* v_as_4460_, lean_object* v_i_4461_, lean_object* v_a_4462_){
_start:
{
uint8_t v_skipAuxDecl_boxed_4463_; lean_object* v_res_4464_; 
v_skipAuxDecl_boxed_4463_ = lean_unbox(v_skipAuxDecl_4456_);
v_res_4464_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__7(v_givenName_4455_, v_skipAuxDecl_boxed_4463_, v_auxDeclToFullName_4457_, v___x_4458_, v_givenNameView_4459_, v_as_4460_, v_i_4461_, v_a_4462_);
lean_dec_ref(v_as_4460_);
lean_dec(v_auxDeclToFullName_4457_);
lean_dec(v_givenName_4455_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10(lean_object* v_localDecl_x3f_4465_, lean_object* v_givenName_4466_, lean_object* v_as_4467_, lean_object* v_i_4468_, lean_object* v_a_4469_){
_start:
{
lean_object* v___x_4470_; 
v___x_4470_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___redArg(v_localDecl_x3f_4465_, v_givenName_4466_, v_as_4467_, v_i_4468_);
return v___x_4470_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10___boxed(lean_object* v_localDecl_x3f_4471_, lean_object* v_givenName_4472_, lean_object* v_as_4473_, lean_object* v_i_4474_, lean_object* v_a_4475_){
_start:
{
lean_object* v_res_4476_; 
v_res_4476_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__10(v_localDecl_x3f_4471_, v_givenName_4472_, v_as_4473_, v_i_4474_, v_a_4475_);
lean_dec_ref(v_as_4473_);
lean_dec(v_givenName_4472_);
lean_dec(v_localDecl_x3f_4471_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9(lean_object* v_givenName_4477_, uint8_t v_skipAuxDecl_4478_, lean_object* v_auxDeclToFullName_4479_, lean_object* v___x_4480_, lean_object* v_givenNameView_4481_, lean_object* v_as_4482_, lean_object* v_i_4483_, lean_object* v_a_4484_){
_start:
{
lean_object* v___x_4485_; 
v___x_4485_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___redArg(v_givenName_4477_, v_skipAuxDecl_4478_, v_auxDeclToFullName_4479_, v___x_4480_, v_givenNameView_4481_, v_as_4482_, v_i_4483_);
return v___x_4485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9___boxed(lean_object* v_givenName_4486_, lean_object* v_skipAuxDecl_4487_, lean_object* v_auxDeclToFullName_4488_, lean_object* v___x_4489_, lean_object* v_givenNameView_4490_, lean_object* v_as_4491_, lean_object* v_i_4492_, lean_object* v_a_4493_){
_start:
{
uint8_t v_skipAuxDecl_boxed_4494_; lean_object* v_res_4495_; 
v_skipAuxDecl_boxed_4494_ = lean_unbox(v_skipAuxDecl_4487_);
v_res_4495_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__6_spec__8_spec__9(v_givenName_4486_, v_skipAuxDecl_boxed_4494_, v_auxDeclToFullName_4488_, v___x_4489_, v_givenNameView_4490_, v_as_4491_, v_i_4492_, v_a_4493_);
lean_dec_ref(v_as_4491_);
lean_dec(v_auxDeclToFullName_4488_);
lean_dec(v_givenName_4486_);
return v_res_4495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13(lean_object* v_localDecl_x3f_4496_, lean_object* v_givenName_4497_, lean_object* v_as_4498_, lean_object* v_i_4499_, lean_object* v_a_4500_){
_start:
{
lean_object* v___x_4501_; 
v___x_4501_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___redArg(v_localDecl_x3f_4496_, v_givenName_4497_, v_as_4498_, v_i_4499_);
return v___x_4501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13___boxed(lean_object* v_localDecl_x3f_4502_, lean_object* v_givenName_4503_, lean_object* v_as_4504_, lean_object* v_i_4505_, lean_object* v_a_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__7_spec__11_spec__13(v_localDecl_x3f_4502_, v_givenName_4503_, v_as_4504_, v_i_4505_, v_a_4506_);
lean_dec_ref(v_as_4504_);
lean_dec(v_givenName_4503_);
lean_dec(v_localDecl_x3f_4502_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18(lean_object* v_opt_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_){
_start:
{
lean_object* v___x_4516_; 
v___x_4516_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___redArg(v_opt_4508_, v___y_4513_);
return v___x_4516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18___boxed(lean_object* v_opt_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__18(v_opt_4517_, v___y_4518_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_);
lean_dec(v___y_4523_);
lean_dec_ref(v___y_4522_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
lean_dec(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec_ref(v_opt_4517_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22(lean_object* v_ref_4526_, lean_object* v_msgData_4527_, uint8_t v_severity_4528_, uint8_t v_isSilent_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_){
_start:
{
lean_object* v___x_4537_; 
v___x_4537_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___redArg(v_ref_4526_, v_msgData_4527_, v_severity_4528_, v_isSilent_4529_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_);
return v___x_4537_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22___boxed(lean_object* v_ref_4538_, lean_object* v_msgData_4539_, lean_object* v_severity_4540_, lean_object* v_isSilent_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_){
_start:
{
uint8_t v_severity_boxed_4549_; uint8_t v_isSilent_boxed_4550_; lean_object* v_res_4551_; 
v_severity_boxed_4549_ = lean_unbox(v_severity_4540_);
v_isSilent_boxed_4550_ = lean_unbox(v_isSilent_4541_);
v_res_4551_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveLocalName_loop___at___00Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5_spec__8_spec__13_spec__17_spec__19_spec__21_spec__22(v_ref_4538_, v_msgData_4539_, v_severity_boxed_4549_, v_isSilent_boxed_4550_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_);
lean_dec(v___y_4547_);
lean_dec_ref(v___y_4546_);
lean_dec(v___y_4545_);
lean_dec_ref(v___y_4544_);
lean_dec(v___y_4543_);
lean_dec_ref(v___y_4542_);
lean_dec(v_ref_4538_);
return v_res_4551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(lean_object* v___x_4552_, uint8_t v___x_4553_, lean_object* v_b_4554_, lean_object* v_____r_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_){
_start:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4563_ = lean_box(0);
v___x_4564_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_4552_, v___x_4563_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4564_) == 0)
{
lean_object* v_a_4565_; lean_object* v___x_4566_; 
v_a_4565_ = lean_ctor_get(v___x_4564_, 0);
lean_inc_n(v_a_4565_, 2);
lean_dec_ref_known(v___x_4564_, 1);
v___x_4566_ = l_Lean_Elab_Term_checkDeprecatedCore___redArg(v_a_4565_, v___x_4553_, v___y_4556_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4566_) == 0)
{
uint8_t v___x_4567_; lean_object* v___x_4568_; 
lean_dec_ref_known(v___x_4566_, 1);
v___x_4567_ = 0;
lean_inc(v_a_4565_);
v___x_4568_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_a_4565_, v___x_4567_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4568_) == 0)
{
lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4628_; 
v_a_4569_ = lean_ctor_get(v___x_4568_, 0);
v_isSharedCheck_4628_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4628_ == 0)
{
v___x_4571_ = v___x_4568_;
v_isShared_4572_ = v_isSharedCheck_4628_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v___x_4568_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4628_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
if (lean_obj_tag(v_a_4569_) == 1)
{
lean_object* v_val_4573_; lean_object* v___x_4574_; 
lean_del_object(v___x_4571_);
lean_dec(v_a_4565_);
v_val_4573_ = lean_ctor_get(v_a_4569_, 0);
lean_inc_n(v_val_4573_, 2);
lean_dec_ref_known(v_a_4569_, 1);
v___x_4574_ = l_Lean_Meta_Grind_ensureNotBuiltinCases(v_val_4573_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4574_) == 0)
{
lean_object* v___x_4575_; 
lean_dec_ref_known(v___x_4574_, 1);
v___x_4575_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseCasesTypes(v_b_4554_, v_val_4573_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4575_) == 0)
{
lean_object* v_a_4576_; lean_object* v___x_4578_; uint8_t v_isShared_4579_; uint8_t v_isSharedCheck_4585_; 
v_a_4576_ = lean_ctor_get(v___x_4575_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v___x_4575_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4578_ = v___x_4575_;
v_isShared_4579_ = v_isSharedCheck_4585_;
goto v_resetjp_4577_;
}
else
{
lean_inc(v_a_4576_);
lean_dec(v___x_4575_);
v___x_4578_ = lean_box(0);
v_isShared_4579_ = v_isSharedCheck_4585_;
goto v_resetjp_4577_;
}
v_resetjp_4577_:
{
lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4583_; 
v___x_4580_ = lean_box(0);
v___x_4581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4581_, 0, v___x_4580_);
lean_ctor_set(v___x_4581_, 1, v_a_4576_);
if (v_isShared_4579_ == 0)
{
lean_ctor_set(v___x_4578_, 0, v___x_4581_);
v___x_4583_ = v___x_4578_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v___x_4581_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
return v___x_4583_;
}
}
}
else
{
lean_object* v_a_4586_; lean_object* v___x_4588_; uint8_t v_isShared_4589_; uint8_t v_isSharedCheck_4593_; 
v_a_4586_ = lean_ctor_get(v___x_4575_, 0);
v_isSharedCheck_4593_ = !lean_is_exclusive(v___x_4575_);
if (v_isSharedCheck_4593_ == 0)
{
v___x_4588_ = v___x_4575_;
v_isShared_4589_ = v_isSharedCheck_4593_;
goto v_resetjp_4587_;
}
else
{
lean_inc(v_a_4586_);
lean_dec(v___x_4575_);
v___x_4588_ = lean_box(0);
v_isShared_4589_ = v_isSharedCheck_4593_;
goto v_resetjp_4587_;
}
v_resetjp_4587_:
{
lean_object* v___x_4591_; 
if (v_isShared_4589_ == 0)
{
v___x_4591_ = v___x_4588_;
goto v_reusejp_4590_;
}
else
{
lean_object* v_reuseFailAlloc_4592_; 
v_reuseFailAlloc_4592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4592_, 0, v_a_4586_);
v___x_4591_ = v_reuseFailAlloc_4592_;
goto v_reusejp_4590_;
}
v_reusejp_4590_:
{
return v___x_4591_;
}
}
}
}
else
{
lean_object* v_a_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4601_; 
lean_dec(v_val_4573_);
lean_dec_ref(v_b_4554_);
v_a_4594_ = lean_ctor_get(v___x_4574_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v___x_4574_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4596_ = v___x_4574_;
v_isShared_4597_ = v_isSharedCheck_4601_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_a_4594_);
lean_dec(v___x_4574_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4601_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4599_; 
if (v_isShared_4597_ == 0)
{
v___x_4599_ = v___x_4596_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_a_4594_);
v___x_4599_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
return v___x_4599_;
}
}
}
}
else
{
uint8_t v___x_4602_; 
lean_dec(v_a_4569_);
lean_inc(v_a_4565_);
v___x_4602_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_isInjectiveTheorem(v_b_4554_, v_a_4565_);
if (v___x_4602_ == 0)
{
lean_object* v___x_4603_; 
lean_del_object(v___x_4571_);
v___x_4603_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseEMatch(v_b_4554_, v_a_4565_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4603_) == 0)
{
lean_object* v_a_4604_; lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4613_; 
v_a_4604_ = lean_ctor_get(v___x_4603_, 0);
v_isSharedCheck_4613_ = !lean_is_exclusive(v___x_4603_);
if (v_isSharedCheck_4613_ == 0)
{
v___x_4606_ = v___x_4603_;
v_isShared_4607_ = v_isSharedCheck_4613_;
goto v_resetjp_4605_;
}
else
{
lean_inc(v_a_4604_);
lean_dec(v___x_4603_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4613_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4611_; 
v___x_4608_ = lean_box(0);
v___x_4609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4609_, 0, v___x_4608_);
lean_ctor_set(v___x_4609_, 1, v_a_4604_);
if (v_isShared_4607_ == 0)
{
lean_ctor_set(v___x_4606_, 0, v___x_4609_);
v___x_4611_ = v___x_4606_;
goto v_reusejp_4610_;
}
else
{
lean_object* v_reuseFailAlloc_4612_; 
v_reuseFailAlloc_4612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4612_, 0, v___x_4609_);
v___x_4611_ = v_reuseFailAlloc_4612_;
goto v_reusejp_4610_;
}
v_reusejp_4610_:
{
return v___x_4611_;
}
}
}
else
{
lean_object* v_a_4614_; lean_object* v___x_4616_; uint8_t v_isShared_4617_; uint8_t v_isSharedCheck_4621_; 
v_a_4614_ = lean_ctor_get(v___x_4603_, 0);
v_isSharedCheck_4621_ = !lean_is_exclusive(v___x_4603_);
if (v_isSharedCheck_4621_ == 0)
{
v___x_4616_ = v___x_4603_;
v_isShared_4617_ = v_isSharedCheck_4621_;
goto v_resetjp_4615_;
}
else
{
lean_inc(v_a_4614_);
lean_dec(v___x_4603_);
v___x_4616_ = lean_box(0);
v_isShared_4617_ = v_isSharedCheck_4621_;
goto v_resetjp_4615_;
}
v_resetjp_4615_:
{
lean_object* v___x_4619_; 
if (v_isShared_4617_ == 0)
{
v___x_4619_ = v___x_4616_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v_a_4614_);
v___x_4619_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
return v___x_4619_;
}
}
}
}
else
{
lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4626_; 
v___x_4622_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Meta_Grind_Params_eraseInj(v_b_4554_, v_a_4565_);
v___x_4623_ = lean_box(0);
v___x_4624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4624_, 0, v___x_4623_);
lean_ctor_set(v___x_4624_, 1, v___x_4622_);
if (v_isShared_4572_ == 0)
{
lean_ctor_set(v___x_4571_, 0, v___x_4624_);
v___x_4626_ = v___x_4571_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v___x_4624_);
v___x_4626_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
return v___x_4626_;
}
}
}
}
}
else
{
lean_object* v_a_4629_; lean_object* v___x_4631_; uint8_t v_isShared_4632_; uint8_t v_isSharedCheck_4636_; 
lean_dec(v_a_4565_);
lean_dec_ref(v_b_4554_);
v_a_4629_ = lean_ctor_get(v___x_4568_, 0);
v_isSharedCheck_4636_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4636_ == 0)
{
v___x_4631_ = v___x_4568_;
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
else
{
lean_inc(v_a_4629_);
lean_dec(v___x_4568_);
v___x_4631_ = lean_box(0);
v_isShared_4632_ = v_isSharedCheck_4636_;
goto v_resetjp_4630_;
}
v_resetjp_4630_:
{
lean_object* v___x_4634_; 
if (v_isShared_4632_ == 0)
{
v___x_4634_ = v___x_4631_;
goto v_reusejp_4633_;
}
else
{
lean_object* v_reuseFailAlloc_4635_; 
v_reuseFailAlloc_4635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4635_, 0, v_a_4629_);
v___x_4634_ = v_reuseFailAlloc_4635_;
goto v_reusejp_4633_;
}
v_reusejp_4633_:
{
return v___x_4634_;
}
}
}
}
else
{
lean_object* v_a_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4644_; 
lean_dec(v_a_4565_);
lean_dec_ref(v_b_4554_);
v_a_4637_ = lean_ctor_get(v___x_4566_, 0);
v_isSharedCheck_4644_ = !lean_is_exclusive(v___x_4566_);
if (v_isSharedCheck_4644_ == 0)
{
v___x_4639_ = v___x_4566_;
v_isShared_4640_ = v_isSharedCheck_4644_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_a_4637_);
lean_dec(v___x_4566_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4644_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
lean_object* v___x_4642_; 
if (v_isShared_4640_ == 0)
{
v___x_4642_ = v___x_4639_;
goto v_reusejp_4641_;
}
else
{
lean_object* v_reuseFailAlloc_4643_; 
v_reuseFailAlloc_4643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4643_, 0, v_a_4637_);
v___x_4642_ = v_reuseFailAlloc_4643_;
goto v_reusejp_4641_;
}
v_reusejp_4641_:
{
return v___x_4642_;
}
}
}
}
else
{
lean_object* v_a_4645_; lean_object* v___x_4647_; uint8_t v_isShared_4648_; uint8_t v_isSharedCheck_4652_; 
lean_dec_ref(v_b_4554_);
v_a_4645_ = lean_ctor_get(v___x_4564_, 0);
v_isSharedCheck_4652_ = !lean_is_exclusive(v___x_4564_);
if (v_isSharedCheck_4652_ == 0)
{
v___x_4647_ = v___x_4564_;
v_isShared_4648_ = v_isSharedCheck_4652_;
goto v_resetjp_4646_;
}
else
{
lean_inc(v_a_4645_);
lean_dec(v___x_4564_);
v___x_4647_ = lean_box(0);
v_isShared_4648_ = v_isSharedCheck_4652_;
goto v_resetjp_4646_;
}
v_resetjp_4646_:
{
lean_object* v___x_4650_; 
if (v_isShared_4648_ == 0)
{
v___x_4650_ = v___x_4647_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v_a_4645_);
v___x_4650_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
return v___x_4650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3___boxed(lean_object* v___x_4653_, lean_object* v___x_4654_, lean_object* v_b_4655_, lean_object* v_____r_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
uint8_t v___x_17309__boxed_4664_; lean_object* v_res_4665_; 
v___x_17309__boxed_4664_ = lean_unbox(v___x_4654_);
v_res_4665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_4653_, v___x_17309__boxed_4664_, v_b_4655_, v_____r_4656_, v___y_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_);
lean_dec(v___y_4662_);
lean_dec_ref(v___y_4661_);
lean_dec(v___y_4660_);
lean_dec_ref(v___y_4659_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
return v_res_4665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(lean_object* v___x_4669_, lean_object* v_b_4670_, lean_object* v_a_4671_, uint8_t v___x_4672_, uint8_t v_only_4673_, uint8_t v_incremental_4674_, lean_object* v_x_4675_, lean_object* v_mod_x3f_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_){
_start:
{
lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___y_4687_; lean_object* v___y_4688_; lean_object* v___y_4689_; lean_object* v___y_4690_; lean_object* v___y_4691_; lean_object* v___y_4692_; lean_object* v___x_4712_; uint8_t v___x_4713_; 
v___x_4684_ = lean_unsigned_to_nat(1u);
v___x_4685_ = l_Lean_Syntax_getArg(v___x_4669_, v___x_4684_);
v___x_4712_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_4685_);
v___x_4713_ = l_Lean_Syntax_isOfKind(v___x_4685_, v___x_4712_);
if (v___x_4713_ == 0)
{
lean_object* v___x_4714_; 
v___x_4714_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4670_, v_a_4671_, v_mod_x3f_4676_, v___x_4685_, v___x_4672_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_, v___y_4682_);
if (lean_obj_tag(v___x_4714_) == 0)
{
lean_object* v_a_4715_; lean_object* v___x_4717_; uint8_t v_isShared_4718_; uint8_t v_isSharedCheck_4724_; 
v_a_4715_ = lean_ctor_get(v___x_4714_, 0);
v_isSharedCheck_4724_ = !lean_is_exclusive(v___x_4714_);
if (v_isSharedCheck_4724_ == 0)
{
v___x_4717_ = v___x_4714_;
v_isShared_4718_ = v_isSharedCheck_4724_;
goto v_resetjp_4716_;
}
else
{
lean_inc(v_a_4715_);
lean_dec(v___x_4714_);
v___x_4717_ = lean_box(0);
v_isShared_4718_ = v_isSharedCheck_4724_;
goto v_resetjp_4716_;
}
v_resetjp_4716_:
{
lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4722_; 
v___x_4719_ = lean_box(0);
v___x_4720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4719_);
lean_ctor_set(v___x_4720_, 1, v_a_4715_);
if (v_isShared_4718_ == 0)
{
lean_ctor_set(v___x_4717_, 0, v___x_4720_);
v___x_4722_ = v___x_4717_;
goto v_reusejp_4721_;
}
else
{
lean_object* v_reuseFailAlloc_4723_; 
v_reuseFailAlloc_4723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4723_, 0, v___x_4720_);
v___x_4722_ = v_reuseFailAlloc_4723_;
goto v_reusejp_4721_;
}
v_reusejp_4721_:
{
return v___x_4722_;
}
}
}
else
{
lean_object* v_a_4725_; lean_object* v___x_4727_; uint8_t v_isShared_4728_; uint8_t v_isSharedCheck_4732_; 
v_a_4725_ = lean_ctor_get(v___x_4714_, 0);
v_isSharedCheck_4732_ = !lean_is_exclusive(v___x_4714_);
if (v_isSharedCheck_4732_ == 0)
{
v___x_4727_ = v___x_4714_;
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
else
{
lean_inc(v_a_4725_);
lean_dec(v___x_4714_);
v___x_4727_ = lean_box(0);
v_isShared_4728_ = v_isSharedCheck_4732_;
goto v_resetjp_4726_;
}
v_resetjp_4726_:
{
lean_object* v___x_4730_; 
if (v_isShared_4728_ == 0)
{
v___x_4730_ = v___x_4727_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4731_; 
v_reuseFailAlloc_4731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4731_, 0, v_a_4725_);
v___x_4730_ = v_reuseFailAlloc_4731_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
return v___x_4730_;
}
}
}
}
else
{
lean_object* v___x_4733_; lean_object* v___x_4734_; 
v___x_4733_ = l_Lean_TSyntax_getId(v___x_4685_);
v___x_4734_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_4733_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_, v___y_4682_);
if (lean_obj_tag(v___x_4734_) == 0)
{
lean_object* v_a_4735_; 
v_a_4735_ = lean_ctor_get(v___x_4734_, 0);
lean_inc(v_a_4735_);
lean_dec_ref_known(v___x_4734_, 1);
if (lean_obj_tag(v_a_4735_) == 1)
{
lean_object* v_val_4736_; lean_object* v_snd_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4762_; 
v_val_4736_ = lean_ctor_get(v_a_4735_, 0);
lean_inc(v_val_4736_);
lean_dec_ref_known(v_a_4735_, 1);
v_snd_4737_ = lean_ctor_get(v_val_4736_, 1);
v_isSharedCheck_4762_ = !lean_is_exclusive(v_val_4736_);
if (v_isSharedCheck_4762_ == 0)
{
lean_object* v_unused_4763_; 
v_unused_4763_ = lean_ctor_get(v_val_4736_, 0);
lean_dec(v_unused_4763_);
v___x_4739_ = v_val_4736_;
v_isShared_4740_ = v_isSharedCheck_4762_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_snd_4737_);
lean_dec(v_val_4736_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4762_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
if (lean_obj_tag(v_snd_4737_) == 1)
{
lean_object* v___x_4741_; 
lean_dec_ref_known(v_snd_4737_, 2);
v___x_4741_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4670_, v_a_4671_, v_mod_x3f_4676_, v___x_4685_, v___x_4672_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_, v___y_4682_);
if (lean_obj_tag(v___x_4741_) == 0)
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4753_; 
v_a_4742_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4753_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4753_ == 0)
{
v___x_4744_ = v___x_4741_;
v_isShared_4745_ = v_isSharedCheck_4753_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v___x_4741_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4753_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
lean_object* v___x_4746_; lean_object* v___x_4748_; 
v___x_4746_ = lean_box(0);
if (v_isShared_4740_ == 0)
{
lean_ctor_set(v___x_4739_, 1, v_a_4742_);
lean_ctor_set(v___x_4739_, 0, v___x_4746_);
v___x_4748_ = v___x_4739_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4752_; 
v_reuseFailAlloc_4752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4752_, 0, v___x_4746_);
lean_ctor_set(v_reuseFailAlloc_4752_, 1, v_a_4742_);
v___x_4748_ = v_reuseFailAlloc_4752_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
lean_object* v___x_4750_; 
if (v_isShared_4745_ == 0)
{
lean_ctor_set(v___x_4744_, 0, v___x_4748_);
v___x_4750_ = v___x_4744_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v___x_4748_);
v___x_4750_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
return v___x_4750_;
}
}
}
}
else
{
lean_object* v_a_4754_; lean_object* v___x_4756_; uint8_t v_isShared_4757_; uint8_t v_isSharedCheck_4761_; 
lean_del_object(v___x_4739_);
v_a_4754_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4761_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4761_ == 0)
{
v___x_4756_ = v___x_4741_;
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
else
{
lean_inc(v_a_4754_);
lean_dec(v___x_4741_);
v___x_4756_ = lean_box(0);
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
v_resetjp_4755_:
{
lean_object* v___x_4759_; 
if (v_isShared_4757_ == 0)
{
v___x_4759_ = v___x_4756_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_a_4754_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
return v___x_4759_;
}
}
}
}
else
{
lean_del_object(v___x_4739_);
lean_dec(v_snd_4737_);
v___y_4687_ = v___y_4677_;
v___y_4688_ = v___y_4678_;
v___y_4689_ = v___y_4679_;
v___y_4690_ = v___y_4680_;
v___y_4691_ = v___y_4681_;
v___y_4692_ = v___y_4682_;
goto v___jp_4686_;
}
}
}
else
{
lean_dec(v_a_4735_);
v___y_4687_ = v___y_4677_;
v___y_4688_ = v___y_4678_;
v___y_4689_ = v___y_4679_;
v___y_4690_ = v___y_4680_;
v___y_4691_ = v___y_4681_;
v___y_4692_ = v___y_4682_;
goto v___jp_4686_;
}
}
else
{
lean_object* v_a_4764_; lean_object* v___x_4766_; uint8_t v_isShared_4767_; uint8_t v_isSharedCheck_4771_; 
lean_dec(v___x_4685_);
lean_dec(v_mod_x3f_4676_);
lean_dec(v_a_4671_);
lean_dec_ref(v_b_4670_);
v_a_4764_ = lean_ctor_get(v___x_4734_, 0);
v_isSharedCheck_4771_ = !lean_is_exclusive(v___x_4734_);
if (v_isSharedCheck_4771_ == 0)
{
v___x_4766_ = v___x_4734_;
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
else
{
lean_inc(v_a_4764_);
lean_dec(v___x_4734_);
v___x_4766_ = lean_box(0);
v_isShared_4767_ = v_isSharedCheck_4771_;
goto v_resetjp_4765_;
}
v_resetjp_4765_:
{
lean_object* v___x_4769_; 
if (v_isShared_4767_ == 0)
{
v___x_4769_ = v___x_4766_;
goto v_reusejp_4768_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_a_4764_);
v___x_4769_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4768_;
}
v_reusejp_4768_:
{
return v___x_4769_;
}
}
}
}
v___jp_4686_:
{
lean_object* v___x_4693_; 
v___x_4693_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_b_4670_, v_a_4671_, v_mod_x3f_4676_, v___x_4685_, v___x_4672_, v_only_4673_, v_incremental_4674_, v___y_4687_, v___y_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_);
if (lean_obj_tag(v___x_4693_) == 0)
{
lean_object* v_a_4694_; lean_object* v___x_4696_; uint8_t v_isShared_4697_; uint8_t v_isSharedCheck_4703_; 
v_a_4694_ = lean_ctor_get(v___x_4693_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4693_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4696_ = v___x_4693_;
v_isShared_4697_ = v_isSharedCheck_4703_;
goto v_resetjp_4695_;
}
else
{
lean_inc(v_a_4694_);
lean_dec(v___x_4693_);
v___x_4696_ = lean_box(0);
v_isShared_4697_ = v_isSharedCheck_4703_;
goto v_resetjp_4695_;
}
v_resetjp_4695_:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4701_; 
v___x_4698_ = lean_box(0);
v___x_4699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4698_);
lean_ctor_set(v___x_4699_, 1, v_a_4694_);
if (v_isShared_4697_ == 0)
{
lean_ctor_set(v___x_4696_, 0, v___x_4699_);
v___x_4701_ = v___x_4696_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v___x_4699_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
else
{
lean_object* v_a_4704_; lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4711_; 
v_a_4704_ = lean_ctor_get(v___x_4693_, 0);
v_isSharedCheck_4711_ = !lean_is_exclusive(v___x_4693_);
if (v_isSharedCheck_4711_ == 0)
{
v___x_4706_ = v___x_4693_;
v_isShared_4707_ = v_isSharedCheck_4711_;
goto v_resetjp_4705_;
}
else
{
lean_inc(v_a_4704_);
lean_dec(v___x_4693_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4711_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
lean_object* v___x_4709_; 
if (v_isShared_4707_ == 0)
{
v___x_4709_ = v___x_4706_;
goto v_reusejp_4708_;
}
else
{
lean_object* v_reuseFailAlloc_4710_; 
v_reuseFailAlloc_4710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4710_, 0, v_a_4704_);
v___x_4709_ = v_reuseFailAlloc_4710_;
goto v_reusejp_4708_;
}
v_reusejp_4708_:
{
return v___x_4709_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___boxed(lean_object* v___x_4772_, lean_object* v_b_4773_, lean_object* v_a_4774_, lean_object* v___x_4775_, lean_object* v_only_4776_, lean_object* v_incremental_4777_, lean_object* v_x_4778_, lean_object* v_mod_x3f_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_){
_start:
{
uint8_t v___x_17527__boxed_4787_; uint8_t v_only_boxed_4788_; uint8_t v_incremental_boxed_4789_; lean_object* v_res_4790_; 
v___x_17527__boxed_4787_ = lean_unbox(v___x_4775_);
v_only_boxed_4788_ = lean_unbox(v_only_4776_);
v_incremental_boxed_4789_ = lean_unbox(v_incremental_4777_);
v_res_4790_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_4772_, v_b_4773_, v_a_4774_, v___x_17527__boxed_4787_, v_only_boxed_4788_, v_incremental_boxed_4789_, v_x_4778_, v_mod_x3f_4779_, v___y_4780_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_, v___y_4785_);
lean_dec(v___y_4785_);
lean_dec_ref(v___y_4784_);
lean_dec(v___y_4783_);
lean_dec_ref(v___y_4782_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___x_4772_);
return v_res_4790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(lean_object* v_b_4791_, lean_object* v___x_4792_, lean_object* v_____r_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_){
_start:
{
lean_object* v___x_4801_; 
v___x_4801_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processAnchor(v_b_4791_, v___x_4792_, v___y_4798_, v___y_4799_);
if (lean_obj_tag(v___x_4801_) == 0)
{
lean_object* v_a_4802_; lean_object* v___x_4804_; uint8_t v_isShared_4805_; uint8_t v_isSharedCheck_4811_; 
v_a_4802_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4811_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4811_ == 0)
{
v___x_4804_ = v___x_4801_;
v_isShared_4805_ = v_isSharedCheck_4811_;
goto v_resetjp_4803_;
}
else
{
lean_inc(v_a_4802_);
lean_dec(v___x_4801_);
v___x_4804_ = lean_box(0);
v_isShared_4805_ = v_isSharedCheck_4811_;
goto v_resetjp_4803_;
}
v_resetjp_4803_:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4809_; 
v___x_4806_ = lean_box(0);
v___x_4807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4806_);
lean_ctor_set(v___x_4807_, 1, v_a_4802_);
if (v_isShared_4805_ == 0)
{
lean_ctor_set(v___x_4804_, 0, v___x_4807_);
v___x_4809_ = v___x_4804_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v___x_4807_);
v___x_4809_ = v_reuseFailAlloc_4810_;
goto v_reusejp_4808_;
}
v_reusejp_4808_:
{
return v___x_4809_;
}
}
}
else
{
lean_object* v_a_4812_; lean_object* v___x_4814_; uint8_t v_isShared_4815_; uint8_t v_isSharedCheck_4819_; 
v_a_4812_ = lean_ctor_get(v___x_4801_, 0);
v_isSharedCheck_4819_ = !lean_is_exclusive(v___x_4801_);
if (v_isSharedCheck_4819_ == 0)
{
v___x_4814_ = v___x_4801_;
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
else
{
lean_inc(v_a_4812_);
lean_dec(v___x_4801_);
v___x_4814_ = lean_box(0);
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
v_resetjp_4813_:
{
lean_object* v___x_4817_; 
if (v_isShared_4815_ == 0)
{
v___x_4817_ = v___x_4814_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v_a_4812_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0___boxed(lean_object* v_b_4820_, lean_object* v___x_4821_, lean_object* v_____r_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_){
_start:
{
lean_object* v_res_4830_; 
v_res_4830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_4820_, v___x_4821_, v_____r_4822_, v___y_4823_, v___y_4824_, v___y_4825_, v___y_4826_, v___y_4827_, v___y_4828_);
lean_dec(v___y_4828_);
lean_dec_ref(v___y_4827_);
lean_dec(v___y_4826_);
lean_dec_ref(v___y_4825_);
lean_dec(v___y_4824_);
lean_dec_ref(v___y_4823_);
lean_dec(v___x_4821_);
return v_res_4830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(lean_object* v___x_4831_, lean_object* v_b_4832_, lean_object* v_a_4833_, uint8_t v___x_4834_, uint8_t v_only_4835_, uint8_t v_incremental_4836_, lean_object* v_x_4837_, lean_object* v_mod_x3f_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_){
_start:
{
lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___y_4849_; lean_object* v___y_4850_; lean_object* v___y_4851_; lean_object* v___y_4852_; lean_object* v___y_4853_; lean_object* v___y_4854_; lean_object* v___x_4874_; uint8_t v___x_4875_; 
v___x_4846_ = lean_unsigned_to_nat(2u);
v___x_4847_ = l_Lean_Syntax_getArg(v___x_4831_, v___x_4846_);
v___x_4874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_4847_);
v___x_4875_ = l_Lean_Syntax_isOfKind(v___x_4847_, v___x_4874_);
if (v___x_4875_ == 0)
{
lean_object* v___x_4876_; 
v___x_4876_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4832_, v_a_4833_, v_mod_x3f_4838_, v___x_4847_, v___x_4834_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_, v___y_4843_, v___y_4844_);
if (lean_obj_tag(v___x_4876_) == 0)
{
lean_object* v_a_4877_; lean_object* v___x_4879_; uint8_t v_isShared_4880_; uint8_t v_isSharedCheck_4886_; 
v_a_4877_ = lean_ctor_get(v___x_4876_, 0);
v_isSharedCheck_4886_ = !lean_is_exclusive(v___x_4876_);
if (v_isSharedCheck_4886_ == 0)
{
v___x_4879_ = v___x_4876_;
v_isShared_4880_ = v_isSharedCheck_4886_;
goto v_resetjp_4878_;
}
else
{
lean_inc(v_a_4877_);
lean_dec(v___x_4876_);
v___x_4879_ = lean_box(0);
v_isShared_4880_ = v_isSharedCheck_4886_;
goto v_resetjp_4878_;
}
v_resetjp_4878_:
{
lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4884_; 
v___x_4881_ = lean_box(0);
v___x_4882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4882_, 0, v___x_4881_);
lean_ctor_set(v___x_4882_, 1, v_a_4877_);
if (v_isShared_4880_ == 0)
{
lean_ctor_set(v___x_4879_, 0, v___x_4882_);
v___x_4884_ = v___x_4879_;
goto v_reusejp_4883_;
}
else
{
lean_object* v_reuseFailAlloc_4885_; 
v_reuseFailAlloc_4885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4885_, 0, v___x_4882_);
v___x_4884_ = v_reuseFailAlloc_4885_;
goto v_reusejp_4883_;
}
v_reusejp_4883_:
{
return v___x_4884_;
}
}
}
else
{
lean_object* v_a_4887_; lean_object* v___x_4889_; uint8_t v_isShared_4890_; uint8_t v_isSharedCheck_4894_; 
v_a_4887_ = lean_ctor_get(v___x_4876_, 0);
v_isSharedCheck_4894_ = !lean_is_exclusive(v___x_4876_);
if (v_isSharedCheck_4894_ == 0)
{
v___x_4889_ = v___x_4876_;
v_isShared_4890_ = v_isSharedCheck_4894_;
goto v_resetjp_4888_;
}
else
{
lean_inc(v_a_4887_);
lean_dec(v___x_4876_);
v___x_4889_ = lean_box(0);
v_isShared_4890_ = v_isSharedCheck_4894_;
goto v_resetjp_4888_;
}
v_resetjp_4888_:
{
lean_object* v___x_4892_; 
if (v_isShared_4890_ == 0)
{
v___x_4892_ = v___x_4889_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4893_; 
v_reuseFailAlloc_4893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4893_, 0, v_a_4887_);
v___x_4892_ = v_reuseFailAlloc_4893_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
return v___x_4892_;
}
}
}
}
else
{
lean_object* v___x_4895_; lean_object* v___x_4896_; 
v___x_4895_ = l_Lean_TSyntax_getId(v___x_4847_);
v___x_4896_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_4895_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_, v___y_4843_, v___y_4844_);
if (lean_obj_tag(v___x_4896_) == 0)
{
lean_object* v_a_4897_; 
v_a_4897_ = lean_ctor_get(v___x_4896_, 0);
lean_inc(v_a_4897_);
lean_dec_ref_known(v___x_4896_, 1);
if (lean_obj_tag(v_a_4897_) == 1)
{
lean_object* v_val_4898_; lean_object* v_snd_4899_; lean_object* v___x_4901_; uint8_t v_isShared_4902_; uint8_t v_isSharedCheck_4924_; 
v_val_4898_ = lean_ctor_get(v_a_4897_, 0);
lean_inc(v_val_4898_);
lean_dec_ref_known(v_a_4897_, 1);
v_snd_4899_ = lean_ctor_get(v_val_4898_, 1);
v_isSharedCheck_4924_ = !lean_is_exclusive(v_val_4898_);
if (v_isSharedCheck_4924_ == 0)
{
lean_object* v_unused_4925_; 
v_unused_4925_ = lean_ctor_get(v_val_4898_, 0);
lean_dec(v_unused_4925_);
v___x_4901_ = v_val_4898_;
v_isShared_4902_ = v_isSharedCheck_4924_;
goto v_resetjp_4900_;
}
else
{
lean_inc(v_snd_4899_);
lean_dec(v_val_4898_);
v___x_4901_ = lean_box(0);
v_isShared_4902_ = v_isSharedCheck_4924_;
goto v_resetjp_4900_;
}
v_resetjp_4900_:
{
if (lean_obj_tag(v_snd_4899_) == 1)
{
lean_object* v___x_4903_; 
lean_dec_ref_known(v_snd_4899_, 2);
v___x_4903_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam(v_b_4832_, v_a_4833_, v_mod_x3f_4838_, v___x_4847_, v___x_4834_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_, v___y_4843_, v___y_4844_);
if (lean_obj_tag(v___x_4903_) == 0)
{
lean_object* v_a_4904_; lean_object* v___x_4906_; uint8_t v_isShared_4907_; uint8_t v_isSharedCheck_4915_; 
v_a_4904_ = lean_ctor_get(v___x_4903_, 0);
v_isSharedCheck_4915_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_4915_ == 0)
{
v___x_4906_ = v___x_4903_;
v_isShared_4907_ = v_isSharedCheck_4915_;
goto v_resetjp_4905_;
}
else
{
lean_inc(v_a_4904_);
lean_dec(v___x_4903_);
v___x_4906_ = lean_box(0);
v_isShared_4907_ = v_isSharedCheck_4915_;
goto v_resetjp_4905_;
}
v_resetjp_4905_:
{
lean_object* v___x_4908_; lean_object* v___x_4910_; 
v___x_4908_ = lean_box(0);
if (v_isShared_4902_ == 0)
{
lean_ctor_set(v___x_4901_, 1, v_a_4904_);
lean_ctor_set(v___x_4901_, 0, v___x_4908_);
v___x_4910_ = v___x_4901_;
goto v_reusejp_4909_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v___x_4908_);
lean_ctor_set(v_reuseFailAlloc_4914_, 1, v_a_4904_);
v___x_4910_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4909_;
}
v_reusejp_4909_:
{
lean_object* v___x_4912_; 
if (v_isShared_4907_ == 0)
{
lean_ctor_set(v___x_4906_, 0, v___x_4910_);
v___x_4912_ = v___x_4906_;
goto v_reusejp_4911_;
}
else
{
lean_object* v_reuseFailAlloc_4913_; 
v_reuseFailAlloc_4913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4913_, 0, v___x_4910_);
v___x_4912_ = v_reuseFailAlloc_4913_;
goto v_reusejp_4911_;
}
v_reusejp_4911_:
{
return v___x_4912_;
}
}
}
}
else
{
lean_object* v_a_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4923_; 
lean_del_object(v___x_4901_);
v_a_4916_ = lean_ctor_get(v___x_4903_, 0);
v_isSharedCheck_4923_ = !lean_is_exclusive(v___x_4903_);
if (v_isSharedCheck_4923_ == 0)
{
v___x_4918_ = v___x_4903_;
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
else
{
lean_inc(v_a_4916_);
lean_dec(v___x_4903_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4923_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4921_; 
if (v_isShared_4919_ == 0)
{
v___x_4921_ = v___x_4918_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v_a_4916_);
v___x_4921_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
return v___x_4921_;
}
}
}
}
else
{
lean_del_object(v___x_4901_);
lean_dec(v_snd_4899_);
v___y_4849_ = v___y_4839_;
v___y_4850_ = v___y_4840_;
v___y_4851_ = v___y_4841_;
v___y_4852_ = v___y_4842_;
v___y_4853_ = v___y_4843_;
v___y_4854_ = v___y_4844_;
goto v___jp_4848_;
}
}
}
else
{
lean_dec(v_a_4897_);
v___y_4849_ = v___y_4839_;
v___y_4850_ = v___y_4840_;
v___y_4851_ = v___y_4841_;
v___y_4852_ = v___y_4842_;
v___y_4853_ = v___y_4843_;
v___y_4854_ = v___y_4844_;
goto v___jp_4848_;
}
}
else
{
lean_object* v_a_4926_; lean_object* v___x_4928_; uint8_t v_isShared_4929_; uint8_t v_isSharedCheck_4933_; 
lean_dec(v___x_4847_);
lean_dec(v_mod_x3f_4838_);
lean_dec(v_a_4833_);
lean_dec_ref(v_b_4832_);
v_a_4926_ = lean_ctor_get(v___x_4896_, 0);
v_isSharedCheck_4933_ = !lean_is_exclusive(v___x_4896_);
if (v_isSharedCheck_4933_ == 0)
{
v___x_4928_ = v___x_4896_;
v_isShared_4929_ = v_isSharedCheck_4933_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_a_4926_);
lean_dec(v___x_4896_);
v___x_4928_ = lean_box(0);
v_isShared_4929_ = v_isSharedCheck_4933_;
goto v_resetjp_4927_;
}
v_resetjp_4927_:
{
lean_object* v___x_4931_; 
if (v_isShared_4929_ == 0)
{
v___x_4931_ = v___x_4928_;
goto v_reusejp_4930_;
}
else
{
lean_object* v_reuseFailAlloc_4932_; 
v_reuseFailAlloc_4932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4932_, 0, v_a_4926_);
v___x_4931_ = v_reuseFailAlloc_4932_;
goto v_reusejp_4930_;
}
v_reusejp_4930_:
{
return v___x_4931_;
}
}
}
}
v___jp_4848_:
{
lean_object* v___x_4855_; 
v___x_4855_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam(v_b_4832_, v_a_4833_, v_mod_x3f_4838_, v___x_4847_, v___x_4834_, v_only_4835_, v_incremental_4836_, v___y_4849_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_);
if (lean_obj_tag(v___x_4855_) == 0)
{
lean_object* v_a_4856_; lean_object* v___x_4858_; uint8_t v_isShared_4859_; uint8_t v_isSharedCheck_4865_; 
v_a_4856_ = lean_ctor_get(v___x_4855_, 0);
v_isSharedCheck_4865_ = !lean_is_exclusive(v___x_4855_);
if (v_isSharedCheck_4865_ == 0)
{
v___x_4858_ = v___x_4855_;
v_isShared_4859_ = v_isSharedCheck_4865_;
goto v_resetjp_4857_;
}
else
{
lean_inc(v_a_4856_);
lean_dec(v___x_4855_);
v___x_4858_ = lean_box(0);
v_isShared_4859_ = v_isSharedCheck_4865_;
goto v_resetjp_4857_;
}
v_resetjp_4857_:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4863_; 
v___x_4860_ = lean_box(0);
v___x_4861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4861_, 0, v___x_4860_);
lean_ctor_set(v___x_4861_, 1, v_a_4856_);
if (v_isShared_4859_ == 0)
{
lean_ctor_set(v___x_4858_, 0, v___x_4861_);
v___x_4863_ = v___x_4858_;
goto v_reusejp_4862_;
}
else
{
lean_object* v_reuseFailAlloc_4864_; 
v_reuseFailAlloc_4864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4864_, 0, v___x_4861_);
v___x_4863_ = v_reuseFailAlloc_4864_;
goto v_reusejp_4862_;
}
v_reusejp_4862_:
{
return v___x_4863_;
}
}
}
else
{
lean_object* v_a_4866_; lean_object* v___x_4868_; uint8_t v_isShared_4869_; uint8_t v_isSharedCheck_4873_; 
v_a_4866_ = lean_ctor_get(v___x_4855_, 0);
v_isSharedCheck_4873_ = !lean_is_exclusive(v___x_4855_);
if (v_isSharedCheck_4873_ == 0)
{
v___x_4868_ = v___x_4855_;
v_isShared_4869_ = v_isSharedCheck_4873_;
goto v_resetjp_4867_;
}
else
{
lean_inc(v_a_4866_);
lean_dec(v___x_4855_);
v___x_4868_ = lean_box(0);
v_isShared_4869_ = v_isSharedCheck_4873_;
goto v_resetjp_4867_;
}
v_resetjp_4867_:
{
lean_object* v___x_4871_; 
if (v_isShared_4869_ == 0)
{
v___x_4871_ = v___x_4868_;
goto v_reusejp_4870_;
}
else
{
lean_object* v_reuseFailAlloc_4872_; 
v_reuseFailAlloc_4872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4872_, 0, v_a_4866_);
v___x_4871_ = v_reuseFailAlloc_4872_;
goto v_reusejp_4870_;
}
v_reusejp_4870_:
{
return v___x_4871_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1___boxed(lean_object* v___x_4934_, lean_object* v_b_4935_, lean_object* v_a_4936_, lean_object* v___x_4937_, lean_object* v_only_4938_, lean_object* v_incremental_4939_, lean_object* v_x_4940_, lean_object* v_mod_x3f_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_, lean_object* v___y_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_){
_start:
{
uint8_t v___x_17806__boxed_4949_; uint8_t v_only_boxed_4950_; uint8_t v_incremental_boxed_4951_; lean_object* v_res_4952_; 
v___x_17806__boxed_4949_ = lean_unbox(v___x_4937_);
v_only_boxed_4950_ = lean_unbox(v_only_4938_);
v_incremental_boxed_4951_ = lean_unbox(v_incremental_4939_);
v_res_4952_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_4934_, v_b_4935_, v_a_4936_, v___x_17806__boxed_4949_, v_only_boxed_4950_, v_incremental_boxed_4951_, v_x_4940_, v_mod_x3f_4941_, v___y_4942_, v___y_4943_, v___y_4944_, v___y_4945_, v___y_4946_, v___y_4947_);
lean_dec(v___y_4947_);
lean_dec_ref(v___y_4946_);
lean_dec(v___y_4945_);
lean_dec_ref(v___y_4944_);
lean_dec(v___y_4943_);
lean_dec_ref(v___y_4942_);
lean_dec(v___x_4934_);
return v_res_4952_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4960_; lean_object* v___x_4961_; 
v___x_4960_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__2));
v___x_4961_ = l_Lean_stringToMessageData(v___x_4960_);
return v___x_4961_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15(void){
_start:
{
lean_object* v___x_4990_; lean_object* v___x_4991_; 
v___x_4990_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__14));
v___x_4991_ = l_Lean_stringToMessageData(v___x_4990_);
return v___x_4991_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17(void){
_start:
{
lean_object* v___x_4993_; lean_object* v___x_4994_; 
v___x_4993_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__16));
v___x_4994_ = l_Lean_stringToMessageData(v___x_4993_);
return v___x_4994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(uint8_t v_lax_4995_, uint8_t v_only_4996_, uint8_t v_incremental_4997_, lean_object* v_as_4998_, size_t v_sz_4999_, size_t v_i_5000_, lean_object* v_b_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_){
_start:
{
lean_object* v_snd_5010_; lean_object* v_a_5015_; lean_object* v___y_5022_; uint8_t v___x_5026_; 
v___x_5026_ = lean_usize_dec_lt(v_i_5000_, v_sz_4999_);
if (v___x_5026_ == 0)
{
lean_object* v___x_5027_; 
v___x_5027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5027_, 0, v_b_5001_);
return v___x_5027_;
}
else
{
lean_object* v_a_5028_; lean_object* v___x_5029_; uint8_t v___x_5030_; 
v_a_5028_ = lean_array_uget_borrowed(v_as_4998_, v_i_5000_);
v___x_5029_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1));
lean_inc(v_a_5028_);
v___x_5030_ = l_Lean_Syntax_isOfKind(v_a_5028_, v___x_5029_);
if (v___x_5030_ == 0)
{
lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; 
v___x_5031_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_5028_);
v___x_5032_ = l_Lean_MessageData_ofSyntax(v_a_5028_);
v___x_5033_ = l_Lean_indentD(v___x_5032_);
v___x_5034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5034_, 0, v___x_5031_);
lean_ctor_set(v___x_5034_, 1, v___x_5033_);
v___x_5035_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_5034_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5035_) == 0)
{
lean_dec_ref_known(v___x_5035_, 1);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5036_; 
v_a_5036_ = lean_ctor_get(v___x_5035_, 0);
lean_inc(v_a_5036_);
lean_dec_ref_known(v___x_5035_, 1);
v_a_5015_ = v_a_5036_;
goto v___jp_5014_;
}
}
else
{
lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; uint8_t v___x_5040_; 
v___x_5037_ = lean_unsigned_to_nat(0u);
v___x_5038_ = l_Lean_Syntax_getArg(v_a_5028_, v___x_5037_);
v___x_5039_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5));
lean_inc(v___x_5038_);
v___x_5040_ = l_Lean_Syntax_isOfKind(v___x_5038_, v___x_5039_);
if (v___x_5040_ == 0)
{
lean_object* v___x_5041_; uint8_t v___x_5042_; 
v___x_5041_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7));
lean_inc(v___x_5038_);
v___x_5042_ = l_Lean_Syntax_isOfKind(v___x_5038_, v___x_5041_);
if (v___x_5042_ == 0)
{
lean_object* v___x_5043_; uint8_t v___x_5044_; 
v___x_5043_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9));
lean_inc(v___x_5038_);
v___x_5044_ = l_Lean_Syntax_isOfKind(v___x_5038_, v___x_5043_);
if (v___x_5044_ == 0)
{
lean_object* v___x_5045_; uint8_t v___x_5046_; 
v___x_5045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11));
lean_inc(v___x_5038_);
v___x_5046_ = l_Lean_Syntax_isOfKind(v___x_5038_, v___x_5045_);
if (v___x_5046_ == 0)
{
lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; 
lean_dec(v___x_5038_);
v___x_5047_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_5028_);
v___x_5048_ = l_Lean_MessageData_ofSyntax(v_a_5028_);
v___x_5049_ = l_Lean_indentD(v___x_5048_);
v___x_5050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5050_, 0, v___x_5047_);
lean_ctor_set(v___x_5050_, 1, v___x_5049_);
v___x_5051_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_5050_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5051_) == 0)
{
lean_dec_ref_known(v___x_5051_, 1);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5052_; 
v_a_5052_ = lean_ctor_get(v___x_5051_, 0);
lean_inc(v_a_5052_);
lean_dec_ref_known(v___x_5051_, 1);
v_a_5015_ = v_a_5052_;
goto v___jp_5014_;
}
}
else
{
lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; uint8_t v___x_5056_; 
v___x_5053_ = lean_unsigned_to_nat(1u);
v___x_5054_ = l_Lean_Syntax_getArg(v___x_5038_, v___x_5053_);
lean_dec(v___x_5038_);
v___x_5055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13));
lean_inc(v___x_5054_);
v___x_5056_ = l_Lean_Syntax_isOfKind(v___x_5054_, v___x_5055_);
if (v___x_5056_ == 0)
{
lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
lean_dec(v___x_5054_);
v___x_5057_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_5028_);
v___x_5058_ = l_Lean_MessageData_ofSyntax(v_a_5028_);
v___x_5059_ = l_Lean_indentD(v___x_5058_);
v___x_5060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5060_, 0, v___x_5057_);
lean_ctor_set(v___x_5060_, 1, v___x_5059_);
v___x_5061_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_5060_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5061_) == 0)
{
lean_dec_ref_known(v___x_5061_, 1);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5062_; 
v_a_5062_ = lean_ctor_get(v___x_5061_, 0);
lean_inc(v_a_5062_);
lean_dec_ref_known(v___x_5061_, 1);
v_a_5015_ = v_a_5062_;
goto v___jp_5014_;
}
}
else
{
if (v_only_4996_ == 0)
{
lean_object* v___x_5063_; lean_object* v___x_5064_; 
v___x_5063_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__15);
v___x_5064_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v___x_5054_, v___x_5063_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5064_) == 0)
{
lean_object* v_a_5065_; lean_object* v___x_5066_; 
v_a_5065_ = lean_ctor_get(v___x_5064_, 0);
lean_inc(v_a_5065_);
lean_dec_ref_known(v___x_5064_, 1);
lean_inc_ref(v_b_5001_);
v___x_5066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_5001_, v___x_5054_, v_a_5065_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
lean_dec(v___x_5054_);
v___y_5022_ = v___x_5066_;
goto v___jp_5021_;
}
else
{
lean_object* v_a_5067_; 
lean_dec(v___x_5054_);
v_a_5067_ = lean_ctor_get(v___x_5064_, 0);
lean_inc(v_a_5067_);
lean_dec_ref_known(v___x_5064_, 1);
v_a_5015_ = v_a_5067_;
goto v___jp_5014_;
}
}
else
{
lean_object* v___x_5068_; lean_object* v___x_5069_; 
v___x_5068_ = lean_box(0);
lean_inc_ref(v_b_5001_);
v___x_5069_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__0(v_b_5001_, v___x_5054_, v___x_5068_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
lean_dec(v___x_5054_);
v___y_5022_ = v___x_5069_;
goto v___jp_5021_;
}
}
}
}
else
{
lean_object* v___x_5070_; lean_object* v___x_5071_; uint8_t v___x_5072_; 
v___x_5070_ = lean_unsigned_to_nat(1u);
v___x_5071_ = l_Lean_Syntax_getArg(v___x_5038_, v___x_5070_);
v___x_5072_ = l_Lean_Syntax_isNone(v___x_5071_);
if (v___x_5072_ == 0)
{
uint8_t v___x_5073_; 
lean_inc(v___x_5071_);
v___x_5073_ = l_Lean_Syntax_matchesNull(v___x_5071_, v___x_5070_);
if (v___x_5073_ == 0)
{
lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; 
lean_dec(v___x_5071_);
lean_dec(v___x_5038_);
v___x_5074_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_5028_);
v___x_5075_ = l_Lean_MessageData_ofSyntax(v_a_5028_);
v___x_5076_ = l_Lean_indentD(v___x_5075_);
v___x_5077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5077_, 0, v___x_5074_);
lean_ctor_set(v___x_5077_, 1, v___x_5076_);
v___x_5078_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_5077_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5078_) == 0)
{
lean_dec_ref_known(v___x_5078_, 1);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5079_; 
v_a_5079_ = lean_ctor_get(v___x_5078_, 0);
lean_inc(v_a_5079_);
lean_dec_ref_known(v___x_5078_, 1);
v_a_5015_ = v_a_5079_;
goto v___jp_5014_;
}
}
else
{
lean_object* v___x_5080_; lean_object* v___x_5081_; uint8_t v___x_5082_; 
v___x_5080_ = l_Lean_Syntax_getArg(v___x_5071_, v___x_5037_);
lean_dec(v___x_5071_);
v___x_5081_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
lean_inc(v___x_5080_);
v___x_5082_ = l_Lean_Syntax_isOfKind(v___x_5080_, v___x_5081_);
if (v___x_5082_ == 0)
{
lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; 
lean_dec(v___x_5080_);
lean_dec(v___x_5038_);
v___x_5083_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_5028_);
v___x_5084_ = l_Lean_MessageData_ofSyntax(v_a_5028_);
v___x_5085_ = l_Lean_indentD(v___x_5084_);
v___x_5086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5086_, 0, v___x_5083_);
lean_ctor_set(v___x_5086_, 1, v___x_5085_);
v___x_5087_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_5086_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5087_) == 0)
{
lean_dec_ref_known(v___x_5087_, 1);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5088_; 
v_a_5088_ = lean_ctor_get(v___x_5087_, 0);
lean_inc(v_a_5088_);
lean_dec_ref_known(v___x_5087_, 1);
v_a_5015_ = v_a_5088_;
goto v___jp_5014_;
}
}
else
{
lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; 
v___x_5089_ = lean_box(0);
v___x_5090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5090_, 0, v___x_5080_);
lean_inc(v_a_5028_);
lean_inc_ref(v_b_5001_);
v___x_5091_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_5038_, v_b_5001_, v_a_5028_, v___x_5030_, v_only_4996_, v_incremental_4997_, v___x_5089_, v___x_5090_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
lean_dec(v___x_5038_);
v___y_5022_ = v___x_5091_;
goto v___jp_5021_;
}
}
}
else
{
lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; 
lean_dec(v___x_5071_);
v___x_5092_ = lean_box(0);
v___x_5093_ = lean_box(0);
lean_inc(v_a_5028_);
lean_inc_ref(v_b_5001_);
v___x_5094_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__1(v___x_5038_, v_b_5001_, v_a_5028_, v___x_5030_, v_only_4996_, v_incremental_4997_, v___x_5092_, v___x_5093_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
lean_dec(v___x_5038_);
v___y_5022_ = v___x_5094_;
goto v___jp_5021_;
}
}
}
else
{
lean_object* v___x_5095_; uint8_t v___x_5096_; 
v___x_5095_ = l_Lean_Syntax_getArg(v___x_5038_, v___x_5037_);
v___x_5096_ = l_Lean_Syntax_isNone(v___x_5095_);
if (v___x_5096_ == 0)
{
lean_object* v___x_5097_; uint8_t v___x_5098_; 
v___x_5097_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_5095_);
v___x_5098_ = l_Lean_Syntax_matchesNull(v___x_5095_, v___x_5097_);
if (v___x_5098_ == 0)
{
lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; 
lean_dec(v___x_5095_);
lean_dec(v___x_5038_);
v___x_5099_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_5028_);
v___x_5100_ = l_Lean_MessageData_ofSyntax(v_a_5028_);
v___x_5101_ = l_Lean_indentD(v___x_5100_);
v___x_5102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5102_, 0, v___x_5099_);
lean_ctor_set(v___x_5102_, 1, v___x_5101_);
v___x_5103_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_5102_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5103_) == 0)
{
lean_dec_ref_known(v___x_5103_, 1);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5104_; 
v_a_5104_ = lean_ctor_get(v___x_5103_, 0);
lean_inc(v_a_5104_);
lean_dec_ref_known(v___x_5103_, 1);
v_a_5015_ = v_a_5104_;
goto v___jp_5014_;
}
}
else
{
lean_object* v___x_5105_; lean_object* v___x_5106_; uint8_t v___x_5107_; 
v___x_5105_ = l_Lean_Syntax_getArg(v___x_5095_, v___x_5037_);
lean_dec(v___x_5095_);
v___x_5106_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
lean_inc(v___x_5105_);
v___x_5107_ = l_Lean_Syntax_isOfKind(v___x_5105_, v___x_5106_);
if (v___x_5107_ == 0)
{
lean_object* v___x_5108_; lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; 
lean_dec(v___x_5105_);
lean_dec(v___x_5038_);
v___x_5108_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_5028_);
v___x_5109_ = l_Lean_MessageData_ofSyntax(v_a_5028_);
v___x_5110_ = l_Lean_indentD(v___x_5109_);
v___x_5111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5111_, 0, v___x_5108_);
lean_ctor_set(v___x_5111_, 1, v___x_5110_);
v___x_5112_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_5111_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5112_) == 0)
{
lean_dec_ref_known(v___x_5112_, 1);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5113_; 
v_a_5113_ = lean_ctor_get(v___x_5112_, 0);
lean_inc(v_a_5113_);
lean_dec_ref_known(v___x_5112_, 1);
v_a_5015_ = v_a_5113_;
goto v___jp_5014_;
}
}
else
{
lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; 
v___x_5114_ = lean_box(0);
v___x_5115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5115_, 0, v___x_5105_);
lean_inc(v_a_5028_);
lean_inc_ref(v_b_5001_);
v___x_5116_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_5038_, v_b_5001_, v_a_5028_, v___x_5040_, v_only_4996_, v_incremental_4997_, v___x_5114_, v___x_5115_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
lean_dec(v___x_5038_);
v___y_5022_ = v___x_5116_;
goto v___jp_5021_;
}
}
}
else
{
lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; 
lean_dec(v___x_5095_);
v___x_5117_ = lean_box(0);
v___x_5118_ = lean_box(0);
lean_inc(v_a_5028_);
lean_inc_ref(v_b_5001_);
v___x_5119_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2(v___x_5038_, v_b_5001_, v_a_5028_, v___x_5040_, v_only_4996_, v_incremental_4997_, v___x_5117_, v___x_5118_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
lean_dec(v___x_5038_);
v___y_5022_ = v___x_5119_;
goto v___jp_5021_;
}
}
}
else
{
lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; uint8_t v___x_5123_; 
v___x_5120_ = lean_unsigned_to_nat(1u);
v___x_5121_ = l_Lean_Syntax_getArg(v___x_5038_, v___x_5120_);
lean_dec(v___x_5038_);
v___x_5122_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v___x_5121_);
v___x_5123_ = l_Lean_Syntax_isOfKind(v___x_5121_, v___x_5122_);
if (v___x_5123_ == 0)
{
lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; 
lean_dec(v___x_5121_);
v___x_5124_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__3);
lean_inc(v_a_5028_);
v___x_5125_ = l_Lean_MessageData_ofSyntax(v_a_5028_);
v___x_5126_ = l_Lean_indentD(v___x_5125_);
v___x_5127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5127_, 0, v___x_5124_);
lean_ctor_set(v___x_5127_, 1, v___x_5126_);
v___x_5128_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processTermParam_spec__2___redArg(v___x_5127_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5128_) == 0)
{
lean_dec_ref_known(v___x_5128_, 1);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5129_; 
v_a_5129_ = lean_ctor_get(v___x_5128_, 0);
lean_inc(v_a_5129_);
lean_dec_ref_known(v___x_5128_, 1);
v_a_5015_ = v_a_5129_;
goto v___jp_5014_;
}
}
else
{
if (v_incremental_4997_ == 0)
{
lean_object* v___x_5130_; lean_object* v___x_5131_; 
v___x_5130_ = lean_box(0);
lean_inc_ref(v_b_5001_);
v___x_5131_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_5121_, v___x_5030_, v_b_5001_, v___x_5130_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
v___y_5022_ = v___x_5131_;
goto v___jp_5021_;
}
else
{
lean_object* v___x_5132_; lean_object* v___x_5133_; 
v___x_5132_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__17);
v___x_5133_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__3___redArg(v_a_5028_, v___x_5132_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
if (lean_obj_tag(v___x_5133_) == 0)
{
lean_object* v_a_5134_; lean_object* v___x_5135_; 
v_a_5134_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_a_5134_);
lean_dec_ref_known(v___x_5133_, 1);
lean_inc_ref(v_b_5001_);
v___x_5135_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__3(v___x_5121_, v___x_5030_, v_b_5001_, v_a_5134_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_);
v___y_5022_ = v___x_5135_;
goto v___jp_5021_;
}
else
{
lean_object* v_a_5136_; 
lean_dec(v___x_5121_);
v_a_5136_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_a_5136_);
lean_dec_ref_known(v___x_5133_, 1);
v_a_5015_ = v_a_5136_;
goto v___jp_5014_;
}
}
}
}
}
}
v___jp_5009_:
{
size_t v___x_5011_; size_t v___x_5012_; 
v___x_5011_ = ((size_t)1ULL);
v___x_5012_ = lean_usize_add(v_i_5000_, v___x_5011_);
v_i_5000_ = v___x_5012_;
v_b_5001_ = v_snd_5010_;
goto _start;
}
v___jp_5014_:
{
uint8_t v___x_5016_; 
v___x_5016_ = l_Lean_Exception_isInterrupt(v_a_5015_);
if (v___x_5016_ == 0)
{
uint8_t v___x_5017_; 
lean_inc_ref(v_a_5015_);
v___x_5017_ = l_Lean_Exception_isRuntime(v_a_5015_);
if (v___x_5017_ == 0)
{
if (v_lax_4995_ == 0)
{
lean_object* v___x_5018_; 
lean_dec_ref(v_b_5001_);
v___x_5018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5018_, 0, v_a_5015_);
return v___x_5018_;
}
else
{
lean_dec_ref(v_a_5015_);
v_snd_5010_ = v_b_5001_;
goto v___jp_5009_;
}
}
else
{
lean_object* v___x_5019_; 
lean_dec_ref(v_b_5001_);
v___x_5019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5019_, 0, v_a_5015_);
return v___x_5019_;
}
}
else
{
lean_object* v___x_5020_; 
lean_dec_ref(v_b_5001_);
v___x_5020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5020_, 0, v_a_5015_);
return v___x_5020_;
}
}
v___jp_5021_:
{
if (lean_obj_tag(v___y_5022_) == 0)
{
lean_object* v_a_5023_; lean_object* v_snd_5024_; 
lean_dec_ref(v_b_5001_);
v_a_5023_ = lean_ctor_get(v___y_5022_, 0);
lean_inc(v_a_5023_);
lean_dec_ref_known(v___y_5022_, 1);
v_snd_5024_ = lean_ctor_get(v_a_5023_, 1);
lean_inc(v_snd_5024_);
lean_dec(v_a_5023_);
v_snd_5010_ = v_snd_5024_;
goto v___jp_5009_;
}
else
{
lean_object* v_a_5025_; 
v_a_5025_ = lean_ctor_get(v___y_5022_, 0);
lean_inc(v_a_5025_);
lean_dec_ref_known(v___y_5022_, 1);
v_a_5015_ = v_a_5025_;
goto v___jp_5014_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___boxed(lean_object* v_lax_5137_, lean_object* v_only_5138_, lean_object* v_incremental_5139_, lean_object* v_as_5140_, lean_object* v_sz_5141_, lean_object* v_i_5142_, lean_object* v_b_5143_, lean_object* v___y_5144_, lean_object* v___y_5145_, lean_object* v___y_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_){
_start:
{
uint8_t v_lax_boxed_5151_; uint8_t v_only_boxed_5152_; uint8_t v_incremental_boxed_5153_; size_t v_sz_boxed_5154_; size_t v_i_boxed_5155_; lean_object* v_res_5156_; 
v_lax_boxed_5151_ = lean_unbox(v_lax_5137_);
v_only_boxed_5152_ = lean_unbox(v_only_5138_);
v_incremental_boxed_5153_ = lean_unbox(v_incremental_5139_);
v_sz_boxed_5154_ = lean_unbox_usize(v_sz_5141_);
lean_dec(v_sz_5141_);
v_i_boxed_5155_ = lean_unbox_usize(v_i_5142_);
lean_dec(v_i_5142_);
v_res_5156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(v_lax_boxed_5151_, v_only_boxed_5152_, v_incremental_boxed_5153_, v_as_5140_, v_sz_boxed_5154_, v_i_boxed_5155_, v_b_5143_, v___y_5144_, v___y_5145_, v___y_5146_, v___y_5147_, v___y_5148_, v___y_5149_);
lean_dec(v___y_5149_);
lean_dec_ref(v___y_5148_);
lean_dec(v___y_5147_);
lean_dec_ref(v___y_5146_);
lean_dec(v___y_5145_);
lean_dec_ref(v___y_5144_);
lean_dec_ref(v_as_5140_);
return v_res_5156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams(lean_object* v_params_5157_, lean_object* v_ps_5158_, uint8_t v_only_5159_, uint8_t v_lax_5160_, uint8_t v_incremental_5161_, lean_object* v_a_5162_, lean_object* v_a_5163_, lean_object* v_a_5164_, lean_object* v_a_5165_, lean_object* v_a_5166_, lean_object* v_a_5167_){
_start:
{
size_t v_sz_5169_; size_t v___x_5170_; lean_object* v___x_5171_; 
v_sz_5169_ = lean_array_size(v_ps_5158_);
v___x_5170_ = ((size_t)0ULL);
v___x_5171_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0(v_lax_5160_, v_only_5159_, v_incremental_5161_, v_ps_5158_, v_sz_5169_, v___x_5170_, v_params_5157_, v_a_5162_, v_a_5163_, v_a_5164_, v_a_5165_, v_a_5166_, v_a_5167_);
return v___x_5171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabGrindParams___boxed(lean_object* v_params_5172_, lean_object* v_ps_5173_, lean_object* v_only_5174_, lean_object* v_lax_5175_, lean_object* v_incremental_5176_, lean_object* v_a_5177_, lean_object* v_a_5178_, lean_object* v_a_5179_, lean_object* v_a_5180_, lean_object* v_a_5181_, lean_object* v_a_5182_, lean_object* v_a_5183_){
_start:
{
uint8_t v_only_boxed_5184_; uint8_t v_lax_boxed_5185_; uint8_t v_incremental_boxed_5186_; lean_object* v_res_5187_; 
v_only_boxed_5184_ = lean_unbox(v_only_5174_);
v_lax_boxed_5185_ = lean_unbox(v_lax_5175_);
v_incremental_boxed_5186_ = lean_unbox(v_incremental_5176_);
v_res_5187_ = l_Lean_Elab_Tactic_elabGrindParams(v_params_5172_, v_ps_5173_, v_only_boxed_5184_, v_lax_boxed_5185_, v_incremental_boxed_5186_, v_a_5177_, v_a_5178_, v_a_5179_, v_a_5180_, v_a_5181_, v_a_5182_);
lean_dec(v_a_5182_);
lean_dec_ref(v_a_5181_);
lean_dec(v_a_5180_);
lean_dec_ref(v_a_5179_);
lean_dec(v_a_5178_);
lean_dec_ref(v_a_5177_);
lean_dec_ref(v_ps_5173_);
return v_res_5187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(lean_object* v_thm_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_, lean_object* v_a_5191_, lean_object* v_a_5192_, lean_object* v_a_5193_, lean_object* v_a_5194_, lean_object* v_a_5195_, lean_object* v_a_5196_, lean_object* v_a_5197_){
_start:
{
lean_object* v_origin_5199_; 
v_origin_5199_ = lean_ctor_get(v_thm_5188_, 5);
if (lean_obj_tag(v_origin_5199_) == 0)
{
lean_object* v_declName_5200_; lean_object* v___x_5201_; 
lean_inc_ref(v_origin_5199_);
lean_dec_ref(v_thm_5188_);
v_declName_5200_ = lean_ctor_get(v_origin_5199_, 0);
lean_inc(v_declName_5200_);
lean_dec_ref_known(v_origin_5199_, 1);
v___x_5201_ = l_Lean_Meta_Grind_isMatchEqLikeDeclName(v_declName_5200_, v_a_5196_, v_a_5197_);
return v___x_5201_;
}
else
{
lean_object* v_proof_5202_; lean_object* v___x_5203_; 
v_proof_5202_ = lean_ctor_get(v_thm_5188_, 1);
lean_inc_ref(v_proof_5202_);
lean_dec_ref(v_thm_5188_);
v___x_5203_ = l_Lean_Meta_Grind_checkAnchorRefsEMatchTheoremProof(v_proof_5202_, v_a_5189_, v_a_5190_, v_a_5191_, v_a_5192_, v_a_5193_, v_a_5194_, v_a_5195_, v_a_5196_, v_a_5197_);
return v___x_5203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep___boxed(lean_object* v_thm_5204_, lean_object* v_a_5205_, lean_object* v_a_5206_, lean_object* v_a_5207_, lean_object* v_a_5208_, lean_object* v_a_5209_, lean_object* v_a_5210_, lean_object* v_a_5211_, lean_object* v_a_5212_, lean_object* v_a_5213_, lean_object* v_a_5214_){
_start:
{
lean_object* v_res_5215_; 
v_res_5215_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_thm_5204_, v_a_5205_, v_a_5206_, v_a_5207_, v_a_5208_, v_a_5209_, v_a_5210_, v_a_5211_, v_a_5212_, v_a_5213_);
lean_dec(v_a_5213_);
lean_dec_ref(v_a_5212_);
lean_dec(v_a_5211_);
lean_dec_ref(v_a_5210_);
lean_dec(v_a_5209_);
lean_dec_ref(v_a_5208_);
lean_dec(v_a_5207_);
lean_dec_ref(v_a_5206_);
lean_dec(v_a_5205_);
return v_res_5215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(lean_object* v_as_5216_, size_t v_sz_5217_, size_t v_i_5218_, lean_object* v_b_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_, lean_object* v___y_5225_, lean_object* v___y_5226_, lean_object* v___y_5227_, lean_object* v___y_5228_){
_start:
{
uint8_t v___x_5230_; 
v___x_5230_ = lean_usize_dec_lt(v_i_5218_, v_sz_5217_);
if (v___x_5230_ == 0)
{
lean_object* v___x_5231_; 
v___x_5231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5231_, 0, v_b_5219_);
return v___x_5231_;
}
else
{
lean_object* v_snd_5232_; lean_object* v___x_5234_; uint8_t v_isShared_5235_; uint8_t v_isSharedCheck_5258_; 
v_snd_5232_ = lean_ctor_get(v_b_5219_, 1);
v_isSharedCheck_5258_ = !lean_is_exclusive(v_b_5219_);
if (v_isSharedCheck_5258_ == 0)
{
lean_object* v_unused_5259_; 
v_unused_5259_ = lean_ctor_get(v_b_5219_, 0);
lean_dec(v_unused_5259_);
v___x_5234_ = v_b_5219_;
v_isShared_5235_ = v_isSharedCheck_5258_;
goto v_resetjp_5233_;
}
else
{
lean_inc(v_snd_5232_);
lean_dec(v_b_5219_);
v___x_5234_ = lean_box(0);
v_isShared_5235_ = v_isSharedCheck_5258_;
goto v_resetjp_5233_;
}
v_resetjp_5233_:
{
lean_object* v___x_5236_; lean_object* v_a_5238_; lean_object* v_a_5245_; lean_object* v___x_5246_; 
v___x_5236_ = lean_box(0);
v_a_5245_ = lean_array_uget_borrowed(v_as_5216_, v_i_5218_);
lean_inc(v_a_5245_);
v___x_5246_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5245_, v___y_5220_, v___y_5221_, v___y_5222_, v___y_5223_, v___y_5224_, v___y_5225_, v___y_5226_, v___y_5227_, v___y_5228_);
if (lean_obj_tag(v___x_5246_) == 0)
{
lean_object* v_a_5247_; uint8_t v___x_5248_; 
v_a_5247_ = lean_ctor_get(v___x_5246_, 0);
lean_inc(v_a_5247_);
lean_dec_ref_known(v___x_5246_, 1);
v___x_5248_ = lean_unbox(v_a_5247_);
lean_dec(v_a_5247_);
if (v___x_5248_ == 0)
{
v_a_5238_ = v_snd_5232_;
goto v___jp_5237_;
}
else
{
lean_object* v___x_5249_; 
lean_inc(v_a_5245_);
v___x_5249_ = l_Lean_PersistentArray_push___redArg(v_snd_5232_, v_a_5245_);
v_a_5238_ = v___x_5249_;
goto v___jp_5237_;
}
}
else
{
lean_object* v_a_5250_; lean_object* v___x_5252_; uint8_t v_isShared_5253_; uint8_t v_isSharedCheck_5257_; 
lean_del_object(v___x_5234_);
lean_dec(v_snd_5232_);
v_a_5250_ = lean_ctor_get(v___x_5246_, 0);
v_isSharedCheck_5257_ = !lean_is_exclusive(v___x_5246_);
if (v_isSharedCheck_5257_ == 0)
{
v___x_5252_ = v___x_5246_;
v_isShared_5253_ = v_isSharedCheck_5257_;
goto v_resetjp_5251_;
}
else
{
lean_inc(v_a_5250_);
lean_dec(v___x_5246_);
v___x_5252_ = lean_box(0);
v_isShared_5253_ = v_isSharedCheck_5257_;
goto v_resetjp_5251_;
}
v_resetjp_5251_:
{
lean_object* v___x_5255_; 
if (v_isShared_5253_ == 0)
{
v___x_5255_ = v___x_5252_;
goto v_reusejp_5254_;
}
else
{
lean_object* v_reuseFailAlloc_5256_; 
v_reuseFailAlloc_5256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5256_, 0, v_a_5250_);
v___x_5255_ = v_reuseFailAlloc_5256_;
goto v_reusejp_5254_;
}
v_reusejp_5254_:
{
return v___x_5255_;
}
}
}
v___jp_5237_:
{
lean_object* v___x_5240_; 
if (v_isShared_5235_ == 0)
{
lean_ctor_set(v___x_5234_, 1, v_a_5238_);
lean_ctor_set(v___x_5234_, 0, v___x_5236_);
v___x_5240_ = v___x_5234_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v___x_5236_);
lean_ctor_set(v_reuseFailAlloc_5244_, 1, v_a_5238_);
v___x_5240_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
size_t v___x_5241_; size_t v___x_5242_; 
v___x_5241_ = ((size_t)1ULL);
v___x_5242_ = lean_usize_add(v_i_5218_, v___x_5241_);
v_i_5218_ = v___x_5242_;
v_b_5219_ = v___x_5240_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4___boxed(lean_object* v_as_5260_, lean_object* v_sz_5261_, lean_object* v_i_5262_, lean_object* v_b_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_){
_start:
{
size_t v_sz_boxed_5274_; size_t v_i_boxed_5275_; lean_object* v_res_5276_; 
v_sz_boxed_5274_ = lean_unbox_usize(v_sz_5261_);
lean_dec(v_sz_5261_);
v_i_boxed_5275_ = lean_unbox_usize(v_i_5262_);
lean_dec(v_i_5262_);
v_res_5276_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(v_as_5260_, v_sz_boxed_5274_, v_i_boxed_5275_, v_b_5263_, v___y_5264_, v___y_5265_, v___y_5266_, v___y_5267_, v___y_5268_, v___y_5269_, v___y_5270_, v___y_5271_, v___y_5272_);
lean_dec(v___y_5272_);
lean_dec_ref(v___y_5271_);
lean_dec(v___y_5270_);
lean_dec_ref(v___y_5269_);
lean_dec(v___y_5268_);
lean_dec_ref(v___y_5267_);
lean_dec(v___y_5266_);
lean_dec_ref(v___y_5265_);
lean_dec(v___y_5264_);
lean_dec_ref(v_as_5260_);
return v_res_5276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(lean_object* v_as_5277_, size_t v_sz_5278_, size_t v_i_5279_, lean_object* v_b_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_){
_start:
{
uint8_t v___x_5291_; 
v___x_5291_ = lean_usize_dec_lt(v_i_5279_, v_sz_5278_);
if (v___x_5291_ == 0)
{
lean_object* v___x_5292_; 
v___x_5292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5292_, 0, v_b_5280_);
return v___x_5292_;
}
else
{
lean_object* v_snd_5293_; lean_object* v___x_5295_; uint8_t v_isShared_5296_; uint8_t v_isSharedCheck_5319_; 
v_snd_5293_ = lean_ctor_get(v_b_5280_, 1);
v_isSharedCheck_5319_ = !lean_is_exclusive(v_b_5280_);
if (v_isSharedCheck_5319_ == 0)
{
lean_object* v_unused_5320_; 
v_unused_5320_ = lean_ctor_get(v_b_5280_, 0);
lean_dec(v_unused_5320_);
v___x_5295_ = v_b_5280_;
v_isShared_5296_ = v_isSharedCheck_5319_;
goto v_resetjp_5294_;
}
else
{
lean_inc(v_snd_5293_);
lean_dec(v_b_5280_);
v___x_5295_ = lean_box(0);
v_isShared_5296_ = v_isSharedCheck_5319_;
goto v_resetjp_5294_;
}
v_resetjp_5294_:
{
lean_object* v___x_5297_; lean_object* v_a_5299_; lean_object* v_a_5306_; lean_object* v___x_5307_; 
v___x_5297_ = lean_box(0);
v_a_5306_ = lean_array_uget_borrowed(v_as_5277_, v_i_5279_);
lean_inc(v_a_5306_);
v___x_5307_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5306_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_, v___y_5289_);
if (lean_obj_tag(v___x_5307_) == 0)
{
lean_object* v_a_5308_; uint8_t v___x_5309_; 
v_a_5308_ = lean_ctor_get(v___x_5307_, 0);
lean_inc(v_a_5308_);
lean_dec_ref_known(v___x_5307_, 1);
v___x_5309_ = lean_unbox(v_a_5308_);
lean_dec(v_a_5308_);
if (v___x_5309_ == 0)
{
v_a_5299_ = v_snd_5293_;
goto v___jp_5298_;
}
else
{
lean_object* v___x_5310_; 
lean_inc(v_a_5306_);
v___x_5310_ = l_Lean_PersistentArray_push___redArg(v_snd_5293_, v_a_5306_);
v_a_5299_ = v___x_5310_;
goto v___jp_5298_;
}
}
else
{
lean_object* v_a_5311_; lean_object* v___x_5313_; uint8_t v_isShared_5314_; uint8_t v_isSharedCheck_5318_; 
lean_del_object(v___x_5295_);
lean_dec(v_snd_5293_);
v_a_5311_ = lean_ctor_get(v___x_5307_, 0);
v_isSharedCheck_5318_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5318_ == 0)
{
v___x_5313_ = v___x_5307_;
v_isShared_5314_ = v_isSharedCheck_5318_;
goto v_resetjp_5312_;
}
else
{
lean_inc(v_a_5311_);
lean_dec(v___x_5307_);
v___x_5313_ = lean_box(0);
v_isShared_5314_ = v_isSharedCheck_5318_;
goto v_resetjp_5312_;
}
v_resetjp_5312_:
{
lean_object* v___x_5316_; 
if (v_isShared_5314_ == 0)
{
v___x_5316_ = v___x_5313_;
goto v_reusejp_5315_;
}
else
{
lean_object* v_reuseFailAlloc_5317_; 
v_reuseFailAlloc_5317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5317_, 0, v_a_5311_);
v___x_5316_ = v_reuseFailAlloc_5317_;
goto v_reusejp_5315_;
}
v_reusejp_5315_:
{
return v___x_5316_;
}
}
}
v___jp_5298_:
{
lean_object* v___x_5301_; 
if (v_isShared_5296_ == 0)
{
lean_ctor_set(v___x_5295_, 1, v_a_5299_);
lean_ctor_set(v___x_5295_, 0, v___x_5297_);
v___x_5301_ = v___x_5295_;
goto v_reusejp_5300_;
}
else
{
lean_object* v_reuseFailAlloc_5305_; 
v_reuseFailAlloc_5305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5305_, 0, v___x_5297_);
lean_ctor_set(v_reuseFailAlloc_5305_, 1, v_a_5299_);
v___x_5301_ = v_reuseFailAlloc_5305_;
goto v_reusejp_5300_;
}
v_reusejp_5300_:
{
size_t v___x_5302_; size_t v___x_5303_; lean_object* v___x_5304_; 
v___x_5302_ = ((size_t)1ULL);
v___x_5303_ = lean_usize_add(v_i_5279_, v___x_5302_);
v___x_5304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1_spec__4(v_as_5277_, v_sz_5278_, v___x_5303_, v___x_5301_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_, v___y_5287_, v___y_5288_, v___y_5289_);
return v___x_5304_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1___boxed(lean_object* v_as_5321_, lean_object* v_sz_5322_, lean_object* v_i_5323_, lean_object* v_b_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_){
_start:
{
size_t v_sz_boxed_5335_; size_t v_i_boxed_5336_; lean_object* v_res_5337_; 
v_sz_boxed_5335_ = lean_unbox_usize(v_sz_5322_);
lean_dec(v_sz_5322_);
v_i_boxed_5336_ = lean_unbox_usize(v_i_5323_);
lean_dec(v_i_5323_);
v_res_5337_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(v_as_5321_, v_sz_boxed_5335_, v_i_boxed_5336_, v_b_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_, v___y_5331_, v___y_5332_, v___y_5333_);
lean_dec(v___y_5333_);
lean_dec_ref(v___y_5332_);
lean_dec(v___y_5331_);
lean_dec_ref(v___y_5330_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
lean_dec(v___y_5325_);
lean_dec_ref(v_as_5321_);
return v_res_5337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_5338_, size_t v_sz_5339_, size_t v_i_5340_, lean_object* v_b_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_){
_start:
{
uint8_t v___x_5352_; 
v___x_5352_ = lean_usize_dec_lt(v_i_5340_, v_sz_5339_);
if (v___x_5352_ == 0)
{
lean_object* v___x_5353_; 
v___x_5353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5353_, 0, v_b_5341_);
return v___x_5353_;
}
else
{
lean_object* v_snd_5354_; lean_object* v___x_5356_; uint8_t v_isShared_5357_; uint8_t v_isSharedCheck_5380_; 
v_snd_5354_ = lean_ctor_get(v_b_5341_, 1);
v_isSharedCheck_5380_ = !lean_is_exclusive(v_b_5341_);
if (v_isSharedCheck_5380_ == 0)
{
lean_object* v_unused_5381_; 
v_unused_5381_ = lean_ctor_get(v_b_5341_, 0);
lean_dec(v_unused_5381_);
v___x_5356_ = v_b_5341_;
v_isShared_5357_ = v_isSharedCheck_5380_;
goto v_resetjp_5355_;
}
else
{
lean_inc(v_snd_5354_);
lean_dec(v_b_5341_);
v___x_5356_ = lean_box(0);
v_isShared_5357_ = v_isSharedCheck_5380_;
goto v_resetjp_5355_;
}
v_resetjp_5355_:
{
lean_object* v___x_5358_; lean_object* v_a_5360_; lean_object* v_a_5367_; lean_object* v___x_5368_; 
v___x_5358_ = lean_box(0);
v_a_5367_ = lean_array_uget_borrowed(v_as_5338_, v_i_5340_);
lean_inc(v_a_5367_);
v___x_5368_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5367_, v___y_5342_, v___y_5343_, v___y_5344_, v___y_5345_, v___y_5346_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_);
if (lean_obj_tag(v___x_5368_) == 0)
{
lean_object* v_a_5369_; uint8_t v___x_5370_; 
v_a_5369_ = lean_ctor_get(v___x_5368_, 0);
lean_inc(v_a_5369_);
lean_dec_ref_known(v___x_5368_, 1);
v___x_5370_ = lean_unbox(v_a_5369_);
lean_dec(v_a_5369_);
if (v___x_5370_ == 0)
{
v_a_5360_ = v_snd_5354_;
goto v___jp_5359_;
}
else
{
lean_object* v___x_5371_; 
lean_inc(v_a_5367_);
v___x_5371_ = l_Lean_PersistentArray_push___redArg(v_snd_5354_, v_a_5367_);
v_a_5360_ = v___x_5371_;
goto v___jp_5359_;
}
}
else
{
lean_object* v_a_5372_; lean_object* v___x_5374_; uint8_t v_isShared_5375_; uint8_t v_isSharedCheck_5379_; 
lean_del_object(v___x_5356_);
lean_dec(v_snd_5354_);
v_a_5372_ = lean_ctor_get(v___x_5368_, 0);
v_isSharedCheck_5379_ = !lean_is_exclusive(v___x_5368_);
if (v_isSharedCheck_5379_ == 0)
{
v___x_5374_ = v___x_5368_;
v_isShared_5375_ = v_isSharedCheck_5379_;
goto v_resetjp_5373_;
}
else
{
lean_inc(v_a_5372_);
lean_dec(v___x_5368_);
v___x_5374_ = lean_box(0);
v_isShared_5375_ = v_isSharedCheck_5379_;
goto v_resetjp_5373_;
}
v_resetjp_5373_:
{
lean_object* v___x_5377_; 
if (v_isShared_5375_ == 0)
{
v___x_5377_ = v___x_5374_;
goto v_reusejp_5376_;
}
else
{
lean_object* v_reuseFailAlloc_5378_; 
v_reuseFailAlloc_5378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5378_, 0, v_a_5372_);
v___x_5377_ = v_reuseFailAlloc_5378_;
goto v_reusejp_5376_;
}
v_reusejp_5376_:
{
return v___x_5377_;
}
}
}
v___jp_5359_:
{
lean_object* v___x_5362_; 
if (v_isShared_5357_ == 0)
{
lean_ctor_set(v___x_5356_, 1, v_a_5360_);
lean_ctor_set(v___x_5356_, 0, v___x_5358_);
v___x_5362_ = v___x_5356_;
goto v_reusejp_5361_;
}
else
{
lean_object* v_reuseFailAlloc_5366_; 
v_reuseFailAlloc_5366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5366_, 0, v___x_5358_);
lean_ctor_set(v_reuseFailAlloc_5366_, 1, v_a_5360_);
v___x_5362_ = v_reuseFailAlloc_5366_;
goto v_reusejp_5361_;
}
v_reusejp_5361_:
{
size_t v___x_5363_; size_t v___x_5364_; 
v___x_5363_ = ((size_t)1ULL);
v___x_5364_ = lean_usize_add(v_i_5340_, v___x_5363_);
v_i_5340_ = v___x_5364_;
v_b_5341_ = v___x_5362_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_5382_, lean_object* v_sz_5383_, lean_object* v_i_5384_, lean_object* v_b_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_){
_start:
{
size_t v_sz_boxed_5396_; size_t v_i_boxed_5397_; lean_object* v_res_5398_; 
v_sz_boxed_5396_ = lean_unbox_usize(v_sz_5383_);
lean_dec(v_sz_5383_);
v_i_boxed_5397_ = lean_unbox_usize(v_i_5384_);
lean_dec(v_i_5384_);
v_res_5398_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(v_as_5382_, v_sz_boxed_5396_, v_i_boxed_5397_, v_b_5385_, v___y_5386_, v___y_5387_, v___y_5388_, v___y_5389_, v___y_5390_, v___y_5391_, v___y_5392_, v___y_5393_, v___y_5394_);
lean_dec(v___y_5394_);
lean_dec_ref(v___y_5393_);
lean_dec(v___y_5392_);
lean_dec_ref(v___y_5391_);
lean_dec(v___y_5390_);
lean_dec_ref(v___y_5389_);
lean_dec(v___y_5388_);
lean_dec_ref(v___y_5387_);
lean_dec(v___y_5386_);
lean_dec_ref(v_as_5382_);
return v_res_5398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(lean_object* v_as_5399_, size_t v_sz_5400_, size_t v_i_5401_, lean_object* v_b_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_){
_start:
{
uint8_t v___x_5413_; 
v___x_5413_ = lean_usize_dec_lt(v_i_5401_, v_sz_5400_);
if (v___x_5413_ == 0)
{
lean_object* v___x_5414_; 
v___x_5414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5414_, 0, v_b_5402_);
return v___x_5414_;
}
else
{
lean_object* v_snd_5415_; lean_object* v___x_5417_; uint8_t v_isShared_5418_; uint8_t v_isSharedCheck_5441_; 
v_snd_5415_ = lean_ctor_get(v_b_5402_, 1);
v_isSharedCheck_5441_ = !lean_is_exclusive(v_b_5402_);
if (v_isSharedCheck_5441_ == 0)
{
lean_object* v_unused_5442_; 
v_unused_5442_ = lean_ctor_get(v_b_5402_, 0);
lean_dec(v_unused_5442_);
v___x_5417_ = v_b_5402_;
v_isShared_5418_ = v_isSharedCheck_5441_;
goto v_resetjp_5416_;
}
else
{
lean_inc(v_snd_5415_);
lean_dec(v_b_5402_);
v___x_5417_ = lean_box(0);
v_isShared_5418_ = v_isSharedCheck_5441_;
goto v_resetjp_5416_;
}
v_resetjp_5416_:
{
lean_object* v___x_5419_; lean_object* v_a_5421_; lean_object* v_a_5428_; lean_object* v___x_5429_; 
v___x_5419_ = lean_box(0);
v_a_5428_ = lean_array_uget_borrowed(v_as_5399_, v_i_5401_);
lean_inc(v_a_5428_);
v___x_5429_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_shouldKeep(v_a_5428_, v___y_5403_, v___y_5404_, v___y_5405_, v___y_5406_, v___y_5407_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_);
if (lean_obj_tag(v___x_5429_) == 0)
{
lean_object* v_a_5430_; uint8_t v___x_5431_; 
v_a_5430_ = lean_ctor_get(v___x_5429_, 0);
lean_inc(v_a_5430_);
lean_dec_ref_known(v___x_5429_, 1);
v___x_5431_ = lean_unbox(v_a_5430_);
lean_dec(v_a_5430_);
if (v___x_5431_ == 0)
{
v_a_5421_ = v_snd_5415_;
goto v___jp_5420_;
}
else
{
lean_object* v___x_5432_; 
lean_inc(v_a_5428_);
v___x_5432_ = l_Lean_PersistentArray_push___redArg(v_snd_5415_, v_a_5428_);
v_a_5421_ = v___x_5432_;
goto v___jp_5420_;
}
}
else
{
lean_object* v_a_5433_; lean_object* v___x_5435_; uint8_t v_isShared_5436_; uint8_t v_isSharedCheck_5440_; 
lean_del_object(v___x_5417_);
lean_dec(v_snd_5415_);
v_a_5433_ = lean_ctor_get(v___x_5429_, 0);
v_isSharedCheck_5440_ = !lean_is_exclusive(v___x_5429_);
if (v_isSharedCheck_5440_ == 0)
{
v___x_5435_ = v___x_5429_;
v_isShared_5436_ = v_isSharedCheck_5440_;
goto v_resetjp_5434_;
}
else
{
lean_inc(v_a_5433_);
lean_dec(v___x_5429_);
v___x_5435_ = lean_box(0);
v_isShared_5436_ = v_isSharedCheck_5440_;
goto v_resetjp_5434_;
}
v_resetjp_5434_:
{
lean_object* v___x_5438_; 
if (v_isShared_5436_ == 0)
{
v___x_5438_ = v___x_5435_;
goto v_reusejp_5437_;
}
else
{
lean_object* v_reuseFailAlloc_5439_; 
v_reuseFailAlloc_5439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5439_, 0, v_a_5433_);
v___x_5438_ = v_reuseFailAlloc_5439_;
goto v_reusejp_5437_;
}
v_reusejp_5437_:
{
return v___x_5438_;
}
}
}
v___jp_5420_:
{
lean_object* v___x_5423_; 
if (v_isShared_5418_ == 0)
{
lean_ctor_set(v___x_5417_, 1, v_a_5421_);
lean_ctor_set(v___x_5417_, 0, v___x_5419_);
v___x_5423_ = v___x_5417_;
goto v_reusejp_5422_;
}
else
{
lean_object* v_reuseFailAlloc_5427_; 
v_reuseFailAlloc_5427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5427_, 0, v___x_5419_);
lean_ctor_set(v_reuseFailAlloc_5427_, 1, v_a_5421_);
v___x_5423_ = v_reuseFailAlloc_5427_;
goto v_reusejp_5422_;
}
v_reusejp_5422_:
{
size_t v___x_5424_; size_t v___x_5425_; lean_object* v___x_5426_; 
v___x_5424_ = ((size_t)1ULL);
v___x_5425_ = lean_usize_add(v_i_5401_, v___x_5424_);
v___x_5426_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2_spec__3(v_as_5399_, v_sz_5400_, v___x_5425_, v___x_5423_, v___y_5403_, v___y_5404_, v___y_5405_, v___y_5406_, v___y_5407_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_);
return v___x_5426_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2___boxed(lean_object* v_as_5443_, lean_object* v_sz_5444_, lean_object* v_i_5445_, lean_object* v_b_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_){
_start:
{
size_t v_sz_boxed_5457_; size_t v_i_boxed_5458_; lean_object* v_res_5459_; 
v_sz_boxed_5457_ = lean_unbox_usize(v_sz_5444_);
lean_dec(v_sz_5444_);
v_i_boxed_5458_ = lean_unbox_usize(v_i_5445_);
lean_dec(v_i_5445_);
v_res_5459_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(v_as_5443_, v_sz_boxed_5457_, v_i_boxed_5458_, v_b_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_, v___y_5454_, v___y_5455_);
lean_dec(v___y_5455_);
lean_dec_ref(v___y_5454_);
lean_dec(v___y_5453_);
lean_dec_ref(v___y_5452_);
lean_dec(v___y_5451_);
lean_dec_ref(v___y_5450_);
lean_dec(v___y_5449_);
lean_dec_ref(v___y_5448_);
lean_dec(v___y_5447_);
lean_dec_ref(v_as_5443_);
return v_res_5459_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(lean_object* v_init_5460_, lean_object* v_n_5461_, lean_object* v_b_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_){
_start:
{
if (lean_obj_tag(v_n_5461_) == 0)
{
lean_object* v_cs_5473_; lean_object* v___x_5474_; lean_object* v___x_5475_; size_t v_sz_5476_; size_t v___x_5477_; lean_object* v___x_5478_; 
v_cs_5473_ = lean_ctor_get(v_n_5461_, 0);
v___x_5474_ = lean_box(0);
v___x_5475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5475_, 0, v___x_5474_);
lean_ctor_set(v___x_5475_, 1, v_b_5462_);
v_sz_5476_ = lean_array_size(v_cs_5473_);
v___x_5477_ = ((size_t)0ULL);
v___x_5478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(v_init_5460_, v_cs_5473_, v_sz_5476_, v___x_5477_, v___x_5475_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_, v___y_5467_, v___y_5468_, v___y_5469_, v___y_5470_, v___y_5471_);
if (lean_obj_tag(v___x_5478_) == 0)
{
lean_object* v_a_5479_; lean_object* v___x_5481_; uint8_t v_isShared_5482_; uint8_t v_isSharedCheck_5493_; 
v_a_5479_ = lean_ctor_get(v___x_5478_, 0);
v_isSharedCheck_5493_ = !lean_is_exclusive(v___x_5478_);
if (v_isSharedCheck_5493_ == 0)
{
v___x_5481_ = v___x_5478_;
v_isShared_5482_ = v_isSharedCheck_5493_;
goto v_resetjp_5480_;
}
else
{
lean_inc(v_a_5479_);
lean_dec(v___x_5478_);
v___x_5481_ = lean_box(0);
v_isShared_5482_ = v_isSharedCheck_5493_;
goto v_resetjp_5480_;
}
v_resetjp_5480_:
{
lean_object* v_fst_5483_; 
v_fst_5483_ = lean_ctor_get(v_a_5479_, 0);
if (lean_obj_tag(v_fst_5483_) == 0)
{
lean_object* v_snd_5484_; lean_object* v___x_5485_; lean_object* v___x_5487_; 
v_snd_5484_ = lean_ctor_get(v_a_5479_, 1);
lean_inc(v_snd_5484_);
lean_dec(v_a_5479_);
v___x_5485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5485_, 0, v_snd_5484_);
if (v_isShared_5482_ == 0)
{
lean_ctor_set(v___x_5481_, 0, v___x_5485_);
v___x_5487_ = v___x_5481_;
goto v_reusejp_5486_;
}
else
{
lean_object* v_reuseFailAlloc_5488_; 
v_reuseFailAlloc_5488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5488_, 0, v___x_5485_);
v___x_5487_ = v_reuseFailAlloc_5488_;
goto v_reusejp_5486_;
}
v_reusejp_5486_:
{
return v___x_5487_;
}
}
else
{
lean_object* v_val_5489_; lean_object* v___x_5491_; 
lean_inc_ref(v_fst_5483_);
lean_dec(v_a_5479_);
v_val_5489_ = lean_ctor_get(v_fst_5483_, 0);
lean_inc(v_val_5489_);
lean_dec_ref_known(v_fst_5483_, 1);
if (v_isShared_5482_ == 0)
{
lean_ctor_set(v___x_5481_, 0, v_val_5489_);
v___x_5491_ = v___x_5481_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_val_5489_);
v___x_5491_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
return v___x_5491_;
}
}
}
}
else
{
lean_object* v_a_5494_; lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5501_; 
v_a_5494_ = lean_ctor_get(v___x_5478_, 0);
v_isSharedCheck_5501_ = !lean_is_exclusive(v___x_5478_);
if (v_isSharedCheck_5501_ == 0)
{
v___x_5496_ = v___x_5478_;
v_isShared_5497_ = v_isSharedCheck_5501_;
goto v_resetjp_5495_;
}
else
{
lean_inc(v_a_5494_);
lean_dec(v___x_5478_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5501_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
lean_object* v___x_5499_; 
if (v_isShared_5497_ == 0)
{
v___x_5499_ = v___x_5496_;
goto v_reusejp_5498_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v_a_5494_);
v___x_5499_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5498_;
}
v_reusejp_5498_:
{
return v___x_5499_;
}
}
}
}
else
{
lean_object* v_vs_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; size_t v_sz_5505_; size_t v___x_5506_; lean_object* v___x_5507_; 
v_vs_5502_ = lean_ctor_get(v_n_5461_, 0);
v___x_5503_ = lean_box(0);
v___x_5504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5504_, 0, v___x_5503_);
lean_ctor_set(v___x_5504_, 1, v_b_5462_);
v_sz_5505_ = lean_array_size(v_vs_5502_);
v___x_5506_ = ((size_t)0ULL);
v___x_5507_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__2(v_vs_5502_, v_sz_5505_, v___x_5506_, v___x_5504_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_, v___y_5467_, v___y_5468_, v___y_5469_, v___y_5470_, v___y_5471_);
if (lean_obj_tag(v___x_5507_) == 0)
{
lean_object* v_a_5508_; lean_object* v___x_5510_; uint8_t v_isShared_5511_; uint8_t v_isSharedCheck_5522_; 
v_a_5508_ = lean_ctor_get(v___x_5507_, 0);
v_isSharedCheck_5522_ = !lean_is_exclusive(v___x_5507_);
if (v_isSharedCheck_5522_ == 0)
{
v___x_5510_ = v___x_5507_;
v_isShared_5511_ = v_isSharedCheck_5522_;
goto v_resetjp_5509_;
}
else
{
lean_inc(v_a_5508_);
lean_dec(v___x_5507_);
v___x_5510_ = lean_box(0);
v_isShared_5511_ = v_isSharedCheck_5522_;
goto v_resetjp_5509_;
}
v_resetjp_5509_:
{
lean_object* v_fst_5512_; 
v_fst_5512_ = lean_ctor_get(v_a_5508_, 0);
if (lean_obj_tag(v_fst_5512_) == 0)
{
lean_object* v_snd_5513_; lean_object* v___x_5514_; lean_object* v___x_5516_; 
v_snd_5513_ = lean_ctor_get(v_a_5508_, 1);
lean_inc(v_snd_5513_);
lean_dec(v_a_5508_);
v___x_5514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5514_, 0, v_snd_5513_);
if (v_isShared_5511_ == 0)
{
lean_ctor_set(v___x_5510_, 0, v___x_5514_);
v___x_5516_ = v___x_5510_;
goto v_reusejp_5515_;
}
else
{
lean_object* v_reuseFailAlloc_5517_; 
v_reuseFailAlloc_5517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5517_, 0, v___x_5514_);
v___x_5516_ = v_reuseFailAlloc_5517_;
goto v_reusejp_5515_;
}
v_reusejp_5515_:
{
return v___x_5516_;
}
}
else
{
lean_object* v_val_5518_; lean_object* v___x_5520_; 
lean_inc_ref(v_fst_5512_);
lean_dec(v_a_5508_);
v_val_5518_ = lean_ctor_get(v_fst_5512_, 0);
lean_inc(v_val_5518_);
lean_dec_ref_known(v_fst_5512_, 1);
if (v_isShared_5511_ == 0)
{
lean_ctor_set(v___x_5510_, 0, v_val_5518_);
v___x_5520_ = v___x_5510_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5521_; 
v_reuseFailAlloc_5521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5521_, 0, v_val_5518_);
v___x_5520_ = v_reuseFailAlloc_5521_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
return v___x_5520_;
}
}
}
}
else
{
lean_object* v_a_5523_; lean_object* v___x_5525_; uint8_t v_isShared_5526_; uint8_t v_isSharedCheck_5530_; 
v_a_5523_ = lean_ctor_get(v___x_5507_, 0);
v_isSharedCheck_5530_ = !lean_is_exclusive(v___x_5507_);
if (v_isSharedCheck_5530_ == 0)
{
v___x_5525_ = v___x_5507_;
v_isShared_5526_ = v_isSharedCheck_5530_;
goto v_resetjp_5524_;
}
else
{
lean_inc(v_a_5523_);
lean_dec(v___x_5507_);
v___x_5525_ = lean_box(0);
v_isShared_5526_ = v_isSharedCheck_5530_;
goto v_resetjp_5524_;
}
v_resetjp_5524_:
{
lean_object* v___x_5528_; 
if (v_isShared_5526_ == 0)
{
v___x_5528_ = v___x_5525_;
goto v_reusejp_5527_;
}
else
{
lean_object* v_reuseFailAlloc_5529_; 
v_reuseFailAlloc_5529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5529_, 0, v_a_5523_);
v___x_5528_ = v_reuseFailAlloc_5529_;
goto v_reusejp_5527_;
}
v_reusejp_5527_:
{
return v___x_5528_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(lean_object* v_init_5531_, lean_object* v_as_5532_, size_t v_sz_5533_, size_t v_i_5534_, lean_object* v_b_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_){
_start:
{
uint8_t v___x_5546_; 
v___x_5546_ = lean_usize_dec_lt(v_i_5534_, v_sz_5533_);
if (v___x_5546_ == 0)
{
lean_object* v___x_5547_; 
v___x_5547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5547_, 0, v_b_5535_);
return v___x_5547_;
}
else
{
lean_object* v_snd_5548_; lean_object* v___x_5550_; uint8_t v_isShared_5551_; uint8_t v_isSharedCheck_5582_; 
v_snd_5548_ = lean_ctor_get(v_b_5535_, 1);
v_isSharedCheck_5582_ = !lean_is_exclusive(v_b_5535_);
if (v_isSharedCheck_5582_ == 0)
{
lean_object* v_unused_5583_; 
v_unused_5583_ = lean_ctor_get(v_b_5535_, 0);
lean_dec(v_unused_5583_);
v___x_5550_ = v_b_5535_;
v_isShared_5551_ = v_isSharedCheck_5582_;
goto v_resetjp_5549_;
}
else
{
lean_inc(v_snd_5548_);
lean_dec(v_b_5535_);
v___x_5550_ = lean_box(0);
v_isShared_5551_ = v_isSharedCheck_5582_;
goto v_resetjp_5549_;
}
v_resetjp_5549_:
{
lean_object* v___x_5552_; lean_object* v_a_5553_; lean_object* v___x_5554_; 
v___x_5552_ = lean_box(0);
v_a_5553_ = lean_array_uget_borrowed(v_as_5532_, v_i_5534_);
lean_inc(v_snd_5548_);
v___x_5554_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5531_, v_a_5553_, v_snd_5548_, v___y_5536_, v___y_5537_, v___y_5538_, v___y_5539_, v___y_5540_, v___y_5541_, v___y_5542_, v___y_5543_, v___y_5544_);
if (lean_obj_tag(v___x_5554_) == 0)
{
lean_object* v_a_5555_; lean_object* v___x_5557_; uint8_t v_isShared_5558_; uint8_t v_isSharedCheck_5573_; 
v_a_5555_ = lean_ctor_get(v___x_5554_, 0);
v_isSharedCheck_5573_ = !lean_is_exclusive(v___x_5554_);
if (v_isSharedCheck_5573_ == 0)
{
v___x_5557_ = v___x_5554_;
v_isShared_5558_ = v_isSharedCheck_5573_;
goto v_resetjp_5556_;
}
else
{
lean_inc(v_a_5555_);
lean_dec(v___x_5554_);
v___x_5557_ = lean_box(0);
v_isShared_5558_ = v_isSharedCheck_5573_;
goto v_resetjp_5556_;
}
v_resetjp_5556_:
{
if (lean_obj_tag(v_a_5555_) == 0)
{
lean_object* v___x_5559_; lean_object* v___x_5561_; 
v___x_5559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5559_, 0, v_a_5555_);
if (v_isShared_5551_ == 0)
{
lean_ctor_set(v___x_5550_, 0, v___x_5559_);
v___x_5561_ = v___x_5550_;
goto v_reusejp_5560_;
}
else
{
lean_object* v_reuseFailAlloc_5565_; 
v_reuseFailAlloc_5565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5565_, 0, v___x_5559_);
lean_ctor_set(v_reuseFailAlloc_5565_, 1, v_snd_5548_);
v___x_5561_ = v_reuseFailAlloc_5565_;
goto v_reusejp_5560_;
}
v_reusejp_5560_:
{
lean_object* v___x_5563_; 
if (v_isShared_5558_ == 0)
{
lean_ctor_set(v___x_5557_, 0, v___x_5561_);
v___x_5563_ = v___x_5557_;
goto v_reusejp_5562_;
}
else
{
lean_object* v_reuseFailAlloc_5564_; 
v_reuseFailAlloc_5564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5564_, 0, v___x_5561_);
v___x_5563_ = v_reuseFailAlloc_5564_;
goto v_reusejp_5562_;
}
v_reusejp_5562_:
{
return v___x_5563_;
}
}
}
else
{
lean_object* v_a_5566_; lean_object* v___x_5568_; 
lean_del_object(v___x_5557_);
lean_dec(v_snd_5548_);
v_a_5566_ = lean_ctor_get(v_a_5555_, 0);
lean_inc(v_a_5566_);
lean_dec_ref_known(v_a_5555_, 1);
if (v_isShared_5551_ == 0)
{
lean_ctor_set(v___x_5550_, 1, v_a_5566_);
lean_ctor_set(v___x_5550_, 0, v___x_5552_);
v___x_5568_ = v___x_5550_;
goto v_reusejp_5567_;
}
else
{
lean_object* v_reuseFailAlloc_5572_; 
v_reuseFailAlloc_5572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5572_, 0, v___x_5552_);
lean_ctor_set(v_reuseFailAlloc_5572_, 1, v_a_5566_);
v___x_5568_ = v_reuseFailAlloc_5572_;
goto v_reusejp_5567_;
}
v_reusejp_5567_:
{
size_t v___x_5569_; size_t v___x_5570_; 
v___x_5569_ = ((size_t)1ULL);
v___x_5570_ = lean_usize_add(v_i_5534_, v___x_5569_);
v_i_5534_ = v___x_5570_;
v_b_5535_ = v___x_5568_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_5574_; lean_object* v___x_5576_; uint8_t v_isShared_5577_; uint8_t v_isSharedCheck_5581_; 
lean_del_object(v___x_5550_);
lean_dec(v_snd_5548_);
v_a_5574_ = lean_ctor_get(v___x_5554_, 0);
v_isSharedCheck_5581_ = !lean_is_exclusive(v___x_5554_);
if (v_isSharedCheck_5581_ == 0)
{
v___x_5576_ = v___x_5554_;
v_isShared_5577_ = v_isSharedCheck_5581_;
goto v_resetjp_5575_;
}
else
{
lean_inc(v_a_5574_);
lean_dec(v___x_5554_);
v___x_5576_ = lean_box(0);
v_isShared_5577_ = v_isSharedCheck_5581_;
goto v_resetjp_5575_;
}
v_resetjp_5575_:
{
lean_object* v___x_5579_; 
if (v_isShared_5577_ == 0)
{
v___x_5579_ = v___x_5576_;
goto v_reusejp_5578_;
}
else
{
lean_object* v_reuseFailAlloc_5580_; 
v_reuseFailAlloc_5580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5580_, 0, v_a_5574_);
v___x_5579_ = v_reuseFailAlloc_5580_;
goto v_reusejp_5578_;
}
v_reusejp_5578_:
{
return v___x_5579_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1___boxed(lean_object* v_init_5584_, lean_object* v_as_5585_, lean_object* v_sz_5586_, lean_object* v_i_5587_, lean_object* v_b_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_, lean_object* v___y_5592_, lean_object* v___y_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_, lean_object* v___y_5596_, lean_object* v___y_5597_, lean_object* v___y_5598_){
_start:
{
size_t v_sz_boxed_5599_; size_t v_i_boxed_5600_; lean_object* v_res_5601_; 
v_sz_boxed_5599_ = lean_unbox_usize(v_sz_5586_);
lean_dec(v_sz_5586_);
v_i_boxed_5600_ = lean_unbox_usize(v_i_5587_);
lean_dec(v_i_5587_);
v_res_5601_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0_spec__1(v_init_5584_, v_as_5585_, v_sz_boxed_5599_, v_i_boxed_5600_, v_b_5588_, v___y_5589_, v___y_5590_, v___y_5591_, v___y_5592_, v___y_5593_, v___y_5594_, v___y_5595_, v___y_5596_, v___y_5597_);
lean_dec(v___y_5597_);
lean_dec_ref(v___y_5596_);
lean_dec(v___y_5595_);
lean_dec_ref(v___y_5594_);
lean_dec(v___y_5593_);
lean_dec_ref(v___y_5592_);
lean_dec(v___y_5591_);
lean_dec_ref(v___y_5590_);
lean_dec(v___y_5589_);
lean_dec_ref(v_as_5585_);
lean_dec_ref(v_init_5584_);
return v_res_5601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0___boxed(lean_object* v_init_5602_, lean_object* v_n_5603_, lean_object* v_b_5604_, lean_object* v___y_5605_, lean_object* v___y_5606_, lean_object* v___y_5607_, lean_object* v___y_5608_, lean_object* v___y_5609_, lean_object* v___y_5610_, lean_object* v___y_5611_, lean_object* v___y_5612_, lean_object* v___y_5613_, lean_object* v___y_5614_){
_start:
{
lean_object* v_res_5615_; 
v_res_5615_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5602_, v_n_5603_, v_b_5604_, v___y_5605_, v___y_5606_, v___y_5607_, v___y_5608_, v___y_5609_, v___y_5610_, v___y_5611_, v___y_5612_, v___y_5613_);
lean_dec(v___y_5613_);
lean_dec_ref(v___y_5612_);
lean_dec(v___y_5611_);
lean_dec_ref(v___y_5610_);
lean_dec(v___y_5609_);
lean_dec_ref(v___y_5608_);
lean_dec(v___y_5607_);
lean_dec_ref(v___y_5606_);
lean_dec(v___y_5605_);
lean_dec_ref(v_n_5603_);
lean_dec_ref(v_init_5602_);
return v_res_5615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(lean_object* v_t_5616_, lean_object* v_init_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_, lean_object* v___y_5621_, lean_object* v___y_5622_, lean_object* v___y_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_, lean_object* v___y_5626_){
_start:
{
lean_object* v_root_5628_; lean_object* v_tail_5629_; lean_object* v___x_5630_; 
v_root_5628_ = lean_ctor_get(v_t_5616_, 0);
v_tail_5629_ = lean_ctor_get(v_t_5616_, 1);
lean_inc_ref(v_init_5617_);
v___x_5630_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__0(v_init_5617_, v_root_5628_, v_init_5617_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_, v___y_5622_, v___y_5623_, v___y_5624_, v___y_5625_, v___y_5626_);
lean_dec_ref(v_init_5617_);
if (lean_obj_tag(v___x_5630_) == 0)
{
lean_object* v_a_5631_; lean_object* v___x_5633_; uint8_t v_isShared_5634_; uint8_t v_isSharedCheck_5667_; 
v_a_5631_ = lean_ctor_get(v___x_5630_, 0);
v_isSharedCheck_5667_ = !lean_is_exclusive(v___x_5630_);
if (v_isSharedCheck_5667_ == 0)
{
v___x_5633_ = v___x_5630_;
v_isShared_5634_ = v_isSharedCheck_5667_;
goto v_resetjp_5632_;
}
else
{
lean_inc(v_a_5631_);
lean_dec(v___x_5630_);
v___x_5633_ = lean_box(0);
v_isShared_5634_ = v_isSharedCheck_5667_;
goto v_resetjp_5632_;
}
v_resetjp_5632_:
{
if (lean_obj_tag(v_a_5631_) == 0)
{
lean_object* v_a_5635_; lean_object* v___x_5637_; 
v_a_5635_ = lean_ctor_get(v_a_5631_, 0);
lean_inc(v_a_5635_);
lean_dec_ref_known(v_a_5631_, 1);
if (v_isShared_5634_ == 0)
{
lean_ctor_set(v___x_5633_, 0, v_a_5635_);
v___x_5637_ = v___x_5633_;
goto v_reusejp_5636_;
}
else
{
lean_object* v_reuseFailAlloc_5638_; 
v_reuseFailAlloc_5638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5638_, 0, v_a_5635_);
v___x_5637_ = v_reuseFailAlloc_5638_;
goto v_reusejp_5636_;
}
v_reusejp_5636_:
{
return v___x_5637_;
}
}
else
{
lean_object* v_a_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; size_t v_sz_5642_; size_t v___x_5643_; lean_object* v___x_5644_; 
lean_del_object(v___x_5633_);
v_a_5639_ = lean_ctor_get(v_a_5631_, 0);
lean_inc(v_a_5639_);
lean_dec_ref_known(v_a_5631_, 1);
v___x_5640_ = lean_box(0);
v___x_5641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5641_, 0, v___x_5640_);
lean_ctor_set(v___x_5641_, 1, v_a_5639_);
v_sz_5642_ = lean_array_size(v_tail_5629_);
v___x_5643_ = ((size_t)0ULL);
v___x_5644_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0_spec__1(v_tail_5629_, v_sz_5642_, v___x_5643_, v___x_5641_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_, v___y_5622_, v___y_5623_, v___y_5624_, v___y_5625_, v___y_5626_);
if (lean_obj_tag(v___x_5644_) == 0)
{
lean_object* v_a_5645_; lean_object* v___x_5647_; uint8_t v_isShared_5648_; uint8_t v_isSharedCheck_5658_; 
v_a_5645_ = lean_ctor_get(v___x_5644_, 0);
v_isSharedCheck_5658_ = !lean_is_exclusive(v___x_5644_);
if (v_isSharedCheck_5658_ == 0)
{
v___x_5647_ = v___x_5644_;
v_isShared_5648_ = v_isSharedCheck_5658_;
goto v_resetjp_5646_;
}
else
{
lean_inc(v_a_5645_);
lean_dec(v___x_5644_);
v___x_5647_ = lean_box(0);
v_isShared_5648_ = v_isSharedCheck_5658_;
goto v_resetjp_5646_;
}
v_resetjp_5646_:
{
lean_object* v_fst_5649_; 
v_fst_5649_ = lean_ctor_get(v_a_5645_, 0);
if (lean_obj_tag(v_fst_5649_) == 0)
{
lean_object* v_snd_5650_; lean_object* v___x_5652_; 
v_snd_5650_ = lean_ctor_get(v_a_5645_, 1);
lean_inc(v_snd_5650_);
lean_dec(v_a_5645_);
if (v_isShared_5648_ == 0)
{
lean_ctor_set(v___x_5647_, 0, v_snd_5650_);
v___x_5652_ = v___x_5647_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5653_; 
v_reuseFailAlloc_5653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5653_, 0, v_snd_5650_);
v___x_5652_ = v_reuseFailAlloc_5653_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
return v___x_5652_;
}
}
else
{
lean_object* v_val_5654_; lean_object* v___x_5656_; 
lean_inc_ref(v_fst_5649_);
lean_dec(v_a_5645_);
v_val_5654_ = lean_ctor_get(v_fst_5649_, 0);
lean_inc(v_val_5654_);
lean_dec_ref_known(v_fst_5649_, 1);
if (v_isShared_5648_ == 0)
{
lean_ctor_set(v___x_5647_, 0, v_val_5654_);
v___x_5656_ = v___x_5647_;
goto v_reusejp_5655_;
}
else
{
lean_object* v_reuseFailAlloc_5657_; 
v_reuseFailAlloc_5657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5657_, 0, v_val_5654_);
v___x_5656_ = v_reuseFailAlloc_5657_;
goto v_reusejp_5655_;
}
v_reusejp_5655_:
{
return v___x_5656_;
}
}
}
}
else
{
lean_object* v_a_5659_; lean_object* v___x_5661_; uint8_t v_isShared_5662_; uint8_t v_isSharedCheck_5666_; 
v_a_5659_ = lean_ctor_get(v___x_5644_, 0);
v_isSharedCheck_5666_ = !lean_is_exclusive(v___x_5644_);
if (v_isSharedCheck_5666_ == 0)
{
v___x_5661_ = v___x_5644_;
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
else
{
lean_inc(v_a_5659_);
lean_dec(v___x_5644_);
v___x_5661_ = lean_box(0);
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
v_resetjp_5660_:
{
lean_object* v___x_5664_; 
if (v_isShared_5662_ == 0)
{
v___x_5664_ = v___x_5661_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v_a_5659_);
v___x_5664_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
return v___x_5664_;
}
}
}
}
}
}
else
{
lean_object* v_a_5668_; lean_object* v___x_5670_; uint8_t v_isShared_5671_; uint8_t v_isSharedCheck_5675_; 
v_a_5668_ = lean_ctor_get(v___x_5630_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5630_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5670_ = v___x_5630_;
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
else
{
lean_inc(v_a_5668_);
lean_dec(v___x_5630_);
v___x_5670_ = lean_box(0);
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
v_resetjp_5669_:
{
lean_object* v___x_5673_; 
if (v_isShared_5671_ == 0)
{
v___x_5673_ = v___x_5670_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v_a_5668_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0___boxed(lean_object* v_t_5676_, lean_object* v_init_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_, lean_object* v___y_5682_, lean_object* v___y_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_){
_start:
{
lean_object* v_res_5688_; 
v_res_5688_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(v_t_5676_, v_init_5677_, v___y_5678_, v___y_5679_, v___y_5680_, v___y_5681_, v___y_5682_, v___y_5683_, v___y_5684_, v___y_5685_, v___y_5686_);
lean_dec(v___y_5686_);
lean_dec_ref(v___y_5685_);
lean_dec(v___y_5684_);
lean_dec_ref(v___y_5683_);
lean_dec(v___y_5682_);
lean_dec_ref(v___y_5681_);
lean_dec(v___y_5680_);
lean_dec_ref(v___y_5679_);
lean_dec(v___y_5678_);
lean_dec_ref(v_t_5676_);
return v_res_5688_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0(void){
_start:
{
lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; 
v___x_5689_ = lean_unsigned_to_nat(32u);
v___x_5690_ = lean_mk_empty_array_with_capacity(v___x_5689_);
v___x_5691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5691_, 0, v___x_5690_);
return v___x_5691_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1(void){
_start:
{
size_t v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; lean_object* v_result_5697_; 
v___x_5692_ = ((size_t)5ULL);
v___x_5693_ = lean_unsigned_to_nat(0u);
v___x_5694_ = lean_unsigned_to_nat(32u);
v___x_5695_ = lean_mk_empty_array_with_capacity(v___x_5694_);
v___x_5696_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__0);
v_result_5697_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_result_5697_, 0, v___x_5696_);
lean_ctor_set(v_result_5697_, 1, v___x_5695_);
lean_ctor_set(v_result_5697_, 2, v___x_5693_);
lean_ctor_set(v_result_5697_, 3, v___x_5693_);
lean_ctor_set_usize(v_result_5697_, 4, v___x_5692_);
return v_result_5697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(lean_object* v_thms_5698_, lean_object* v_a_5699_, lean_object* v_a_5700_, lean_object* v_a_5701_, lean_object* v_a_5702_, lean_object* v_a_5703_, lean_object* v_a_5704_, lean_object* v_a_5705_, lean_object* v_a_5706_, lean_object* v_a_5707_){
_start:
{
lean_object* v_result_5709_; lean_object* v___x_5710_; 
v_result_5709_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1, &l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___closed__1);
v___x_5710_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms_spec__0(v_thms_5698_, v_result_5709_, v_a_5699_, v_a_5700_, v_a_5701_, v_a_5702_, v_a_5703_, v_a_5704_, v_a_5705_, v_a_5706_, v_a_5707_);
return v___x_5710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms___boxed(lean_object* v_thms_5711_, lean_object* v_a_5712_, lean_object* v_a_5713_, lean_object* v_a_5714_, lean_object* v_a_5715_, lean_object* v_a_5716_, lean_object* v_a_5717_, lean_object* v_a_5718_, lean_object* v_a_5719_, lean_object* v_a_5720_, lean_object* v_a_5721_){
_start:
{
lean_object* v_res_5722_; 
v_res_5722_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_thms_5711_, v_a_5712_, v_a_5713_, v_a_5714_, v_a_5715_, v_a_5716_, v_a_5717_, v_a_5718_, v_a_5719_, v_a_5720_);
lean_dec(v_a_5720_);
lean_dec_ref(v_a_5719_);
lean_dec(v_a_5718_);
lean_dec_ref(v_a_5717_);
lean_dec(v_a_5716_);
lean_dec_ref(v_a_5715_);
lean_dec(v_a_5714_);
lean_dec_ref(v_a_5713_);
lean_dec(v_a_5712_);
lean_dec_ref(v_thms_5711_);
return v_res_5722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__1(lean_object* v___x_5723_, uint8_t v___x_5724_, lean_object* v_keepIdentParam_5725_, lean_object* v_x_5726_, lean_object* v_mod_x3f_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_){
_start:
{
lean_object* v___x_5735_; lean_object* v_id_5736_; lean_object* v___x_5737_; uint8_t v___x_5738_; 
v___x_5735_ = lean_unsigned_to_nat(2u);
v_id_5736_ = l_Lean_Syntax_getArg(v___x_5723_, v___x_5735_);
v___x_5737_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v_id_5736_);
v___x_5738_ = l_Lean_Syntax_isOfKind(v_id_5736_, v___x_5737_);
if (v___x_5738_ == 0)
{
lean_object* v___x_5739_; lean_object* v___x_5740_; 
lean_dec(v_id_5736_);
lean_dec(v_mod_x3f_5727_);
lean_dec_ref(v_keepIdentParam_5725_);
v___x_5739_ = lean_box(v___x_5724_);
v___x_5740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5740_, 0, v___x_5739_);
return v___x_5740_;
}
else
{
lean_object* v___x_5741_; 
lean_inc(v___y_5733_);
lean_inc_ref(v___y_5732_);
lean_inc(v___y_5731_);
lean_inc_ref(v___y_5730_);
lean_inc(v___y_5729_);
lean_inc_ref(v___y_5728_);
v___x_5741_ = lean_apply_9(v_keepIdentParam_5725_, v_mod_x3f_5727_, v_id_5736_, v___y_5728_, v___y_5729_, v___y_5730_, v___y_5731_, v___y_5732_, v___y_5733_, lean_box(0));
return v___x_5741_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__1___boxed(lean_object* v___x_5742_, lean_object* v___x_5743_, lean_object* v_keepIdentParam_5744_, lean_object* v_x_5745_, lean_object* v_mod_x3f_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_, lean_object* v___y_5752_, lean_object* v___y_5753_){
_start:
{
uint8_t v___x_6759__boxed_5754_; lean_object* v_res_5755_; 
v___x_6759__boxed_5754_ = lean_unbox(v___x_5743_);
v_res_5755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__1(v___x_5742_, v___x_6759__boxed_5754_, v_keepIdentParam_5744_, v_x_5745_, v_mod_x3f_5746_, v___y_5747_, v___y_5748_, v___y_5749_, v___y_5750_, v___y_5751_, v___y_5752_);
lean_dec(v___y_5752_);
lean_dec_ref(v___y_5751_);
lean_dec(v___y_5750_);
lean_dec_ref(v___y_5749_);
lean_dec(v___y_5748_);
lean_dec_ref(v___y_5747_);
lean_dec(v___x_5742_);
return v_res_5755_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5756_; lean_object* v___x_5757_; 
v___x_5756_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier_spec__0_spec__0___closed__0);
v___x_5757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5757_, 0, v___x_5756_);
return v___x_5757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0(uint8_t v___x_5758_, uint8_t v___x_5759_, lean_object* v_mod_x3f_5760_, lean_object* v_id_5761_, lean_object* v___y_5762_, lean_object* v___y_5763_, lean_object* v___y_5764_, lean_object* v___y_5765_, lean_object* v___y_5766_, lean_object* v___y_5767_){
_start:
{
lean_object* v___y_5770_; lean_object* v___y_5771_; lean_object* v___y_5772_; lean_object* v___y_5773_; lean_object* v___x_5826_; lean_object* v___x_5827_; 
v___x_5826_ = l_Lean_TSyntax_getId(v_id_5761_);
v___x_5827_ = l_Lean_resolveLocalName___at___00__private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_processParam_spec__5(v___x_5826_, v___y_5762_, v___y_5763_, v___y_5764_, v___y_5765_, v___y_5766_, v___y_5767_);
if (lean_obj_tag(v___x_5827_) == 0)
{
lean_object* v_a_5828_; lean_object* v___x_5830_; uint8_t v_isShared_5831_; uint8_t v_isSharedCheck_5838_; 
v_a_5828_ = lean_ctor_get(v___x_5827_, 0);
v_isSharedCheck_5838_ = !lean_is_exclusive(v___x_5827_);
if (v_isSharedCheck_5838_ == 0)
{
v___x_5830_ = v___x_5827_;
v_isShared_5831_ = v_isSharedCheck_5838_;
goto v_resetjp_5829_;
}
else
{
lean_inc(v_a_5828_);
lean_dec(v___x_5827_);
v___x_5830_ = lean_box(0);
v_isShared_5831_ = v_isSharedCheck_5838_;
goto v_resetjp_5829_;
}
v_resetjp_5829_:
{
if (lean_obj_tag(v_a_5828_) == 1)
{
lean_object* v_val_5832_; lean_object* v_snd_5833_; 
v_val_5832_ = lean_ctor_get(v_a_5828_, 0);
lean_inc(v_val_5832_);
lean_dec_ref_known(v_a_5828_, 1);
v_snd_5833_ = lean_ctor_get(v_val_5832_, 1);
lean_inc(v_snd_5833_);
lean_dec(v_val_5832_);
if (lean_obj_tag(v_snd_5833_) == 1)
{
lean_object* v___x_5834_; lean_object* v___x_5836_; 
lean_dec_ref_known(v_snd_5833_, 2);
lean_dec(v_id_5761_);
lean_dec(v_mod_x3f_5760_);
v___x_5834_ = lean_box(v___x_5759_);
if (v_isShared_5831_ == 0)
{
lean_ctor_set(v___x_5830_, 0, v___x_5834_);
v___x_5836_ = v___x_5830_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5837_; 
v_reuseFailAlloc_5837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5837_, 0, v___x_5834_);
v___x_5836_ = v_reuseFailAlloc_5837_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
return v___x_5836_;
}
}
else
{
lean_dec(v_snd_5833_);
lean_del_object(v___x_5830_);
goto v___jp_5798_;
}
}
else
{
lean_del_object(v___x_5830_);
lean_dec(v_a_5828_);
goto v___jp_5798_;
}
}
}
else
{
lean_object* v_a_5839_; lean_object* v___x_5841_; uint8_t v_isShared_5842_; uint8_t v_isSharedCheck_5846_; 
lean_dec(v_id_5761_);
lean_dec(v_mod_x3f_5760_);
v_a_5839_ = lean_ctor_get(v___x_5827_, 0);
v_isSharedCheck_5846_ = !lean_is_exclusive(v___x_5827_);
if (v_isSharedCheck_5846_ == 0)
{
v___x_5841_ = v___x_5827_;
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
else
{
lean_inc(v_a_5839_);
lean_dec(v___x_5827_);
v___x_5841_ = lean_box(0);
v_isShared_5842_ = v_isSharedCheck_5846_;
goto v_resetjp_5840_;
}
v_resetjp_5840_:
{
lean_object* v___x_5844_; 
if (v_isShared_5842_ == 0)
{
v___x_5844_ = v___x_5841_;
goto v_reusejp_5843_;
}
else
{
lean_object* v_reuseFailAlloc_5845_; 
v_reuseFailAlloc_5845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5845_, 0, v_a_5839_);
v___x_5844_ = v_reuseFailAlloc_5845_;
goto v_reusejp_5843_;
}
v_reusejp_5843_:
{
return v___x_5844_;
}
}
}
v___jp_5769_:
{
lean_object* v___x_5774_; 
v___x_5774_ = l_Lean_realizeGlobalConstNoOverload(v_id_5761_, v___y_5772_, v___y_5773_);
if (lean_obj_tag(v___x_5774_) == 0)
{
lean_object* v_a_5775_; lean_object* v___x_5776_; 
v_a_5775_ = lean_ctor_get(v___x_5774_, 0);
lean_inc_n(v_a_5775_, 2);
lean_dec_ref_known(v___x_5774_, 1);
v___x_5776_ = l_Lean_Meta_Grind_isCasesAttrCandidate(v_a_5775_, v___x_5758_, v___y_5772_, v___y_5773_);
if (lean_obj_tag(v___x_5776_) == 0)
{
lean_object* v_a_5777_; uint8_t v___x_5778_; 
v_a_5777_ = lean_ctor_get(v___x_5776_, 0);
v___x_5778_ = lean_unbox(v_a_5777_);
if (v___x_5778_ == 0)
{
lean_object* v___x_5779_; lean_object* v___x_5780_; 
lean_dec_ref_known(v___x_5776_, 1);
v___x_5779_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___closed__0);
v___x_5780_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_isFactDecl(v_a_5775_, v___x_5779_, v___y_5770_, v___y_5771_, v___y_5772_, v___y_5773_);
return v___x_5780_;
}
else
{
lean_dec(v_a_5775_);
return v___x_5776_;
}
}
else
{
lean_dec(v_a_5775_);
return v___x_5776_;
}
}
else
{
lean_object* v_a_5781_; lean_object* v___x_5783_; uint8_t v_isShared_5784_; uint8_t v_isSharedCheck_5797_; 
v_a_5781_ = lean_ctor_get(v___x_5774_, 0);
v_isSharedCheck_5797_ = !lean_is_exclusive(v___x_5774_);
if (v_isSharedCheck_5797_ == 0)
{
v___x_5783_ = v___x_5774_;
v_isShared_5784_ = v_isSharedCheck_5797_;
goto v_resetjp_5782_;
}
else
{
lean_inc(v_a_5781_);
lean_dec(v___x_5774_);
v___x_5783_ = lean_box(0);
v_isShared_5784_ = v_isSharedCheck_5797_;
goto v_resetjp_5782_;
}
v_resetjp_5782_:
{
uint8_t v___x_5785_; 
v___x_5785_ = l_Lean_Exception_isInterrupt(v_a_5781_);
if (v___x_5785_ == 0)
{
uint8_t v___x_5786_; 
lean_inc(v_a_5781_);
v___x_5786_ = l_Lean_Exception_isRuntime(v_a_5781_);
if (v___x_5786_ == 0)
{
lean_object* v___x_5787_; lean_object* v___x_5789_; 
lean_dec(v_a_5781_);
v___x_5787_ = lean_box(v___x_5786_);
if (v_isShared_5784_ == 0)
{
lean_ctor_set_tag(v___x_5783_, 0);
lean_ctor_set(v___x_5783_, 0, v___x_5787_);
v___x_5789_ = v___x_5783_;
goto v_reusejp_5788_;
}
else
{
lean_object* v_reuseFailAlloc_5790_; 
v_reuseFailAlloc_5790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5790_, 0, v___x_5787_);
v___x_5789_ = v_reuseFailAlloc_5790_;
goto v_reusejp_5788_;
}
v_reusejp_5788_:
{
return v___x_5789_;
}
}
else
{
lean_object* v___x_5792_; 
if (v_isShared_5784_ == 0)
{
v___x_5792_ = v___x_5783_;
goto v_reusejp_5791_;
}
else
{
lean_object* v_reuseFailAlloc_5793_; 
v_reuseFailAlloc_5793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5793_, 0, v_a_5781_);
v___x_5792_ = v_reuseFailAlloc_5793_;
goto v_reusejp_5791_;
}
v_reusejp_5791_:
{
return v___x_5792_;
}
}
}
else
{
lean_object* v___x_5795_; 
if (v_isShared_5784_ == 0)
{
v___x_5795_ = v___x_5783_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5796_; 
v_reuseFailAlloc_5796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5796_, 0, v_a_5781_);
v___x_5795_ = v_reuseFailAlloc_5796_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
return v___x_5795_;
}
}
}
}
}
v___jp_5798_:
{
if (lean_obj_tag(v_mod_x3f_5760_) == 1)
{
lean_object* v_val_5799_; lean_object* v___x_5800_; 
v_val_5799_ = lean_ctor_get(v_mod_x3f_5760_, 0);
lean_inc(v_val_5799_);
lean_dec_ref_known(v_mod_x3f_5760_, 1);
v___x_5800_ = l_Lean_Meta_Grind_getAttrKindCore(v_val_5799_, v___y_5766_, v___y_5767_);
if (lean_obj_tag(v___x_5800_) == 0)
{
lean_object* v_a_5801_; lean_object* v___x_5803_; uint8_t v_isShared_5804_; uint8_t v_isSharedCheck_5817_; 
v_a_5801_ = lean_ctor_get(v___x_5800_, 0);
v_isSharedCheck_5817_ = !lean_is_exclusive(v___x_5800_);
if (v_isSharedCheck_5817_ == 0)
{
v___x_5803_ = v___x_5800_;
v_isShared_5804_ = v_isSharedCheck_5817_;
goto v_resetjp_5802_;
}
else
{
lean_inc(v_a_5801_);
lean_dec(v___x_5800_);
v___x_5803_ = lean_box(0);
v_isShared_5804_ = v_isSharedCheck_5817_;
goto v_resetjp_5802_;
}
v_resetjp_5802_:
{
switch(lean_obj_tag(v_a_5801_))
{
case 0:
{
lean_object* v___x_5805_; lean_object* v___x_5807_; 
lean_dec_ref_known(v_a_5801_, 1);
lean_dec(v_id_5761_);
v___x_5805_ = lean_box(v___x_5758_);
if (v_isShared_5804_ == 0)
{
lean_ctor_set(v___x_5803_, 0, v___x_5805_);
v___x_5807_ = v___x_5803_;
goto v_reusejp_5806_;
}
else
{
lean_object* v_reuseFailAlloc_5808_; 
v_reuseFailAlloc_5808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5808_, 0, v___x_5805_);
v___x_5807_ = v_reuseFailAlloc_5808_;
goto v_reusejp_5806_;
}
v_reusejp_5806_:
{
return v___x_5807_;
}
}
case 2:
{
lean_object* v___x_5809_; lean_object* v___x_5811_; 
lean_dec(v_id_5761_);
v___x_5809_ = lean_box(v___x_5758_);
if (v_isShared_5804_ == 0)
{
lean_ctor_set(v___x_5803_, 0, v___x_5809_);
v___x_5811_ = v___x_5803_;
goto v_reusejp_5810_;
}
else
{
lean_object* v_reuseFailAlloc_5812_; 
v_reuseFailAlloc_5812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5812_, 0, v___x_5809_);
v___x_5811_ = v_reuseFailAlloc_5812_;
goto v_reusejp_5810_;
}
v_reusejp_5810_:
{
return v___x_5811_;
}
}
case 3:
{
lean_del_object(v___x_5803_);
v___y_5770_ = v___y_5764_;
v___y_5771_ = v___y_5765_;
v___y_5772_ = v___y_5766_;
v___y_5773_ = v___y_5767_;
goto v___jp_5769_;
}
default: 
{
lean_object* v___x_5813_; lean_object* v___x_5815_; 
lean_dec(v_a_5801_);
lean_dec(v_id_5761_);
v___x_5813_ = lean_box(v___x_5759_);
if (v_isShared_5804_ == 0)
{
lean_ctor_set(v___x_5803_, 0, v___x_5813_);
v___x_5815_ = v___x_5803_;
goto v_reusejp_5814_;
}
else
{
lean_object* v_reuseFailAlloc_5816_; 
v_reuseFailAlloc_5816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5816_, 0, v___x_5813_);
v___x_5815_ = v_reuseFailAlloc_5816_;
goto v_reusejp_5814_;
}
v_reusejp_5814_:
{
return v___x_5815_;
}
}
}
}
}
else
{
lean_object* v_a_5818_; lean_object* v___x_5820_; uint8_t v_isShared_5821_; uint8_t v_isSharedCheck_5825_; 
lean_dec(v_id_5761_);
v_a_5818_ = lean_ctor_get(v___x_5800_, 0);
v_isSharedCheck_5825_ = !lean_is_exclusive(v___x_5800_);
if (v_isSharedCheck_5825_ == 0)
{
v___x_5820_ = v___x_5800_;
v_isShared_5821_ = v_isSharedCheck_5825_;
goto v_resetjp_5819_;
}
else
{
lean_inc(v_a_5818_);
lean_dec(v___x_5800_);
v___x_5820_ = lean_box(0);
v_isShared_5821_ = v_isSharedCheck_5825_;
goto v_resetjp_5819_;
}
v_resetjp_5819_:
{
lean_object* v___x_5823_; 
if (v_isShared_5821_ == 0)
{
v___x_5823_ = v___x_5820_;
goto v_reusejp_5822_;
}
else
{
lean_object* v_reuseFailAlloc_5824_; 
v_reuseFailAlloc_5824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5824_, 0, v_a_5818_);
v___x_5823_ = v_reuseFailAlloc_5824_;
goto v_reusejp_5822_;
}
v_reusejp_5822_:
{
return v___x_5823_;
}
}
}
}
else
{
lean_dec(v_mod_x3f_5760_);
v___y_5770_ = v___y_5764_;
v___y_5771_ = v___y_5765_;
v___y_5772_ = v___y_5766_;
v___y_5773_ = v___y_5767_;
goto v___jp_5769_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___boxed(lean_object* v___x_5847_, lean_object* v___x_5848_, lean_object* v_mod_x3f_5849_, lean_object* v_id_5850_, lean_object* v___y_5851_, lean_object* v___y_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_, lean_object* v___y_5855_, lean_object* v___y_5856_, lean_object* v___y_5857_){
_start:
{
uint8_t v___x_6806__boxed_5858_; uint8_t v___x_6807__boxed_5859_; lean_object* v_res_5860_; 
v___x_6806__boxed_5858_ = lean_unbox(v___x_5847_);
v___x_6807__boxed_5859_ = lean_unbox(v___x_5848_);
v_res_5860_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0(v___x_6806__boxed_5858_, v___x_6807__boxed_5859_, v_mod_x3f_5849_, v_id_5850_, v___y_5851_, v___y_5852_, v___y_5853_, v___y_5854_, v___y_5855_, v___y_5856_);
lean_dec(v___y_5856_);
lean_dec_ref(v___y_5855_);
lean_dec(v___y_5854_);
lean_dec_ref(v___y_5853_);
lean_dec(v___y_5852_);
lean_dec_ref(v___y_5851_);
return v_res_5860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__2(lean_object* v___x_5861_, uint8_t v___x_5862_, lean_object* v_keepIdentParam_5863_, lean_object* v_x_5864_, lean_object* v_mod_x3f_5865_, lean_object* v___y_5866_, lean_object* v___y_5867_, lean_object* v___y_5868_, lean_object* v___y_5869_, lean_object* v___y_5870_, lean_object* v___y_5871_){
_start:
{
lean_object* v___x_5873_; lean_object* v_id_5874_; lean_object* v___x_5875_; uint8_t v___x_5876_; 
v___x_5873_ = lean_unsigned_to_nat(1u);
v_id_5874_ = l_Lean_Syntax_getArg(v___x_5861_, v___x_5873_);
v___x_5875_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
lean_inc(v_id_5874_);
v___x_5876_ = l_Lean_Syntax_isOfKind(v_id_5874_, v___x_5875_);
if (v___x_5876_ == 0)
{
lean_object* v___x_5877_; lean_object* v___x_5878_; 
lean_dec(v_id_5874_);
lean_dec(v_mod_x3f_5865_);
lean_dec_ref(v_keepIdentParam_5863_);
v___x_5877_ = lean_box(v___x_5862_);
v___x_5878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5878_, 0, v___x_5877_);
return v___x_5878_;
}
else
{
lean_object* v___x_5879_; 
lean_inc(v___y_5871_);
lean_inc_ref(v___y_5870_);
lean_inc(v___y_5869_);
lean_inc_ref(v___y_5868_);
lean_inc(v___y_5867_);
lean_inc_ref(v___y_5866_);
v___x_5879_ = lean_apply_9(v_keepIdentParam_5863_, v_mod_x3f_5865_, v_id_5874_, v___y_5866_, v___y_5867_, v___y_5868_, v___y_5869_, v___y_5870_, v___y_5871_, lean_box(0));
return v___x_5879_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__2___boxed(lean_object* v___x_5880_, lean_object* v___x_5881_, lean_object* v_keepIdentParam_5882_, lean_object* v_x_5883_, lean_object* v_mod_x3f_5884_, lean_object* v___y_5885_, lean_object* v___y_5886_, lean_object* v___y_5887_, lean_object* v___y_5888_, lean_object* v___y_5889_, lean_object* v___y_5890_, lean_object* v___y_5891_){
_start:
{
uint8_t v___x_6999__boxed_5892_; lean_object* v_res_5893_; 
v___x_6999__boxed_5892_ = lean_unbox(v___x_5881_);
v_res_5893_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__2(v___x_5880_, v___x_6999__boxed_5892_, v_keepIdentParam_5882_, v_x_5883_, v_mod_x3f_5884_, v___y_5885_, v___y_5886_, v___y_5887_, v___y_5888_, v___y_5889_, v___y_5890_);
lean_dec(v___y_5890_);
lean_dec_ref(v___y_5889_);
lean_dec(v___y_5888_);
lean_dec_ref(v___y_5887_);
lean_dec(v___y_5886_);
lean_dec_ref(v___y_5885_);
lean_dec(v___x_5880_);
return v_res_5893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0(lean_object* v_as_5894_, size_t v_i_5895_, size_t v_stop_5896_, lean_object* v_b_5897_, lean_object* v___y_5898_, lean_object* v___y_5899_, lean_object* v___y_5900_, lean_object* v___y_5901_, lean_object* v___y_5902_, lean_object* v___y_5903_){
_start:
{
lean_object* v_a_5906_; uint8_t v___x_5910_; 
v___x_5910_ = lean_usize_dec_eq(v_i_5895_, v_stop_5896_);
if (v___x_5910_ == 0)
{
lean_object* v___x_5911_; lean_object* v___y_5915_; lean_object* v___x_5926_; uint8_t v___x_5927_; 
v___x_5911_ = lean_array_uget_borrowed(v_as_5894_, v_i_5895_);
v___x_5926_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__1));
lean_inc(v___x_5911_);
v___x_5927_ = l_Lean_Syntax_isOfKind(v___x_5911_, v___x_5926_);
if (v___x_5927_ == 0)
{
goto v___jp_5912_;
}
else
{
lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v_keepIdentParam_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; uint8_t v___x_5934_; 
v___x_5928_ = lean_box(v___x_5910_);
v___x_5929_ = lean_box(v___x_5927_);
v_keepIdentParam_5930_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__0___boxed), 11, 2);
lean_closure_set(v_keepIdentParam_5930_, 0, v___x_5928_);
lean_closure_set(v_keepIdentParam_5930_, 1, v___x_5929_);
v___x_5931_ = lean_unsigned_to_nat(0u);
v___x_5932_ = l_Lean_Syntax_getArg(v___x_5911_, v___x_5931_);
v___x_5933_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__7));
lean_inc(v___x_5932_);
v___x_5934_ = l_Lean_Syntax_isOfKind(v___x_5932_, v___x_5933_);
if (v___x_5934_ == 0)
{
lean_object* v___x_5935_; uint8_t v___x_5936_; 
v___x_5935_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__9));
lean_inc(v___x_5932_);
v___x_5936_ = l_Lean_Syntax_isOfKind(v___x_5932_, v___x_5935_);
if (v___x_5936_ == 0)
{
lean_object* v___x_5937_; uint8_t v___x_5938_; 
lean_dec_ref(v_keepIdentParam_5930_);
v___x_5937_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__5));
lean_inc(v___x_5932_);
v___x_5938_ = l_Lean_Syntax_isOfKind(v___x_5932_, v___x_5937_);
if (v___x_5938_ == 0)
{
lean_object* v___x_5939_; uint8_t v___x_5940_; 
v___x_5939_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__11));
lean_inc(v___x_5932_);
v___x_5940_ = l_Lean_Syntax_isOfKind(v___x_5932_, v___x_5939_);
if (v___x_5940_ == 0)
{
lean_dec(v___x_5932_);
goto v___jp_5912_;
}
else
{
lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; uint8_t v___x_5944_; 
v___x_5941_ = lean_unsigned_to_nat(1u);
v___x_5942_ = l_Lean_Syntax_getArg(v___x_5932_, v___x_5941_);
lean_dec(v___x_5932_);
v___x_5943_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___closed__13));
v___x_5944_ = l_Lean_Syntax_isOfKind(v___x_5942_, v___x_5943_);
if (v___x_5944_ == 0)
{
goto v___jp_5912_;
}
else
{
v_a_5906_ = v_b_5897_;
goto v___jp_5905_;
}
}
}
else
{
lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; uint8_t v___x_5948_; 
v___x_5945_ = lean_unsigned_to_nat(1u);
v___x_5946_ = l_Lean_Syntax_getArg(v___x_5932_, v___x_5945_);
lean_dec(v___x_5932_);
v___x_5947_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_elabGrindParams_spec__0___lam__2___closed__1));
v___x_5948_ = l_Lean_Syntax_isOfKind(v___x_5946_, v___x_5947_);
if (v___x_5948_ == 0)
{
goto v___jp_5912_;
}
else
{
v_a_5906_ = v_b_5897_;
goto v___jp_5905_;
}
}
}
else
{
lean_object* v___x_5949_; lean_object* v___x_5950_; uint8_t v___x_5951_; 
v___x_5949_ = lean_unsigned_to_nat(1u);
v___x_5950_ = l_Lean_Syntax_getArg(v___x_5932_, v___x_5949_);
v___x_5951_ = l_Lean_Syntax_isNone(v___x_5950_);
if (v___x_5951_ == 0)
{
uint8_t v___x_5952_; 
lean_inc(v___x_5950_);
v___x_5952_ = l_Lean_Syntax_matchesNull(v___x_5950_, v___x_5949_);
if (v___x_5952_ == 0)
{
lean_dec(v___x_5950_);
lean_dec(v___x_5932_);
lean_dec_ref(v_keepIdentParam_5930_);
goto v___jp_5912_;
}
else
{
lean_object* v_mod_x3f_5953_; lean_object* v___x_5954_; uint8_t v___x_5955_; 
v_mod_x3f_5953_ = l_Lean_Syntax_getArg(v___x_5950_, v___x_5931_);
lean_dec(v___x_5950_);
v___x_5954_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
lean_inc(v_mod_x3f_5953_);
v___x_5955_ = l_Lean_Syntax_isOfKind(v_mod_x3f_5953_, v___x_5954_);
if (v___x_5955_ == 0)
{
lean_dec(v_mod_x3f_5953_);
lean_dec(v___x_5932_);
lean_dec_ref(v_keepIdentParam_5930_);
goto v___jp_5912_;
}
else
{
lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; 
v___x_5956_ = lean_box(0);
v___x_5957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5957_, 0, v_mod_x3f_5953_);
v___x_5958_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__1(v___x_5932_, v___x_5927_, v_keepIdentParam_5930_, v___x_5956_, v___x_5957_, v___y_5898_, v___y_5899_, v___y_5900_, v___y_5901_, v___y_5902_, v___y_5903_);
lean_dec(v___x_5932_);
v___y_5915_ = v___x_5958_;
goto v___jp_5914_;
}
}
}
else
{
lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; 
lean_dec(v___x_5950_);
v___x_5959_ = lean_box(0);
v___x_5960_ = lean_box(0);
v___x_5961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__1(v___x_5932_, v___x_5927_, v_keepIdentParam_5930_, v___x_5959_, v___x_5960_, v___y_5898_, v___y_5899_, v___y_5900_, v___y_5901_, v___y_5902_, v___y_5903_);
lean_dec(v___x_5932_);
v___y_5915_ = v___x_5961_;
goto v___jp_5914_;
}
}
}
else
{
lean_object* v___x_5962_; uint8_t v___x_5963_; 
v___x_5962_ = l_Lean_Syntax_getArg(v___x_5932_, v___x_5931_);
v___x_5963_ = l_Lean_Syntax_isNone(v___x_5962_);
if (v___x_5963_ == 0)
{
lean_object* v___x_5964_; uint8_t v___x_5965_; 
v___x_5964_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_5962_);
v___x_5965_ = l_Lean_Syntax_matchesNull(v___x_5962_, v___x_5964_);
if (v___x_5965_ == 0)
{
lean_dec(v___x_5962_);
lean_dec(v___x_5932_);
lean_dec_ref(v_keepIdentParam_5930_);
goto v___jp_5912_;
}
else
{
lean_object* v_mod_x3f_5966_; lean_object* v___x_5967_; uint8_t v___x_5968_; 
v_mod_x3f_5966_ = l_Lean_Syntax_getArg(v___x_5962_, v___x_5931_);
lean_dec(v___x_5962_);
v___x_5967_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_parseModifier___closed__4));
lean_inc(v_mod_x3f_5966_);
v___x_5968_ = l_Lean_Syntax_isOfKind(v_mod_x3f_5966_, v___x_5967_);
if (v___x_5968_ == 0)
{
lean_dec(v_mod_x3f_5966_);
lean_dec(v___x_5932_);
lean_dec_ref(v_keepIdentParam_5930_);
goto v___jp_5912_;
}
else
{
lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; 
v___x_5969_ = lean_box(0);
v___x_5970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5970_, 0, v_mod_x3f_5966_);
v___x_5971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__2(v___x_5932_, v___x_5927_, v_keepIdentParam_5930_, v___x_5969_, v___x_5970_, v___y_5898_, v___y_5899_, v___y_5900_, v___y_5901_, v___y_5902_, v___y_5903_);
lean_dec(v___x_5932_);
v___y_5915_ = v___x_5971_;
goto v___jp_5914_;
}
}
}
else
{
lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; 
lean_dec(v___x_5962_);
v___x_5972_ = lean_box(0);
v___x_5973_ = lean_box(0);
v___x_5974_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___lam__2(v___x_5932_, v___x_5927_, v_keepIdentParam_5930_, v___x_5972_, v___x_5973_, v___y_5898_, v___y_5899_, v___y_5900_, v___y_5901_, v___y_5902_, v___y_5903_);
lean_dec(v___x_5932_);
v___y_5915_ = v___x_5974_;
goto v___jp_5914_;
}
}
}
v___jp_5912_:
{
lean_object* v___x_5913_; 
lean_inc(v___x_5911_);
v___x_5913_ = lean_array_push(v_b_5897_, v___x_5911_);
v_a_5906_ = v___x_5913_;
goto v___jp_5905_;
}
v___jp_5914_:
{
if (lean_obj_tag(v___y_5915_) == 0)
{
lean_object* v_a_5916_; uint8_t v___x_5917_; 
v_a_5916_ = lean_ctor_get(v___y_5915_, 0);
lean_inc(v_a_5916_);
lean_dec_ref_known(v___y_5915_, 1);
v___x_5917_ = lean_unbox(v_a_5916_);
lean_dec(v_a_5916_);
if (v___x_5917_ == 0)
{
v_a_5906_ = v_b_5897_;
goto v___jp_5905_;
}
else
{
goto v___jp_5912_;
}
}
else
{
lean_object* v_a_5918_; lean_object* v___x_5920_; uint8_t v_isShared_5921_; uint8_t v_isSharedCheck_5925_; 
lean_dec_ref(v_b_5897_);
v_a_5918_ = lean_ctor_get(v___y_5915_, 0);
v_isSharedCheck_5925_ = !lean_is_exclusive(v___y_5915_);
if (v_isSharedCheck_5925_ == 0)
{
v___x_5920_ = v___y_5915_;
v_isShared_5921_ = v_isSharedCheck_5925_;
goto v_resetjp_5919_;
}
else
{
lean_inc(v_a_5918_);
lean_dec(v___y_5915_);
v___x_5920_ = lean_box(0);
v_isShared_5921_ = v_isSharedCheck_5925_;
goto v_resetjp_5919_;
}
v_resetjp_5919_:
{
lean_object* v___x_5923_; 
if (v_isShared_5921_ == 0)
{
v___x_5923_ = v___x_5920_;
goto v_reusejp_5922_;
}
else
{
lean_object* v_reuseFailAlloc_5924_; 
v_reuseFailAlloc_5924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5924_, 0, v_a_5918_);
v___x_5923_ = v_reuseFailAlloc_5924_;
goto v_reusejp_5922_;
}
v_reusejp_5922_:
{
return v___x_5923_;
}
}
}
}
}
else
{
lean_object* v___x_5975_; 
v___x_5975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5975_, 0, v_b_5897_);
return v___x_5975_;
}
v___jp_5905_:
{
size_t v___x_5907_; size_t v___x_5908_; 
v___x_5907_ = ((size_t)1ULL);
v___x_5908_ = lean_usize_add(v_i_5895_, v___x_5907_);
v_i_5895_ = v___x_5908_;
v_b_5897_ = v_a_5906_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0___boxed(lean_object* v_as_5976_, lean_object* v_i_5977_, lean_object* v_stop_5978_, lean_object* v_b_5979_, lean_object* v___y_5980_, lean_object* v___y_5981_, lean_object* v___y_5982_, lean_object* v___y_5983_, lean_object* v___y_5984_, lean_object* v___y_5985_, lean_object* v___y_5986_){
_start:
{
size_t v_i_boxed_5987_; size_t v_stop_boxed_5988_; lean_object* v_res_5989_; 
v_i_boxed_5987_ = lean_unbox_usize(v_i_5977_);
lean_dec(v_i_5977_);
v_stop_boxed_5988_ = lean_unbox_usize(v_stop_5978_);
lean_dec(v_stop_5978_);
v_res_5989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0(v_as_5976_, v_i_boxed_5987_, v_stop_boxed_5988_, v_b_5979_, v___y_5980_, v___y_5981_, v___y_5982_, v___y_5983_, v___y_5984_, v___y_5985_);
lean_dec(v___y_5985_);
lean_dec_ref(v___y_5984_);
lean_dec(v___y_5983_);
lean_dec_ref(v___y_5982_);
lean_dec(v___y_5981_);
lean_dec_ref(v___y_5980_);
lean_dec_ref(v_as_5976_);
return v_res_5989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getPreservedParams(lean_object* v_params_5992_, lean_object* v_a_5993_, lean_object* v_a_5994_, lean_object* v_a_5995_, lean_object* v_a_5996_, lean_object* v_a_5997_, lean_object* v_a_5998_){
_start:
{
lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; uint8_t v___x_6003_; 
v___x_6000_ = lean_unsigned_to_nat(0u);
v___x_6001_ = lean_array_get_size(v_params_5992_);
v___x_6002_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_getPreservedParams___closed__0));
v___x_6003_ = lean_nat_dec_lt(v___x_6000_, v___x_6001_);
if (v___x_6003_ == 0)
{
lean_object* v___x_6004_; 
v___x_6004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6004_, 0, v___x_6002_);
return v___x_6004_;
}
else
{
size_t v___x_6005_; size_t v___x_6006_; lean_object* v___x_6007_; 
v___x_6005_ = ((size_t)0ULL);
v___x_6006_ = lean_usize_of_nat(v___x_6001_);
v___x_6007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Grind_getPreservedParams_spec__0(v_params_5992_, v___x_6005_, v___x_6006_, v___x_6002_, v_a_5993_, v_a_5994_, v_a_5995_, v_a_5996_, v_a_5997_, v_a_5998_);
return v___x_6007_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getPreservedParams___boxed(lean_object* v_params_6008_, lean_object* v_a_6009_, lean_object* v_a_6010_, lean_object* v_a_6011_, lean_object* v_a_6012_, lean_object* v_a_6013_, lean_object* v_a_6014_, lean_object* v_a_6015_){
_start:
{
lean_object* v_res_6016_; 
v_res_6016_ = l_Lean_Elab_Tactic_Grind_getPreservedParams(v_params_6008_, v_a_6009_, v_a_6010_, v_a_6011_, v_a_6012_, v_a_6013_, v_a_6014_);
lean_dec(v_a_6014_);
lean_dec_ref(v_a_6013_);
lean_dec(v_a_6012_);
lean_dec_ref(v_a_6011_);
lean_dec(v_a_6010_);
lean_dec_ref(v_a_6009_);
lean_dec_ref(v_params_6008_);
return v_res_6016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(lean_object* v_thms_6019_, lean_object* v_newThms_6020_, lean_object* v_gmt_6021_, lean_object* v_numInstances_6022_, lean_object* v_numDelayedInstances_6023_, lean_object* v_num_6024_, lean_object* v_preInstances_6025_, lean_object* v_nextThmIdx_6026_, lean_object* v_matchEqNames_6027_, lean_object* v_delayedThmInsts_6028_, lean_object* v_nextDeclIdx_6029_, lean_object* v_enodeMap_6030_, lean_object* v_exprs_6031_, lean_object* v_parents_6032_, lean_object* v_congrTable_6033_, lean_object* v_appMap_6034_, lean_object* v_indicesFound_6035_, lean_object* v_toProcess_6036_, lean_object* v_internalizing_6037_, uint8_t v_inconsistent_6038_, lean_object* v_nextIdx_6039_, lean_object* v_newRawFacts_6040_, lean_object* v_facts_6041_, lean_object* v_extThms_6042_, lean_object* v_inj_6043_, lean_object* v_split_6044_, lean_object* v_clean_6045_, lean_object* v_sstates_6046_, lean_object* v_mvarId_6047_, lean_object* v___y_6048_, lean_object* v___y_6049_, lean_object* v___y_6050_, lean_object* v___y_6051_, lean_object* v___y_6052_, lean_object* v___y_6053_, lean_object* v___y_6054_, lean_object* v___y_6055_, lean_object* v___y_6056_){
_start:
{
lean_object* v___x_6058_; 
v___x_6058_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_thms_6019_, v___y_6048_, v___y_6049_, v___y_6050_, v___y_6051_, v___y_6052_, v___y_6053_, v___y_6054_, v___y_6055_, v___y_6056_);
if (lean_obj_tag(v___x_6058_) == 0)
{
lean_object* v_a_6059_; lean_object* v___x_6060_; 
v_a_6059_ = lean_ctor_get(v___x_6058_, 0);
lean_inc(v_a_6059_);
lean_dec_ref_known(v___x_6058_, 1);
v___x_6060_ = l___private_Lean_Elab_Tactic_Grind_Param_0__Lean_Elab_Tactic_Grind_filterThms(v_newThms_6020_, v___y_6048_, v___y_6049_, v___y_6050_, v___y_6051_, v___y_6052_, v___y_6053_, v___y_6054_, v___y_6055_, v___y_6056_);
if (lean_obj_tag(v___x_6060_) == 0)
{
lean_object* v_a_6061_; lean_object* v___x_6063_; uint8_t v_isShared_6064_; uint8_t v_isSharedCheck_6072_; 
v_a_6061_ = lean_ctor_get(v___x_6060_, 0);
v_isSharedCheck_6072_ = !lean_is_exclusive(v___x_6060_);
if (v_isSharedCheck_6072_ == 0)
{
v___x_6063_ = v___x_6060_;
v_isShared_6064_ = v_isSharedCheck_6072_;
goto v_resetjp_6062_;
}
else
{
lean_inc(v_a_6061_);
lean_dec(v___x_6060_);
v___x_6063_ = lean_box(0);
v_isShared_6064_ = v_isSharedCheck_6072_;
goto v_resetjp_6062_;
}
v_resetjp_6062_:
{
lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6070_; 
v___x_6065_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___closed__0));
v___x_6066_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6066_, 0, v___x_6065_);
lean_ctor_set(v___x_6066_, 1, v_gmt_6021_);
lean_ctor_set(v___x_6066_, 2, v_a_6059_);
lean_ctor_set(v___x_6066_, 3, v_a_6061_);
lean_ctor_set(v___x_6066_, 4, v_numInstances_6022_);
lean_ctor_set(v___x_6066_, 5, v_numDelayedInstances_6023_);
lean_ctor_set(v___x_6066_, 6, v_num_6024_);
lean_ctor_set(v___x_6066_, 7, v_preInstances_6025_);
lean_ctor_set(v___x_6066_, 8, v_nextThmIdx_6026_);
lean_ctor_set(v___x_6066_, 9, v_matchEqNames_6027_);
lean_ctor_set(v___x_6066_, 10, v_delayedThmInsts_6028_);
v___x_6067_ = lean_alloc_ctor(0, 18, 1);
lean_ctor_set(v___x_6067_, 0, v_nextDeclIdx_6029_);
lean_ctor_set(v___x_6067_, 1, v_enodeMap_6030_);
lean_ctor_set(v___x_6067_, 2, v_exprs_6031_);
lean_ctor_set(v___x_6067_, 3, v_parents_6032_);
lean_ctor_set(v___x_6067_, 4, v_congrTable_6033_);
lean_ctor_set(v___x_6067_, 5, v_appMap_6034_);
lean_ctor_set(v___x_6067_, 6, v_indicesFound_6035_);
lean_ctor_set(v___x_6067_, 7, v_toProcess_6036_);
lean_ctor_set(v___x_6067_, 8, v_internalizing_6037_);
lean_ctor_set(v___x_6067_, 9, v_nextIdx_6039_);
lean_ctor_set(v___x_6067_, 10, v_newRawFacts_6040_);
lean_ctor_set(v___x_6067_, 11, v_facts_6041_);
lean_ctor_set(v___x_6067_, 12, v_extThms_6042_);
lean_ctor_set(v___x_6067_, 13, v___x_6066_);
lean_ctor_set(v___x_6067_, 14, v_inj_6043_);
lean_ctor_set(v___x_6067_, 15, v_split_6044_);
lean_ctor_set(v___x_6067_, 16, v_clean_6045_);
lean_ctor_set(v___x_6067_, 17, v_sstates_6046_);
lean_ctor_set_uint8(v___x_6067_, sizeof(void*)*18, v_inconsistent_6038_);
v___x_6068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6068_, 0, v___x_6067_);
lean_ctor_set(v___x_6068_, 1, v_mvarId_6047_);
if (v_isShared_6064_ == 0)
{
lean_ctor_set(v___x_6063_, 0, v___x_6068_);
v___x_6070_ = v___x_6063_;
goto v_reusejp_6069_;
}
else
{
lean_object* v_reuseFailAlloc_6071_; 
v_reuseFailAlloc_6071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6071_, 0, v___x_6068_);
v___x_6070_ = v_reuseFailAlloc_6071_;
goto v_reusejp_6069_;
}
v_reusejp_6069_:
{
return v___x_6070_;
}
}
}
else
{
lean_object* v_a_6073_; lean_object* v___x_6075_; uint8_t v_isShared_6076_; uint8_t v_isSharedCheck_6080_; 
lean_dec(v_a_6059_);
lean_dec(v_mvarId_6047_);
lean_dec_ref(v_sstates_6046_);
lean_dec_ref(v_clean_6045_);
lean_dec_ref(v_split_6044_);
lean_dec_ref(v_inj_6043_);
lean_dec_ref(v_extThms_6042_);
lean_dec_ref(v_facts_6041_);
lean_dec_ref(v_newRawFacts_6040_);
lean_dec(v_nextIdx_6039_);
lean_dec_ref(v_internalizing_6037_);
lean_dec_ref(v_toProcess_6036_);
lean_dec_ref(v_indicesFound_6035_);
lean_dec_ref(v_appMap_6034_);
lean_dec_ref(v_congrTable_6033_);
lean_dec_ref(v_parents_6032_);
lean_dec_ref(v_exprs_6031_);
lean_dec_ref(v_enodeMap_6030_);
lean_dec(v_nextDeclIdx_6029_);
lean_dec_ref(v_delayedThmInsts_6028_);
lean_dec_ref(v_matchEqNames_6027_);
lean_dec(v_nextThmIdx_6026_);
lean_dec_ref(v_preInstances_6025_);
lean_dec(v_num_6024_);
lean_dec(v_numDelayedInstances_6023_);
lean_dec(v_numInstances_6022_);
lean_dec(v_gmt_6021_);
v_a_6073_ = lean_ctor_get(v___x_6060_, 0);
v_isSharedCheck_6080_ = !lean_is_exclusive(v___x_6060_);
if (v_isSharedCheck_6080_ == 0)
{
v___x_6075_ = v___x_6060_;
v_isShared_6076_ = v_isSharedCheck_6080_;
goto v_resetjp_6074_;
}
else
{
lean_inc(v_a_6073_);
lean_dec(v___x_6060_);
v___x_6075_ = lean_box(0);
v_isShared_6076_ = v_isSharedCheck_6080_;
goto v_resetjp_6074_;
}
v_resetjp_6074_:
{
lean_object* v___x_6078_; 
if (v_isShared_6076_ == 0)
{
v___x_6078_ = v___x_6075_;
goto v_reusejp_6077_;
}
else
{
lean_object* v_reuseFailAlloc_6079_; 
v_reuseFailAlloc_6079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6079_, 0, v_a_6073_);
v___x_6078_ = v_reuseFailAlloc_6079_;
goto v_reusejp_6077_;
}
v_reusejp_6077_:
{
return v___x_6078_;
}
}
}
}
else
{
lean_object* v_a_6081_; lean_object* v___x_6083_; uint8_t v_isShared_6084_; uint8_t v_isSharedCheck_6088_; 
lean_dec(v_mvarId_6047_);
lean_dec_ref(v_sstates_6046_);
lean_dec_ref(v_clean_6045_);
lean_dec_ref(v_split_6044_);
lean_dec_ref(v_inj_6043_);
lean_dec_ref(v_extThms_6042_);
lean_dec_ref(v_facts_6041_);
lean_dec_ref(v_newRawFacts_6040_);
lean_dec(v_nextIdx_6039_);
lean_dec_ref(v_internalizing_6037_);
lean_dec_ref(v_toProcess_6036_);
lean_dec_ref(v_indicesFound_6035_);
lean_dec_ref(v_appMap_6034_);
lean_dec_ref(v_congrTable_6033_);
lean_dec_ref(v_parents_6032_);
lean_dec_ref(v_exprs_6031_);
lean_dec_ref(v_enodeMap_6030_);
lean_dec(v_nextDeclIdx_6029_);
lean_dec_ref(v_delayedThmInsts_6028_);
lean_dec_ref(v_matchEqNames_6027_);
lean_dec(v_nextThmIdx_6026_);
lean_dec_ref(v_preInstances_6025_);
lean_dec(v_num_6024_);
lean_dec(v_numDelayedInstances_6023_);
lean_dec(v_numInstances_6022_);
lean_dec(v_gmt_6021_);
v_a_6081_ = lean_ctor_get(v___x_6058_, 0);
v_isSharedCheck_6088_ = !lean_is_exclusive(v___x_6058_);
if (v_isSharedCheck_6088_ == 0)
{
v___x_6083_ = v___x_6058_;
v_isShared_6084_ = v_isSharedCheck_6088_;
goto v_resetjp_6082_;
}
else
{
lean_inc(v_a_6081_);
lean_dec(v___x_6058_);
v___x_6083_ = lean_box(0);
v_isShared_6084_ = v_isSharedCheck_6088_;
goto v_resetjp_6082_;
}
v_resetjp_6082_:
{
lean_object* v___x_6086_; 
if (v_isShared_6084_ == 0)
{
v___x_6086_ = v___x_6083_;
goto v_reusejp_6085_;
}
else
{
lean_object* v_reuseFailAlloc_6087_; 
v_reuseFailAlloc_6087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6087_, 0, v_a_6081_);
v___x_6086_ = v_reuseFailAlloc_6087_;
goto v_reusejp_6085_;
}
v_reusejp_6085_:
{
return v___x_6086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_thms_6089_ = _args[0];
lean_object* v_newThms_6090_ = _args[1];
lean_object* v_gmt_6091_ = _args[2];
lean_object* v_numInstances_6092_ = _args[3];
lean_object* v_numDelayedInstances_6093_ = _args[4];
lean_object* v_num_6094_ = _args[5];
lean_object* v_preInstances_6095_ = _args[6];
lean_object* v_nextThmIdx_6096_ = _args[7];
lean_object* v_matchEqNames_6097_ = _args[8];
lean_object* v_delayedThmInsts_6098_ = _args[9];
lean_object* v_nextDeclIdx_6099_ = _args[10];
lean_object* v_enodeMap_6100_ = _args[11];
lean_object* v_exprs_6101_ = _args[12];
lean_object* v_parents_6102_ = _args[13];
lean_object* v_congrTable_6103_ = _args[14];
lean_object* v_appMap_6104_ = _args[15];
lean_object* v_indicesFound_6105_ = _args[16];
lean_object* v_toProcess_6106_ = _args[17];
lean_object* v_internalizing_6107_ = _args[18];
lean_object* v_inconsistent_6108_ = _args[19];
lean_object* v_nextIdx_6109_ = _args[20];
lean_object* v_newRawFacts_6110_ = _args[21];
lean_object* v_facts_6111_ = _args[22];
lean_object* v_extThms_6112_ = _args[23];
lean_object* v_inj_6113_ = _args[24];
lean_object* v_split_6114_ = _args[25];
lean_object* v_clean_6115_ = _args[26];
lean_object* v_sstates_6116_ = _args[27];
lean_object* v_mvarId_6117_ = _args[28];
lean_object* v___y_6118_ = _args[29];
lean_object* v___y_6119_ = _args[30];
lean_object* v___y_6120_ = _args[31];
lean_object* v___y_6121_ = _args[32];
lean_object* v___y_6122_ = _args[33];
lean_object* v___y_6123_ = _args[34];
lean_object* v___y_6124_ = _args[35];
lean_object* v___y_6125_ = _args[36];
lean_object* v___y_6126_ = _args[37];
lean_object* v___y_6127_ = _args[38];
_start:
{
uint8_t v_inconsistent_boxed_6128_; lean_object* v_res_6129_; 
v_inconsistent_boxed_6128_ = lean_unbox(v_inconsistent_6108_);
v_res_6129_ = l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0(v_thms_6089_, v_newThms_6090_, v_gmt_6091_, v_numInstances_6092_, v_numDelayedInstances_6093_, v_num_6094_, v_preInstances_6095_, v_nextThmIdx_6096_, v_matchEqNames_6097_, v_delayedThmInsts_6098_, v_nextDeclIdx_6099_, v_enodeMap_6100_, v_exprs_6101_, v_parents_6102_, v_congrTable_6103_, v_appMap_6104_, v_indicesFound_6105_, v_toProcess_6106_, v_internalizing_6107_, v_inconsistent_boxed_6128_, v_nextIdx_6109_, v_newRawFacts_6110_, v_facts_6111_, v_extThms_6112_, v_inj_6113_, v_split_6114_, v_clean_6115_, v_sstates_6116_, v_mvarId_6117_, v___y_6118_, v___y_6119_, v___y_6120_, v___y_6121_, v___y_6122_, v___y_6123_, v___y_6124_, v___y_6125_, v___y_6126_);
lean_dec(v___y_6126_);
lean_dec_ref(v___y_6125_);
lean_dec(v___y_6124_);
lean_dec_ref(v___y_6123_);
lean_dec(v___y_6122_);
lean_dec_ref(v___y_6121_);
lean_dec(v___y_6120_);
lean_dec_ref(v___y_6119_);
lean_dec(v___y_6118_);
lean_dec_ref(v_newThms_6090_);
lean_dec_ref(v_thms_6089_);
return v_res_6129_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0(void){
_start:
{
lean_object* v___x_6130_; 
v___x_6130_ = l_Lean_Meta_Grind_Theorems_mkEmpty___redArg();
return v___x_6130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(size_t v_sz_6131_, size_t v_i_6132_, lean_object* v_bs_6133_){
_start:
{
uint8_t v___x_6134_; 
v___x_6134_ = lean_usize_dec_lt(v_i_6132_, v_sz_6131_);
if (v___x_6134_ == 0)
{
return v_bs_6133_;
}
else
{
lean_object* v_v_6135_; lean_object* v_casesTypes_6136_; lean_object* v_extThms_6137_; lean_object* v_funCC_6138_; lean_object* v_inj_6139_; lean_object* v___x_6141_; uint8_t v_isShared_6142_; uint8_t v_isSharedCheck_6153_; 
v_v_6135_ = lean_array_uget(v_bs_6133_, v_i_6132_);
v_casesTypes_6136_ = lean_ctor_get(v_v_6135_, 0);
v_extThms_6137_ = lean_ctor_get(v_v_6135_, 1);
v_funCC_6138_ = lean_ctor_get(v_v_6135_, 2);
v_inj_6139_ = lean_ctor_get(v_v_6135_, 4);
v_isSharedCheck_6153_ = !lean_is_exclusive(v_v_6135_);
if (v_isSharedCheck_6153_ == 0)
{
lean_object* v_unused_6154_; 
v_unused_6154_ = lean_ctor_get(v_v_6135_, 3);
lean_dec(v_unused_6154_);
v___x_6141_ = v_v_6135_;
v_isShared_6142_ = v_isSharedCheck_6153_;
goto v_resetjp_6140_;
}
else
{
lean_inc(v_inj_6139_);
lean_inc(v_funCC_6138_);
lean_inc(v_extThms_6137_);
lean_inc(v_casesTypes_6136_);
lean_dec(v_v_6135_);
v___x_6141_ = lean_box(0);
v_isShared_6142_ = v_isSharedCheck_6153_;
goto v_resetjp_6140_;
}
v_resetjp_6140_:
{
lean_object* v___x_6143_; lean_object* v_bs_x27_6144_; lean_object* v___x_6145_; lean_object* v___x_6147_; 
v___x_6143_ = lean_unsigned_to_nat(0u);
v_bs_x27_6144_ = lean_array_uset(v_bs_6133_, v_i_6132_, v___x_6143_);
v___x_6145_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___closed__0);
if (v_isShared_6142_ == 0)
{
lean_ctor_set(v___x_6141_, 3, v___x_6145_);
v___x_6147_ = v___x_6141_;
goto v_reusejp_6146_;
}
else
{
lean_object* v_reuseFailAlloc_6152_; 
v_reuseFailAlloc_6152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6152_, 0, v_casesTypes_6136_);
lean_ctor_set(v_reuseFailAlloc_6152_, 1, v_extThms_6137_);
lean_ctor_set(v_reuseFailAlloc_6152_, 2, v_funCC_6138_);
lean_ctor_set(v_reuseFailAlloc_6152_, 3, v___x_6145_);
lean_ctor_set(v_reuseFailAlloc_6152_, 4, v_inj_6139_);
v___x_6147_ = v_reuseFailAlloc_6152_;
goto v_reusejp_6146_;
}
v_reusejp_6146_:
{
size_t v___x_6148_; size_t v___x_6149_; lean_object* v___x_6150_; 
v___x_6148_ = ((size_t)1ULL);
v___x_6149_ = lean_usize_add(v_i_6132_, v___x_6148_);
v___x_6150_ = lean_array_uset(v_bs_x27_6144_, v_i_6132_, v___x_6147_);
v_i_6132_ = v___x_6149_;
v_bs_6133_ = v___x_6150_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0___boxed(lean_object* v_sz_6155_, lean_object* v_i_6156_, lean_object* v_bs_6157_){
_start:
{
size_t v_sz_boxed_6158_; size_t v_i_boxed_6159_; lean_object* v_res_6160_; 
v_sz_boxed_6158_ = lean_unbox_usize(v_sz_6155_);
lean_dec(v_sz_6155_);
v_i_boxed_6159_ = lean_unbox_usize(v_i_6156_);
lean_dec(v_i_6156_);
v_res_6160_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(v_sz_boxed_6158_, v_i_boxed_6159_, v_bs_6157_);
return v_res_6160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg(lean_object* v_params_6161_, lean_object* v_ps_6162_, uint8_t v_only_6163_, lean_object* v_k_6164_, lean_object* v_a_6165_, lean_object* v_a_6166_, lean_object* v_a_6167_, lean_object* v_a_6168_, lean_object* v_a_6169_, lean_object* v_a_6170_, lean_object* v_a_6171_, lean_object* v_a_6172_){
_start:
{
lean_object* v___y_6175_; lean_object* v___y_6176_; lean_object* v___y_6177_; lean_object* v___y_6178_; lean_object* v___y_6179_; lean_object* v___y_6180_; lean_object* v___y_6181_; lean_object* v___y_6182_; lean_object* v___y_6183_; uint8_t v___y_6196_; uint8_t v___y_6197_; lean_object* v_params_6198_; lean_object* v___y_6199_; lean_object* v___y_6200_; lean_object* v___y_6201_; lean_object* v___y_6202_; lean_object* v___y_6203_; lean_object* v___y_6204_; lean_object* v___y_6205_; lean_object* v___y_6206_; uint8_t v___y_6310_; 
if (v_only_6163_ == 0)
{
lean_object* v___x_6332_; lean_object* v___x_6333_; uint8_t v___x_6334_; 
v___x_6332_ = lean_array_get_size(v_ps_6162_);
v___x_6333_ = lean_unsigned_to_nat(0u);
v___x_6334_ = lean_nat_dec_eq(v___x_6332_, v___x_6333_);
if (v___x_6334_ == 0)
{
v___y_6310_ = v___x_6334_;
goto v___jp_6309_;
}
else
{
lean_object* v___x_6335_; 
lean_dec_ref(v_params_6161_);
lean_inc(v_a_6172_);
lean_inc_ref(v_a_6171_);
lean_inc(v_a_6170_);
lean_inc_ref(v_a_6169_);
lean_inc(v_a_6168_);
lean_inc_ref(v_a_6167_);
lean_inc(v_a_6166_);
lean_inc_ref(v_a_6165_);
v___x_6335_ = lean_apply_9(v_k_6164_, v_a_6165_, v_a_6166_, v_a_6167_, v_a_6168_, v_a_6169_, v_a_6170_, v_a_6171_, v_a_6172_, lean_box(0));
return v___x_6335_;
}
}
else
{
uint8_t v___x_6336_; 
v___x_6336_ = 0;
v___y_6310_ = v___x_6336_;
goto v___jp_6309_;
}
v___jp_6174_:
{
lean_object* v___x_6184_; lean_object* v___x_6185_; 
v___x_6184_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_assertExtra___boxed), 12, 1);
lean_closure_set(v___x_6184_, 0, v___y_6175_);
v___x_6185_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___x_6184_, v___y_6176_, v___y_6177_, v___y_6180_, v___y_6181_, v___y_6182_, v___y_6183_);
if (lean_obj_tag(v___x_6185_) == 0)
{
lean_object* v___x_6186_; 
lean_dec_ref_known(v___x_6185_, 1);
lean_inc(v___y_6183_);
lean_inc_ref(v___y_6182_);
lean_inc(v___y_6181_);
lean_inc_ref(v___y_6180_);
lean_inc(v___y_6179_);
lean_inc_ref(v___y_6178_);
lean_inc(v___y_6177_);
v___x_6186_ = lean_apply_9(v_k_6164_, v___y_6176_, v___y_6177_, v___y_6178_, v___y_6179_, v___y_6180_, v___y_6181_, v___y_6182_, v___y_6183_, lean_box(0));
return v___x_6186_;
}
else
{
lean_object* v_a_6187_; lean_object* v___x_6189_; uint8_t v_isShared_6190_; uint8_t v_isSharedCheck_6194_; 
lean_dec_ref(v___y_6176_);
lean_dec_ref(v_k_6164_);
v_a_6187_ = lean_ctor_get(v___x_6185_, 0);
v_isSharedCheck_6194_ = !lean_is_exclusive(v___x_6185_);
if (v_isSharedCheck_6194_ == 0)
{
v___x_6189_ = v___x_6185_;
v_isShared_6190_ = v_isSharedCheck_6194_;
goto v_resetjp_6188_;
}
else
{
lean_inc(v_a_6187_);
lean_dec(v___x_6185_);
v___x_6189_ = lean_box(0);
v_isShared_6190_ = v_isSharedCheck_6194_;
goto v_resetjp_6188_;
}
v_resetjp_6188_:
{
lean_object* v___x_6192_; 
if (v_isShared_6190_ == 0)
{
v___x_6192_ = v___x_6189_;
goto v_reusejp_6191_;
}
else
{
lean_object* v_reuseFailAlloc_6193_; 
v_reuseFailAlloc_6193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6193_, 0, v_a_6187_);
v___x_6192_ = v_reuseFailAlloc_6193_;
goto v_reusejp_6191_;
}
v_reusejp_6191_:
{
return v___x_6192_;
}
}
}
}
v___jp_6195_:
{
lean_object* v___x_6207_; 
v___x_6207_ = l_Lean_Elab_Tactic_elabGrindParams(v_params_6198_, v_ps_6162_, v_only_6163_, v___y_6196_, v___y_6197_, v___y_6201_, v___y_6202_, v___y_6203_, v___y_6204_, v___y_6205_, v___y_6206_);
if (lean_obj_tag(v___x_6207_) == 0)
{
lean_object* v_a_6208_; lean_object* v_ctx_6209_; lean_object* v_anchorRefs_x3f_6210_; lean_object* v_toContext_6211_; lean_object* v_sctx_6212_; lean_object* v_methods_6213_; uint8_t v_sym_6214_; lean_object* v_simp_6215_; lean_object* v_simpMethods_6216_; lean_object* v_symSimpMethods_6217_; lean_object* v_symDSimpMethods_6218_; lean_object* v_config_6219_; uint8_t v_cheapCases_6220_; uint8_t v_reportMVarIssue_6221_; lean_object* v_splitSource_6222_; lean_object* v_ematchDiagSource_6223_; lean_object* v_symPrios_6224_; lean_object* v_extensions_6225_; uint8_t v_debug_6226_; uint8_t v_ematchDiag_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; 
v_a_6208_ = lean_ctor_get(v___x_6207_, 0);
lean_inc_n(v_a_6208_, 2);
lean_dec_ref_known(v___x_6207_, 1);
v_ctx_6209_ = lean_ctor_get(v___y_6199_, 1);
v_anchorRefs_x3f_6210_ = lean_ctor_get(v_a_6208_, 8);
v_toContext_6211_ = lean_ctor_get(v___y_6199_, 0);
v_sctx_6212_ = lean_ctor_get(v___y_6199_, 2);
v_methods_6213_ = lean_ctor_get(v___y_6199_, 3);
v_sym_6214_ = lean_ctor_get_uint8(v___y_6199_, sizeof(void*)*5);
v_simp_6215_ = lean_ctor_get(v_ctx_6209_, 0);
v_simpMethods_6216_ = lean_ctor_get(v_ctx_6209_, 1);
v_symSimpMethods_6217_ = lean_ctor_get(v_ctx_6209_, 2);
v_symDSimpMethods_6218_ = lean_ctor_get(v_ctx_6209_, 3);
v_config_6219_ = lean_ctor_get(v_ctx_6209_, 4);
v_cheapCases_6220_ = lean_ctor_get_uint8(v_ctx_6209_, sizeof(void*)*10);
v_reportMVarIssue_6221_ = lean_ctor_get_uint8(v_ctx_6209_, sizeof(void*)*10 + 1);
v_splitSource_6222_ = lean_ctor_get(v_ctx_6209_, 6);
v_ematchDiagSource_6223_ = lean_ctor_get(v_ctx_6209_, 7);
v_symPrios_6224_ = lean_ctor_get(v_ctx_6209_, 8);
v_extensions_6225_ = lean_ctor_get(v_ctx_6209_, 9);
v_debug_6226_ = lean_ctor_get_uint8(v_ctx_6209_, sizeof(void*)*10 + 2);
v_ematchDiag_6227_ = lean_ctor_get_uint8(v_ctx_6209_, sizeof(void*)*10 + 3);
lean_inc_ref(v_extensions_6225_);
lean_inc_ref(v_symPrios_6224_);
lean_inc(v_ematchDiagSource_6223_);
lean_inc(v_splitSource_6222_);
lean_inc(v_anchorRefs_x3f_6210_);
lean_inc_ref(v_config_6219_);
lean_inc_ref(v_symDSimpMethods_6218_);
lean_inc_ref(v_symSimpMethods_6217_);
lean_inc_ref(v_simpMethods_6216_);
lean_inc_ref(v_simp_6215_);
v___x_6228_ = lean_alloc_ctor(0, 10, 4);
lean_ctor_set(v___x_6228_, 0, v_simp_6215_);
lean_ctor_set(v___x_6228_, 1, v_simpMethods_6216_);
lean_ctor_set(v___x_6228_, 2, v_symSimpMethods_6217_);
lean_ctor_set(v___x_6228_, 3, v_symDSimpMethods_6218_);
lean_ctor_set(v___x_6228_, 4, v_config_6219_);
lean_ctor_set(v___x_6228_, 5, v_anchorRefs_x3f_6210_);
lean_ctor_set(v___x_6228_, 6, v_splitSource_6222_);
lean_ctor_set(v___x_6228_, 7, v_ematchDiagSource_6223_);
lean_ctor_set(v___x_6228_, 8, v_symPrios_6224_);
lean_ctor_set(v___x_6228_, 9, v_extensions_6225_);
lean_ctor_set_uint8(v___x_6228_, sizeof(void*)*10, v_cheapCases_6220_);
lean_ctor_set_uint8(v___x_6228_, sizeof(void*)*10 + 1, v_reportMVarIssue_6221_);
lean_ctor_set_uint8(v___x_6228_, sizeof(void*)*10 + 2, v_debug_6226_);
lean_ctor_set_uint8(v___x_6228_, sizeof(void*)*10 + 3, v_ematchDiag_6227_);
lean_inc_ref(v_methods_6213_);
lean_inc_ref(v_sctx_6212_);
lean_inc_ref(v_toContext_6211_);
v___x_6229_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_6229_, 0, v_toContext_6211_);
lean_ctor_set(v___x_6229_, 1, v___x_6228_);
lean_ctor_set(v___x_6229_, 2, v_sctx_6212_);
lean_ctor_set(v___x_6229_, 3, v_methods_6213_);
lean_ctor_set(v___x_6229_, 4, v_a_6208_);
lean_ctor_set_uint8(v___x_6229_, sizeof(void*)*5, v_sym_6214_);
if (v_only_6163_ == 0)
{
v___y_6175_ = v_a_6208_;
v___y_6176_ = v___x_6229_;
v___y_6177_ = v___y_6200_;
v___y_6178_ = v___y_6201_;
v___y_6179_ = v___y_6202_;
v___y_6180_ = v___y_6203_;
v___y_6181_ = v___y_6204_;
v___y_6182_ = v___y_6205_;
v___y_6183_ = v___y_6206_;
goto v___jp_6174_;
}
else
{
lean_object* v___x_6230_; 
v___x_6230_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v___y_6200_, v___y_6203_, v___y_6204_, v___y_6205_, v___y_6206_);
if (lean_obj_tag(v___x_6230_) == 0)
{
lean_object* v_a_6231_; lean_object* v_toGoalState_6232_; lean_object* v_ematch_6233_; lean_object* v_mvarId_6234_; lean_object* v___x_6236_; uint8_t v_isShared_6237_; uint8_t v_isSharedCheck_6291_; 
v_a_6231_ = lean_ctor_get(v___x_6230_, 0);
lean_inc(v_a_6231_);
lean_dec_ref_known(v___x_6230_, 1);
v_toGoalState_6232_ = lean_ctor_get(v_a_6231_, 0);
lean_inc_ref(v_toGoalState_6232_);
v_ematch_6233_ = lean_ctor_get(v_toGoalState_6232_, 13);
lean_inc_ref(v_ematch_6233_);
v_mvarId_6234_ = lean_ctor_get(v_a_6231_, 1);
v_isSharedCheck_6291_ = !lean_is_exclusive(v_a_6231_);
if (v_isSharedCheck_6291_ == 0)
{
lean_object* v_unused_6292_; 
v_unused_6292_ = lean_ctor_get(v_a_6231_, 0);
lean_dec(v_unused_6292_);
v___x_6236_ = v_a_6231_;
v_isShared_6237_ = v_isSharedCheck_6291_;
goto v_resetjp_6235_;
}
else
{
lean_inc(v_mvarId_6234_);
lean_dec(v_a_6231_);
v___x_6236_ = lean_box(0);
v_isShared_6237_ = v_isSharedCheck_6291_;
goto v_resetjp_6235_;
}
v_resetjp_6235_:
{
lean_object* v_nextDeclIdx_6238_; lean_object* v_enodeMap_6239_; lean_object* v_exprs_6240_; lean_object* v_parents_6241_; lean_object* v_congrTable_6242_; lean_object* v_appMap_6243_; lean_object* v_indicesFound_6244_; lean_object* v_toProcess_6245_; lean_object* v_internalizing_6246_; uint8_t v_inconsistent_6247_; lean_object* v_nextIdx_6248_; lean_object* v_newRawFacts_6249_; lean_object* v_facts_6250_; lean_object* v_extThms_6251_; lean_object* v_inj_6252_; lean_object* v_split_6253_; lean_object* v_clean_6254_; lean_object* v_sstates_6255_; lean_object* v_gmt_6256_; lean_object* v_thms_6257_; lean_object* v_newThms_6258_; lean_object* v_numInstances_6259_; lean_object* v_numDelayedInstances_6260_; lean_object* v_num_6261_; lean_object* v_preInstances_6262_; lean_object* v_nextThmIdx_6263_; lean_object* v_matchEqNames_6264_; lean_object* v_delayedThmInsts_6265_; lean_object* v___x_6266_; lean_object* v___f_6267_; lean_object* v___x_6268_; 
v_nextDeclIdx_6238_ = lean_ctor_get(v_toGoalState_6232_, 0);
lean_inc(v_nextDeclIdx_6238_);
v_enodeMap_6239_ = lean_ctor_get(v_toGoalState_6232_, 1);
lean_inc_ref(v_enodeMap_6239_);
v_exprs_6240_ = lean_ctor_get(v_toGoalState_6232_, 2);
lean_inc_ref(v_exprs_6240_);
v_parents_6241_ = lean_ctor_get(v_toGoalState_6232_, 3);
lean_inc_ref(v_parents_6241_);
v_congrTable_6242_ = lean_ctor_get(v_toGoalState_6232_, 4);
lean_inc_ref(v_congrTable_6242_);
v_appMap_6243_ = lean_ctor_get(v_toGoalState_6232_, 5);
lean_inc_ref(v_appMap_6243_);
v_indicesFound_6244_ = lean_ctor_get(v_toGoalState_6232_, 6);
lean_inc_ref(v_indicesFound_6244_);
v_toProcess_6245_ = lean_ctor_get(v_toGoalState_6232_, 7);
lean_inc_ref(v_toProcess_6245_);
v_internalizing_6246_ = lean_ctor_get(v_toGoalState_6232_, 8);
lean_inc_ref(v_internalizing_6246_);
v_inconsistent_6247_ = lean_ctor_get_uint8(v_toGoalState_6232_, sizeof(void*)*18);
v_nextIdx_6248_ = lean_ctor_get(v_toGoalState_6232_, 9);
lean_inc(v_nextIdx_6248_);
v_newRawFacts_6249_ = lean_ctor_get(v_toGoalState_6232_, 10);
lean_inc_ref(v_newRawFacts_6249_);
v_facts_6250_ = lean_ctor_get(v_toGoalState_6232_, 11);
lean_inc_ref(v_facts_6250_);
v_extThms_6251_ = lean_ctor_get(v_toGoalState_6232_, 12);
lean_inc_ref(v_extThms_6251_);
v_inj_6252_ = lean_ctor_get(v_toGoalState_6232_, 14);
lean_inc_ref(v_inj_6252_);
v_split_6253_ = lean_ctor_get(v_toGoalState_6232_, 15);
lean_inc_ref(v_split_6253_);
v_clean_6254_ = lean_ctor_get(v_toGoalState_6232_, 16);
lean_inc_ref(v_clean_6254_);
v_sstates_6255_ = lean_ctor_get(v_toGoalState_6232_, 17);
lean_inc_ref(v_sstates_6255_);
lean_dec_ref(v_toGoalState_6232_);
v_gmt_6256_ = lean_ctor_get(v_ematch_6233_, 1);
lean_inc(v_gmt_6256_);
v_thms_6257_ = lean_ctor_get(v_ematch_6233_, 2);
lean_inc_ref(v_thms_6257_);
v_newThms_6258_ = lean_ctor_get(v_ematch_6233_, 3);
lean_inc_ref(v_newThms_6258_);
v_numInstances_6259_ = lean_ctor_get(v_ematch_6233_, 4);
lean_inc(v_numInstances_6259_);
v_numDelayedInstances_6260_ = lean_ctor_get(v_ematch_6233_, 5);
lean_inc(v_numDelayedInstances_6260_);
v_num_6261_ = lean_ctor_get(v_ematch_6233_, 6);
lean_inc(v_num_6261_);
v_preInstances_6262_ = lean_ctor_get(v_ematch_6233_, 7);
lean_inc_ref(v_preInstances_6262_);
v_nextThmIdx_6263_ = lean_ctor_get(v_ematch_6233_, 8);
lean_inc(v_nextThmIdx_6263_);
v_matchEqNames_6264_ = lean_ctor_get(v_ematch_6233_, 9);
lean_inc_ref(v_matchEqNames_6264_);
v_delayedThmInsts_6265_ = lean_ctor_get(v_ematch_6233_, 10);
lean_inc_ref(v_delayedThmInsts_6265_);
lean_dec_ref(v_ematch_6233_);
v___x_6266_ = lean_box(v_inconsistent_6247_);
v___f_6267_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_withParams___redArg___lam__0___boxed), 39, 29);
lean_closure_set(v___f_6267_, 0, v_thms_6257_);
lean_closure_set(v___f_6267_, 1, v_newThms_6258_);
lean_closure_set(v___f_6267_, 2, v_gmt_6256_);
lean_closure_set(v___f_6267_, 3, v_numInstances_6259_);
lean_closure_set(v___f_6267_, 4, v_numDelayedInstances_6260_);
lean_closure_set(v___f_6267_, 5, v_num_6261_);
lean_closure_set(v___f_6267_, 6, v_preInstances_6262_);
lean_closure_set(v___f_6267_, 7, v_nextThmIdx_6263_);
lean_closure_set(v___f_6267_, 8, v_matchEqNames_6264_);
lean_closure_set(v___f_6267_, 9, v_delayedThmInsts_6265_);
lean_closure_set(v___f_6267_, 10, v_nextDeclIdx_6238_);
lean_closure_set(v___f_6267_, 11, v_enodeMap_6239_);
lean_closure_set(v___f_6267_, 12, v_exprs_6240_);
lean_closure_set(v___f_6267_, 13, v_parents_6241_);
lean_closure_set(v___f_6267_, 14, v_congrTable_6242_);
lean_closure_set(v___f_6267_, 15, v_appMap_6243_);
lean_closure_set(v___f_6267_, 16, v_indicesFound_6244_);
lean_closure_set(v___f_6267_, 17, v_toProcess_6245_);
lean_closure_set(v___f_6267_, 18, v_internalizing_6246_);
lean_closure_set(v___f_6267_, 19, v___x_6266_);
lean_closure_set(v___f_6267_, 20, v_nextIdx_6248_);
lean_closure_set(v___f_6267_, 21, v_newRawFacts_6249_);
lean_closure_set(v___f_6267_, 22, v_facts_6250_);
lean_closure_set(v___f_6267_, 23, v_extThms_6251_);
lean_closure_set(v___f_6267_, 24, v_inj_6252_);
lean_closure_set(v___f_6267_, 25, v_split_6253_);
lean_closure_set(v___f_6267_, 26, v_clean_6254_);
lean_closure_set(v___f_6267_, 27, v_sstates_6255_);
lean_closure_set(v___f_6267_, 28, v_mvarId_6234_);
v___x_6268_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_6267_, v___x_6229_, v___y_6200_, v___y_6203_, v___y_6204_, v___y_6205_, v___y_6206_);
if (lean_obj_tag(v___x_6268_) == 0)
{
lean_object* v_a_6269_; lean_object* v___x_6270_; lean_object* v___x_6272_; 
v_a_6269_ = lean_ctor_get(v___x_6268_, 0);
lean_inc(v_a_6269_);
lean_dec_ref_known(v___x_6268_, 1);
v___x_6270_ = lean_box(0);
if (v_isShared_6237_ == 0)
{
lean_ctor_set_tag(v___x_6236_, 1);
lean_ctor_set(v___x_6236_, 1, v___x_6270_);
lean_ctor_set(v___x_6236_, 0, v_a_6269_);
v___x_6272_ = v___x_6236_;
goto v_reusejp_6271_;
}
else
{
lean_object* v_reuseFailAlloc_6282_; 
v_reuseFailAlloc_6282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6282_, 0, v_a_6269_);
lean_ctor_set(v_reuseFailAlloc_6282_, 1, v___x_6270_);
v___x_6272_ = v_reuseFailAlloc_6282_;
goto v_reusejp_6271_;
}
v_reusejp_6271_:
{
lean_object* v___x_6273_; 
v___x_6273_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(v___x_6272_, v___y_6200_, v___y_6203_, v___y_6204_, v___y_6205_, v___y_6206_);
if (lean_obj_tag(v___x_6273_) == 0)
{
lean_dec_ref_known(v___x_6273_, 1);
v___y_6175_ = v_a_6208_;
v___y_6176_ = v___x_6229_;
v___y_6177_ = v___y_6200_;
v___y_6178_ = v___y_6201_;
v___y_6179_ = v___y_6202_;
v___y_6180_ = v___y_6203_;
v___y_6181_ = v___y_6204_;
v___y_6182_ = v___y_6205_;
v___y_6183_ = v___y_6206_;
goto v___jp_6174_;
}
else
{
lean_object* v_a_6274_; lean_object* v___x_6276_; uint8_t v_isShared_6277_; uint8_t v_isSharedCheck_6281_; 
lean_dec_ref_known(v___x_6229_, 5);
lean_dec(v_a_6208_);
lean_dec_ref(v_k_6164_);
v_a_6274_ = lean_ctor_get(v___x_6273_, 0);
v_isSharedCheck_6281_ = !lean_is_exclusive(v___x_6273_);
if (v_isSharedCheck_6281_ == 0)
{
v___x_6276_ = v___x_6273_;
v_isShared_6277_ = v_isSharedCheck_6281_;
goto v_resetjp_6275_;
}
else
{
lean_inc(v_a_6274_);
lean_dec(v___x_6273_);
v___x_6276_ = lean_box(0);
v_isShared_6277_ = v_isSharedCheck_6281_;
goto v_resetjp_6275_;
}
v_resetjp_6275_:
{
lean_object* v___x_6279_; 
if (v_isShared_6277_ == 0)
{
v___x_6279_ = v___x_6276_;
goto v_reusejp_6278_;
}
else
{
lean_object* v_reuseFailAlloc_6280_; 
v_reuseFailAlloc_6280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6280_, 0, v_a_6274_);
v___x_6279_ = v_reuseFailAlloc_6280_;
goto v_reusejp_6278_;
}
v_reusejp_6278_:
{
return v___x_6279_;
}
}
}
}
}
else
{
lean_object* v_a_6283_; lean_object* v___x_6285_; uint8_t v_isShared_6286_; uint8_t v_isSharedCheck_6290_; 
lean_del_object(v___x_6236_);
lean_dec_ref_known(v___x_6229_, 5);
lean_dec(v_a_6208_);
lean_dec_ref(v_k_6164_);
v_a_6283_ = lean_ctor_get(v___x_6268_, 0);
v_isSharedCheck_6290_ = !lean_is_exclusive(v___x_6268_);
if (v_isSharedCheck_6290_ == 0)
{
v___x_6285_ = v___x_6268_;
v_isShared_6286_ = v_isSharedCheck_6290_;
goto v_resetjp_6284_;
}
else
{
lean_inc(v_a_6283_);
lean_dec(v___x_6268_);
v___x_6285_ = lean_box(0);
v_isShared_6286_ = v_isSharedCheck_6290_;
goto v_resetjp_6284_;
}
v_resetjp_6284_:
{
lean_object* v___x_6288_; 
if (v_isShared_6286_ == 0)
{
v___x_6288_ = v___x_6285_;
goto v_reusejp_6287_;
}
else
{
lean_object* v_reuseFailAlloc_6289_; 
v_reuseFailAlloc_6289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6289_, 0, v_a_6283_);
v___x_6288_ = v_reuseFailAlloc_6289_;
goto v_reusejp_6287_;
}
v_reusejp_6287_:
{
return v___x_6288_;
}
}
}
}
}
else
{
lean_object* v_a_6293_; lean_object* v___x_6295_; uint8_t v_isShared_6296_; uint8_t v_isSharedCheck_6300_; 
lean_dec_ref_known(v___x_6229_, 5);
lean_dec(v_a_6208_);
lean_dec_ref(v_k_6164_);
v_a_6293_ = lean_ctor_get(v___x_6230_, 0);
v_isSharedCheck_6300_ = !lean_is_exclusive(v___x_6230_);
if (v_isSharedCheck_6300_ == 0)
{
v___x_6295_ = v___x_6230_;
v_isShared_6296_ = v_isSharedCheck_6300_;
goto v_resetjp_6294_;
}
else
{
lean_inc(v_a_6293_);
lean_dec(v___x_6230_);
v___x_6295_ = lean_box(0);
v_isShared_6296_ = v_isSharedCheck_6300_;
goto v_resetjp_6294_;
}
v_resetjp_6294_:
{
lean_object* v___x_6298_; 
if (v_isShared_6296_ == 0)
{
v___x_6298_ = v___x_6295_;
goto v_reusejp_6297_;
}
else
{
lean_object* v_reuseFailAlloc_6299_; 
v_reuseFailAlloc_6299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6299_, 0, v_a_6293_);
v___x_6298_ = v_reuseFailAlloc_6299_;
goto v_reusejp_6297_;
}
v_reusejp_6297_:
{
return v___x_6298_;
}
}
}
}
}
else
{
lean_object* v_a_6301_; lean_object* v___x_6303_; uint8_t v_isShared_6304_; uint8_t v_isSharedCheck_6308_; 
lean_dec_ref(v_k_6164_);
v_a_6301_ = lean_ctor_get(v___x_6207_, 0);
v_isSharedCheck_6308_ = !lean_is_exclusive(v___x_6207_);
if (v_isSharedCheck_6308_ == 0)
{
v___x_6303_ = v___x_6207_;
v_isShared_6304_ = v_isSharedCheck_6308_;
goto v_resetjp_6302_;
}
else
{
lean_inc(v_a_6301_);
lean_dec(v___x_6207_);
v___x_6303_ = lean_box(0);
v_isShared_6304_ = v_isSharedCheck_6308_;
goto v_resetjp_6302_;
}
v_resetjp_6302_:
{
lean_object* v___x_6306_; 
if (v_isShared_6304_ == 0)
{
v___x_6306_ = v___x_6303_;
goto v_reusejp_6305_;
}
else
{
lean_object* v_reuseFailAlloc_6307_; 
v_reuseFailAlloc_6307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6307_, 0, v_a_6301_);
v___x_6306_ = v_reuseFailAlloc_6307_;
goto v_reusejp_6305_;
}
v_reusejp_6305_:
{
return v___x_6306_;
}
}
}
}
v___jp_6309_:
{
uint8_t v___x_6311_; 
v___x_6311_ = 1;
if (v_only_6163_ == 0)
{
v___y_6196_ = v___y_6310_;
v___y_6197_ = v___x_6311_;
v_params_6198_ = v_params_6161_;
v___y_6199_ = v_a_6165_;
v___y_6200_ = v_a_6166_;
v___y_6201_ = v_a_6167_;
v___y_6202_ = v_a_6168_;
v___y_6203_ = v_a_6169_;
v___y_6204_ = v_a_6170_;
v___y_6205_ = v_a_6171_;
v___y_6206_ = v_a_6172_;
goto v___jp_6195_;
}
else
{
lean_object* v_config_6312_; lean_object* v_extensions_6313_; lean_object* v_extra_6314_; lean_object* v_extraInj_6315_; lean_object* v_extraFacts_6316_; lean_object* v_symPrios_6317_; lean_object* v_norm_6318_; lean_object* v_normProcs_6319_; lean_object* v___x_6321_; uint8_t v_isShared_6322_; uint8_t v_isSharedCheck_6330_; 
v_config_6312_ = lean_ctor_get(v_params_6161_, 0);
v_extensions_6313_ = lean_ctor_get(v_params_6161_, 1);
v_extra_6314_ = lean_ctor_get(v_params_6161_, 2);
v_extraInj_6315_ = lean_ctor_get(v_params_6161_, 3);
v_extraFacts_6316_ = lean_ctor_get(v_params_6161_, 4);
v_symPrios_6317_ = lean_ctor_get(v_params_6161_, 5);
v_norm_6318_ = lean_ctor_get(v_params_6161_, 6);
v_normProcs_6319_ = lean_ctor_get(v_params_6161_, 7);
v_isSharedCheck_6330_ = !lean_is_exclusive(v_params_6161_);
if (v_isSharedCheck_6330_ == 0)
{
lean_object* v_unused_6331_; 
v_unused_6331_ = lean_ctor_get(v_params_6161_, 8);
lean_dec(v_unused_6331_);
v___x_6321_ = v_params_6161_;
v_isShared_6322_ = v_isSharedCheck_6330_;
goto v_resetjp_6320_;
}
else
{
lean_inc(v_normProcs_6319_);
lean_inc(v_norm_6318_);
lean_inc(v_symPrios_6317_);
lean_inc(v_extraFacts_6316_);
lean_inc(v_extraInj_6315_);
lean_inc(v_extra_6314_);
lean_inc(v_extensions_6313_);
lean_inc(v_config_6312_);
lean_dec(v_params_6161_);
v___x_6321_ = lean_box(0);
v_isShared_6322_ = v_isSharedCheck_6330_;
goto v_resetjp_6320_;
}
v_resetjp_6320_:
{
size_t v_sz_6323_; size_t v___x_6324_; lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v_params_6328_; 
v_sz_6323_ = lean_array_size(v_extensions_6313_);
v___x_6324_ = ((size_t)0ULL);
v___x_6325_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Grind_withParams_spec__0(v_sz_6323_, v___x_6324_, v_extensions_6313_);
v___x_6326_ = lean_box(0);
if (v_isShared_6322_ == 0)
{
lean_ctor_set(v___x_6321_, 8, v___x_6326_);
lean_ctor_set(v___x_6321_, 1, v___x_6325_);
v_params_6328_ = v___x_6321_;
goto v_reusejp_6327_;
}
else
{
lean_object* v_reuseFailAlloc_6329_; 
v_reuseFailAlloc_6329_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6329_, 0, v_config_6312_);
lean_ctor_set(v_reuseFailAlloc_6329_, 1, v___x_6325_);
lean_ctor_set(v_reuseFailAlloc_6329_, 2, v_extra_6314_);
lean_ctor_set(v_reuseFailAlloc_6329_, 3, v_extraInj_6315_);
lean_ctor_set(v_reuseFailAlloc_6329_, 4, v_extraFacts_6316_);
lean_ctor_set(v_reuseFailAlloc_6329_, 5, v_symPrios_6317_);
lean_ctor_set(v_reuseFailAlloc_6329_, 6, v_norm_6318_);
lean_ctor_set(v_reuseFailAlloc_6329_, 7, v_normProcs_6319_);
lean_ctor_set(v_reuseFailAlloc_6329_, 8, v___x_6326_);
v_params_6328_ = v_reuseFailAlloc_6329_;
goto v_reusejp_6327_;
}
v_reusejp_6327_:
{
v___y_6196_ = v___y_6310_;
v___y_6197_ = v___x_6311_;
v_params_6198_ = v_params_6328_;
v___y_6199_ = v_a_6165_;
v___y_6200_ = v_a_6166_;
v___y_6201_ = v_a_6167_;
v___y_6202_ = v_a_6168_;
v___y_6203_ = v_a_6169_;
v___y_6204_ = v_a_6170_;
v___y_6205_ = v_a_6171_;
v___y_6206_ = v_a_6172_;
goto v___jp_6195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___redArg___boxed(lean_object* v_params_6337_, lean_object* v_ps_6338_, lean_object* v_only_6339_, lean_object* v_k_6340_, lean_object* v_a_6341_, lean_object* v_a_6342_, lean_object* v_a_6343_, lean_object* v_a_6344_, lean_object* v_a_6345_, lean_object* v_a_6346_, lean_object* v_a_6347_, lean_object* v_a_6348_, lean_object* v_a_6349_){
_start:
{
uint8_t v_only_boxed_6350_; lean_object* v_res_6351_; 
v_only_boxed_6350_ = lean_unbox(v_only_6339_);
v_res_6351_ = l_Lean_Elab_Tactic_Grind_withParams___redArg(v_params_6337_, v_ps_6338_, v_only_boxed_6350_, v_k_6340_, v_a_6341_, v_a_6342_, v_a_6343_, v_a_6344_, v_a_6345_, v_a_6346_, v_a_6347_, v_a_6348_);
lean_dec(v_a_6348_);
lean_dec_ref(v_a_6347_);
lean_dec(v_a_6346_);
lean_dec_ref(v_a_6345_);
lean_dec(v_a_6344_);
lean_dec_ref(v_a_6343_);
lean_dec(v_a_6342_);
lean_dec_ref(v_a_6341_);
lean_dec_ref(v_ps_6338_);
return v_res_6351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams(lean_object* v_00_u03b1_6352_, lean_object* v_params_6353_, lean_object* v_ps_6354_, uint8_t v_only_6355_, lean_object* v_k_6356_, lean_object* v_a_6357_, lean_object* v_a_6358_, lean_object* v_a_6359_, lean_object* v_a_6360_, lean_object* v_a_6361_, lean_object* v_a_6362_, lean_object* v_a_6363_, lean_object* v_a_6364_){
_start:
{
lean_object* v___x_6366_; 
v___x_6366_ = l_Lean_Elab_Tactic_Grind_withParams___redArg(v_params_6353_, v_ps_6354_, v_only_6355_, v_k_6356_, v_a_6357_, v_a_6358_, v_a_6359_, v_a_6360_, v_a_6361_, v_a_6362_, v_a_6363_, v_a_6364_);
return v___x_6366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_withParams___boxed(lean_object* v_00_u03b1_6367_, lean_object* v_params_6368_, lean_object* v_ps_6369_, lean_object* v_only_6370_, lean_object* v_k_6371_, lean_object* v_a_6372_, lean_object* v_a_6373_, lean_object* v_a_6374_, lean_object* v_a_6375_, lean_object* v_a_6376_, lean_object* v_a_6377_, lean_object* v_a_6378_, lean_object* v_a_6379_, lean_object* v_a_6380_){
_start:
{
uint8_t v_only_boxed_6381_; lean_object* v_res_6382_; 
v_only_boxed_6381_ = lean_unbox(v_only_6370_);
v_res_6382_ = l_Lean_Elab_Tactic_Grind_withParams(v_00_u03b1_6367_, v_params_6368_, v_ps_6369_, v_only_boxed_6381_, v_k_6371_, v_a_6372_, v_a_6373_, v_a_6374_, v_a_6375_, v_a_6376_, v_a_6377_, v_a_6378_, v_a_6379_);
lean_dec(v_a_6379_);
lean_dec_ref(v_a_6378_);
lean_dec(v_a_6377_);
lean_dec_ref(v_a_6376_);
lean_dec(v_a_6375_);
lean_dec_ref(v_a_6374_);
lean_dec(v_a_6373_);
lean_dec_ref(v_a_6372_);
lean_dec_ref(v_ps_6369_);
return v_res_6382_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ForallProp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Anchor(uint8_t builtin);
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_Param(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ForallProp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Anchor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Param(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_Param(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_Param(builtin);
}
#ifdef __cplusplus
}
#endif
